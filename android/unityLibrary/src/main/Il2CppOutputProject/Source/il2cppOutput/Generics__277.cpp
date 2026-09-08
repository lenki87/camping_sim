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
template <typename T1>
struct GenericVirtualActionInvoker1Invoker;
template <typename T1>
struct GenericVirtualActionInvoker1Invoker<T1*>
{
	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
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
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3Invoker;
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3Invoker<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2 p2, T3* p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[3] = { p1, &p2, p3 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4Invoker;
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4Invoker<T1*, T2, T3, T4*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2 p2, T3 p3, T4* p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[4] = { p1, &p2, &p3, p4 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[3]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4Invoker<T1*, T2*, T3, T4*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2, T3 p3, T4* p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[4] = { p1, p2, &p3, p4 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[3]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceActionInvoker5Invoker;
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceActionInvoker5Invoker<T1*, T2*, T3, T4, T5*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2, T3 p3, T4 p4, T5* p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[5] = { p1, p2, &p3, &p4, p5 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[4]);
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
template <typename T1>
struct GenericInterfaceActionInvoker1Invoker;
template <typename T1>
struct GenericInterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
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
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
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

struct U3CGetPropertiesEnumerableU3Ed__4_t5E4DFDB918CED8B1BD7311A434FA7762BBD6C390;
struct Action_1_tB5D3D80BDD52AC40FDE982ADB98F46D82B14A520;
struct Action_1_tF18EC740BBE61E110C0C1270C9A2B66A1A72DBE1;
struct Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B;
struct Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505;
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99;
struct Builder_t54EFBC198D4C73BF99E3C0C240BE563AB4220952;
struct Builder_tE6B12AF8285AC765683866492A5C6FC5E4E6710C;
struct Dictionary_2_t7096FDAEA6CE93401BE4CE39471636261DB28BF5;
struct Dictionary_2_t7E2B528AFC59C90DE8916832B84A9936D8967195;
struct Dictionary_2_tD77528C78AECDC8F6DF50F36B79092A52A270629;
struct Dictionary_2_tBCCCFBCAC02A3C03E3C84D75696D4860D7444A35;
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
struct Dictionary_2_t4055F6540F36F21F9FEDAFB92D8E0089B38EBBC8;
struct Dictionary_2_tEC8B84C0B165859CC7198B04F1CF7D7E35B7D3D5;
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
struct DynamicArray_1_tFD6392EE4EAA442D167A921C9964FD9C17FDCDE0;
struct DynamicArray_1_t843ECB88E0EEDBBB658FF535E6B19186D9F69540;
struct EnumEqualityComparer_1_tBE0A26FDB9917D9CB482A0E2018093AB3394FC1A;
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9;
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC;
struct FormatFunction_1_t616362C5665618E96267910B91F413BB7F187DB5;
struct FormatFunction_1_t27428A63C7AE527D20F92ADAF4EF5C6F4D78B748;
struct Func_1_t3562516825219E4C5D56D7A5AA4DA5E7118E4032;
struct Func_1_tE7A32FE928894E3B981CAD581AC7D8ECD5CC262A;
struct Func_1_t566D4A654882E282E54CDC3A001E05486F913903;
struct Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431;
struct Func_2_t81B76467028D6BD95DE2EC625D0325AA0387285E;
struct Func_2_t74BA73845DFA0004A7F25F3773A11A75228F5277;
struct Func_2_t781E8579E9FF2D1F9E663A289445D85212CBE782;
struct Func_2_t177293B960351EA61DB44E0B100A1872A6C8DE43;
struct Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA;
struct Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354;
struct Func_2_tBBFF35F4EA206696290D8B23ED36491D37219FAF;
struct Func_2_t49E998685259ADE759F9329BF66F20DE8667006E;
struct Func_2_t8B45F86AD27A9D8326FA522C45CA74669CD4CDF9;
struct Func_2_tF410043014FD16C2F22223C6C5575F1A96738C61;
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0;
struct IComparer_1_t4483F9B9F43C7B0F8D4FEEAE12FAFDD3F9CF81FD;
struct IComparer_1_t76B18C44D8838F955CF8C0F53336D6C7006E0B53;
struct IComparer_1_t907B6C23B64794BADB9F24CF5D605493FF68A41D;
struct IDictionary_2_t4D3B65115D85F2C21975A2BBF4A23860F8BCD02F;
struct IEnumerable_1_tDA3DB14A8C53E0EFBEA9554E60CD303E733E672C;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct IEqualityComparer_1_t84CD58C3582484C691B22BB0E534C8ADD9B22966;
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
struct IEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122;
struct IIndexedCollectionPropertyBagEnumerator_1_t10A3FE79120150E0A39D2649E6366925E3E7977A;
struct IList_1_tB14A20E1521EA7C611D7F6B7991224A4DB35CA01;
struct IList_1_t52CB6A3903E389056F9959286356826FCA0FC97C;
struct IObservable_1_t6A88B15915275CE92411906C989057BD5C18C20A;
struct IObservable_1_tA29A83F0C2D67B7465AEA27D123F8F8B6514E475;
struct IObserver_1_tB2E50414C1A3C0CEF640FD6978F9D98977728E5B;
struct IObserver_1_t094BE2515872266E98A772AEA02B413105F16A8B;
struct IProperty_1_t47DF8E7CFAFA47596FCFDA6775C02B5B3C05AAE5;
struct ISignatureTypeProvider_2_t3070F0B7FC64369BFC60135B0954266AACAC228D;
struct KeyCollection_t34E9A900BDCA1CF625D2F16C3FDFEC1A70C317D1;
struct KeyCollection_tB0C0F8640AF44615705F795CFEB5D29F0BC2214B;
struct KeyCollection_tFE69AB7AE707855B810FEE6EC925A5782560FF0D;
struct KeyCollection_t95FD5642BC2C9C7777B7A737F21A78E0AFDD8AA0;
struct KeyCollection_t6844938B4E85E8FC62B6693FB9718C4747CE8514;
struct KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55;
struct Lazy_1_t75FF7FC97561B1B745A0A17BAC60C19B2C1F7C95;
struct Lazy_1_tBAA3E373F2142744F64A913EB230AA096D161A25;
struct List_1_t8C03D59AE9CBDEDECDE563570171B47DCB063CF4;
struct List_1_t3BF16D6F174CEAD80666CDEE841271670BD0CAD0;
struct List_1_t0CA3CB19410DCFCBF6D92C5A74C84FC883A36CD8;
struct List_1_t93556F5BC290149F13350CCB1F0DBFFECE376CA3;
struct List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715;
struct List_1_t592DF2E59D6E244DA0041698383484A07C7E0480;
struct List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A;
struct List_1_t7D73463EA17F4D29A37E8110AB60DAD5C80EBF65;
struct List_1_t96E9133B70FB6765E6B138E810D33E18901715DA;
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
struct List_1_tAFCDB9CCBAF11013AA7B0EC7BB51B10127AB467C;
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
struct List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F;
struct List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95;
struct List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E;
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
struct List_1_t4D72F37C69BFD609313AD0BEDFC74564509FBCB1;
struct List_1_tE6CA98E04E3B94E85D2BCDBF673C6550F7865EF4;
struct List_1_tA9133CFCF211C161818125828AEB3F0BF145615A;
struct ObjectPool_1_tDF1CBAC8F45FE7A38564D25A887E0824155AB946;
struct ObjectPool_1_t8123FF4D2297EA0DE0958F4C596EEC975EF91D69;
struct ObjectPool_1_t7DA0560ECC5DAE7E34FFF7A1C34B9DD85C9791BD;
struct ObjectPool_1_tD58E1ED886ED7E0B0E789C0540A06925FFFE3789;
struct ObjectPool_1_t6F911D0AABD1A10BC296F09B07186BDAA81C23CF;
struct ObjectPool_1_t7F354EE5339C321452CC8BDE1BBEB51C109F101F;
struct ObjectPool_1_t8F2D8ECC3F2A3F8557B78205355612D95DF19EE0;
struct ObjectPool_1_t97F13402A9436666FDB9A06B1274C59D75006F1C;
struct ObjectPool_1_t082FF340EE7F6811B66DEB049D0A8510464EF24B;
struct ObjectPool_1_t1258D5CAE21F7163A892F2AD7C928C81EBF6D0BC;
struct ObjectPool_1_t532B73346B73FED45FA938767ECF4F0837CBFF9E;
struct ObjectPool_1_t2FFDAE5CC715A6566DDF02685C09A7A6FE52F2B6;
struct ObjectPool_1_tE512FE8C23AFFAC42BE6502CB31360CBB50F5C4A;
struct ObjectPool_1_t28F249C599ED2EFD04F6B973FEFA2541B52062DF;
struct ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3;
struct PropertyBag_1_t74F4963AD6B656900B7CACFC37AC3CDDDF818409;
struct Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3;
struct ScaleHandler_t66417A37DB8038DB1928E329CD46561804CD1E51;
struct ScaleHandler_tF299C3633B02B37C22BA73E9564CE152399E99F5;
struct ScaleHandler_tA7C4E480E83D97456A12AA2A2B0907E50D14D248;
struct SecurePooledObject_1_tB41A569B91ED04D56C211BA433285BBCC8C711AC;
struct Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912;
struct Select_t49EFABABACDD2D3A4008F9A105A7B7A9A677791E;
struct Select_t82D21E9873838FB0EC6FEC7FBD4F9387FFFA614C;
struct SelectManyObservable_2_tBEFCCBF20DBB52417E0D9CD64E2B1C731985C9A8;
struct SelectObservable_2_tD40E5273D0143C897D2F3F6A2FC2B6E308DE6163;
struct SelectObservable_2_t3088BA40A393B1C6E2488B44E7931CB358FAB383;
struct SerializedDictionaryDebugView_2_t211994FF853782F3982AD0B61DF507D3C9578780;
struct SerializedDictionary_2_t16807E58D8562594E351D643B1F91C7F30C8D922;
struct SerializedDictionary_4_t8F7166B0D852B2A2BA1D977932123B6693AA86FE;
struct SetClassValueAction_t5AA8656B00AE2AC5704C34B9F7A6A1F82E0BA2F7;
struct SetElementProperty_tD32144938E8C2B3852669AF6CB12C17FAB5056C1;
struct SetPropertyBagBase_2_t9148CA09D4A212A82F0DEC9E6A8C41B7B0A1B8FF;
struct SetStructValueAction_tC6BC2CB4AB94181F81DFCD03D881295A7C134027;
struct SetValueVisitor_1_tC25918007584CEA82C8D3F2B03BB5E18A90DB5EE;
struct SetValueVisitor_1_t9F8375B4EA106BA863CE89AC21063AB486248660;
struct Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D;
struct ShaderInfoStorage_1_t32194748F3ED0F5527B4E31A28D04606FAEE539A;
struct SharedObjectPool_1_t85D963F2C906700E262E999BFA8D090DE8EECC81;
struct ShortEnumEqualityComparer_1_t93E714E73A6CDB76D15D51942E3800AB3E57DFF6;
struct SingletonMonoBehaviour_1_tBFFD0339B806174EB8B7556E79010D48B2700659;
struct UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6;
struct ValueCollection_t8064CD360288A0BC02D6AB21B713D9B040EF277E;
struct ValueCollection_t43FCFDA1C84471751E90615EC1401FE605674BA9;
struct ValueCollection_t0AE816A224A3CA47CFD4FA93CE9CDADAF2830592;
struct ValueCollection_t067B6565DAB51831954BD36DF5F65A806EDBEF99;
struct ValueCollection_t4E0FB462BEC9A4366F0BAC369EE4B344DA9AA2A6;
struct ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40;
struct EntryU5BU5D_t8F7CB41885C120DC1A1C3634ED165CD08B613346;
struct EntryU5BU5D_t9607928B2947783B0D0C2BE278DBA716C77B63DC;
struct EntryU5BU5D_tB55C47CCB6018092A7C690402291113061056A34;
struct EntryU5BU5D_t3A6696E01E2E8EE835C72A4B0C9E75120C7A122D;
struct EntryU5BU5D_t6180327901661167A9CFAF2E0892DF20507BB1AB;
struct EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3;
struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57;
struct SlotU5BU5D_t12A0B0E2B7B30A593E514A89B14D5D20B4ACAB91;
struct SlotU5BU5D_tB71D35C12A91C058A20499E93B4CE990F48FD301;
struct SlotU5BU5D_t5AE94728171C91AD34E8066CC55120BDB80D23B8;
struct SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427;
struct SlotU5BU5D_t15A614E28C19F61C3F029DFAA2127DA15F293444;
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PropertyPathPartU5BU5D_t7994D542F14DDDDEABB1792C335C20149399AEBB;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
struct VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct ProjectionInfoU5BU5D_tB2A3FA52462779A586655B2A8C9D4C520DB191DF;
struct SharedObjectPoolBaseU5BU5D_tB664988E941C3012D154EFE7562DB10E7B28F625;
struct RowU5BU5D_t325BC67027D8D4C3AB8E0375B85F72BEB5ADA376;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
struct BadImageFormatException_t7EBAEDCD74D3274D00106EC0051755C18D20E552;
struct BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2;
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct ConverterGroup_t2D7DEDAC22662EF5C020DE54231DC23CD0B5268A;
struct DebugMetadataHeader_t1310A29B76236776EBECB5CB6B6BECC3E35CA83A;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44;
struct EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85;
struct Exception_t;
struct FloatField_t79C59A8C1C4D7AF70D38FB845247FA9406440604;
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
struct Handler_t6FB851C86EF75451F6C6D94F0F5470324D915F23;
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
struct ICloneable_t5118E0179AA4A8D8B4D4A85BF3CE9BB363B88E14;
struct ICollectionPropertyBagVisitor_tD04FBC29596B15EED398387AFB40AD1D9E97353A;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5;
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
struct IPlayableBehaviour_tEE31115F3F2D4627EB55329062D152FB778E4937;
struct IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697;
struct ISetPropertyBagVisitor_t1414256EA563CF39B3B347E72D40A647EFA02264;
struct InlineStyleAccess_t5CA7877999C9442491A220AE50D605C84D09A165;
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
struct IntField_t2D5F04240B108029462BBDAD34BC6F6A995F2977;
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602;
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MetadataReader_t762E493257DEF556B7EE188A92689B643498F23F;
struct MetadataStringDecoder_tCCDD7DFDCA99920C9379DEBD9BD6BE307071BD63;
struct MethodInfo_t;
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
struct NamespaceCache_t56DBC3FC7454384FA42D4EFA4E16220FB295F105;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct PathRef_t76F7677792A14AF9D6A6EAB7F08C1A3DC2B27A55;
struct PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446;
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
struct RenderData_t1ABE116B2B5E0409AC699E195922516606531DC2;
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
struct ResolvedStyleAccess_t226CC840EBACEE31CE1139ED5F717532AFFAEB45;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct String_t;
struct StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527;
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
struct Type_t;
struct UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7;
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF;
struct Vector2Field_tDD562F80D6C008DC54DDB051695D6CAFCCAF8C6A;
struct VirtualHeap_t2F4EC50A35BF4E06CBB9F1B1632573752AF1B339;
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115;
struct VisualElementTransformData_t3DD575B5990B68FF956673EFF036171C86A38DF3;
struct VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct SharedObjectPoolBase_tAE197A0EF70B46EBFECED609BA08A8B2817876EE;
struct AreaNode_tB9A4250EFEA8C60BEDFFDA3E78F20EA6DE77DA7D;
struct EqualityComparer_tF8FCE99C5DBB2F35D74728CB65346435381CFD5B;
struct Data_t6BD087CC0FA9794D342D260035A70E365224C66E;
struct TypeData_t01D670B4E71B5571B38C7412B1E652A47D6AF66A;
struct AdditionalData_tA7EB549FE1D91AD083C7F95012F20FEE8BECCA3A;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsAssemblyU2DCSharp[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_CoreModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_PropertiesModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_UIElementsModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_Burst[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_Collections[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_InputSystem[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_RenderPipelines_Core_Runtime[];
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BadImageFormatException_t7EBAEDCD74D3274D00106EC0051755C18D20E552_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EntityHandle_t281CE29ADEC32D51B7229800FBA887489BC18CC0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICloneable_t5118E0179AA4A8D8B4D4A85BF3CE9BB363B88E14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImmutableArray_1_tF74A2108C98B37B14FB980028B68A7BB4931CA80_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImmutableArray_tED520C4BBA5449AF0B7A43F61250ED55233BF648_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderGraphObjectPool_t2F5488D55D836B54B6E85D2952105BA61AEE6437_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SR_t16A5FFF876D63D6E3093E6B7109AF6739D858B10_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SignatureKind_t3B913B08977D1894CF5EEF09B84C53C5FBC5E02F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIRUtility_tBBCA94052EAE57F0A59876553C582FFCF52E706C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral022C931A54D8DC033474CEA6A68B4DBC2340D8A5;
IL2CPP_EXTERN_C String_t* _stringLiteral0A1181D753D38A02DC44BD6DADB2AB0E89C2A576;
IL2CPP_EXTERN_C String_t* _stringLiteral1E9918A305DD44C6C5253BF7305AB7758C686BB5;
IL2CPP_EXTERN_C String_t* _stringLiteral358A3678217D3CE720F0C294149170B975E33338;
IL2CPP_EXTERN_C String_t* _stringLiteral4F7779D7284080B28F7A5CF5A87C438CBA6F6F9F;
IL2CPP_EXTERN_C String_t* _stringLiteral67A259F304E2092F70DB1D23B44E7E844A4A8365;
IL2CPP_EXTERN_C String_t* _stringLiteralB75AD9CF9598ACFDE59B2C30F9C088335115C2B9;
IL2CPP_EXTERN_C String_t* _stringLiteralDEFEAF60D63CD5C2DACE1D221238855E1052756F;
IL2CPP_EXTERN_C const RuntimeMethod* BaseShaderInfoStorage_get_disposed_mAF7F54A791E6AF75BF1AD71B1DDA85099BFCE1EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Builder_Add_m30B16040989F9CB91EBD975864D5BA2C2379C05D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Builder_MoveToImmutable_mAA17DB184EAA2547FEC1F00BC9F54EB7243765E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DynamicArray_1_Add_mB5A4743E640E5317B6099F17F158EA7AD33A4965_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImmutableArray_CreateBuilder_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD878A2993FC4105E0D33A7FB48916AA8EB093C9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Mathf_IsPowerOfTwo_m58172AEBE272F53FD34CC10641057847181E960A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Playable_GetHandle_m39356D23E849DC5428B262092657662C064E04F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Playable__ctor_mD2EB35E024816AEED68795D0124EAB30E05BF6C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RectInt__ctor_m6E8B3A6C7EE11257A6B438E36274116FE39B5B42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RectInt_get_x_mA1E7EF6DEAD2E900D7D56B7A3957C05081EBA9CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RectInt_get_y_m440422264E6FCAA91E01F81486A78037AC29D878_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SignatureHeader_get_RawValue_mA36B442B154FA437C545C12F29F4B0E6F39AD744_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIRAtlasAllocator_get_physicalHeight_m736C92B2C509CE66BAFFBA87110103BBC72DBD88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIRAtlasAllocator_get_physicalWidth_m0B06147154436A555CEABB9C9EB319D7D33A5398_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ICloneable_t5118E0179AA4A8D8B4D4A85BF3CE9BB363B88E14_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IPlayableBehaviour_tEE31115F3F2D4627EB55329062D152FB778E4937_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32U2A_t49A648948B5A176D1945F61EB07A64274F3A9D47_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NativeArray_1_t6E2931CC2E1AA6B9F666FF4270BD177E2114779B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NativeList_1_t0DD56C6A6FBCF305924DF0100D2E13E4858CF74E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ObjectPool_1_t6568D3E8B246E33BDECAEAB6801BDB4C954A4E70_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ScriptPlayable_1_t1DE5CFA5D13CA487B2CFE443BD6C9954EA4D19D8_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SegmentSortMerge_t460B67CD52F079BDF8B1BACBC6E46F1868DDACE8_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SegmentSortMerge_tEED6FED4B71D9A65999B06647830199FF2BF3412_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SegmentSort_tA3020425F0298CED0962FA131D94F0DE13A41A9F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SegmentSort_tAFAD6BC0FF4D28AACA19C20D850116D7C4DD3127_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SelectManyObservable_2_t1A6988E66E9B00CAA4106AAE1A91EDF65CE8F41D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SelectObservable_2_tD9CB9CE41B927937E04DEEFFE9ADECD201EC80CE_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Select_t381ECE3B80BCBD582EFA8967879A467BAC41DA64_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Select_tCABD89FB949979A6EDD02AC93CFEDD3D7B3A7899_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SelectorWorkItem_t56CFA6924FE759A80AA856D558E890B6BB532B26_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SerializedDictionaryDebugView_2_t5AC3E4D54732FC2544F3F80E4FCF66A0F1CE7E96_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SerializedDictionary_2_t11683BE25BB93BE0CF8F2B8F45A9D61E73B4F245_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SerializedDictionary_4_t3B6CF5A51EF9956EC8B429CC5FD4BC86823A7EEB_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SetElementProperty_t06D2CFA124558B117802096670BDDDA72B4ACA12_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SetPropertyBagBase_2_t411EA54CEB6C2F1A946D1000CBEE55A826789D07_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SetValueVisitor_1_t24E27AE939174CE9B22764E704FE0D8F62A37D6C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SetValueVisitor_1_t7B6E29A87BAD87191D12E1587F0A0BF25686C6E8_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ShaderInfoStorage_1_t24230BF357976EE1D8EACEDB01C71C4EA152FBA3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SharedObjectPoolBase_tAE197A0EF70B46EBFECED609BA08A8B2817876EE_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SharedObjectPool_1_t7FC414C922DA73D0CABAAE4F9DC7B31FDF4F598A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SharedStatic_1_t639551B809BFEAD59750B5CE2BDEFFC7373E613F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SharedStatic_1_t6F461F0F49C63663BA5309A8B8620793444CB086_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UnsafeList_1_t098D123ECC7F884EDDA7751485B9FBE450B8C9D7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* VoidU2A_t104EAEFBD2D237A8C29618913DA9B4D99355E965_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke;

struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57;
struct SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427;
struct SlotU5BU5D_t15A614E28C19F61C3F029DFAA2127DA15F293444;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CU3Ec_t70E4481760FD8CDB56E0CFC8FAAAED784DF37A41  : public RuntimeObject
{
};
struct U3CU3Ec_tF0DAF66EF18C3AF8537EE02031C33F44B67DECC1  : public RuntimeObject
{
};
struct U3CU3Ec_t8A075936C510C026D2F32683D9D8B324AB3328DE  : public RuntimeObject
{
};
struct U3CGetPropertiesEnumerableU3Ed__4_t5E4DFDB918CED8B1BD7311A434FA7762BBD6C390 : public RuntimeObject {};
struct Builder_t54EFBC198D4C73BF99E3C0C240BE563AB4220952  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____elements;
	int32_t ____count;
};
struct Builder_tE6B12AF8285AC765683866492A5C6FC5E4E6710C  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____elements;
	int32_t ____count;
};
struct Dictionary_2_tD98CF7FCD1E01BFE3AD17FB5E77686CDE272D322  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t8F7CB41885C120DC1A1C3634ED165CD08B613346* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t34E9A900BDCA1CF625D2F16C3FDFEC1A70C317D1* ____keys;
	ValueCollection_t8064CD360288A0BC02D6AB21B713D9B040EF277E* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t9882342595B1A80B42488DF29972840BE74365C2  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t9607928B2947783B0D0C2BE278DBA716C77B63DC* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tB0C0F8640AF44615705F795CFEB5D29F0BC2214B* ____keys;
	ValueCollection_t43FCFDA1C84471751E90615EC1401FE605674BA9* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tD019675AC355FFD5CFAA96928550B683BD47BD19  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tB55C47CCB6018092A7C690402291113061056A34* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tFE69AB7AE707855B810FEE6EC925A5782560FF0D* ____keys;
	ValueCollection_t0AE816A224A3CA47CFD4FA93CE9CDADAF2830592* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t3A6696E01E2E8EE835C72A4B0C9E75120C7A122D* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t95FD5642BC2C9C7777B7A737F21A78E0AFDD8AA0* ____keys;
	ValueCollection_t067B6565DAB51831954BD36DF5F65A806EDBEF99* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t3710F63387FFDE3DB34EE1BA1D878781E75CEFCA  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t6180327901661167A9CFAF2E0892DF20507BB1AB* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t6844938B4E85E8FC62B6693FB9718C4747CE8514* ____keys;
	ValueCollection_t4E0FB462BEC9A4366F0BAC369EE4B344DA9AA2A6* ____values;
	RuntimeObject* ____syncRoot;
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
struct DynamicArray_1_t843ECB88E0EEDBBB658FF535E6B19186D9F69540  : public RuntimeObject
{
	SharedObjectPoolBaseU5BU5D_tB664988E941C3012D154EFE7562DB10E7B28F625* ___m_Array;
	int32_t ___U3CsizeU3Ek__BackingField;
	int32_t ___U3CversionU3Ek__BackingField;
};
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9  : public RuntimeObject
{
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC  : public RuntimeObject
{
};
struct Lazy_1_t75FF7FC97561B1B745A0A17BAC60C19B2C1F7C95  : public RuntimeObject
{
	LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602* ____state;
	Func_1_t566D4A654882E282E54CDC3A001E05486F913903* ____factory;
	Il2CppSharedGenericObject* ____value;
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
struct ObjectPool_1_t28F249C599ED2EFD04F6B973FEFA2541B52062DF  : public RuntimeObject
{
	List_1_t0CA3CB19410DCFCBF6D92C5A74C84FC883A36CD8* ___m_List;
	Func_1_tE7A32FE928894E3B981CAD581AC7D8ECD5CC262A* ___m_CreateFunc;
	Action_1_tF18EC740BBE61E110C0C1270C9A2B66A1A72DBE1* ___m_ActionOnGet;
	Action_1_tF18EC740BBE61E110C0C1270C9A2B66A1A72DBE1* ___m_ActionOnRelease;
	Action_1_tF18EC740BBE61E110C0C1270C9A2B66A1A72DBE1* ___m_ActionOnDestroy;
	int32_t ___m_MaxSize;
	bool ___m_CollectionCheck;
	SetValueVisitor_1_t9F8375B4EA106BA863CE89AC21063AB486248660* ___m_FreshlyReleased;
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
struct Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct SecureObjectPool_2_tC2C34D6B1AD85C98F494E3C64BE77AE71AB1B341  : public RuntimeObject
{
};
struct SecureObjectPool_2_t80AFCDD1CCFF204C074D986C669DDA928C957573  : public RuntimeObject
{
};
struct SecureObjectPool_2_tC3342B741FF11108155C5F0BB440945A082B5505  : public RuntimeObject
{
};
struct SecureObjectPool_2_t88F45DAD5A1E6D8778E737107B87EB51B07CB523  : public RuntimeObject
{
};
struct SecureObjectPool_2_t3C3BAA6AF4685336CCB14AA3E00EA0A1B3FF1486  : public RuntimeObject
{
};
struct SecureObjectPool_2_tD249C1105DEF44AAF1983EA4B207C4F8F36028BB  : public RuntimeObject
{
};
struct SecureObjectPool_2_tF513636C17143D63EE005E91BCAD2350022B432A  : public RuntimeObject
{
};
struct SecureObjectPool_2_t6FC76F2E4C578053352CFA2A2A618E7E4A529685  : public RuntimeObject
{
};
struct SecurePooledObject_1_tB41A569B91ED04D56C211BA433285BBCC8C711AC : public RuntimeObject {};
struct Select_t7A8914BA74161173A213E2DCA215787132942F58  : public RuntimeObject
{
	SelectObservable_2_tD40E5273D0143C897D2F3F6A2FC2B6E308DE6163* ___m_Observable;
	RuntimeObject* ___m_Observer;
};
struct Select_t49EFABABACDD2D3A4008F9A105A7B7A9A677791E  : public RuntimeObject
{
	SelectManyObservable_2_tBEFCCBF20DBB52417E0D9CD64E2B1C731985C9A8* ___m_Observable;
	RuntimeObject* ___m_Observer;
};
struct Select_t82D21E9873838FB0EC6FEC7FBD4F9387FFFA614C  : public RuntimeObject
{
	SelectObservable_2_t3088BA40A393B1C6E2488B44E7931CB358FAB383* ___m_Observable;
	RuntimeObject* ___m_Observer;
};
struct SelectManyObservable_2_tBEFCCBF20DBB52417E0D9CD64E2B1C731985C9A8  : public RuntimeObject
{
	RuntimeObject* ___m_Source;
	Func_2_tF410043014FD16C2F22223C6C5575F1A96738C61* ___m_Filter;
};
struct SelectObservable_2_tD40E5273D0143C897D2F3F6A2FC2B6E308DE6163  : public RuntimeObject
{
	RuntimeObject* ___m_Source;
	Func_2_t177293B960351EA61DB44E0B100A1872A6C8DE43* ___m_Filter;
};
struct SelectObservable_2_t3088BA40A393B1C6E2488B44E7931CB358FAB383  : public RuntimeObject
{
	RuntimeObject* ___m_Source;
	Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___m_Filter;
};
struct SerializedDictionaryDebugView_2_t211994FF853782F3982AD0B61DF507D3C9578780  : public RuntimeObject
{
	RuntimeObject* ___dict;
};
struct Set_1_tCA6FDE67D0311D89FB0BE39F3CF32426F6F8C09F  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___buckets;
	SlotU5BU5D_t12A0B0E2B7B30A593E514A89B14D5D20B4ACAB91* ___slots;
	int32_t ___count;
	int32_t ___freeList;
	RuntimeObject* ___comparer;
};
struct Set_1_tB46E3A6F4E7DA00E45D2B9188BA0F635164039AF  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___buckets;
	SlotU5BU5D_tB71D35C12A91C058A20499E93B4CE990F48FD301* ___slots;
	int32_t ___count;
	int32_t ___freeList;
	RuntimeObject* ___comparer;
};
struct Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___buckets;
	SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427* ___slots;
	int32_t ___count;
	int32_t ___freeList;
	RuntimeObject* ___comparer;
};
struct BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2  : public RuntimeObject
{
	bool ___U3CdisposedU3Ek__BackingField;
};
struct CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4  : public RuntimeObject
{
	bool ___isIMGUIContainer;
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* ___m_CallbackRegistry;
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
struct UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7  : public RuntimeObject
{
	int32_t ___U3CmaxAtlasSizeU3Ek__BackingField;
	int32_t ___U3CmaxImageWidthU3Ek__BackingField;
	int32_t ___U3CmaxImageHeightU3Ek__BackingField;
	int32_t ___U3CvirtualWidthU3Ek__BackingField;
	int32_t ___U3CvirtualHeightU3Ek__BackingField;
	int32_t ___U3CphysicalWidthU3Ek__BackingField;
	int32_t ___U3CphysicalHeightU3Ek__BackingField;
	AreaNode_tB9A4250EFEA8C60BEDFFDA3E78F20EA6DE77DA7D* ___m_FirstUnpartitionedArea;
	RowU5BU5D_t325BC67027D8D4C3AB8E0375B85F72BEB5ADA376* ___m_OpenRows;
	int32_t ___m_1SidePadding;
	int32_t ___m_2SidePadding;
	bool ___U3CdisposedU3Ek__BackingField;
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
struct SharedObjectPoolBase_tAE197A0EF70B46EBFECED609BA08A8B2817876EE  : public RuntimeObject
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
struct EnumEqualityComparer_1_tBE0A26FDB9917D9CB482A0E2018093AB3394FC1A  : public EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9
{
};
struct ImmutableArray_1_tF74A2108C98B37B14FB980028B68A7BB4931CA80 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___array;
};
struct ImmutableArray_1_tEFAC466EB11A36BFA8CDBFFD33F22584323FD55B 
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___array;
};
typedef Il2CppFullySharedGenericStruct IndexedCollectionPropertyBagEnumerable_1_t2B3DE6D978823100869CD2618FBDF5807E3B997E;
typedef Il2CppFullySharedGenericStruct KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669;
struct NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 
{
	UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* ___m_ListData;
};
typedef Il2CppFullySharedGenericStruct SegmentSort_tFC9B424627D4B0067FF3CC4718431C1A8F57DDE7;
typedef Il2CppFullySharedGenericStruct SegmentSortMerge_t7F8682B81EA201C79A53AD5EAF006B5F8615A74B;
struct SerializedDictionary_4_t2B6C64E49E8A995A5E976C98ECAFDD061B711ECD  : public Dictionary_2_tD98CF7FCD1E01BFE3AD17FB5E77686CDE272D322
{
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___m_Keys;
	List_1_t4D72F37C69BFD609313AD0BEDFC74564509FBCB1* ___m_Values;
};
struct SerializedDictionary_4_tC256D83B2910A8F3FAFB669D5E7C565371FBA3DD  : public Dictionary_2_t9882342595B1A80B42488DF29972840BE74365C2
{
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___m_Keys;
	List_1_tE6CA98E04E3B94E85D2BCDBF673C6550F7865EF4* ___m_Values;
};
struct SerializedDictionary_4_tCED57026752530AC7337B5B96C70851DEECB46BF  : public Dictionary_2_tD019675AC355FFD5CFAA96928550B683BD47BD19
{
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___m_Keys;
	List_1_tA9133CFCF211C161818125828AEB3F0BF145615A* ___m_Values;
};
struct SerializedDictionary_4_tC0EACD49E3F4798C679FA90FB8482842B1BC7165  : public Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C
{
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___m_Keys;
	List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* ___m_Values;
};
struct SerializedDictionary_4_t715C20D66DF38FF00EDE159B29E546F292FE634B  : public Dictionary_2_t3710F63387FFDE3DB34EE1BA1D878781E75CEFCA
{
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___m_Keys;
	List_1_t7D73463EA17F4D29A37E8110AB60DAD5C80EBF65* ___m_Values;
};
struct SerializedDictionary_4_t8F7166B0D852B2A2BA1D977932123B6693AA86FE  : public Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E
{
	List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___m_Keys;
	List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___m_Values;
};
struct SetElementProperty_tD32144938E8C2B3852669AF6CB12C17FAB5056C1 : public Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3 {};
struct SharedObjectPool_1_t85D963F2C906700E262E999BFA8D090DE8EECC81  : public SharedObjectPoolBase_tAE197A0EF70B46EBFECED609BA08A8B2817876EE
{
};
struct SharedStatic_1_t33583FDAFE4C36D5BA68FE6F5444170BB42F98C0 
{
	void* ____buffer;
};
struct SharedStatic_1_t965CBE4F8A30F785649BF3D97C277D0927858D08 
{
	void* ____buffer;
};
struct SharedStatic_1_t129696039C3927DC9D39A2FADEBB24D67B1CD74E 
{
	void* ____buffer;
};
struct SharedStatic_1_t91D24BF9DAB0EDD81AA3013F2C4CBD0A98040667 
{
	void* ____buffer;
};
struct SharedStatic_1_t0A9894CA2483CA9491C550F8D66FBA5213718E9F 
{
	void* ____buffer;
};
struct SharedStatic_1_t93EB5AFD7E0C5BF92AC0053F6F64C16421DCA08C 
{
	void* ____buffer;
};
struct SharedStatic_1_tEC288BA1490E7E3B6CCCDA9CAEEFA976D2B49CF3 
{
	void* ____buffer;
};
struct SharedStatic_1_t4FCF4588C706197A62B7B4C4DFA65B0457AB498C 
{
	void* ____buffer;
};
typedef Il2CppFullySharedGenericStruct SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A;
struct SliderMark_1_t1D8A4862D90BABB88D212F6E83153CFCCD0873E6 
{
	int32_t ___value;
	String_t* ___label;
};
struct SliderMark_1_t431B2CFD5EB9DF7C620FD6481AB6E48FC39E5A83 
{
	float ___value;
	String_t* ___label;
};
typedef Il2CppFullySharedGenericStruct SliderMark_1_t7710E8835F23A9A89B5203C348C7F6DAF43D2AC4;
typedef Il2CppFullySharedGenericStruct Slot_tF45120D6701798B3D99EA6E4D4BD09B970E2242B;
typedef Il2CppFullySharedGenericStruct Slot_t15722483BF8D3D9AE95C0F301EAB5E41F7E1E2B9;
struct AssemblyDefinitionHandle_t29D4D4DC6F0E100EC405E07DB180B0C805EB614B 
{
	int32_t ____rowId;
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
struct ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426 
{
	Dictionary_2_tD77528C78AECDC8F6DF50F36B79092A52A270629* ___m_Converters;
	Dictionary_2_t7E2B528AFC59C90DE8916832B84A9936D8967195* ___m_LazyConverters;
};
struct ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_marshaled_pinvoke
{
	Dictionary_2_tD77528C78AECDC8F6DF50F36B79092A52A270629* ___m_Converters;
	Dictionary_2_t7E2B528AFC59C90DE8916832B84A9936D8967195* ___m_LazyConverters;
};
struct ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_marshaled_com
{
	Dictionary_2_tD77528C78AECDC8F6DF50F36B79092A52A270629* ___m_Converters;
	Dictionary_2_t7E2B528AFC59C90DE8916832B84A9936D8967195* ___m_LazyConverters;
};
struct EntityHandle_t281CE29ADEC32D51B7229800FBA887489BC18CC0 
{
	uint32_t ____vToken;
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
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
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
struct MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 
{
	uint8_t* ___Pointer;
	int32_t ___Length;
};
struct ModuleDefinitionHandle_tAE2108E03A84677F870114E3F58BE992E142B078 
{
	int32_t ____rowId;
};
#pragma pack(push, tp, 1)
struct PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					char ___Head_OffsetPadding[128];
					int32_t ___Head;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___Head_OffsetPadding_forAlignmentOnly[128];
					int32_t ___Head_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___Tail_OffsetPadding[256];
					int32_t ___Tail;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___Tail_OffsetPadding_forAlignmentOnly[256];
					int32_t ___Tail_forAlignmentOnly;
				};
			};
		};
		uint8_t PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8__padding[384];
	};
};
#pragma pack(pop, tp)
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
struct SignatureHeader_t844A1279E334F68A651EB766BC960396B8362ECC 
{
	uint8_t ____rawValue;
};
struct SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675 
{
	int32_t ____count;
};
struct TypeDefinitionHandle_tE85E143F0FED1313BA132EB2151B5FC04F00043B 
{
	int32_t ____rowId;
};
struct TypeReferenceHandle_t587011B8BCE944E9B8A30001B04AA0FE74A88D68 
{
	int32_t ____rowId;
};
struct TypeSpecificationHandle_t96CB2CFC648A9F2A8C49CC28B0B4ABCE240FFA49 
{
	int32_t ____rowId;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
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
typedef Il2CppFullySharedGenericStruct Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1;
struct EnumeratorType_t213060DC702D8C5D779B12D7E6CE6AFC2D7BB6CA 
{
	int32_t ___value__;
};
typedef Il2CppFullySharedGenericStruct MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB;
struct Optional_1_tBBBF23375D7D33E286E8D0D789DB5F2437EAE81D 
{
	bool ___isSet;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value;
};
struct ScrollDirection_t43D6F2589DBA5082E97C9C4BB9034898AACD22FE 
{
	int32_t ___value__;
};
struct Segment_t2A9C0D7709499307B42BBDEB9DBCC1F4D12E7D10  : public RuntimeObject
{
	SlotU5BU5D_t5AE94728171C91AD34E8066CC55120BDB80D23B8* ____slots;
	int32_t ____slotsMask;
	PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8 ____headAndTail;
	bool ____preservedForObservation;
	bool ____frozenForEnqueues;
	Segment_t2A9C0D7709499307B42BBDEB9DBCC1F4D12E7D10* ____nextSegment;
};
struct Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912  : public RuntimeObject
{
	SlotU5BU5D_t15A614E28C19F61C3F029DFAA2127DA15F293444* ____slots;
	int32_t ____slotsMask;
	PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8 ____headAndTail;
	bool ____preservedForObservation;
	bool ____frozenForEnqueues;
	Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* ____nextSegment;
};
struct SegmentSort_tE56792C563A7271D5083D5DB4768DCD86B9E38E8 
{
	int32_t* ___Data;
	DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 ___Comp;
	int32_t ___Length;
	int32_t ___SegmentWidth;
};
struct SegmentSort_tE706F321238F531A94EC70345895E428F198E330 
{
	uint64_t* ___Data;
	DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 ___Comp;
	int32_t ___Length;
	int32_t ___SegmentWidth;
};
typedef Il2CppFullySharedGenericStruct SegmentSort_t77C08041BA5AEB4123630C4F2B1E3931CA05E8EB;
struct SegmentSortMerge_t160AB9A147325BBCD9FD17052EA70C51F2678ADE 
{
	int32_t* ___Data;
	DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 ___Comp;
	int32_t ___Length;
	int32_t ___SegmentWidth;
};
struct SegmentSortMerge_tB9736558BD8355CACCA9D69EB3DD13CF2EEC5148 
{
	uint64_t* ___Data;
	DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 ___Comp;
	int32_t ___Length;
	int32_t ___SegmentWidth;
};
typedef Il2CppFullySharedGenericStruct SegmentSortMerge_tF039AAEBE13FCFD17842E252416205B44F704642;
struct SerializedDictionary_2_t699D36E06853D053D033F8E4C05E4F8E57E23A78  : public SerializedDictionary_4_t2B6C64E49E8A995A5E976C98ECAFDD061B711ECD
{
};
struct SerializedDictionary_2_t7CD0915B6E17B617A66EC145681C34C594E413C8  : public SerializedDictionary_4_tC256D83B2910A8F3FAFB669D5E7C565371FBA3DD
{
};
struct SerializedDictionary_2_tCE29CE8FAB702E3B0ED649754B000DDFBCC83DFB  : public SerializedDictionary_4_tCED57026752530AC7337B5B96C70851DEECB46BF
{
};
struct SerializedDictionary_2_t72F164AF973CB24F9CCD766CBA10606D60B8541D  : public SerializedDictionary_4_tC0EACD49E3F4798C679FA90FB8482842B1BC7165
{
};
struct SerializedDictionary_2_tB904A5F399BBAD3D1E26499E69948994CCBAC129  : public SerializedDictionary_4_t715C20D66DF38FF00EDE159B29E546F292FE634B
{
};
struct SerializedDictionary_2_t16807E58D8562594E351D643B1F91C7F30C8D922  : public SerializedDictionary_4_t8F7166B0D852B2A2BA1D977932123B6693AA86FE
{
};
struct ShortEnumEqualityComparer_1_t93E714E73A6CDB76D15D51942E3800AB3E57DFF6  : public EnumEqualityComparer_1_tBE0A26FDB9917D9CB482A0E2018093AB3394FC1A
{
};
struct SliderKey_tC8D50DD15F8F0FE24E8A426F1BFF6DD402C48A36 
{
	int32_t ___value__;
};
struct SliderKey_t43E96838E1E854487D7A7516094E7659C6054D1C 
{
	int32_t ___value__;
};
struct SliderKey_t6D2D477078D3F87B046A5089EC099225FE23C471 
{
	int32_t ___value__;
};
struct SliderKey_t50E90577048B339A992940C01D208901E524828B 
{
	int32_t ___value__;
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
struct ArrayShape_t7A27884A54299087906DAD948BD1E92C8941B714 
{
	int32_t ___U3CRankU3Ek__BackingField;
	ImmutableArray_1_tF74A2108C98B37B14FB980028B68A7BB4931CA80 ___U3CSizesU3Ek__BackingField;
	ImmutableArray_1_tF74A2108C98B37B14FB980028B68A7BB4931CA80 ___U3CLowerBoundsU3Ek__BackingField;
};
struct ArrayShape_t7A27884A54299087906DAD948BD1E92C8941B714_marshaled_pinvoke
{
	int32_t ___U3CRankU3Ek__BackingField;
	ImmutableArray_1_tF74A2108C98B37B14FB980028B68A7BB4931CA80 ___U3CSizesU3Ek__BackingField;
	ImmutableArray_1_tF74A2108C98B37B14FB980028B68A7BB4931CA80 ___U3CLowerBoundsU3Ek__BackingField;
};
struct ArrayShape_t7A27884A54299087906DAD948BD1E92C8941B714_marshaled_com
{
	int32_t ___U3CRankU3Ek__BackingField;
	ImmutableArray_1_tF74A2108C98B37B14FB980028B68A7BB4931CA80 ___U3CSizesU3Ek__BackingField;
	ImmutableArray_1_tF74A2108C98B37B14FB980028B68A7BB4931CA80 ___U3CLowerBoundsU3Ek__BackingField;
};
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
struct BorderStyle_t3322FB9BD12AB53BB75E90835092D1E405198011 
{
	int32_t ___value__;
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
struct ConverterGroup_t2D7DEDAC22662EF5C020DE54231DC23CD0B5268A  : public RuntimeObject
{
	String_t* ___U3CidU3Ek__BackingField;
	String_t* ___U3CdisplayNameU3Ek__BackingField;
	String_t* ___U3CdescriptionU3Ek__BackingField;
	ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426 ___m_Registry;
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
struct Dir_tFE4CDBFE7A0F9B03060F0EED435079EEBB769BAF 
{
	int32_t ___value__;
};
struct Direction_t7EB108B5086E69790833C3E0B1BA05E847CF7FA8 
{
	int32_t ___value__;
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
struct FilterMode_t4AD57F1A3FE272D650E0E688BA044AE872BD2A34 
{
	int32_t ___value__;
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
struct HandleKind_t15A881B997588EF4002092B8FF7B080692D55236 
{
	uint8_t ___value__;
};
struct HideFlags_tC514182ACEFD3B847988C45D5DB812FF6DB1BF4A 
{
	int32_t ___value__;
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
struct InstantiationKind_t9B77929786BCA193B4A916F2F25793598CF0DF7D 
{
	int32_t ___value__;
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
struct LanguageDirection_t30A3B6BBCEE6A6F57641E4E008E0DCC40603558C 
{
	int32_t ___value__;
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
struct PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E 
{
	intptr_t ___m_Handle;
	uint32_t ___m_Version;
};
struct PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 
{
	intptr_t ___m_Handle;
	uint32_t ___m_Version;
};
struct PrimitiveTypeCode_tF124F95E8F51E8303CA8BA2C300E75AAFD90DABC 
{
	uint8_t ___value__;
};
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	intptr_t ___m_Ptr;
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
struct SignatureKind_t3B913B08977D1894CF5EEF09B84C53C5FBC5E02F 
{
	uint8_t ___value__;
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
struct StreamingContextStates_t5EE358E619B251608A9327618C7BFE8638FC33C1 
{
	int32_t ___value__;
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
struct TextureFormat_t87A73E4A3850D3410DC211676FC14B94226C1C1D 
{
	int32_t ___value__;
};
struct TrackDisplayType_t6CEF00929E8CE48387477557BE23333DD0F33431 
{
	int32_t ___value__;
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
struct ValueDisplayMode_t3C1105F1FD82B0FC1EF4E44223AC91FF57FD92E8 
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
struct Passes_t07F0D19E37816EDD99646E6E7E9AB0002CCD0E77 
{
	int32_t ___value__;
};
struct OrderedSelectorType_t49DF99E203DFB48B847915806D99D3DB0E1AA50B 
{
	int32_t ___value__;
};
struct NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D 
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
struct PropertyBag_1_t74F4963AD6B656900B7CACFC37AC3CDDDF818409  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
typedef Il2CppFullySharedGenericStruct PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D;
struct ScriptPlayable_1_tFFC52EF77DAC16F087A5AE6C46A136BF12D0B7DF 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle;
};
struct SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474 
{
	int32_t ___type;
	String_t* ___input;
};
#ifndef SelectorWorkItem_t56CFA6924FE759A80AA856D558E890B6BB532B26_marshaled_pinvoke_define
#define SelectorWorkItem_t56CFA6924FE759A80AA856D558E890B6BB532B26_marshaled_pinvoke_define
struct SelectorWorkItem_t56CFA6924FE759A80AA856D558E890B6BB532B26_marshaled_pinvoke
{
	int32_t ___type;
	char* ___input;
};
#endif
#ifndef SelectorWorkItem_t56CFA6924FE759A80AA856D558E890B6BB532B26_marshaled_com_define
#define SelectorWorkItem_t56CFA6924FE759A80AA856D558E890B6BB532B26_marshaled_com_define
struct SelectorWorkItem_t56CFA6924FE759A80AA856D558E890B6BB532B26_marshaled_com
{
	int32_t ___type;
	Il2CppChar* ___input;
};
#endif
struct SelectorWorkItem_tBC8638E7E2C3AF1A8C278D2DC1110CB940916E04 
{
	int32_t ___type;
	String_t* ___input;
};
#ifndef SelectorWorkItem_t56CFA6924FE759A80AA856D558E890B6BB532B26_marshaled_pinvoke_define
#define SelectorWorkItem_t56CFA6924FE759A80AA856D558E890B6BB532B26_marshaled_pinvoke_define
struct SelectorWorkItem_t56CFA6924FE759A80AA856D558E890B6BB532B26_marshaled_pinvoke
{
	int32_t ___type;
	char* ___input;
};
#endif
#ifndef SelectorWorkItem_t56CFA6924FE759A80AA856D558E890B6BB532B26_marshaled_com_define
#define SelectorWorkItem_t56CFA6924FE759A80AA856D558E890B6BB532B26_marshaled_com_define
struct SelectorWorkItem_t56CFA6924FE759A80AA856D558E890B6BB532B26_marshaled_com
{
	int32_t ___type;
	Il2CppChar* ___input;
};
#endif
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
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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
struct Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle;
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
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
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
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct Action_1_tB5D3D80BDD52AC40FDE982ADB98F46D82B14A520  : public MulticastDelegate_t
{
};
struct Action_1_tF18EC740BBE61E110C0C1270C9A2B66A1A72DBE1  : public MulticastDelegate_t
{
};
struct Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505  : public MulticastDelegate_t
{
};
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99  : public MulticastDelegate_t
{
};
struct Func_1_t3562516825219E4C5D56D7A5AA4DA5E7118E4032  : public MulticastDelegate_t
{
};
struct Func_1_tE7A32FE928894E3B981CAD581AC7D8ECD5CC262A  : public MulticastDelegate_t
{
};
struct Func_1_t566D4A654882E282E54CDC3A001E05486F913903  : public MulticastDelegate_t
{
};
struct Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431  : public MulticastDelegate_t
{
};
struct Func_2_t781E8579E9FF2D1F9E663A289445D85212CBE782  : public MulticastDelegate_t
{
};
struct Func_2_tF410043014FD16C2F22223C6C5575F1A96738C61  : public MulticastDelegate_t
{
};
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0  : public MulticastDelegate_t
{
};
struct SetClassValueAction_t5AA8656B00AE2AC5704C34B9F7A6A1F82E0BA2F7  : public MulticastDelegate_t
{
};
struct SetPropertyBagBase_2_t9148CA09D4A212A82F0DEC9E6A8C41B7B0A1B8FF  : public PropertyBag_1_t74F4963AD6B656900B7CACFC37AC3CDDDF818409
{
	SetElementProperty_tD32144938E8C2B3852669AF6CB12C17FAB5056C1* ___m_Property;
};
struct SetStructValueAction_tC6BC2CB4AB94181F81DFCD03D881295A7C134027  : public MulticastDelegate_t
{
};
struct ShaderInfoStorage_1_tA67AC95B2ECE99BBF16CB6CE9BAA1BB8F41AFB30  : public BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2
{
	int32_t ___m_InitialSize;
	int32_t ___m_MaxSize;
	int32_t ___m_Format;
	Func_2_t81B76467028D6BD95DE2EC625D0325AA0387285E* ___m_Convert;
	UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* ___m_Allocator;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture;
	NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D ___m_Texels;
};
struct ShaderInfoStorage_1_tD51663F3CDEDF587A26C0FE2DABE674C3122A1F6  : public BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2
{
	int32_t ___m_InitialSize;
	int32_t ___m_MaxSize;
	int32_t ___m_Format;
	Func_2_t74BA73845DFA0004A7F25F3773A11A75228F5277* ___m_Convert;
	UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* ___m_Allocator;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture;
	NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D ___m_Texels;
};
struct ShaderInfoStorage_1_t32194748F3ED0F5527B4E31A28D04606FAEE539A  : public BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2
{
	int32_t ___m_InitialSize;
	int32_t ___m_MaxSize;
	int32_t ___m_Format;
	Func_2_t781E8579E9FF2D1F9E663A289445D85212CBE782* ___m_Convert;
	UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* ___m_Allocator;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___m_Texels;
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};
struct BadImageFormatException_t7EBAEDCD74D3274D00106EC0051755C18D20E552  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____fileName;
	String_t* ____fusionLog;
};
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
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
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};
struct UnmanagedDataStore_t66CFDF2DBB3C86F8A58F5B3EBEE5E9537BDF2759 
{
	MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2 ___m_MemoryLabel;
	Data_t6BD087CC0FA9794D342D260035A70E365224C66E* ___m_Data;
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
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___m_CancellationTokenSource;
};
struct PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446  : public RuntimeObject
{
	int32_t ___m_PathIndex;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___U3CPathU3Ek__BackingField;
	RuntimeObject* ___U3CPropertyU3Ek__BackingField;
	bool ___U3CReadonlyVisitU3Ek__BackingField;
	int32_t ___U3CReturnCodeU3Ek__BackingField;
};
struct SetValueVisitor_1_tC25918007584CEA82C8D3F2B03BB5E18A90DB5EE : public PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446 {};
struct SetValueVisitor_1_t0D3862585E0E6ABBA750B0F8DD4FB4F09AB371B6  : public PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446
{
	bool ___Value;
	ConverterGroup_t2D7DEDAC22662EF5C020DE54231DC23CD0B5268A* ___U3CgroupU3Ek__BackingField;
};
struct SetValueVisitor_1_t1450E4C044890BB6ED72E91EECCABAA8CD4C36E4  : public PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446
{
	uint8_t ___Value;
	ConverterGroup_t2D7DEDAC22662EF5C020DE54231DC23CD0B5268A* ___U3CgroupU3Ek__BackingField;
};
struct SetValueVisitor_1_t0B0BA117C45E4483710D849EAA82C929C9CED4BF  : public PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446
{
	Il2CppChar ___Value;
	ConverterGroup_t2D7DEDAC22662EF5C020DE54231DC23CD0B5268A* ___U3CgroupU3Ek__BackingField;
};
struct SetValueVisitor_1_tD10D28D3ABF7ABE8A98DC884BCC45C332099C7CE  : public PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446
{
	double ___Value;
	ConverterGroup_t2D7DEDAC22662EF5C020DE54231DC23CD0B5268A* ___U3CgroupU3Ek__BackingField;
};
struct SetValueVisitor_1_tD9839C9363AA21B152B253C16F0C71E8BAD08706  : public PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446
{
	int16_t ___Value;
	ConverterGroup_t2D7DEDAC22662EF5C020DE54231DC23CD0B5268A* ___U3CgroupU3Ek__BackingField;
};
struct SetValueVisitor_1_t4915871B68CF077EDE7C77EF80D7BB6F626D5EB4  : public PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446
{
	int32_t ___Value;
	ConverterGroup_t2D7DEDAC22662EF5C020DE54231DC23CD0B5268A* ___U3CgroupU3Ek__BackingField;
};
struct SetValueVisitor_1_t10801B1B13CFD7D7A9C29076683A24958C6DB2D4  : public PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446
{
	int64_t ___Value;
	ConverterGroup_t2D7DEDAC22662EF5C020DE54231DC23CD0B5268A* ___U3CgroupU3Ek__BackingField;
};
struct SetValueVisitor_1_t5AF92D724EF436115DF067FBC46BB0FAC176C807  : public PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446
{
	int8_t ___Value;
	ConverterGroup_t2D7DEDAC22662EF5C020DE54231DC23CD0B5268A* ___U3CgroupU3Ek__BackingField;
};
struct SetValueVisitor_1_t301C6C76B364BE75BEC9911B16A56061EEFAB112  : public PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446
{
	float ___Value;
	ConverterGroup_t2D7DEDAC22662EF5C020DE54231DC23CD0B5268A* ___U3CgroupU3Ek__BackingField;
};
struct SetValueVisitor_1_t816D93C5D0B5B7B28FDDFB04200F722D086E1E41  : public PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446
{
	uint16_t ___Value;
	ConverterGroup_t2D7DEDAC22662EF5C020DE54231DC23CD0B5268A* ___U3CgroupU3Ek__BackingField;
};
struct SetValueVisitor_1_t01FB24AF1B005EA88E79A514A5459F3B17429605  : public PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446
{
	uint32_t ___Value;
	ConverterGroup_t2D7DEDAC22662EF5C020DE54231DC23CD0B5268A* ___U3CgroupU3Ek__BackingField;
};
struct SetValueVisitor_1_t4EBA6BB7A124D3633D5BA591BFD0A67E415C8E2E  : public PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446
{
	uint64_t ___Value;
	ConverterGroup_t2D7DEDAC22662EF5C020DE54231DC23CD0B5268A* ___U3CgroupU3Ek__BackingField;
};
struct SetValueVisitor_1_t9F8375B4EA106BA863CE89AC21063AB486248660 : public PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446 {};
struct SingletonMonoBehaviour_1_tBFFD0339B806174EB8B7556E79010D48B2700659  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};
struct LayoutNode_tADF081B0F16F76B66459DE38F3AD8EC098F22CBE 
{
	LayoutDataAccess_t99AA56349D0BC76F3742B927F4F0DDB21511FBBA ___m_Access;
	UnmanagedDataHandle_t5295F32E122AF2E09BF729381A22BD86B72C1DD1 ___m_Handle;
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
struct ExVisualElement_tD218489E73E216A9A6DF5DA93BAE27946E6EC794  : public BaseVisualElement_t3A15DE2A0BD8897937D4BCEC14B42D08ACE99346
{
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___m_RT;
	AdditionalStyle_t437A23C3272D957745765469A7073987455000F1 ___m_Style;
	Optional_1_tBBBF23375D7D33E286E8D0D789DB5F2437EAE81D ___m_OutlineColorByCode;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousSize;
	Optional_1_tBBBF23375D7D33E286E8D0D789DB5F2437EAE81D ___m_BackgroundColorByCode;
	int32_t ___m_PassMask;
};
struct BaseSlider_2_tE1430B5FD908D8304B46110631D54BEA59C779BD  : public ExVisualElement_tD218489E73E216A9A6DF5DA93BAE27946E6EC794
{
	Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44* ___m_DraggerManipulator;
	int32_t ___m_HighValue;
	int32_t ___m_LowValue;
	int32_t ___m_PreviousValue;
	int32_t ___m_Value;
	int32_t ___m_CurrentDirection;
	Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___m_ValidateValue;
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
struct BaseSlider_2_t0677A88D02DDFC676058809003E2B2A869057E91  : public ExVisualElement_tD218489E73E216A9A6DF5DA93BAE27946E6EC794
{
	Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44* ___m_DraggerManipulator;
	float ___m_HighValue;
	float ___m_LowValue;
	float ___m_PreviousValue;
	float ___m_Value;
	int32_t ___m_CurrentDirection;
	Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___m_ValidateValue;
	int32_t ___m_Orientation;
	float ___m_Step;
	float ___m_ShiftStep;
	bool ___m_SwapThumbs;
	String_t* ___m_FormatString;
	FormatFunction_1_t27428A63C7AE527D20F92ADAF4EF5C6F4D78B748* ___m_FormatFunc;
	int32_t ___m_DraggedThumbIndex;
	RuntimeObject* ___U3CcomparerU3Ek__BackingField;
	RuntimeObject* ___U3CthumbComparerU3Ek__BackingField;
};
struct BaseSlider_2_t4E68D1F31D65C8144F53ACE1F40183046A333114  : public ExVisualElement_tD218489E73E216A9A6DF5DA93BAE27946E6EC794
{
	Draggable_t4E4FB4CBFCAD50EC0BDAE530AD9036CC4BD12D44* ___m_DraggerManipulator;
	float ___m_HighValue;
	float ___m_LowValue;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousValue;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Value;
	int32_t ___m_CurrentDirection;
	Func_2_t8B45F86AD27A9D8326FA522C45CA74669CD4CDF9* ___m_ValidateValue;
	int32_t ___m_Orientation;
	float ___m_Step;
	float ___m_ShiftStep;
	bool ___m_SwapThumbs;
	String_t* ___m_FormatString;
	FormatFunction_1_t27428A63C7AE527D20F92ADAF4EF5C6F4D78B748* ___m_FormatFunc;
	int32_t ___m_DraggedThumbIndex;
	RuntimeObject* ___U3CcomparerU3Ek__BackingField;
	RuntimeObject* ___U3CthumbComparerU3Ek__BackingField;
};
struct Slider_3_tC6E5FD82423EDBA1D443918045EF74424D3BBE3A  : public BaseSlider_2_tE1430B5FD908D8304B46110631D54BEA59C779BD
{
	bool ___m_ShowMarks;
	bool ___m_ShowMarksLabel;
	RuntimeObject* ___m_CustomMarks;
	int32_t ___m_DisplayValueLabel;
	int32_t ___m_RestrictedValues;
	ScaleHandler_t66417A37DB8038DB1928E329CD46561804CD1E51* ___m_Scale;
	int32_t ___m_TrackDisplayMode;
	bool ___m_ShowInputField;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_SliderControl;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_TrackElement;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_ProgressContainer;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_MarkContainer;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_ThumbsContainer;
	IntField_t2D5F04240B108029462BBDAD34BC6F6A995F2977* ___m_InputField;
	Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* ___m_GetCustomMarkValuePredicate;
	Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* ___m_GetStepValuePredicate;
};
struct Slider_3_t5A70FF6EF85EB57367BFF6741CD2F2F2378DB399  : public BaseSlider_2_t0677A88D02DDFC676058809003E2B2A869057E91
{
	bool ___m_ShowMarks;
	bool ___m_ShowMarksLabel;
	RuntimeObject* ___m_CustomMarks;
	int32_t ___m_DisplayValueLabel;
	int32_t ___m_RestrictedValues;
	ScaleHandler_tF299C3633B02B37C22BA73E9564CE152399E99F5* ___m_Scale;
	int32_t ___m_TrackDisplayMode;
	bool ___m_ShowInputField;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_SliderControl;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_TrackElement;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_ProgressContainer;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_MarkContainer;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_ThumbsContainer;
	FloatField_t79C59A8C1C4D7AF70D38FB845247FA9406440604* ___m_InputField;
	Func_2_tBBFF35F4EA206696290D8B23ED36491D37219FAF* ___m_GetCustomMarkValuePredicate;
	Func_2_tBBFF35F4EA206696290D8B23ED36491D37219FAF* ___m_GetStepValuePredicate;
};
struct Slider_3_tE232B0ED4DE33812E6CAABE1F80533816CB4B21C  : public BaseSlider_2_t4E68D1F31D65C8144F53ACE1F40183046A333114
{
	bool ___m_ShowMarks;
	bool ___m_ShowMarksLabel;
	RuntimeObject* ___m_CustomMarks;
	int32_t ___m_DisplayValueLabel;
	int32_t ___m_RestrictedValues;
	ScaleHandler_tA7C4E480E83D97456A12AA2A2B0907E50D14D248* ___m_Scale;
	int32_t ___m_TrackDisplayMode;
	bool ___m_ShowInputField;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_SliderControl;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_TrackElement;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_ProgressContainer;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_MarkContainer;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_ThumbsContainer;
	Vector2Field_tDD562F80D6C008DC54DDB051695D6CAFCCAF8C6A* ___m_InputField;
	Func_2_tBBFF35F4EA206696290D8B23ED36491D37219FAF* ___m_GetCustomMarkValuePredicate;
	Func_2_tBBFF35F4EA206696290D8B23ED36491D37219FAF* ___m_GetStepValuePredicate;
};
struct U3CU3Ec_t70E4481760FD8CDB56E0CFC8FAAAED784DF37A41_StaticFields
{
	U3CU3Ec_t70E4481760FD8CDB56E0CFC8FAAAED784DF37A41* ___U3CU3E9;
	Func_1_t566D4A654882E282E54CDC3A001E05486F913903* ___U3CU3E9__1_0;
};
struct U3CU3Ec_tF0DAF66EF18C3AF8537EE02031C33F44B67DECC1_StaticFields
{
	U3CU3Ec_tF0DAF66EF18C3AF8537EE02031C33F44B67DECC1* ___U3CU3E9;
};
struct U3CU3Ec_t8A075936C510C026D2F32683D9D8B324AB3328DE_StaticFields
{
	U3CU3Ec_t8A075936C510C026D2F32683D9D8B324AB3328DE* ___U3CU3E9;
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
struct BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_StaticFields
{
	int32_t ___s_TextureCounter;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerCopyTexture;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerGetTextureData;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerUpdateTexture;
};
struct RenderGraphObjectPool_t2F5488D55D836B54B6E85D2952105BA61AEE6437_StaticFields
{
	DynamicArray_1_t843ECB88E0EEDBBB658FF535E6B19186D9F69540* ___s_AllocatedPools;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7_StaticFields
{
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerTryAllocate;
};
struct ImmutableArray_1_tF74A2108C98B37B14FB980028B68A7BB4931CA80_StaticFields
{
	ImmutableArray_1_tF74A2108C98B37B14FB980028B68A7BB4931CA80 ___Empty;
};
struct ImmutableArray_1_tEFAC466EB11A36BFA8CDBFFD33F22584323FD55B_StaticFields
{
	ImmutableArray_1_tEFAC466EB11A36BFA8CDBFFD33F22584323FD55B ___Empty;
};
struct SharedObjectPool_1_t85D963F2C906700E262E999BFA8D090DE8EECC81_StaticFields
{
	ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* ___s_Pool;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct EntityHandle_t281CE29ADEC32D51B7229800FBA887489BC18CC0_StaticFields
{
	ModuleDefinitionHandle_tAE2108E03A84677F870114E3F58BE992E142B078 ___ModuleDefinition;
	AssemblyDefinitionHandle_t29D4D4DC6F0E100EC405E07DB180B0C805EB614B ___AssemblyDefinition;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_StaticFields
{
	RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___kZero;
};
struct SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675_StaticFields
{
	int32_t ___SpinCountforSpinBeforeWait;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_StaticFields
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Null;
};
struct ScriptPlayable_1_tFFC52EF77DAC16F087A5AE6C46A136BF12D0B7DF_StaticFields
{
	ScriptPlayable_1_tFFC52EF77DAC16F087A5AE6C46A136BF12D0B7DF ___m_NullPlayable;
};
struct MetadataReader_t762E493257DEF556B7EE188A92689B643498F23F_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___WinRTPrefix;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_projectedTypeNames;
	ProjectionInfoU5BU5D_tB2A3FA52462779A586655B2A8C9D4C520DB191DF* ___s_projectionInfos;
};
struct Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_StaticFields
{
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___m_NullPlayable;
};
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	int32_t ___GenerateAllMips;
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
struct SetValueVisitor_1_tC25918007584CEA82C8D3F2B03BB5E18A90DB5EE_StaticFields
{
	ObjectPool_1_tDF1CBAC8F45FE7A38564D25A887E0824155AB946* ___Pool;
};
struct SetValueVisitor_1_t0D3862585E0E6ABBA750B0F8DD4FB4F09AB371B6_StaticFields
{
	ObjectPool_1_t8123FF4D2297EA0DE0958F4C596EEC975EF91D69* ___Pool;
};
struct SetValueVisitor_1_t1450E4C044890BB6ED72E91EECCABAA8CD4C36E4_StaticFields
{
	ObjectPool_1_t7DA0560ECC5DAE7E34FFF7A1C34B9DD85C9791BD* ___Pool;
};
struct SetValueVisitor_1_t0B0BA117C45E4483710D849EAA82C929C9CED4BF_StaticFields
{
	ObjectPool_1_tD58E1ED886ED7E0B0E789C0540A06925FFFE3789* ___Pool;
};
struct SetValueVisitor_1_tD10D28D3ABF7ABE8A98DC884BCC45C332099C7CE_StaticFields
{
	ObjectPool_1_t6F911D0AABD1A10BC296F09B07186BDAA81C23CF* ___Pool;
};
struct SetValueVisitor_1_tD9839C9363AA21B152B253C16F0C71E8BAD08706_StaticFields
{
	ObjectPool_1_t7F354EE5339C321452CC8BDE1BBEB51C109F101F* ___Pool;
};
struct SetValueVisitor_1_t4915871B68CF077EDE7C77EF80D7BB6F626D5EB4_StaticFields
{
	ObjectPool_1_t8F2D8ECC3F2A3F8557B78205355612D95DF19EE0* ___Pool;
};
struct SetValueVisitor_1_t10801B1B13CFD7D7A9C29076683A24958C6DB2D4_StaticFields
{
	ObjectPool_1_t97F13402A9436666FDB9A06B1274C59D75006F1C* ___Pool;
};
struct SetValueVisitor_1_t5AF92D724EF436115DF067FBC46BB0FAC176C807_StaticFields
{
	ObjectPool_1_t082FF340EE7F6811B66DEB049D0A8510464EF24B* ___Pool;
};
struct SetValueVisitor_1_t301C6C76B364BE75BEC9911B16A56061EEFAB112_StaticFields
{
	ObjectPool_1_t1258D5CAE21F7163A892F2AD7C928C81EBF6D0BC* ___Pool;
};
struct SetValueVisitor_1_t816D93C5D0B5B7B28FDDFB04200F722D086E1E41_StaticFields
{
	ObjectPool_1_t532B73346B73FED45FA938767ECF4F0837CBFF9E* ___Pool;
};
struct SetValueVisitor_1_t01FB24AF1B005EA88E79A514A5459F3B17429605_StaticFields
{
	ObjectPool_1_t2FFDAE5CC715A6566DDF02685C09A7A6FE52F2B6* ___Pool;
};
struct SetValueVisitor_1_t4EBA6BB7A124D3633D5BA591BFD0A67E415C8E2E_StaticFields
{
	ObjectPool_1_tE512FE8C23AFFAC42BE6502CB31360CBB50F5C4A* ___Pool;
};
struct SetValueVisitor_1_t9F8375B4EA106BA863CE89AC21063AB486248660_StaticFields
{
	ObjectPool_1_t28F249C599ED2EFD04F6B973FEFA2541B52062DF* ___Pool;
};
struct SingletonMonoBehaviour_1_tBFFD0339B806174EB8B7556E79010D48B2700659_StaticFields
{
	Lazy_1_t75FF7FC97561B1B745A0A17BAC60C19B2C1F7C95* ___LazyInstance;
};
struct Slider_3_tC6E5FD82423EDBA1D443918045EF74424D3BBE3A_StaticFields
{
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___showMarksProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___showMarksLabelProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___customMarksProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___displayValueLabelProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___restrictedValuesProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___scaleProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___trackProperty;
};
struct Slider_3_t5A70FF6EF85EB57367BFF6741CD2F2F2378DB399_StaticFields
{
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___showMarksProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___showMarksLabelProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___customMarksProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___displayValueLabelProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___restrictedValuesProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___scaleProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___trackProperty;
};
struct Slider_3_tE232B0ED4DE33812E6CAABE1F80533816CB4B21C_StaticFields
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
struct SlotU5BU5D_t15A614E28C19F61C3F029DFAA2127DA15F293444  : public RuntimeArray
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
struct SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427  : public RuntimeArray
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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ScriptPlayable_1_CreateHandle_m206D067514A656DA3058D31D730CCD2D24D9938A_gshared (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___0_graph, Il2CppSharedGenericObject* ___1_template, int32_t ___2_inputCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptPlayable_1__ctor_m8C7AFF28002C860ABD1E289C020E81B79963C368_gshared (ScriptPlayable_1_tFFC52EF77DAC16F087A5AE6C46A136BF12D0B7DF* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ScriptPlayable_1_CreateScriptInstance_m4AA924836E5FCF3D64E5FE5D5BD501F07FAA4FDB_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ScriptPlayable_1_CloneScriptInstance_m6DA6C128B522C8D45857CB5197786AB898614CCF_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Activator_CreateInstance_TisIl2CppFullySharedGenericAny_m68F3B5F53DBB1741E028DA541BE07A3D2382138D_gshared (Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ScriptPlayable_1_CloneScriptInstanceFromEngineObject_m743C6C88A18E13379E8DE4055F289AC5FE853AD4_gshared (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ScriptPlayable_1_CloneScriptInstanceFromIClonable_mD5C219F1EF2ADAA448B3D0B38B47005EA9A52C41_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ScriptPlayable_1_GetHandle_m77CD4A0339EB708FE8D2A64356D2785AAF3C25D2_gshared_inline (ScriptPlayable_1_tFFC52EF77DAC16F087A5AE6C46A136BF12D0B7DF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* PlayableHandle_GetObject_TisIl2CppSharedGenericObject_m23FFD7FA8C4499545F3C1D44148CB95A3AA4B0E9_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* ScriptPlayable_1_GetBehaviour_mBA060949B7597E3D6373055979E13901701F16DB_gshared (ScriptPlayable_1_tFFC52EF77DAC16F087A5AE6C46A136BF12D0B7DF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ScriptPlayable_1_Equals_m8DF810A4E287A8597C370A648FF8D2FAB0E4C1AF_gshared (ScriptPlayable_1_tFFC52EF77DAC16F087A5AE6C46A136BF12D0B7DF* __this, ScriptPlayable_1_tFFC52EF77DAC16F087A5AE6C46A136BF12D0B7DF ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SecurePooledObject_1_get_Owner_mFF138A12D4D859429D8DE30CD66B76A705DA5CDE_gshared_inline (SecurePooledObject_1_tB41A569B91ED04D56C211BA433285BBCC8C711AC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SecurePooledObject_1_set_Owner_m32B17046B06DADCA2E63CC02630B07CE6D6B98F0_gshared_inline (SecurePooledObject_1_tB41A569B91ED04D56C211BA433285BBCC8C711AC* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllocFreeConcurrentStack_1_TryAdd_mBC3BB1581076ED7F62BF5D8E277EF8967B01BD58_gshared (Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AllocFreeConcurrentStack_1_TryTake_m3A9CC77BC79EC7AAC70107E529C01DF80CAE4BC8_gshared (Il2CppFullySharedGenericAny* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Requires_NotNullAllowStructs_TisIl2CppFullySharedGenericAny_mFA636B145D75366207FFFFDC501FD701260F4485_gshared (Il2CppFullySharedGenericAny ___0_value, String_t* ___1_parameterName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecurePooledObject_1__ctor_m60537F5728775A38BB3253BA017ECDF8A5B809AB_gshared (SecurePooledObject_1_tB41A569B91ED04D56C211BA433285BBCC8C711AC* __this, Il2CppFullySharedGenericAny ___0_newValue, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Segment_get_FreezeOffset_m8EC2B0554DDCE54682CBC146A7831D373B1EDFFF_gshared (Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeList_1_get_Length_m35C71DFABA31811E9ABCD2FF56F066B449E3C84A_gshared_inline (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mC1D8773F403E942EBAE0283BDE80699517E8BBA1_gshared (Il2CppFullySharedGenericStruct* ___0_ptr, int32_t ___1_length, Il2CppFullySharedGenericAny ___2_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void SegmentSort_Execute_mC78E58E76865C7128FE531FE77A6E6881F4164D2_gshared (SegmentSort_t77C08041BA5AEB4123630C4F2B1E3931CA05E8EB* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void SegmentSort_Execute_m97ED75FFE35C16A6A665950CEA4336247B97F576_gshared (SegmentSort_tFC9B424627D4B0067FF3CC4718431C1A8F57DDE7* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeList_1_get_Length_mBCE0D52E1FEFC40B5CFEE2F41B493C7FF6A07FA7_gshared_inline (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* NativeList_1_GetUnsafePtr_mE3414803EEC9F51E61C428C9ED08838A073AC070_gshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void SegmentSortMerge_Execute_m579D8ACA39DF378AB2314BF6E1D3A820ECD3FF07_gshared (SegmentSortMerge_tF039AAEBE13FCFD17842E252416205B44F704642* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void SegmentSortMerge_Execute_mA5E29D92467118581DCFCFDFD5CAF058DB5985A4_gshared (SegmentSortMerge_t7F8682B81EA201C79A53AD5EAF006B5F8615A74B* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Func_2_Invoke_m31CAC166FDC80DC5AE52A5AEFFEE2D9B27A1CA3F_gshared_inline (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* __this, Il2CppFullySharedGenericAny ___0_arg, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Select__ctor_m65E78EF9064D6EB9C7B8BAE6CBEF440364EB316C_gshared (Select_t49EFABABACDD2D3A4008F9A105A7B7A9A677791E* __this, SelectManyObservable_2_tBEFCCBF20DBB52417E0D9CD64E2B1C731985C9A8* ___0_observable, RuntimeObject* ___1_observer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Select__ctor_m9F44AB1BD00E6882ED41FFDCD0B1CEC573054CEF_gshared (Select_t82D21E9873838FB0EC6FEC7FBD4F9387FFFA614C* __this, SelectObservable_2_t3088BA40A393B1C6E2488B44E7931CB358FAB383* ___0_observable, RuntimeObject* ___1_observer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectorWorkItem__ctor_m74C06E21EA7D0688A93EDD337CCB30ED36A7C6BB_gshared (SelectorWorkItem_tBC8638E7E2C3AF1A8C278D2DC1110CB940916E04* __this, int32_t ___0_type, String_t* ___1_input, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializedDictionary_4__ctor_m0C97DC9697C989E690FDC55A26474751CFC9F29D_gshared (SerializedDictionary_4_t8F7166B0D852B2A2BA1D977932123B6693AA86FE* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetEnumerator_mEC4954B142C43B5CBAA045953EAD4E168FFCD492_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m26AF82C275C82180BB7F23C7E408BC1FEB9A38EE_gshared_inline (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_gshared_inline (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_gshared_inline (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m97783F73CDB1D0083A2F7D26A51847BF0843ADEA_gshared (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m935B3F117860376DC854C9E0C80CBD99BE77EEA4_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m54D479280472DEA042DB3933AF547E666B017333_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2__ctor_m1B14349D578BF83C39983D2898529964F8906986_gshared (Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PropertyCollection_1_get_Empty_mBDB0A9966BECD6790C4490416D03BF4102A8BFEF_gshared_inline (PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SetPropertyBagBase_2_GetPropertiesEnumerable_m588CFA5B43C8735F414153F02054C8B2923D0BC1_gshared (SetPropertyBagBase_2_t9148CA09D4A212A82F0DEC9E6A8C41B7B0A1B8FF* __this, Il2CppFullySharedGenericAny ___0_container, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyCollection_1__ctor_m0E8538F1E11CB09AB1E8846DB44D0B6806838688_gshared (PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetPropertiesEnumerableU3Ed__4__ctor_m003332C152CE1ACA2858A7B06F3258883191FFF1_gshared (U3CGetPropertiesEnumerableU3Ed__4_t5E4DFDB918CED8B1BD7311A434FA7762BBD6C390* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetElementProperty__ctor_m113D7183F4BF3274D3F50AAC84D07FAA974233E1_gshared (SetElementProperty_tD32144938E8C2B3852669AF6CB12C17FAB5056C1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_1__ctor_mF9D3CBA5488FDEB46B255A12E5CF4DDF4BD76175_gshared (PropertyBag_1_t74F4963AD6B656900B7CACFC37AC3CDDDF818409* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mC73A4FCEBBAB90CB7B7AB16321F3F98FBBF12596_gshared (Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m685A441EC9FAC9D554B26FA83A08F4BEF96DFF0E_gshared (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_1__ctor_m3A4B28B9D0DC42C43CF00C078D27C9ADFA00FACC_gshared (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* __this, Func_1_t566D4A654882E282E54CDC3A001E05486F913903* ___0_createFunc, Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* ___1_actionOnGet, Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* ___2_actionOnRelease, Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* ___3_actionOnDestroy, bool ___4_collectionCheck, int32_t ___5_defaultCapacity, int32_t ___6_maxSize, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SetValueVisitor_1_set_group_m94980C75D99986FB92C00A15DA3C9C1E7DF4F175_gshared_inline (SetValueVisitor_1_t9F8375B4EA106BA863CE89AC21063AB486248660* __this, ConverterGroup_t2D7DEDAC22662EF5C020DE54231DC23CD0B5268A* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Set_1_Find_m6FFC5DAA463589F3E2D7EDD7D4C21ACDFE366953_gshared (Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D* __this, Il2CppFullySharedGenericAny ___0_value, bool ___1_add, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Set_1_InternalGetHashCode_m4A0B85ECABF6C737809F72F682E564CB502CBD7E_gshared (Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Set_1_Resize_m042F5E61A9646B1949ADC2B8F1A01FB1C82397AE_gshared (Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderInfoStorage_1_CreateOrExpandTexture_m8642AC345100DA2F4FA6D2DC5E283FB777730361_gshared (ShaderInfoStorage_1_t32194748F3ED0F5527B4E31A28D04606FAEE539A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m527A2C3B75C25BFF29D1D9EA88C81172FF4F5A5A_gshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 Texture2D_GetRawTextureData_TisIl2CppFullySharedGenericStruct_mDC6FE57DC7D62BAC05E6231541767FA81448490E_gshared (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NativeArray_1_set_Item_m629BDF69720F9FF193478E89307F9B6A56425379_gshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderInfoStorage_1_CpuBlit_m0E45789132A1E82D5777E6170B1D9470441F21BD_gshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_src, int32_t ___1_srcWidth, int32_t ___2_srcHeight, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___3_dst, int32_t ___4_dstWidth, int32_t ___5_dstHeight, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NativeArray_1_get_Item_mA8C8A69EB3A5D460C55DFCD27275CD5BA5E2B455_gshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedObjectPool_1__ctor_m67ED400BE8DA10E8B0FDDD6DA9C81825C165F028_gshared (SharedObjectPool_1_t85D963F2C906700E262E999BFA8D090DE8EECC81* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DynamicArray_1_Add_m45EF0E9613FC1F328EE97FA4DD7D7EA9CD1E9A3B_gshared (DynamicArray_1_tFD6392EE4EAA442D167A921C9964FD9C17FDCDE0* __this, Il2CppFullySharedGenericAny* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_1_Clear_m361E7FE94372B74ECAE06A68282165F30C67F901_gshared (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* ObjectPool_1_Get_m6033387D88EF9D1AD81A89F3045733BC4B98073D_gshared_inline (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ObjectPool_1_Release_m3183E8F3194884123A027D720D37F341AF367E48_gshared_inline (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* __this, Il2CppSharedGenericObject* ___0_element, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* SharedObjectPool_1_AllocatePool_m7F935FA6F34D0AE6E32C1D66B37A68EEA187A47C_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SharedStatic_1__ctor_m467F9A64986F442AA4853C5C314D0A54D887CDDC_gshared_inline (SharedStatic_1_t965CBE4F8A30F785649BF3D97C277D0927858D08* __this, void* ___0_buffer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* UnsafeUtility_AsRef_TisIl2CppFullySharedGenericStruct_m78B0690121A96EFFDA7D6D3ADAF97940CF8136BE_gshared_inline (void* ___0_ptr, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* SharedStatic_1_get_Data_m679BD82198B4EC1D89F2EDE946A60F4DEE8E47E2_gshared (SharedStatic_1_t965CBE4F8A30F785649BF3D97C277D0927858D08* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* SharedStatic_1_get_UnsafeDataPointer_m3F411F556361D224096615DAA35B86D6B725C09D_gshared_inline (SharedStatic_1_t965CBE4F8A30F785649BF3D97C277D0927858D08* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedStatic_1__ctor_m57842D87210A109206E3DAFEBD441B46EDBC809E_gshared (SharedStatic_1_t4FCF4588C706197A62B7B4C4DFA65B0457AB498C* __this, void* ___0_buffer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_AsRef_TisIl2CppFullySharedGenericAny_m32B7913D5C99D58667B8F989FEFA15BF74484607_gshared_inline (void* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* SharedStatic_1_get_Data_m4D3D9A03646881BE9065C8939BF1CA28195FF262_gshared (SharedStatic_1_t4FCF4588C706197A62B7B4C4DFA65B0457AB498C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* SharedStatic_1_get_UnsafeDataPointer_m82D3730B2B6F8768B9136641DED95E968D4EEF89_gshared (SharedStatic_1_t4FCF4588C706197A62B7B4C4DFA65B0457AB498C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SharedStatic_1_t4FCF4588C706197A62B7B4C4DFA65B0457AB498C SharedStatic_1_GetOrCreateUnsafe_m160E81C99EC8BDE0A64547E1B34D7CE539082052_gshared (uint32_t ___0_alignment, int64_t ___1_hashCode, int64_t ___2_subHashCode, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnumEqualityComparer_1__ctor_mAB9D8AC0C1DB19F6469764917E0B10BF5B13045C_gshared (EnumEqualityComparer_1_tBE0A26FDB9917D9CB482A0E2018093AB3394FC1A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JitHelpers_UnsafeEnumCast_TisIl2CppFullySharedGenericStruct_mD42A78D32EE1E24FC2354DC266C314F71C1E5568_gshared (Il2CppFullySharedGenericStruct ___0_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignatureDecoder_2__ctor_mE9E4545341ADC55D8511126A371C234FD5CF26AF_gshared (SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A* __this, RuntimeObject* ___0_provider, MetadataReader_t762E493257DEF556B7EE188A92689B643498F23F* ___1_metadataReader, Il2CppFullySharedGenericAny ___2_genericContext, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignatureDecoder_2_DecodeType_mBFC7D6644EDFE74A9D7B206EE30A1A3C5C6E95A1_gshared (SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A* __this, BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* ___0_blobReader, bool ___1_allowTypeSpecifications, int32_t ___2_typeCode, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignatureDecoder_2_DecodeType_mEEEA6A03C82524ECC64CBDA6924F236FD4A240F6_gshared (SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A* __this, BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* ___0_blobReader, bool ___1_allowTypeSpecifications, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignatureDecoder_2_DecodeMethodSignature_m3CCFD8E0277778BE3ACCB4D477C67E9DBC319D3F_gshared (SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A* __this, BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* ___0_blobReader, MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignatureDecoder_2_DecodeArrayType_m3999BC48EB209102BE87179D2559232436F4012E_gshared (SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A* __this, BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* ___0_blobReader, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignatureDecoder_2_DecodeModifiedType_m24FEAF9FFE7D2B7AD438FCDC033D58A1B1AC6618_gshared (SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A* __this, BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* ___0_blobReader, bool ___1_isRequired, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignatureDecoder_2_DecodeGenericTypeInstance_m349EA56EA242EC7865AA133477464F4BCF5EF328_gshared (SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A* __this, BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* ___0_blobReader, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignatureDecoder_2_DecodeTypeHandle_m462DC7095CE4C5913515F8A711A0FE4B6E9B91AE_gshared (SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A* __this, BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* ___0_blobReader, uint8_t ___1_rawTypeKind, bool ___2_allowTypeSpecifications, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tE6B12AF8285AC765683866492A5C6FC5E4E6710C* ImmutableArray_CreateBuilder_TisIl2CppFullySharedGenericAny_m3BE3AFD68FBD84029DBE2D0FC4FCDAC965E76E52_gshared (int32_t ___0_initialCapacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_Add_m50A5EFE9B5BE9A0D884F129593DF06F84DF5D07C_gshared (Builder_tE6B12AF8285AC765683866492A5C6FC5E4E6710C* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImmutableArray_1_tEFAC466EB11A36BFA8CDBFFD33F22584323FD55B Builder_MoveToImmutable_mFA2D7FE73F89E17B67F06C441639C838D18105ED_gshared (Builder_tE6B12AF8285AC765683866492A5C6FC5E4E6710C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImmutableArray_1_tEFAC466EB11A36BFA8CDBFFD33F22584323FD55B SignatureDecoder_2_DecodeTypeSequence_m55D2F0F90279B14F030A558DFB07A1753C89985E_gshared (SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A* __this, BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* ___0_blobReader, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignatureDecoder_2_CheckMethodOrPropertyHeader_m0AB83822F12F9944F190AD22BE7412DC98841E59_gshared (SignatureHeader_t844A1279E334F68A651EB766BC960396B8362ECC ___0_header, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MethodSignature_1__ctor_mF784840EA0615986BE95433A09D5DD5A9F37B87C_gshared (MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB* __this, SignatureHeader_t844A1279E334F68A651EB766BC960396B8362ECC ___0_header, Il2CppFullySharedGenericAny ___1_returnType, int32_t ___2_requiredParameterCount, int32_t ___3_genericParameterCount, ImmutableArray_1_tEFAC466EB11A36BFA8CDBFFD33F22584323FD55B ___4_parameterTypes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignatureDecoder_2_CheckHeader_m3EB2C24E6E67E2FC8B1BC26E7A97A60FF3FEF8F1_gshared (SignatureHeader_t844A1279E334F68A651EB766BC960396B8362ECC ___0_header, uint8_t ___1_expectedKind, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImmutableArray_1_tEFAC466EB11A36BFA8CDBFFD33F22584323FD55B SignatureDecoder_2_DecodeMethodSpecificationSignature_m605269802B26311A516FD2F991A2E102B9B94218_gshared (SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A* __this, BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* ___0_blobReader, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImmutableArray_1_tEFAC466EB11A36BFA8CDBFFD33F22584323FD55B SignatureDecoder_2_DecodeLocalSignature_mA39AB2F29437460EF1C4E7EE549A5F0870844FD4_gshared (SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A* __this, BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* ___0_blobReader, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignatureDecoder_2_DecodeFieldSignature_m35BBD3F2B7D944BD4B2CACA7C8CA74FC12A0EAEF_gshared (SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A* __this, BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* ___0_blobReader, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lazy_1_get_Value_mC40A4B2AF05EF6967CC0952495F59403E331E65F_gshared (Lazy_1_tBAA3E373F2142744F64A913EB230AA096D161A25* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* GameObject_AddComponent_TisIl2CppSharedGenericObject_mEC1C0E045A5A771DA12CB28C8523DB16596946AD_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lazy_1__ctor_mCC33FEF8AF791EA7637DA6122D6F79CE2A842B0F_gshared (Lazy_1_tBAA3E373F2142744F64A913EB230AA096D161A25* __this, Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* ___0_valueFactory, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mA6DFDBC2B22D6318212C6989A34784BD8303AF33_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericAny_m3C86E25D63AB95F3D572F8010D623EB7C6D78283_gshared_inline (void* ___0_destination, int32_t ___1_index, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericAny_m295186AA082411C57485F8BDB824E4D8AC1C6D93_gshared_inline (void* ___0_source, int32_t ___1_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Func_1_Invoke_m35CBC166F464B8A1169583672025E6D64211856C_gshared_inline (Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ObjectPool_1_get_CountAll_m8372ACA3A976C3FCB45CD77A0AEF0BDA496EBB6D_gshared_inline (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ObjectPool_1_set_CountAll_m6E7C5E741DCB73BD743FC27BACBE1886F4414440_gshared_inline (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mF6C23E9072D8CBE2872705E7E4D08BDB78770F5C_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ObjectPool_1_get_CountInactive_m40351B6BE62E0944A0813C07869822EC0D1E8D26_gshared (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* __this, const RuntimeMethod* method) ;

inline PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ScriptPlayable_1_CreateHandle_m206D067514A656DA3058D31D730CCD2D24D9938A (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___0_graph, Il2CppSharedGenericObject* ___1_template, int32_t ___2_inputCount, const RuntimeMethod* method)
{
	return ((  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 (*) (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E, Il2CppSharedGenericObject*, int32_t, const RuntimeMethod*))ScriptPlayable_1_CreateHandle_m206D067514A656DA3058D31D730CCD2D24D9938A_gshared)(___0_graph, ___1_template, ___2_inputCount, method);
}
inline void ScriptPlayable_1__ctor_m8C7AFF28002C860ABD1E289C020E81B79963C368 (ScriptPlayable_1_tFFC52EF77DAC16F087A5AE6C46A136BF12D0B7DF* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method)
{
	((  void (*) (ScriptPlayable_1_tFFC52EF77DAC16F087A5AE6C46A136BF12D0B7DF*, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4, const RuntimeMethod*))ScriptPlayable_1__ctor_m8C7AFF28002C860ABD1E289C020E81B79963C368_gshared)(__this, ___0_handle, method);
}
inline RuntimeObject* ScriptPlayable_1_CreateScriptInstance_m4AA924836E5FCF3D64E5FE5D5BD501F07FAA4FDB (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))ScriptPlayable_1_CreateScriptInstance_m4AA924836E5FCF3D64E5FE5D5BD501F07FAA4FDB_gshared)(method);
}
inline RuntimeObject* ScriptPlayable_1_CloneScriptInstance_m6DA6C128B522C8D45857CB5197786AB898614CCF (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))ScriptPlayable_1_CloneScriptInstance_m6DA6C128B522C8D45857CB5197786AB898614CCF_gshared)(___0_source, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 PlayableGraph_CreatePlayableHandle_mF90D606A614FB603DBFFE4E87C325F8CC59BED67 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetInputCount_m6067CD3616C428F777903FCBFD789060A2185DEE (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetScriptInstance_m479F7C03A25E77284BE1949CF5EABE903B9B26EE (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, RuntimeObject* ___0_scriptInstance, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24 (Type_t* ___0_type, const RuntimeMethod* method) ;
inline Il2CppSharedGenericObject* Activator_CreateInstance_TisIl2CppSharedGenericObject_m4C74D3D65600820EB977E87AD08D24AF782C97C3 (const RuntimeMethod* method)
{
	Il2CppSharedGenericObject* il2cppRetVal;
	((  void (*) (Il2CppFullySharedGenericAny*, const RuntimeMethod*))Activator_CreateInstance_TisIl2CppFullySharedGenericAny_m68F3B5F53DBB1741E028DA541BE07A3D2382138D_gshared)((Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
inline RuntimeObject* ScriptPlayable_1_CloneScriptInstanceFromEngineObject_m743C6C88A18E13379E8DE4055F289AC5FE853AD4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_source, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*, const RuntimeMethod*))ScriptPlayable_1_CloneScriptInstanceFromEngineObject_m743C6C88A18E13379E8DE4055F289AC5FE853AD4_gshared)(___0_source, method);
}
inline RuntimeObject* ScriptPlayable_1_CloneScriptInstanceFromIClonable_mD5C219F1EF2ADAA448B3D0B38B47005EA9A52C41 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))ScriptPlayable_1_CloneScriptInstanceFromIClonable_mD5C219F1EF2ADAA448B3D0B38B47005EA9A52C41_gshared)(___0_source, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Object_Instantiate_m8C504E8CCCA0816BEB5BB431A0BCECE17D217A0B (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_original, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_get_hideFlags_mA08F5E41671B8C6B5073C6B9E2799BCE6E0DF7F3 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* PlayableHandle_GetPlayableType_mD9750F1B85DF086F52641D6AB85789601486B686 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644 (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ScriptPlayable_1_GetHandle_m77CD4A0339EB708FE8D2A64356D2785AAF3C25D2_inline (ScriptPlayable_1_tFFC52EF77DAC16F087A5AE6C46A136BF12D0B7DF* __this, const RuntimeMethod* method)
{
	return ((  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 (*) (ScriptPlayable_1_tFFC52EF77DAC16F087A5AE6C46A136BF12D0B7DF*, const RuntimeMethod*))ScriptPlayable_1_GetHandle_m77CD4A0339EB708FE8D2A64356D2785AAF3C25D2_gshared_inline)(__this, method);
}
inline Il2CppSharedGenericObject* PlayableHandle_GetObject_TisIl2CppSharedGenericObject_m23FFD7FA8C4499545F3C1D44148CB95A3AA4B0E9 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, const RuntimeMethod*))PlayableHandle_GetObject_TisIl2CppSharedGenericObject_m23FFD7FA8C4499545F3C1D44148CB95A3AA4B0E9_gshared)(__this, method);
}
inline Il2CppSharedGenericObject* ScriptPlayable_1_GetBehaviour_mBA060949B7597E3D6373055979E13901701F16DB (ScriptPlayable_1_tFFC52EF77DAC16F087A5AE6C46A136BF12D0B7DF* __this, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (ScriptPlayable_1_tFFC52EF77DAC16F087A5AE6C46A136BF12D0B7DF*, const RuntimeMethod*))ScriptPlayable_1_GetBehaviour_mBA060949B7597E3D6373055979E13901701F16DB_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Playable__ctor_mD2EB35E024816AEED68795D0124EAB30E05BF6C4_inline (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 Playable_GetHandle_m39356D23E849DC5428B262092657662C064E04F8_inline (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_x, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___1_y, const RuntimeMethod* method) ;
inline bool ScriptPlayable_1_Equals_m8DF810A4E287A8597C370A648FF8D2FAB0E4C1AF (ScriptPlayable_1_tFFC52EF77DAC16F087A5AE6C46A136BF12D0B7DF* __this, ScriptPlayable_1_tFFC52EF77DAC16F087A5AE6C46A136BF12D0B7DF ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (ScriptPlayable_1_tFFC52EF77DAC16F087A5AE6C46A136BF12D0B7DF*, ScriptPlayable_1_tFFC52EF77DAC16F087A5AE6C46A136BF12D0B7DF, const RuntimeMethod*))ScriptPlayable_1_Equals_m8DF810A4E287A8597C370A648FF8D2FAB0E4C1AF_gshared)(__this, ___0_other, method);
}
inline int32_t SecurePooledObject_1_get_Owner_mFF138A12D4D859429D8DE30CD66B76A705DA5CDE_inline (SecurePooledObject_1_tB41A569B91ED04D56C211BA433285BBCC8C711AC* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (SecurePooledObject_1_tB41A569B91ED04D56C211BA433285BBCC8C711AC*, const RuntimeMethod*))SecurePooledObject_1_get_Owner_mFF138A12D4D859429D8DE30CD66B76A705DA5CDE_gshared_inline)(__this, method);
}
inline void SecurePooledObject_1_set_Owner_m32B17046B06DADCA2E63CC02630B07CE6D6B98F0_inline (SecurePooledObject_1_tB41A569B91ED04D56C211BA433285BBCC8C711AC* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (SecurePooledObject_1_tB41A569B91ED04D56C211BA433285BBCC8C711AC*, int32_t, const RuntimeMethod*))SecurePooledObject_1_set_Owner_m32B17046B06DADCA2E63CC02630B07CE6D6B98F0_gshared_inline)(__this, ___0_value, method);
}
inline void AllocFreeConcurrentStack_1_TryAdd_mA61194442C3D966BCFC43CE01EB70E82A0D68F14 (SecurePooledObject_1_tB41A569B91ED04D56C211BA433285BBCC8C711AC* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Il2CppFullySharedGenericAny, const RuntimeMethod*))AllocFreeConcurrentStack_1_TryAdd_mBC3BB1581076ED7F62BF5D8E277EF8967B01BD58_gshared)((Il2CppFullySharedGenericAny)___0_item, method);
}
inline bool AllocFreeConcurrentStack_1_TryTake_mFCBD3B7F2E898443D8CE8EE0B981F541A392E4A1 (SecurePooledObject_1_tB41A569B91ED04D56C211BA433285BBCC8C711AC** ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (SecurePooledObject_1_tB41A569B91ED04D56C211BA433285BBCC8C711AC**, const RuntimeMethod*))AllocFreeConcurrentStack_1_TryTake_m3A9CC77BC79EC7AAC70107E529C01DF80CAE4BC8_gshared)(___0_item, method);
}
inline void Requires_NotNullAllowStructs_TisIl2CppFullySharedGenericAny_mFA636B145D75366207FFFFDC501FD701260F4485 (Il2CppFullySharedGenericAny ___0_value, String_t* ___1_parameterName, const RuntimeMethod* method)
{
	((  void (*) (Il2CppFullySharedGenericAny, String_t*, const RuntimeMethod*))Requires_NotNullAllowStructs_TisIl2CppFullySharedGenericAny_mFA636B145D75366207FFFFDC501FD701260F4485_gshared)(___0_value, ___1_parameterName, method);
}
inline void SecurePooledObject_1__ctor_m60537F5728775A38BB3253BA017ECDF8A5B809AB (SecurePooledObject_1_tB41A569B91ED04D56C211BA433285BBCC8C711AC* __this, Il2CppFullySharedGenericAny ___0_newValue, const RuntimeMethod* method)
{
	((  void (*) (SecurePooledObject_1_tB41A569B91ED04D56C211BA433285BBCC8C711AC*, Il2CppFullySharedGenericAny, const RuntimeMethod*))SecurePooledObject_1__ctor_m60537F5728775A38BB3253BA017ECDF8A5B809AB_gshared)((SecurePooledObject_1_tB41A569B91ED04D56C211BA433285BBCC8C711AC*)__this, ___0_newValue, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
inline int32_t Segment_get_FreezeOffset_m8EC2B0554DDCE54682CBC146A7831D373B1EDFFF (Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912*, const RuntimeMethod*))Segment_get_FreezeOffset_m8EC2B0554DDCE54682CBC146A7831D373B1EDFFF_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717 (int32_t* ___0_location1, int32_t ___1_value, int32_t ___2_comparand, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpinWait_SpinOnce_m5B74E6B15013E90667646C0D943E886D4EC596AF (SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675* __this, const RuntimeMethod* method) ;
inline int32_t UnsafeList_1_get_Length_m35C71DFABA31811E9ABCD2FF56F066B449E3C84A_inline (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6*, const RuntimeMethod*))UnsafeList_1_get_Length_m35C71DFABA31811E9ABCD2FF56F066B449E3C84A_gshared_inline)(__this, method);
}
inline void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mC1D8773F403E942EBAE0283BDE80699517E8BBA1 (Il2CppFullySharedGenericStruct* ___0_ptr, int32_t ___1_length, Il2CppFullySharedGenericAny ___2_comp, const RuntimeMethod* method)
{
	((  void (*) (Il2CppFullySharedGenericStruct*, int32_t, Il2CppFullySharedGenericAny, const RuntimeMethod*))NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mC1D8773F403E942EBAE0283BDE80699517E8BBA1_gshared)(___0_ptr, ___1_length, ___2_comp, method);
}
inline void SegmentSort_Execute_mC78E58E76865C7128FE531FE77A6E6881F4164D2 (SegmentSort_t77C08041BA5AEB4123630C4F2B1E3931CA05E8EB* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (SegmentSort_t77C08041BA5AEB4123630C4F2B1E3931CA05E8EB* IL2CPP_PARAMETER_RESTRICT, int32_t, const RuntimeMethod*))SegmentSort_Execute_mC78E58E76865C7128FE531FE77A6E6881F4164D2_gshared)(__this, ___0_index, method);
}
inline void SegmentSort_Execute_m97ED75FFE35C16A6A665950CEA4336247B97F576 (SegmentSort_tFC9B424627D4B0067FF3CC4718431C1A8F57DDE7* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (SegmentSort_tFC9B424627D4B0067FF3CC4718431C1A8F57DDE7* IL2CPP_PARAMETER_RESTRICT, int32_t, const RuntimeMethod*))SegmentSort_Execute_m97ED75FFE35C16A6A665950CEA4336247B97F576_gshared)(__this, ___0_index, method);
}
inline int32_t NativeList_1_get_Length_mBCE0D52E1FEFC40B5CFEE2F41B493C7FF6A07FA7_inline (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*, const RuntimeMethod*))NativeList_1_get_Length_mBCE0D52E1FEFC40B5CFEE2F41B493C7FF6A07FA7_gshared_inline)(__this, method);
}
inline Il2CppFullySharedGenericStruct* NativeList_1_GetUnsafePtr_mE3414803EEC9F51E61C428C9ED08838A073AC070 (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* __this, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*, const RuntimeMethod*))NativeList_1_GetUnsafePtr_mE3414803EEC9F51E61C428C9ED08838A073AC070_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D (int32_t ___0_a, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5 (int64_t ___0_size, int32_t ___1_align, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177 (void* ___0_destination, void* ___1_source, int64_t ___2_size, const RuntimeMethod* method) ;
inline void SegmentSortMerge_Execute_m579D8ACA39DF378AB2314BF6E1D3A820ECD3FF07 (SegmentSortMerge_tF039AAEBE13FCFD17842E252416205B44F704642* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method)
{
	((  void (*) (SegmentSortMerge_tF039AAEBE13FCFD17842E252416205B44F704642* IL2CPP_PARAMETER_RESTRICT, const RuntimeMethod*))SegmentSortMerge_Execute_m579D8ACA39DF378AB2314BF6E1D3A820ECD3FF07_gshared)(__this, method);
}
inline void SegmentSortMerge_Execute_mA5E29D92467118581DCFCFDFD5CAF058DB5985A4 (SegmentSortMerge_t7F8682B81EA201C79A53AD5EAF006B5F8615A74B* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method)
{
	((  void (*) (SegmentSortMerge_t7F8682B81EA201C79A53AD5EAF006B5F8615A74B* IL2CPP_PARAMETER_RESTRICT, const RuntimeMethod*))SegmentSortMerge_Execute_mA5E29D92467118581DCFCFDFD5CAF058DB5985A4_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0 (Exception_t* ___0_exception, const RuntimeMethod* method) ;
inline RuntimeObject* Func_2_Invoke_m9A4E29AC2AE388BE98912DC8658AE50E6227BE80_inline (Func_2_tF410043014FD16C2F22223C6C5575F1A96738C61* __this, Il2CppFullySharedGenericAny ___0_arg, const RuntimeMethod* method)
{
	RuntimeObject* il2cppRetVal;
	((  void (*) (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Func_2_Invoke_m31CAC166FDC80DC5AE52A5AEFFEE2D9B27A1CA3F_gshared_inline)((Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*)__this, ___0_arg, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
inline void Func_2_Invoke_m31CAC166FDC80DC5AE52A5AEFFEE2D9B27A1CA3F_inline (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* __this, Il2CppFullySharedGenericAny ___0_arg, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Func_2_Invoke_m31CAC166FDC80DC5AE52A5AEFFEE2D9B27A1CA3F_gshared_inline)((Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*)__this, ___0_arg, il2cppRetVal, method);
}
inline void Select__ctor_m65E78EF9064D6EB9C7B8BAE6CBEF440364EB316C (Select_t49EFABABACDD2D3A4008F9A105A7B7A9A677791E* __this, SelectManyObservable_2_tBEFCCBF20DBB52417E0D9CD64E2B1C731985C9A8* ___0_observable, RuntimeObject* ___1_observer, const RuntimeMethod* method)
{
	((  void (*) (Select_t49EFABABACDD2D3A4008F9A105A7B7A9A677791E*, SelectManyObservable_2_tBEFCCBF20DBB52417E0D9CD64E2B1C731985C9A8*, RuntimeObject*, const RuntimeMethod*))Select__ctor_m65E78EF9064D6EB9C7B8BAE6CBEF440364EB316C_gshared)(__this, ___0_observable, ___1_observer, method);
}
inline void Select__ctor_m9F44AB1BD00E6882ED41FFDCD0B1CEC573054CEF (Select_t82D21E9873838FB0EC6FEC7FBD4F9387FFFA614C* __this, SelectObservable_2_t3088BA40A393B1C6E2488B44E7931CB358FAB383* ___0_observable, RuntimeObject* ___1_observer, const RuntimeMethod* method)
{
	((  void (*) (Select_t82D21E9873838FB0EC6FEC7FBD4F9387FFFA614C*, SelectObservable_2_t3088BA40A393B1C6E2488B44E7931CB358FAB383*, RuntimeObject*, const RuntimeMethod*))Select__ctor_m9F44AB1BD00E6882ED41FFDCD0B1CEC573054CEF_gshared)(__this, ___0_observable, ___1_observer, method);
}
inline void SelectorWorkItem__ctor_m74C06E21EA7D0688A93EDD337CCB30ED36A7C6BB (SelectorWorkItem_tBC8638E7E2C3AF1A8C278D2DC1110CB940916E04* __this, int32_t ___0_type, String_t* ___1_input, const RuntimeMethod* method)
{
	((  void (*) (SelectorWorkItem_tBC8638E7E2C3AF1A8C278D2DC1110CB940916E04*, int32_t, String_t*, const RuntimeMethod*))SelectorWorkItem__ctor_m74C06E21EA7D0688A93EDD337CCB30ED36A7C6BB_gshared)(__this, ___0_type, ___1_input, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
inline void SerializedDictionary_4__ctor_m0C97DC9697C989E690FDC55A26474751CFC9F29D (SerializedDictionary_4_t8F7166B0D852B2A2BA1D977932123B6693AA86FE* __this, const RuntimeMethod* method)
{
	((  void (*) (SerializedDictionary_4_t8F7166B0D852B2A2BA1D977932123B6693AA86FE*, const RuntimeMethod*))SerializedDictionary_4__ctor_m0C97DC9697C989E690FDC55A26474751CFC9F29D_gshared)(__this, method);
}
inline void List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared_inline)(__this, method);
}
inline void Dictionary_2_GetEnumerator_mEC4954B142C43B5CBAA045953EAD4E168FFCD492 (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*, const RuntimeMethod*))Dictionary_2_GetEnumerator_mEC4954B142C43B5CBAA045953EAD4E168FFCD492_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, il2cppRetVal, method);
}
inline void Enumerator_get_Current_m26AF82C275C82180BB7F23C7E408BC1FEB9A38EE_inline (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, const RuntimeMethod*))Enumerator_get_Current_m26AF82C275C82180BB7F23C7E408BC1FEB9A38EE_gshared_inline)((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)__this, il2cppRetVal, method);
}
inline void KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_inline (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_gshared_inline)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, il2cppRetVal, method);
}
inline void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_item, method);
}
inline void KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_inline (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_gshared_inline)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, il2cppRetVal, method);
}
inline bool Enumerator_MoveNext_m97783F73CDB1D0083A2F7D26A51847BF0843ADEA (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*, const RuntimeMethod*))Enumerator_MoveNext_m97783F73CDB1D0083A2F7D26A51847BF0843ADEA_gshared)(__this, method);
}
inline void Dictionary_2_Clear_m935B3F117860376DC854C9E0C80CBD99BE77EEA4 (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2_Clear_m935B3F117860376DC854C9E0C80CBD99BE77EEA4_gshared)(__this, method);
}
inline void List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937 (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_index, il2cppRetVal, method);
}
inline void Dictionary_2_Add_m54D479280472DEA042DB3933AF547E666B017333 (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_Add_m54D479280472DEA042DB3933AF547E666B017333_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, ___0_key, ___1_value, method);
}
inline int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)(__this, method);
}
inline void List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374 (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)(__this, method);
}
inline void Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void Property_2__ctor_m1B14349D578BF83C39983D2898529964F8906986 (Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* __this, const RuntimeMethod* method)
{
	((  void (*) (Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3*, const RuntimeMethod*))Property_2__ctor_m1B14349D578BF83C39983D2898529964F8906986_gshared)(__this, method);
}
inline void PropertyCollection_1_get_Empty_mBDB0A9966BECD6790C4490416D03BF4102A8BFEF_inline (PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D*, const RuntimeMethod*))PropertyCollection_1_get_Empty_mBDB0A9966BECD6790C4490416D03BF4102A8BFEF_gshared_inline)(il2cppRetVal, method);
}
inline RuntimeObject* SetPropertyBagBase_2_GetPropertiesEnumerable_m588CFA5B43C8735F414153F02054C8B2923D0BC1 (SetPropertyBagBase_2_t9148CA09D4A212A82F0DEC9E6A8C41B7B0A1B8FF* __this, Il2CppFullySharedGenericAny ___0_container, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (SetPropertyBagBase_2_t9148CA09D4A212A82F0DEC9E6A8C41B7B0A1B8FF*, Il2CppFullySharedGenericAny, const RuntimeMethod*))SetPropertyBagBase_2_GetPropertiesEnumerable_m588CFA5B43C8735F414153F02054C8B2923D0BC1_gshared)((SetPropertyBagBase_2_t9148CA09D4A212A82F0DEC9E6A8C41B7B0A1B8FF*)__this, ___0_container, method);
}
inline void PropertyCollection_1__ctor_m0E8538F1E11CB09AB1E8846DB44D0B6806838688 (PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method)
{
	((  void (*) (PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D*, RuntimeObject*, const RuntimeMethod*))PropertyCollection_1__ctor_m0E8538F1E11CB09AB1E8846DB44D0B6806838688_gshared)(__this, ___0_enumerable, method);
}
inline void U3CGetPropertiesEnumerableU3Ed__4__ctor_m003332C152CE1ACA2858A7B06F3258883191FFF1 (U3CGetPropertiesEnumerableU3Ed__4_t5E4DFDB918CED8B1BD7311A434FA7762BBD6C390* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method)
{
	((  void (*) (U3CGetPropertiesEnumerableU3Ed__4_t5E4DFDB918CED8B1BD7311A434FA7762BBD6C390*, int32_t, const RuntimeMethod*))U3CGetPropertiesEnumerableU3Ed__4__ctor_m003332C152CE1ACA2858A7B06F3258883191FFF1_gshared)(__this, ___0_U3CU3E1__state, method);
}
inline void SetElementProperty__ctor_m113D7183F4BF3274D3F50AAC84D07FAA974233E1 (SetElementProperty_tD32144938E8C2B3852669AF6CB12C17FAB5056C1* __this, const RuntimeMethod* method)
{
	((  void (*) (SetElementProperty_tD32144938E8C2B3852669AF6CB12C17FAB5056C1*, const RuntimeMethod*))SetElementProperty__ctor_m113D7183F4BF3274D3F50AAC84D07FAA974233E1_gshared)(__this, method);
}
inline void PropertyBag_1__ctor_mF9D3CBA5488FDEB46B255A12E5CF4DDF4BD76175 (PropertyBag_1_t74F4963AD6B656900B7CACFC37AC3CDDDF818409* __this, const RuntimeMethod* method)
{
	((  void (*) (PropertyBag_1_t74F4963AD6B656900B7CACFC37AC3CDDDF818409*, const RuntimeMethod*))PropertyBag_1__ctor_mF9D3CBA5488FDEB46B255A12E5CF4DDF4BD76175_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Reset_mE977ECA73FF2496D18D2CF518B48DD1DA1FD59AA (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor__ctor_m422FB3CC93AEFF8FC5CCD62B3485779CE88317F6 (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, const RuntimeMethod* method) ;
inline void Func_1__ctor_mA3DC838EC75F2C73B5F4EC9629E754203F8C872F (Func_1_t3562516825219E4C5D56D7A5AA4DA5E7118E4032* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t3562516825219E4C5D56D7A5AA4DA5E7118E4032*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_mC73A4FCEBBAB90CB7B7AB16321F3F98FBBF12596_gshared)(__this, ___0_object, ___1_method, method);
}
inline void Action_1__ctor_m8571C48AAB9D7D1F26AAF3713EC28C721512F873 (Action_1_tB5D3D80BDD52AC40FDE982ADB98F46D82B14A520* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tB5D3D80BDD52AC40FDE982ADB98F46D82B14A520*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m685A441EC9FAC9D554B26FA83A08F4BEF96DFF0E_gshared)(__this, ___0_object, ___1_method, method);
}
inline void ObjectPool_1__ctor_mB37215927A4AB5076A2CF2C0126FC69578DBBB97 (ObjectPool_1_tDF1CBAC8F45FE7A38564D25A887E0824155AB946* __this, Func_1_t3562516825219E4C5D56D7A5AA4DA5E7118E4032* ___0_createFunc, Action_1_tB5D3D80BDD52AC40FDE982ADB98F46D82B14A520* ___1_actionOnGet, Action_1_tB5D3D80BDD52AC40FDE982ADB98F46D82B14A520* ___2_actionOnRelease, Action_1_tB5D3D80BDD52AC40FDE982ADB98F46D82B14A520* ___3_actionOnDestroy, bool ___4_collectionCheck, int32_t ___5_defaultCapacity, int32_t ___6_maxSize, const RuntimeMethod* method)
{
	((  void (*) (ObjectPool_1_tDF1CBAC8F45FE7A38564D25A887E0824155AB946*, Func_1_t3562516825219E4C5D56D7A5AA4DA5E7118E4032*, Action_1_tB5D3D80BDD52AC40FDE982ADB98F46D82B14A520*, Action_1_tB5D3D80BDD52AC40FDE982ADB98F46D82B14A520*, Action_1_tB5D3D80BDD52AC40FDE982ADB98F46D82B14A520*, bool, int32_t, int32_t, const RuntimeMethod*))ObjectPool_1__ctor_m3A4B28B9D0DC42C43CF00C078D27C9ADFA00FACC_gshared)(__this, ___0_createFunc, ___1_actionOnGet, ___2_actionOnRelease, ___3_actionOnDestroy, ___4_collectionCheck, ___5_defaultCapacity, ___6_maxSize, method);
}
inline void SetValueVisitor_1_set_group_m94980C75D99986FB92C00A15DA3C9C1E7DF4F175_inline (SetValueVisitor_1_t9F8375B4EA106BA863CE89AC21063AB486248660* __this, ConverterGroup_t2D7DEDAC22662EF5C020DE54231DC23CD0B5268A* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (SetValueVisitor_1_t9F8375B4EA106BA863CE89AC21063AB486248660*, ConverterGroup_t2D7DEDAC22662EF5C020DE54231DC23CD0B5268A*, const RuntimeMethod*))SetValueVisitor_1_set_group_m94980C75D99986FB92C00A15DA3C9C1E7DF4F175_gshared_inline)(__this, ___0_value, method);
}
inline void Func_1__ctor_mFE94160C04AE2BACCF4C9503E2C4D0AC9D5D4345 (Func_1_tE7A32FE928894E3B981CAD581AC7D8ECD5CC262A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tE7A32FE928894E3B981CAD581AC7D8ECD5CC262A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_mC73A4FCEBBAB90CB7B7AB16321F3F98FBBF12596_gshared)(__this, ___0_object, ___1_method, method);
}
inline void Action_1__ctor_m6989B1F6F0FCD26F0CEF5196F07E309FA67C6F82 (Action_1_tF18EC740BBE61E110C0C1270C9A2B66A1A72DBE1* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tF18EC740BBE61E110C0C1270C9A2B66A1A72DBE1*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m685A441EC9FAC9D554B26FA83A08F4BEF96DFF0E_gshared)(__this, ___0_object, ___1_method, method);
}
inline void ObjectPool_1__ctor_mFC6701EBAA87E699C6F8A692DEB399082F35536F (ObjectPool_1_t28F249C599ED2EFD04F6B973FEFA2541B52062DF* __this, Func_1_tE7A32FE928894E3B981CAD581AC7D8ECD5CC262A* ___0_createFunc, Action_1_tF18EC740BBE61E110C0C1270C9A2B66A1A72DBE1* ___1_actionOnGet, Action_1_tF18EC740BBE61E110C0C1270C9A2B66A1A72DBE1* ___2_actionOnRelease, Action_1_tF18EC740BBE61E110C0C1270C9A2B66A1A72DBE1* ___3_actionOnDestroy, bool ___4_collectionCheck, int32_t ___5_defaultCapacity, int32_t ___6_maxSize, const RuntimeMethod* method)
{
	((  void (*) (ObjectPool_1_t28F249C599ED2EFD04F6B973FEFA2541B52062DF*, Func_1_tE7A32FE928894E3B981CAD581AC7D8ECD5CC262A*, Action_1_tF18EC740BBE61E110C0C1270C9A2B66A1A72DBE1*, Action_1_tF18EC740BBE61E110C0C1270C9A2B66A1A72DBE1*, Action_1_tF18EC740BBE61E110C0C1270C9A2B66A1A72DBE1*, bool, int32_t, int32_t, const RuntimeMethod*))ObjectPool_1__ctor_m3A4B28B9D0DC42C43CF00C078D27C9ADFA00FACC_gshared)(__this, ___0_createFunc, ___1_actionOnGet, ___2_actionOnRelease, ___3_actionOnDestroy, ___4_collectionCheck, ___5_defaultCapacity, ___6_maxSize, method);
}
inline EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_gshared_inline)(method);
}
inline bool Set_1_Find_m6FFC5DAA463589F3E2D7EDD7D4C21ACDFE366953 (Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D* __this, Il2CppFullySharedGenericAny ___0_value, bool ___1_add, const RuntimeMethod* method)
{
	return ((  bool (*) (Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D*, Il2CppFullySharedGenericAny, bool, const RuntimeMethod*))Set_1_Find_m6FFC5DAA463589F3E2D7EDD7D4C21ACDFE366953_gshared)((Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D*)__this, ___0_value, ___1_add, method);
}
inline int32_t Set_1_InternalGetHashCode_m4A0B85ECABF6C737809F72F682E564CB502CBD7E (Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D*, Il2CppFullySharedGenericAny, const RuntimeMethod*))Set_1_InternalGetHashCode_m4A0B85ECABF6C737809F72F682E564CB502CBD7E_gshared)((Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D*)__this, ___0_value, method);
}
inline void Set_1_Resize_m042F5E61A9646B1949ADC2B8F1A01FB1C82397AE (Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D* __this, const RuntimeMethod* method)
{
	((  void (*) (Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D*, const RuntimeMethod*))Set_1_Resize_m042F5E61A9646B1949ADC2B8F1A01FB1C82397AE_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseShaderInfoStorage__ctor_m5CD6C884D6587272D9C90F8DEE2BE0C38A5C4DBB (BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_maxTextureSize_mEE557C09643222591C6F4D3F561D7A60CD403991 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D (bool ___0_condition, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_IsPowerOfTwo_m58172AEBE272F53FD34CC10641057847181E960A_inline (int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BaseShaderInfoStorage_get_disposed_mAF7F54A791E6AF75BF1AD71B1DDA85099BFCE1EF_inline (BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIRUtility_Destroy_m9E925E79E7B4A4853B47C1EFACEF2ED0A7844A23 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIRAtlasAllocator_Dispose_mB956D63F99999BA479695669265B4E6F9755D155 (UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseShaderInfoStorage_Dispose_m4346D0BFF23C896046CB1A774E6EB4F4EFC9E56F (BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2* __this, bool ___0_disposing, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisposeHelper_NotifyDisposedUsed_m7A9C988A4B96B0920E470EEA604BA42C5ABB437F (RuntimeObject* ___0_disposable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIRAtlasAllocator__ctor_m4263398EB9C4D3D4C8B752C441A1D8F1044B8DF2 (UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* __this, int32_t ___0_initialAtlasSize, int32_t ___1_maxAtlasSize, int32_t ___2_sidePadding, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIRAtlasAllocator_TryAllocate_m4DE2C4C9761F6C736122F59AA11BA6E29021E187 (UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* __this, int32_t ___0_width, int32_t ___1_height, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___2_location, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RectInt_get_x_mA1E7EF6DEAD2E900D7D56B7A3957C05081EBA9CA_inline (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RectInt_get_y_m440422264E6FCAA91E01F81486A78037AC29D878_inline (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RectInt__ctor_m6E8B3A6C7EE11257A6B438E36274116FE39B5B42_inline (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, int32_t ___0_xMin, int32_t ___1_yMin, int32_t ___2_width, int32_t ___3_height, const RuntimeMethod* method) ;
inline void ShaderInfoStorage_1_CreateOrExpandTexture_m8642AC345100DA2F4FA6D2DC5E283FB777730361 (ShaderInfoStorage_1_t32194748F3ED0F5527B4E31A28D04606FAEE539A* __this, const RuntimeMethod* method)
{
	((  void (*) (ShaderInfoStorage_1_t32194748F3ED0F5527B4E31A28D04606FAEE539A*, const RuntimeMethod*))ShaderInfoStorage_1_CreateOrExpandTexture_m8642AC345100DA2F4FA6D2DC5E283FB777730361_gshared)(__this, method);
}
inline bool NativeArray_1_get_IsCreated_m527A2C3B75C25BFF29D1D9EA88C81172FF4F5A5A_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))NativeArray_1_get_IsCreated_m527A2C3B75C25BFF29D1D9EA88C81172FF4F5A5A_gshared_inline)(__this, method);
}
inline NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 Texture2D_GetRawTextureData_TisIl2CppFullySharedGenericStruct_mDC6FE57DC7D62BAC05E6231541767FA81448490E (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*, const RuntimeMethod*))Texture2D_GetRawTextureData_TisIl2CppFullySharedGenericStruct_mDC6FE57DC7D62BAC05E6231541767FA81448490E_gshared)(__this, method);
}
inline void Func_2_Invoke_m0540CF98ABA5DA9FDF9AD2558E3C2135B4FB1C46_inline (Func_2_t781E8579E9FF2D1F9E663A289445D85212CBE782* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_arg, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Func_2_Invoke_m31CAC166FDC80DC5AE52A5AEFFEE2D9B27A1CA3F_gshared_inline)((Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*)__this, (Il2CppFullySharedGenericAny)&___0_arg, il2cppRetVal, method);
}
inline void NativeArray_1_set_Item_m629BDF69720F9FF193478E89307F9B6A56425379_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, int32_t, Il2CppFullySharedGenericStruct, const RuntimeMethod*))NativeArray_1_set_Item_m629BDF69720F9FF193478E89307F9B6A56425379_gshared_inline)((NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)__this, ___0_index, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_m36EE27E6F1BF7FB8C70A1D749DC4EE249810AA3A (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, bool ___0_updateMipmaps, bool ___1_makeNoLongerReadable, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UIRAtlasAllocator_get_physicalWidth_m0B06147154436A555CEABB9C9EB319D7D33A5398_inline (UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UIRAtlasAllocator_get_physicalHeight_m736C92B2C509CE66BAFFBA87110103BBC72DBD88_inline (UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___0_width, int32_t ___1_height, int32_t ___2_textureFormat, bool ___3_mipChain, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___0_value, const RuntimeMethod* method) ;
inline void ShaderInfoStorage_1_CpuBlit_m0E45789132A1E82D5777E6170B1D9470441F21BD (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_src, int32_t ___1_srcWidth, int32_t ___2_srcHeight, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___3_dst, int32_t ___4_dstWidth, int32_t ___5_dstHeight, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, int32_t, int32_t, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, int32_t, int32_t, const RuntimeMethod*))ShaderInfoStorage_1_CpuBlit_m0E45789132A1E82D5777E6170B1D9470441F21BD_gshared)(___0_src, ___1_srcWidth, ___2_srcHeight, ___3_dst, ___4_dstWidth, ___5_dstHeight, method);
}
inline void NativeArray_1_get_Item_mA8C8A69EB3A5D460C55DFCD27275CD5BA5E2B455_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, int32_t, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))NativeArray_1_get_Item_mA8C8A69EB3A5D460C55DFCD27275CD5BA5E2B455_gshared_inline)((NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)__this, ___0_index, il2cppRetVal, method);
}
inline void Func_1__ctor_m5FD0E1320A7A8964A7FCC0D0EA7F809E4E76E0EF (Func_1_t566D4A654882E282E54CDC3A001E05486F913903* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t566D4A654882E282E54CDC3A001E05486F913903*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_mC73A4FCEBBAB90CB7B7AB16321F3F98FBBF12596_gshared)(__this, ___0_object, ___1_method, method);
}
inline void ObjectPool_1__ctor_m3A4B28B9D0DC42C43CF00C078D27C9ADFA00FACC (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* __this, Func_1_t566D4A654882E282E54CDC3A001E05486F913903* ___0_createFunc, Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* ___1_actionOnGet, Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* ___2_actionOnRelease, Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* ___3_actionOnDestroy, bool ___4_collectionCheck, int32_t ___5_defaultCapacity, int32_t ___6_maxSize, const RuntimeMethod* method)
{
	((  void (*) (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3*, Func_1_t566D4A654882E282E54CDC3A001E05486F913903*, Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505*, Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505*, Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505*, bool, int32_t, int32_t, const RuntimeMethod*))ObjectPool_1__ctor_m3A4B28B9D0DC42C43CF00C078D27C9ADFA00FACC_gshared)(__this, ___0_createFunc, ___1_actionOnGet, ___2_actionOnRelease, ___3_actionOnDestroy, ___4_collectionCheck, ___5_defaultCapacity, ___6_maxSize, method);
}
inline void SharedObjectPool_1__ctor_m67ED400BE8DA10E8B0FDDD6DA9C81825C165F028 (SharedObjectPool_1_t85D963F2C906700E262E999BFA8D090DE8EECC81* __this, const RuntimeMethod* method)
{
	((  void (*) (SharedObjectPool_1_t85D963F2C906700E262E999BFA8D090DE8EECC81*, const RuntimeMethod*))SharedObjectPool_1__ctor_m67ED400BE8DA10E8B0FDDD6DA9C81825C165F028_gshared)(__this, method);
}
inline int32_t DynamicArray_1_Add_mB5A4743E640E5317B6099F17F158EA7AD33A4965 (DynamicArray_1_t843ECB88E0EEDBBB658FF535E6B19186D9F69540* __this, SharedObjectPoolBase_tAE197A0EF70B46EBFECED609BA08A8B2817876EE** ___0_value, const RuntimeMethod* method)
{
	return ((  int32_t (*) (DynamicArray_1_t843ECB88E0EEDBBB658FF535E6B19186D9F69540*, SharedObjectPoolBase_tAE197A0EF70B46EBFECED609BA08A8B2817876EE**, const RuntimeMethod*))DynamicArray_1_Add_m45EF0E9613FC1F328EE97FA4DD7D7EA9CD1E9A3B_gshared)(__this, ___0_value, method);
}
inline void ObjectPool_1_Clear_m361E7FE94372B74ECAE06A68282165F30C67F901 (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* __this, const RuntimeMethod* method)
{
	((  void (*) (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3*, const RuntimeMethod*))ObjectPool_1_Clear_m361E7FE94372B74ECAE06A68282165F30C67F901_gshared)(__this, method);
}
inline Il2CppSharedGenericObject* ObjectPool_1_Get_m6033387D88EF9D1AD81A89F3045733BC4B98073D_inline (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* __this, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3*, const RuntimeMethod*))ObjectPool_1_Get_m6033387D88EF9D1AD81A89F3045733BC4B98073D_gshared_inline)(__this, method);
}
inline void ObjectPool_1_Release_m3183E8F3194884123A027D720D37F341AF367E48_inline (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* __this, Il2CppSharedGenericObject* ___0_element, const RuntimeMethod* method)
{
	((  void (*) (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3*, Il2CppSharedGenericObject*, const RuntimeMethod*))ObjectPool_1_Release_m3183E8F3194884123A027D720D37F341AF367E48_gshared_inline)(__this, ___0_element, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedObjectPoolBase__ctor_mC9CAADBB0564A9A1AF52B83EED4E9A6D8C3608DF (SharedObjectPoolBase_tAE197A0EF70B46EBFECED609BA08A8B2817876EE* __this, const RuntimeMethod* method) ;
inline ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* SharedObjectPool_1_AllocatePool_m7F935FA6F34D0AE6E32C1D66B37A68EEA187A47C (const RuntimeMethod* method)
{
	return ((  ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* (*) (const RuntimeMethod*))SharedObjectPool_1_AllocatePool_m7F935FA6F34D0AE6E32C1D66B37A68EEA187A47C_gshared)(method);
}
inline void SharedStatic_1__ctor_m467F9A64986F442AA4853C5C314D0A54D887CDDC_inline (SharedStatic_1_t965CBE4F8A30F785649BF3D97C277D0927858D08* __this, void* ___0_buffer, const RuntimeMethod* method)
{
	((  void (*) (SharedStatic_1_t965CBE4F8A30F785649BF3D97C277D0927858D08*, void*, const RuntimeMethod*))SharedStatic_1__ctor_m467F9A64986F442AA4853C5C314D0A54D887CDDC_gshared_inline)(__this, ___0_buffer, method);
}
inline Il2CppFullySharedGenericStruct* UnsafeUtility_AsRef_TisIl2CppFullySharedGenericStruct_m78B0690121A96EFFDA7D6D3ADAF97940CF8136BE_inline (void* ___0_ptr, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (void*, const RuntimeMethod*))UnsafeUtility_AsRef_TisIl2CppFullySharedGenericStruct_m78B0690121A96EFFDA7D6D3ADAF97940CF8136BE_gshared_inline)(___0_ptr, method);
}
inline Il2CppFullySharedGenericStruct* SharedStatic_1_get_Data_m679BD82198B4EC1D89F2EDE946A60F4DEE8E47E2 (SharedStatic_1_t965CBE4F8A30F785649BF3D97C277D0927858D08* __this, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (SharedStatic_1_t965CBE4F8A30F785649BF3D97C277D0927858D08*, const RuntimeMethod*))SharedStatic_1_get_Data_m679BD82198B4EC1D89F2EDE946A60F4DEE8E47E2_gshared)(__this, method);
}
inline void* SharedStatic_1_get_UnsafeDataPointer_m3F411F556361D224096615DAA35B86D6B725C09D_inline (SharedStatic_1_t965CBE4F8A30F785649BF3D97C277D0927858D08* __this, const RuntimeMethod* method)
{
	return ((  void* (*) (SharedStatic_1_t965CBE4F8A30F785649BF3D97C277D0927858D08*, const RuntimeMethod*))SharedStatic_1_get_UnsafeDataPointer_m3F411F556361D224096615DAA35B86D6B725C09D_gshared_inline)(__this, method);
}
inline void SharedStatic_1__ctor_m57842D87210A109206E3DAFEBD441B46EDBC809E (SharedStatic_1_t4FCF4588C706197A62B7B4C4DFA65B0457AB498C* __this, void* ___0_buffer, const RuntimeMethod* method)
{
	((  void (*) (SharedStatic_1_t4FCF4588C706197A62B7B4C4DFA65B0457AB498C*, void*, const RuntimeMethod*))SharedStatic_1__ctor_m57842D87210A109206E3DAFEBD441B46EDBC809E_gshared)(__this, ___0_buffer, method);
}
inline Il2CppFullySharedGenericStruct* Unsafe_AsRef_TisIl2CppFullySharedGenericStruct_m3863E7E2C66FC31E1239CAA8BEA2E37D64539C00_inline (void* ___0_source, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (void*, const RuntimeMethod*))Unsafe_AsRef_TisIl2CppFullySharedGenericAny_m32B7913D5C99D58667B8F989FEFA15BF74484607_gshared_inline)(___0_source, method);
}
inline Il2CppFullySharedGenericStruct* SharedStatic_1_get_Data_m4D3D9A03646881BE9065C8939BF1CA28195FF262 (SharedStatic_1_t4FCF4588C706197A62B7B4C4DFA65B0457AB498C* __this, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (SharedStatic_1_t4FCF4588C706197A62B7B4C4DFA65B0457AB498C*, const RuntimeMethod*))SharedStatic_1_get_Data_m4D3D9A03646881BE9065C8939BF1CA28195FF262_gshared)(__this, method);
}
inline void* SharedStatic_1_get_UnsafeDataPointer_m82D3730B2B6F8768B9136641DED95E968D4EEF89 (SharedStatic_1_t4FCF4588C706197A62B7B4C4DFA65B0457AB498C* __this, const RuntimeMethod* method)
{
	return ((  void* (*) (SharedStatic_1_t4FCF4588C706197A62B7B4C4DFA65B0457AB498C*, const RuntimeMethod*))SharedStatic_1_get_UnsafeDataPointer_m82D3730B2B6F8768B9136641DED95E968D4EEF89_gshared)(__this, method);
}
inline int32_t UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* SharedStatic_GetOrCreateSharedStaticInternal_m9850783202F2E2DCA43597CD97C129C683D6FEBD (int64_t ___0_getHashCode64, int64_t ___1_getSubHashCode64, uint32_t ___2_sizeOf, uint32_t ___3_alignment, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_m0B34A53C0967727211E985563628DD61084977D9 (Type_t* ___0_type, const RuntimeMethod* method) ;
inline SharedStatic_1_t4FCF4588C706197A62B7B4C4DFA65B0457AB498C SharedStatic_1_GetOrCreateUnsafe_m160E81C99EC8BDE0A64547E1B34D7CE539082052 (uint32_t ___0_alignment, int64_t ___1_hashCode, int64_t ___2_subHashCode, const RuntimeMethod* method)
{
	return ((  SharedStatic_1_t4FCF4588C706197A62B7B4C4DFA65B0457AB498C (*) (uint32_t, int64_t, int64_t, const RuntimeMethod*))SharedStatic_1_GetOrCreateUnsafe_m160E81C99EC8BDE0A64547E1B34D7CE539082052_gshared)(___0_alignment, ___1_hashCode, ___2_subHashCode, method);
}
inline void EnumEqualityComparer_1__ctor_mAB9D8AC0C1DB19F6469764917E0B10BF5B13045C (EnumEqualityComparer_1_tBE0A26FDB9917D9CB482A0E2018093AB3394FC1A* __this, const RuntimeMethod* method)
{
	((  void (*) (EnumEqualityComparer_1_tBE0A26FDB9917D9CB482A0E2018093AB3394FC1A*, const RuntimeMethod*))EnumEqualityComparer_1__ctor_mAB9D8AC0C1DB19F6469764917E0B10BF5B13045C_gshared)(__this, method);
}
inline int32_t JitHelpers_UnsafeEnumCast_TisIl2CppFullySharedGenericStruct_mD42A78D32EE1E24FC2354DC266C314F71C1E5568 (Il2CppFullySharedGenericStruct ___0_val, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Il2CppFullySharedGenericStruct, const RuntimeMethod*))JitHelpers_UnsafeEnumCast_TisIl2CppFullySharedGenericStruct_mD42A78D32EE1E24FC2354DC266C314F71C1E5568_gshared)(___0_val, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int16_GetHashCode_mCD0A167AC8E6ACC2235F12E00C0F9BDC6ED3B6E1 (int16_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Throw_ArgumentNull_m984D1EDAF38BBB1C077EA7D7F18725B5BDBF3EF0 (String_t* ___0_parameterName, const RuntimeMethod* method) ;
inline void SignatureDecoder_2__ctor_mE9E4545341ADC55D8511126A371C234FD5CF26AF (SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A* __this, RuntimeObject* ___0_provider, MetadataReader_t762E493257DEF556B7EE188A92689B643498F23F* ___1_metadataReader, Il2CppFullySharedGenericAny ___2_genericContext, const RuntimeMethod* method)
{
	((  void (*) (SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A*, RuntimeObject*, MetadataReader_t762E493257DEF556B7EE188A92689B643498F23F*, Il2CppFullySharedGenericAny, const RuntimeMethod*))SignatureDecoder_2__ctor_mE9E4545341ADC55D8511126A371C234FD5CF26AF_gshared)((SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A*)__this, ___0_provider, ___1_metadataReader, ___2_genericContext, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BlobReader_ReadCompressedInteger_mFB680180D24D67B9B212E15A7D34A6F29841697D (BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* __this, const RuntimeMethod* method) ;
inline void SignatureDecoder_2_DecodeType_mBFC7D6644EDFE74A9D7B206EE30A1A3C5C6E95A1 (SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A* __this, BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* ___0_blobReader, bool ___1_allowTypeSpecifications, int32_t ___2_typeCode, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A*, BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203*, bool, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))SignatureDecoder_2_DecodeType_mBFC7D6644EDFE74A9D7B206EE30A1A3C5C6E95A1_gshared)((SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A*)__this, ___0_blobReader, ___1_allowTypeSpecifications, ___2_typeCode, il2cppRetVal, method);
}
inline void SignatureDecoder_2_DecodeType_mEEEA6A03C82524ECC64CBDA6924F236FD4A240F6 (SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A* __this, BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* ___0_blobReader, bool ___1_allowTypeSpecifications, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A*, BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203*, bool, Il2CppFullySharedGenericAny*, const RuntimeMethod*))SignatureDecoder_2_DecodeType_mEEEA6A03C82524ECC64CBDA6924F236FD4A240F6_gshared)((SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A*)__this, ___0_blobReader, ___1_allowTypeSpecifications, il2cppRetVal, method);
}
inline void SignatureDecoder_2_DecodeMethodSignature_m3CCFD8E0277778BE3ACCB4D477C67E9DBC319D3F (SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A* __this, BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* ___0_blobReader, MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A*, BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203*, MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB*, const RuntimeMethod*))SignatureDecoder_2_DecodeMethodSignature_m3CCFD8E0277778BE3ACCB4D477C67E9DBC319D3F_gshared)((SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A*)__this, ___0_blobReader, il2cppRetVal, method);
}
inline void SignatureDecoder_2_DecodeArrayType_m3999BC48EB209102BE87179D2559232436F4012E (SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A* __this, BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* ___0_blobReader, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A*, BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))SignatureDecoder_2_DecodeArrayType_m3999BC48EB209102BE87179D2559232436F4012E_gshared)((SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A*)__this, ___0_blobReader, il2cppRetVal, method);
}
inline void SignatureDecoder_2_DecodeModifiedType_m24FEAF9FFE7D2B7AD438FCDC033D58A1B1AC6618 (SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A* __this, BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* ___0_blobReader, bool ___1_isRequired, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A*, BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203*, bool, Il2CppFullySharedGenericAny*, const RuntimeMethod*))SignatureDecoder_2_DecodeModifiedType_m24FEAF9FFE7D2B7AD438FCDC033D58A1B1AC6618_gshared)((SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A*)__this, ___0_blobReader, ___1_isRequired, il2cppRetVal, method);
}
inline void SignatureDecoder_2_DecodeGenericTypeInstance_m349EA56EA242EC7865AA133477464F4BCF5EF328 (SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A* __this, BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* ___0_blobReader, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A*, BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))SignatureDecoder_2_DecodeGenericTypeInstance_m349EA56EA242EC7865AA133477464F4BCF5EF328_gshared)((SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A*)__this, ___0_blobReader, il2cppRetVal, method);
}
inline void SignatureDecoder_2_DecodeTypeHandle_m462DC7095CE4C5913515F8A711A0FE4B6E9B91AE (SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A* __this, BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* ___0_blobReader, uint8_t ___1_rawTypeKind, bool ___2_allowTypeSpecifications, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A*, BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203*, uint8_t, bool, Il2CppFullySharedGenericAny*, const RuntimeMethod*))SignatureDecoder_2_DecodeTypeHandle_m462DC7095CE4C5913515F8A711A0FE4B6E9B91AE_gshared)((SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A*)__this, ___0_blobReader, ___1_rawTypeKind, ___2_allowTypeSpecifications, il2cppRetVal, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_UnexpectedSignatureTypeCode_mA568FC39D69667494CC31831C5FC9F3662E28347 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_mD3DC91261B0B62B1C83F24031015161840BC483F (String_t* ___0_resourceFormat, RuntimeObject* ___1_p1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BadImageFormatException__ctor_mBE3FC6F66F5F872F8333D9FFBC7382A5FA81E78B (BadImageFormatException_t7EBAEDCD74D3274D00106EC0051755C18D20E552* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_SignatureTypeSequenceMustHaveAtLeastOneElement_m6A6C47DE7F7631E0ED5B56717FA09EE31903EDA7 (const RuntimeMethod* method) ;
inline Builder_tE6B12AF8285AC765683866492A5C6FC5E4E6710C* ImmutableArray_CreateBuilder_TisIl2CppFullySharedGenericAny_m3BE3AFD68FBD84029DBE2D0FC4FCDAC965E76E52 (int32_t ___0_initialCapacity, const RuntimeMethod* method)
{
	return ((  Builder_tE6B12AF8285AC765683866492A5C6FC5E4E6710C* (*) (int32_t, const RuntimeMethod*))ImmutableArray_CreateBuilder_TisIl2CppFullySharedGenericAny_m3BE3AFD68FBD84029DBE2D0FC4FCDAC965E76E52_gshared)(___0_initialCapacity, method);
}
inline void Builder_Add_m50A5EFE9B5BE9A0D884F129593DF06F84DF5D07C (Builder_tE6B12AF8285AC765683866492A5C6FC5E4E6710C* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Builder_tE6B12AF8285AC765683866492A5C6FC5E4E6710C*, Il2CppFullySharedGenericAny, const RuntimeMethod*))Builder_Add_m50A5EFE9B5BE9A0D884F129593DF06F84DF5D07C_gshared)((Builder_tE6B12AF8285AC765683866492A5C6FC5E4E6710C*)__this, ___0_item, method);
}
inline ImmutableArray_1_tEFAC466EB11A36BFA8CDBFFD33F22584323FD55B Builder_MoveToImmutable_mFA2D7FE73F89E17B67F06C441639C838D18105ED (Builder_tE6B12AF8285AC765683866492A5C6FC5E4E6710C* __this, const RuntimeMethod* method)
{
	return ((  ImmutableArray_1_tEFAC466EB11A36BFA8CDBFFD33F22584323FD55B (*) (Builder_tE6B12AF8285AC765683866492A5C6FC5E4E6710C*, const RuntimeMethod*))Builder_MoveToImmutable_mFA2D7FE73F89E17B67F06C441639C838D18105ED_gshared)(__this, method);
}
inline ImmutableArray_1_tEFAC466EB11A36BFA8CDBFFD33F22584323FD55B SignatureDecoder_2_DecodeTypeSequence_m55D2F0F90279B14F030A558DFB07A1753C89985E (SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A* __this, BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* ___0_blobReader, const RuntimeMethod* method)
{
	return ((  ImmutableArray_1_tEFAC466EB11A36BFA8CDBFFD33F22584323FD55B (*) (SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A*, BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203*, const RuntimeMethod*))SignatureDecoder_2_DecodeTypeSequence_m55D2F0F90279B14F030A558DFB07A1753C89985E_gshared)(__this, ___0_blobReader, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SignatureHeader_t844A1279E334F68A651EB766BC960396B8362ECC BlobReader_ReadSignatureHeader_m0E0827A3FA2C520FE2A5076EBCE45445DEF9275A (BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* __this, const RuntimeMethod* method) ;
inline void SignatureDecoder_2_CheckMethodOrPropertyHeader_m0AB83822F12F9944F190AD22BE7412DC98841E59 (SignatureHeader_t844A1279E334F68A651EB766BC960396B8362ECC ___0_header, const RuntimeMethod* method)
{
	((  void (*) (SignatureHeader_t844A1279E334F68A651EB766BC960396B8362ECC, const RuntimeMethod*))SignatureDecoder_2_CheckMethodOrPropertyHeader_m0AB83822F12F9944F190AD22BE7412DC98841E59_gshared)(___0_header, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SignatureHeader_get_IsGeneric_mA53B127F84269D6CC31707E42E60E955B6EDFDC5 (SignatureHeader_t844A1279E334F68A651EB766BC960396B8362ECC* __this, const RuntimeMethod* method) ;
inline void MethodSignature_1__ctor_mF784840EA0615986BE95433A09D5DD5A9F37B87C (MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB* __this, SignatureHeader_t844A1279E334F68A651EB766BC960396B8362ECC ___0_header, Il2CppFullySharedGenericAny ___1_returnType, int32_t ___2_requiredParameterCount, int32_t ___3_genericParameterCount, ImmutableArray_1_tEFAC466EB11A36BFA8CDBFFD33F22584323FD55B ___4_parameterTypes, const RuntimeMethod* method)
{
	((  void (*) (MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB*, SignatureHeader_t844A1279E334F68A651EB766BC960396B8362ECC, Il2CppFullySharedGenericAny, int32_t, int32_t, ImmutableArray_1_tEFAC466EB11A36BFA8CDBFFD33F22584323FD55B, const RuntimeMethod*))MethodSignature_1__ctor_mF784840EA0615986BE95433A09D5DD5A9F37B87C_gshared)((MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB*)__this, ___0_header, ___1_returnType, ___2_requiredParameterCount, ___3_genericParameterCount, ___4_parameterTypes, method);
}
inline void SignatureDecoder_2_CheckHeader_m3EB2C24E6E67E2FC8B1BC26E7A97A60FF3FEF8F1 (SignatureHeader_t844A1279E334F68A651EB766BC960396B8362ECC ___0_header, uint8_t ___1_expectedKind, const RuntimeMethod* method)
{
	((  void (*) (SignatureHeader_t844A1279E334F68A651EB766BC960396B8362ECC, uint8_t, const RuntimeMethod*))SignatureDecoder_2_CheckHeader_m3EB2C24E6E67E2FC8B1BC26E7A97A60FF3FEF8F1_gshared)(___0_header, ___1_expectedKind, method);
}
inline ImmutableArray_1_tEFAC466EB11A36BFA8CDBFFD33F22584323FD55B SignatureDecoder_2_DecodeMethodSpecificationSignature_m605269802B26311A516FD2F991A2E102B9B94218 (SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A* __this, BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* ___0_blobReader, const RuntimeMethod* method)
{
	return ((  ImmutableArray_1_tEFAC466EB11A36BFA8CDBFFD33F22584323FD55B (*) (SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A*, BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203*, const RuntimeMethod*))SignatureDecoder_2_DecodeMethodSpecificationSignature_m605269802B26311A516FD2F991A2E102B9B94218_gshared)(__this, ___0_blobReader, method);
}
inline ImmutableArray_1_tEFAC466EB11A36BFA8CDBFFD33F22584323FD55B SignatureDecoder_2_DecodeLocalSignature_mA39AB2F29437460EF1C4E7EE549A5F0870844FD4 (SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A* __this, BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* ___0_blobReader, const RuntimeMethod* method)
{
	return ((  ImmutableArray_1_tEFAC466EB11A36BFA8CDBFFD33F22584323FD55B (*) (SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A*, BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203*, const RuntimeMethod*))SignatureDecoder_2_DecodeLocalSignature_mA39AB2F29437460EF1C4E7EE549A5F0870844FD4_gshared)(__this, ___0_blobReader, method);
}
inline void SignatureDecoder_2_DecodeFieldSignature_m35BBD3F2B7D944BD4B2CACA7C8CA74FC12A0EAEF (SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A* __this, BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* ___0_blobReader, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A*, BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))SignatureDecoder_2_DecodeFieldSignature_m35BBD3F2B7D944BD4B2CACA7C8CA74FC12A0EAEF_gshared)((SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A*)__this, ___0_blobReader, il2cppRetVal, method);
}
inline Builder_t54EFBC198D4C73BF99E3C0C240BE563AB4220952* ImmutableArray_CreateBuilder_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD878A2993FC4105E0D33A7FB48916AA8EB093C9E (int32_t ___0_initialCapacity, const RuntimeMethod* method)
{
	return ((  Builder_t54EFBC198D4C73BF99E3C0C240BE563AB4220952* (*) (int32_t, const RuntimeMethod*))ImmutableArray_CreateBuilder_TisIl2CppFullySharedGenericAny_m3BE3AFD68FBD84029DBE2D0FC4FCDAC965E76E52_gshared)(___0_initialCapacity, method);
}
inline void Builder_Add_m30B16040989F9CB91EBD975864D5BA2C2379C05D (Builder_t54EFBC198D4C73BF99E3C0C240BE563AB4220952* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Builder_tE6B12AF8285AC765683866492A5C6FC5E4E6710C*, Il2CppFullySharedGenericAny, const RuntimeMethod*))Builder_Add_m50A5EFE9B5BE9A0D884F129593DF06F84DF5D07C_gshared)((Builder_tE6B12AF8285AC765683866492A5C6FC5E4E6710C*)__this, (Il2CppFullySharedGenericAny)&___0_item, method);
}
inline ImmutableArray_1_tF74A2108C98B37B14FB980028B68A7BB4931CA80 Builder_MoveToImmutable_mAA17DB184EAA2547FEC1F00BC9F54EB7243765E6 (Builder_t54EFBC198D4C73BF99E3C0C240BE563AB4220952* __this, const RuntimeMethod* method)
{
	return ((  ImmutableArray_1_tF74A2108C98B37B14FB980028B68A7BB4931CA80 (*) (Builder_t54EFBC198D4C73BF99E3C0C240BE563AB4220952*, const RuntimeMethod*))Builder_MoveToImmutable_mFA2D7FE73F89E17B67F06C441639C838D18105ED_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BlobReader_ReadCompressedSignedInteger_mF0E4DD6A0CF1C2CAAB66E7F4AE387DF9EF133E47 (BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayShape__ctor_m75E279503712171A35D70F915C4CA12D43270534 (ArrayShape_t7A27884A54299087906DAD948BD1E92C8941B714* __this, int32_t ___0_rank, ImmutableArray_1_tF74A2108C98B37B14FB980028B68A7BB4931CA80 ___1_sizes, ImmutableArray_1_tF74A2108C98B37B14FB980028B68A7BB4931CA80 ___2_lowerBounds, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityHandle_t281CE29ADEC32D51B7229800FBA887489BC18CC0 BlobReader_ReadTypeHandle_mC76AF004562894E90CE8D76B7F8CE27D8F29C257 (BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EntityHandle_get_IsNil_mE5D524FB2C6A16DD109D9B5C174BDEEED300D25E (EntityHandle_t281CE29ADEC32D51B7229800FBA887489BC18CC0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EntityHandle_get_Kind_mA40A20616F5B5CF3C9A182A4F3DAC875AB53134D (EntityHandle_t281CE29ADEC32D51B7229800FBA887489BC18CC0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeDefinitionHandle_tE85E143F0FED1313BA132EB2151B5FC04F00043B TypeDefinitionHandle_op_Explicit_m77F4F65C3FD539FCB66D0224E86B67CEC660758C (EntityHandle_t281CE29ADEC32D51B7229800FBA887489BC18CC0 ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeReferenceHandle_t587011B8BCE944E9B8A30001B04AA0FE74A88D68 TypeReferenceHandle_op_Explicit_m1ADBD51BAB33377E742748B0105A5F9B48F5EC18 (EntityHandle_t281CE29ADEC32D51B7229800FBA887489BC18CC0 ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_NotTypeDefOrRefHandle_m5A1F5DBE4B65D7E663B13748FF0B3873A74810C9 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeSpecificationHandle_t96CB2CFC648A9F2A8C49CC28B0B4ABCE240FFA49 TypeSpecificationHandle_op_Explicit_m29FD535258411856FDAB70F6DA80930BB141E93F (EntityHandle_t281CE29ADEC32D51B7229800FBA887489BC18CC0 ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_NotTypeDefOrRefOrSpecHandle_mC8BFA9B7AAECFA8D4E7729DF7180A8DE3E8543E4 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t SignatureHeader_get_Kind_m47B65C220A32C361F2DCAF120C00BE314BA745AC (SignatureHeader_t844A1279E334F68A651EB766BC960396B8362ECC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_UnexpectedSignatureHeader_m0F0A081CF90BED42F11BEFE6A7F838342B547CFC (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t SignatureHeader_get_RawValue_mA36B442B154FA437C545C12F29F4B0E6F39AD744_inline (SignatureHeader_t844A1279E334F68A651EB766BC960396B8362ECC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m48E39B67DD5FCFFE5EF82161A2712D370C44BCCD (String_t* ___0_resourceFormat, RuntimeObject* ___1_p1, RuntimeObject* ___2_p2, RuntimeObject* ___3_p3, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_UnexpectedSignatureHeader2_mB1C46A4320E6C29FBEC5CA0F7C9D327A55C5AC7D (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m8AC0F3EB11000EC5161A3E0B85CEB33F1F7D7BAD (String_t* ___0_resourceFormat, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
inline Il2CppSharedGenericObject* Lazy_1_get_Value_mF69721F6F88F7AA447B9232405C4C9B2B5663468 (Lazy_1_t75FF7FC97561B1B745A0A17BAC60C19B2C1F7C95* __this, const RuntimeMethod* method)
{
	Il2CppSharedGenericObject* il2cppRetVal;
	((  void (*) (Lazy_1_tBAA3E373F2142744F64A913EB230AA096D161A25*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Lazy_1_get_Value_mC40A4B2AF05EF6967CC0952495F59403E331E65F_gshared)((Lazy_1_tBAA3E373F2142744F64A913EB230AA096D161A25*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
inline Il2CppSharedGenericObject* GameObject_AddComponent_TisIl2CppSharedGenericObject_mEC1C0E045A5A771DA12CB28C8523DB16596946AD (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisIl2CppSharedGenericObject_mEC1C0E045A5A771DA12CB28C8523DB16596946AD_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
inline void Lazy_1__ctor_m2E6B75D68524A2B5683DAD48A01DC27E3772E467 (Lazy_1_t75FF7FC97561B1B745A0A17BAC60C19B2C1F7C95* __this, Func_1_t566D4A654882E282E54CDC3A001E05486F913903* ___0_valueFactory, const RuntimeMethod* method)
{
	((  void (*) (Lazy_1_t75FF7FC97561B1B745A0A17BAC60C19B2C1F7C95*, Func_1_t566D4A654882E282E54CDC3A001E05486F913903*, const RuntimeMethod*))Lazy_1__ctor_mCC33FEF8AF791EA7637DA6122D6F79CE2A842B0F_gshared)(__this, ___0_valueFactory, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1_inline (int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
inline void List_1_AddWithResize_mA6DFDBC2B22D6318212C6989A34784BD8303AF33 (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_AddWithResize_mA6DFDBC2B22D6318212C6989A34784BD8303AF33_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_item, method);
}
inline EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781_gshared)(method);
}
inline void UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericStruct_m2568B80B56E9BC10FC709C1FC73B9390B9B9797E_inline (void* ___0_destination, int32_t ___1_index, Il2CppFullySharedGenericStruct ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, Il2CppFullySharedGenericAny, const RuntimeMethod*))UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericAny_m3C86E25D63AB95F3D572F8010D623EB7C6D78283_gshared_inline)(___0_destination, ___1_index, (Il2CppFullySharedGenericAny)___2_value, method);
}
inline void UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline (void* ___0_source, int32_t ___1_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericAny_m295186AA082411C57485F8BDB824E4D8AC1C6D93_gshared_inline)(___0_source, ___1_index, il2cppRetVal, method);
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptPlayable_1_tFFC52EF77DAC16F087A5AE6C46A136BF12D0B7DF ScriptPlayable_1_get_Null_m912A2FF0B8009B69554A7F8271EE86D3F53711B8_gshared (const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43735));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43736));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43737));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ScriptPlayable_1_tFFC52EF77DAC16F087A5AE6C46A136BF12D0B7DF L_0 = ((ScriptPlayable_1_tFFC52EF77DAC16F087A5AE6C46A136BF12D0B7DF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___m_NullPlayable;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptPlayable_1_tFFC52EF77DAC16F087A5AE6C46A136BF12D0B7DF ScriptPlayable_1_Create_m77D74621AC1D83AFF150B5DF79E81D49DD094DF7_gshared (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___0_graph, int32_t ___1_inputCount, const RuntimeMethod* method) 
{
	Il2CppSharedGenericObject* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_graph), (&___1_inputCount));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43738));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43739));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43740));
		PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E L_0 = ___0_graph;
		il2cpp_codegen_initobj((&V_0), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_1 = V_0;
		int32_t L_2 = ___1_inputCount;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43741));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_3;
		L_3 = ScriptPlayable_1_CreateHandle_m206D067514A656DA3058D31D730CCD2D24D9938A(L_0, L_1, L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43741));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43742));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43743));
		ScriptPlayable_1_tFFC52EF77DAC16F087A5AE6C46A136BF12D0B7DF L_4;
		memset((&L_4), 0, sizeof(L_4));
		ScriptPlayable_1__ctor_m8C7AFF28002C860ABD1E289C020E81B79963C368((&L_4), L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43743));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptPlayable_1_tFFC52EF77DAC16F087A5AE6C46A136BF12D0B7DF ScriptPlayable_1_Create_m082C57742DE2980DD6ACFB9516195FF8C9B6A703_gshared (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___0_graph, Il2CppSharedGenericObject* ___1_template, int32_t ___2_inputCount, const RuntimeMethod* method) 
{
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_graph), (&___1_template), (&___2_inputCount));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43744));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43745));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43746));
		PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E L_0 = ___0_graph;
		Il2CppSharedGenericObject* L_1 = ___1_template;
		int32_t L_2 = ___2_inputCount;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43747));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_3;
		L_3 = ScriptPlayable_1_CreateHandle_m206D067514A656DA3058D31D730CCD2D24D9938A(L_0, L_1, L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43747));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43748));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43749));
		ScriptPlayable_1_tFFC52EF77DAC16F087A5AE6C46A136BF12D0B7DF L_4;
		memset((&L_4), 0, sizeof(L_4));
		ScriptPlayable_1__ctor_m8C7AFF28002C860ABD1E289C020E81B79963C368((&L_4), L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43749));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ScriptPlayable_1_CreateHandle_m206D067514A656DA3058D31D730CCD2D24D9938A_gshared (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___0_graph, Il2CppSharedGenericObject* ___1_template, int32_t ___2_inputCount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A1181D753D38A02DC44BD6DADB2AB0E89C2A576);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_graph), (&___1_template), (&___2_inputCount));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43750));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43751));
	Type_t* G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	Type_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	String_t* G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43752));
		V_0 = NULL;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43753));
		Il2CppSharedGenericObject* L_0 = ___1_template;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43754));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43755));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		RuntimeObject* L_1;
		L_1 = ScriptPlayable_1_CreateScriptInstance_m4AA924836E5FCF3D64E5FE5D5BD501F07FAA4FDB(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43755));
		V_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43756));
		goto IL_001e;
	}

IL_0012:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43757));
		Il2CppSharedGenericObject* L_2 = ___1_template;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43758));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		RuntimeObject* L_3;
		L_3 = ScriptPlayable_1_CloneScriptInstance_m6DA6C128B522C8D45857CB5197786AB898614CCF((RuntimeObject*)L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43758));
		V_0 = L_3;
	}

IL_001e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43759));
		RuntimeObject* L_4 = V_0;
		if (L_4)
		{
			goto IL_004c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43760));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 5)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43761));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43761));
		Type_t* L_7 = L_6;
		if (L_7)
		{
			G_B6_0 = L_7;
			G_B6_1 = _stringLiteral0A1181D753D38A02DC44BD6DADB2AB0E89C2A576;
			goto IL_0037;
		}
		G_B5_0 = L_7;
		G_B5_1 = _stringLiteral0A1181D753D38A02DC44BD6DADB2AB0E89C2A576;
	}
	{
		G_B7_0 = ((String_t*)(NULL));
		G_B7_1 = G_B5_1;
		goto IL_003c;
	}

IL_0037:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43762));
		NullCheck((RuntimeObject*)G_B6_0);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B6_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43762));
		G_B7_0 = L_8;
		G_B7_1 = G_B6_1;
	}

IL_003c:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43763));
		String_t* L_9;
		L_9 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B7_1, G_B7_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43763));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43764));
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_9, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43764));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43765));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43766));
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_10;
		L_10 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43766));
		return L_10;
	}

IL_004c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43767));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43768));
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_11;
		L_11 = PlayableGraph_CreatePlayableHandle_mF90D606A614FB603DBFFE4E87C325F8CC59BED67((&___0_graph), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43768));
		V_1 = L_11;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43769));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43770));
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098((&V_1), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43770));
		if (L_12)
		{
			goto IL_0063;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43771));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43772));
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_13;
		L_13 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43772));
		return L_13;
	}

IL_0063:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43773));
		int32_t L_14 = ___2_inputCount;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43774));
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_SetInputCount_m6067CD3616C428F777903FCBFD789060A2185DEE((&V_1), L_14, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43774));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43775));
		RuntimeObject* L_15 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43776));
		PlayableHandle_SetScriptInstance_m479F7C03A25E77284BE1949CF5EABE903B9B26EE((&V_1), L_15, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43776));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43777));
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_16 = V_1;
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ScriptPlayable_1_CreateScriptInstance_m4AA924836E5FCF3D64E5FE5D5BD501F07FAA4FDB_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlayableBehaviour_tEE31115F3F2D4627EB55329062D152FB778E4937_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43778));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43779));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43780));
		V_0 = (RuntimeObject*)NULL;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43781));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43782));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43782));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 5)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43783));
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43783));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43784));
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_1, L_3);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43784));
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43785));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 5)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43786));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43786));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43787));
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_7;
		L_7 = ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24(L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43787));
		V_0 = (RuntimeObject*)((Il2CppSharedGenericObject*)IsInst((RuntimeObject*)L_7, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43788));
		goto IL_0049;
	}

IL_003e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43789));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43790));
		Il2CppSharedGenericObject* L_8;
		L_8 = Activator_CreateInstance_TisIl2CppSharedGenericObject_m4C74D3D65600820EB977E87AD08D24AF782C97C3(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43790));
		V_0 = (RuntimeObject*)L_8;
	}

IL_0049:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43791));
		RuntimeObject* L_9 = V_0;
		return (RuntimeObject*)L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ScriptPlayable_1_CloneScriptInstance_m6DA6C128B522C8D45857CB5197786AB898614CCF_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICloneable_t5118E0179AA4A8D8B4D4A85BF3CE9BB363B88E14_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICloneable_t5118E0179AA4A8D8B4D4A85BF3CE9BB363B88E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_source));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43792));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43793));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43794));
		RuntimeObject* L_0 = ___0_source;
		V_0 = ((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43795));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_1 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43796));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43796));
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43797));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_3 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43798));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		RuntimeObject* L_4;
		L_4 = ScriptPlayable_1_CloneScriptInstanceFromEngineObject_m743C6C88A18E13379E8DE4055F289AC5FE853AD4(L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43798));
		return L_4;
	}

IL_0017:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43799));
		RuntimeObject* L_5 = ___0_source;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_5, ICloneable_t5118E0179AA4A8D8B4D4A85BF3CE9BB363B88E14_il2cpp_TypeInfo_var));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43800));
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43801));
		RuntimeObject* L_7 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43802));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		RuntimeObject* L_8;
		L_8 = ScriptPlayable_1_CloneScriptInstanceFromIClonable_mD5C219F1EF2ADAA448B3D0B38B47005EA9A52C41(L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43802));
		return L_8;
	}

IL_0028:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43803));
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ScriptPlayable_1_CloneScriptInstanceFromEngineObject_m743C6C88A18E13379E8DE4055F289AC5FE853AD4_gshared (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_source));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43804));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43805));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43806));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = ___0_source;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43807));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_1;
		L_1 = Object_Instantiate_m8C504E8CCCA0816BEB5BB431A0BCECE17D217A0B(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43807));
		V_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43808));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43809));
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43809));
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43810));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_4 = V_0;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_5 = L_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43811));
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Object_get_hideFlags_mA08F5E41671B8C6B5073C6B9E2799BCE6E0DF7F3(L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43811));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43812));
		NullCheck(L_5);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_5, (int32_t)((int32_t)((int32_t)L_6|((int32_t)52))), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43812));
	}

IL_001f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43813));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_7 = V_0;
		return (RuntimeObject*)L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ScriptPlayable_1_CloneScriptInstanceFromIClonable_mD5C219F1EF2ADAA448B3D0B38B47005EA9A52C41_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICloneable_t5118E0179AA4A8D8B4D4A85BF3CE9BB363B88E14_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_source));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43814));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43815));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43816));
		RuntimeObject* L_0 = ___0_source;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43817));
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, ICloneable_t5118E0179AA4A8D8B4D4A85BF3CE9BB363B88E14_il2cpp_TypeInfo_var, L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43817));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptPlayable_1__ctor_m8C7AFF28002C860ABD1E289C020E81B79963C368_gshared (ScriptPlayable_1_tFFC52EF77DAC16F087A5AE6C46A136BF12D0B7DF* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptPlayable_1_t1DE5CFA5D13CA487B2CFE443BD6C9954EA4D19D8_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_handle));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43818));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43819));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43820));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43821));
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098((&___0_handle), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43821));
		if (!L_0)
		{
			goto IL_0042;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43822));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 5)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43823));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43823));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43824));
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = PlayableHandle_GetPlayableType_mD9750F1B85DF086F52641D6AB85789601486B686((&___0_handle), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43824));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43825));
		NullCheck(L_2);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_2, L_3);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43825));
		if (L_4)
		{
			goto IL_0042;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43826));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43827));
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var)));
		Type_t* L_5;
		L_5 = PlayableHandle_GetPlayableType_mD9750F1B85DF086F52641D6AB85789601486B686((&___0_handle), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43827));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 5)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43828));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43828));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43829));
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4F7779D7284080B28F7A5CF5A87C438CBA6F6F9F)), (RuntimeObject*)L_5, (RuntimeObject*)L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43829));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43830));
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_9, L_8, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43830));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0042:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43831));
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_10 = ___0_handle;
		__this->___m_Handle = L_10;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43832));
		return;
	}
}
IL2CPP_EXTERN_C  void ScriptPlayable_1__ctor_m8C7AFF28002C860ABD1E289C020E81B79963C368_AdjustorThunk (RuntimeObject* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method)
{
	ScriptPlayable_1_tFFC52EF77DAC16F087A5AE6C46A136BF12D0B7DF* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ScriptPlayable_1_tFFC52EF77DAC16F087A5AE6C46A136BF12D0B7DF>(__this);
	ScriptPlayable_1__ctor_m8C7AFF28002C860ABD1E289C020E81B79963C368(_thisAdjusted, ___0_handle, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ScriptPlayable_1_GetHandle_m77CD4A0339EB708FE8D2A64356D2785AAF3C25D2_gshared (ScriptPlayable_1_tFFC52EF77DAC16F087A5AE6C46A136BF12D0B7DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptPlayable_1_t1DE5CFA5D13CA487B2CFE443BD6C9954EA4D19D8_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43833));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43834));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43835));
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle;
		return L_0;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ScriptPlayable_1_GetHandle_m77CD4A0339EB708FE8D2A64356D2785AAF3C25D2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ScriptPlayable_1_tFFC52EF77DAC16F087A5AE6C46A136BF12D0B7DF* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ScriptPlayable_1_tFFC52EF77DAC16F087A5AE6C46A136BF12D0B7DF>(__this);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = ScriptPlayable_1_GetHandle_m77CD4A0339EB708FE8D2A64356D2785AAF3C25D2_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* ScriptPlayable_1_GetBehaviour_mBA060949B7597E3D6373055979E13901701F16DB_gshared (ScriptPlayable_1_tFFC52EF77DAC16F087A5AE6C46A136BF12D0B7DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptPlayable_1_t1DE5CFA5D13CA487B2CFE443BD6C9954EA4D19D8_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43836));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43837));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43838));
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_0 = (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*)(&__this->___m_Handle);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43839));
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		Il2CppSharedGenericObject* L_1;
		L_1 = PlayableHandle_GetObject_TisIl2CppSharedGenericObject_m23FFD7FA8C4499545F3C1D44148CB95A3AA4B0E9(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43839));
		return L_1;
	}
}
IL2CPP_EXTERN_C  Il2CppSharedGenericObject* ScriptPlayable_1_GetBehaviour_mBA060949B7597E3D6373055979E13901701F16DB_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ScriptPlayable_1_tFFC52EF77DAC16F087A5AE6C46A136BF12D0B7DF* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ScriptPlayable_1_tFFC52EF77DAC16F087A5AE6C46A136BF12D0B7DF>(__this);
	Il2CppSharedGenericObject* _returnValue;
	_returnValue = ScriptPlayable_1_GetBehaviour_mBA060949B7597E3D6373055979E13901701F16DB(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ScriptPlayable_1_op_Implicit_mCE4D12FF2A63B53FA7882F2F1C6B205B7BC5C2DE_gshared (ScriptPlayable_1_tFFC52EF77DAC16F087A5AE6C46A136BF12D0B7DF ___0_playable, const RuntimeMethod* method) 
{
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_playable));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43840));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43841));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43842));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43843));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = ScriptPlayable_1_GetHandle_m77CD4A0339EB708FE8D2A64356D2785AAF3C25D2_inline((&___0_playable), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43843));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43844));
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_1;
		memset((&L_1), 0, sizeof(L_1));
		Playable__ctor_mD2EB35E024816AEED68795D0124EAB30E05BF6C4_inline((&L_1), L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43844));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptPlayable_1_tFFC52EF77DAC16F087A5AE6C46A136BF12D0B7DF ScriptPlayable_1_op_Explicit_mBFA317C3C3D1F89C831655DDDDF8814126CB093A_gshared (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___0_playable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_playable));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43845));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43846));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43847));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43848));
		il2cpp_codegen_runtime_class_init_inline(Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = Playable_GetHandle_m39356D23E849DC5428B262092657662C064E04F8_inline((&___0_playable), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43848));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43849));
		ScriptPlayable_1_tFFC52EF77DAC16F087A5AE6C46A136BF12D0B7DF L_1;
		memset((&L_1), 0, sizeof(L_1));
		ScriptPlayable_1__ctor_m8C7AFF28002C860ABD1E289C020E81B79963C368((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43849));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ScriptPlayable_1_Equals_m8DF810A4E287A8597C370A648FF8D2FAB0E4C1AF_gshared (ScriptPlayable_1_tFFC52EF77DAC16F087A5AE6C46A136BF12D0B7DF* __this, ScriptPlayable_1_tFFC52EF77DAC16F087A5AE6C46A136BF12D0B7DF ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptPlayable_1_t1DE5CFA5D13CA487B2CFE443BD6C9954EA4D19D8_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_other));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43850));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43851));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43852));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43853));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = ScriptPlayable_1_GetHandle_m77CD4A0339EB708FE8D2A64356D2785AAF3C25D2_inline(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43853));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43854));
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = ScriptPlayable_1_GetHandle_m77CD4A0339EB708FE8D2A64356D2785AAF3C25D2_inline((&___0_other), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43854));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43855));
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C(L_0, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43855));
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool ScriptPlayable_1_Equals_m8DF810A4E287A8597C370A648FF8D2FAB0E4C1AF_AdjustorThunk (RuntimeObject* __this, ScriptPlayable_1_tFFC52EF77DAC16F087A5AE6C46A136BF12D0B7DF ___0_other, const RuntimeMethod* method)
{
	ScriptPlayable_1_tFFC52EF77DAC16F087A5AE6C46A136BF12D0B7DF* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ScriptPlayable_1_tFFC52EF77DAC16F087A5AE6C46A136BF12D0B7DF>(__this);
	bool _returnValue;
	_returnValue = ScriptPlayable_1_Equals_m8DF810A4E287A8597C370A648FF8D2FAB0E4C1AF(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptPlayable_1__cctor_m20BCC225A06F3FD2912BFA8635CDD7AC127C7B91_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43856));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43857));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43858));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43859));
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43859));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43860));
		ScriptPlayable_1_tFFC52EF77DAC16F087A5AE6C46A136BF12D0B7DF L_1;
		memset((&L_1), 0, sizeof(L_1));
		ScriptPlayable_1__ctor_m8C7AFF28002C860ABD1E289C020E81B79963C368((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43860));
		((ScriptPlayable_1_tFFC52EF77DAC16F087A5AE6C46A136BF12D0B7DF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___m_NullPlayable = L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecureObjectPool_2_TryAdd_m7D93513ACD05D25C1CFC943ABFB578373A2FA316_gshared (Il2CppFullySharedGenericAny ___0_caller, SecurePooledObject_1_tB41A569B91ED04D56C211BA433285BBCC8C711AC* ___1_item, const RuntimeMethod* method) 
{
	void* L_0 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0)));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Il2CppConstrainedCallData L_1;
		Il2CppMethodPointer L_2 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0)) ? ___0_caller : &___0_caller), &L_1, L_0);
		typedef int32_t ( *func_L_3)(void*,const RuntimeMethod*);
		int32_t L_4 = ((func_L_3)L_2)(L_1.thisPtr,L_1.method);
		SecurePooledObject_1_tB41A569B91ED04D56C211BA433285BBCC8C711AC* L_5 = ___1_item;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SecurePooledObject_1_get_Owner_mFF138A12D4D859429D8DE30CD66B76A705DA5CDE_inline(L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if ((!(((uint32_t)L_4) == ((uint32_t)L_6))))
		{
			goto IL_0022;
		}
	}
	{
		SecurePooledObject_1_tB41A569B91ED04D56C211BA433285BBCC8C711AC* L_7 = ___1_item;
		NullCheck(L_7);
		SecurePooledObject_1_set_Owner_m32B17046B06DADCA2E63CC02630B07CE6D6B98F0_inline(L_7, (-1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		SecurePooledObject_1_tB41A569B91ED04D56C211BA433285BBCC8C711AC* L_8 = ___1_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		AllocFreeConcurrentStack_1_TryAdd_mA61194442C3D966BCFC43CE01EB70E82A0D68F14(L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
	}

IL_0022:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SecureObjectPool_2_TryTake_mA58C7D9BF4DDD3292F228411DC36009872B95274_gshared (Il2CppFullySharedGenericAny ___0_caller, SecurePooledObject_1_tB41A569B91ED04D56C211BA433285BBCC8C711AC** ___1_item, const RuntimeMethod* method) 
{
	void* L_0 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0)));
	void* L_9 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0)));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Il2CppConstrainedCallData L_1;
		Il2CppMethodPointer L_2 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0)) ? ___0_caller : &___0_caller), &L_1, L_0);
		typedef int32_t ( *func_L_3)(void*,const RuntimeMethod*);
		int32_t L_4 = ((func_L_3)L_2)(L_1.thisPtr,L_1.method);
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_002e;
		}
	}
	{
		SecurePooledObject_1_tB41A569B91ED04D56C211BA433285BBCC8C711AC** L_5 = ___1_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		bool L_6;
		L_6 = AllocFreeConcurrentStack_1_TryTake_mFCBD3B7F2E898443D8CE8EE0B981F541A392E4A1(L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		if (!L_6)
		{
			goto IL_002e;
		}
	}
	{
		SecurePooledObject_1_tB41A569B91ED04D56C211BA433285BBCC8C711AC** L_7 = ___1_item;
		SecurePooledObject_1_tB41A569B91ED04D56C211BA433285BBCC8C711AC* L_8 = il2cpp_codegen_ldind<SecurePooledObject_1_tB41A569B91ED04D56C211BA433285BBCC8C711AC*, SecurePooledObject_1_tB41A569B91ED04D56C211BA433285BBCC8C711AC*>(L_7);
		Il2CppConstrainedCallData L_10;
		Il2CppMethodPointer L_11 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0)) ? ___0_caller : &___0_caller), &L_10, L_9);
		typedef int32_t ( *func_L_12)(void*,const RuntimeMethod*);
		int32_t L_13 = ((func_L_12)L_11)(L_10.thisPtr,L_10.method);
		NullCheck(L_8);
		SecurePooledObject_1_set_Owner_m32B17046B06DADCA2E63CC02630B07CE6D6B98F0_inline(L_8, L_13, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		return (bool)1;
	}

IL_002e:
	{
		SecurePooledObject_1_tB41A569B91ED04D56C211BA433285BBCC8C711AC** L_14 = ___1_item;
		il2cpp_codegen_stind<RuntimeObject*>((RuntimeObject**)L_14, (RuntimeObject*)NULL);
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_14, (void*)(RuntimeObject*)NULL);
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SecurePooledObject_1_tB41A569B91ED04D56C211BA433285BBCC8C711AC* SecureObjectPool_2_PrepNew_m791CF16F3DB1B7D6157D98D0BAFD56BCB964F6AA_gshared (Il2CppFullySharedGenericAny ___0_caller, Il2CppFullySharedGenericAny ___1_newValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB75AD9CF9598ACFDE59B2C30F9C088335115C2B9);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_tE6CF0877FE0C3ADF3739D7E77A23A7CE557C6051 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
	void* L_6 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0)));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_tE6CF0877FE0C3ADF3739D7E77A23A7CE557C6051);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tE6CF0877FE0C3ADF3739D7E77A23A7CE557C6051);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_tE6CF0877FE0C3ADF3739D7E77A23A7CE557C6051);
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_tE6CF0877FE0C3ADF3739D7E77A23A7CE557C6051);
	SecurePooledObject_1_tB41A569B91ED04D56C211BA433285BBCC8C711AC* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9)) ? ___1_newValue : &___1_newValue), SizeOf_T_tE6CF0877FE0C3ADF3739D7E77A23A7CE557C6051);
		Requires_NotNullAllowStructs_TisIl2CppFullySharedGenericAny_mFA636B145D75366207FFFFDC501FD701260F4485((il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9)) ? il2cpp_codegen_memcpy(L_1, L_0, SizeOf_T_tE6CF0877FE0C3ADF3739D7E77A23A7CE557C6051): *(void**)L_0), _stringLiteralB75AD9CF9598ACFDE59B2C30F9C088335115C2B9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9)) ? ___1_newValue : &___1_newValue), SizeOf_T_tE6CF0877FE0C3ADF3739D7E77A23A7CE557C6051);
		SecurePooledObject_1_tB41A569B91ED04D56C211BA433285BBCC8C711AC* L_3 = (SecurePooledObject_1_tB41A569B91ED04D56C211BA433285BBCC8C711AC*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		SecurePooledObject_1__ctor_m60537F5728775A38BB3253BA017ECDF8A5B809AB(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9)) ? il2cpp_codegen_memcpy(L_4, L_2, SizeOf_T_tE6CF0877FE0C3ADF3739D7E77A23A7CE557C6051): *(void**)L_2), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		V_0 = L_3;
		SecurePooledObject_1_tB41A569B91ED04D56C211BA433285BBCC8C711AC* L_5 = V_0;
		Il2CppConstrainedCallData L_7;
		Il2CppMethodPointer L_8 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0)) ? ___0_caller : &___0_caller), &L_7, L_6);
		typedef int32_t ( *func_L_9)(void*,const RuntimeMethod*);
		int32_t L_10 = ((func_L_9)L_8)(L_7.thisPtr,L_7.method);
		NullCheck(L_5);
		SecurePooledObject_1_set_Owner_m32B17046B06DADCA2E63CC02630B07CE6D6B98F0_inline(L_5, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		SecurePooledObject_1_tB41A569B91ED04D56C211BA433285BBCC8C711AC* L_11 = V_0;
		return L_11;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecurePooledObject_1__ctor_m60537F5728775A38BB3253BA017ECDF8A5B809AB_gshared (SecurePooledObject_1_tB41A569B91ED04D56C211BA433285BBCC8C711AC* __this, Il2CppFullySharedGenericAny ___0_newValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB75AD9CF9598ACFDE59B2C30F9C088335115C2B9);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t22D06EA41DCCB89BAEC447B490D3CF41E81BB3CB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t22D06EA41DCCB89BAEC447B490D3CF41E81BB3CB);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t22D06EA41DCCB89BAEC447B490D3CF41E81BB3CB);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t22D06EA41DCCB89BAEC447B490D3CF41E81BB3CB);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? ___0_newValue : &___0_newValue), SizeOf_T_t22D06EA41DCCB89BAEC447B490D3CF41E81BB3CB);
		Requires_NotNullAllowStructs_TisIl2CppFullySharedGenericAny_mFA636B145D75366207FFFFDC501FD701260F4485((il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_1, L_0, SizeOf_T_t22D06EA41DCCB89BAEC447B490D3CF41E81BB3CB): *(void**)L_0), _stringLiteralB75AD9CF9598ACFDE59B2C30F9C088335115C2B9, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? ___0_newValue : &___0_newValue), SizeOf_T_t22D06EA41DCCB89BAEC447B490D3CF41E81BB3CB);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0), L_2, SizeOf_T_t22D06EA41DCCB89BAEC447B490D3CF41E81BB3CB);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SecurePooledObject_1_get_Owner_mFF138A12D4D859429D8DE30CD66B76A705DA5CDE_gshared (SecurePooledObject_1_tB41A569B91ED04D56C211BA433285BBCC8C711AC* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),1));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecurePooledObject_1_set_Owner_m32B17046B06DADCA2E63CC02630B07CE6D6B98F0_gshared (SecurePooledObject_1_tB41A569B91ED04D56C211BA433285BBCC8C711AC* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___0_value;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),1), L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Segment__ctor_m689E7F271E2E30F14E6576697F99A07803DA3FE4_gshared (Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* __this, int32_t ___0_boundedLength, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_boundedLength;
		SlotU5BU5D_t15A614E28C19F61C3F029DFAA2127DA15F293444* L_1 = (SlotU5BU5D_t15A614E28C19F61C3F029DFAA2127DA15F293444*)(SlotU5BU5D_t15A614E28C19F61C3F029DFAA2127DA15F293444*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), (uint32_t)L_0);
		__this->____slots = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_1);
		int32_t L_2 = ___0_boundedLength;
		__this->____slotsMask = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		V_0 = 0;
		goto IL_0035;
	}

IL_001f:
	{
		CHECK_PAUSE_POINT;
		SlotU5BU5D_t15A614E28C19F61C3F029DFAA2127DA15F293444* L_3 = __this->____slots;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = V_0;
		il2cpp_codegen_write_instance_field_data<int32_t>(((Slot_t15722483BF8D3D9AE95C0F301EAB5E41F7E1E2B9*)(L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1), L_5);
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0035:
	{
		int32_t L_7 = V_0;
		SlotU5BU5D_t15A614E28C19F61C3F029DFAA2127DA15F293444* L_8 = __this->____slots;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_001f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Segment_get_Capacity_m92681141D9BB3D36E7FD591BC9C0D7D397FCFA6A_gshared (Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SlotU5BU5D_t15A614E28C19F61C3F029DFAA2127DA15F293444* L_0 = __this->____slots;
		NullCheck(L_0);
		int32_t L_1 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_0)->max_length),NULL));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Segment_get_FreezeOffset_m8EC2B0554DDCE54682CBC146A7831D373B1EDFFF_gshared (Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SlotU5BU5D_t15A614E28C19F61C3F029DFAA2127DA15F293444* L_0 = __this->____slots;
		NullCheck(L_0);
		int32_t L_1 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_0)->max_length),NULL));
		return ((int32_t)il2cpp_codegen_multiply(L_1, 2));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Segment_EnsureFrozenForEnqueues_mC82E3164D3C343DA553195673B25AAEAB3F65003_gshared (Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		bool L_0 = __this->____frozenForEnqueues;
		if (L_0)
		{
			goto IL_004d;
		}
	}
	{
		__this->____frozenForEnqueues = (bool)1;
		il2cpp_codegen_initobj((&V_0), sizeof(SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675));
	}

IL_0017:
	{
		CHECK_PAUSE_POINT;
		PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8* L_1 = (PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8*)(&__this->____headAndTail);
		int32_t* L_2 = (int32_t*)(&L_1->___Tail);
		int32_t L_3;
		L_3 = VolatileRead(L_2);
		V_1 = L_3;
		PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8* L_4 = (PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8*)(&__this->____headAndTail);
		int32_t* L_5 = (int32_t*)(&L_4->___Tail);
		int32_t L_6 = V_1;
		int32_t L_7;
		L_7 = Segment_get_FreezeOffset_m8EC2B0554DDCE54682CBC146A7831D373B1EDFFF(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		int32_t L_8 = V_1;
		int32_t L_9;
		L_9 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(L_5, ((int32_t)il2cpp_codegen_add(L_6, L_7)), L_8, NULL);
		int32_t L_10 = V_1;
		if ((((int32_t)L_9) == ((int32_t)L_10)))
		{
			goto IL_004d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675_il2cpp_TypeInfo_var);
		SpinWait_SpinOnce_m5B74E6B15013E90667646C0D943E886D4EC596AF((&V_0), NULL);
		goto IL_0017;
	}

IL_004d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Segment_TryDequeue_m6BAB74EC08A4DC03DBFA211358808BD7C6BA0E14_gshared (Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* __this, Il2CppFullySharedGenericAny* ___0_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_tF1AD3B4BF29C34CE1B3E4E12787F926FD640211B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_T_tF1AD3B4BF29C34CE1B3E4E12787F926FD640211B);
	SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t V_5 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675));
	}

IL_0008:
	{
		CHECK_PAUSE_POINT;
		PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8* L_0 = (PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8*)(&__this->____headAndTail);
		int32_t* L_1 = (int32_t*)(&L_0->___Head);
		int32_t L_2;
		L_2 = VolatileRead(L_1);
		V_1 = L_2;
		int32_t L_3 = V_1;
		int32_t L_4 = __this->____slotsMask;
		V_2 = ((int32_t)(L_3&L_4));
		SlotU5BU5D_t15A614E28C19F61C3F029DFAA2127DA15F293444* L_5 = __this->____slots;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7;
		L_7 = VolatileRead((((int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_t15722483BF8D3D9AE95C0F301EAB5E41F7E1E2B9*)(L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1)))));
		int32_t L_8 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_7, ((int32_t)il2cpp_codegen_add(L_8, 1))));
		int32_t L_9 = V_3;
		if (L_9)
		{
			goto IL_00b7;
		}
	}
	{
		PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8* L_10 = (PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8*)(&__this->____headAndTail);
		int32_t* L_11 = (int32_t*)(&L_10->___Head);
		int32_t L_12 = V_1;
		int32_t L_13 = V_1;
		int32_t L_14;
		L_14 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(L_11, ((int32_t)il2cpp_codegen_add(L_12, 1)), L_13, NULL);
		int32_t L_15 = V_1;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_00f7;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_16 = ___0_item;
		SlotU5BU5D_t15A614E28C19F61C3F029DFAA2127DA15F293444* L_17 = __this->____slots;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		il2cpp_codegen_memcpy(L_19, il2cpp_codegen_get_instance_field_data_pointer(((Slot_t15722483BF8D3D9AE95C0F301EAB5E41F7E1E2B9*)(L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0)), SizeOf_T_tF1AD3B4BF29C34CE1B3E4E12787F926FD640211B);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_16, L_19, SizeOf_T_tF1AD3B4BF29C34CE1B3E4E12787F926FD640211B);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6), (void**)(Il2CppFullySharedGenericAny*)L_16, (void*)L_19);
		bool* L_20 = (bool*)(&__this->____preservedForObservation);
		bool L_21;
		L_21 = VolatileRead(L_20);
		if (L_21)
		{
			goto IL_00b5;
		}
	}
	{
		SlotU5BU5D_t15A614E28C19F61C3F029DFAA2127DA15F293444* L_22 = __this->____slots;
		int32_t L_23 = V_2;
		NullCheck(L_22);
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_t15722483BF8D3D9AE95C0F301EAB5E41F7E1E2B9*)(L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0)))), SizeOf_T_tF1AD3B4BF29C34CE1B3E4E12787F926FD640211B);
		SlotU5BU5D_t15A614E28C19F61C3F029DFAA2127DA15F293444* L_24 = __this->____slots;
		int32_t L_25 = V_2;
		NullCheck(L_24);
		int32_t L_26 = V_1;
		SlotU5BU5D_t15A614E28C19F61C3F029DFAA2127DA15F293444* L_27 = __this->____slots;
		NullCheck(L_27);
		int32_t L_28 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_27)->max_length),NULL));
		VolatileWrite((((int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_t15722483BF8D3D9AE95C0F301EAB5E41F7E1E2B9*)(L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1)))), ((int32_t)il2cpp_codegen_add(L_26, L_28)));
	}

IL_00b5:
	{
		return (bool)1;
	}

IL_00b7:
	{
		int32_t L_29 = V_3;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00f7;
		}
	}
	{
		bool L_30 = __this->____frozenForEnqueues;
		V_4 = L_30;
		PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8* L_31 = (PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8*)(&__this->____headAndTail);
		int32_t* L_32 = (int32_t*)(&L_31->___Tail);
		int32_t L_33;
		L_33 = VolatileRead(L_32);
		V_5 = L_33;
		int32_t L_34 = V_5;
		int32_t L_35 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_34, L_35))) <= ((int32_t)0)))
		{
			goto IL_00ee;
		}
	}
	{
		bool L_36 = V_4;
		if (!L_36)
		{
			goto IL_00f7;
		}
	}
	{
		int32_t L_37 = V_5;
		int32_t L_38;
		L_38 = Segment_get_FreezeOffset_m8EC2B0554DDCE54682CBC146A7831D373B1EDFFF(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		int32_t L_39 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_37, L_38)), L_39))) > ((int32_t)0)))
		{
			goto IL_00f7;
		}
	}

IL_00ee:
	{
		Il2CppFullySharedGenericAny* L_40 = ___0_item;
		il2cpp_codegen_initobj(L_40, SizeOf_T_tF1AD3B4BF29C34CE1B3E4E12787F926FD640211B);
		return (bool)0;
	}

IL_00f7:
	{
		il2cpp_codegen_runtime_class_init_inline(SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675_il2cpp_TypeInfo_var);
		SpinWait_SpinOnce_m5B74E6B15013E90667646C0D943E886D4EC596AF((&V_0), NULL);
		goto IL_0008;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Segment_TryEnqueue_mA7EA4BC2F27AF97D51E9BE4828C4A2C6D62D43FD_gshared (Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_tF1AD3B4BF29C34CE1B3E4E12787F926FD640211B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T_tF1AD3B4BF29C34CE1B3E4E12787F926FD640211B);
	SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675));
	}

IL_0008:
	{
		CHECK_PAUSE_POINT;
		PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8* L_0 = (PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8*)(&__this->____headAndTail);
		int32_t* L_1 = (int32_t*)(&L_0->___Tail);
		int32_t L_2;
		L_2 = VolatileRead(L_1);
		V_1 = L_2;
		int32_t L_3 = V_1;
		int32_t L_4 = __this->____slotsMask;
		V_2 = ((int32_t)(L_3&L_4));
		SlotU5BU5D_t15A614E28C19F61C3F029DFAA2127DA15F293444* L_5 = __this->____slots;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7;
		L_7 = VolatileRead((((int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_t15722483BF8D3D9AE95C0F301EAB5E41F7E1E2B9*)(L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1)))));
		int32_t L_8 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		int32_t L_9 = V_3;
		if (L_9)
		{
			goto IL_0082;
		}
	}
	{
		PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8* L_10 = (PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8*)(&__this->____headAndTail);
		int32_t* L_11 = (int32_t*)(&L_10->___Tail);
		int32_t L_12 = V_1;
		int32_t L_13 = V_1;
		int32_t L_14;
		L_14 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(L_11, ((int32_t)il2cpp_codegen_add(L_12, 1)), L_13, NULL);
		int32_t L_15 = V_1;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_0088;
		}
	}
	{
		SlotU5BU5D_t15A614E28C19F61C3F029DFAA2127DA15F293444* L_16 = __this->____slots;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		il2cpp_codegen_memcpy(L_18, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? ___0_item : &___0_item), SizeOf_T_tF1AD3B4BF29C34CE1B3E4E12787F926FD640211B);
		il2cpp_codegen_write_instance_field_data(((Slot_t15722483BF8D3D9AE95C0F301EAB5E41F7E1E2B9*)(L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0), L_18, SizeOf_T_tF1AD3B4BF29C34CE1B3E4E12787F926FD640211B);
		SlotU5BU5D_t15A614E28C19F61C3F029DFAA2127DA15F293444* L_19 = __this->____slots;
		int32_t L_20 = V_2;
		NullCheck(L_19);
		int32_t L_21 = V_1;
		VolatileWrite((((int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_t15722483BF8D3D9AE95C0F301EAB5E41F7E1E2B9*)(L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1)))), ((int32_t)il2cpp_codegen_add(L_21, 1)));
		return (bool)1;
	}

IL_0082:
	{
		int32_t L_22 = V_3;
		if ((((int32_t)L_22) >= ((int32_t)0)))
		{
			goto IL_0088;
		}
	}
	{
		return (bool)0;
	}

IL_0088:
	{
		il2cpp_codegen_runtime_class_init_inline(SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675_il2cpp_TypeInfo_var);
		SpinWait_SpinOnce_m5B74E6B15013E90667646C0D943E886D4EC596AF((&V_0), NULL);
		goto IL_0008;
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
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void SegmentSort_Execute_mC78E58E76865C7128FE531FE77A6E6881F4164D2_gshared (SegmentSort_t77C08041BA5AEB4123630C4F2B1E3931CA05E8EB* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SegmentSort_tA3020425F0298CED0962FA131D94F0DE13A41A9F_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t90254A51E92146081DA594C138EC628EC51DCE48 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6));
	const uint32_t SizeOf_U_t17CE99BE6048DB2DD027F1D18CC6C1B13373E202 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_U_t17CE99BE6048DB2DD027F1D18CC6C1B13373E202);
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_U_t17CE99BE6048DB2DD027F1D18CC6C1B13373E202);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_index));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26850));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26851));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26852));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26853));
		int32_t L_0 = ___0_index;
		int32_t L_1 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),3));
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_0, L_1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26854));
		UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* L_2 = *(UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26855));
		int32_t L_3;
		L_3 = UnsafeList_1_get_Length_m35C71DFABA31811E9ABCD2FF56F066B449E3C84A_inline((UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6*)L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26855));
		int32_t L_4 = V_0;
		int32_t L_5 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),3));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))) < ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_6 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),3));
		G_B3_0 = L_6;
		goto IL_0034;
	}

IL_0027:
	{
		UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* L_7 = *(UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26856));
		int32_t L_8;
		L_8 = UnsafeList_1_get_Length_m35C71DFABA31811E9ABCD2FF56F066B449E3C84A_inline((UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6*)L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26856));
		int32_t L_9 = V_0;
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract(L_8, L_9));
	}

IL_0034:
	{
		V_1 = G_B3_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26857));
		UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* L_10 = *(UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1));
		NullCheck(L_10);
		Il2CppFullySharedGenericStruct* L_11 = L_10->___Ptr;
		int32_t L_12 = V_0;
		intptr_t L_13 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_12,NULL));
		uint32_t L_14 = SizeOf_T_t90254A51E92146081DA594C138EC628EC51DCE48;
		int32_t L_15 = V_1;
		il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),2)), SizeOf_U_t17CE99BE6048DB2DD027F1D18CC6C1B13373E202);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26858));
		NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mC1D8773F403E942EBAE0283BDE80699517E8BBA1(((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(L_13, (int32_t)L_14)))), L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7)) ? il2cpp_codegen_memcpy(L_17, L_16, SizeOf_U_t17CE99BE6048DB2DD027F1D18CC6C1B13373E202): *(void**)L_16), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26858));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26859));
		return;
	}
}
IL2CPP_EXTERN_C  void SegmentSort_Execute_mC78E58E76865C7128FE531FE77A6E6881F4164D2_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_index, const RuntimeMethod* method)
{
	SegmentSort_t77C08041BA5AEB4123630C4F2B1E3931CA05E8EB* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<SegmentSort_t77C08041BA5AEB4123630C4F2B1E3931CA05E8EB>(__this);
	SegmentSort_Execute_mC78E58E76865C7128FE531FE77A6E6881F4164D2(_thisAdjusted, ___0_index, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void SegmentSort_Execute_m97ED75FFE35C16A6A665950CEA4336247B97F576_gshared (SegmentSort_tFC9B424627D4B0067FF3CC4718431C1A8F57DDE7* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SegmentSort_tAFAD6BC0FF4D28AACA19C20D850116D7C4DD3127_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_tEDFAA8FD05BBADC168394911E65220430C7D0DF4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const uint32_t SizeOf_U_t8D2311DA8240C7954EDAA6E5BCDA5C355F370A0F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_U_t8D2311DA8240C7954EDAA6E5BCDA5C355F370A0F);
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_U_t8D2311DA8240C7954EDAA6E5BCDA5C355F370A0F);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_index));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26785));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26786));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26787));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26788));
		int32_t L_0 = ___0_index;
		int32_t L_1 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),3));
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_0, L_1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26789));
		int32_t L_2 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),2));
		int32_t L_3 = V_0;
		int32_t L_4 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),3));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) < ((int32_t)L_4)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_5 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),3));
		G_B3_0 = L_5;
		goto IL_002a;
	}

IL_0022:
	{
		int32_t L_6 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),2));
		int32_t L_7 = V_0;
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract(L_6, L_7));
	}

IL_002a:
	{
		V_1 = G_B3_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26790));
		Il2CppFullySharedGenericStruct* L_8 = *(Il2CppFullySharedGenericStruct**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0));
		int32_t L_9 = V_0;
		intptr_t L_10 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_9,NULL));
		uint32_t L_11 = SizeOf_T_tEDFAA8FD05BBADC168394911E65220430C7D0DF4;
		int32_t L_12 = V_1;
		il2cpp_codegen_memcpy(L_13, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)), SizeOf_U_t8D2311DA8240C7954EDAA6E5BCDA5C355F370A0F);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26791));
		NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mC1D8773F403E942EBAE0283BDE80699517E8BBA1(((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(L_10, (int32_t)L_11)))), L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)) ? il2cpp_codegen_memcpy(L_14, L_13, SizeOf_U_t8D2311DA8240C7954EDAA6E5BCDA5C355F370A0F): *(void**)L_13), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26791));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26792));
		return;
	}
}
IL2CPP_EXTERN_C  void SegmentSort_Execute_m97ED75FFE35C16A6A665950CEA4336247B97F576_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_index, const RuntimeMethod* method)
{
	SegmentSort_tFC9B424627D4B0067FF3CC4718431C1A8F57DDE7* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<SegmentSort_tFC9B424627D4B0067FF3CC4718431C1A8F57DDE7>(__this);
	SegmentSort_Execute_m97ED75FFE35C16A6A665950CEA4336247B97F576(_thisAdjusted, ___0_index, method);
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
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void SegmentSortMerge_Execute_m579D8ACA39DF378AB2314BF6E1D3A820ECD3FF07_gshared (SegmentSortMerge_tF039AAEBE13FCFD17842E252416205B44F704642* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U2A_t49A648948B5A176D1945F61EB07A64274F3A9D47_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SegmentSortMerge_t460B67CD52F079BDF8B1BACBC6E46F1868DDACE8_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_tC5D5840D91416751AC0365C6321D92BE125D4D19 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6));
	void* L_39 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7)));
	const Il2CppFullySharedGenericStruct L_34 = alloca(SizeOf_T_tC5D5840D91416751AC0365C6321D92BE125D4D19);
	const Il2CppFullySharedGenericStruct L_37 = L_34;
	const Il2CppFullySharedGenericStruct L_44 = L_34;
	const Il2CppFullySharedGenericStruct L_59 = L_34;
	const Il2CppFullySharedGenericStruct L_38 = alloca(SizeOf_T_tC5D5840D91416751AC0365C6321D92BE125D4D19);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t* V_3 = NULL;
	Il2CppFullySharedGenericStruct* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Il2CppFullySharedGenericStruct V_7 = alloca(SizeOf_T_tC5D5840D91416751AC0365C6321D92BE125D4D19);
	memset(V_7, 0, SizeOf_T_tC5D5840D91416751AC0365C6321D92BE125D4D19);
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	Il2CppFullySharedGenericStruct V_12 = alloca(SizeOf_T_tC5D5840D91416751AC0365C6321D92BE125D4D19);
	memset(V_12, 0, SizeOf_T_tC5D5840D91416751AC0365C6321D92BE125D4D19);
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3), (&V_4), (&V_5), (&V_6), V_7, (&V_8), (&V_9), (&V_10), (&V_11), V_12);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26860));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26861));
	int32_t G_B5_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26862));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26863));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26864));
		int32_t L_0;
		L_0 = NativeList_1_get_Length_mBCE0D52E1FEFC40B5CFEE2F41B493C7FF6A07FA7_inline((((NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0)))), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26864));
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26865));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26866));
		Il2CppFullySharedGenericStruct* L_1;
		L_1 = NativeList_1_GetUnsafePtr_mE3414803EEC9F51E61C428C9ED08838A073AC070((((NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0)))), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26866));
		V_1 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26867));
		int32_t L_2 = V_0;
		int32_t L_3 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),2));
		int32_t L_4 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),2));
		V_2 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_2, ((int32_t)il2cpp_codegen_subtract(L_3, 1))))/L_4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26868));
		int32_t L_5 = V_2;
		uintptr_t L_6 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_5,NULL));
		if ((uintptr_t)L_6 * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_7 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_6, 4));
		int8_t* L_8;
		if (L_7 == 0)
		{
			L_8 = NULL;
		}
		else
		{
			L_8 = (int8_t*)alloca(L_7);
			memset(L_8, 0, L_7);
		}
		V_3 = (int32_t*)L_8;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26869));
		uint32_t L_9 = SizeOf_T_tC5D5840D91416751AC0365C6321D92BE125D4D19;
		int32_t L_10 = V_0;
		int64_t L_11 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply((int32_t)L_9, L_10)),NULL));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26870));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_12;
		L_12 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26870));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26871));
		void* L_13;
		L_13 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_11, ((int32_t)16), L_12, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26871));
		V_4 = (Il2CppFullySharedGenericStruct*)L_13;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26872));
		V_5 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26873));
		goto IL_012e;
	}

IL_0052:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26874));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26875));
		V_6 = (-1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26876));
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_7, SizeOf_T_tC5D5840D91416751AC0365C6321D92BE125D4D19);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26877));
		V_8 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26878));
		goto IL_00f9;
	}

IL_0066:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26879));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26880));
		int32_t L_14 = V_8;
		int32_t L_15 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),2));
		V_9 = ((int32_t)il2cpp_codegen_multiply(L_14, L_15));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26881));
		int32_t* L_16 = V_3;
		int32_t L_17 = V_8;
		intptr_t L_18 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_17,NULL));
		int32_t L_19 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(L_18, 4)))));
		V_10 = L_19;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26882));
		int32_t L_20 = V_0;
		int32_t L_21 = V_9;
		int32_t L_22 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),2));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_20, L_21))) < ((int32_t)L_22)))
		{
			goto IL_0090;
		}
	}
	{
		int32_t L_23 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),2));
		G_B5_0 = L_23;
		goto IL_0094;
	}

IL_0090:
	{
		int32_t L_24 = V_0;
		int32_t L_25 = V_9;
		G_B5_0 = ((int32_t)il2cpp_codegen_subtract(L_24, L_25));
	}

IL_0094:
	{
		V_11 = G_B5_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26883));
		int32_t L_26 = V_10;
		int32_t L_27 = V_11;
		V_13 = (bool)((((int32_t)L_26) == ((int32_t)L_27))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26884));
		bool L_28 = V_13;
		if (!L_28)
		{
			goto IL_00a4;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26885));
		goto IL_00f3;
	}

IL_00a4:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26886));
		Il2CppFullySharedGenericStruct* L_29 = V_1;
		int32_t L_30 = V_9;
		int32_t L_31 = V_10;
		intptr_t L_32 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add(L_30, L_31)),NULL));
		uint32_t L_33 = SizeOf_T_tC5D5840D91416751AC0365C6321D92BE125D4D19;
		il2cpp_codegen_memcpy(L_34, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_29, ((intptr_t)il2cpp_codegen_multiply(L_32, (int32_t)L_33)))), SizeOf_T_tC5D5840D91416751AC0365C6321D92BE125D4D19);
		il2cpp_codegen_memcpy(V_12, L_34, SizeOf_T_tC5D5840D91416751AC0365C6321D92BE125D4D19);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26887));
		int32_t L_35 = V_6;
		V_14 = (bool)((((int32_t)((((int32_t)L_35) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26888));
		bool L_36 = V_14;
		if (!L_36)
		{
			goto IL_00ea;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26889));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26890));
		il2cpp_codegen_memcpy(L_37, V_12, SizeOf_T_tC5D5840D91416751AC0365C6321D92BE125D4D19);
		il2cpp_codegen_memcpy(L_38, V_7, SizeOf_T_tC5D5840D91416751AC0365C6321D92BE125D4D19);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26891));
		Il2CppConstrainedCallData L_40;
		Il2CppMethodPointer L_41 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9), (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), &L_40, L_39);
		int32_t L_42 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_41, L_40.method,L_40.thisPtr, L_37, L_38);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26891));
		V_15 = (bool)((((int32_t)L_42) > ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26892));
		bool L_43 = V_15;
		if (!L_43)
		{
			goto IL_00e9;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26893));
		goto IL_00f3;
	}

IL_00e9:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26894));
	}

IL_00ea:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26895));
		il2cpp_codegen_memcpy(L_44, V_12, SizeOf_T_tC5D5840D91416751AC0365C6321D92BE125D4D19);
		il2cpp_codegen_memcpy(V_7, L_44, SizeOf_T_tC5D5840D91416751AC0365C6321D92BE125D4D19);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26896));
		int32_t L_45 = V_8;
		V_6 = L_45;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26897));
	}

IL_00f3:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26898));
		int32_t L_46 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_00f9:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26899));
		int32_t L_47 = V_8;
		int32_t L_48 = V_2;
		V_16 = (bool)((((int32_t)L_47) < ((int32_t)L_48))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26900));
		bool L_49 = V_16;
		if (L_49)
		{
			goto IL_0066;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26901));
		int32_t* L_50 = V_3;
		int32_t L_51 = V_6;
		intptr_t L_52 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_51,NULL));
		int32_t* L_53 = ((int32_t*)il2cpp_codegen_add((intptr_t)L_50, ((intptr_t)il2cpp_codegen_multiply(L_52, 4))));
		int32_t L_54 = il2cpp_codegen_ldind<int32_t, int32_t>(L_53);
		il2cpp_codegen_stind<int32_t>((int32_t*)L_53, (int32_t)((int32_t)il2cpp_codegen_add(L_54, 1)));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26902));
		Il2CppFullySharedGenericStruct* L_55 = V_4;
		int32_t L_56 = V_5;
		intptr_t L_57 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_56,NULL));
		uint32_t L_58 = SizeOf_T_tC5D5840D91416751AC0365C6321D92BE125D4D19;
		il2cpp_codegen_memcpy(L_59, V_7, SizeOf_T_tC5D5840D91416751AC0365C6321D92BE125D4D19);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(L_57, (int32_t)L_58)))), L_59, SizeOf_T_tC5D5840D91416751AC0365C6321D92BE125D4D19);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6), (void**)(Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(L_57, (int32_t)L_58)))), (void*)L_59);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26903));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26904));
		int32_t L_60 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_60, 1));
	}

IL_012e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26905));
		int32_t L_61 = V_5;
		int32_t L_62 = V_0;
		V_17 = (bool)((((int32_t)L_61) < ((int32_t)L_62))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26906));
		bool L_63 = V_17;
		if (L_63)
		{
			goto IL_0052;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26907));
		Il2CppFullySharedGenericStruct* L_64 = V_1;
		Il2CppFullySharedGenericStruct* L_65 = V_4;
		uint32_t L_66 = SizeOf_T_tC5D5840D91416751AC0365C6321D92BE125D4D19;
		int32_t L_67 = V_0;
		int64_t L_68 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply((int32_t)L_66, L_67)),NULL));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26908));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_64, (void*)L_65, L_68, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26908));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26909));
		return;
	}
}
IL2CPP_EXTERN_C  void SegmentSortMerge_Execute_m579D8ACA39DF378AB2314BF6E1D3A820ECD3FF07_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method)
{
	SegmentSortMerge_tF039AAEBE13FCFD17842E252416205B44F704642* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<SegmentSortMerge_tF039AAEBE13FCFD17842E252416205B44F704642>(__this);
	SegmentSortMerge_Execute_m579D8ACA39DF378AB2314BF6E1D3A820ECD3FF07(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void SegmentSortMerge_Execute_mA5E29D92467118581DCFCFDFD5CAF058DB5985A4_gshared (SegmentSortMerge_t7F8682B81EA201C79A53AD5EAF006B5F8615A74B* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U2A_t49A648948B5A176D1945F61EB07A64274F3A9D47_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SegmentSortMerge_tEED6FED4B71D9A65999B06647830199FF2BF3412_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t928F28A23381C0221BDF872C54C505D1FFDF332C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	void* L_37 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)));
	const Il2CppFullySharedGenericStruct L_32 = alloca(SizeOf_T_t928F28A23381C0221BDF872C54C505D1FFDF332C);
	const Il2CppFullySharedGenericStruct L_35 = L_32;
	const Il2CppFullySharedGenericStruct L_42 = L_32;
	const Il2CppFullySharedGenericStruct L_57 = L_32;
	const Il2CppFullySharedGenericStruct L_36 = alloca(SizeOf_T_t928F28A23381C0221BDF872C54C505D1FFDF332C);
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	Il2CppFullySharedGenericStruct* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Il2CppFullySharedGenericStruct V_5 = alloca(SizeOf_T_t928F28A23381C0221BDF872C54C505D1FFDF332C);
	memset(V_5, 0, SizeOf_T_t928F28A23381C0221BDF872C54C505D1FFDF332C);
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	Il2CppFullySharedGenericStruct V_10 = alloca(SizeOf_T_t928F28A23381C0221BDF872C54C505D1FFDF332C);
	memset(V_10, 0, SizeOf_T_t928F28A23381C0221BDF872C54C505D1FFDF332C);
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3), (&V_4), V_5, (&V_6), (&V_7), (&V_8), (&V_9), V_10);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26793));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26794));
	int32_t G_B5_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26795));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26796));
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),2));
		int32_t L_1 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),3));
		int32_t L_2 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),3));
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_0, ((int32_t)il2cpp_codegen_subtract(L_1, 1))))/L_2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26797));
		int32_t L_3 = V_0;
		uintptr_t L_4 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_3,NULL));
		if ((uintptr_t)L_4 * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_5 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_4, 4));
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
		V_1 = (int32_t*)L_6;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26798));
		uint32_t L_7 = SizeOf_T_t928F28A23381C0221BDF872C54C505D1FFDF332C;
		int32_t L_8 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),2));
		int64_t L_9 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply((int32_t)L_7, L_8)),NULL));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26799));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_10;
		L_10 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26799));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26800));
		void* L_11;
		L_11 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_9, ((int32_t)16), L_10, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26800));
		V_2 = (Il2CppFullySharedGenericStruct*)L_11;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26801));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26802));
		goto IL_0129;
	}

IL_0042:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26803));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26804));
		V_4 = (-1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26805));
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_5, SizeOf_T_t928F28A23381C0221BDF872C54C505D1FFDF332C);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26806));
		V_6 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26807));
		goto IL_00f8;
	}

IL_0056:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26808));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26809));
		int32_t L_12 = V_6;
		int32_t L_13 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),3));
		V_7 = ((int32_t)il2cpp_codegen_multiply(L_12, L_13));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26810));
		int32_t* L_14 = V_1;
		int32_t L_15 = V_6;
		intptr_t L_16 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_15,NULL));
		int32_t L_17 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(L_16, 4)))));
		V_8 = L_17;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26811));
		int32_t L_18 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),2));
		int32_t L_19 = V_7;
		int32_t L_20 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),3));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_18, L_19))) < ((int32_t)L_20)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_21 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),3));
		G_B5_0 = L_21;
		goto IL_008e;
	}

IL_0085:
	{
		int32_t L_22 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),2));
		int32_t L_23 = V_7;
		G_B5_0 = ((int32_t)il2cpp_codegen_subtract(L_22, L_23));
	}

IL_008e:
	{
		V_9 = G_B5_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26812));
		int32_t L_24 = V_8;
		int32_t L_25 = V_9;
		V_11 = (bool)((((int32_t)L_24) == ((int32_t)L_25))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26813));
		bool L_26 = V_11;
		if (!L_26)
		{
			goto IL_009e;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26814));
		goto IL_00f2;
	}

IL_009e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26815));
		Il2CppFullySharedGenericStruct* L_27 = *(Il2CppFullySharedGenericStruct**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0));
		int32_t L_28 = V_7;
		int32_t L_29 = V_8;
		intptr_t L_30 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add(L_28, L_29)),NULL));
		uint32_t L_31 = SizeOf_T_t928F28A23381C0221BDF872C54C505D1FFDF332C;
		il2cpp_codegen_memcpy(L_32, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(L_30, (int32_t)L_31)))), SizeOf_T_t928F28A23381C0221BDF872C54C505D1FFDF332C);
		il2cpp_codegen_memcpy(V_10, L_32, SizeOf_T_t928F28A23381C0221BDF872C54C505D1FFDF332C);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26816));
		int32_t L_33 = V_4;
		V_12 = (bool)((((int32_t)((((int32_t)L_33) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26817));
		bool L_34 = V_12;
		if (!L_34)
		{
			goto IL_00e9;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26818));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26819));
		il2cpp_codegen_memcpy(L_35, V_10, SizeOf_T_t928F28A23381C0221BDF872C54C505D1FFDF332C);
		il2cpp_codegen_memcpy(L_36, V_5, SizeOf_T_t928F28A23381C0221BDF872C54C505D1FFDF332C);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26820));
		Il2CppConstrainedCallData L_38;
		Il2CppMethodPointer L_39 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5), (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), &L_38, L_37);
		int32_t L_40 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_39, L_38.method,L_38.thisPtr, L_35, L_36);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26820));
		V_13 = (bool)((((int32_t)L_40) > ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26821));
		bool L_41 = V_13;
		if (!L_41)
		{
			goto IL_00e8;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26822));
		goto IL_00f2;
	}

IL_00e8:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26823));
	}

IL_00e9:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26824));
		il2cpp_codegen_memcpy(L_42, V_10, SizeOf_T_t928F28A23381C0221BDF872C54C505D1FFDF332C);
		il2cpp_codegen_memcpy(V_5, L_42, SizeOf_T_t928F28A23381C0221BDF872C54C505D1FFDF332C);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26825));
		int32_t L_43 = V_6;
		V_4 = L_43;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26826));
	}

IL_00f2:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26827));
		int32_t L_44 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00f8:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26828));
		int32_t L_45 = V_6;
		int32_t L_46 = V_0;
		V_14 = (bool)((((int32_t)L_45) < ((int32_t)L_46))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26829));
		bool L_47 = V_14;
		if (L_47)
		{
			goto IL_0056;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26830));
		int32_t* L_48 = V_1;
		int32_t L_49 = V_4;
		intptr_t L_50 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_49,NULL));
		int32_t* L_51 = ((int32_t*)il2cpp_codegen_add((intptr_t)L_48, ((intptr_t)il2cpp_codegen_multiply(L_50, 4))));
		int32_t L_52 = il2cpp_codegen_ldind<int32_t, int32_t>(L_51);
		il2cpp_codegen_stind<int32_t>((int32_t*)L_51, (int32_t)((int32_t)il2cpp_codegen_add(L_52, 1)));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26831));
		Il2CppFullySharedGenericStruct* L_53 = V_2;
		int32_t L_54 = V_3;
		intptr_t L_55 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_54,NULL));
		uint32_t L_56 = SizeOf_T_t928F28A23381C0221BDF872C54C505D1FFDF332C;
		il2cpp_codegen_memcpy(L_57, V_5, SizeOf_T_t928F28A23381C0221BDF872C54C505D1FFDF332C);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_53, ((intptr_t)il2cpp_codegen_multiply(L_55, (int32_t)L_56)))), L_57, SizeOf_T_t928F28A23381C0221BDF872C54C505D1FFDF332C);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), (void**)(Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_53, ((intptr_t)il2cpp_codegen_multiply(L_55, (int32_t)L_56)))), (void*)L_57);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26832));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26833));
		int32_t L_58 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_58, 1));
	}

IL_0129:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26834));
		int32_t L_59 = V_3;
		int32_t L_60 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),2));
		V_15 = (bool)((((int32_t)L_59) < ((int32_t)L_60))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26835));
		bool L_61 = V_15;
		if (L_61)
		{
			goto IL_0042;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26836));
		Il2CppFullySharedGenericStruct* L_62 = *(Il2CppFullySharedGenericStruct**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0));
		Il2CppFullySharedGenericStruct* L_63 = V_2;
		uint32_t L_64 = SizeOf_T_t928F28A23381C0221BDF872C54C505D1FFDF332C;
		int32_t L_65 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),2));
		int64_t L_66 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply((int32_t)L_64, L_65)),NULL));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26837));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_62, (void*)L_63, L_66, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26837));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26838));
		return;
	}
}
IL2CPP_EXTERN_C  void SegmentSortMerge_Execute_mA5E29D92467118581DCFCFDFD5CAF058DB5985A4_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method)
{
	SegmentSortMerge_t7F8682B81EA201C79A53AD5EAF006B5F8615A74B* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<SegmentSortMerge_t7F8682B81EA201C79A53AD5EAF006B5F8615A74B>(__this);
	SegmentSortMerge_Execute_mA5E29D92467118581DCFCFDFD5CAF058DB5985A4(_thisAdjusted, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Select__ctor_m65E78EF9064D6EB9C7B8BAE6CBEF440364EB316C_gshared (Select_t49EFABABACDD2D3A4008F9A105A7B7A9A677791E* __this, SelectManyObservable_2_tBEFCCBF20DBB52417E0D9CD64E2B1C731985C9A8* ___0_observable, RuntimeObject* ___1_observer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Select_tCABD89FB949979A6EDD02AC93CFEDD3D7B3A7899_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_observable), (&___1_observer));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80960));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80961));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80962));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80963));
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80963));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80964));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80965));
		SelectManyObservable_2_tBEFCCBF20DBB52417E0D9CD64E2B1C731985C9A8* L_0 = ___0_observable;
		__this->___m_Observable = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Observable), (void*)L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80966));
		RuntimeObject* L_1 = ___1_observer;
		__this->___m_Observer = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Observer), (void*)L_1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80967));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Select_OnCompleted_m79110684F14987FE515D4783F3DFEFEFD8C9BBE1_gshared (Select_t49EFABABACDD2D3A4008F9A105A7B7A9A677791E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Select_tCABD89FB949979A6EDD02AC93CFEDD3D7B3A7899_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80968));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80969));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80970));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80971));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Select_OnError_m74E7652074C1A87641986AA7D2E94A24656F5A35_gshared (Select_t49EFABABACDD2D3A4008F9A105A7B7A9A677791E* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Select_tCABD89FB949979A6EDD02AC93CFEDD3D7B3A7899_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_error));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80972));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80973));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80974));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80975));
		Exception_t* L_0 = ___0_error;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80976));
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80976));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80977));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Select_OnNext_mD1FEBB2C46C6408134AB277DF275CF0517BFE0A2_gshared (Select_t49EFABABACDD2D3A4008F9A105A7B7A9A677791E* __this, Il2CppFullySharedGenericAny ___0_evt, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Select_tCABD89FB949979A6EDD02AC93CFEDD3D7B3A7899_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TResult_tC33D4D215A77956C3D15BC55241741EF0525CBA4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10));
	const uint32_t SizeOf_TSource_t1AE4C257654609521A5A5A0954CD2BAFA3611664 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TSource_t1AE4C257654609521A5A5A0954CD2BAFA3611664);
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_TResult_tC33D4D215A77956C3D15BC55241741EF0525CBA4);
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TResult_tC33D4D215A77956C3D15BC55241741EF0525CBA4);
	RuntimeObject* V_0 = NULL;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TResult_tC33D4D215A77956C3D15BC55241741EF0525CBA4);
	memset(V_1, 0, SizeOf_TResult_tC33D4D215A77956C3D15BC55241741EF0525CBA4);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? ___0_evt : &___0_evt));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, V_1);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80978));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80979));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80980));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80981));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80982));
		SelectManyObservable_2_tBEFCCBF20DBB52417E0D9CD64E2B1C731985C9A8* L_0 = __this->___m_Observable;
		NullCheck(L_0);
		Func_2_tF410043014FD16C2F22223C6C5575F1A96738C61* L_1 = L_0->___m_Filter;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? ___0_evt : &___0_evt), SizeOf_TSource_t1AE4C257654609521A5A5A0954CD2BAFA3611664);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80983));
		NullCheck(L_1);
		RuntimeObject* L_3;
		L_3 = Func_2_Invoke_m9A4E29AC2AE388BE98912DC8658AE50E6227BE80_inline(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_2: *(void**)L_2), il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80983));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80984));
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 6), L_3);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80984));
		V_0 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{
				STORE_TRY_ID(methodExecutionContext, -1);
				{
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80992));
					RuntimeObject* L_5 = V_0;
					if (!L_5)
					{
						goto IL_0043;
					}
				}
				{
					RuntimeObject* L_6 = V_0;
					STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80993));
					NullCheck((RuntimeObject*)L_6);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80993));
				}

IL_0043:
				{
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80994));
					return;
				}
			}
		});
		try
		{
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80985));
				goto IL_002f_1;
			}

IL_001b_1:
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80986));
				RuntimeObject* L_7 = V_0;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80987));
				NullCheck(L_7);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 8), L_7, (Il2CppFullySharedGenericAny*)L_8);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80987));
				il2cpp_codegen_memcpy(V_1, L_8, SizeOf_TResult_tC33D4D215A77956C3D15BC55241741EF0525CBA4);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80988));
				RuntimeObject* L_9 = __this->___m_Observer;
				il2cpp_codegen_memcpy(L_10, V_1, SizeOf_TResult_tC33D4D215A77956C3D15BC55241741EF0525CBA4);
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80989));
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10)) ? L_10: *(void**)L_10));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80989));
			}

IL_002f_1:
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80990));
				RuntimeObject* L_11 = V_0;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80991));
				NullCheck((RuntimeObject*)L_11);
				bool L_12;
				L_12 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80991));
				if (L_12)
				{
					goto IL_001b_1;
				}
			}
			{
				goto IL_0044;
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

IL_0044:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80995));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Select__ctor_m9F44AB1BD00E6882ED41FFDCD0B1CEC573054CEF_gshared (Select_t82D21E9873838FB0EC6FEC7FBD4F9387FFFA614C* __this, SelectObservable_2_t3088BA40A393B1C6E2488B44E7931CB358FAB383* ___0_observable, RuntimeObject* ___1_observer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Select_t381ECE3B80BCBD582EFA8967879A467BAC41DA64_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_observable), (&___1_observer));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 68491));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 68492));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 68493));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 68494));
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 68494));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 68495));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 68496));
		SelectObservable_2_t3088BA40A393B1C6E2488B44E7931CB358FAB383* L_0 = ___0_observable;
		__this->___m_Observable = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Observable), (void*)L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 68497));
		RuntimeObject* L_1 = ___1_observer;
		__this->___m_Observer = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Observer), (void*)L_1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 68498));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Select_OnCompleted_m4D7049AB93D796951EBD5BE839BD6F42D8B07EFE_gshared (Select_t82D21E9873838FB0EC6FEC7FBD4F9387FFFA614C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Select_t381ECE3B80BCBD582EFA8967879A467BAC41DA64_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 68499));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 68500));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 68501));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 68502));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Select_OnError_m8B66565A55CBB8D009772B765E741FAFD543E59C_gshared (Select_t82D21E9873838FB0EC6FEC7FBD4F9387FFFA614C* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Select_t381ECE3B80BCBD582EFA8967879A467BAC41DA64_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_error));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 68503));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 68504));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 68505));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 68506));
		Exception_t* L_0 = ___0_error;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 68507));
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 68507));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 68508));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Select_OnNext_mB09C4B431CF02973FD1A60914FDBDDA4E3B80A4E_gshared (Select_t82D21E9873838FB0EC6FEC7FBD4F9387FFFA614C* __this, Il2CppFullySharedGenericAny ___0_evt, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Select_t381ECE3B80BCBD582EFA8967879A467BAC41DA64_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TResult_t9AECC22DBD9DCA6288FF362A951A9DE98314D27C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const uint32_t SizeOf_TSource_t98BE8540FED07CEEB1972959A41A25E0AE77538E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TSource_t98BE8540FED07CEEB1972959A41A25E0AE77538E);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TResult_t9AECC22DBD9DCA6288FF362A951A9DE98314D27C);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TResult_t9AECC22DBD9DCA6288FF362A951A9DE98314D27C);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TResult_t9AECC22DBD9DCA6288FF362A951A9DE98314D27C);
	memset(V_0, 0, SizeOf_TResult_t9AECC22DBD9DCA6288FF362A951A9DE98314D27C);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? ___0_evt : &___0_evt));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, V_0);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 68509));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 68510));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 68511));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 68512));
		SelectObservable_2_t3088BA40A393B1C6E2488B44E7931CB358FAB383* L_0 = __this->___m_Observable;
		NullCheck(L_0);
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_1 = L_0->___m_Filter;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? ___0_evt : &___0_evt), SizeOf_TSource_t98BE8540FED07CEEB1972959A41A25E0AE77538E);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 68513));
		NullCheck(L_1);
		Func_2_Invoke_m31CAC166FDC80DC5AE52A5AEFFEE2D9B27A1CA3F_inline(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_2: *(void**)L_2), (Il2CppFullySharedGenericAny*)L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 68513));
		il2cpp_codegen_memcpy(V_0, L_3, SizeOf_TResult_t9AECC22DBD9DCA6288FF362A951A9DE98314D27C);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 68514));
		RuntimeObject* L_4 = __this->___m_Observer;
		il2cpp_codegen_memcpy(L_5, V_0, SizeOf_TResult_t9AECC22DBD9DCA6288FF362A951A9DE98314D27C);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 68515));
		NullCheck(L_4);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_5: *(void**)L_5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 68515));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 68516));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectManyObservable_2__ctor_m068A7BA0620FA05C19C61BBAED9DC3A8D2A63016_gshared (SelectManyObservable_2_tBEFCCBF20DBB52417E0D9CD64E2B1C731985C9A8* __this, RuntimeObject* ___0_source, Func_2_tF410043014FD16C2F22223C6C5575F1A96738C61* ___1_filter, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SelectManyObservable_2_t1A6988E66E9B00CAA4106AAE1A91EDF65CE8F41D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_source), (&___1_filter));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80945));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80946));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80947));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80948));
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80948));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80949));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80950));
		RuntimeObject* L_0 = ___0_source;
		__this->___m_Source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Source), (void*)L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80951));
		Func_2_tF410043014FD16C2F22223C6C5575F1A96738C61* L_1 = ___1_filter;
		__this->___m_Filter = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Filter), (void*)L_1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80952));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SelectManyObservable_2_Subscribe_mD64FE4E9F54FC7FF7F9977FDC9AF3DCA3D562E00_gshared (SelectManyObservable_2_tBEFCCBF20DBB52417E0D9CD64E2B1C731985C9A8* __this, RuntimeObject* ___0_observer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SelectManyObservable_2_t1A6988E66E9B00CAA4106AAE1A91EDF65CE8F41D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_observer));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80953));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80954));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80955));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80956));
		RuntimeObject* L_0 = __this->___m_Source;
		RuntimeObject* L_1 = ___0_observer;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80957));
		Select_t49EFABABACDD2D3A4008F9A105A7B7A9A677791E* L_2 = (Select_t49EFABABACDD2D3A4008F9A105A7B7A9A677791E*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
		Select__ctor_m65E78EF9064D6EB9C7B8BAE6CBEF440364EB316C(L_2, __this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80957));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80958));
		NullCheck(L_0);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_0, (RuntimeObject*)L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80958));
		V_0 = L_3;
		goto IL_0016;
	}

IL_0016:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80959));
		RuntimeObject* L_4 = V_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectObservable_2__ctor_mC5488B7793116D4A34581D9981A5E23F20ACDB26_gshared (SelectObservable_2_t3088BA40A393B1C6E2488B44E7931CB358FAB383* __this, RuntimeObject* ___0_source, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___1_filter, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SelectObservable_2_tD9CB9CE41B927937E04DEEFFE9ADECD201EC80CE_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_source), (&___1_filter));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 68476));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 68477));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 68478));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 68479));
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 68479));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 68480));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 68481));
		RuntimeObject* L_0 = ___0_source;
		__this->___m_Source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Source), (void*)L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 68482));
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_1 = ___1_filter;
		__this->___m_Filter = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Filter), (void*)L_1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 68483));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SelectObservable_2_Subscribe_mC5A9A148FC0A87AC10500B20A4EB44EF0771EB32_gshared (SelectObservable_2_t3088BA40A393B1C6E2488B44E7931CB358FAB383* __this, RuntimeObject* ___0_observer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SelectObservable_2_tD9CB9CE41B927937E04DEEFFE9ADECD201EC80CE_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_observer));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 68484));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 68485));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 68486));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 68487));
		RuntimeObject* L_0 = __this->___m_Source;
		RuntimeObject* L_1 = ___0_observer;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 68488));
		Select_t82D21E9873838FB0EC6FEC7FBD4F9387FFFA614C* L_2 = (Select_t82D21E9873838FB0EC6FEC7FBD4F9387FFFA614C*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
		Select__ctor_m9F44AB1BD00E6882ED41FFDCD0B1CEC573054CEF(L_2, __this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 68488));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 68489));
		NullCheck(L_0);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_0, (RuntimeObject*)L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 68489));
		V_0 = L_3;
		goto IL_0016;
	}

IL_0016:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 68490));
		RuntimeObject* L_4 = V_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectorWorkItem__ctor_m74C06E21EA7D0688A93EDD337CCB30ED36A7C6BB_gshared (SelectorWorkItem_tBC8638E7E2C3AF1A8C278D2DC1110CB940916E04* __this, int32_t ___0_type, String_t* ___1_input, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SelectorWorkItem_t56CFA6924FE759A80AA856D558E890B6BB532B26_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_type), (&___1_input));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 142644));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 142645));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 142646));
		int32_t L_0 = ___0_type;
		__this->___type = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 142647));
		String_t* L_1 = ___1_input;
		__this->___input = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___input), (void*)L_1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 142648));
		return;
	}
}
IL2CPP_EXTERN_C  void SelectorWorkItem__ctor_m74C06E21EA7D0688A93EDD337CCB30ED36A7C6BB_AdjustorThunk (RuntimeObject* __this, int32_t ___0_type, String_t* ___1_input, const RuntimeMethod* method)
{
	SelectorWorkItem_tBC8638E7E2C3AF1A8C278D2DC1110CB940916E04* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<SelectorWorkItem_tBC8638E7E2C3AF1A8C278D2DC1110CB940916E04>(__this);
	SelectorWorkItem__ctor_m74C06E21EA7D0688A93EDD337CCB30ED36A7C6BB(_thisAdjusted, ___0_type, ___1_input, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializedDictionaryDebugView_2__ctor_m5A9135BF072B96AC303B3FE097C2EB1965EC5311_gshared (SerializedDictionaryDebugView_2_t211994FF853782F3982AD0B61DF507D3C9578780* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializedDictionaryDebugView_2_t5AC3E4D54732FC2544F3F80E4FCF66A0F1CE7E96_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_dictionary));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9834));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9835));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9836));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9837));
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9837));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9838));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9839));
		RuntimeObject* L_0 = ___0_dictionary;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9840));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9841));
		RuntimeObject* L_2 = ___0_dictionary;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9842));
		NullCheck((RuntimeObject*)L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9842));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9843));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_4 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_4, L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9843));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_001c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9844));
		RuntimeObject* L_5 = ___0_dictionary;
		__this->___dict = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dict), (void*)L_5);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9845));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* SerializedDictionaryDebugView_2_get_Items_m84F9741A540F6320DED4E39A6CE33EA14EA2E178_gshared (SerializedDictionaryDebugView_2_t211994FF853782F3982AD0B61DF507D3C9578780* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializedDictionaryDebugView_2_t5AC3E4D54732FC2544F3F80E4FCF66A0F1CE7E96_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* V_0 = NULL;
	KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* V_1 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9846));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9847));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9848));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9849));
		RuntimeObject* L_0 = __this->___dict;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9850));
		NullCheck((RuntimeObject*)L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), (RuntimeObject*)L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9850));
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_2 = (KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*)(KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4), (uint32_t)L_1);
		V_0 = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9851));
		RuntimeObject* L_3 = __this->___dict;
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_4 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9852));
		NullCheck((RuntimeObject*)L_3);
		InterfaceActionInvoker2< KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 2), (RuntimeObject*)L_3, L_4, 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9852));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9853));
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_5 = V_0;
		V_1 = L_5;
		goto IL_0024;
	}

IL_0024:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9854));
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_6 = V_1;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializedDictionary_2_SerializeKey_m96EE8933559FEE46F850E8C5067B531E38DA2CAD_gshared (SerializedDictionary_2_t16807E58D8562594E351D643B1F91C7F30C8D922* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializedDictionary_2_t11683BE25BB93BE0CF8F2B8F45A9D61E73B4F245_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_K_t02F604C65A40394DC3DCB24C809CEA5908165CEE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_K_t02F604C65A40394DC3DCB24C809CEA5908165CEE);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? ___0_key : &___0_key));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9855));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9856));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9857));
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? ___0_key : &___0_key), SizeOf_K_t02F604C65A40394DC3DCB24C809CEA5908165CEE);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_K_t02F604C65A40394DC3DCB24C809CEA5908165CEE);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializedDictionary_2_SerializeValue_m8E30F4C3822B03BD87FF23D68079DF13C9BD6279_gshared (SerializedDictionary_2_t16807E58D8562594E351D643B1F91C7F30C8D922* __this, Il2CppFullySharedGenericAny ___0_val, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializedDictionary_2_t11683BE25BB93BE0CF8F2B8F45A9D61E73B4F245_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_V_t294CEBD4085D5785776C7136BCE2018267B8562E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_V_t294CEBD4085D5785776C7136BCE2018267B8562E);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? ___0_val : &___0_val));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9858));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9859));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9860));
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? ___0_val : &___0_val), SizeOf_V_t294CEBD4085D5785776C7136BCE2018267B8562E);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_V_t294CEBD4085D5785776C7136BCE2018267B8562E);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializedDictionary_2_DeserializeKey_mE69271443597F699914413A32939368B739F8966_gshared (SerializedDictionary_2_t16807E58D8562594E351D643B1F91C7F30C8D922* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializedDictionary_2_t11683BE25BB93BE0CF8F2B8F45A9D61E73B4F245_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_K_t02F604C65A40394DC3DCB24C809CEA5908165CEE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_K_t02F604C65A40394DC3DCB24C809CEA5908165CEE);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? ___0_key : &___0_key));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9861));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9862));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9863));
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? ___0_key : &___0_key), SizeOf_K_t02F604C65A40394DC3DCB24C809CEA5908165CEE);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_K_t02F604C65A40394DC3DCB24C809CEA5908165CEE);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializedDictionary_2_DeserializeValue_m38958A54844AD2658636CC78A6C63A710CCADD4D_gshared (SerializedDictionary_2_t16807E58D8562594E351D643B1F91C7F30C8D922* __this, Il2CppFullySharedGenericAny ___0_val, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializedDictionary_2_t11683BE25BB93BE0CF8F2B8F45A9D61E73B4F245_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_V_t294CEBD4085D5785776C7136BCE2018267B8562E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_V_t294CEBD4085D5785776C7136BCE2018267B8562E);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? ___0_val : &___0_val));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9864));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9865));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9866));
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? ___0_val : &___0_val), SizeOf_V_t294CEBD4085D5785776C7136BCE2018267B8562E);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_V_t294CEBD4085D5785776C7136BCE2018267B8562E);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializedDictionary_2__ctor_mA269A744020FE244A4397215A9B763D55D79F7B1_gshared (SerializedDictionary_2_t16807E58D8562594E351D643B1F91C7F30C8D922* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SerializedDictionary_4__ctor_m0C97DC9697C989E690FDC55A26474751CFC9F29D((SerializedDictionary_4_t8F7166B0D852B2A2BA1D977932123B6693AA86FE*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializedDictionary_4_OnBeforeSerialize_m0955B6AE91B8B0D94FDA9C9EC44C06C05D6931B2_gshared (SerializedDictionary_4_t8F7166B0D852B2A2BA1D977932123B6693AA86FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializedDictionary_4_t3B6CF5A51EF9956EC8B429CC5FD4BC86823A7EEB_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_Enumerator_t683B460C190EA15A1E133E880DA0D3786608A06D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const uint32_t SizeOf_KeyValuePair_2_t96B56C791DFB693ADE8BED0BAE05CD95F77FCBCD = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	void* L_3 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)));
	const uint32_t SizeOf_K_t1FE818999E688AD86C24781F53AB0AA00C4959EE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_K_t1FE818999E688AD86C24781F53AB0AA00C4959EE);
	const uint32_t SizeOf_V_t37A1E2D1C7A2E939DC545CE1844692C5E325C068 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_V_t37A1E2D1C7A2E939DC545CE1844692C5E325C068);
	const uint32_t SizeOf_SK_tD399F51D0380137C27D4876BBFF695BA8105C23F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_SK_tD399F51D0380137C27D4876BBFF695BA8105C23F);
	const uint32_t SizeOf_SV_tBDBA492B9154043721EF07065B4555BF1935142B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_SV_tBDBA492B9154043721EF07065B4555BF1935142B);
	const Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1 L_2 = alloca(SizeOf_Enumerator_t683B460C190EA15A1E133E880DA0D3786608A06D);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_7 = alloca(SizeOf_KeyValuePair_2_t96B56C791DFB693ADE8BED0BAE05CD95F77FCBCD);
	Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1 V_0 = alloca(SizeOf_Enumerator_t683B460C190EA15A1E133E880DA0D3786608A06D);
	memset(V_0, 0, SizeOf_Enumerator_t683B460C190EA15A1E133E880DA0D3786608A06D);
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_1 = alloca(SizeOf_KeyValuePair_2_t96B56C791DFB693ADE8BED0BAE05CD95F77FCBCD);
	memset(V_1, 0, SizeOf_KeyValuePair_2_t96B56C791DFB693ADE8BED0BAE05CD95F77FCBCD);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, V_1);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9867));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9868));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9869));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9870));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = __this->___m_Keys;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9871));
		NullCheck(L_0);
		List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_inline(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9871));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9872));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_1 = __this->___m_Values;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9873));
		NullCheck(L_1);
		List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_inline(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9873));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9874));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9875));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9876));
		NullCheck((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this);
		Dictionary_2_GetEnumerator_mEC4954B142C43B5CBAA045953EAD4E168FFCD492((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9876));
		il2cpp_codegen_memcpy(V_0, L_2, SizeOf_Enumerator_t683B460C190EA15A1E133E880DA0D3786608A06D);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006a:
			{
				STORE_TRY_ID(methodExecutionContext, -1);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9892));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9893));
				Il2CppConstrainedCallData L_4;
				Il2CppMethodPointer L_5 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6), il2cpp_rgctx_method(method->klass->rgctx_data, 22), (void*)(Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)V_0, &L_4, L_3);
				typedef void ( *func_L_6)(void*,const RuntimeMethod*);
				((func_L_6)L_5)(L_4.thisPtr,L_4.method);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9893));
				return;
			}
		});
		try
		{
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9877));
				goto IL_005f_1;
			}

IL_0023_1:
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9878));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9879));
				Enumerator_get_Current_m26AF82C275C82180BB7F23C7E408BC1FEB9A38EE_inline((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)V_0, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9879));
				il2cpp_codegen_memcpy(V_1, L_7, SizeOf_KeyValuePair_2_t96B56C791DFB693ADE8BED0BAE05CD95F77FCBCD);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9880));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9881));
				List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_8 = __this->___m_Keys;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9882));
				KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_inline((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_1, (Il2CppFullySharedGenericAny*)L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9882));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9883));
				VirtualActionInvoker2Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(48, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? L_9: *(void**)L_9), (Il2CppFullySharedGenericAny*)L_10);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9883));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9884));
				NullCheck(L_8);
				List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_inline(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_10: *(void**)L_10), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9884));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9885));
				List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_11 = __this->___m_Values;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9886));
				KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_inline((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_1, (Il2CppFullySharedGenericAny*)L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9886));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9887));
				VirtualActionInvoker2Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(49, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17)) ? L_12: *(void**)L_12), (Il2CppFullySharedGenericAny*)L_13);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9887));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9888));
				NullCheck(L_11);
				List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_inline(L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_13: *(void**)L_13), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9888));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9889));
			}

IL_005f_1:
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9890));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9891));
				bool L_14;
				L_14 = Enumerator_MoveNext_m97783F73CDB1D0083A2F7D26A51847BF0843ADEA((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)V_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9891));
				if (L_14)
				{
					goto IL_0023_1;
				}
			}
			{
				goto IL_0079;
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

IL_0079:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9894));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializedDictionary_4_OnAfterDeserialize_mD1D12B59616788C4797F8D064C0B2E31E1F7B4C2_gshared (SerializedDictionary_4_t8F7166B0D852B2A2BA1D977932123B6693AA86FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializedDictionary_4_t3B6CF5A51EF9956EC8B429CC5FD4BC86823A7EEB_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_K_t1FE818999E688AD86C24781F53AB0AA00C4959EE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12));
	const uint32_t SizeOf_V_t37A1E2D1C7A2E939DC545CE1844692C5E325C068 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_K_t1FE818999E688AD86C24781F53AB0AA00C4959EE);
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_K_t1FE818999E688AD86C24781F53AB0AA00C4959EE);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_V_t37A1E2D1C7A2E939DC545CE1844692C5E325C068);
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_V_t37A1E2D1C7A2E939DC545CE1844692C5E325C068);
	const uint32_t SizeOf_SK_tD399F51D0380137C27D4876BBFF695BA8105C23F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_SK_tD399F51D0380137C27D4876BBFF695BA8105C23F);
	const uint32_t SizeOf_SV_tBDBA492B9154043721EF07065B4555BF1935142B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_SV_tBDBA492B9154043721EF07065B4555BF1935142B);
	int32_t V_0 = 0;
	bool V_1 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9895));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9896));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9897));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9898));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9899));
		NullCheck((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this);
		Dictionary_2_Clear_m935B3F117860376DC854C9E0C80CBD99BE77EEA4((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9899));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9900));
		V_0 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9901));
		goto IL_003b;
	}

IL_000c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9902));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = __this->___m_Keys;
		int32_t L_1 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9903));
		NullCheck(L_0);
		List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937(L_0, L_1, (Il2CppFullySharedGenericAny*)L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9903));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9904));
		VirtualActionInvoker2Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(50, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_2: *(void**)L_2), (Il2CppFullySharedGenericAny*)L_3);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9904));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_4 = __this->___m_Values;
		int32_t L_5 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9905));
		NullCheck(L_4);
		List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937(L_4, L_5, (Il2CppFullySharedGenericAny*)L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9905));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9906));
		VirtualActionInvoker2Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(51, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_6: *(void**)L_6), (Il2CppFullySharedGenericAny*)L_7);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9906));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9907));
		NullCheck((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this);
		Dictionary_2_Add_m54D479280472DEA042DB3933AF547E666B017333((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? il2cpp_codegen_memcpy(L_8, L_3, SizeOf_K_t1FE818999E688AD86C24781F53AB0AA00C4959EE): *(void**)L_3), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17)) ? il2cpp_codegen_memcpy(L_9, L_7, SizeOf_V_t37A1E2D1C7A2E939DC545CE1844692C5E325C068): *(void**)L_7), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9907));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9908));
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_003b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9909));
		int32_t L_11 = V_0;
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_12 = __this->___m_Keys;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9910));
		NullCheck(L_12);
		int32_t L_13;
		L_13 = List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_inline(L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9910));
		V_1 = (bool)((((int32_t)L_11) < ((int32_t)L_13))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9911));
		bool L_14 = V_1;
		if (L_14)
		{
			goto IL_000c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9912));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializedDictionary_4__ctor_m0C97DC9697C989E690FDC55A26474751CFC9F29D_gshared (SerializedDictionary_4_t8F7166B0D852B2A2BA1D977932123B6693AA86FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializedDictionary_4_t3B6CF5A51EF9956EC8B429CC5FD4BC86823A7EEB_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9913));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9914));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9915));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9916));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9916));
		__this->___m_Keys = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Keys), (void*)L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9917));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9918));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_1 = (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9918));
		__this->___m_Values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Values), (void*)L_1);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9919));
		Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 9919));
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
void SetClassValueAction_Invoke_mD793E79E4B2D7EE8A74A6A7C0854491B9063F00A_Multicast(SetClassValueAction_t5AA8656B00AE2AC5704C34B9F7A6A1F82E0BA2F7* __this, Il2CppFullySharedGenericAny ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SetClassValueAction_t5AA8656B00AE2AC5704C34B9F7A6A1F82E0BA2F7* currentDelegate = reinterpret_cast<SetClassValueAction_t5AA8656B00AE2AC5704C34B9F7A6A1F82E0BA2F7*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_container, ___1_value, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void SetClassValueAction_Invoke_mD793E79E4B2D7EE8A74A6A7C0854491B9063F00A_OpenStaticInvoker(SetClassValueAction_t5AA8656B00AE2AC5704C34B9F7A6A1F82E0BA2F7* __this, Il2CppFullySharedGenericAny ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, ___0_container, ___1_value);
}
void SetClassValueAction_Invoke_mD793E79E4B2D7EE8A74A6A7C0854491B9063F00A_ClosedStaticInvoker(SetClassValueAction_t5AA8656B00AE2AC5704C34B9F7A6A1F82E0BA2F7* __this, Il2CppFullySharedGenericAny ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, __this->___m_target, ___0_container, ___1_value);
}
void SetClassValueAction_Invoke_mD793E79E4B2D7EE8A74A6A7C0854491B9063F00A_ClosedInstInvoker(SetClassValueAction_t5AA8656B00AE2AC5704C34B9F7A6A1F82E0BA2F7* __this, Il2CppFullySharedGenericAny ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, __this->___m_target, ___0_container, ___1_value);
}
void SetClassValueAction_Invoke_mD793E79E4B2D7EE8A74A6A7C0854491B9063F00A_OpenInstInvoker(SetClassValueAction_t5AA8656B00AE2AC5704C34B9F7A6A1F82E0BA2F7* __this, Il2CppFullySharedGenericAny ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	NullCheck(___0_container);
	InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, ___0_container, ___1_value);
}
void SetClassValueAction_Invoke_mD793E79E4B2D7EE8A74A6A7C0854491B9063F00A_OpenVirtualInvoker(SetClassValueAction_t5AA8656B00AE2AC5704C34B9F7A6A1F82E0BA2F7* __this, Il2CppFullySharedGenericAny ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	NullCheck(___0_container);
	VirtualActionInvoker1Invoker< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_method_get_slot(method), (RuntimeObject*)___0_container, ___1_value);
}
void SetClassValueAction_Invoke_mD793E79E4B2D7EE8A74A6A7C0854491B9063F00A_OpenInterfaceInvoker(SetClassValueAction_t5AA8656B00AE2AC5704C34B9F7A6A1F82E0BA2F7* __this, Il2CppFullySharedGenericAny ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	NullCheck(___0_container);
	InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), (RuntimeObject*)___0_container, ___1_value);
}
void SetClassValueAction_Invoke_mD793E79E4B2D7EE8A74A6A7C0854491B9063F00A_OpenGenericVirtualInvoker(SetClassValueAction_t5AA8656B00AE2AC5704C34B9F7A6A1F82E0BA2F7* __this, Il2CppFullySharedGenericAny ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	NullCheck(___0_container);
	GenericVirtualActionInvoker1Invoker< Il2CppFullySharedGenericAny >::Invoke(method, (RuntimeObject*)___0_container, ___1_value);
}
void SetClassValueAction_Invoke_mD793E79E4B2D7EE8A74A6A7C0854491B9063F00A_OpenGenericInterfaceInvoker(SetClassValueAction_t5AA8656B00AE2AC5704C34B9F7A6A1F82E0BA2F7* __this, Il2CppFullySharedGenericAny ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	NullCheck(___0_container);
	GenericInterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny >::Invoke(method, (RuntimeObject*)___0_container, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetClassValueAction__ctor_m1583BFB0B3D1C7C1E59D54D83E6A0B539690760D_gshared (SetClassValueAction_t5AA8656B00AE2AC5704C34B9F7A6A1F82E0BA2F7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
			__this->___invoke_impl = (intptr_t)&SetClassValueAction_Invoke_mD793E79E4B2D7EE8A74A6A7C0854491B9063F00A_OpenStaticInvoker;
		else
			__this->___invoke_impl = (intptr_t)&SetClassValueAction_Invoke_mD793E79E4B2D7EE8A74A6A7C0854491B9063F00A_ClosedStaticInvoker;
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
						__this->___invoke_impl = (intptr_t)&SetClassValueAction_Invoke_mD793E79E4B2D7EE8A74A6A7C0854491B9063F00A_OpenGenericInterfaceInvoker;
					else
						__this->___invoke_impl = (intptr_t)&SetClassValueAction_Invoke_mD793E79E4B2D7EE8A74A6A7C0854491B9063F00A_OpenGenericVirtualInvoker;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&SetClassValueAction_Invoke_mD793E79E4B2D7EE8A74A6A7C0854491B9063F00A_OpenInterfaceInvoker;
					else
						__this->___invoke_impl = (intptr_t)&SetClassValueAction_Invoke_mD793E79E4B2D7EE8A74A6A7C0854491B9063F00A_OpenVirtualInvoker;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&SetClassValueAction_Invoke_mD793E79E4B2D7EE8A74A6A7C0854491B9063F00A_OpenInstInvoker;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = (intptr_t)&SetClassValueAction_Invoke_mD793E79E4B2D7EE8A74A6A7C0854491B9063F00A_ClosedInstInvoker;
		}
	}
	__this->___extra_arg = (intptr_t)&SetClassValueAction_Invoke_mD793E79E4B2D7EE8A74A6A7C0854491B9063F00A_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetClassValueAction_Invoke_mD793E79E4B2D7EE8A74A6A7C0854491B9063F00A_gshared (SetClassValueAction_t5AA8656B00AE2AC5704C34B9F7A6A1F82E0BA2F7* __this, Il2CppFullySharedGenericAny ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_container, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SetClassValueAction_BeginInvoke_m2577D22BEBAF9BA510CB1BA24A96D49D66A98B47_gshared (SetClassValueAction_t5AA8656B00AE2AC5704C34B9F7A6A1F82E0BA2F7* __this, Il2CppFullySharedGenericAny ___0_container, Il2CppFullySharedGenericAny ___1_value, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	RuntimeClass* ___0_container_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method, 0));
	__d_args[0] = (il2cpp_codegen_class_is_value_type(___0_container_klass) ? Box(___0_container_klass, ___0_container) : (void*)___0_container);
	RuntimeClass* ___1_value_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method, 1));
	__d_args[1] = (il2cpp_codegen_class_is_value_type(___1_value_klass) ? Box(___1_value_klass, ___1_value) : (void*)___1_value);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetClassValueAction_EndInvoke_m7C379282D29B5A415A47DE78756ED4D5A79270C5_gshared (SetClassValueAction_t5AA8656B00AE2AC5704C34B9F7A6A1F82E0BA2F7* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SetElementProperty_get_Name_mC7FA01CDE2DF4F326FED2443263DD4C00F789AA2_gshared (SetElementProperty_tD32144938E8C2B3852669AF6CB12C17FAB5056C1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SetElementProperty_t06D2CFA124558B117802096670BDDDA72B4ACA12_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	void* L_0 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2493));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2494));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2495));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2496));
		Il2CppConstrainedCallData L_1;
		Il2CppMethodPointer L_2 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), il2cpp_rgctx_method(method->klass->rgctx_data, 2), (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0)))), &L_1, L_0);
		typedef String_t* ( *func_L_3)(void*,const RuntimeMethod*);
		String_t* L_4 = ((func_L_3)L_2)(L_1.thisPtr,L_1.method);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2496));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetElementProperty_get_IsReadOnly_m048505BE8FEC14F79397CDD23D581C60CDEBDB4E_gshared (SetElementProperty_tD32144938E8C2B3852669AF6CB12C17FAB5056C1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SetElementProperty_t06D2CFA124558B117802096670BDDDA72B4ACA12_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2497));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2498));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2499));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetElementProperty_GetValue_mC7A5AFD718581E066036FCFB4E7A10FD6D7144EB_gshared (SetElementProperty_tD32144938E8C2B3852669AF6CB12C17FAB5056C1* __this, Il2CppFullySharedGenericAny* ___0_container, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SetElementProperty_t06D2CFA124558B117802096670BDDDA72B4ACA12_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TElement_tE40EA2FE63703FE7EEEEB69B610B387016B79F9C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TElement_tE40EA2FE63703FE7EEEEB69B610B387016B79F9C);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_container));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2500));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2501));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2502));
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0)), SizeOf_TElement_tE40EA2FE63703FE7EEEEB69B610B387016B79F9C);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TElement_tE40EA2FE63703FE7EEEEB69B610B387016B79F9C);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetElementProperty_SetValue_m396B36D4C7C10401D0FD4DECCB012B8783F35DEF_gshared (SetElementProperty_tD32144938E8C2B3852669AF6CB12C17FAB5056C1* __this, Il2CppFullySharedGenericAny* ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SetElementProperty_t06D2CFA124558B117802096670BDDDA72B4ACA12_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_container), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? ___1_value : &___1_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2503));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2504));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2505));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2506));
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral67A259F304E2092F70DB1D23B44E7E844A4A8365)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2506));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetElementProperty_get_Key_mC7BF11665BA62F86BE03F4FFC74BE8D175A4D2DD_gshared (SetElementProperty_tD32144938E8C2B3852669AF6CB12C17FAB5056C1* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SetElementProperty_t06D2CFA124558B117802096670BDDDA72B4ACA12_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TElement_tE40EA2FE63703FE7EEEEB69B610B387016B79F9C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TElement_tE40EA2FE63703FE7EEEEB69B610B387016B79F9C);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2507));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2508));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2509));
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0)), SizeOf_TElement_tE40EA2FE63703FE7EEEEB69B610B387016B79F9C);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TElement_tE40EA2FE63703FE7EEEEB69B610B387016B79F9C);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SetElementProperty_get_ObjectKey_m810DD344908CFE6F61BCFC4F82EB23BE8FA31A69_gshared (SetElementProperty_tD32144938E8C2B3852669AF6CB12C17FAB5056C1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SetElementProperty_t06D2CFA124558B117802096670BDDDA72B4ACA12_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TElement_tE40EA2FE63703FE7EEEEB69B610B387016B79F9C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TElement_tE40EA2FE63703FE7EEEEB69B610B387016B79F9C);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2510));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2511));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2512));
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0)), SizeOf_TElement_tE40EA2FE63703FE7EEEEB69B610B387016B79F9C);
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetElementProperty__ctor_m113D7183F4BF3274D3F50AAC84D07FAA974233E1_gshared (SetElementProperty_tD32144938E8C2B3852669AF6CB12C17FAB5056C1* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Property_2__ctor_m1B14349D578BF83C39983D2898529964F8906986((Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetPropertyBagBase_2_GetProperties_m96B631BCF6197E96812105CCAB61A290FA46720D_gshared (SetPropertyBagBase_2_t9148CA09D4A212A82F0DEC9E6A8C41B7B0A1B8FF* __this, PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SetPropertyBagBase_2_t411EA54CEB6C2F1A946D1000CBEE55A826789D07_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_PropertyCollection_1_t73E528A67A5ED9B3198442EFEC287A9BA54F15C2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D L_0 = alloca(SizeOf_PropertyCollection_1_t73E528A67A5ED9B3198442EFEC287A9BA54F15C2);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2450));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2451));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2452));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2453));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		PropertyCollection_1_get_Empty_mBDB0A9966BECD6790C4490416D03BF4102A8BFEF_inline((PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D*)L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2453));
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_PropertyCollection_1_t73E528A67A5ED9B3198442EFEC287A9BA54F15C2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetPropertyBagBase_2_GetProperties_m52186014433E7DF0B5ECC3717D0E88777D192CF5_gshared (SetPropertyBagBase_2_t9148CA09D4A212A82F0DEC9E6A8C41B7B0A1B8FF* __this, Il2CppFullySharedGenericAny* ___0_container, PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SetPropertyBagBase_2_t411EA54CEB6C2F1A946D1000CBEE55A826789D07_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSet_t028788C870B497884021E4C194DBBB4C6A7A3A2E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const uint32_t SizeOf_PropertyCollection_1_t73E528A67A5ED9B3198442EFEC287A9BA54F15C2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TSet_t028788C870B497884021E4C194DBBB4C6A7A3A2E);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TSet_t028788C870B497884021E4C194DBBB4C6A7A3A2E);
	const PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D L_4 = alloca(SizeOf_PropertyCollection_1_t73E528A67A5ED9B3198442EFEC287A9BA54F15C2);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_container));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2454));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2455));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2456));
		Il2CppFullySharedGenericAny* L_0 = ___0_container;
		il2cpp_codegen_memcpy(L_1, L_0, SizeOf_TSet_t028788C870B497884021E4C194DBBB4C6A7A3A2E);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2457));
		RuntimeObject* L_3;
		L_3 = SetPropertyBagBase_2_GetPropertiesEnumerable_m588CFA5B43C8735F414153F02054C8B2923D0BC1(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? il2cpp_codegen_memcpy(L_2, L_1, SizeOf_TSet_t028788C870B497884021E4C194DBBB4C6A7A3A2E): *(void**)L_1), il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2457));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2458));
		memset(L_4, 0, SizeOf_PropertyCollection_1_t73E528A67A5ED9B3198442EFEC287A9BA54F15C2);
		PropertyCollection_1__ctor_m0E8538F1E11CB09AB1E8846DB44D0B6806838688((PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D*)L_4, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2458));
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_PropertyCollection_1_t73E528A67A5ED9B3198442EFEC287A9BA54F15C2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SetPropertyBagBase_2_GetPropertiesEnumerable_m588CFA5B43C8735F414153F02054C8B2923D0BC1_gshared (SetPropertyBagBase_2_t9148CA09D4A212A82F0DEC9E6A8C41B7B0A1B8FF* __this, Il2CppFullySharedGenericAny ___0_container, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSet_t028788C870B497884021E4C194DBBB4C6A7A3A2E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TSet_t028788C870B497884021E4C194DBBB4C6A7A3A2E);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		U3CGetPropertiesEnumerableU3Ed__4_t5E4DFDB918CED8B1BD7311A434FA7762BBD6C390* L_0 = (U3CGetPropertiesEnumerableU3Ed__4_t5E4DFDB918CED8B1BD7311A434FA7762BBD6C390*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8));
		U3CGetPropertiesEnumerableU3Ed__4__ctor_m003332C152CE1ACA2858A7B06F3258883191FFF1(L_0, ((int32_t)-2), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		U3CGetPropertiesEnumerableU3Ed__4_t5E4DFDB918CED8B1BD7311A434FA7762BBD6C390* L_1 = L_0;
		NullCheck(L_1);
		il2cpp_codegen_write_instance_field_data<SetPropertyBagBase_2_t9148CA09D4A212A82F0DEC9E6A8C41B7B0A1B8FF*>(L_1, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8),5), __this);
		U3CGetPropertiesEnumerableU3Ed__4_t5E4DFDB918CED8B1BD7311A434FA7762BBD6C390* L_2 = L_1;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? ___0_container : &___0_container), SizeOf_TSet_t028788C870B497884021E4C194DBBB4C6A7A3A2E);
		NullCheck(L_2);
		il2cpp_codegen_write_instance_field_data(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8),4), L_3, SizeOf_TSet_t028788C870B497884021E4C194DBBB4C6A7A3A2E);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetPropertyBagBase_2_Unity_Properties_ICollectionPropertyBagAcceptU3CTSetU3E_Accept_mA8F4BA049786CC57821B31D0CF16EF897B8D8DB1_gshared (SetPropertyBagBase_2_t9148CA09D4A212A82F0DEC9E6A8C41B7B0A1B8FF* __this, RuntimeObject* ___0_visitor, Il2CppFullySharedGenericAny* ___1_container, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SetPropertyBagBase_2_t411EA54CEB6C2F1A946D1000CBEE55A826789D07_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_visitor), (&___1_container));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2459));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2460));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2461));
		RuntimeObject* L_0 = ___0_visitor;
		Il2CppFullySharedGenericAny* L_1 = ___1_container;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2462));
		NullCheck(L_0);
		GenericInterfaceActionInvoker2< RuntimeObject*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_rgctx_method(method->klass->rgctx_data, 11), L_0, (RuntimeObject*)__this, L_1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2462));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2463));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetPropertyBagBase_2_Unity_Properties_ISetPropertyBagAcceptU3CTSetU3E_Accept_mA407BD08B965783368D5A4BF8EB4C6A92B0E05AB_gshared (SetPropertyBagBase_2_t9148CA09D4A212A82F0DEC9E6A8C41B7B0A1B8FF* __this, RuntimeObject* ___0_visitor, Il2CppFullySharedGenericAny* ___1_container, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SetPropertyBagBase_2_t411EA54CEB6C2F1A946D1000CBEE55A826789D07_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_visitor), (&___1_container));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2464));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2465));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2466));
		RuntimeObject* L_0 = ___0_visitor;
		Il2CppFullySharedGenericAny* L_1 = ___1_container;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2467));
		NullCheck(L_0);
		GenericInterfaceActionInvoker2< RuntimeObject*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_rgctx_method(method->klass->rgctx_data, 13), L_0, (RuntimeObject*)__this, L_1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2467));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2468));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetPropertyBagBase_2_TryGetProperty_m92338D3F6F37E21998C066A751863AC6FE1817B2_gshared (SetPropertyBagBase_2_t9148CA09D4A212A82F0DEC9E6A8C41B7B0A1B8FF* __this, Il2CppFullySharedGenericAny* ___0_container, RuntimeObject* ___1_key, RuntimeObject** ___2_property, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SetPropertyBagBase_2_t411EA54CEB6C2F1A946D1000CBEE55A826789D07_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	void* L_4 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)));
	const uint32_t SizeOf_TElement_tC94792FA9C008B12AD8E5B7B4FC6A094AA8484D9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TElement_tC94792FA9C008B12AD8E5B7B4FC6A094AA8484D9);
	const Il2CppFullySharedGenericAny L_12 = L_2;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_container), (&___1_key), (&___2_property));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2479));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2480));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2481));
		Il2CppFullySharedGenericAny* L_0 = ___0_container;
		RuntimeObject* L_1 = ___1_key;
		void* L_3 = UnBox_Any(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 16), L_2);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2482));
		Il2CppConstrainedCallData L_5;
		Il2CppMethodPointer L_6 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 18), (void*)L_0, &L_5, L_4);
		bool L_7 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(L_6, L_5.method,L_5.thisPtr, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 16)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_3)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_3))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2482));
		if (!L_7)
		{
			goto IL_0029;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2483));
		RuntimeObject** L_8 = ___2_property;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2484));
		SetElementProperty_tD32144938E8C2B3852669AF6CB12C17FAB5056C1* L_9 = (SetElementProperty_tD32144938E8C2B3852669AF6CB12C17FAB5056C1*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
		SetElementProperty__ctor_m113D7183F4BF3274D3F50AAC84D07FAA974233E1(L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2484));
		SetElementProperty_tD32144938E8C2B3852669AF6CB12C17FAB5056C1* L_10 = L_9;
		RuntimeObject* L_11 = ___1_key;
		void* L_13 = UnBox_Any(L_11, il2cpp_rgctx_data(method->klass->rgctx_data, 16), L_12);
		NullCheck(L_10);
		il2cpp_codegen_write_instance_field_data(L_10, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15),0), (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_13)), SizeOf_TElement_tC94792FA9C008B12AD8E5B7B4FC6A094AA8484D9);
		il2cpp_codegen_stind<RuntimeObject*>((RuntimeObject**)L_8, (RuntimeObject*)L_10);
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_8, (void*)(RuntimeObject*)L_10);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2485));
		return (bool)1;
	}

IL_0029:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2486));
		RuntimeObject** L_14 = ___2_property;
		il2cpp_codegen_stind<RuntimeObject*>((RuntimeObject**)L_14, (RuntimeObject*)NULL);
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_14, (void*)(RuntimeObject*)NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2487));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetPropertyBagBase_2__ctor_m649EC64E71E2806820C40AECE38739D04311DE79_gshared (SetPropertyBagBase_2_t9148CA09D4A212A82F0DEC9E6A8C41B7B0A1B8FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SetPropertyBagBase_2_t411EA54CEB6C2F1A946D1000CBEE55A826789D07_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2488));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2489));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2490));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2491));
		SetElementProperty_tD32144938E8C2B3852669AF6CB12C17FAB5056C1* L_0 = (SetElementProperty_tD32144938E8C2B3852669AF6CB12C17FAB5056C1*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
		SetElementProperty__ctor_m113D7183F4BF3274D3F50AAC84D07FAA974233E1(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2491));
		__this->___m_Property = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Property), (void*)L_0);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2492));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 22));
		PropertyBag_1__ctor_mF9D3CBA5488FDEB46B255A12E5CF4DDF4BD76175((PropertyBag_1_t74F4963AD6B656900B7CACFC37AC3CDDDF818409*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2492));
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
void SetStructValueAction_Invoke_mAB0772BDE2B78CA0683237A9B9EC4ED0A2DFF44F_Multicast(SetStructValueAction_tC6BC2CB4AB94181F81DFCD03D881295A7C134027* __this, Il2CppFullySharedGenericAny* ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SetStructValueAction_tC6BC2CB4AB94181F81DFCD03D881295A7C134027* currentDelegate = reinterpret_cast<SetStructValueAction_tC6BC2CB4AB94181F81DFCD03D881295A7C134027*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_container, ___1_value, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void SetStructValueAction_Invoke_mAB0772BDE2B78CA0683237A9B9EC4ED0A2DFF44F_OpenStaticInvoker(SetStructValueAction_tC6BC2CB4AB94181F81DFCD03D881295A7C134027* __this, Il2CppFullySharedGenericAny* ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, ___0_container, ___1_value);
}
void SetStructValueAction_Invoke_mAB0772BDE2B78CA0683237A9B9EC4ED0A2DFF44F_ClosedStaticInvoker(SetStructValueAction_tC6BC2CB4AB94181F81DFCD03D881295A7C134027* __this, Il2CppFullySharedGenericAny* ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, __this->___m_target, ___0_container, ___1_value);
}
void SetStructValueAction_Invoke_mAB0772BDE2B78CA0683237A9B9EC4ED0A2DFF44F_ClosedInstInvoker(SetStructValueAction_tC6BC2CB4AB94181F81DFCD03D881295A7C134027* __this, Il2CppFullySharedGenericAny* ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, __this->___m_target, ___0_container, ___1_value);
}
void SetStructValueAction_Invoke_mAB0772BDE2B78CA0683237A9B9EC4ED0A2DFF44F_OpenInstInvoker(SetStructValueAction_tC6BC2CB4AB94181F81DFCD03D881295A7C134027* __this, Il2CppFullySharedGenericAny* ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	NullCheck(___0_container);
	InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, ___0_container, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetStructValueAction__ctor_m8C741F85A542DF59D45F2951F1CE89AFF4DEC80A_gshared (SetStructValueAction_tC6BC2CB4AB94181F81DFCD03D881295A7C134027* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
			__this->___invoke_impl = (intptr_t)&SetStructValueAction_Invoke_mAB0772BDE2B78CA0683237A9B9EC4ED0A2DFF44F_OpenStaticInvoker;
		else
			__this->___invoke_impl = (intptr_t)&SetStructValueAction_Invoke_mAB0772BDE2B78CA0683237A9B9EC4ED0A2DFF44F_ClosedStaticInvoker;
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&SetStructValueAction_Invoke_mAB0772BDE2B78CA0683237A9B9EC4ED0A2DFF44F_OpenInstInvoker;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = (intptr_t)&SetStructValueAction_Invoke_mAB0772BDE2B78CA0683237A9B9EC4ED0A2DFF44F_ClosedInstInvoker;
		}
	}
	__this->___extra_arg = (intptr_t)&SetStructValueAction_Invoke_mAB0772BDE2B78CA0683237A9B9EC4ED0A2DFF44F_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetStructValueAction_Invoke_mAB0772BDE2B78CA0683237A9B9EC4ED0A2DFF44F_gshared (SetStructValueAction_tC6BC2CB4AB94181F81DFCD03D881295A7C134027* __this, Il2CppFullySharedGenericAny* ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_container, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SetStructValueAction_BeginInvoke_mD0443030E138EAF5A9305CA0FDF0A84C2AA622F6_gshared (SetStructValueAction_tC6BC2CB4AB94181F81DFCD03D881295A7C134027* __this, Il2CppFullySharedGenericAny* ___0_container, Il2CppFullySharedGenericAny ___1_value, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	RuntimeClass* ___0_container_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method, 0));
	__d_args[0] = (il2cpp_codegen_class_is_value_type(___0_container_klass) ? Box(___0_container_klass, ___0_container) : (void*)*___0_container);
	RuntimeClass* ___1_value_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method, 1));
	__d_args[1] = (il2cpp_codegen_class_is_value_type(___1_value_klass) ? Box(___1_value_klass, ___1_value) : (void*)___1_value);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetStructValueAction_EndInvoke_mE4893055E61C85B863E58C7FBAB6A3AA0A05B719_gshared (SetStructValueAction_tC6BC2CB4AB94181F81DFCD03D881295A7C134027* __this, Il2CppFullySharedGenericAny* ___0_container, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___0_container,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, ___out_args);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetValueVisitor_1_Reset_m008CDB6B93CEA13F1381FD416879CE86276E6B3E_gshared (SetValueVisitor_1_tC25918007584CEA82C8D3F2B03BB5E18A90DB5EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SetValueVisitor_1_t7B6E29A87BAD87191D12E1587F0A0BF25686C6E8_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSrcValue_tE9A27A348930DDF3E8015F80AC35850008AA02D8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 517));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 518));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 519));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 520));
		NullCheck((PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446*)__this);
		PathVisitor_Reset_mE977ECA73FF2496D18D2CF518B48DD1DA1FD59AA((PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446*)__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 520));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 521));
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), SizeOf_TSrcValue_tE9A27A348930DDF3E8015F80AC35850008AA02D8);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 522));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetValueVisitor_1__ctor_m365ED56ACD60601F6F34E4D8E7E138664929B71D_gshared (SetValueVisitor_1_tC25918007584CEA82C8D3F2B03BB5E18A90DB5EE* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		PathVisitor__ctor_m422FB3CC93AEFF8FC5CCD62B3485779CE88317F6((PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetValueVisitor_1__cctor_mD2FF9214DEF1617AD7794B7FDC8FD7FD8534EE59_gshared (const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 538));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 539));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 540));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		U3CU3Ec_t8A075936C510C026D2F32683D9D8B324AB3328DE* L_0 = ((U3CU3Ec_t8A075936C510C026D2F32683D9D8B324AB3328DE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4)))->___U3CU3E9;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 541));
		Func_1_t3562516825219E4C5D56D7A5AA4DA5E7118E4032* L_1 = (Func_1_t3562516825219E4C5D56D7A5AA4DA5E7118E4032*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		Func_1__ctor_mA3DC838EC75F2C73B5F4EC9629E754203F8C872F(L_1, (RuntimeObject*)L_0, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 541));
		U3CU3Ec_t8A075936C510C026D2F32683D9D8B324AB3328DE* L_2 = ((U3CU3Ec_t8A075936C510C026D2F32683D9D8B324AB3328DE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4)))->___U3CU3E9;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 542));
		Action_1_tB5D3D80BDD52AC40FDE982ADB98F46D82B14A520* L_3 = (Action_1_tB5D3D80BDD52AC40FDE982ADB98F46D82B14A520*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		Action_1__ctor_m8571C48AAB9D7D1F26AAF3713EC28C721512F873(L_3, (RuntimeObject*)L_2, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 542));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 543));
		ObjectPool_1_tDF1CBAC8F45FE7A38564D25A887E0824155AB946* L_4 = (ObjectPool_1_tDF1CBAC8F45FE7A38564D25A887E0824155AB946*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		ObjectPool_1__ctor_mB37215927A4AB5076A2CF2C0126FC69578DBBB97(L_4, L_1, (Action_1_tB5D3D80BDD52AC40FDE982ADB98F46D82B14A520*)NULL, L_3, (Action_1_tB5D3D80BDD52AC40FDE982ADB98F46D82B14A520*)NULL, (bool)1, ((int32_t)10), ((int32_t)10000), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 543));
		((SetValueVisitor_1_tC25918007584CEA82C8D3F2B03BB5E18A90DB5EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 13)))->___Pool = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((SetValueVisitor_1_tC25918007584CEA82C8D3F2B03BB5E18A90DB5EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 13)))->___Pool), (void*)L_4);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConverterGroup_t2D7DEDAC22662EF5C020DE54231DC23CD0B5268A* SetValueVisitor_1_get_group_m88E861DF62FB66929DCA1C8DCDBAAE51F811D9AA_gshared (SetValueVisitor_1_t9F8375B4EA106BA863CE89AC21063AB486248660* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SetValueVisitor_1_t24E27AE939174CE9B22764E704FE0D8F62A37D6C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 39609));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 39610));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 39611));
		ConverterGroup_t2D7DEDAC22662EF5C020DE54231DC23CD0B5268A* L_0 = *(ConverterGroup_t2D7DEDAC22662EF5C020DE54231DC23CD0B5268A**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetValueVisitor_1_set_group_m94980C75D99986FB92C00A15DA3C9C1E7DF4F175_gshared (SetValueVisitor_1_t9F8375B4EA106BA863CE89AC21063AB486248660* __this, ConverterGroup_t2D7DEDAC22662EF5C020DE54231DC23CD0B5268A* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SetValueVisitor_1_t24E27AE939174CE9B22764E704FE0D8F62A37D6C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 39612));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 39613));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 39614));
		ConverterGroup_t2D7DEDAC22662EF5C020DE54231DC23CD0B5268A* L_0 = ___0_value;
		il2cpp_codegen_write_instance_field_data<ConverterGroup_t2D7DEDAC22662EF5C020DE54231DC23CD0B5268A*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2), L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetValueVisitor_1_Reset_m8B6FBA932D120CB764747201F78B57B761DB6289_gshared (SetValueVisitor_1_t9F8375B4EA106BA863CE89AC21063AB486248660* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SetValueVisitor_1_t24E27AE939174CE9B22764E704FE0D8F62A37D6C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSrcValue_t9F58A6797F59B46EF301D2AEEFF7A8CF4EF6593B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 39615));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 39616));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 39617));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 39618));
		NullCheck((PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446*)__this);
		PathVisitor_Reset_mE977ECA73FF2496D18D2CF518B48DD1DA1FD59AA((PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446*)__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 39618));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 39619));
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), SizeOf_TSrcValue_t9F58A6797F59B46EF301D2AEEFF7A8CF4EF6593B);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 39620));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 39621));
		SetValueVisitor_1_set_group_m94980C75D99986FB92C00A15DA3C9C1E7DF4F175_inline(__this, (ConverterGroup_t2D7DEDAC22662EF5C020DE54231DC23CD0B5268A*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 39621));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 39622));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetValueVisitor_1__ctor_m257854CB926E6D7724BCECDD60EE3C4A2F35540E_gshared (SetValueVisitor_1_t9F8375B4EA106BA863CE89AC21063AB486248660* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		PathVisitor__ctor_m422FB3CC93AEFF8FC5CCD62B3485779CE88317F6((PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetValueVisitor_1__cctor_mE98915D11FB90A377F5B5BBDF930829AE7C76A51_gshared (const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 39645));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 39646));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 39647));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		U3CU3Ec_tF0DAF66EF18C3AF8537EE02031C33F44B67DECC1* L_0 = ((U3CU3Ec_tF0DAF66EF18C3AF8537EE02031C33F44B67DECC1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6)))->___U3CU3E9;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 39648));
		Func_1_tE7A32FE928894E3B981CAD581AC7D8ECD5CC262A* L_1 = (Func_1_tE7A32FE928894E3B981CAD581AC7D8ECD5CC262A*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		Func_1__ctor_mFE94160C04AE2BACCF4C9503E2C4D0AC9D5D4345(L_1, (RuntimeObject*)L_0, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 39648));
		U3CU3Ec_tF0DAF66EF18C3AF8537EE02031C33F44B67DECC1* L_2 = ((U3CU3Ec_tF0DAF66EF18C3AF8537EE02031C33F44B67DECC1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6)))->___U3CU3E9;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 39649));
		Action_1_tF18EC740BBE61E110C0C1270C9A2B66A1A72DBE1* L_3 = (Action_1_tF18EC740BBE61E110C0C1270C9A2B66A1A72DBE1*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		Action_1__ctor_m6989B1F6F0FCD26F0CEF5196F07E309FA67C6F82(L_3, (RuntimeObject*)L_2, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 39649));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 39650));
		ObjectPool_1_t28F249C599ED2EFD04F6B973FEFA2541B52062DF* L_4 = (ObjectPool_1_t28F249C599ED2EFD04F6B973FEFA2541B52062DF*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		ObjectPool_1__ctor_mFC6701EBAA87E699C6F8A692DEB399082F35536F(L_4, L_1, L_3, (Action_1_tF18EC740BBE61E110C0C1270C9A2B66A1A72DBE1*)NULL, (Action_1_tF18EC740BBE61E110C0C1270C9A2B66A1A72DBE1*)NULL, (bool)1, ((int32_t)10), ((int32_t)10000), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 39650));
		((SetValueVisitor_1_t9F8375B4EA106BA863CE89AC21063AB486248660_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 15)))->___Pool = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((SetValueVisitor_1_t9F8375B4EA106BA863CE89AC21063AB486248660_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 15)))->___Pool), (void*)L_4);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Set_1__ctor_mED0A938761C7C57601C916255E86AF3FCCCEDD4E_gshared (Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
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
		L_1 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		___0_comparer = (RuntimeObject*)L_1;
	}

IL_0010:
	{
		RuntimeObject* L_2 = ___0_comparer;
		__this->___comparer = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___comparer), (void*)L_2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)7);
		__this->___buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buckets), (void*)L_3);
		SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427* L_4 = (SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427*)(SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5), (uint32_t)7);
		__this->___slots = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___slots), (void*)L_4);
		__this->___freeList = (-1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Set_1_Add_mA59F3D323F7969614AEF4DAEC1546F94E059B3E2_gshared (Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TElement_t65838287198D29C1A2F194E4FBD25389CA14586D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TElement_t65838287198D29C1A2F194E4FBD25389CA14586D);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TElement_t65838287198D29C1A2F194E4FBD25389CA14586D);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? ___0_value : &___0_value), SizeOf_TElement_t65838287198D29C1A2F194E4FBD25389CA14586D);
		bool L_2;
		L_2 = Set_1_Find_m6FFC5DAA463589F3E2D7EDD7D4C21ACDFE366953(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? il2cpp_codegen_memcpy(L_1, L_0, SizeOf_TElement_t65838287198D29C1A2F194E4FBD25389CA14586D): *(void**)L_0), (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Set_1_Find_m6FFC5DAA463589F3E2D7EDD7D4C21ACDFE366953_gshared (Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D* __this, Il2CppFullySharedGenericAny ___0_value, bool ___1_add, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TElement_t65838287198D29C1A2F194E4FBD25389CA14586D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TElement_t65838287198D29C1A2F194E4FBD25389CA14586D);
	const Il2CppFullySharedGenericAny L_16 = L_0;
	const Il2CppFullySharedGenericAny L_42 = L_0;
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TElement_t65838287198D29C1A2F194E4FBD25389CA14586D);
	const Il2CppFullySharedGenericAny L_17 = L_1;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? ___0_value : &___0_value), SizeOf_TElement_t65838287198D29C1A2F194E4FBD25389CA14586D);
		int32_t L_2;
		L_2 = Set_1_InternalGetHashCode_m4A0B85ECABF6C737809F72F682E564CB502CBD7E(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? il2cpp_codegen_memcpy(L_1, L_0, SizeOf_TElement_t65838287198D29C1A2F194E4FBD25389CA14586D): *(void**)L_0), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		V_0 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->___buckets;
		int32_t L_4 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->___buckets;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		NullCheck(L_3);
		int32_t L_7 = ((int32_t)(L_4%L_6));
		int32_t L_8 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		goto IL_0065;
	}

IL_001e:
	{
		CHECK_PAUSE_POINT;
		SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427* L_9 = __this->___slots;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tF45120D6701798B3D99EA6E4D4BD09B970E2242B*)(L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10),0));
		int32_t L_12 = V_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_0053;
		}
	}
	{
		RuntimeObject* L_13 = __this->___comparer;
		SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427* L_14 = __this->___slots;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_instance_field_data_pointer(((Slot_tF45120D6701798B3D99EA6E4D4BD09B970E2242B*)(L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10),1)), SizeOf_TElement_t65838287198D29C1A2F194E4FBD25389CA14586D);
		il2cpp_codegen_memcpy(L_17, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? ___0_value : &___0_value), SizeOf_TElement_t65838287198D29C1A2F194E4FBD25389CA14586D);
		NullCheck(L_13);
		bool L_18;
		L_18 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? L_16: *(void**)L_16), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? L_17: *(void**)L_17));
		if (!L_18)
		{
			goto IL_0053;
		}
	}
	{
		return (bool)1;
	}

IL_0053:
	{
		SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427* L_19 = __this->___slots;
		int32_t L_20 = V_1;
		NullCheck(L_19);
		int32_t L_21 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tF45120D6701798B3D99EA6E4D4BD09B970E2242B*)(L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10),2));
		V_1 = L_21;
	}

IL_0065:
	{
		int32_t L_22 = V_1;
		if ((((int32_t)L_22) >= ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		bool L_23 = ___1_add;
		if (!L_23)
		{
			goto IL_0118;
		}
	}
	{
		int32_t L_24 = __this->___freeList;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_0098;
		}
	}
	{
		int32_t L_25 = __this->___freeList;
		V_2 = L_25;
		SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427* L_26 = __this->___slots;
		int32_t L_27 = V_2;
		NullCheck(L_26);
		int32_t L_28 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tF45120D6701798B3D99EA6E4D4BD09B970E2242B*)(L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10),2));
		__this->___freeList = L_28;
		goto IL_00c3;
	}

IL_0098:
	{
		int32_t L_29 = __this->___count;
		SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427* L_30 = __this->___slots;
		NullCheck(L_30);
		int32_t L_31 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_30)->max_length),NULL));
		if ((!(((uint32_t)L_29) == ((uint32_t)L_31))))
		{
			goto IL_00ae;
		}
	}
	{
		Set_1_Resize_m042F5E61A9646B1949ADC2B8F1A01FB1C82397AE(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
	}

IL_00ae:
	{
		int32_t L_32 = __this->___count;
		V_2 = L_32;
		int32_t L_33 = __this->___count;
		__this->___count = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00c3:
	{
		int32_t L_34 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = __this->___buckets;
		NullCheck(L_35);
		int32_t L_36 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_35)->max_length),NULL));
		V_3 = ((int32_t)(L_34%L_36));
		SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427* L_37 = __this->___slots;
		int32_t L_38 = V_2;
		NullCheck(L_37);
		int32_t L_39 = V_0;
		il2cpp_codegen_write_instance_field_data<int32_t>(((Slot_tF45120D6701798B3D99EA6E4D4BD09B970E2242B*)(L_37)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_38))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10),0), L_39);
		SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427* L_40 = __this->___slots;
		int32_t L_41 = V_2;
		NullCheck(L_40);
		il2cpp_codegen_memcpy(L_42, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? ___0_value : &___0_value), SizeOf_TElement_t65838287198D29C1A2F194E4FBD25389CA14586D);
		il2cpp_codegen_write_instance_field_data(((Slot_tF45120D6701798B3D99EA6E4D4BD09B970E2242B*)(L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_41))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10),1), L_42, SizeOf_TElement_t65838287198D29C1A2F194E4FBD25389CA14586D);
		SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427* L_43 = __this->___slots;
		int32_t L_44 = V_2;
		NullCheck(L_43);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = __this->___buckets;
		int32_t L_46 = V_3;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		int32_t L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		il2cpp_codegen_write_instance_field_data<int32_t>(((Slot_tF45120D6701798B3D99EA6E4D4BD09B970E2242B*)(L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10),2), ((int32_t)il2cpp_codegen_subtract(L_48, 1)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = __this->___buckets;
		int32_t L_50 = V_3;
		int32_t L_51 = V_2;
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(L_50), (int32_t)((int32_t)il2cpp_codegen_add(L_51, 1)));
	}

IL_0118:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Set_1_Resize_m042F5E61A9646B1949ADC2B8F1A01FB1C82397AE_gshared (Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
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
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_1 = L_2;
		int32_t L_3 = V_0;
		SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427* L_4 = (SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427*)(SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5), (uint32_t)L_3);
		V_2 = L_4;
		SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427* L_5 = __this->___slots;
		SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427* L_6 = V_2;
		int32_t L_7 = __this->___count;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		V_3 = 0;
		goto IL_005e;
	}

IL_0031:
	{
		CHECK_PAUSE_POINT;
		SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427* L_8 = V_2;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tF45120D6701798B3D99EA6E4D4BD09B970E2242B*)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10),0));
		int32_t L_11 = V_0;
		V_4 = ((int32_t)(L_10%L_11));
		SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427* L_12 = V_2;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_1;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		int32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		il2cpp_codegen_write_instance_field_data<int32_t>(((Slot_tF45120D6701798B3D99EA6E4D4BD09B970E2242B*)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10),2), ((int32_t)il2cpp_codegen_subtract(L_17, 1)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_1;
		int32_t L_19 = V_4;
		int32_t L_20 = V_3;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (int32_t)((int32_t)il2cpp_codegen_add(L_20, 1)));
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_005e:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = __this->___count;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0031;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = V_1;
		__this->___buckets = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buckets), (void*)L_24);
		SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427* L_25 = V_2;
		__this->___slots = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___slots), (void*)L_25);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Set_1_InternalGetHashCode_m4A0B85ECABF6C737809F72F682E564CB502CBD7E_gshared (Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TElement_t65838287198D29C1A2F194E4FBD25389CA14586D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TElement_t65838287198D29C1A2F194E4FBD25389CA14586D);
	const Il2CppFullySharedGenericAny L_3 = L_0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? ___0_value : &___0_value), SizeOf_TElement_t65838287198D29C1A2F194E4FBD25389CA14586D);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), L_0);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_2 = __this->___comparer;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? ___0_value : &___0_value), SizeOf_TElement_t65838287198D29C1A2F194E4FBD25389CA14586D);
		NullCheck(L_2);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? L_3: *(void**)L_3));
		return ((int32_t)(L_4&((int32_t)2147483647LL)));
	}

IL_001b:
	{
		return 0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderInfoStorage_1__ctor_mFE6521060564BB839835FA902AA1D9BA02F85E86_gshared (ShaderInfoStorage_1_t32194748F3ED0F5527B4E31A28D04606FAEE539A* __this, int32_t ___0_format, Func_2_t781E8579E9FF2D1F9E663A289445D85212CBE782* ___1_convert, int32_t ___2_initialSize, int32_t ___3_maxSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderInfoStorage_1_t24230BF357976EE1D8EACEDB01C71C4EA152FBA3_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_format), (&___1_convert), (&___2_initialSize), (&___3_maxSize));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132790));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132791));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132792));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132793));
		il2cpp_codegen_runtime_class_init_inline(BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_il2cpp_TypeInfo_var);
		BaseShaderInfoStorage__ctor_m5CD6C884D6587272D9C90F8DEE2BE0C38A5C4DBB((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2*)__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132793));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132794));
		int32_t L_0 = ___3_maxSize;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132795));
		int32_t L_1;
		L_1 = SystemInfo_get_maxTextureSize_mEE557C09643222591C6F4D3F561D7A60CD403991(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132795));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132796));
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)((((int32_t)((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132796));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132797));
		int32_t L_2 = ___2_initialSize;
		int32_t L_3 = ___3_maxSize;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132798));
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)((((int32_t)((((int32_t)L_2) > ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132798));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132799));
		int32_t L_4 = ___2_initialSize;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132800));
		bool L_5;
		L_5 = Mathf_IsPowerOfTwo_m58172AEBE272F53FD34CC10641057847181E960A_inline(L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132800));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132801));
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D(L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132801));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132802));
		int32_t L_6 = ___3_maxSize;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132803));
		bool L_7;
		L_7 = Mathf_IsPowerOfTwo_m58172AEBE272F53FD34CC10641057847181E960A_inline(L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132803));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132804));
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D(L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132804));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132805));
		Func_2_t781E8579E9FF2D1F9E663A289445D85212CBE782* L_8 = ___1_convert;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132806));
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)((!(((RuntimeObject*)(Func_2_t781E8579E9FF2D1F9E663A289445D85212CBE782*)L_8) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132806));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132807));
		int32_t L_9 = ___2_initialSize;
		__this->___m_InitialSize = L_9;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132808));
		int32_t L_10 = ___3_maxSize;
		__this->___m_MaxSize = L_10;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132809));
		int32_t L_11 = ___0_format;
		__this->___m_Format = L_11;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132810));
		Func_2_t781E8579E9FF2D1F9E663A289445D85212CBE782* L_12 = ___1_convert;
		__this->___m_Convert = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Convert), (void*)L_12);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132811));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderInfoStorage_1_Dispose_m3A95983FB76FC8AFBD0EB90D9B7FAD40536E05C4_gshared (ShaderInfoStorage_1_t32194748F3ED0F5527B4E31A28D04606FAEE539A* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderInfoStorage_1_t24230BF357976EE1D8EACEDB01C71C4EA152FBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIRUtility_tBBCA94052EAE57F0A59876553C582FFCF52E706C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_disposing));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132812));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132813));
	UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* G_B3_0 = NULL;
	UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* G_B2_0 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132814));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132815));
		NullCheck((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2*)__this);
		bool L_0;
		L_0 = BaseShaderInfoStorage_get_disposed_mAF7F54A791E6AF75BF1AD71B1DDA85099BFCE1EF_inline((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2*)__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132815));
		bool L_1 = ___0_disposing;
		if (!((int32_t)(((((int32_t)L_0) == ((int32_t)0))? 1 : 0)&(int32_t)L_1)))
		{
			goto IL_0043;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132816));
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = __this->___m_Texture;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132817));
		il2cpp_codegen_runtime_class_init_inline(UIRUtility_tBBCA94052EAE57F0A59876553C582FFCF52E706C_il2cpp_TypeInfo_var);
		UIRUtility_Destroy_m9E925E79E7B4A4853B47C1EFACEF2ED0A7844A23((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132817));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132818));
		__this->___m_Texture = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Texture), (void*)(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132819));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_3 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&__this->___m_Texels);
		il2cpp_codegen_initobj(L_3, sizeof(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132820));
		UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* L_4 = __this->___m_Allocator;
		UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* L_5 = L_4;
		if (L_5)
		{
			G_B3_0 = L_5;
			goto IL_0037;
		}
		G_B2_0 = L_5;
	}
	{
		goto IL_003c;
	}

IL_0037:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132821));
		NullCheck(G_B3_0);
		UIRAtlasAllocator_Dispose_mB956D63F99999BA479695669265B4E6F9755D155(G_B3_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132821));
	}

IL_003c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132822));
		__this->___m_Allocator = (UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Allocator), (void*)(UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7*)NULL);
	}

IL_0043:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132823));
		bool L_6 = ___0_disposing;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132824));
		NullCheck((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2*)__this);
		BaseShaderInfoStorage_Dispose_m4346D0BFF23C896046CB1A774E6EB4F4EFC9E56F((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2*)__this, L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132824));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132825));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ShaderInfoStorage_1_get_texture_m6C37ECA9DABA5D261E358801335376BE5A4ECE4B_gshared (ShaderInfoStorage_1_t32194748F3ED0F5527B4E31A28D04606FAEE539A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderInfoStorage_1_t24230BF357976EE1D8EACEDB01C71C4EA152FBA3_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132826));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132827));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132828));
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = __this->___m_Texture;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShaderInfoStorage_1_AllocateRect_mF0004D550D493D1C12BB4B259293F1DD082BEC88_gshared (ShaderInfoStorage_1_t32194748F3ED0F5527B4E31A28D04606FAEE539A* __this, int32_t ___0_width, int32_t ___1_height, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___2_uvs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderInfoStorage_1_t24230BF357976EE1D8EACEDB01C71C4EA152FBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_width), (&___1_height), (&___2_uvs));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132829));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132830));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132831));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132832));
		NullCheck((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2*)__this);
		bool L_0;
		L_0 = BaseShaderInfoStorage_get_disposed_mAF7F54A791E6AF75BF1AD71B1DDA85099BFCE1EF_inline((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2*)__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132832));
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132833));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132834));
		DisposeHelper_NotifyDisposedUsed_m7A9C988A4B96B0920E470EEA604BA42C5ABB437F((RuntimeObject*)__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132834));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132835));
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_1 = ___2_uvs;
		il2cpp_codegen_initobj(L_1, sizeof(RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132836));
		return (bool)0;
	}

IL_0017:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132837));
		UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* L_2 = __this->___m_Allocator;
		if (L_2)
		{
			goto IL_0037;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132838));
		int32_t L_3 = __this->___m_InitialSize;
		int32_t L_4 = __this->___m_MaxSize;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132839));
		UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* L_5 = (UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7*)il2cpp_codegen_object_new(UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7_il2cpp_TypeInfo_var);
		UIRAtlasAllocator__ctor_m4263398EB9C4D3D4C8B752C441A1D8F1044B8DF2(L_5, L_3, L_4, 0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132839));
		__this->___m_Allocator = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Allocator), (void*)L_5);
	}

IL_0037:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132840));
		UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* L_6 = __this->___m_Allocator;
		int32_t L_7 = ___0_width;
		int32_t L_8 = ___1_height;
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_9 = ___2_uvs;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132841));
		NullCheck(L_6);
		bool L_10;
		L_10 = UIRAtlasAllocator_TryAllocate_m4DE2C4C9761F6C736122F59AA11BA6E29021E187(L_6, L_7, L_8, L_9, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132841));
		if (L_10)
		{
			goto IL_0049;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132842));
		return (bool)0;
	}

IL_0049:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132843));
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_11 = ___2_uvs;
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_12 = ___2_uvs;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132844));
		il2cpp_codegen_runtime_class_init_inline(RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_il2cpp_TypeInfo_var);
		int32_t L_13;
		L_13 = RectInt_get_x_mA1E7EF6DEAD2E900D7D56B7A3957C05081EBA9CA_inline(L_12, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132844));
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_14 = ___2_uvs;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132845));
		int32_t L_15;
		L_15 = RectInt_get_y_m440422264E6FCAA91E01F81486A78037AC29D878_inline(L_14, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132845));
		int32_t L_16 = ___0_width;
		int32_t L_17 = ___1_height;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132846));
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_18;
		memset((&L_18), 0, sizeof(L_18));
		RectInt__ctor_m6E8B3A6C7EE11257A6B438E36274116FE39B5B42_inline((&L_18), L_13, L_15, L_16, L_17, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132846));
		*(RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*)L_11 = L_18;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132847));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132848));
		ShaderInfoStorage_1_CreateOrExpandTexture_m8642AC345100DA2F4FA6D2DC5E283FB777730361(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132848));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132849));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderInfoStorage_1_SetTexel_m5F6938D6AD91CBA99FD3A575B4E1D2CB02669A89_gshared (ShaderInfoStorage_1_t32194748F3ED0F5527B4E31A28D04606FAEE539A* __this, int32_t ___0_x, int32_t ___1_y, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderInfoStorage_1_t24230BF357976EE1D8EACEDB01C71C4EA152FBA3_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_tDC969906238A4B266B1EEEE339C754265058C711 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8));
	const Il2CppFullySharedGenericStruct L_12 = alloca(SizeOf_T_tDC969906238A4B266B1EEEE339C754265058C711);
	const Il2CppFullySharedGenericStruct L_13 = alloca(SizeOf_T_tDC969906238A4B266B1EEEE339C754265058C711);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_x), (&___1_y), (&___2_color));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132850));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132851));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132852));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132853));
		NullCheck((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2*)__this);
		bool L_0;
		L_0 = BaseShaderInfoStorage_get_disposed_mAF7F54A791E6AF75BF1AD71B1DDA85099BFCE1EF_inline((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2*)__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132853));
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132854));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132855));
		DisposeHelper_NotifyDisposedUsed_m7A9C988A4B96B0920E470EEA604BA42C5ABB437F((RuntimeObject*)__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132855));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132856));
		return;
	}

IL_000f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132857));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_1 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&__this->___m_Texels);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132858));
		bool L_2;
		L_2 = NativeArray_1_get_IsCreated_m527A2C3B75C25BFF29D1D9EA88C81172FF4F5A5A_inline(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132858));
		if (L_2)
		{
			goto IL_002d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132859));
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_3 = __this->___m_Texture;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132860));
		NullCheck(L_3);
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_4;
		L_4 = Texture2D_GetRawTextureData_TisIl2CppFullySharedGenericStruct_mDC6FE57DC7D62BAC05E6231541767FA81448490E(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132860));
		__this->___m_Texels = L_4;
	}

IL_002d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132861));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_5 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&__this->___m_Texels);
		int32_t L_6 = ___0_x;
		int32_t L_7 = ___1_y;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_8 = __this->___m_Texture;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132862));
		NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_8);
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(5, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_8);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132862));
		Func_2_t781E8579E9FF2D1F9E663A289445D85212CBE782* L_10 = __this->___m_Convert;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = ___2_color;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132863));
		NullCheck(L_10);
		Func_2_Invoke_m0540CF98ABA5DA9FDF9AD2558E3C2135B4FB1C46_inline(L_10, L_11, (Il2CppFullySharedGenericStruct*)L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132863));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132864));
		NativeArray_1_set_Item_m629BDF69720F9FF193478E89307F9B6A56425379_inline(L_5, ((int32_t)il2cpp_codegen_add(L_6, ((int32_t)il2cpp_codegen_multiply(L_7, L_9)))), il2cpp_codegen_memcpy(L_13, L_12, SizeOf_T_tDC969906238A4B266B1EEEE339C754265058C711), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132864));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132865));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderInfoStorage_1_UpdateTexture_m9ACE3AFEC8022BA9756E8A10C8FB4F8D058FBBDA_gshared (ShaderInfoStorage_1_t32194748F3ED0F5527B4E31A28D04606FAEE539A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderInfoStorage_1_t24230BF357976EE1D8EACEDB01C71C4EA152FBA3_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132866));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132867));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132868));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132869));
		NullCheck((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2*)__this);
		bool L_0;
		L_0 = BaseShaderInfoStorage_get_disposed_mAF7F54A791E6AF75BF1AD71B1DDA85099BFCE1EF_inline((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2*)__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132869));
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132870));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132871));
		DisposeHelper_NotifyDisposedUsed_m7A9C988A4B96B0920E470EEA604BA42C5ABB437F((RuntimeObject*)__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132871));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132872));
		return;
	}

IL_000f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132873));
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_1 = __this->___m_Texture;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132874));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132874));
		if (L_2)
		{
			goto IL_002a;
		}
	}
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_3 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&__this->___m_Texels);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132875));
		bool L_4;
		L_4 = NativeArray_1_get_IsCreated_m527A2C3B75C25BFF29D1D9EA88C81172FF4F5A5A_inline(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132875));
		if (L_4)
		{
			goto IL_002b;
		}
	}

IL_002a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132876));
		return;
	}

IL_002b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132877));
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_5 = __this->___m_Texture;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132878));
		NullCheck(L_5);
		Texture2D_Apply_m36EE27E6F1BF7FB8C70A1D749DC4EE249810AA3A(L_5, (bool)0, (bool)0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132878));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132879));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_6 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&__this->___m_Texels);
		il2cpp_codegen_initobj(L_6, sizeof(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132880));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderInfoStorage_1_CreateOrExpandTexture_m8642AC345100DA2F4FA6D2DC5E283FB777730361_gshared (ShaderInfoStorage_1_t32194748F3ED0F5527B4E31A28D04606FAEE539A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderInfoStorage_1_t24230BF357976EE1D8EACEDB01C71C4EA152FBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIRUtility_tBBCA94052EAE57F0A59876553C582FFCF52E706C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral358A3678217D3CE720F0C294149170B975E33338);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_3 = NULL;
	int32_t V_4 = 0;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_5;
	memset((&V_5), 0, sizeof(V_5));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3), (&V_5));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132881));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132882));
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 G_B9_0;
	memset((&G_B9_0), 0, sizeof(G_B9_0));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132883));
		UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* L_0 = __this->___m_Allocator;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132884));
		NullCheck(L_0);
		int32_t L_1;
		L_1 = UIRAtlasAllocator_get_physicalWidth_m0B06147154436A555CEABB9C9EB319D7D33A5398_inline(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132884));
		V_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132885));
		UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* L_2 = __this->___m_Allocator;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132886));
		NullCheck(L_2);
		int32_t L_3;
		L_3 = UIRAtlasAllocator_get_physicalHeight_m736C92B2C509CE66BAFFBA87110103BBC72DBD88_inline(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132886));
		V_1 = L_3;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132887));
		V_2 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132888));
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_4 = __this->___m_Texture;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132889));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132889));
		if (!L_5)
		{
			goto IL_0047;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132890));
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_6 = __this->___m_Texture;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132891));
		NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_6);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(5, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_6);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132891));
		int32_t L_8 = V_0;
		if ((!(((uint32_t)L_7) == ((uint32_t)L_8))))
		{
			goto IL_0045;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_9 = __this->___m_Texture;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132892));
		NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_9);
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(7, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_9);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132892));
		int32_t L_11 = V_1;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_0045;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132893));
		return;
	}

IL_0045:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132894));
		V_2 = (bool)1;
	}

IL_0047:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132895));
		UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* L_12 = __this->___m_Allocator;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132896));
		NullCheck(L_12);
		int32_t L_13;
		L_13 = UIRAtlasAllocator_get_physicalWidth_m0B06147154436A555CEABB9C9EB319D7D33A5398_inline(L_12, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132896));
		UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* L_14 = __this->___m_Allocator;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132897));
		NullCheck(L_14);
		int32_t L_15;
		L_15 = UIRAtlasAllocator_get_physicalHeight_m736C92B2C509CE66BAFFBA87110103BBC72DBD88_inline(L_14, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132897));
		int32_t L_16 = __this->___m_Format;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132898));
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_17 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(L_17, L_13, L_15, L_16, (bool)0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132898));
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_18 = L_17;
		il2cpp_codegen_runtime_class_init_inline(BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_il2cpp_TypeInfo_var);
		int32_t L_19 = ((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_StaticFields*)il2cpp_codegen_static_fields_for(BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_il2cpp_TypeInfo_var))->___s_TextureCounter;
		int32_t L_20 = L_19;
		((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_StaticFields*)il2cpp_codegen_static_fields_for(BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_il2cpp_TypeInfo_var))->___s_TextureCounter = ((int32_t)il2cpp_codegen_add(L_20, 1));
		V_4 = L_20;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132899));
		String_t* L_21;
		L_21 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_4), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132899));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132900));
		String_t* L_22;
		L_22 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral358A3678217D3CE720F0C294149170B975E33338, L_21, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132900));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132901));
		NullCheck((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_18);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_18, L_22, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132901));
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_23 = L_18;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132902));
		NullCheck((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_23);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_23, (int32_t)((int32_t)61), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132902));
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_24 = L_23;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132903));
		NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_24);
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_24, (int32_t)0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132903));
		V_3 = L_24;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132904));
		bool L_25 = V_2;
		if (!L_25)
		{
			goto IL_00fd;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132905));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_26 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&__this->___m_Texels);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132906));
		bool L_27;
		L_27 = NativeArray_1_get_IsCreated_m527A2C3B75C25BFF29D1D9EA88C81172FF4F5A5A_inline(L_26, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132906));
		if (L_27)
		{
			goto IL_00bc;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_28 = __this->___m_Texture;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132907));
		NullCheck(L_28);
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_29;
		L_29 = Texture2D_GetRawTextureData_TisIl2CppFullySharedGenericStruct_mDC6FE57DC7D62BAC05E6231541767FA81448490E(L_28, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132907));
		G_B9_0 = L_29;
		goto IL_00c2;
	}

IL_00bc:
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_30 = __this->___m_Texels;
		G_B9_0 = L_30;
	}

IL_00c2:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132908));
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_31 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132909));
		NullCheck(L_31);
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_32;
		L_32 = Texture2D_GetRawTextureData_TisIl2CppFullySharedGenericStruct_mDC6FE57DC7D62BAC05E6231541767FA81448490E(L_31, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132909));
		V_5 = L_32;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132910));
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_33 = __this->___m_Texture;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132911));
		NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_33);
		int32_t L_34;
		L_34 = VirtualFuncInvoker0< int32_t >::Invoke(5, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_33);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132911));
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_35 = __this->___m_Texture;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132912));
		NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_35);
		int32_t L_36;
		L_36 = VirtualFuncInvoker0< int32_t >::Invoke(7, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_35);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132912));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_37 = V_5;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_38 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132913));
		NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_38);
		int32_t L_39;
		L_39 = VirtualFuncInvoker0< int32_t >::Invoke(5, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_38);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132913));
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_40 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132914));
		NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_40);
		int32_t L_41;
		L_41 = VirtualFuncInvoker0< int32_t >::Invoke(7, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_40);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132914));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132915));
		ShaderInfoStorage_1_CpuBlit_m0E45789132A1E82D5777E6170B1D9470441F21BD(G_B9_0, L_34, L_36, L_37, L_39, L_41, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132915));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132916));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_42 = V_5;
		__this->___m_Texels = L_42;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132917));
		goto IL_0109;
	}

IL_00fd:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132918));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_43 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&__this->___m_Texels);
		il2cpp_codegen_initobj(L_43, sizeof(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18));
	}

IL_0109:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132919));
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_44 = __this->___m_Texture;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132920));
		il2cpp_codegen_runtime_class_init_inline(UIRUtility_tBBCA94052EAE57F0A59876553C582FFCF52E706C_il2cpp_TypeInfo_var);
		UIRUtility_Destroy_m9E925E79E7B4A4853B47C1EFACEF2ED0A7844A23((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_44, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132920));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132921));
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_45 = V_3;
		__this->___m_Texture = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Texture), (void*)L_45);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132922));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderInfoStorage_1_CpuBlit_m0E45789132A1E82D5777E6170B1D9470441F21BD_gshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_src, int32_t ___1_srcWidth, int32_t ___2_srcHeight, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___3_dst, int32_t ___4_dstWidth, int32_t ___5_dstHeight, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_tDC969906238A4B266B1EEEE339C754265058C711 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8));
	const Il2CppFullySharedGenericStruct L_11 = alloca(SizeOf_T_tDC969906238A4B266B1EEEE339C754265058C711);
	const Il2CppFullySharedGenericStruct L_12 = alloca(SizeOf_T_tDC969906238A4B266B1EEEE339C754265058C711);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_src), (&___1_srcWidth), (&___2_srcHeight), (&___3_dst), (&___4_dstWidth), (&___5_dstHeight));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3), (&V_4));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132923));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132924));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132925));
		int32_t L_0 = ___4_dstWidth;
		int32_t L_1 = ___1_srcWidth;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_2 = ___5_dstHeight;
		int32_t L_3 = ___2_srcHeight;
		G_B3_0 = ((((int32_t)((((int32_t)L_2) < ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 0;
	}

IL_0010:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132926));
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)G_B3_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132926));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132927));
		int32_t L_4 = ___4_dstWidth;
		int32_t L_5 = ___1_srcWidth;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_4, L_5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132928));
		int32_t L_6 = ___1_srcWidth;
		int32_t L_7 = ___2_srcHeight;
		V_1 = ((int32_t)il2cpp_codegen_multiply(L_6, L_7));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132929));
		V_2 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132930));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132931));
		int32_t L_8 = ___1_srcWidth;
		V_4 = L_8;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132932));
		goto IL_004e;
	}

IL_0027:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132933));
		int32_t L_9 = V_3;
		int32_t L_10 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132934));
		NativeArray_1_get_Item_mA8C8A69EB3A5D460C55DFCD27275CD5BA5E2B455_inline((&___0_src), L_10, (Il2CppFullySharedGenericStruct*)L_11, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132934));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132935));
		NativeArray_1_set_Item_m629BDF69720F9FF193478E89307F9B6A56425379_inline((&___3_dst), L_9, il2cpp_codegen_memcpy(L_12, L_11, SizeOf_T_tDC969906238A4B266B1EEEE339C754265058C711), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132935));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132936));
		int32_t L_13 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132937));
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_003f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132938));
		int32_t L_15 = V_2;
		int32_t L_16 = V_4;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0027;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132939));
		int32_t L_17 = V_4;
		int32_t L_18 = ___1_srcWidth;
		V_4 = ((int32_t)il2cpp_codegen_add(L_17, L_18));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132940));
		int32_t L_19 = V_3;
		int32_t L_20 = V_0;
		V_3 = ((int32_t)il2cpp_codegen_add(L_19, L_20));
	}

IL_004e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132941));
		int32_t L_21 = V_2;
		int32_t L_22 = V_1;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_003f;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132942));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* SharedObjectPool_1_AllocatePool_m7F935FA6F34D0AE6E32C1D66B37A68EEA187A47C_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicArray_1_Add_mB5A4743E640E5317B6099F17F158EA7AD33A4965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderGraphObjectPool_t2F5488D55D836B54B6E85D2952105BA61AEE6437_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SharedObjectPoolBase_tAE197A0EF70B46EBFECED609BA08A8B2817876EE_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* V_0 = NULL;
	SharedObjectPoolBase_tAE197A0EF70B46EBFECED609BA08A8B2817876EE* V_1 = NULL;
	ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* V_2 = NULL;
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 53235));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 53236));
	Func_1_t566D4A654882E282E54CDC3A001E05486F913903* G_B2_0 = NULL;
	Func_1_t566D4A654882E282E54CDC3A001E05486F913903* G_B1_0 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 53237));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 53238));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		Func_1_t566D4A654882E282E54CDC3A001E05486F913903* L_0 = ((U3CU3Ec_t70E4481760FD8CDB56E0CFC8FAAAED784DF37A41_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___U3CU3E9__1_0;
		Func_1_t566D4A654882E282E54CDC3A001E05486F913903* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0020;
		}
		G_B1_0 = L_1;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		U3CU3Ec_t70E4481760FD8CDB56E0CFC8FAAAED784DF37A41* L_2 = ((U3CU3Ec_t70E4481760FD8CDB56E0CFC8FAAAED784DF37A41_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___U3CU3E9;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 53239));
		Func_1_t566D4A654882E282E54CDC3A001E05486F913903* L_3 = (Func_1_t566D4A654882E282E54CDC3A001E05486F913903*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		Func_1__ctor_m5FD0E1320A7A8964A7FCC0D0EA7F809E4E76E0EF(L_3, (RuntimeObject*)L_2, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 53239));
		Func_1_t566D4A654882E282E54CDC3A001E05486F913903* L_4 = L_3;
		((U3CU3Ec_t70E4481760FD8CDB56E0CFC8FAAAED784DF37A41_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___U3CU3E9__1_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t70E4481760FD8CDB56E0CFC8FAAAED784DF37A41_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___U3CU3E9__1_0), (void*)L_4);
		G_B2_0 = L_4;
	}

IL_0020:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 53240));
		ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* L_5 = (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		ObjectPool_1__ctor_m3A4B28B9D0DC42C43CF00C078D27C9ADFA00FACC(L_5, G_B2_0, (Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505*)NULL, (Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505*)NULL, (Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505*)NULL, (bool)1, ((int32_t)10), ((int32_t)10000), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 53240));
		V_0 = L_5;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 53241));
		il2cpp_codegen_runtime_class_init_inline(RenderGraphObjectPool_t2F5488D55D836B54B6E85D2952105BA61AEE6437_il2cpp_TypeInfo_var);
		DynamicArray_1_t843ECB88E0EEDBBB658FF535E6B19186D9F69540* L_6 = ((RenderGraphObjectPool_t2F5488D55D836B54B6E85D2952105BA61AEE6437_StaticFields*)il2cpp_codegen_static_fields_for(RenderGraphObjectPool_t2F5488D55D836B54B6E85D2952105BA61AEE6437_il2cpp_TypeInfo_var))->___s_AllocatedPools;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 53242));
		SharedObjectPool_1_t85D963F2C906700E262E999BFA8D090DE8EECC81* L_7 = (SharedObjectPool_1_t85D963F2C906700E262E999BFA8D090DE8EECC81*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		SharedObjectPool_1__ctor_m67ED400BE8DA10E8B0FDDD6DA9C81825C165F028(L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 53242));
		V_1 = (SharedObjectPoolBase_tAE197A0EF70B46EBFECED609BA08A8B2817876EE*)L_7;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 53243));
		NullCheck(L_6);
		int32_t L_8;
		L_8 = DynamicArray_1_Add_mB5A4743E640E5317B6099F17F158EA7AD33A4965(L_6, (&V_1), DynamicArray_1_Add_mB5A4743E640E5317B6099F17F158EA7AD33A4965_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 53243));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 53244));
		ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* L_9 = V_0;
		V_2 = L_9;
		goto IL_0048;
	}

IL_0048:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 53245));
		ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* L_10 = V_2;
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedObjectPool_1_Clear_m1373D376808902B753F4E1EC76322F867519AC69_gshared (SharedObjectPool_1_t85D963F2C906700E262E999BFA8D090DE8EECC81* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SharedObjectPool_1_t7FC414C922DA73D0CABAAE4F9DC7B31FDF4F598A_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 53246));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 53247));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 53248));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 53249));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
		ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* L_0 = ((SharedObjectPool_1_t85D963F2C906700E262E999BFA8D090DE8EECC81_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)))->___s_Pool;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 53250));
		NullCheck(L_0);
		ObjectPool_1_Clear_m361E7FE94372B74ECAE06A68282165F30C67F901(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 53250));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 53251));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* SharedObjectPool_1_Get_mB1F624F1845AB5E802C513DF6AACD581527E18F3_gshared (const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 53252));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 53253));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 53254));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* L_0 = ((SharedObjectPool_1_t85D963F2C906700E262E999BFA8D090DE8EECC81_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->___s_Pool;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 53255));
		NullCheck(L_0);
		Il2CppSharedGenericObject* L_1;
		L_1 = ObjectPool_1_Get_m6033387D88EF9D1AD81A89F3045733BC4B98073D_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 53255));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedObjectPool_1_Release_m5EE79EBEF0AEB421BFDF420FB242B6DA79B60625_gshared (Il2CppSharedGenericObject* ___0_toRelease, const RuntimeMethod* method) 
{
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_toRelease));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 53256));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 53257));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 53258));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* L_0 = ((SharedObjectPool_1_t85D963F2C906700E262E999BFA8D090DE8EECC81_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->___s_Pool;
		Il2CppSharedGenericObject* L_1 = ___0_toRelease;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 53259));
		NullCheck(L_0);
		ObjectPool_1_Release_m3183E8F3194884123A027D720D37F341AF367E48_inline(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 53259));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedObjectPool_1__ctor_m67ED400BE8DA10E8B0FDDD6DA9C81825C165F028_gshared (SharedObjectPool_1_t85D963F2C906700E262E999BFA8D090DE8EECC81* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SharedObjectPoolBase__ctor_mC9CAADBB0564A9A1AF52B83EED4E9A6D8C3608DF((SharedObjectPoolBase_tAE197A0EF70B46EBFECED609BA08A8B2817876EE*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedObjectPool_1__cctor_mBC65D5DC4AA77CA8FC62D9D01E7426BAF87466E1_gshared (const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 53260));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 53261));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 53262));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 53263));
		ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* L_0;
		L_0 = SharedObjectPool_1_AllocatePool_m7F935FA6F34D0AE6E32C1D66B37A68EEA187A47C(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 53263));
		((SharedObjectPool_1_t85D963F2C906700E262E999BFA8D090DE8EECC81_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->___s_Pool = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SharedObjectPool_1_t85D963F2C906700E262E999BFA8D090DE8EECC81_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->___s_Pool), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedStatic_1__ctor_m467F9A64986F442AA4853C5C314D0A54D887CDDC_gshared (SharedStatic_1_t965CBE4F8A30F785649BF3D97C277D0927858D08* __this, void* ___0_buffer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SharedStatic_1_t6F461F0F49C63663BA5309A8B8620793444CB086_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_buffer));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3452));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3453));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3454));
		void* L_0 = ___0_buffer;
		__this->____buffer = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void SharedStatic_1__ctor_m467F9A64986F442AA4853C5C314D0A54D887CDDC_AdjustorThunk (RuntimeObject* __this, void* ___0_buffer, const RuntimeMethod* method)
{
	SharedStatic_1_t965CBE4F8A30F785649BF3D97C277D0927858D08* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<SharedStatic_1_t965CBE4F8A30F785649BF3D97C277D0927858D08>(__this);
	SharedStatic_1__ctor_m467F9A64986F442AA4853C5C314D0A54D887CDDC_inline(_thisAdjusted, ___0_buffer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* SharedStatic_1_get_Data_m679BD82198B4EC1D89F2EDE946A60F4DEE8E47E2_gshared (SharedStatic_1_t965CBE4F8A30F785649BF3D97C277D0927858D08* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SharedStatic_1_t6F461F0F49C63663BA5309A8B8620793444CB086_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3455));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3456));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3457));
		void* L_0 = __this->____buffer;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3458));
		Il2CppFullySharedGenericStruct* L_1;
		L_1 = UnsafeUtility_AsRef_TisIl2CppFullySharedGenericStruct_m78B0690121A96EFFDA7D6D3ADAF97940CF8136BE_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3458));
		return L_1;
	}
}
IL2CPP_EXTERN_C  Il2CppFullySharedGenericStruct* SharedStatic_1_get_Data_m679BD82198B4EC1D89F2EDE946A60F4DEE8E47E2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SharedStatic_1_t965CBE4F8A30F785649BF3D97C277D0927858D08* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<SharedStatic_1_t965CBE4F8A30F785649BF3D97C277D0927858D08>(__this);
	Il2CppFullySharedGenericStruct* _returnValue;
	_returnValue = SharedStatic_1_get_Data_m679BD82198B4EC1D89F2EDE946A60F4DEE8E47E2(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* SharedStatic_1_get_UnsafeDataPointer_m3F411F556361D224096615DAA35B86D6B725C09D_gshared (SharedStatic_1_t965CBE4F8A30F785649BF3D97C277D0927858D08* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SharedStatic_1_t6F461F0F49C63663BA5309A8B8620793444CB086_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3459));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3460));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3461));
		void* L_0 = __this->____buffer;
		return L_0;
	}
}
IL2CPP_EXTERN_C  void* SharedStatic_1_get_UnsafeDataPointer_m3F411F556361D224096615DAA35B86D6B725C09D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SharedStatic_1_t965CBE4F8A30F785649BF3D97C277D0927858D08* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<SharedStatic_1_t965CBE4F8A30F785649BF3D97C277D0927858D08>(__this);
	void* _returnValue;
	_returnValue = SharedStatic_1_get_UnsafeDataPointer_m3F411F556361D224096615DAA35B86D6B725C09D_inline(_thisAdjusted, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedStatic_1__ctor_m57842D87210A109206E3DAFEBD441B46EDBC809E_gshared (SharedStatic_1_t4FCF4588C706197A62B7B4C4DFA65B0457AB498C* __this, void* ___0_buffer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SharedStatic_1_t639551B809BFEAD59750B5CE2BDEFFC7373E613F_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_buffer));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3648));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 3649));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3650));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3651));
		void* L_0 = ___0_buffer;
		__this->____buffer = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3652));
		return;
	}
}
IL2CPP_EXTERN_C  void SharedStatic_1__ctor_m57842D87210A109206E3DAFEBD441B46EDBC809E_AdjustorThunk (RuntimeObject* __this, void* ___0_buffer, const RuntimeMethod* method)
{
	SharedStatic_1_t4FCF4588C706197A62B7B4C4DFA65B0457AB498C* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<SharedStatic_1_t4FCF4588C706197A62B7B4C4DFA65B0457AB498C>(__this);
	SharedStatic_1__ctor_m57842D87210A109206E3DAFEBD441B46EDBC809E(_thisAdjusted, ___0_buffer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* SharedStatic_1_get_Data_m4D3D9A03646881BE9065C8939BF1CA28195FF262_gshared (SharedStatic_1_t4FCF4588C706197A62B7B4C4DFA65B0457AB498C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SharedStatic_1_t639551B809BFEAD59750B5CE2BDEFFC7373E613F_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppFullySharedGenericStruct* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3653));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 3654));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3655));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3656));
		void* L_0 = __this->____buffer;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3657));
		Il2CppFullySharedGenericStruct* L_1;
		L_1 = Unsafe_AsRef_TisIl2CppFullySharedGenericStruct_m3863E7E2C66FC31E1239CAA8BEA2E37D64539C00_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3657));
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3658));
		Il2CppFullySharedGenericStruct* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  Il2CppFullySharedGenericStruct* SharedStatic_1_get_Data_m4D3D9A03646881BE9065C8939BF1CA28195FF262_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SharedStatic_1_t4FCF4588C706197A62B7B4C4DFA65B0457AB498C* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<SharedStatic_1_t4FCF4588C706197A62B7B4C4DFA65B0457AB498C>(__this);
	Il2CppFullySharedGenericStruct* _returnValue;
	_returnValue = SharedStatic_1_get_Data_m4D3D9A03646881BE9065C8939BF1CA28195FF262(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* SharedStatic_1_get_UnsafeDataPointer_m82D3730B2B6F8768B9136641DED95E968D4EEF89_gshared (SharedStatic_1_t4FCF4588C706197A62B7B4C4DFA65B0457AB498C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SharedStatic_1_t639551B809BFEAD59750B5CE2BDEFFC7373E613F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoidU2A_t104EAEFBD2D237A8C29618913DA9B4D99355E965_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	void* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3659));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 3660));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3661));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3662));
		void* L_0 = __this->____buffer;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3663));
		void* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  void* SharedStatic_1_get_UnsafeDataPointer_m82D3730B2B6F8768B9136641DED95E968D4EEF89_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SharedStatic_1_t4FCF4588C706197A62B7B4C4DFA65B0457AB498C* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<SharedStatic_1_t4FCF4588C706197A62B7B4C4DFA65B0457AB498C>(__this);
	void* _returnValue;
	_returnValue = SharedStatic_1_get_UnsafeDataPointer_m82D3730B2B6F8768B9136641DED95E968D4EEF89(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SharedStatic_1_t4FCF4588C706197A62B7B4C4DFA65B0457AB498C SharedStatic_1_GetOrCreateUnsafe_m160E81C99EC8BDE0A64547E1B34D7CE539082052_gshared (uint32_t ___0_alignment, int64_t ___1_hashCode, int64_t ___2_subHashCode, const RuntimeMethod* method) 
{
	SharedStatic_1_t4FCF4588C706197A62B7B4C4DFA65B0457AB498C V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_alignment), (&___1_hashCode), (&___2_subHashCode));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3679));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 3680));
	int32_t G_B2_0 = 0;
	int64_t G_B2_1 = 0;
	int64_t G_B2_2 = 0;
	int32_t G_B1_0 = 0;
	int64_t G_B1_1 = 0;
	int64_t G_B1_2 = 0;
	uint32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	int64_t G_B3_2 = 0;
	int64_t G_B3_3 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3681));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3682));
		int64_t L_0 = ___1_hashCode;
		int64_t L_1 = ___2_subHashCode;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3683));
		int32_t L_2;
		L_2 = UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3683));
		uint32_t L_3 = ___0_alignment;
		if (!L_3)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_1;
			G_B2_2 = L_0;
			goto IL_000e;
		}
		G_B1_0 = L_2;
		G_B1_1 = L_1;
		G_B1_2 = L_0;
	}
	{
		uint32_t L_4 = ___0_alignment;
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0010;
	}

IL_000e:
	{
		G_B3_0 = ((uint32_t)(((int32_t)16)));
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_0010:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3684));
		void* L_5;
		L_5 = SharedStatic_GetOrCreateSharedStaticInternal_m9850783202F2E2DCA43597CD97C129C683D6FEBD(G_B3_3, G_B3_2, (uint32_t)G_B3_1, G_B3_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3684));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3685));
		SharedStatic_1_t4FCF4588C706197A62B7B4C4DFA65B0457AB498C L_6;
		memset((&L_6), 0, sizeof(L_6));
		SharedStatic_1__ctor_m57842D87210A109206E3DAFEBD441B46EDBC809E((&L_6), L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3685));
		V_0 = L_6;
		goto IL_001d;
	}

IL_001d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3686));
		SharedStatic_1_t4FCF4588C706197A62B7B4C4DFA65B0457AB498C L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SharedStatic_1_t4FCF4588C706197A62B7B4C4DFA65B0457AB498C SharedStatic_1_GetOrCreate_mE3DD6F6B093AFA6C9C229F87E420BF321DD2BEA7_gshared (Type_t* ___0_contextType, uint32_t ___1_alignment, const RuntimeMethod* method) 
{
	SharedStatic_1_t4FCF4588C706197A62B7B4C4DFA65B0457AB498C V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_contextType), (&___1_alignment));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3705));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 3706));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3707));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3708));
		uint32_t L_0 = ___1_alignment;
		Type_t* L_1 = ___0_contextType;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3709));
		int64_t L_2;
		L_2 = BurstRuntime_GetHashCode64_m0B34A53C0967727211E985563628DD61084977D9(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3709));
		int64_t L_3 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3710));
		SharedStatic_1_t4FCF4588C706197A62B7B4C4DFA65B0457AB498C L_4;
		L_4 = SharedStatic_1_GetOrCreateUnsafe_m160E81C99EC8BDE0A64547E1B34D7CE539082052(L_0, L_2, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3710));
		V_0 = L_4;
		goto IL_0012;
	}

IL_0012:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3711));
		SharedStatic_1_t4FCF4588C706197A62B7B4C4DFA65B0457AB498C L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SharedStatic_1_t4FCF4588C706197A62B7B4C4DFA65B0457AB498C SharedStatic_1_GetOrCreate_m9D65F02A46235F77BD50CD1838F67DC3E1F313C1_gshared (Type_t* ___0_contextType, Type_t* ___1_subContextType, uint32_t ___2_alignment, const RuntimeMethod* method) 
{
	SharedStatic_1_t4FCF4588C706197A62B7B4C4DFA65B0457AB498C V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_contextType), (&___1_subContextType), (&___2_alignment));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3712));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 3713));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3714));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3715));
		uint32_t L_0 = ___2_alignment;
		Type_t* L_1 = ___0_contextType;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3716));
		int64_t L_2;
		L_2 = BurstRuntime_GetHashCode64_m0B34A53C0967727211E985563628DD61084977D9(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3716));
		Type_t* L_3 = ___1_subContextType;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3717));
		int64_t L_4;
		L_4 = BurstRuntime_GetHashCode64_m0B34A53C0967727211E985563628DD61084977D9(L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3717));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3718));
		SharedStatic_1_t4FCF4588C706197A62B7B4C4DFA65B0457AB498C L_5;
		L_5 = SharedStatic_1_GetOrCreateUnsafe_m160E81C99EC8BDE0A64547E1B34D7CE539082052(L_0, L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3718));
		V_0 = L_5;
		goto IL_0016;
	}

IL_0016:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3719));
		SharedStatic_1_t4FCF4588C706197A62B7B4C4DFA65B0457AB498C L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedStatic_1_CheckIf_T_IsUnmanagedOrThrow_m0678CC1995009283C5DA8644295EBA8117508226_gshared (const RuntimeMethod* method) 
{
	bool V_0 = false;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3720));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 3721));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3722));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3723));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3724));
		bool L_0;
		L_0 = il2cpp_codegen_is_unmanaged(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3724));
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3725));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3726));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3727));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3727));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3728));
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3728));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3729));
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDEFEAF60D63CD5C2DACE1D221238855E1052756F)), (RuntimeObject*)L_3, (RuntimeObject*)L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3729));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3730));
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_7 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_7, L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3730));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0031:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3731));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShortEnumEqualityComparer_1__ctor_mDF4021A13BC967B8F2160B8A016872E7025447E9_gshared (ShortEnumEqualityComparer_1_t93E714E73A6CDB76D15D51942E3800AB3E57DFF6* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		EnumEqualityComparer_1__ctor_mAB9D8AC0C1DB19F6469764917E0B10BF5B13045C((EnumEqualityComparer_1_tBE0A26FDB9917D9CB482A0E2018093AB3394FC1A*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShortEnumEqualityComparer_1__ctor_m61792EA8BEDC5EB839C9BE5113E73DE5E2C17C91_gshared (ShortEnumEqualityComparer_1_t93E714E73A6CDB76D15D51942E3800AB3E57DFF6* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_information, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		EnumEqualityComparer_1__ctor_mAB9D8AC0C1DB19F6469764917E0B10BF5B13045C((EnumEqualityComparer_1_tBE0A26FDB9917D9CB482A0E2018093AB3394FC1A*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ShortEnumEqualityComparer_1_GetHashCode_m3DD7EC97F7CC8C9A3747EFB17278B3B4AF22E8E9_gshared (ShortEnumEqualityComparer_1_t93E714E73A6CDB76D15D51942E3800AB3E57DFF6* __this, Il2CppFullySharedGenericStruct ___0_obj, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tF891361FC715BBD984F1037039A2A971DE20FE75 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_tF891361FC715BBD984F1037039A2A971DE20FE75);
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_tF891361FC715BBD984F1037039A2A971DE20FE75);
	int16_t V_0 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, ___0_obj, SizeOf_T_tF891361FC715BBD984F1037039A2A971DE20FE75);
		int32_t L_2;
		L_2 = JitHelpers_UnsafeEnumCast_TisIl2CppFullySharedGenericStruct_mD42A78D32EE1E24FC2354DC266C314F71C1E5568(il2cpp_codegen_memcpy(L_1, L_0, SizeOf_T_tF891361FC715BBD984F1037039A2A971DE20FE75), il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		int16_t L_3 = (il2cpp_codegen_conv<int16_t,int32_t,int32_t,false,false>(L_2,NULL));
		V_0 = L_3;
		int32_t L_4;
		L_4 = Int16_GetHashCode_mCD0A167AC8E6ACC2235F12E00C0F9BDC6ED3B6E1((&V_0), NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignatureDecoder_2__ctor_mE9E4545341ADC55D8511126A371C234FD5CF26AF_gshared (SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A* __this, RuntimeObject* ___0_provider, MetadataReader_t762E493257DEF556B7EE188A92689B643498F23F* ___1_metadataReader, Il2CppFullySharedGenericAny ___2_genericContext, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E9918A305DD44C6C5253BF7305AB7758C686BB5);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TGenericContext_tDAF6C01EAC6B7F0C10CC2FD86FBEF98912379583 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TGenericContext_tDAF6C01EAC6B7F0C10CC2FD86FBEF98912379583);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_provider;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		Throw_ArgumentNull_m984D1EDAF38BBB1C077EA7D7F18725B5BDBF3EF0(_stringLiteral1E9918A305DD44C6C5253BF7305AB7758C686BB5, NULL);
	}

IL_000d:
	{
		MetadataReader_t762E493257DEF556B7EE188A92689B643498F23F* L_1 = ___1_metadataReader;
		il2cpp_codegen_write_instance_field_data<MetadataReader_t762E493257DEF556B7EE188A92689B643498F23F*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1), L_1);
		RuntimeObject* L_2 = ___0_provider;
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0), L_2);
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___2_genericContext : &___2_genericContext), SizeOf_TGenericContext_tDAF6C01EAC6B7F0C10CC2FD86FBEF98912379583);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2), L_3, SizeOf_TGenericContext_tDAF6C01EAC6B7F0C10CC2FD86FBEF98912379583);
		return;
	}
}
IL2CPP_EXTERN_C  void SignatureDecoder_2__ctor_mE9E4545341ADC55D8511126A371C234FD5CF26AF_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_provider, MetadataReader_t762E493257DEF556B7EE188A92689B643498F23F* ___1_metadataReader, Il2CppFullySharedGenericAny ___2_genericContext, const RuntimeMethod* method)
{
	SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A>(__this);
	SignatureDecoder_2__ctor_mE9E4545341ADC55D8511126A371C234FD5CF26AF(_thisAdjusted, ___0_provider, ___1_metadataReader, ___2_genericContext, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignatureDecoder_2_DecodeType_mEEEA6A03C82524ECC64CBDA6924F236FD4A240F6_gshared (SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A* __this, BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* ___0_blobReader, bool ___1_allowTypeSpecifications, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* L_0 = ___0_blobReader;
		bool L_1 = ___1_allowTypeSpecifications;
		BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* L_2 = ___0_blobReader;
		int32_t L_3;
		L_3 = BlobReader_ReadCompressedInteger_mFB680180D24D67B9B212E15A7D34A6F29841697D(L_2, NULL);
		SignatureDecoder_2_DecodeType_mBFC7D6644EDFE74A9D7B206EE30A1A3C5C6E95A1(__this, L_0, L_1, L_3, (Il2CppFullySharedGenericAny*)L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
		return;
	}
}
IL2CPP_EXTERN_C  void SignatureDecoder_2_DecodeType_mEEEA6A03C82524ECC64CBDA6924F236FD4A240F6_AdjustorThunk (RuntimeObject* __this, BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* ___0_blobReader, bool ___1_allowTypeSpecifications, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A>(__this);
	SignatureDecoder_2_DecodeType_mEEEA6A03C82524ECC64CBDA6924F236FD4A240F6(_thisAdjusted, ___0_blobReader, ___1_allowTypeSpecifications, il2cppRetVal, method);
	return;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignatureDecoder_2_DecodeType_mBFC7D6644EDFE74A9D7B206EE30A1A3C5C6E95A1_gshared (SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A* __this, BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* ___0_blobReader, bool ___1_allowTypeSpecifications, int32_t ___2_typeCode, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5));
	const uint32_t SizeOf_MethodSignature_1_t99587E2DD6BF612BCFC6C7A7FE55C385A6567FDC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 16));
	const uint32_t SizeOf_TGenericContext_tDAF6C01EAC6B7F0C10CC2FD86FBEF98912379583 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
	const Il2CppFullySharedGenericAny L_7 = L_5;
	const Il2CppFullySharedGenericAny L_12 = L_5;
	const Il2CppFullySharedGenericAny L_17 = L_5;
	const Il2CppFullySharedGenericAny L_22 = L_5;
	const Il2CppFullySharedGenericAny L_30 = L_5;
	const Il2CppFullySharedGenericAny L_32 = L_5;
	const Il2CppFullySharedGenericAny L_34 = L_5;
	const Il2CppFullySharedGenericAny L_36 = L_5;
	const Il2CppFullySharedGenericAny L_38 = L_5;
	const Il2CppFullySharedGenericAny L_44 = L_5;
	const Il2CppFullySharedGenericAny L_50 = L_5;
	const Il2CppFullySharedGenericAny L_55 = L_5;
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
	const Il2CppFullySharedGenericAny L_14 = L_9;
	const Il2CppFullySharedGenericAny L_19 = L_9;
	const Il2CppFullySharedGenericAny L_24 = L_9;
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
	const Il2CppFullySharedGenericAny L_15 = L_10;
	const Il2CppFullySharedGenericAny L_20 = L_10;
	const Il2CppFullySharedGenericAny L_25 = L_10;
	const Il2CppFullySharedGenericAny L_42 = alloca(SizeOf_TGenericContext_tDAF6C01EAC6B7F0C10CC2FD86FBEF98912379583);
	const Il2CppFullySharedGenericAny L_48 = L_42;
	const MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB L_27 = alloca(SizeOf_MethodSignature_1_t99587E2DD6BF612BCFC6C7A7FE55C385A6567FDC);
	const MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB L_29 = alloca(SizeOf_MethodSignature_1_t99587E2DD6BF612BCFC6C7A7FE55C385A6567FDC);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
	memset(V_0, 0, SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
	int32_t V_1 = 0;
	MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB V_2 = alloca(SizeOf_MethodSignature_1_t99587E2DD6BF612BCFC6C7A7FE55C385A6567FDC);
	memset(V_2, 0, SizeOf_MethodSignature_1_t99587E2DD6BF612BCFC6C7A7FE55C385A6567FDC);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___2_typeCode;
		switch (((int32_t)il2cpp_codegen_subtract(L_0, 1)))
		{
			case 0:
			{
				goto IL_0092;
			}
			case 1:
			{
				goto IL_0092;
			}
			case 2:
			{
				goto IL_0092;
			}
			case 3:
			{
				goto IL_0092;
			}
			case 4:
			{
				goto IL_0092;
			}
			case 5:
			{
				goto IL_0092;
			}
			case 6:
			{
				goto IL_0092;
			}
			case 7:
			{
				goto IL_0092;
			}
			case 8:
			{
				goto IL_0092;
			}
			case 9:
			{
				goto IL_0092;
			}
			case 10:
			{
				goto IL_0092;
			}
			case 11:
			{
				goto IL_0092;
			}
			case 12:
			{
				goto IL_0092;
			}
			case 13:
			{
				goto IL_0092;
			}
			case 14:
			{
				goto IL_00a0;
			}
			case 15:
			{
				goto IL_00b6;
			}
			case 16:
			{
				goto IL_0163;
			}
			case 17:
			{
				goto IL_0163;
			}
			case 18:
			{
				goto IL_012f;
			}
			case 19:
			{
				goto IL_010d;
			}
			case 20:
			{
				goto IL_0127;
			}
			case 21:
			{
				goto IL_0092;
			}
			case 22:
			{
				goto IL_016e;
			}
			case 23:
			{
				goto IL_0092;
			}
			case 24:
			{
				goto IL_0092;
			}
			case 25:
			{
				goto IL_016e;
			}
			case 26:
			{
				goto IL_00f8;
			}
			case 27:
			{
				goto IL_0092;
			}
			case 28:
			{
				goto IL_00e2;
			}
			case 29:
			{
				goto IL_0149;
			}
			case 30:
			{
				goto IL_0115;
			}
			case 31:
			{
				goto IL_011e;
			}
		}
	}
	{
		int32_t L_1 = ___2_typeCode;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)69))))
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_016e;
	}

IL_0092:
	{
		RuntimeObject* L_2 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0));
		int32_t L_3 = ___2_typeCode;
		uint8_t L_4 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(L_3,NULL));
		NullCheck((RuntimeObject*)L_2);
		InterfaceActionInvoker2Invoker< uint8_t, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 6), (RuntimeObject*)L_2, (uint8_t)L_4, (Il2CppFullySharedGenericAny*)L_5);
		il2cpp_codegen_memcpy(il2cppRetVal, L_5, SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
		return;
	}

IL_00a0:
	{
		BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* L_6 = ___0_blobReader;
		SignatureDecoder_2_DecodeType_mEEEA6A03C82524ECC64CBDA6924F236FD4A240F6(__this, L_6, (bool)0, (Il2CppFullySharedGenericAny*)L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		il2cpp_codegen_memcpy(V_0, L_7, SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
		RuntimeObject* L_8 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0));
		il2cpp_codegen_memcpy(L_9, V_0, SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
		NullCheck((RuntimeObject*)L_8);
		InterfaceActionInvoker2Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(3, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9), (RuntimeObject*)L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5)) ? L_9: *(void**)L_9), (Il2CppFullySharedGenericAny*)L_10);
		il2cpp_codegen_memcpy(il2cppRetVal, L_10, SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
		return;
	}

IL_00b6:
	{
		BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* L_11 = ___0_blobReader;
		SignatureDecoder_2_DecodeType_mEEEA6A03C82524ECC64CBDA6924F236FD4A240F6(__this, L_11, (bool)0, (Il2CppFullySharedGenericAny*)L_12, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		il2cpp_codegen_memcpy(V_0, L_12, SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
		RuntimeObject* L_13 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0));
		il2cpp_codegen_memcpy(L_14, V_0, SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
		NullCheck((RuntimeObject*)L_13);
		InterfaceActionInvoker2Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9), (RuntimeObject*)L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5)) ? L_14: *(void**)L_14), (Il2CppFullySharedGenericAny*)L_15);
		il2cpp_codegen_memcpy(il2cppRetVal, L_15, SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
		return;
	}

IL_00cc:
	{
		BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* L_16 = ___0_blobReader;
		SignatureDecoder_2_DecodeType_mEEEA6A03C82524ECC64CBDA6924F236FD4A240F6(__this, L_16, (bool)0, (Il2CppFullySharedGenericAny*)L_17, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		il2cpp_codegen_memcpy(V_0, L_17, SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
		RuntimeObject* L_18 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0));
		il2cpp_codegen_memcpy(L_19, V_0, SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
		NullCheck(L_18);
		InterfaceActionInvoker2Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(4, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_18, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5)) ? L_19: *(void**)L_19), (Il2CppFullySharedGenericAny*)L_20);
		il2cpp_codegen_memcpy(il2cppRetVal, L_20, SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
		return;
	}

IL_00e2:
	{
		BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* L_21 = ___0_blobReader;
		SignatureDecoder_2_DecodeType_mEEEA6A03C82524ECC64CBDA6924F236FD4A240F6(__this, L_21, (bool)0, (Il2CppFullySharedGenericAny*)L_22, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		il2cpp_codegen_memcpy(V_0, L_22, SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
		RuntimeObject* L_23 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0));
		il2cpp_codegen_memcpy(L_24, V_0, SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
		NullCheck((RuntimeObject*)L_23);
		InterfaceActionInvoker2Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 13), (RuntimeObject*)L_23, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5)) ? L_24: *(void**)L_24), (Il2CppFullySharedGenericAny*)L_25);
		il2cpp_codegen_memcpy(il2cppRetVal, L_25, SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
		return;
	}

IL_00f8:
	{
		BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* L_26 = ___0_blobReader;
		SignatureDecoder_2_DecodeMethodSignature_m3CCFD8E0277778BE3ACCB4D477C67E9DBC319D3F(__this, L_26, (MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB*)L_27, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		il2cpp_codegen_memcpy(V_2, L_27, SizeOf_MethodSignature_1_t99587E2DD6BF612BCFC6C7A7FE55C385A6567FDC);
		RuntimeObject* L_28 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0));
		il2cpp_codegen_memcpy(L_29, V_2, SizeOf_MethodSignature_1_t99587E2DD6BF612BCFC6C7A7FE55C385A6567FDC);
		NullCheck(L_28);
		InterfaceActionInvoker2Invoker< MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_28, L_29, (Il2CppFullySharedGenericAny*)L_30);
		il2cpp_codegen_memcpy(il2cppRetVal, L_30, SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
		return;
	}

IL_010d:
	{
		BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* L_31 = ___0_blobReader;
		SignatureDecoder_2_DecodeArrayType_m3999BC48EB209102BE87179D2559232436F4012E(__this, L_31, (Il2CppFullySharedGenericAny*)L_32, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		il2cpp_codegen_memcpy(il2cppRetVal, L_32, SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
		return;
	}

IL_0115:
	{
		BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* L_33 = ___0_blobReader;
		SignatureDecoder_2_DecodeModifiedType_m24FEAF9FFE7D2B7AD438FCDC033D58A1B1AC6618(__this, L_33, (bool)1, (Il2CppFullySharedGenericAny*)L_34, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		il2cpp_codegen_memcpy(il2cppRetVal, L_34, SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
		return;
	}

IL_011e:
	{
		BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* L_35 = ___0_blobReader;
		SignatureDecoder_2_DecodeModifiedType_m24FEAF9FFE7D2B7AD438FCDC033D58A1B1AC6618(__this, L_35, (bool)0, (Il2CppFullySharedGenericAny*)L_36, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		il2cpp_codegen_memcpy(il2cppRetVal, L_36, SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
		return;
	}

IL_0127:
	{
		BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* L_37 = ___0_blobReader;
		SignatureDecoder_2_DecodeGenericTypeInstance_m349EA56EA242EC7865AA133477464F4BCF5EF328(__this, L_37, (Il2CppFullySharedGenericAny*)L_38, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		il2cpp_codegen_memcpy(il2cppRetVal, L_38, SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
		return;
	}

IL_012f:
	{
		BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* L_39 = ___0_blobReader;
		int32_t L_40;
		L_40 = BlobReader_ReadCompressedInteger_mFB680180D24D67B9B212E15A7D34A6F29841697D(L_39, NULL);
		V_1 = L_40;
		RuntimeObject* L_41 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0));
		il2cpp_codegen_memcpy(L_42, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2)), SizeOf_TGenericContext_tDAF6C01EAC6B7F0C10CC2FD86FBEF98912379583);
		int32_t L_43 = V_1;
		NullCheck(L_41);
		InterfaceActionInvoker3Invoker< Il2CppFullySharedGenericAny, int32_t, Il2CppFullySharedGenericAny* >::Invoke(2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_41, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? L_42: *(void**)L_42), L_43, (Il2CppFullySharedGenericAny*)L_44);
		il2cpp_codegen_memcpy(il2cppRetVal, L_44, SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
		return;
	}

IL_0149:
	{
		BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* L_45 = ___0_blobReader;
		int32_t L_46;
		L_46 = BlobReader_ReadCompressedInteger_mFB680180D24D67B9B212E15A7D34A6F29841697D(L_45, NULL);
		V_1 = L_46;
		RuntimeObject* L_47 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0));
		il2cpp_codegen_memcpy(L_48, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2)), SizeOf_TGenericContext_tDAF6C01EAC6B7F0C10CC2FD86FBEF98912379583);
		int32_t L_49 = V_1;
		NullCheck(L_47);
		InterfaceActionInvoker3Invoker< Il2CppFullySharedGenericAny, int32_t, Il2CppFullySharedGenericAny* >::Invoke(1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_47, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? L_48: *(void**)L_48), L_49, (Il2CppFullySharedGenericAny*)L_50);
		il2cpp_codegen_memcpy(il2cppRetVal, L_50, SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
		return;
	}

IL_0163:
	{
		BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* L_51 = ___0_blobReader;
		int32_t L_52 = ___2_typeCode;
		uint8_t L_53 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(L_52,NULL));
		bool L_54 = ___1_allowTypeSpecifications;
		SignatureDecoder_2_DecodeTypeHandle_m462DC7095CE4C5913515F8A711A0FE4B6E9B91AE(__this, L_51, L_53, L_54, (Il2CppFullySharedGenericAny*)L_55, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 23));
		il2cpp_codegen_memcpy(il2cppRetVal, L_55, SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
		return;
	}

IL_016e:
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SR_t16A5FFF876D63D6E3093E6B7109AF6739D858B10_il2cpp_TypeInfo_var)));
		String_t* L_56;
		L_56 = SR_get_UnexpectedSignatureTypeCode_mA568FC39D69667494CC31831C5FC9F3662E28347(NULL);
		int32_t L_57 = ___2_typeCode;
		int32_t L_58 = L_57;
		RuntimeObject* L_59 = Box(il2cpp_defaults.int32_class, &L_58);
		String_t* L_60;
		L_60 = SR_Format_mD3DC91261B0B62B1C83F24031015161840BC483F(L_56, L_59, NULL);
		BadImageFormatException_t7EBAEDCD74D3274D00106EC0051755C18D20E552* L_61 = (BadImageFormatException_t7EBAEDCD74D3274D00106EC0051755C18D20E552*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BadImageFormatException_t7EBAEDCD74D3274D00106EC0051755C18D20E552_il2cpp_TypeInfo_var)));
		BadImageFormatException__ctor_mBE3FC6F66F5F872F8333D9FFBC7382A5FA81E78B(L_61, L_60, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_61, method);
	}
}
IL2CPP_EXTERN_C  void SignatureDecoder_2_DecodeType_mBFC7D6644EDFE74A9D7B206EE30A1A3C5C6E95A1_AdjustorThunk (RuntimeObject* __this, BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* ___0_blobReader, bool ___1_allowTypeSpecifications, int32_t ___2_typeCode, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A>(__this);
	SignatureDecoder_2_DecodeType_mBFC7D6644EDFE74A9D7B206EE30A1A3C5C6E95A1(_thisAdjusted, ___0_blobReader, ___1_allowTypeSpecifications, ___2_typeCode, il2cppRetVal, method);
	return;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImmutableArray_1_tEFAC466EB11A36BFA8CDBFFD33F22584323FD55B SignatureDecoder_2_DecodeTypeSequence_m55D2F0F90279B14F030A558DFB07A1753C89985E_gshared (SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A* __this, BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* ___0_blobReader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImmutableArray_tED520C4BBA5449AF0B7A43F61250ED55233BF648_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
	int32_t V_0 = 0;
	Builder_tE6B12AF8285AC765683866492A5C6FC5E4E6710C* V_1 = NULL;
	int32_t V_2 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* L_0 = ___0_blobReader;
		int32_t L_1;
		L_1 = BlobReader_ReadCompressedInteger_mFB680180D24D67B9B212E15A7D34A6F29841697D(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SR_t16A5FFF876D63D6E3093E6B7109AF6739D858B10_il2cpp_TypeInfo_var)));
		String_t* L_3;
		L_3 = SR_get_SignatureTypeSequenceMustHaveAtLeastOneElement_m6A6C47DE7F7631E0ED5B56717FA09EE31903EDA7(NULL);
		BadImageFormatException_t7EBAEDCD74D3274D00106EC0051755C18D20E552* L_4 = (BadImageFormatException_t7EBAEDCD74D3274D00106EC0051755C18D20E552*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BadImageFormatException_t7EBAEDCD74D3274D00106EC0051755C18D20E552_il2cpp_TypeInfo_var)));
		BadImageFormatException__ctor_mBE3FC6F66F5F872F8333D9FFBC7382A5FA81E78B(L_4, L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0015:
	{
		int32_t L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ImmutableArray_tED520C4BBA5449AF0B7A43F61250ED55233BF648_il2cpp_TypeInfo_var);
		Builder_tE6B12AF8285AC765683866492A5C6FC5E4E6710C* L_6;
		L_6 = ImmutableArray_CreateBuilder_TisIl2CppFullySharedGenericAny_m3BE3AFD68FBD84029DBE2D0FC4FCDAC965E76E52(L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 26));
		V_1 = L_6;
		V_2 = 0;
		goto IL_0032;
	}

IL_0020:
	{
		CHECK_PAUSE_POINT;
		Builder_tE6B12AF8285AC765683866492A5C6FC5E4E6710C* L_7 = V_1;
		BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* L_8 = ___0_blobReader;
		SignatureDecoder_2_DecodeType_mEEEA6A03C82524ECC64CBDA6924F236FD4A240F6(__this, L_8, (bool)0, (Il2CppFullySharedGenericAny*)L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		NullCheck(L_7);
		Builder_Add_m50A5EFE9B5BE9A0D884F129593DF06F84DF5D07C(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5)) ? L_9: *(void**)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 28));
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0032:
	{
		int32_t L_11 = V_2;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0020;
		}
	}
	{
		Builder_tE6B12AF8285AC765683866492A5C6FC5E4E6710C* L_13 = V_1;
		NullCheck(L_13);
		ImmutableArray_1_tEFAC466EB11A36BFA8CDBFFD33F22584323FD55B L_14;
		L_14 = Builder_MoveToImmutable_mFA2D7FE73F89E17B67F06C441639C838D18105ED(L_13, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 29));
		return L_14;
	}
}
IL2CPP_EXTERN_C  ImmutableArray_1_tEFAC466EB11A36BFA8CDBFFD33F22584323FD55B SignatureDecoder_2_DecodeTypeSequence_m55D2F0F90279B14F030A558DFB07A1753C89985E_AdjustorThunk (RuntimeObject* __this, BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* ___0_blobReader, const RuntimeMethod* method)
{
	SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A>(__this);
	ImmutableArray_1_tEFAC466EB11A36BFA8CDBFFD33F22584323FD55B _returnValue;
	_returnValue = SignatureDecoder_2_DecodeTypeSequence_m55D2F0F90279B14F030A558DFB07A1753C89985E(_thisAdjusted, ___0_blobReader, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignatureDecoder_2_DecodeMethodSignature_m3CCFD8E0277778BE3ACCB4D477C67E9DBC319D3F_gshared (SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A* __this, BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* ___0_blobReader, MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImmutableArray_tED520C4BBA5449AF0B7A43F61250ED55233BF648_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5));
	const uint32_t SizeOf_MethodSignature_1_t99587E2DD6BF612BCFC6C7A7FE55C385A6567FDC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 16));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
	const Il2CppFullySharedGenericAny L_20 = L_9;
	const Il2CppFullySharedGenericAny L_27 = L_9;
	const Il2CppFullySharedGenericAny L_34 = L_9;
	const Il2CppFullySharedGenericAny L_38 = alloca(SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
	const MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB L_39 = alloca(SizeOf_MethodSignature_1_t99587E2DD6BF612BCFC6C7A7FE55C385A6567FDC);
	SignatureHeader_t844A1279E334F68A651EB766BC960396B8362ECC V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
	memset(V_3, 0, SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
	ImmutableArray_1_tEFAC466EB11A36BFA8CDBFFD33F22584323FD55B V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	Builder_tE6B12AF8285AC765683866492A5C6FC5E4E6710C* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* L_0 = ___0_blobReader;
		SignatureHeader_t844A1279E334F68A651EB766BC960396B8362ECC L_1;
		L_1 = BlobReader_ReadSignatureHeader_m0E0827A3FA2C520FE2A5076EBCE45445DEF9275A(L_0, NULL);
		V_0 = L_1;
		SignatureHeader_t844A1279E334F68A651EB766BC960396B8362ECC L_2 = V_0;
		SignatureDecoder_2_CheckMethodOrPropertyHeader_m0AB83822F12F9944F190AD22BE7412DC98841E59(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 32));
		V_1 = 0;
		bool L_3;
		L_3 = SignatureHeader_get_IsGeneric_mA53B127F84269D6CC31707E42E60E955B6EDFDC5((&V_0), NULL);
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* L_4 = ___0_blobReader;
		int32_t L_5;
		L_5 = BlobReader_ReadCompressedInteger_mFB680180D24D67B9B212E15A7D34A6F29841697D(L_4, NULL);
		V_1 = L_5;
	}

IL_001f:
	{
		BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* L_6 = ___0_blobReader;
		int32_t L_7;
		L_7 = BlobReader_ReadCompressedInteger_mFB680180D24D67B9B212E15A7D34A6F29841697D(L_6, NULL);
		V_2 = L_7;
		BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* L_8 = ___0_blobReader;
		SignatureDecoder_2_DecodeType_mEEEA6A03C82524ECC64CBDA6924F236FD4A240F6(__this, L_8, (bool)0, (Il2CppFullySharedGenericAny*)L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		il2cpp_codegen_memcpy(V_3, L_9, SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
		int32_t L_10 = V_2;
		if (L_10)
		{
			goto IL_003e;
		}
	}
	{
		V_5 = 0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 33));
		ImmutableArray_1_tEFAC466EB11A36BFA8CDBFFD33F22584323FD55B L_11 = ((ImmutableArray_1_tEFAC466EB11A36BFA8CDBFFD33F22584323FD55B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 33)))->___Empty;
		V_4 = L_11;
		goto IL_009e;
	}

IL_003e:
	{
		int32_t L_12 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ImmutableArray_tED520C4BBA5449AF0B7A43F61250ED55233BF648_il2cpp_TypeInfo_var);
		Builder_tE6B12AF8285AC765683866492A5C6FC5E4E6710C* L_13;
		L_13 = ImmutableArray_CreateBuilder_TisIl2CppFullySharedGenericAny_m3BE3AFD68FBD84029DBE2D0FC4FCDAC965E76E52(L_12, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 26));
		V_6 = L_13;
		V_7 = 0;
		goto IL_0070;
	}

IL_004b:
	{
		CHECK_PAUSE_POINT;
		BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* L_14 = ___0_blobReader;
		int32_t L_15;
		L_15 = BlobReader_ReadCompressedInteger_mFB680180D24D67B9B212E15A7D34A6F29841697D(L_14, NULL);
		V_8 = L_15;
		int32_t L_16 = V_8;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)65))))
		{
			goto IL_0075;
		}
	}
	{
		Builder_tE6B12AF8285AC765683866492A5C6FC5E4E6710C* L_17 = V_6;
		BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* L_18 = ___0_blobReader;
		int32_t L_19 = V_8;
		SignatureDecoder_2_DecodeType_mBFC7D6644EDFE74A9D7B206EE30A1A3C5C6E95A1(__this, L_18, (bool)0, L_19, (Il2CppFullySharedGenericAny*)L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		NullCheck(L_17);
		Builder_Add_m50A5EFE9B5BE9A0D884F129593DF06F84DF5D07C(L_17, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5)) ? L_20: *(void**)L_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 28));
		int32_t L_21 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0070:
	{
		int32_t L_22 = V_7;
		int32_t L_23 = V_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_004b;
		}
	}

IL_0075:
	{
		int32_t L_24 = V_7;
		V_5 = L_24;
		goto IL_0090;
	}

IL_007b:
	{
		CHECK_PAUSE_POINT;
		Builder_tE6B12AF8285AC765683866492A5C6FC5E4E6710C* L_25 = V_6;
		BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* L_26 = ___0_blobReader;
		SignatureDecoder_2_DecodeType_mEEEA6A03C82524ECC64CBDA6924F236FD4A240F6(__this, L_26, (bool)0, (Il2CppFullySharedGenericAny*)L_27, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		NullCheck(L_25);
		Builder_Add_m50A5EFE9B5BE9A0D884F129593DF06F84DF5D07C(L_25, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5)) ? L_27: *(void**)L_27), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 28));
		int32_t L_28 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0090:
	{
		int32_t L_29 = V_7;
		int32_t L_30 = V_2;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_007b;
		}
	}
	{
		Builder_tE6B12AF8285AC765683866492A5C6FC5E4E6710C* L_31 = V_6;
		NullCheck(L_31);
		ImmutableArray_1_tEFAC466EB11A36BFA8CDBFFD33F22584323FD55B L_32;
		L_32 = Builder_MoveToImmutable_mFA2D7FE73F89E17B67F06C441639C838D18105ED(L_31, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 29));
		V_4 = L_32;
	}

IL_009e:
	{
		SignatureHeader_t844A1279E334F68A651EB766BC960396B8362ECC L_33 = V_0;
		il2cpp_codegen_memcpy(L_34, V_3, SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
		int32_t L_35 = V_5;
		int32_t L_36 = V_1;
		ImmutableArray_1_tEFAC466EB11A36BFA8CDBFFD33F22584323FD55B L_37 = V_4;
		memset(L_39, 0, SizeOf_MethodSignature_1_t99587E2DD6BF612BCFC6C7A7FE55C385A6567FDC);
		MethodSignature_1__ctor_mF784840EA0615986BE95433A09D5DD5A9F37B87C((MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB*)L_39, L_33, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5)) ? il2cpp_codegen_memcpy(L_38, L_34, SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240): *(void**)L_34), L_35, L_36, L_37, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 34));
		il2cpp_codegen_memcpy(il2cppRetVal, L_39, SizeOf_MethodSignature_1_t99587E2DD6BF612BCFC6C7A7FE55C385A6567FDC);
		return;
	}
}
IL2CPP_EXTERN_C  void SignatureDecoder_2_DecodeMethodSignature_m3CCFD8E0277778BE3ACCB4D477C67E9DBC319D3F_AdjustorThunk (RuntimeObject* __this, BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* ___0_blobReader, MethodSignature_1_tC03843F77FFFA840E6162B2539DDE6EA4891DFDB* il2cppRetVal, const RuntimeMethod* method)
{
	SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A>(__this);
	SignatureDecoder_2_DecodeMethodSignature_m3CCFD8E0277778BE3ACCB4D477C67E9DBC319D3F(_thisAdjusted, ___0_blobReader, il2cppRetVal, method);
	return;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImmutableArray_1_tEFAC466EB11A36BFA8CDBFFD33F22584323FD55B SignatureDecoder_2_DecodeMethodSpecificationSignature_m605269802B26311A516FD2F991A2E102B9B94218_gshared (SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A* __this, BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* ___0_blobReader, const RuntimeMethod* method) 
{
	SignatureHeader_t844A1279E334F68A651EB766BC960396B8362ECC V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* L_0 = ___0_blobReader;
		SignatureHeader_t844A1279E334F68A651EB766BC960396B8362ECC L_1;
		L_1 = BlobReader_ReadSignatureHeader_m0E0827A3FA2C520FE2A5076EBCE45445DEF9275A(L_0, NULL);
		V_0 = L_1;
		SignatureHeader_t844A1279E334F68A651EB766BC960396B8362ECC L_2 = V_0;
		SignatureDecoder_2_CheckHeader_m3EB2C24E6E67E2FC8B1BC26E7A97A60FF3FEF8F1(L_2, (uint8_t)((int32_t)10), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 36));
		BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* L_3 = ___0_blobReader;
		ImmutableArray_1_tEFAC466EB11A36BFA8CDBFFD33F22584323FD55B L_4;
		L_4 = SignatureDecoder_2_DecodeTypeSequence_m55D2F0F90279B14F030A558DFB07A1753C89985E(__this, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 37));
		return L_4;
	}
}
IL2CPP_EXTERN_C  ImmutableArray_1_tEFAC466EB11A36BFA8CDBFFD33F22584323FD55B SignatureDecoder_2_DecodeMethodSpecificationSignature_m605269802B26311A516FD2F991A2E102B9B94218_AdjustorThunk (RuntimeObject* __this, BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* ___0_blobReader, const RuntimeMethod* method)
{
	SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A>(__this);
	ImmutableArray_1_tEFAC466EB11A36BFA8CDBFFD33F22584323FD55B _returnValue;
	_returnValue = SignatureDecoder_2_DecodeMethodSpecificationSignature_m605269802B26311A516FD2F991A2E102B9B94218(_thisAdjusted, ___0_blobReader, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImmutableArray_1_tEFAC466EB11A36BFA8CDBFFD33F22584323FD55B SignatureDecoder_2_DecodeLocalSignature_mA39AB2F29437460EF1C4E7EE549A5F0870844FD4_gshared (SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A* __this, BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* ___0_blobReader, const RuntimeMethod* method) 
{
	SignatureHeader_t844A1279E334F68A651EB766BC960396B8362ECC V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* L_0 = ___0_blobReader;
		SignatureHeader_t844A1279E334F68A651EB766BC960396B8362ECC L_1;
		L_1 = BlobReader_ReadSignatureHeader_m0E0827A3FA2C520FE2A5076EBCE45445DEF9275A(L_0, NULL);
		V_0 = L_1;
		SignatureHeader_t844A1279E334F68A651EB766BC960396B8362ECC L_2 = V_0;
		SignatureDecoder_2_CheckHeader_m3EB2C24E6E67E2FC8B1BC26E7A97A60FF3FEF8F1(L_2, (uint8_t)7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 36));
		BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* L_3 = ___0_blobReader;
		ImmutableArray_1_tEFAC466EB11A36BFA8CDBFFD33F22584323FD55B L_4;
		L_4 = SignatureDecoder_2_DecodeTypeSequence_m55D2F0F90279B14F030A558DFB07A1753C89985E(__this, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 37));
		return L_4;
	}
}
IL2CPP_EXTERN_C  ImmutableArray_1_tEFAC466EB11A36BFA8CDBFFD33F22584323FD55B SignatureDecoder_2_DecodeLocalSignature_mA39AB2F29437460EF1C4E7EE549A5F0870844FD4_AdjustorThunk (RuntimeObject* __this, BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* ___0_blobReader, const RuntimeMethod* method)
{
	SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A>(__this);
	ImmutableArray_1_tEFAC466EB11A36BFA8CDBFFD33F22584323FD55B _returnValue;
	_returnValue = SignatureDecoder_2_DecodeLocalSignature_mA39AB2F29437460EF1C4E7EE549A5F0870844FD4(_thisAdjusted, ___0_blobReader, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignatureDecoder_2_DecodeFieldSignature_m35BBD3F2B7D944BD4B2CACA7C8CA74FC12A0EAEF_gshared (SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A* __this, BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* ___0_blobReader, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
	SignatureHeader_t844A1279E334F68A651EB766BC960396B8362ECC V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* L_0 = ___0_blobReader;
		SignatureHeader_t844A1279E334F68A651EB766BC960396B8362ECC L_1;
		L_1 = BlobReader_ReadSignatureHeader_m0E0827A3FA2C520FE2A5076EBCE45445DEF9275A(L_0, NULL);
		V_0 = L_1;
		SignatureHeader_t844A1279E334F68A651EB766BC960396B8362ECC L_2 = V_0;
		SignatureDecoder_2_CheckHeader_m3EB2C24E6E67E2FC8B1BC26E7A97A60FF3FEF8F1(L_2, (uint8_t)6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 36));
		BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* L_3 = ___0_blobReader;
		SignatureDecoder_2_DecodeType_mEEEA6A03C82524ECC64CBDA6924F236FD4A240F6(__this, L_3, (bool)0, (Il2CppFullySharedGenericAny*)L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
		return;
	}
}
IL2CPP_EXTERN_C  void SignatureDecoder_2_DecodeFieldSignature_m35BBD3F2B7D944BD4B2CACA7C8CA74FC12A0EAEF_AdjustorThunk (RuntimeObject* __this, BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* ___0_blobReader, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A>(__this);
	SignatureDecoder_2_DecodeFieldSignature_m35BBD3F2B7D944BD4B2CACA7C8CA74FC12A0EAEF(_thisAdjusted, ___0_blobReader, il2cppRetVal, method);
	return;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignatureDecoder_2_DecodeArrayType_m3999BC48EB209102BE87179D2559232436F4012E_gshared (SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A* __this, BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* ___0_blobReader, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_Add_m30B16040989F9CB91EBD975864D5BA2C2379C05D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_MoveToImmutable_mAA17DB184EAA2547FEC1F00BC9F54EB7243765E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImmutableArray_1_tF74A2108C98B37B14FB980028B68A7BB4931CA80_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImmutableArray_CreateBuilder_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD878A2993FC4105E0D33A7FB48916AA8EB093C9E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImmutableArray_tED520C4BBA5449AF0B7A43F61250ED55233BF648_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
	const Il2CppFullySharedGenericAny L_36 = L_1;
	const Il2CppFullySharedGenericAny L_38 = alloca(SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
	memset(V_0, 0, SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
	int32_t V_1 = 0;
	ImmutableArray_1_tF74A2108C98B37B14FB980028B68A7BB4931CA80 V_2;
	memset((&V_2), 0, sizeof(V_2));
	ImmutableArray_1_tF74A2108C98B37B14FB980028B68A7BB4931CA80 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	ArrayShape_t7A27884A54299087906DAD948BD1E92C8941B714 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Builder_t54EFBC198D4C73BF99E3C0C240BE563AB4220952* V_7 = NULL;
	int32_t V_8 = 0;
	Builder_t54EFBC198D4C73BF99E3C0C240BE563AB4220952* V_9 = NULL;
	int32_t V_10 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* L_0 = ___0_blobReader;
		SignatureDecoder_2_DecodeType_mEEEA6A03C82524ECC64CBDA6924F236FD4A240F6(__this, L_0, (bool)0, (Il2CppFullySharedGenericAny*)L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
		BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* L_2 = ___0_blobReader;
		int32_t L_3;
		L_3 = BlobReader_ReadCompressedInteger_mFB680180D24D67B9B212E15A7D34A6F29841697D(L_2, NULL);
		V_1 = L_3;
		il2cpp_codegen_runtime_class_init_inline(ImmutableArray_1_tF74A2108C98B37B14FB980028B68A7BB4931CA80_il2cpp_TypeInfo_var);
		ImmutableArray_1_tF74A2108C98B37B14FB980028B68A7BB4931CA80 L_4 = ((ImmutableArray_1_tF74A2108C98B37B14FB980028B68A7BB4931CA80_StaticFields*)il2cpp_codegen_static_fields_for(ImmutableArray_1_tF74A2108C98B37B14FB980028B68A7BB4931CA80_il2cpp_TypeInfo_var))->___Empty;
		V_2 = L_4;
		ImmutableArray_1_tF74A2108C98B37B14FB980028B68A7BB4931CA80 L_5 = ((ImmutableArray_1_tF74A2108C98B37B14FB980028B68A7BB4931CA80_StaticFields*)il2cpp_codegen_static_fields_for(ImmutableArray_1_tF74A2108C98B37B14FB980028B68A7BB4931CA80_il2cpp_TypeInfo_var))->___Empty;
		V_3 = L_5;
		BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* L_6 = ___0_blobReader;
		int32_t L_7;
		L_7 = BlobReader_ReadCompressedInteger_mFB680180D24D67B9B212E15A7D34A6F29841697D(L_6, NULL);
		V_4 = L_7;
		int32_t L_8 = V_4;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_9 = V_4;
		il2cpp_codegen_runtime_class_init_inline(ImmutableArray_tED520C4BBA5449AF0B7A43F61250ED55233BF648_il2cpp_TypeInfo_var);
		Builder_t54EFBC198D4C73BF99E3C0C240BE563AB4220952* L_10;
		L_10 = ImmutableArray_CreateBuilder_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD878A2993FC4105E0D33A7FB48916AA8EB093C9E(L_9, ImmutableArray_CreateBuilder_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD878A2993FC4105E0D33A7FB48916AA8EB093C9E_RuntimeMethod_var);
		V_7 = L_10;
		V_8 = 0;
		goto IL_004a;
	}

IL_0037:
	{
		CHECK_PAUSE_POINT;
		Builder_t54EFBC198D4C73BF99E3C0C240BE563AB4220952* L_11 = V_7;
		BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* L_12 = ___0_blobReader;
		int32_t L_13;
		L_13 = BlobReader_ReadCompressedInteger_mFB680180D24D67B9B212E15A7D34A6F29841697D(L_12, NULL);
		NullCheck(L_11);
		Builder_Add_m30B16040989F9CB91EBD975864D5BA2C2379C05D(L_11, L_13, Builder_Add_m30B16040989F9CB91EBD975864D5BA2C2379C05D_RuntimeMethod_var);
		int32_t L_14 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_004a:
	{
		int32_t L_15 = V_8;
		int32_t L_16 = V_4;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0037;
		}
	}
	{
		Builder_t54EFBC198D4C73BF99E3C0C240BE563AB4220952* L_17 = V_7;
		NullCheck(L_17);
		ImmutableArray_1_tF74A2108C98B37B14FB980028B68A7BB4931CA80 L_18;
		L_18 = Builder_MoveToImmutable_mAA17DB184EAA2547FEC1F00BC9F54EB7243765E6(L_17, Builder_MoveToImmutable_mAA17DB184EAA2547FEC1F00BC9F54EB7243765E6_RuntimeMethod_var);
		V_2 = L_18;
	}

IL_0058:
	{
		BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* L_19 = ___0_blobReader;
		int32_t L_20;
		L_20 = BlobReader_ReadCompressedInteger_mFB680180D24D67B9B212E15A7D34A6F29841697D(L_19, NULL);
		V_5 = L_20;
		int32_t L_21 = V_5;
		if ((((int32_t)L_21) <= ((int32_t)0)))
		{
			goto IL_0094;
		}
	}
	{
		int32_t L_22 = V_5;
		il2cpp_codegen_runtime_class_init_inline(ImmutableArray_tED520C4BBA5449AF0B7A43F61250ED55233BF648_il2cpp_TypeInfo_var);
		Builder_t54EFBC198D4C73BF99E3C0C240BE563AB4220952* L_23;
		L_23 = ImmutableArray_CreateBuilder_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD878A2993FC4105E0D33A7FB48916AA8EB093C9E(L_22, ImmutableArray_CreateBuilder_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD878A2993FC4105E0D33A7FB48916AA8EB093C9E_RuntimeMethod_var);
		V_9 = L_23;
		V_10 = 0;
		goto IL_0086;
	}

IL_0073:
	{
		CHECK_PAUSE_POINT;
		Builder_t54EFBC198D4C73BF99E3C0C240BE563AB4220952* L_24 = V_9;
		BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* L_25 = ___0_blobReader;
		int32_t L_26;
		L_26 = BlobReader_ReadCompressedSignedInteger_mF0E4DD6A0CF1C2CAAB66E7F4AE387DF9EF133E47(L_25, NULL);
		NullCheck(L_24);
		Builder_Add_m30B16040989F9CB91EBD975864D5BA2C2379C05D(L_24, L_26, Builder_Add_m30B16040989F9CB91EBD975864D5BA2C2379C05D_RuntimeMethod_var);
		int32_t L_27 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_0086:
	{
		int32_t L_28 = V_10;
		int32_t L_29 = V_5;
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_0073;
		}
	}
	{
		Builder_t54EFBC198D4C73BF99E3C0C240BE563AB4220952* L_30 = V_9;
		NullCheck(L_30);
		ImmutableArray_1_tF74A2108C98B37B14FB980028B68A7BB4931CA80 L_31;
		L_31 = Builder_MoveToImmutable_mAA17DB184EAA2547FEC1F00BC9F54EB7243765E6(L_30, Builder_MoveToImmutable_mAA17DB184EAA2547FEC1F00BC9F54EB7243765E6_RuntimeMethod_var);
		V_3 = L_31;
	}

IL_0094:
	{
		int32_t L_32 = V_1;
		ImmutableArray_1_tF74A2108C98B37B14FB980028B68A7BB4931CA80 L_33 = V_2;
		ImmutableArray_1_tF74A2108C98B37B14FB980028B68A7BB4931CA80 L_34 = V_3;
		ArrayShape__ctor_m75E279503712171A35D70F915C4CA12D43270534((&V_6), L_32, L_33, L_34, NULL);
		RuntimeObject* L_35 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0));
		il2cpp_codegen_memcpy(L_36, V_0, SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
		ArrayShape_t7A27884A54299087906DAD948BD1E92C8941B714 L_37 = V_6;
		NullCheck((RuntimeObject*)L_35);
		InterfaceActionInvoker3Invoker< Il2CppFullySharedGenericAny, ArrayShape_t7A27884A54299087906DAD948BD1E92C8941B714, Il2CppFullySharedGenericAny* >::Invoke(1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9), (RuntimeObject*)L_35, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5)) ? L_36: *(void**)L_36), L_37, (Il2CppFullySharedGenericAny*)L_38);
		il2cpp_codegen_memcpy(il2cppRetVal, L_38, SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
		return;
	}
}
IL2CPP_EXTERN_C  void SignatureDecoder_2_DecodeArrayType_m3999BC48EB209102BE87179D2559232436F4012E_AdjustorThunk (RuntimeObject* __this, BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* ___0_blobReader, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A>(__this);
	SignatureDecoder_2_DecodeArrayType_m3999BC48EB209102BE87179D2559232436F4012E(_thisAdjusted, ___0_blobReader, il2cppRetVal, method);
	return;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignatureDecoder_2_DecodeGenericTypeInstance_m349EA56EA242EC7865AA133477464F4BCF5EF328_gshared (SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A* __this, BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* ___0_blobReader, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
	memset(V_0, 0, SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
	ImmutableArray_1_tEFAC466EB11A36BFA8CDBFFD33F22584323FD55B V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* L_0 = ___0_blobReader;
		SignatureDecoder_2_DecodeType_mEEEA6A03C82524ECC64CBDA6924F236FD4A240F6(__this, L_0, (bool)0, (Il2CppFullySharedGenericAny*)L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
		BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* L_2 = ___0_blobReader;
		ImmutableArray_1_tEFAC466EB11A36BFA8CDBFFD33F22584323FD55B L_3;
		L_3 = SignatureDecoder_2_DecodeTypeSequence_m55D2F0F90279B14F030A558DFB07A1753C89985E(__this, L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 37));
		V_1 = L_3;
		RuntimeObject* L_4 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0));
		il2cpp_codegen_memcpy(L_5, V_0, SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
		ImmutableArray_1_tEFAC466EB11A36BFA8CDBFFD33F22584323FD55B L_6 = V_1;
		NullCheck((RuntimeObject*)L_4);
		InterfaceActionInvoker3Invoker< Il2CppFullySharedGenericAny, ImmutableArray_1_tEFAC466EB11A36BFA8CDBFFD33F22584323FD55B, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9), (RuntimeObject*)L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5)) ? L_5: *(void**)L_5), L_6, (Il2CppFullySharedGenericAny*)L_7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_7, SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
		return;
	}
}
IL2CPP_EXTERN_C  void SignatureDecoder_2_DecodeGenericTypeInstance_m349EA56EA242EC7865AA133477464F4BCF5EF328_AdjustorThunk (RuntimeObject* __this, BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* ___0_blobReader, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A>(__this);
	SignatureDecoder_2_DecodeGenericTypeInstance_m349EA56EA242EC7865AA133477464F4BCF5EF328(_thisAdjusted, ___0_blobReader, il2cppRetVal, method);
	return;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignatureDecoder_2_DecodeModifiedType_m24FEAF9FFE7D2B7AD438FCDC033D58A1B1AC6618_gshared (SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A* __this, BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* ___0_blobReader, bool ___1_isRequired, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
	memset(V_0, 0, SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
	memset(V_1, 0, SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* L_0 = ___0_blobReader;
		SignatureDecoder_2_DecodeTypeHandle_m462DC7095CE4C5913515F8A711A0FE4B6E9B91AE(__this, L_0, (uint8_t)0, (bool)1, (Il2CppFullySharedGenericAny*)L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 23));
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
		BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* L_2 = ___0_blobReader;
		SignatureDecoder_2_DecodeType_mEEEA6A03C82524ECC64CBDA6924F236FD4A240F6(__this, L_2, (bool)0, (Il2CppFullySharedGenericAny*)L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		il2cpp_codegen_memcpy(V_1, L_3, SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
		RuntimeObject* L_4 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0));
		il2cpp_codegen_memcpy(L_5, V_0, SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
		il2cpp_codegen_memcpy(L_6, V_1, SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
		bool L_7 = ___1_isRequired;
		NullCheck(L_4);
		InterfaceActionInvoker4Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, bool, Il2CppFullySharedGenericAny* >::Invoke(3, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5)) ? L_5: *(void**)L_5), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5)) ? L_6: *(void**)L_6), L_7, (Il2CppFullySharedGenericAny*)L_8);
		il2cpp_codegen_memcpy(il2cppRetVal, L_8, SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
		return;
	}
}
IL2CPP_EXTERN_C  void SignatureDecoder_2_DecodeModifiedType_m24FEAF9FFE7D2B7AD438FCDC033D58A1B1AC6618_AdjustorThunk (RuntimeObject* __this, BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* ___0_blobReader, bool ___1_isRequired, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A>(__this);
	SignatureDecoder_2_DecodeModifiedType_m24FEAF9FFE7D2B7AD438FCDC033D58A1B1AC6618(_thisAdjusted, ___0_blobReader, ___1_isRequired, il2cppRetVal, method);
	return;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignatureDecoder_2_DecodeTypeHandle_m462DC7095CE4C5913515F8A711A0FE4B6E9B91AE_gshared (SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A* __this, BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* ___0_blobReader, uint8_t ___1_rawTypeKind, bool ___2_allowTypeSpecifications, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EntityHandle_t281CE29ADEC32D51B7229800FBA887489BC18CC0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5));
	const uint32_t SizeOf_TGenericContext_tDAF6C01EAC6B7F0C10CC2FD86FBEF98912379583 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
	const Il2CppFullySharedGenericAny L_18 = L_12;
	const Il2CppFullySharedGenericAny L_28 = L_12;
	const Il2CppFullySharedGenericAny L_24 = alloca(SizeOf_TGenericContext_tDAF6C01EAC6B7F0C10CC2FD86FBEF98912379583);
	EntityHandle_t281CE29ADEC32D51B7229800FBA887489BC18CC0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t V_1 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* L_0 = ___0_blobReader;
		EntityHandle_t281CE29ADEC32D51B7229800FBA887489BC18CC0 L_1;
		L_1 = BlobReader_ReadTypeHandle_mC76AF004562894E90CE8D76B7F8CE27D8F29C257(L_0, NULL);
		V_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(EntityHandle_t281CE29ADEC32D51B7229800FBA887489BC18CC0_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = EntityHandle_get_IsNil_mE5D524FB2C6A16DD109D9B5C174BDEEED300D25E((&V_0), NULL);
		if (L_2)
		{
			goto IL_0086;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EntityHandle_t281CE29ADEC32D51B7229800FBA887489BC18CC0_il2cpp_TypeInfo_var);
		uint8_t L_3;
		L_3 = EntityHandle_get_Kind_mA40A20616F5B5CF3C9A182A4F3DAC875AB53134D((&V_0), NULL);
		V_1 = L_3;
		uint8_t L_4 = V_1;
		if ((((int32_t)L_4) == ((int32_t)1)))
		{
			goto IL_0040;
		}
	}
	{
		uint8_t L_5 = V_1;
		if ((((int32_t)L_5) == ((int32_t)2)))
		{
			goto IL_0027;
		}
	}
	{
		uint8_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)27))))
		{
			goto IL_0059;
		}
	}
	{
		goto IL_0086;
	}

IL_0027:
	{
		RuntimeObject* L_7 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0));
		MetadataReader_t762E493257DEF556B7EE188A92689B643498F23F* L_8 = *(MetadataReader_t762E493257DEF556B7EE188A92689B643498F23F**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1));
		EntityHandle_t281CE29ADEC32D51B7229800FBA887489BC18CC0 L_9 = V_0;
		TypeDefinitionHandle_tE85E143F0FED1313BA132EB2151B5FC04F00043B L_10;
		L_10 = TypeDefinitionHandle_op_Explicit_m77F4F65C3FD539FCB66D0224E86B67CEC660758C(L_9, NULL);
		uint8_t L_11 = ___1_rawTypeKind;
		NullCheck((RuntimeObject*)L_7);
		InterfaceActionInvoker4Invoker< MetadataReader_t762E493257DEF556B7EE188A92689B643498F23F*, TypeDefinitionHandle_tE85E143F0FED1313BA132EB2151B5FC04F00043B, uint8_t, Il2CppFullySharedGenericAny* >::Invoke(1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 6), (RuntimeObject*)L_7, L_8, L_10, L_11, (Il2CppFullySharedGenericAny*)L_12);
		il2cpp_codegen_memcpy(il2cppRetVal, L_12, SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
		return;
	}

IL_0040:
	{
		RuntimeObject* L_13 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0));
		MetadataReader_t762E493257DEF556B7EE188A92689B643498F23F* L_14 = *(MetadataReader_t762E493257DEF556B7EE188A92689B643498F23F**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1));
		EntityHandle_t281CE29ADEC32D51B7229800FBA887489BC18CC0 L_15 = V_0;
		TypeReferenceHandle_t587011B8BCE944E9B8A30001B04AA0FE74A88D68 L_16;
		L_16 = TypeReferenceHandle_op_Explicit_m1ADBD51BAB33377E742748B0105A5F9B48F5EC18(L_15, NULL);
		uint8_t L_17 = ___1_rawTypeKind;
		NullCheck((RuntimeObject*)L_13);
		InterfaceActionInvoker4Invoker< MetadataReader_t762E493257DEF556B7EE188A92689B643498F23F*, TypeReferenceHandle_t587011B8BCE944E9B8A30001B04AA0FE74A88D68, uint8_t, Il2CppFullySharedGenericAny* >::Invoke(2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 6), (RuntimeObject*)L_13, L_14, L_16, L_17, (Il2CppFullySharedGenericAny*)L_18);
		il2cpp_codegen_memcpy(il2cppRetVal, L_18, SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
		return;
	}

IL_0059:
	{
		bool L_19 = ___2_allowTypeSpecifications;
		if (L_19)
		{
			goto IL_0067;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SR_t16A5FFF876D63D6E3093E6B7109AF6739D858B10_il2cpp_TypeInfo_var)));
		String_t* L_20;
		L_20 = SR_get_NotTypeDefOrRefHandle_m5A1F5DBE4B65D7E663B13748FF0B3873A74810C9(NULL);
		BadImageFormatException_t7EBAEDCD74D3274D00106EC0051755C18D20E552* L_21 = (BadImageFormatException_t7EBAEDCD74D3274D00106EC0051755C18D20E552*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BadImageFormatException_t7EBAEDCD74D3274D00106EC0051755C18D20E552_il2cpp_TypeInfo_var)));
		BadImageFormatException__ctor_mBE3FC6F66F5F872F8333D9FFBC7382A5FA81E78B(L_21, L_20, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, method);
	}

IL_0067:
	{
		RuntimeObject* L_22 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0));
		MetadataReader_t762E493257DEF556B7EE188A92689B643498F23F* L_23 = *(MetadataReader_t762E493257DEF556B7EE188A92689B643498F23F**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1));
		il2cpp_codegen_memcpy(L_24, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2)), SizeOf_TGenericContext_tDAF6C01EAC6B7F0C10CC2FD86FBEF98912379583);
		EntityHandle_t281CE29ADEC32D51B7229800FBA887489BC18CC0 L_25 = V_0;
		TypeSpecificationHandle_t96CB2CFC648A9F2A8C49CC28B0B4ABCE240FFA49 L_26;
		L_26 = TypeSpecificationHandle_op_Explicit_m29FD535258411856FDAB70F6DA80930BB141E93F(L_25, NULL);
		uint8_t L_27 = ___1_rawTypeKind;
		NullCheck(L_22);
		InterfaceActionInvoker5Invoker< MetadataReader_t762E493257DEF556B7EE188A92689B643498F23F*, Il2CppFullySharedGenericAny, TypeSpecificationHandle_t96CB2CFC648A9F2A8C49CC28B0B4ABCE240FFA49, uint8_t, Il2CppFullySharedGenericAny* >::Invoke(5, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_22, L_23, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? L_24: *(void**)L_24), L_26, L_27, (Il2CppFullySharedGenericAny*)L_28);
		il2cpp_codegen_memcpy(il2cppRetVal, L_28, SizeOf_TType_t9C6BF9C2AED3143AE138A21AD385DCF326151240);
		return;
	}

IL_0086:
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SR_t16A5FFF876D63D6E3093E6B7109AF6739D858B10_il2cpp_TypeInfo_var)));
		String_t* L_29;
		L_29 = SR_get_NotTypeDefOrRefOrSpecHandle_mC8BFA9B7AAECFA8D4E7729DF7180A8DE3E8543E4(NULL);
		BadImageFormatException_t7EBAEDCD74D3274D00106EC0051755C18D20E552* L_30 = (BadImageFormatException_t7EBAEDCD74D3274D00106EC0051755C18D20E552*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BadImageFormatException_t7EBAEDCD74D3274D00106EC0051755C18D20E552_il2cpp_TypeInfo_var)));
		BadImageFormatException__ctor_mBE3FC6F66F5F872F8333D9FFBC7382A5FA81E78B(L_30, L_29, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_30, method);
	}
}
IL2CPP_EXTERN_C  void SignatureDecoder_2_DecodeTypeHandle_m462DC7095CE4C5913515F8A711A0FE4B6E9B91AE_AdjustorThunk (RuntimeObject* __this, BlobReader_t53D1A2FE26F2217C404BB7D92CC3BB3FE6402203* ___0_blobReader, uint8_t ___1_rawTypeKind, bool ___2_allowTypeSpecifications, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<SignatureDecoder_2_t4B11D0820428C06B05F23DB92AC2B7558E6C7C2A>(__this);
	SignatureDecoder_2_DecodeTypeHandle_m462DC7095CE4C5913515F8A711A0FE4B6E9B91AE(_thisAdjusted, ___0_blobReader, ___1_rawTypeKind, ___2_allowTypeSpecifications, il2cppRetVal, method);
	return;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignatureDecoder_2_CheckHeader_m3EB2C24E6E67E2FC8B1BC26E7A97A60FF3FEF8F1_gshared (SignatureHeader_t844A1279E334F68A651EB766BC960396B8362ECC ___0_header, uint8_t ___1_expectedKind, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		uint8_t L_0;
		L_0 = SignatureHeader_get_Kind_m47B65C220A32C361F2DCAF120C00BE314BA745AC((&___0_header), NULL);
		uint8_t L_1 = ___1_expectedKind;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0038;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SR_t16A5FFF876D63D6E3093E6B7109AF6739D858B10_il2cpp_TypeInfo_var)));
		String_t* L_2;
		L_2 = SR_get_UnexpectedSignatureHeader_m0F0A081CF90BED42F11BEFE6A7F838342B547CFC(NULL);
		uint8_t L_3 = ___1_expectedKind;
		uint8_t L_4 = L_3;
		RuntimeObject* L_5 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SignatureKind_t3B913B08977D1894CF5EEF09B84C53C5FBC5E02F_il2cpp_TypeInfo_var)), &L_4);
		uint8_t L_6;
		L_6 = SignatureHeader_get_Kind_m47B65C220A32C361F2DCAF120C00BE314BA745AC((&___0_header), NULL);
		uint8_t L_7 = L_6;
		RuntimeObject* L_8 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SignatureKind_t3B913B08977D1894CF5EEF09B84C53C5FBC5E02F_il2cpp_TypeInfo_var)), &L_7);
		uint8_t L_9;
		L_9 = SignatureHeader_get_RawValue_mA36B442B154FA437C545C12F29F4B0E6F39AD744_inline((&___0_header), NULL);
		uint8_t L_10 = L_9;
		RuntimeObject* L_11 = Box(il2cpp_defaults.byte_class, &L_10);
		String_t* L_12;
		L_12 = SR_Format_m48E39B67DD5FCFFE5EF82161A2712D370C44BCCD(L_2, L_5, L_8, L_11, NULL);
		BadImageFormatException_t7EBAEDCD74D3274D00106EC0051755C18D20E552* L_13 = (BadImageFormatException_t7EBAEDCD74D3274D00106EC0051755C18D20E552*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BadImageFormatException_t7EBAEDCD74D3274D00106EC0051755C18D20E552_il2cpp_TypeInfo_var)));
		BadImageFormatException__ctor_mBE3FC6F66F5F872F8333D9FFBC7382A5FA81E78B(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, method);
	}

IL_0038:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignatureDecoder_2_CheckMethodOrPropertyHeader_m0AB83822F12F9944F190AD22BE7412DC98841E59_gshared (SignatureHeader_t844A1279E334F68A651EB766BC960396B8362ECC ___0_header, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		uint8_t L_0;
		L_0 = SignatureHeader_get_Kind_m47B65C220A32C361F2DCAF120C00BE314BA745AC((&___0_header), NULL);
		V_0 = L_0;
		uint8_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0055;
		}
	}
	{
		uint8_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)8)))
		{
			goto IL_0055;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SR_t16A5FFF876D63D6E3093E6B7109AF6739D858B10_il2cpp_TypeInfo_var)));
		String_t* L_3;
		L_3 = SR_get_UnexpectedSignatureHeader2_mB1C46A4320E6C29FBEC5CA0F7C9D327A55C5AC7D(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		uint8_t L_6 = (uint8_t)8;
		RuntimeObject* L_7 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SignatureKind_t3B913B08977D1894CF5EEF09B84C53C5FBC5E02F_il2cpp_TypeInfo_var)), &L_6);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_5;
		uint8_t L_9 = (uint8_t)0;
		RuntimeObject* L_10 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SignatureKind_t3B913B08977D1894CF5EEF09B84C53C5FBC5E02F_il2cpp_TypeInfo_var)), &L_9);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_8;
		uint8_t L_12;
		L_12 = SignatureHeader_get_Kind_m47B65C220A32C361F2DCAF120C00BE314BA745AC((&___0_header), NULL);
		uint8_t L_13 = L_12;
		RuntimeObject* L_14 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SignatureKind_t3B913B08977D1894CF5EEF09B84C53C5FBC5E02F_il2cpp_TypeInfo_var)), &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_11;
		uint8_t L_16;
		L_16 = SignatureHeader_get_RawValue_mA36B442B154FA437C545C12F29F4B0E6F39AD744_inline((&___0_header), NULL);
		uint8_t L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_defaults.byte_class, &L_17);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_18);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_18);
		String_t* L_19;
		L_19 = SR_Format_m8AC0F3EB11000EC5161A3E0B85CEB33F1F7D7BAD(L_3, L_15, NULL);
		BadImageFormatException_t7EBAEDCD74D3274D00106EC0051755C18D20E552* L_20 = (BadImageFormatException_t7EBAEDCD74D3274D00106EC0051755C18D20E552*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BadImageFormatException_t7EBAEDCD74D3274D00106EC0051755C18D20E552_il2cpp_TypeInfo_var)));
		BadImageFormatException__ctor_mBE3FC6F66F5F872F8333D9FFBC7382A5FA81E78B(L_20, L_19, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_0055:
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* SingletonMonoBehaviour_1_get_Instance_m82A777B108BDE11C93658D646EE17BB496D69551_gshared (const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 297));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 298));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 299));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		Lazy_1_t75FF7FC97561B1B745A0A17BAC60C19B2C1F7C95* L_0 = ((SingletonMonoBehaviour_1_tBFFD0339B806174EB8B7556E79010D48B2700659_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___LazyInstance;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 300));
		NullCheck(L_0);
		Il2CppSharedGenericObject* L_1;
		L_1 = Lazy_1_get_Value_mF69721F6F88F7AA447B9232405C4C9B2B5663468(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 300));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* SingletonMonoBehaviour_1_CreateSingleton_mDC578ED3CD56696A47C8E9859A482B2526A5B995_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral022C931A54D8DC033474CEA6A68B4DBC2340D8A5);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	Il2CppSharedGenericObject* V_1 = NULL;
	Il2CppSharedGenericObject* V_2 = NULL;
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 301));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 302));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 303));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 304));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 5)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 305));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 305));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 306));
		NullCheck((MemberInfo_t*)L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 306));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 307));
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_2, _stringLiteral022C931A54D8DC033474CEA6A68B4DBC2340D8A5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 307));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 308));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_4, L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 308));
		V_0 = L_4;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 309));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 310));
		NullCheck(L_5);
		Il2CppSharedGenericObject* L_6;
		L_6 = GameObject_AddComponent_TisIl2CppSharedGenericObject_mEC1C0E045A5A771DA12CB28C8523DB16596946AD(L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 310));
		V_1 = L_6;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 311));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 312));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 312));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 313));
		Il2CppSharedGenericObject* L_8 = V_1;
		V_2 = L_8;
		goto IL_0032;
	}

IL_0032:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 314));
		Il2CppSharedGenericObject* L_9 = V_2;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingletonMonoBehaviour_1__ctor_m02F522424B0D074B755A7E73C501328CC86E3F0F_gshared (SingletonMonoBehaviour_1_tBFFD0339B806174EB8B7556E79010D48B2700659* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E((MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingletonMonoBehaviour_1__cctor_m523C3F62C240A62653CC18F515A5124BE96402B6_gshared (const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 315));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 316));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 317));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 318));
		Func_1_t566D4A654882E282E54CDC3A001E05486F913903* L_0 = (Func_1_t566D4A654882E282E54CDC3A001E05486F913903*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		Func_1__ctor_m5FD0E1320A7A8964A7FCC0D0EA7F809E4E76E0EF(L_0, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 318));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 319));
		Lazy_1_t75FF7FC97561B1B745A0A17BAC60C19B2C1F7C95* L_1 = (Lazy_1_t75FF7FC97561B1B745A0A17BAC60C19B2C1F7C95*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		Lazy_1__ctor_m2E6B75D68524A2B5683DAD48A01DC27E3772E467(L_1, L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 319));
		((SingletonMonoBehaviour_1_tBFFD0339B806174EB8B7556E79010D48B2700659_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___LazyInstance = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((SingletonMonoBehaviour_1_tBFFD0339B806174EB8B7556E79010D48B2700659_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___LazyInstance), (void*)L_1);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43471));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43472));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43473));
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = ((PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_StaticFields*)il2cpp_codegen_static_fields_for(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var))->___m_Null;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Playable__ctor_mD2EB35E024816AEED68795D0124EAB30E05BF6C4_inline (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Playable__ctor_mD2EB35E024816AEED68795D0124EAB30E05BF6C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_handle));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Playable__ctor_mD2EB35E024816AEED68795D0124EAB30E05BF6C4_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 42963));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 42964));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 42965));
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = ___0_handle;
		__this->___m_Handle = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 42966));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 Playable_GetHandle_m39356D23E849DC5428B262092657662C064E04F8_inline (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Playable_GetHandle_m39356D23E849DC5428B262092657662C064E04F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Playable_GetHandle_m39356D23E849DC5428B262092657662C064E04F8_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 42967));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 42968));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 42969));
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_IsPowerOfTwo_m58172AEBE272F53FD34CC10641057847181E960A_inline (int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_IsPowerOfTwo_m58172AEBE272F53FD34CC10641057847181E960A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Mathf_IsPowerOfTwo_m58172AEBE272F53FD34CC10641057847181E960A_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 25909));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 25910));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 25911));
		int32_t L_0 = ___0_value;
		int32_t L_1 = ___0_value;
		return (bool)((((int32_t)((int32_t)(L_0&((int32_t)il2cpp_codegen_subtract(L_1, 1))))) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BaseShaderInfoStorage_get_disposed_mAF7F54A791E6AF75BF1AD71B1DDA85099BFCE1EF_inline (BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseShaderInfoStorage_get_disposed_mAF7F54A791E6AF75BF1AD71B1DDA85099BFCE1EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, BaseShaderInfoStorage_get_disposed_mAF7F54A791E6AF75BF1AD71B1DDA85099BFCE1EF_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132757));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132758));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 132759));
		bool L_0 = __this->___U3CdisposedU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RectInt_get_x_mA1E7EF6DEAD2E900D7D56B7A3957C05081EBA9CA_inline (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectInt_get_x_mA1E7EF6DEAD2E900D7D56B7A3957C05081EBA9CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, RectInt_get_x_mA1E7EF6DEAD2E900D7D56B7A3957C05081EBA9CA_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8495));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8496));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8497));
		int32_t L_0 = __this->___m_XMin;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RectInt_get_y_m440422264E6FCAA91E01F81486A78037AC29D878_inline (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectInt_get_y_m440422264E6FCAA91E01F81486A78037AC29D878_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, RectInt_get_y_m440422264E6FCAA91E01F81486A78037AC29D878_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8501));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8502));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8503));
		int32_t L_0 = __this->___m_YMin;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RectInt__ctor_m6E8B3A6C7EE11257A6B438E36274116FE39B5B42_inline (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, int32_t ___0_xMin, int32_t ___1_yMin, int32_t ___2_width, int32_t ___3_height, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectInt__ctor_m6E8B3A6C7EE11257A6B438E36274116FE39B5B42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_xMin), (&___1_yMin), (&___2_width), (&___3_height));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, RectInt__ctor_m6E8B3A6C7EE11257A6B438E36274116FE39B5B42_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8636));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8637));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8638));
		int32_t L_0 = ___0_xMin;
		__this->___m_XMin = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8639));
		int32_t L_1 = ___1_yMin;
		__this->___m_YMin = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8640));
		int32_t L_2 = ___2_width;
		__this->___m_Width = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8641));
		int32_t L_3 = ___3_height;
		__this->___m_Height = L_3;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 8642));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UIRAtlasAllocator_get_physicalWidth_m0B06147154436A555CEABB9C9EB319D7D33A5398_inline (UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIRAtlasAllocator_get_physicalWidth_m0B06147154436A555CEABB9C9EB319D7D33A5398_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UIRAtlasAllocator_get_physicalWidth_m0B06147154436A555CEABB9C9EB319D7D33A5398_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 61279));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 61280));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 61281));
		int32_t L_0 = __this->___U3CphysicalWidthU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UIRAtlasAllocator_get_physicalHeight_m736C92B2C509CE66BAFFBA87110103BBC72DBD88_inline (UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIRAtlasAllocator_get_physicalHeight_m736C92B2C509CE66BAFFBA87110103BBC72DBD88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UIRAtlasAllocator_get_physicalHeight_m736C92B2C509CE66BAFFBA87110103BBC72DBD88_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 61285));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 61286));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 61287));
		int32_t L_0 = __this->___U3CphysicalHeightU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t SignatureHeader_get_RawValue_mA36B442B154FA437C545C12F29F4B0E6F39AD744_inline (SignatureHeader_t844A1279E334F68A651EB766BC960396B8362ECC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignatureHeader_get_RawValue_mA36B442B154FA437C545C12F29F4B0E6F39AD744_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SignatureHeader_get_RawValue_mA36B442B154FA437C545C12F29F4B0E6F39AD744_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		uint8_t L_0 = __this->____rawValue;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ScriptPlayable_1_GetHandle_m77CD4A0339EB708FE8D2A64356D2785AAF3C25D2_gshared_inline (ScriptPlayable_1_tFFC52EF77DAC16F087A5AE6C46A136BF12D0B7DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptPlayable_1_t1DE5CFA5D13CA487B2CFE443BD6C9954EA4D19D8_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43833));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43834));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43835));
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SecurePooledObject_1_get_Owner_mFF138A12D4D859429D8DE30CD66B76A705DA5CDE_gshared_inline (SecurePooledObject_1_tB41A569B91ED04D56C211BA433285BBCC8C711AC* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),1));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SecurePooledObject_1_set_Owner_m32B17046B06DADCA2E63CC02630B07CE6D6B98F0_gshared_inline (SecurePooledObject_1_tB41A569B91ED04D56C211BA433285BBCC8C711AC* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___0_value;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),1), L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeList_1_get_Length_m35C71DFABA31811E9ABCD2FF56F066B449E3C84A_gshared_inline (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_t098D123ECC7F884EDDA7751485B9FBE450B8C9D7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 33635));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 33636));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 33637));
		int32_t L_0 = __this->___m_length;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 33638));
		int32_t L_1;
		L_1 = CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1_inline(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 33638));
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeList_1_get_Length_mBCE0D52E1FEFC40B5CFEE2F41B493C7FF6A07FA7_gshared_inline (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_t0DD56C6A6FBCF305924DF0100D2E13E4858CF74E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 22243));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 22244));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 22245));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 22246));
		UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* L_0 = __this->___m_ListData;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 22247));
		int32_t L_1;
		L_1 = UnsafeList_1_get_Length_m35C71DFABA31811E9ABCD2FF56F066B449E3C84A_inline((UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6*)L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 28));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 22247));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 22248));
		int32_t L_2;
		L_2 = CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1_inline(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 22248));
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 22249));
		int32_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Func_2_Invoke_m31CAC166FDC80DC5AE52A5AEFFEE2D9B27A1CA3F_gshared_inline (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* __this, Il2CppFullySharedGenericAny ___0_arg, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		bool L_1;
		L_1 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_2 = __this->____size;
		V_0 = L_2;
		__this->____size = 0;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = __this->____items;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
		return;
	}

IL_0035:
	{
		__this->____size = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m26AF82C275C82180BB7F23C7E408BC1FEB9A38EE_gshared_inline (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_KeyValuePair_2_t23F299E80A87656CF35AA5186B375FDE51A801EF = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_0 = alloca(SizeOf_KeyValuePair_2_t23F299E80A87656CF35AA5186B375FDE51A801EF);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),3)), SizeOf_KeyValuePair_2_t23F299E80A87656CF35AA5186B375FDE51A801EF);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_KeyValuePair_2_t23F299E80A87656CF35AA5186B375FDE51A801EF);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PropertyCollection_1_get_Empty_mBDB0A9966BECD6790C4490416D03BF4102A8BFEF_gshared_inline (PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_PropertyCollection_1_tDE1D0D6C2E37A7CF69D8BE5F994888490D9DCA73 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D L_0 = alloca(SizeOf_PropertyCollection_1_tDE1D0D6C2E37A7CF69D8BE5F994888490D9DCA73);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2310));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2311));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2312));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_static_field_data_pointer(il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),4)), SizeOf_PropertyCollection_1_tDE1D0D6C2E37A7CF69D8BE5F994888490D9DCA73);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_PropertyCollection_1_tDE1D0D6C2E37A7CF69D8BE5F994888490D9DCA73);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SetValueVisitor_1_set_group_m94980C75D99986FB92C00A15DA3C9C1E7DF4F175_gshared_inline (SetValueVisitor_1_t9F8375B4EA106BA863CE89AC21063AB486248660* __this, ConverterGroup_t2D7DEDAC22662EF5C020DE54231DC23CD0B5268A* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SetValueVisitor_1_t24E27AE939174CE9B22764E704FE0D8F62A37D6C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 39612));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 39613));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 39614));
		ConverterGroup_t2D7DEDAC22662EF5C020DE54231DC23CD0B5268A* L_0 = ___0_value;
		il2cpp_codegen_write_instance_field_data<ConverterGroup_t2D7DEDAC22662EF5C020DE54231DC23CD0B5268A*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2), L_0);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NativeArray_1_set_Item_m629BDF69720F9FF193478E89307F9B6A56425379_gshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_t6E2931CC2E1AA6B9F666FF4270BD177E2114779B_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t05490BB68E93F7FF07D46087FEC0242A3FB9D022 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t05490BB68E93F7FF07D46087FEC0242A3FB9D022);
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t05490BB68E93F7FF07D46087FEC0242A3FB9D022);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_index), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11)) ? ___1_value : &___1_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2665));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2666));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2667));
		void* L_0 = __this->___m_Buffer;
		int32_t L_1 = ___0_index;
		il2cpp_codegen_memcpy(L_2, ___1_value, SizeOf_T_t05490BB68E93F7FF07D46087FEC0242A3FB9D022);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2668));
		UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericStruct_m2568B80B56E9BC10FC709C1FC73B9390B9B9797E_inline(L_0, L_1, il2cpp_codegen_memcpy(L_3, L_2, SizeOf_T_t05490BB68E93F7FF07D46087FEC0242A3FB9D022), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2668));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2669));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NativeArray_1_get_Item_mA8C8A69EB3A5D460C55DFCD27275CD5BA5E2B455_gshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_t6E2931CC2E1AA6B9F666FF4270BD177E2114779B_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t05490BB68E93F7FF07D46087FEC0242A3FB9D022 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t05490BB68E93F7FF07D46087FEC0242A3FB9D022);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_index));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2661));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2662));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2663));
		void* L_0 = __this->___m_Buffer;
		int32_t L_1 = ___0_index;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2664));
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_0, L_1, (Il2CppFullySharedGenericStruct*)L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2664));
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_T_t05490BB68E93F7FF07D46087FEC0242A3FB9D022);
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SharedStatic_1__ctor_m467F9A64986F442AA4853C5C314D0A54D887CDDC_gshared_inline (SharedStatic_1_t965CBE4F8A30F785649BF3D97C277D0927858D08* __this, void* ___0_buffer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SharedStatic_1_t6F461F0F49C63663BA5309A8B8620793444CB086_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_buffer));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3452));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3453));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3454));
		void* L_0 = ___0_buffer;
		__this->____buffer = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* UnsafeUtility_AsRef_TisIl2CppFullySharedGenericStruct_m78B0690121A96EFFDA7D6D3ADAF97940CF8136BE_gshared_inline (void* ___0_ptr, const RuntimeMethod* method) 
{
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_ptr));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3762));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3763));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3764));
		void* L_0 = ___0_ptr;
		return (Il2CppFullySharedGenericStruct*)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* SharedStatic_1_get_UnsafeDataPointer_m3F411F556361D224096615DAA35B86D6B725C09D_gshared_inline (SharedStatic_1_t965CBE4F8A30F785649BF3D97C277D0927858D08* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SharedStatic_1_t6F461F0F49C63663BA5309A8B8620793444CB086_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3459));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3460));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3461));
		void* L_0 = __this->____buffer;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_AsRef_TisIl2CppFullySharedGenericAny_m32B7913D5C99D58667B8F989FEFA15BF74484607_gshared_inline (void* ___0_source, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		void* L_0 = ___0_source;
		V_0 = (int32_t*)L_0;
		int32_t* L_1 = V_0;
		return (Il2CppFullySharedGenericAny*)(L_1);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1_inline (int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 2835));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 2836));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 2837));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 2838));
		int32_t L_0 = ___0_value;
		V_0 = L_0;
		goto IL_0005;
	}

IL_0005:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 2839));
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericAny_m3C86E25D63AB95F3D572F8010D623EB7C6D78283_gshared_inline (void* ___0_destination, int32_t ___1_index, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t9B5DAD81EFECDA494525FB73A37EE675A422B5E5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_t9B5DAD81EFECDA494525FB73A37EE675A422B5E5);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_destination), (&___1_index), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___2_value : &___2_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3744));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3745));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3746));
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = SizeOf_T_t9B5DAD81EFECDA494525FB73A37EE675A422B5E5;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___2_value : &___2_value), SizeOf_T_t9B5DAD81EFECDA494525FB73A37EE675A422B5E5);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)), L_6, SizeOf_T_t9B5DAD81EFECDA494525FB73A37EE675A422B5E5);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), (void**)(Il2CppFullySharedGenericAny*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)), (void*)L_6);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericAny_m295186AA082411C57485F8BDB824E4D8AC1C6D93_gshared_inline (void* ___0_source, int32_t ___1_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t3818EBA71DF5EA591716A05E0BBD988D81931B5C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_t3818EBA71DF5EA591716A05E0BBD988D81931B5C);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_source), (&___1_index));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3738));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3739));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3740));
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = SizeOf_T_t3818EBA71DF5EA591716A05E0BBD988D81931B5C;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		il2cpp_codegen_memcpy(L_6, ((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)), SizeOf_T_t3818EBA71DF5EA591716A05E0BBD988D81931B5C);
		il2cpp_codegen_memcpy(il2cppRetVal, L_6, SizeOf_T_t3818EBA71DF5EA591716A05E0BBD988D81931B5C);
		return;
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
