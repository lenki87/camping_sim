#include "pch-cpp.hpp"





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
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3Invoker;
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3Invoker<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2, T3* p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		void* params[3] = { p1, p2, p3 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtualActionInvoker4Invoker;
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
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtualActionInvoker5Invoker;
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtualActionInvoker5Invoker<T1*, T2*, T3*, T4*, T5*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		void* params[5] = { p1, p2, p3, p4, p5 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[4]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct VirtualActionInvoker6Invoker;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct VirtualActionInvoker6Invoker<T1*, T2*, T3*, T4*, T5*, T6*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		void* params[6] = { p1, p2, p3, p4, p5, p6 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[5]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct VirtualActionInvoker7Invoker;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct VirtualActionInvoker7Invoker<T1*, T2*, T3*, T4*, T5*, T6*, T7*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6, T7* p7)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		void* params[7] = { p1, p2, p3, p4, p5, p6, p7 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[6]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
struct VirtualActionInvoker8Invoker;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
struct VirtualActionInvoker8Invoker<T1*, T2*, T3*, T4*, T5*, T6*, T7*, T8*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6, T7* p7, T8* p8)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		void* params[8] = { p1, p2, p3, p4, p5, p6, p7, p8 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[7]);
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
template <typename T1, typename T2>
struct GenericVirtualActionInvoker2Invoker;
template <typename T1, typename T2>
struct GenericVirtualActionInvoker2Invoker<T1*, T2*>
{
	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1, T2* p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtualActionInvoker3Invoker;
template <typename T1, typename T2, typename T3>
struct GenericVirtualActionInvoker3Invoker<T1*, T2*, T3*>
{
	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1, T2* p2, T3* p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		void* params[3] = { p1, p2, p3 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtualActionInvoker4Invoker;
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtualActionInvoker4Invoker<T1*, T2*, T3*, T4*>
{
	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		void* params[4] = { p1, p2, p3, p4 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[3]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericVirtualActionInvoker5Invoker;
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericVirtualActionInvoker5Invoker<T1*, T2*, T3*, T4*, T5*>
{
	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		void* params[5] = { p1, p2, p3, p4, p5 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[4]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct GenericVirtualActionInvoker6Invoker;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct GenericVirtualActionInvoker6Invoker<T1*, T2*, T3*, T4*, T5*, T6*>
{
	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		void* params[6] = { p1, p2, p3, p4, p5, p6 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[5]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct GenericVirtualActionInvoker7Invoker;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct GenericVirtualActionInvoker7Invoker<T1*, T2*, T3*, T4*, T5*, T6*, T7*>
{
	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6, T7* p7)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		void* params[7] = { p1, p2, p3, p4, p5, p6, p7 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[6]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
struct GenericVirtualActionInvoker8Invoker;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
struct GenericVirtualActionInvoker8Invoker<T1*, T2*, T3*, T4*, T5*, T6*, T7*, T8*>
{
	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6, T7* p7, T8* p8)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		void* params[8] = { p1, p2, p3, p4, p5, p6, p7, p8 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[7]);
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
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3Invoker;
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3Invoker<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2, T3* p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[3] = { p1, p2, p3 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4Invoker;
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4Invoker<T1*, T2*, T3*, T4*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[4] = { p1, p2, p3, p4 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[3]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceActionInvoker5Invoker;
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceActionInvoker5Invoker<T1*, T2*, T3*, T4*, T5*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[5] = { p1, p2, p3, p4, p5 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[4]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InterfaceActionInvoker6Invoker;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InterfaceActionInvoker6Invoker<T1*, T2*, T3*, T4*, T5*, T6*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[6] = { p1, p2, p3, p4, p5, p6 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[5]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InterfaceActionInvoker7Invoker;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InterfaceActionInvoker7Invoker<T1*, T2*, T3*, T4*, T5*, T6*, T7*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6, T7* p7)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[7] = { p1, p2, p3, p4, p5, p6, p7 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[6]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
struct InterfaceActionInvoker8Invoker;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
struct InterfaceActionInvoker8Invoker<T1*, T2*, T3*, T4*, T5*, T6*, T7*, T8*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6, T7* p7, T8* p8)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[8] = { p1, p2, p3, p4, p5, p6, p7, p8 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[7]);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2Invoker;
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2Invoker<T1*, T2*>
{
	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1, T2* p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3Invoker;
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3Invoker<T1*, T2*, T3*>
{
	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1, T2* p2, T3* p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		void* params[3] = { p1, p2, p3 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4Invoker;
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4Invoker<T1*, T2*, T3*, T4*>
{
	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		void* params[4] = { p1, p2, p3, p4 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[3]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericInterfaceActionInvoker5Invoker;
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericInterfaceActionInvoker5Invoker<T1*, T2*, T3*, T4*, T5*>
{
	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		void* params[5] = { p1, p2, p3, p4, p5 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[4]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct GenericInterfaceActionInvoker6Invoker;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct GenericInterfaceActionInvoker6Invoker<T1*, T2*, T3*, T4*, T5*, T6*>
{
	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		void* params[6] = { p1, p2, p3, p4, p5, p6 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[5]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct GenericInterfaceActionInvoker7Invoker;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct GenericInterfaceActionInvoker7Invoker<T1*, T2*, T3*, T4*, T5*, T6*, T7*>
{
	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6, T7* p7)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		void* params[7] = { p1, p2, p3, p4, p5, p6, p7 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[6]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
struct GenericInterfaceActionInvoker8Invoker;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
struct GenericInterfaceActionInvoker8Invoker<T1*, T2*, T3*, T4*, T5*, T6*, T7*, T8*>
{
	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6, T7* p7, T8* p8)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		void* params[8] = { p1, p2, p3, p4, p5, p6, p7, p8 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[7]);
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
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3*, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4)
	{
		void* params[4] = { p1, p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5;
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5<T1*, T2*, T3*, T4*, T5*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5)
	{
		void* params[5] = { p1, p2, p3, p4, p5 };
		method->invoker_method(methodPtr, method, obj, params, params[4]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerActionInvoker6;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerActionInvoker6<T1*, T2*, T3*, T4*, T5*, T6*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6)
	{
		void* params[6] = { p1, p2, p3, p4, p5, p6 };
		method->invoker_method(methodPtr, method, obj, params, params[5]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InvokerActionInvoker7;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InvokerActionInvoker7<T1*, T2*, T3*, T4*, T5*, T6*, T7*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6, T7* p7)
	{
		void* params[7] = { p1, p2, p3, p4, p5, p6, p7 };
		method->invoker_method(methodPtr, method, obj, params, params[6]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
struct InvokerActionInvoker8;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
struct InvokerActionInvoker8<T1*, T2*, T3*, T4*, T5*, T6*, T7*, T8*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6, T7* p7, T8* p8)
	{
		void* params[8] = { p1, p2, p3, p4, p5, p6, p7, p8 };
		method->invoker_method(methodPtr, method, obj, params, params[7]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
struct InvokerActionInvoker9;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
struct InvokerActionInvoker9<T1*, T2*, T3*, T4*, T5*, T6*, T7*, T8*, T9*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6, T7* p7, T8* p8, T9* p9)
	{
		void* params[9] = { p1, p2, p3, p4, p5, p6, p7, p8, p9 };
		method->invoker_method(methodPtr, method, obj, params, params[8]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
struct InvokerActionInvoker10;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
struct InvokerActionInvoker10<T1*, T2*, T3*, T4*, T5*, T6*, T7*, T8*, T9*, T10*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6, T7* p7, T8* p8, T9* p9, T10* p10)
	{
		void* params[10] = { p1, p2, p3, p4, p5, p6, p7, p8, p9, p10 };
		method->invoker_method(methodPtr, method, obj, params, params[9]);
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

struct U3CU3Ec__DisplayClass5_0_t5B92A45B3E3A5C4A1EE7E006EAD8809BB6DB4DAB;
struct Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F;
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99;
struct Comparer_1_tDE744FF9BEB76BB8CC9B1B390EF8A47F374DAB6C;
struct Comparer_1_tDD2EA4B759E440B09D6D1ECAFAF5306C724B35E2;
struct Comparer_1_tEA47A919621D87B678B2A9B4E3A470CBDFED6A50;
struct Comparer_1_t91447938D4FCE14F2FE2FB00FF1BCDCF57D88E59;
struct Comparer_1_t35D3D59A75CCA05C1E3BB7F1D0E35EE1FF17BC8D;
struct Comparer_1_tD6CE33A5696889A30A002C5A235147708A62BB39;
struct Comparer_1_t6CACB79C2EBD369DC9A73CD7AFFD61E4AF51766A;
struct Comparer_1_t076B0182ABD27E6FBB4F0462C915AEDB5BDB353C;
struct Comparer_1_t349274FE99585C3A3A56F84706A2EAAC58E4928A;
struct Comparer_1_t9FE7CAF68A0054DF11A468D25A1E7356393BFD68;
struct Comparer_1_t702F1F640B3346D1745559B471BB05977FD565B7;
struct Comparer_1_tEF25F1DB801EFE2B630996244237C9A87FE1F2A6;
struct Comparer_1_tAEB9BDBB6E6B098717097547FA00C68C484C8E61;
struct Comparer_1_t30EDE4A1BC5FA7ADF248621947782C677833308C;
struct Comparer_1_tC53472FB04BC715D553738BF5011A21FCBBEE87D;
struct Comparer_1_t6CC844B989AE93163E90744FBDE5DC46CE82252C;
struct Comparer_1_tAC9ACECA57EAC550CD03A4576D6AA0278B30E0C4;
struct Comparer_1_t8D1E640B4AB7DD29BA0DE9D4C9E16844734DD432;
struct Comparer_1_t6916E99C71B0745FF2AC152B75FD4A0053BDCF20;
struct Comparer_1_t20736A9CEDE849F79898D3668407800813B3D96A;
struct Comparer_1_t9A2EF4540BB15E9CD8C6621B5B6C38000531194A;
struct Comparer_1_t015109354557DC3564648B7F6F87F11695B15AC9;
struct Comparer_1_tAEFF2A311BAA00F971F764D42AD288DA175F82E5;
struct Comparer_1_t28AB01559DC24979532C98382E03D786703C23A3;
struct Comparer_1_t767E88C4ED7AC46D9A49568F3304A51D5C922F88;
struct Comparer_1_t57D2871B6B5372D2CD12A94C0A0A32838A5AC76A;
struct Comparer_1_t3FF8D3865F5813C1592D1C54C3418EDE3497A949;
struct Comparer_1_t075B18A0921F760D040E0D8BFE6637CE0E1587E4;
struct Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30;
struct Comparer_1_t4EB0ADBCB3F521E51B444B8E631738B14C0C0063;
struct Comparer_1_t7D79B93D962FED51539E57571D173019714D3A58;
struct Comparer_1_t2A7CD7D5B4BDA0E0234E7B9B180F2C39F864BC0A;
struct Comparer_1_t420D73C41321F646BA6C9F312DC3B7CFDE282912;
struct Comparer_1_t3093E6EEB43CE2B11D84CFE0500ED48F22CBE8FD;
struct Comparer_1_t899D90A399D35CB1E70FF681B73910B9C1077E34;
struct Comparer_1_tB5C67F47A3BD6C116B20FAB729E8BB6FEA90C781;
struct Comparer_1_tB7A6650806BF642F6B5030BF3F5D7B617A836EE6;
struct Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563;
struct Comparer_1_t2FF14F26F4D678A8FA199B888FF61A2A9D1D2D80;
struct Comparer_1_t88D1E609547CDB93D82F17BA326F506DC1C371E6;
struct Comparer_1_t3DB3DE7BB01E6125039318497F95D839804473D6;
struct Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B;
struct Comparer_1_tE191E68CB394DD255CCA7A56F4D1DEFED0BD3FDB;
struct Comparer_1_t9641C93A4F2449C05FCF85463369F6BF84E95510;
struct Comparer_1_t74CA6C7EACDB4FE32364CB0614E282AE4DD728A9;
struct Comparer_1_t27E525AEFBAE351BF2338F1255FF489A94DF5D6C;
struct Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98;
struct Comparer_1_t03DA6AFB24C7CAB292D6DC3A872298EE43E6C879;
struct Comparer_1_t156CA54426F60B4132C76BFACD5FDBD3043D437E;
struct Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB;
struct Comparer_1_t2451C470E069C2142824538A7035CD168D8B6289;
struct Comparer_1_tFC41EBB0A6AA4CA372B283E95D2C33D18835CC34;
struct DefaultFrozenSet_1_t13DDDBF4773580AD15852B0A795E5D4F44E5259A;
struct EqualityComparer_1_tCC2E37B7A8B3CAB9102BC56493CE451493ADC3AB;
struct EqualityComparer_1_t4B7A44F32804EBC0F67D8262056AB3BB6DB5E900;
struct EqualityComparer_1_t68E3EF4E76CD62656ABD676D7D177809863FAA68;
struct EqualityComparer_1_t20A5419EA3A98780837EDD9E5FBA4BFCD13700D1;
struct EqualityComparer_1_t6B01DAC6A5AAACB741CE017584EAAEDF574DE45F;
struct EqualityComparer_1_t333F4EDE62F883F7D3D79FC721D51ACC97B7DFAC;
struct EqualityComparer_1_t3094991D24BA9E6F97EAEAB9F9E4D4CA76771094;
struct EqualityComparer_1_t01F8CF2CF777F0896EA3EAA7877D78F1307DD1E1;
struct EqualityComparer_1_tEDC8A72DA18B9BE940AA851A4BB238E3F99FF560;
struct EqualityComparer_1_tF3CCB69D5AB8C3CE9F417F5984908B3B13441607;
struct EqualityComparer_1_t216E32D8F741BCB9378E25FD13194920A6B7EF12;
struct EqualityComparer_1_tAA11E11782CC156B732B4C3DBBB3FBC4B0930668;
struct EqualityComparer_1_t3EDA2358EF4A4A63E83EDF6DE2E83A5A60A0EC7A;
struct EqualityComparer_1_t1E5FED2BC6E8D51E4FA7775A041AAC5AE63E90C8;
struct EqualityComparer_1_tB0341B5F184F8F16AEFB583C41392F2F43F3F619;
struct EqualityComparer_1_tBF9FE7C5DE231C2E784E1AD190A6BFAF4B8FACC8;
struct EqualityComparer_1_t188897C764D38361A593638A1C85F11DCCE2E1BA;
struct EqualityComparer_1_t202345A3E2A8D2F2943CB1E5AD6868D00251D4CF;
struct EqualityComparer_1_tDAF922488AE1FB9D348BE48C874D7BA0838CD4FC;
struct EqualityComparer_1_tDD3732DA8A8E5DA574E39C28D82457ED01D8FDF7;
struct EqualityComparer_1_t7AE663CFEF14CE2D38A40D09CC0D9536FCB9AF22;
struct EqualityComparer_1_tA1E56A9C60BD83D531DD7B584CA42CEC109AD60F;
struct EqualityComparer_1_tFE4BE398BD5E2F42D6624AD52679DDEE57B14ADC;
struct EqualityComparer_1_t5C1A5B39B614A2FCDAE30DABB029A0E70AC44144;
struct EqualityComparer_1_t96E8EE5AD84F26A165B0FAD9D9262707317C3B49;
struct EqualityComparer_1_t54C77EEDF180071617D638642C2A24279A9E85AC;
struct EqualityComparer_1_t3C3D13256107D746F9BF487FDD846D99A52DC9D2;
struct EqualityComparer_1_t94252027E4F9531D5FCC00D6604520FA3E1EE797;
struct EqualityComparer_1_t03F43DBE2156DF11F96342BD46FF2E6A27CE36B5;
struct EqualityComparer_1_t5128344EEA13A5FEDF630CC496230FB84C96ABAE;
struct EqualityComparer_1_t91BC2A25C5FBF38BDF50F86E9E47755FAAE8D3CA;
struct EqualityComparer_1_tC98FF08C6205542E75FC91AE6C59167467891DB8;
struct EqualityComparer_1_tFB5CF693EC1D6C1FB3A28D9D87D6EBB329406ABE;
struct EqualityComparer_1_t04E34D9660BB45B9B9E9DBF97FBA134F7D5C7E49;
struct EqualityComparer_1_tBA179F4EE58F552AC8A9BBB049C74520AE3B3E4C;
struct EqualityComparer_1_tED5D7103EB70F04701068D3A47FFDE0C5C255272;
struct EqualityComparer_1_t8B741287299D87FD02CAE8DBBDD31C9D7FEBC83C;
struct EqualityComparer_1_t2FC72AD935531391E034D5134279ABD4FA775C49;
struct EqualityComparer_1_t91CC793D528077FF2BC0B89D0D9DDB2B3DCF0B68;
struct EqualityComparer_1_t59A8120CAF6FA4E0EA7F5900499889FF17C4B78E;
struct EqualityComparer_1_tABD2A21E5AFAD7379C8DF2F64A92BDC480DFFF30;
struct EqualityComparer_1_tF1B512B620D5429DE690D1CA4968A06DC75D2AEA;
struct EqualityComparer_1_tF6A24EC840070175F60084658968AEFFA3576878;
struct EqualityComparer_1_t2AAADB4BCB35C22A62A682B16E60E6F272D3F5C4;
struct EqualityComparer_1_t37CC65634D482D254546A5481663F7E23B0C73F3;
struct EqualityComparer_1_t93F77A1FE548563F4236F09DA38D84213CFB70C9;
struct EqualityComparer_1_tF60D3424A85A7B1DACA02F0A6BBDDDAEDBA71A51;
struct EqualityComparer_1_t47738E2CC1B3FD08477FE139E7493113703658FA;
struct EqualityComparer_1_tAD36C6112BC24C0F76DDA1BFA7A05A46A2639973;
struct EqualityComparer_1_t996261ABE0B0806F567668FDCE59D3C20D3B28C5;
struct EqualityComparer_1_t45124E95385DEA964ACB8ED69B1BEAB175449783;
struct EqualityComparer_1_t8BEC2F54B94741E1B86E3A440F297548441763F9;
struct EqualityComparer_1_t38D2B80AE5EE6A628F5F5B7E589FC0023C4AA90A;
struct EqualityComparer_1_t8458803B89F633737CC215969DC4354E2613309D;
struct EqualityComparer_1_t0D2B44D5A26A0DAB6E594345B5049273585DE26E;
struct FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706;
struct Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4;
struct Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821;
struct Func_4_t8DAB5E499F76CF14F82480384E442E7B18F8A228;
struct Func_4_tD7876738CCF17260D8D5414D77A56B42DF498B75;
struct Func_4_tC6554A9B6158B8E653539FD20E101E86ECAD14E5;
struct Func_4_t54F29ECDC7F5F5FBDE73EA4BA1B62EA311C68913;
struct Func_4_t46812CB64A120A31977C87BC4A822A947B5C44A5;
struct Func_4_t222F7B044E23AD55E5A23F7A86BA3CF128947094;
struct Func_4_t572D62CCA845BDAD9BC3ABCD839C1AE78144D079;
struct Func_5_tB069B44093DF1EBDA5245A604B7AD60C4B638397;
struct Func_6_tF0A0CA0D64145FD856F53441697B240796CBF320;
struct Func_7_tE5BE67F6F06DB3CA05521637000BD00C4D993F80;
struct Func_8_t605F8719FA2521B5FF48B1D8047E17F3F082B32E;
struct Func_9_tCA208DB676270504B9EA383199B74083CECB6375;
struct GPUBuffer_1_tB799E550DAF939E606A31722DEC8AD338C447E86;
struct GenericComparer_1_tA1FB6768366C07A87C3181B50FABC4AA0BE27C45;
struct IEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122;
struct ReadOnlyCollection_1_tFF3A96CB3B2F8DC59789963B01C8937823675505;
struct SmallFrozenSet_1_tDE7B6B4C98EB8442065DEA04C14788EA1A071737;
struct SmallValueTypeComparableFrozenSet_1_t1572E9A676BE7FF6EFC9CCF1664312605BDC81D6;
struct SmallValueTypeDefaultComparerFrozenSet_1_t92FB2791E5B14877BECD7B64AA760805F5D38442;
struct ValueTypeDefaultComparerFrozenSet_1_t7446762EF99A96384303A51667262A2C312FF312;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct BucketU5BU5D_t8B6E08CB79BFA821E42E1F0CCFAEC1B1640EE4C9;
struct Assembly_t;
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
struct CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7;
struct ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
struct EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C;
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785;
struct FilterFunctionDefinition_tFE41DB19FFB74F4D2B54BF44D1D2051B57FC82F2;
struct GPUInstanceDataBuffer_tAF2FDE10337956B935AE0961BAB4F5A4E534ACF3;
struct GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1;
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IFunctionPointer_t5FDCFDA1B4B052C44AC91AC0C765FE6C5856CE8F;
struct InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E;
struct InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5;
struct LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E;
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
struct String_t;
struct StyleValueCollection_t5ADC08D23E648FBE78F2C161494786E6C83E1377;
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct InternalGPUInstanceDataBuffer_tC9A85B27F868F6BDD90CB6DF6DACFC169A2054F2;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_CoreModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_UIElementsModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_Burst[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime[];
IL2CPP_EXTERN_C RuntimeClass* Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Utility_t8CE21DCF1C28EAB31D71109C60BE5319271612D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral4E18EDDD9F60393DD4B0E79C44A56B16E97C9218;
IL2CPP_EXTERN_C String_t* _stringLiteralB103234B3080F7F61E702B75D004C9D619EAF047;
IL2CPP_EXTERN_C const RuntimeMethod* Assert_IsNotNull_TisGPUInstanceDataBuffer_tAF2FDE10337956B935AE0961BAB4F5A4E534ACF3_mE51594C6431F3FDB140691B45C91F04466FB8665_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeSliceUnsafeUtility_GetUnsafePtr_TisGfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C_m96BF1DA7D07BBC9CBB70382DC0B3582F3E927D38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeSlice_1_get_Length_m9C484E0369ADC54B05A3EE2B955EF908A81AB4D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* FunctionPointer_1_tB635C696E956CB8DC2B055F1669431B2F6D73193_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* GPUBuffer_1_t06A179B89ACD0CB84701876CBCE35ACF971D6DAE_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* GPUInstanceDataBufferReadback_1_tEEC8A61DC2A96C3D1B8470E24D4E9EFDE8C598F3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NativeSlice_1_t4906DEA99476205C846F099C0196685F790D468E_0_0_0_var;
struct Bucket_t725E43200C3C618E570AC942A981B737E9EA2EB5;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Comparer_1_tDE744FF9BEB76BB8CC9B1B390EF8A47F374DAB6C  : public RuntimeObject
{
};
struct Comparer_1_tDD2EA4B759E440B09D6D1ECAFAF5306C724B35E2  : public RuntimeObject
{
};
struct Comparer_1_tEA47A919621D87B678B2A9B4E3A470CBDFED6A50  : public RuntimeObject
{
};
struct Comparer_1_t91447938D4FCE14F2FE2FB00FF1BCDCF57D88E59  : public RuntimeObject
{
};
struct Comparer_1_t35D3D59A75CCA05C1E3BB7F1D0E35EE1FF17BC8D  : public RuntimeObject
{
};
struct Comparer_1_tD6CE33A5696889A30A002C5A235147708A62BB39  : public RuntimeObject
{
};
struct Comparer_1_t6CACB79C2EBD369DC9A73CD7AFFD61E4AF51766A  : public RuntimeObject
{
};
struct Comparer_1_t076B0182ABD27E6FBB4F0462C915AEDB5BDB353C  : public RuntimeObject
{
};
struct Comparer_1_t349274FE99585C3A3A56F84706A2EAAC58E4928A  : public RuntimeObject
{
};
struct Comparer_1_t9FE7CAF68A0054DF11A468D25A1E7356393BFD68  : public RuntimeObject
{
};
struct Comparer_1_t702F1F640B3346D1745559B471BB05977FD565B7  : public RuntimeObject
{
};
struct Comparer_1_tEF25F1DB801EFE2B630996244237C9A87FE1F2A6  : public RuntimeObject
{
};
struct Comparer_1_tAEB9BDBB6E6B098717097547FA00C68C484C8E61  : public RuntimeObject
{
};
struct Comparer_1_t30EDE4A1BC5FA7ADF248621947782C677833308C  : public RuntimeObject
{
};
struct Comparer_1_tC53472FB04BC715D553738BF5011A21FCBBEE87D  : public RuntimeObject
{
};
struct Comparer_1_t6CC844B989AE93163E90744FBDE5DC46CE82252C  : public RuntimeObject
{
};
struct Comparer_1_tAC9ACECA57EAC550CD03A4576D6AA0278B30E0C4  : public RuntimeObject
{
};
struct Comparer_1_t8D1E640B4AB7DD29BA0DE9D4C9E16844734DD432  : public RuntimeObject
{
};
struct Comparer_1_t6916E99C71B0745FF2AC152B75FD4A0053BDCF20  : public RuntimeObject
{
};
struct Comparer_1_t20736A9CEDE849F79898D3668407800813B3D96A  : public RuntimeObject
{
};
struct Comparer_1_t9A2EF4540BB15E9CD8C6621B5B6C38000531194A  : public RuntimeObject
{
};
struct Comparer_1_t015109354557DC3564648B7F6F87F11695B15AC9  : public RuntimeObject
{
};
struct Comparer_1_tAEFF2A311BAA00F971F764D42AD288DA175F82E5  : public RuntimeObject
{
};
struct Comparer_1_t28AB01559DC24979532C98382E03D786703C23A3  : public RuntimeObject
{
};
struct Comparer_1_t767E88C4ED7AC46D9A49568F3304A51D5C922F88  : public RuntimeObject
{
};
struct Comparer_1_t57D2871B6B5372D2CD12A94C0A0A32838A5AC76A  : public RuntimeObject
{
};
struct Comparer_1_t3FF8D3865F5813C1592D1C54C3418EDE3497A949  : public RuntimeObject
{
};
struct Comparer_1_t075B18A0921F760D040E0D8BFE6637CE0E1587E4  : public RuntimeObject
{
};
struct Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30  : public RuntimeObject
{
};
struct Comparer_1_t4EB0ADBCB3F521E51B444B8E631738B14C0C0063  : public RuntimeObject
{
};
struct Comparer_1_t7D79B93D962FED51539E57571D173019714D3A58  : public RuntimeObject
{
};
struct Comparer_1_t2A7CD7D5B4BDA0E0234E7B9B180F2C39F864BC0A  : public RuntimeObject
{
};
struct Comparer_1_t420D73C41321F646BA6C9F312DC3B7CFDE282912  : public RuntimeObject
{
};
struct Comparer_1_t3093E6EEB43CE2B11D84CFE0500ED48F22CBE8FD  : public RuntimeObject
{
};
struct Comparer_1_t899D90A399D35CB1E70FF681B73910B9C1077E34  : public RuntimeObject
{
};
struct Comparer_1_tB5C67F47A3BD6C116B20FAB729E8BB6FEA90C781  : public RuntimeObject
{
};
struct Comparer_1_tB7A6650806BF642F6B5030BF3F5D7B617A836EE6  : public RuntimeObject
{
};
struct Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563  : public RuntimeObject
{
};
struct Comparer_1_t2FF14F26F4D678A8FA199B888FF61A2A9D1D2D80  : public RuntimeObject
{
};
struct Comparer_1_t88D1E609547CDB93D82F17BA326F506DC1C371E6  : public RuntimeObject
{
};
struct Comparer_1_t3DB3DE7BB01E6125039318497F95D839804473D6  : public RuntimeObject
{
};
struct Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B  : public RuntimeObject
{
};
struct Comparer_1_tE191E68CB394DD255CCA7A56F4D1DEFED0BD3FDB  : public RuntimeObject
{
};
struct Comparer_1_t9641C93A4F2449C05FCF85463369F6BF84E95510  : public RuntimeObject
{
};
struct Comparer_1_t74CA6C7EACDB4FE32364CB0614E282AE4DD728A9  : public RuntimeObject
{
};
struct Comparer_1_t27E525AEFBAE351BF2338F1255FF489A94DF5D6C  : public RuntimeObject
{
};
struct Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98  : public RuntimeObject
{
};
struct Comparer_1_t03DA6AFB24C7CAB292D6DC3A872298EE43E6C879  : public RuntimeObject
{
};
struct Comparer_1_t156CA54426F60B4132C76BFACD5FDBD3043D437E  : public RuntimeObject
{
};
struct Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB  : public RuntimeObject
{
};
struct Comparer_1_t2451C470E069C2142824538A7035CD168D8B6289  : public RuntimeObject
{
};
struct Comparer_1_tFC41EBB0A6AA4CA372B283E95D2C33D18835CC34  : public RuntimeObject
{
};
struct EqualityComparer_1_tCC2E37B7A8B3CAB9102BC56493CE451493ADC3AB  : public RuntimeObject
{
};
struct EqualityComparer_1_t4B7A44F32804EBC0F67D8262056AB3BB6DB5E900  : public RuntimeObject
{
};
struct EqualityComparer_1_t68E3EF4E76CD62656ABD676D7D177809863FAA68  : public RuntimeObject
{
};
struct EqualityComparer_1_t20A5419EA3A98780837EDD9E5FBA4BFCD13700D1  : public RuntimeObject
{
};
struct EqualityComparer_1_t6B01DAC6A5AAACB741CE017584EAAEDF574DE45F  : public RuntimeObject
{
};
struct EqualityComparer_1_t333F4EDE62F883F7D3D79FC721D51ACC97B7DFAC  : public RuntimeObject
{
};
struct EqualityComparer_1_t3094991D24BA9E6F97EAEAB9F9E4D4CA76771094  : public RuntimeObject
{
};
struct EqualityComparer_1_t01F8CF2CF777F0896EA3EAA7877D78F1307DD1E1  : public RuntimeObject
{
};
struct EqualityComparer_1_tEDC8A72DA18B9BE940AA851A4BB238E3F99FF560  : public RuntimeObject
{
};
struct EqualityComparer_1_tF3CCB69D5AB8C3CE9F417F5984908B3B13441607  : public RuntimeObject
{
};
struct EqualityComparer_1_t216E32D8F741BCB9378E25FD13194920A6B7EF12  : public RuntimeObject
{
};
struct EqualityComparer_1_tAA11E11782CC156B732B4C3DBBB3FBC4B0930668  : public RuntimeObject
{
};
struct EqualityComparer_1_t3EDA2358EF4A4A63E83EDF6DE2E83A5A60A0EC7A  : public RuntimeObject
{
};
struct EqualityComparer_1_t1E5FED2BC6E8D51E4FA7775A041AAC5AE63E90C8  : public RuntimeObject
{
};
struct EqualityComparer_1_tB0341B5F184F8F16AEFB583C41392F2F43F3F619  : public RuntimeObject
{
};
struct EqualityComparer_1_tBF9FE7C5DE231C2E784E1AD190A6BFAF4B8FACC8  : public RuntimeObject
{
};
struct EqualityComparer_1_t188897C764D38361A593638A1C85F11DCCE2E1BA  : public RuntimeObject
{
};
struct EqualityComparer_1_t202345A3E2A8D2F2943CB1E5AD6868D00251D4CF  : public RuntimeObject
{
};
struct EqualityComparer_1_tDAF922488AE1FB9D348BE48C874D7BA0838CD4FC  : public RuntimeObject
{
};
struct EqualityComparer_1_tDD3732DA8A8E5DA574E39C28D82457ED01D8FDF7  : public RuntimeObject
{
};
struct EqualityComparer_1_t7AE663CFEF14CE2D38A40D09CC0D9536FCB9AF22  : public RuntimeObject
{
};
struct EqualityComparer_1_tA1E56A9C60BD83D531DD7B584CA42CEC109AD60F  : public RuntimeObject
{
};
struct EqualityComparer_1_tFE4BE398BD5E2F42D6624AD52679DDEE57B14ADC  : public RuntimeObject
{
};
struct EqualityComparer_1_t5C1A5B39B614A2FCDAE30DABB029A0E70AC44144  : public RuntimeObject
{
};
struct EqualityComparer_1_t96E8EE5AD84F26A165B0FAD9D9262707317C3B49  : public RuntimeObject
{
};
struct EqualityComparer_1_t54C77EEDF180071617D638642C2A24279A9E85AC  : public RuntimeObject
{
};
struct EqualityComparer_1_t3C3D13256107D746F9BF487FDD846D99A52DC9D2  : public RuntimeObject
{
};
struct EqualityComparer_1_t94252027E4F9531D5FCC00D6604520FA3E1EE797  : public RuntimeObject
{
};
struct EqualityComparer_1_t03F43DBE2156DF11F96342BD46FF2E6A27CE36B5  : public RuntimeObject
{
};
struct EqualityComparer_1_t5128344EEA13A5FEDF630CC496230FB84C96ABAE  : public RuntimeObject
{
};
struct EqualityComparer_1_t91BC2A25C5FBF38BDF50F86E9E47755FAAE8D3CA  : public RuntimeObject
{
};
struct EqualityComparer_1_tC98FF08C6205542E75FC91AE6C59167467891DB8  : public RuntimeObject
{
};
struct EqualityComparer_1_tFB5CF693EC1D6C1FB3A28D9D87D6EBB329406ABE  : public RuntimeObject
{
};
struct EqualityComparer_1_t04E34D9660BB45B9B9E9DBF97FBA134F7D5C7E49  : public RuntimeObject
{
};
struct EqualityComparer_1_tBA179F4EE58F552AC8A9BBB049C74520AE3B3E4C  : public RuntimeObject
{
};
struct EqualityComparer_1_tED5D7103EB70F04701068D3A47FFDE0C5C255272  : public RuntimeObject
{
};
struct EqualityComparer_1_t8B741287299D87FD02CAE8DBBDD31C9D7FEBC83C  : public RuntimeObject
{
};
struct EqualityComparer_1_t2FC72AD935531391E034D5134279ABD4FA775C49  : public RuntimeObject
{
};
struct EqualityComparer_1_t91CC793D528077FF2BC0B89D0D9DDB2B3DCF0B68  : public RuntimeObject
{
};
struct EqualityComparer_1_t59A8120CAF6FA4E0EA7F5900499889FF17C4B78E  : public RuntimeObject
{
};
struct EqualityComparer_1_tABD2A21E5AFAD7379C8DF2F64A92BDC480DFFF30  : public RuntimeObject
{
};
struct EqualityComparer_1_tF1B512B620D5429DE690D1CA4968A06DC75D2AEA  : public RuntimeObject
{
};
struct EqualityComparer_1_tF6A24EC840070175F60084658968AEFFA3576878  : public RuntimeObject
{
};
struct EqualityComparer_1_t2AAADB4BCB35C22A62A682B16E60E6F272D3F5C4  : public RuntimeObject
{
};
struct EqualityComparer_1_t37CC65634D482D254546A5481663F7E23B0C73F3  : public RuntimeObject
{
};
struct EqualityComparer_1_t93F77A1FE548563F4236F09DA38D84213CFB70C9  : public RuntimeObject
{
};
struct EqualityComparer_1_tF60D3424A85A7B1DACA02F0A6BBDDDAEDBA71A51  : public RuntimeObject
{
};
struct EqualityComparer_1_t47738E2CC1B3FD08477FE139E7493113703658FA  : public RuntimeObject
{
};
struct EqualityComparer_1_tAD36C6112BC24C0F76DDA1BFA7A05A46A2639973  : public RuntimeObject
{
};
struct EqualityComparer_1_t996261ABE0B0806F567668FDCE59D3C20D3B28C5  : public RuntimeObject
{
};
struct EqualityComparer_1_t45124E95385DEA964ACB8ED69B1BEAB175449783  : public RuntimeObject
{
};
struct EqualityComparer_1_t8BEC2F54B94741E1B86E3A440F297548441763F9  : public RuntimeObject
{
};
struct EqualityComparer_1_t38D2B80AE5EE6A628F5F5B7E589FC0023C4AA90A  : public RuntimeObject
{
};
struct EqualityComparer_1_t8458803B89F633737CC215969DC4354E2613309D  : public RuntimeObject
{
};
struct EqualityComparer_1_t0D2B44D5A26A0DAB6E594345B5049273585DE26E  : public RuntimeObject
{
};
struct FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706  : public RuntimeObject
{
	RuntimeObject* ___U3CComparerU3Ek__BackingField;
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
struct Enumerator_tC7CE6D94112648D301AA3F68E7F8536FB8568478 
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____entries;
	int32_t ____index;
};
struct GSW_tF00D1E09805DA6E6A35E624A37C83A4D2DFEF7AD 
{
	DefaultFrozenSet_1_t13DDDBF4773580AD15852B0A795E5D4F44E5259A* ____set;
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
struct GSW_t707226C8C18E35D611B512DB361D4FCC698EA58C 
{
	ValueTypeDefaultComparerFrozenSet_1_t7446762EF99A96384303A51667262A2C312FF312* ____set;
};
struct GenericComparer_1_t35A813D9D57340422F9B65A7EAA94FCB93E68FFE  : public Comparer_1_tDE744FF9BEB76BB8CC9B1B390EF8A47F374DAB6C
{
};
struct GenericComparer_1_tA9B4C47ED0216C56714FD4B9153C187382DA6324  : public Comparer_1_tDD2EA4B759E440B09D6D1ECAFAF5306C724B35E2
{
};
struct GenericComparer_1_t563964EC5D53E6BA1E994747040AAC246A3F0A99  : public Comparer_1_tEA47A919621D87B678B2A9B4E3A470CBDFED6A50
{
};
struct GenericComparer_1_tAF9ADBF262C3C2FF44DE4A6043CF4721EAA2A268  : public Comparer_1_t91447938D4FCE14F2FE2FB00FF1BCDCF57D88E59
{
};
struct GenericComparer_1_tE932C1694333E9599E4ABEA2DCD11E4204A5828A  : public Comparer_1_t35D3D59A75CCA05C1E3BB7F1D0E35EE1FF17BC8D
{
};
struct GenericComparer_1_tF77C1125282CCCBDA230CDE8EC2393590D30F801  : public Comparer_1_tD6CE33A5696889A30A002C5A235147708A62BB39
{
};
struct GenericComparer_1_t0C0C35AC299F6D417DF20F391CECB3D64C2B0773  : public Comparer_1_t6CACB79C2EBD369DC9A73CD7AFFD61E4AF51766A
{
};
struct GenericComparer_1_t7B409DC953D4235EB466DBA329846DB3AB2C329B  : public Comparer_1_t076B0182ABD27E6FBB4F0462C915AEDB5BDB353C
{
};
struct GenericComparer_1_tCBD7E50EA87A3A55993D9761F014F37BC67AB912  : public Comparer_1_t349274FE99585C3A3A56F84706A2EAAC58E4928A
{
};
struct GenericComparer_1_t7407BEC91F5B04FE5CDEC303853709A1B8F5F095  : public Comparer_1_t9FE7CAF68A0054DF11A468D25A1E7356393BFD68
{
};
struct GenericComparer_1_tCDA241846302B8ECEE7785B9E4AD9D7035B2C37A  : public Comparer_1_t702F1F640B3346D1745559B471BB05977FD565B7
{
};
struct GenericComparer_1_tC6422EB4F145EB12E1F6A66A7B3FDC1496AB7A3B  : public Comparer_1_tEF25F1DB801EFE2B630996244237C9A87FE1F2A6
{
};
struct GenericComparer_1_tCC4728A721EBABDF600BA1030FDD90484B591A51  : public Comparer_1_tAEB9BDBB6E6B098717097547FA00C68C484C8E61
{
};
struct GenericComparer_1_t23ECF3E0DBBFB026E30AAB0CC245C2F64ECDE7BA  : public Comparer_1_t30EDE4A1BC5FA7ADF248621947782C677833308C
{
};
struct GenericComparer_1_t881B1FDE09621712A7154407E3ABD442903496AA  : public Comparer_1_tC53472FB04BC715D553738BF5011A21FCBBEE87D
{
};
struct GenericComparer_1_tC62727973D2AD0D5D31B4FC63FED9F5EBEEF3785  : public Comparer_1_t6CC844B989AE93163E90744FBDE5DC46CE82252C
{
};
struct GenericComparer_1_t743C646FBCB2B684E38AAA5ECB5BB96A59CE6E45  : public Comparer_1_tAC9ACECA57EAC550CD03A4576D6AA0278B30E0C4
{
};
struct GenericComparer_1_tCD39B4805B78449155863498FC83E4E40D929FAD  : public Comparer_1_t8D1E640B4AB7DD29BA0DE9D4C9E16844734DD432
{
};
struct GenericComparer_1_t6305CD51C916E5C268A6E07B5DAE600060E4D752  : public Comparer_1_t6916E99C71B0745FF2AC152B75FD4A0053BDCF20
{
};
struct GenericComparer_1_t6B20E4D85ED24307507E810A63294CABC7CF8A06  : public Comparer_1_t20736A9CEDE849F79898D3668407800813B3D96A
{
};
struct GenericComparer_1_t30A7BEF9840BEF00BD461871BA7628B474F24A63  : public Comparer_1_t9A2EF4540BB15E9CD8C6621B5B6C38000531194A
{
};
struct GenericComparer_1_t9C9DF370A00718C7E1C3CF68560CC5875799BDF5  : public Comparer_1_t015109354557DC3564648B7F6F87F11695B15AC9
{
};
struct GenericComparer_1_tB39032FC01C1A7D96B98AD0F73500E1E3240D259  : public Comparer_1_tAEFF2A311BAA00F971F764D42AD288DA175F82E5
{
};
struct GenericComparer_1_tB22DB5703EA5DC9D46B1A950C2D57C5D96EF5D94  : public Comparer_1_t28AB01559DC24979532C98382E03D786703C23A3
{
};
struct GenericComparer_1_t6DB0566BA0113E4A2913CA8CC628A0F0E4D21662  : public Comparer_1_t767E88C4ED7AC46D9A49568F3304A51D5C922F88
{
};
struct GenericComparer_1_tB7934EC11A401C69F5C806D8065802A74E9CCA84  : public Comparer_1_t57D2871B6B5372D2CD12A94C0A0A32838A5AC76A
{
};
struct GenericComparer_1_t0C51B4522D70988D43894E4C1B188199D0314C34  : public Comparer_1_t3FF8D3865F5813C1592D1C54C3418EDE3497A949
{
};
struct GenericComparer_1_t6CE525CCFC6B72078AB84A6A4FC89515FDF16816  : public Comparer_1_t075B18A0921F760D040E0D8BFE6637CE0E1587E4
{
};
struct GenericComparer_1_tD6CF9974D1DBE37EBBB11D0215BA76FD142D916C  : public Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30
{
};
struct GenericComparer_1_tCC6A9D03765A48179BEBBDBE198FF58E3E4D0BB8  : public Comparer_1_t4EB0ADBCB3F521E51B444B8E631738B14C0C0063
{
};
struct GenericComparer_1_tDCE05ABDE62DAA850E3106158504FCE82DF0F446  : public Comparer_1_t7D79B93D962FED51539E57571D173019714D3A58
{
};
struct GenericComparer_1_t56C80D63A3D649E930075AD203FFA952034ACD95  : public Comparer_1_t2A7CD7D5B4BDA0E0234E7B9B180F2C39F864BC0A
{
};
struct GenericComparer_1_t9AF812E9F3506D87D556626C9B98940FF125D2E9  : public Comparer_1_t420D73C41321F646BA6C9F312DC3B7CFDE282912
{
};
struct GenericComparer_1_t2FFC9D9DE719951F3B83331ACD42632081F7C800  : public Comparer_1_t3093E6EEB43CE2B11D84CFE0500ED48F22CBE8FD
{
};
struct GenericComparer_1_tA62BB66203514065EF3B5E28256D2CF9E91AD534  : public Comparer_1_t899D90A399D35CB1E70FF681B73910B9C1077E34
{
};
struct GenericComparer_1_t0303BA21953417E8B61FFAAA91A0EEF1FE9EBBD3  : public Comparer_1_tB5C67F47A3BD6C116B20FAB729E8BB6FEA90C781
{
};
struct GenericComparer_1_t7E1DFC105017DD0B7838DB7F4C4CE327DABB446B  : public Comparer_1_tB7A6650806BF642F6B5030BF3F5D7B617A836EE6
{
};
struct GenericComparer_1_tEFC80F51D4DD09A8E49CBDC042E674770C71B3A5  : public Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563
{
};
struct GenericComparer_1_t8E725A1E41D24EC0D6D41B50AB19533D34712658  : public Comparer_1_t2FF14F26F4D678A8FA199B888FF61A2A9D1D2D80
{
};
struct GenericComparer_1_tC47FB7567496AE9CE220E713596BF36BDFC96241  : public Comparer_1_t88D1E609547CDB93D82F17BA326F506DC1C371E6
{
};
struct GenericComparer_1_tA5AF468DAF33E60A488A677FB389702663D20050  : public Comparer_1_t3DB3DE7BB01E6125039318497F95D839804473D6
{
};
struct GenericComparer_1_t0BA92E16591709E18B54133BAE013D74B6325FDE  : public Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B
{
};
struct GenericComparer_1_t19EC854B769625ACBE12A011CC23BBB323D4EEF2  : public Comparer_1_tE191E68CB394DD255CCA7A56F4D1DEFED0BD3FDB
{
};
struct GenericComparer_1_tB6C8B530E84F9BEB76ED98D8DF79E0CA76E1F376  : public Comparer_1_t9641C93A4F2449C05FCF85463369F6BF84E95510
{
};
struct GenericComparer_1_tCC5A9D4F9B24BF95C933E5E34E0762F94816E332  : public Comparer_1_t74CA6C7EACDB4FE32364CB0614E282AE4DD728A9
{
};
struct GenericComparer_1_tA968FD290F5448DE3D9A24C95D5BF1D100F7E4EE  : public Comparer_1_t27E525AEFBAE351BF2338F1255FF489A94DF5D6C
{
};
struct GenericComparer_1_t5E4A8E105CE12996C1123095CF4D86E89C9BADF9  : public Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98
{
};
struct GenericComparer_1_t2A6981FA6CEECE1FD3AB030B3EEBB1F0EA443649  : public Comparer_1_t03DA6AFB24C7CAB292D6DC3A872298EE43E6C879
{
};
struct GenericComparer_1_t8B2549883288DE82230DAF1BBFC6C50D05F0F8BD  : public Comparer_1_t156CA54426F60B4132C76BFACD5FDBD3043D437E
{
};
struct GenericComparer_1_tA1FB6768366C07A87C3181B50FABC4AA0BE27C45  : public Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB
{
};
struct GenericComparer_1_tE8F2398411E2BE1F7B2B9B4E3E5FF786D569C7C7  : public Comparer_1_t2451C470E069C2142824538A7035CD168D8B6289
{
};
struct GenericComparer_1_tF3AFD01648154040AF1B746C6C4C2105B0434012  : public Comparer_1_tFC41EBB0A6AA4CA372B283E95D2C33D18835CC34
{
};
struct GenericEqualityComparer_1_t6BD41DA6D3C8558CA282A9CB33CD6A031E0F6274  : public EqualityComparer_1_tCC2E37B7A8B3CAB9102BC56493CE451493ADC3AB
{
};
struct GenericEqualityComparer_1_t2CDD5F208A23B709582FF336E2AB37CC5B61B719  : public EqualityComparer_1_t4B7A44F32804EBC0F67D8262056AB3BB6DB5E900
{
};
struct GenericEqualityComparer_1_t2F3BD8B1243BA962FDA9289CD8B04637A2EDE3C1  : public EqualityComparer_1_t68E3EF4E76CD62656ABD676D7D177809863FAA68
{
};
struct GenericEqualityComparer_1_t26551CB7607FD7349730D2878B11F0AC36C7DEBA  : public EqualityComparer_1_t20A5419EA3A98780837EDD9E5FBA4BFCD13700D1
{
};
struct GenericEqualityComparer_1_t602E7ECDA5438BCCACF6AD0EEA740AA178A5F137  : public EqualityComparer_1_t6B01DAC6A5AAACB741CE017584EAAEDF574DE45F
{
};
struct GenericEqualityComparer_1_t4FFBC4E3EEE811467FF5FF378EF180CDFBF69990  : public EqualityComparer_1_t333F4EDE62F883F7D3D79FC721D51ACC97B7DFAC
{
};
struct GenericEqualityComparer_1_t288038A07BC332FBD76D9DD115FEB2F3B3CD3C26  : public EqualityComparer_1_t3094991D24BA9E6F97EAEAB9F9E4D4CA76771094
{
};
struct GenericEqualityComparer_1_t8A7003F05BF4D92E454EEE1D8BE16D53BF74DD12  : public EqualityComparer_1_t01F8CF2CF777F0896EA3EAA7877D78F1307DD1E1
{
};
struct GenericEqualityComparer_1_tB340D409F403E423F21C0B1A972EABBAE1F9E638  : public EqualityComparer_1_tEDC8A72DA18B9BE940AA851A4BB238E3F99FF560
{
};
struct GenericEqualityComparer_1_t114338E01D17957CBD55B19B31D9AA3A31396E62  : public EqualityComparer_1_tF3CCB69D5AB8C3CE9F417F5984908B3B13441607
{
};
struct GenericEqualityComparer_1_t544BB841A8EA2C3734CAD92EBE77294825CE5DAE  : public EqualityComparer_1_t216E32D8F741BCB9378E25FD13194920A6B7EF12
{
};
struct GenericEqualityComparer_1_tFE7C8B583AA8308523884F13DBFD774923C0101B  : public EqualityComparer_1_tAA11E11782CC156B732B4C3DBBB3FBC4B0930668
{
};
struct GenericEqualityComparer_1_t5AFA250C4A0355B5041EABD6821CDDDD1C9BBE56  : public EqualityComparer_1_t3EDA2358EF4A4A63E83EDF6DE2E83A5A60A0EC7A
{
};
struct GenericEqualityComparer_1_tF4FBCB8AF5A0242D29B88240E7DEECA1645EC7C3  : public EqualityComparer_1_t1E5FED2BC6E8D51E4FA7775A041AAC5AE63E90C8
{
};
struct GenericEqualityComparer_1_tDA56E05B04501A3A2F03932448AEA0992744C454  : public EqualityComparer_1_tB0341B5F184F8F16AEFB583C41392F2F43F3F619
{
};
struct GenericEqualityComparer_1_t4B7E0E27BA3FCEB32C85A3FE6EFFCB0F6794A28C  : public EqualityComparer_1_tBF9FE7C5DE231C2E784E1AD190A6BFAF4B8FACC8
{
};
struct GenericEqualityComparer_1_t90C999BF718127584BFB1B02395D74EB081A4B2B  : public EqualityComparer_1_t188897C764D38361A593638A1C85F11DCCE2E1BA
{
};
struct GenericEqualityComparer_1_t58F81164B9612949666EA71016DEDBE0C63EA701  : public EqualityComparer_1_t202345A3E2A8D2F2943CB1E5AD6868D00251D4CF
{
};
struct GenericEqualityComparer_1_t31AF7B8E9C3342AB33BC6A2AF35C09FC3C55C3FF  : public EqualityComparer_1_tDAF922488AE1FB9D348BE48C874D7BA0838CD4FC
{
};
struct GenericEqualityComparer_1_tDBD4757191E8E1E596A68C8873769E957B7F8843  : public EqualityComparer_1_tDD3732DA8A8E5DA574E39C28D82457ED01D8FDF7
{
};
struct GenericEqualityComparer_1_tED7E8FEE2A0519FA146971835E50EAB158A5AB9B  : public EqualityComparer_1_t7AE663CFEF14CE2D38A40D09CC0D9536FCB9AF22
{
};
struct GenericEqualityComparer_1_t1599AFEA66B512EFDC31EC0C165C8900FFE29090  : public EqualityComparer_1_tA1E56A9C60BD83D531DD7B584CA42CEC109AD60F
{
};
struct GenericEqualityComparer_1_tEA0CD2860F0B96EC1409F02A6CA0405BA20F1091  : public EqualityComparer_1_tFE4BE398BD5E2F42D6624AD52679DDEE57B14ADC
{
};
struct GenericEqualityComparer_1_tEC6338D3C04F7ADE71E864B969177F6EDC892E31  : public EqualityComparer_1_t5C1A5B39B614A2FCDAE30DABB029A0E70AC44144
{
};
struct GenericEqualityComparer_1_t1892D10027CF4696EBA76C0C53D7365BBF5E96D6  : public EqualityComparer_1_t96E8EE5AD84F26A165B0FAD9D9262707317C3B49
{
};
struct GenericEqualityComparer_1_tF7D91122D7603F43E4F09BC3D2CE34DDF44EA9EE  : public EqualityComparer_1_t54C77EEDF180071617D638642C2A24279A9E85AC
{
};
struct GenericEqualityComparer_1_t608185C9F793951775FD28A8F40F4FD076F56276  : public EqualityComparer_1_t3C3D13256107D746F9BF487FDD846D99A52DC9D2
{
};
struct GenericEqualityComparer_1_t9DD23E5C4FDB0702C7713B2E1FE2847B518B6FB1  : public EqualityComparer_1_t94252027E4F9531D5FCC00D6604520FA3E1EE797
{
};
struct GenericEqualityComparer_1_tAC9E5A1057F263B3A098342D90D02A5486974AD7  : public EqualityComparer_1_t03F43DBE2156DF11F96342BD46FF2E6A27CE36B5
{
};
struct GenericEqualityComparer_1_t701A7CCFBC447F28E911B9EDA1B7F960017DBB6D  : public EqualityComparer_1_t5128344EEA13A5FEDF630CC496230FB84C96ABAE
{
};
struct GenericEqualityComparer_1_tBE4BEE0A301C256BC1BDC2A7253A0FCE5E1E1E57  : public EqualityComparer_1_t91BC2A25C5FBF38BDF50F86E9E47755FAAE8D3CA
{
};
struct GenericEqualityComparer_1_tFEE4EC75790885B15500DF548762F9AEE4EB66DF  : public EqualityComparer_1_tC98FF08C6205542E75FC91AE6C59167467891DB8
{
};
struct GenericEqualityComparer_1_t960CC261D499D3075905EAD9D66F0EC90EE4EC36  : public EqualityComparer_1_tFB5CF693EC1D6C1FB3A28D9D87D6EBB329406ABE
{
};
struct GenericEqualityComparer_1_tFBB06C9E3B777E5A2FF4F1673281AA3E30930DEB  : public EqualityComparer_1_t04E34D9660BB45B9B9E9DBF97FBA134F7D5C7E49
{
};
struct GenericEqualityComparer_1_tBB13E79AD0652D471E3D9EDFAC8A3098B7C419C7  : public EqualityComparer_1_tBA179F4EE58F552AC8A9BBB049C74520AE3B3E4C
{
};
struct GenericEqualityComparer_1_t06213B028ABF5EA9FED8739E0AEC277DF594C9E9  : public EqualityComparer_1_tED5D7103EB70F04701068D3A47FFDE0C5C255272
{
};
struct GenericEqualityComparer_1_t570CE5ADE2E9356D6CF8D23C83F7D325ED8966DC  : public EqualityComparer_1_t8B741287299D87FD02CAE8DBBDD31C9D7FEBC83C
{
};
struct GenericEqualityComparer_1_t077116000B83F25DA3C8ABDC90505C48119D0817  : public EqualityComparer_1_t2FC72AD935531391E034D5134279ABD4FA775C49
{
};
struct GenericEqualityComparer_1_t3739EA3A68E71014990ED22A552805E62B964F25  : public EqualityComparer_1_t91CC793D528077FF2BC0B89D0D9DDB2B3DCF0B68
{
};
struct GenericEqualityComparer_1_t6BD8FA7C645A0E9E3D05FA45E179ABB5412457BF  : public EqualityComparer_1_t59A8120CAF6FA4E0EA7F5900499889FF17C4B78E
{
};
struct GenericEqualityComparer_1_tE7FD565CCF1E8E0645D4CFD5FE24678662110740  : public EqualityComparer_1_tABD2A21E5AFAD7379C8DF2F64A92BDC480DFFF30
{
};
struct GenericEqualityComparer_1_t6FAD398645CF89B73586CB1771291B353C40997F  : public EqualityComparer_1_tF1B512B620D5429DE690D1CA4968A06DC75D2AEA
{
};
struct GenericEqualityComparer_1_tCC9E8CBAC7ABA554207FE01B20DA4D3E24688F2F  : public EqualityComparer_1_tF6A24EC840070175F60084658968AEFFA3576878
{
};
struct GenericEqualityComparer_1_t339E4451A960F10148E9B2CA837DF81AE10B07FB  : public EqualityComparer_1_t2AAADB4BCB35C22A62A682B16E60E6F272D3F5C4
{
};
struct GenericEqualityComparer_1_t530BE9FB936697C362E9DA558C0E3C568E0F57D0  : public EqualityComparer_1_t37CC65634D482D254546A5481663F7E23B0C73F3
{
};
struct GenericEqualityComparer_1_tCEF62688D69B2895B4985A356D788B545D86FA22  : public EqualityComparer_1_t93F77A1FE548563F4236F09DA38D84213CFB70C9
{
};
struct GenericEqualityComparer_1_tC861CCE5440E9689C1A12A5232CCC1CD302F0AED  : public EqualityComparer_1_tF60D3424A85A7B1DACA02F0A6BBDDDAEDBA71A51
{
};
struct GenericEqualityComparer_1_tAE48E797B11F9C210CB540ECF4F114D9DBC1B0F4  : public EqualityComparer_1_t47738E2CC1B3FD08477FE139E7493113703658FA
{
};
struct GenericEqualityComparer_1_tA32AA030EC1464952932656CE281D86BE2E7B134  : public EqualityComparer_1_tAD36C6112BC24C0F76DDA1BFA7A05A46A2639973
{
};
struct GenericEqualityComparer_1_tAEAF73ABA42F405DC5EA29FA9BE534D48C3E13ED  : public EqualityComparer_1_t996261ABE0B0806F567668FDCE59D3C20D3B28C5
{
};
struct GenericEqualityComparer_1_t121092C776FA330459DB696019A332373592E46C  : public EqualityComparer_1_t45124E95385DEA964ACB8ED69B1BEAB175449783
{
};
struct GenericEqualityComparer_1_t14EFD5B43B3A358E53837ABC8C66D91472A7F219  : public EqualityComparer_1_t8BEC2F54B94741E1B86E3A440F297548441763F9
{
};
struct GenericEqualityComparer_1_t9736F3CBB01BC90433689C658317D06C25E48A5C  : public EqualityComparer_1_t38D2B80AE5EE6A628F5F5B7E589FC0023C4AA90A
{
};
struct GenericEqualityComparer_1_tFA2B4216EEE71A2D0D66BB449BA97BB87A0DA7F0  : public EqualityComparer_1_t8458803B89F633737CC215969DC4354E2613309D
{
};
struct GenericEqualityComparer_1_t125BD67993E9AC29931E4D66F8E8024288E2F15C  : public EqualityComparer_1_t0D2B44D5A26A0DAB6E594345B5049273585DE26E
{
};
struct NativeSlice_1_t2584A7E323E2DAA0F082C26AD9D0DE0FC661F85F 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	bool ___hasValue;
	int32_t ___value;
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
struct DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E 
{
	int64_t ___Value;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
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
struct EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD 
{
	uint32_t ____state;
};
struct FrozenHashTable_t8097DFDCEA347B68C4EE4826CBA07F35DA5F44A1 
{
	BucketU5BU5D_t8B6E08CB79BFA821E42E1F0CCFAEC1B1640EE4C9* ____buckets;
	uint64_t ____fastModMultiplier;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___U3CHashCodesU3Ek__BackingField;
};
struct FrozenHashTable_t8097DFDCEA347B68C4EE4826CBA07F35DA5F44A1_marshaled_pinvoke
{
	Bucket_t725E43200C3C618E570AC942A981B737E9EA2EB5* ____buckets;
	uint64_t ____fastModMultiplier;
	Il2CppSafeArray* ___U3CHashCodesU3Ek__BackingField;
};
struct FrozenHashTable_t8097DFDCEA347B68C4EE4826CBA07F35DA5F44A1_marshaled_com
{
	Bucket_t725E43200C3C618E570AC942A981B737E9EA2EB5* ____buckets;
	uint64_t ____fastModMultiplier;
	Il2CppSafeArray* ___U3CHashCodesU3Ek__BackingField;
};
struct InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 
{
	alignas(IL2CPP_SIZEOF_VOID_P) InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5* ___m_EventPtr;
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
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A 
{
	StyleValueCollection_t5ADC08D23E648FBE78F2C161494786E6C83E1377* ___m_StyleValues;
};
struct StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A_marshaled_pinvoke
{
	StyleValueCollection_t5ADC08D23E648FBE78F2C161494786E6C83E1377* ___m_StyleValues;
};
struct StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A_marshaled_com
{
	StyleValueCollection_t5ADC08D23E648FBE78F2C161494786E6C83E1377* ___m_StyleValues;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
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
struct uint3_t45FFBC5BF37BC29A11A742B3E7650F7CA89B03B6 
{
	uint32_t ___x;
	uint32_t ___y;
	uint32_t ___z;
};
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 
{
	uint16_t ___visibleLightIndex;
	uint16_t ___lightBufferIndex;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___light;
};
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_marshaled_pinvoke
{
	uint16_t ___visibleLightIndex;
	uint16_t ___lightBufferIndex;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___light;
};
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_marshaled_com
{
	uint16_t ___visibleLightIndex;
	uint16_t ___lightBufferIndex;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___light;
};
struct ButtonsState_tC596C9B742AF4FDB4D32B05551EEDB23D243E996 
{
	uint32_t ____state;
};
struct ReadWriteParameters_t14911E85F7252B5A39D9A53466C7EDE243327033 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Buffer;
	int32_t ___Offset;
	int32_t ___Count;
};
struct ReadWriteParameters_t14911E85F7252B5A39D9A53466C7EDE243327033_marshaled_pinvoke
{
	Il2CppSafeArray* ___Buffer;
	int32_t ___Offset;
	int32_t ___Count;
};
struct ReadWriteParameters_t14911E85F7252B5A39D9A53466C7EDE243327033_marshaled_com
{
	Il2CppSafeArray* ___Buffer;
	int32_t ___Offset;
	int32_t ___Count;
};
struct FrozenSetInternalBase_2_tB8387C9E2C1232C668563E90142C4143220F4CB0  : public FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706
{
	GSW_tF00D1E09805DA6E6A35E624A37C83A4D2DFEF7AD ____thisSet;
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
struct FrozenSetInternalBase_2_t4041C875962B934D82B677C648EBDAD689B5E805  : public FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706
{
	GSW_t707226C8C18E35D611B512DB361D4FCC698EA58C ____thisSet;
};
struct FunctionPointer_1_t45E67205E6D22523A4FEF46DC7A859C5C14566BA 
{
	intptr_t ____ptr;
};
struct GPUBuffer_1_tB27A42EE52EA38FD7117C4EC0B1E42703FFE4C36  : public RuntimeObject
{
	intptr_t ___buffer;
	int32_t ___elemCount;
	int32_t ___elemStride;
};
struct GPUBuffer_1_tA6A8BA754BA691383F7FA4302803FC11DA7373F3  : public RuntimeObject
{
	intptr_t ___buffer;
	int32_t ___elemCount;
	int32_t ___elemStride;
};
struct GPUBuffer_1_tB799E550DAF939E606A31722DEC8AD338C447E86  : public RuntimeObject
{
	intptr_t ___buffer;
	int32_t ___elemCount;
	int32_t ___elemStride;
};
typedef Il2CppFullySharedGenericStruct ValueTuple_3_t281F811FD3C50D75BEECE4EE3B96B099CA209E69;
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct AsyncGPUReadbackRequest_t6A735D3E0F1DEF8F43EBD0E6FE550FAE564519C7 
{
	intptr_t ___m_Ptr;
	int32_t ___m_Version;
};
struct CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7  : public RuntimeObject
{
	intptr_t ___m_Ptr;
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
struct EventSource_t395F7AD9932CE73777C8DB122DE6638A61AAA07E 
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
struct FilterFunctionType_tF29290365A61009BE6F2EF6C6C6218E72CB9F64A 
{
	int32_t ___value__;
};
struct FilterParameterType_t7250262A78079140235AAFF6F4FA3CCB2F99E390 
{
	int32_t ___value__;
};
struct GPUInstanceDataBuffer_tAF2FDE10337956B935AE0961BAB4F5A4E534ACF3  : public RuntimeObject
{
	int32_t ___m_MainUploadScatterInstancesKernelID;
	int32_t ___m_MainCopyInstancesKernelID;
	InternalGPUInstanceDataBuffer_tC9A85B27F868F6BDD90CB6DF6DACFC169A2054F2* ___m_InternalBuffer;
	int32_t ___m_LayoutVersion;
	uint3_t45FFBC5BF37BC29A11A742B3E7650F7CA89B03B6 ___m_UploaKernelThreadGroupSize;
	ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* ___m_InstanceDataBufferUploadKernels;
	ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* ___m_InstanceDataBufferCopyKernels;
	GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* ___m_InputInstanceIndicesBuffer;
	GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* ___m_InputComponentAddressesBuffer;
	GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* ___m_OutputComponentIndicesBuffer;
};
struct GpuBufferFlags_tB5F869C4C9694DECB1EAA36060DD9DD16825E977 
{
	int32_t ___value__;
};
struct GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1  : public RuntimeObject
{
	intptr_t ___m_Ptr;
};
struct LayoutUnit_tF18EC17FE8588A01C72784546410EA0D9B1D2F22 
{
	int32_t ___value__;
};
struct MaterialPropertyValueType_t3AE79BF4BF4F82EFA7E2ED2CB4EC5BAB096BC5A8 
{
	int32_t ___value__;
};
struct NativeArrayOptions_t3E979EEF4B4840228A7692A97DA07553C6465F1D 
{
	int32_t ___value__;
};
struct PenEventType_t74D209AD8F86E35F8B5B6030115FC21FE9A322F5 
{
	int32_t ___value__;
};
struct PenStatus_tCAD6543115EF443E17410B52D37EC67BCC88ABB8 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct StylePropertyId_tA3B8A5213F5BA43F9C5443B27B165D744713BE69 
{
	int32_t ___value__;
};
struct TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___offset;
	float ___blurRadius;
};
struct TouchPhase_t54E0A1AF80465997849420A72317B733E1D49A9E 
{
	int32_t ___value__;
};
struct TouchType_t84F82C73BC1A6012141735AD84DA67AA7F7AB43F 
{
	int32_t ___value__;
};
struct Button_tA3E7AF5F245F630CB38476BAB013B509F53B35B8 
{
	uint32_t ___value__;
};
struct Type_tAD126B1DC1FD450FB4C782B18131374A55C28858 
{
	int32_t ___value__;
};
struct SettingsOptions_t935A71692F21EE9D959FCAC00574AA018F8BA2CB 
{
	uint16_t ___value__;
};
struct ItemsFrozenSet_2_t35C931D000B5855387F82ED172AD15DF227A8324  : public FrozenSetInternalBase_2_tB8387C9E2C1232C668563E90142C4143220F4CB0
{
	FrozenHashTable_t8097DFDCEA347B68C4EE4826CBA07F35DA5F44A1 ____hashTable;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items;
};
struct ItemsFrozenSet_2_tC4E6DBBA72BCE67CE22A327CB27531920A58EBFF  : public FrozenSetInternalBase_2_t4041C875962B934D82B677C648EBDAD689B5E805
{
	FrozenHashTable_t8097DFDCEA347B68C4EE4826CBA07F35DA5F44A1 ____hashTable;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items;
};
struct NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
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
struct ValueTuple_2_tEC1B07B817DE2B13F78CE829B3C76571F7CDB0AE 
{
	int32_t ___Item1;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___Item2;
};
struct ValueTuple_2_t4B97F62E72F3957A172F2DA2991E510249ACAF3E 
{
	int32_t ___Item1;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___Item2;
};
struct ValueTuple_4_t371A20F56E5F22E5A33B94BFDB9F1C0F356BE280 
{
	int32_t ___Item1;
	int32_t ___Item2;
	int32_t ___Item3;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___Item4;
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
struct MaterialPropertyValue_t7E5F9CBA239436E9F59788183F2C33E9826F8ADF 
{
	String_t* ___name;
	int32_t ___type;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___packedValue;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___textureValue;
};
struct MaterialPropertyValue_t7E5F9CBA239436E9F59788183F2C33E9826F8ADF_marshaled_pinvoke
{
	char* ___name;
	int32_t ___type;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___packedValue;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___textureValue;
};
struct MaterialPropertyValue_t7E5F9CBA239436E9F59788183F2C33E9826F8ADF_marshaled_com
{
	Il2CppChar* ___name;
	int32_t ___type;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___packedValue;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___textureValue;
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
struct PenData_t2345B5FBD18D851528C5C18F8A667D4EF4690945 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___tilt;
	int32_t ___penStatus;
	float ___twist;
	float ___pressure;
	int32_t ___contactType;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___deltaPos;
};
struct PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05 
{
	int32_t ___type;
	int32_t ___pointerIndex;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___deltaPosition;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___worldOrientation;
	float ___maxDistance;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___scroll;
	int32_t ___displayIndex;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___tilt;
	float ___twist;
	float ___pressure;
	bool ___isInverted;
	uint32_t ___button;
	ButtonsState_tC596C9B742AF4FDB4D32B05551EEDB23D243E996 ___buttonsState;
	int32_t ___clickCount;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_marshaled_pinvoke
{
	int32_t ___type;
	int32_t ___pointerIndex;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___deltaPosition;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___worldOrientation;
	float ___maxDistance;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___scroll;
	int32_t ___displayIndex;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___tilt;
	float ___twist;
	float ___pressure;
	int32_t ___isInverted;
	uint32_t ___button;
	ButtonsState_tC596C9B742AF4FDB4D32B05551EEDB23D243E996 ___buttonsState;
	int32_t ___clickCount;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_marshaled_com
{
	int32_t ___type;
	int32_t ___pointerIndex;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___deltaPosition;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___worldOrientation;
	float ___maxDistance;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___scroll;
	int32_t ___displayIndex;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___tilt;
	float ___twist;
	float ___pressure;
	int32_t ___isInverted;
	uint32_t ___button;
	ButtonsState_tC596C9B742AF4FDB4D32B05551EEDB23D243E996 ___buttonsState;
	int32_t ___clickCount;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
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
struct UnmanagedMaterialPropertyValue_t32418EF3A65B66312EE3D81C88513C1116711B75 
{
	int32_t ___name;
	int32_t ___type;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___packedValue;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___textureValue;
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
struct U3CU3Ec__DisplayClass5_0_t5B92A45B3E3A5C4A1EE7E006EAD8809BB6DB4DAB  : public RuntimeObject
{
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___localData;
	int32_t ___errorCount;
};
struct Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F  : public MulticastDelegate_t
{
};
struct DefaultFrozenSet_1_t13DDDBF4773580AD15852B0A795E5D4F44E5259A  : public ItemsFrozenSet_2_t35C931D000B5855387F82ED172AD15DF227A8324
{
};
struct FixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C 
{
	FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060 _____0;
	FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060 _____1;
	FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060 _____2;
	FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060 _____3;
};
struct Func_3_t0620ECF6AB73866242850ABCE518B069D201DA79  : public MulticastDelegate_t
{
};
struct Func_3_tD3C5141B184A528ABF7649D429906DA08C68E4A7  : public MulticastDelegate_t
{
};
struct Func_3_t5328A430FC4208B44C52E4E89DC5F686DE6A6A1B  : public MulticastDelegate_t
{
};
struct Func_3_t51D4E44E2C15496C570D8BC1066507A5F2A1980D  : public MulticastDelegate_t
{
};
struct Func_3_t93382A3D4686D41CF1A0FC43A708F7BFA5C5CDBB  : public MulticastDelegate_t
{
};
struct Func_3_tE7B57D78D4D3374E931B72AC6E2C9BA7413B8D8E  : public MulticastDelegate_t
{
};
struct Func_3_t6745994E8BE66E70CABFC83E108BB6BB52414502  : public MulticastDelegate_t
{
};
struct Func_3_t0CC54FF2CE32FE66DF53F2C75187172DD590426C  : public MulticastDelegate_t
{
};
struct Func_3_t06ED4EB071C5BB0024319BE1F60C308E1DAA9CC5  : public MulticastDelegate_t
{
};
struct Func_3_t99E62D3154E1A6700E41EB034D8657E7F57A6572  : public MulticastDelegate_t
{
};
struct Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F  : public MulticastDelegate_t
{
};
struct Func_3_tD03C3EE25EAA87D0062853702025F3EF91217759  : public MulticastDelegate_t
{
};
struct Func_3_t3C9B58317240F0FFAFF4B6839530991F1B213434  : public MulticastDelegate_t
{
};
struct Func_3_tFC7A661A1C44EA11ED98A462458060478A09DD22  : public MulticastDelegate_t
{
};
struct Func_3_t8ABA11B2555ED37315928295E1F5259AD6951D6A  : public MulticastDelegate_t
{
};
struct Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9  : public MulticastDelegate_t
{
};
struct Func_3_t67E5643D3DA582C823A496B5B194248A4488CAB9  : public MulticastDelegate_t
{
};
struct Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4  : public MulticastDelegate_t
{
};
struct Func_3_t04BCD613633CE8BB98EC046F90C4C9B0AA84F0BF  : public MulticastDelegate_t
{
};
struct Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821  : public MulticastDelegate_t
{
};
struct Func_4_t6D315AA89B1F4FAB987B12775B249B1F550296A1  : public MulticastDelegate_t
{
};
struct Func_4_tFAADAAC0BCDBD38961AC4A2FBFF56A50C8FE5D7F  : public MulticastDelegate_t
{
};
struct Func_4_t3D08A13C5D862919E1719A02821AE8774376E3B2  : public MulticastDelegate_t
{
};
struct Func_4_t10E373E09E0663CA58211D9753566AB17B869CFE  : public MulticastDelegate_t
{
};
struct Func_4_tC657181E6D32A56F3807B12C42867B41C9FFEDE8  : public MulticastDelegate_t
{
};
struct Func_4_t46AFC49CA39DB919494F35A68FE4A3CB8668E22F  : public MulticastDelegate_t
{
};
struct Func_4_t28BFDA9BC4AB12540F2BE70B4FC23CD6FF5EB6F4  : public MulticastDelegate_t
{
};
struct Func_4_t93A2D1B3300415C1167923C629725F6A8758E6B5  : public MulticastDelegate_t
{
};
struct Func_4_tE8880617268959B52D1F17D4E1474CF1F158FFD6  : public MulticastDelegate_t
{
};
struct Func_4_t8DAB5E499F76CF14F82480384E442E7B18F8A228  : public MulticastDelegate_t
{
};
struct Func_4_tD7876738CCF17260D8D5414D77A56B42DF498B75  : public MulticastDelegate_t
{
};
struct Func_4_t54F29ECDC7F5F5FBDE73EA4BA1B62EA311C68913  : public MulticastDelegate_t
{
};
struct Func_4_t142D84962E6BC5BEB866495BD0AA4B6B70CC22CF  : public MulticastDelegate_t
{
};
struct Func_4_t46812CB64A120A31977C87BC4A822A947B5C44A5  : public MulticastDelegate_t
{
};
struct Func_4_tA2715DBF98A977386B56E2317139D310CB4FCA2B  : public MulticastDelegate_t
{
};
struct Func_4_t222F7B044E23AD55E5A23F7A86BA3CF128947094  : public MulticastDelegate_t
{
};
struct Func_4_t2D728D40D290F8C65346C870D314F893B5896872  : public MulticastDelegate_t
{
};
struct Func_4_t572D62CCA845BDAD9BC3ABCD839C1AE78144D079  : public MulticastDelegate_t
{
};
struct Func_5_tF62920A312D48DBD419646C6B61A343C77B40EE8  : public MulticastDelegate_t
{
};
struct Func_5_t4BAF9947ED0D9539655B747B83ADB5E73EF86754  : public MulticastDelegate_t
{
};
struct Func_5_t805619620EC28CDACD9F4CC1037A05B0A4B80818  : public MulticastDelegate_t
{
};
struct Func_5_tB069B44093DF1EBDA5245A604B7AD60C4B638397  : public MulticastDelegate_t
{
};
struct Func_6_tF0A0CA0D64145FD856F53441697B240796CBF320  : public MulticastDelegate_t
{
};
struct Func_7_tE5BE67F6F06DB3CA05521637000BD00C4D993F80  : public MulticastDelegate_t
{
};
struct Func_8_t605F8719FA2521B5FF48B1D8047E17F3F082B32E  : public MulticastDelegate_t
{
};
struct Func_9_tCA208DB676270504B9EA383199B74083CECB6375  : public MulticastDelegate_t
{
};
struct GPUInstanceDataBufferReadback_1_t5AE9021A468A030012E49A0B36B7A5A237D5BDA0 
{
	GPUInstanceDataBuffer_tAF2FDE10337956B935AE0961BAB4F5A4E534ACF3* ___m_InstanceDataBuffer;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___U3CdataU3Ek__BackingField;
};
struct ValueTuple_3_tCC45248562BCA39C88C59E362E321345BABCCC54 
{
	Func_4_t8DAB5E499F76CF14F82480384E442E7B18F8A228* ___Item1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Item2;
	ValueTuple_2_tEC1B07B817DE2B13F78CE829B3C76571F7CDB0AE ___Item3;
};
struct ValueTuple_3_t64EB85CC877EC5F77B06675BFBECB2F7C4E49127 
{
	Func_4_tD7876738CCF17260D8D5414D77A56B42DF498B75* ___Item1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Item2;
	ValueTuple_2_t4B97F62E72F3957A172F2DA2991E510249ACAF3E ___Item3;
};
struct ValueTuple_3_t14850C891655652B8363C8F70251D9AA271F5871 
{
	Func_4_t54F29ECDC7F5F5FBDE73EA4BA1B62EA311C68913* ___Item1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Item2;
	ValueTuple_4_t371A20F56E5F22E5A33B94BFDB9F1C0F356BE280 ___Item3;
};
struct ValueTuple_3_tFA1D0F0223CD390EF58965CD27B066DD658BB426 
{
	Func_4_t46812CB64A120A31977C87BC4A822A947B5C44A5* ___Item1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Item2;
	PenData_t2345B5FBD18D851528C5C18F8A667D4EF4690945 ___Item3;
};
struct ValueTuple_3_t7710F86A623C8F578E76B4EAC47B05AA6EFE7B64 
{
	PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05 ___Item1;
	int32_t ___Item2;
	float ___Item3;
};
struct ValueTuple_3_t083FB9C32ED0C25542A5131205E7A8A0B87F1D15 
{
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 ___Item1;
	int32_t ___Item2;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___Item3;
};
struct ValueTypeDefaultComparerFrozenSet_1_t7446762EF99A96384303A51667262A2C312FF312  : public ItemsFrozenSet_2_tC4E6DBBA72BCE67CE22A327CB27531920A58EBFF
{
};
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
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
struct Func_3_tB92C805F866D2EB9A48A2CC06AAF77E333340E9F  : public MulticastDelegate_t
{
};
struct Func_3_t5853662BEAC371606CF3B0A970C0C364071786A6  : public MulticastDelegate_t
{
};
struct Func_3_t85FE3095102BB2B6BD1EB22DEF460EB87BE027F3  : public MulticastDelegate_t
{
};
struct Func_3_t87A1952828924BD3D8F9F4D6DD236D3BA662115B  : public MulticastDelegate_t
{
};
struct Func_3_t5D3A7734C2D15740E189C04A8A51572E7865B879  : public MulticastDelegate_t
{
};
struct Func_3_t4C315B89143B58391639906E83ABDD25F0D7E596  : public MulticastDelegate_t
{
};
struct Func_3_tA97A8AA5DD5E584A5ADBF2402322C22AE9F68D32  : public MulticastDelegate_t
{
};
struct Func_4_tC6554A9B6158B8E653539FD20E101E86ECAD14E5  : public MulticastDelegate_t
{
};
struct ValueTuple_3_t10B3CDFA9EEBDCDFB1C25F6B3F6B5E468C8F9F50 
{
	Func_4_tC6554A9B6158B8E653539FD20E101E86ECAD14E5* ___Item1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Item2;
	ValueTuple_3_t083FB9C32ED0C25542A5131205E7A8A0B87F1D15 ___Item3;
};
struct FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF 
{
	int32_t ___m_Type;
	FixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C ___m_Parameters;
	int32_t ___m_ParameterCount;
	FilterFunctionDefinition_tFE41DB19FFB74F4D2B54BF44D1D2051B57FC82F2* ___m_CustomDefinition;
};
struct FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF_marshaled_pinvoke
{
	int32_t ___m_Type;
	FixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C ___m_Parameters;
	int32_t ___m_ParameterCount;
	FilterFunctionDefinition_tFE41DB19FFB74F4D2B54BF44D1D2051B57FC82F2* ___m_CustomDefinition;
};
struct FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF_marshaled_com
{
	int32_t ___m_Type;
	FixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C ___m_Parameters;
	int32_t ___m_ParameterCount;
	FilterFunctionDefinition_tFE41DB19FFB74F4D2B54BF44D1D2051B57FC82F2* ___m_CustomDefinition;
};
struct UnmanagedFilterFunction_t46D1C73262CD8245474DBC2CA5878C80E08A1B11 
{
	int32_t ___m_Type;
	FixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C ___m_Parameters;
	int32_t ___m_ParameterCount;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_CustomDefinition;
};
struct Func_3_t94535AB4ADE6AAF249B82B667D7A66026AE0CC6B  : public MulticastDelegate_t
{
};
struct Func_3_t257468D81256F67CCB3C6EC189AA86146F0E83BF  : public MulticastDelegate_t
{
};
struct Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB_StaticFields
{
	Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* ___defaultComparer;
};
struct FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706_StaticFields
{
	FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706* ___U3CEmptyU3Ek__BackingField;
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
struct CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7_StaticFields
{
	bool ___ThrowOnSetRenderTarget;
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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionPointer_1__ctor_mC619E78A7A6A909670DFFE07825842FDA7D178F7_gshared (FunctionPointer_1_t45E67205E6D22523A4FEF46DC7A859C5C14566BA* __this, intptr_t ___0_ptr, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t FunctionPointer_1_get_Value_mA1F1CB8C8E8B4B8030D49BFBEF55560DEB03FDD5_gshared_inline (FunctionPointer_1_t45E67205E6D22523A4FEF46DC7A859C5C14566BA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FunctionPointer_1_get_IsCreated_mE896F8993D96765E8D0CE084A5FF954ADB82717C_gshared (FunctionPointer_1_t45E67205E6D22523A4FEF46DC7A859C5C14566BA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionPointer_1_CheckIsCreated_m5EF23B4472072E8D10170BEBDBCB2A0D870841F4_gshared (FunctionPointer_1_t45E67205E6D22523A4FEF46DC7A859C5C14566BA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_GetDelegateForFunctionPointer_TisIl2CppFullySharedGenericAny_m67DB6027E8CD3914ED5B06FCF1CC232BE11A53EE_gshared (intptr_t ___0_ptr, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionPointer_1_get_Invoke_m552FD5AD590BE1F22C35842835DBC3FB96BACA44_gshared (FunctionPointer_1_t45E67205E6D22523A4FEF46DC7A859C5C14566BA* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FunctionPointer_1_Unity_Burst_IFunctionPointer_FromIntPtr_m83AC3B2AD9CD3551118A13B4D28B96ED0B293725_gshared (FunctionPointer_1_t45E67205E6D22523A4FEF46DC7A859C5C14566BA* __this, intptr_t ___0_ptr, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m051D495AEDE8F8F98AF26E7709F9873DF4926036_gshared_inline (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_nativeSlice, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeSlice_1_get_Length_m0225CA0944599882AC9C2A06A99FDC685362AFBE_gshared_inline (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 GPUInstanceDataBufferReadback_1_get_data_m85A66715F31C0E08C13BA9C091BE27292CEAFA28_gshared_inline (GPUInstanceDataBufferReadback_1_t5AE9021A468A030012E49A0B36B7A5A237D5BDA0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GPUInstanceDataBufferReadback_1_set_data_m7113F6AA3060BFE24F83C25673C2F5D85A7092A7_gshared_inline (GPUInstanceDataBufferReadback_1_t5AE9021A468A030012E49A0B36B7A5A237D5BDA0* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_mD8A37C2265383249A912AA4859430FB3DDEF3B80_gshared (U3CU3Ec__DisplayClass5_0_t5B92A45B3E3A5C4A1EE7E006EAD8809BB6DB4DAB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsNotNull_TisIl2CppSharedGenericObject_m0A85585E00CD4BC9B649E72630F685A145E90765_gshared (Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1_gshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m685A441EC9FAC9D554B26FA83A08F4BEF96DFF0E_gshared (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GPUInstanceDataBufferReadback_1_Load_m83665036757894EC4D0B5D980D0BAC425A5B7267_gshared (GPUInstanceDataBufferReadback_1_t5AE9021A468A030012E49A0B36B7A5A237D5BDA0* __this, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___0_cmd, GPUInstanceDataBuffer_tAF2FDE10337956B935AE0961BAB4F5A4E534ACF3* ___1_instanceDataBuffer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m365A262FA4CA431467F021D7732CECD68316AF80_gshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUInstanceDataBufferReadback_1_Dispose_m14D34F06B04E86E7F723BB4D560AB33AEE47E916_gshared (GPUInstanceDataBufferReadback_1_t5AE9021A468A030012E49A0B36B7A5A237D5BDA0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GSW_Store_m5C96193E5808DA834C51975EF38EB97088394A41_gshared (GSW_tF00D1E09805DA6E6A35E624A37C83A4D2DFEF7AD* __this, FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706* ___0_set, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FrozenSet_1_get_Count_m0D2127C8451374E476181921F2456602820A3A1F_gshared (FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GSW_get_Count_mC03F2D9BF8EAF4DB416D989990591F436AF9B278_gshared (GSW_tF00D1E09805DA6E6A35E624A37C83A4D2DFEF7AD* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FrozenSet_1_get_Comparer_mB3265D335E5104BC225CEFFFED328ACA8FC573D0_gshared_inline (FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GSW_get_Comparer_mC872C97392B1D99A688FC67E8A09C00368FB91B7_gshared (GSW_tF00D1E09805DA6E6A35E624A37C83A4D2DFEF7AD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GSW_FindItemIndex_m1C6EE5B798AB350CAFDC33DB297B123C9766DD69_gshared (GSW_tF00D1E09805DA6E6A35E624A37C83A4D2DFEF7AD* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC7CE6D94112648D301AA3F68E7F8536FB8568478 FrozenSet_1_GetEnumerator_m1429D218A6E8178BA2DFC3FF6C682AABD7F16298_gshared (FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC7CE6D94112648D301AA3F68E7F8536FB8568478 GSW_GetEnumerator_mB4F247AC50045D87162A79E50A0B7DDDA1A12F1C_gshared (GSW_tF00D1E09805DA6E6A35E624A37C83A4D2DFEF7AD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GSW_Store_mA0438D7D417BB9247888183584AA4B46F3F4E218_gshared (GSW_t8857BC3AB3D15845559E0D3C6B8BC34AD8E0D2F9* __this, FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706* ___0_set, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GSW_get_Count_m64C160237F8CCF96A831A1244AD4CAC1CEFB9107_gshared (GSW_t8857BC3AB3D15845559E0D3C6B8BC34AD8E0D2F9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GSW_get_Comparer_mF5C268881C1C4C117EB6E126AE72BB17D2E88FDD_gshared (GSW_t8857BC3AB3D15845559E0D3C6B8BC34AD8E0D2F9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GSW_FindItemIndex_mB6835BE23F9161DC6D08087B5163DCE27724D190_gshared (GSW_t8857BC3AB3D15845559E0D3C6B8BC34AD8E0D2F9* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC7CE6D94112648D301AA3F68E7F8536FB8568478 GSW_GetEnumerator_m04C241556FF7339B46570454360608449EC1EE58_gshared (GSW_t8857BC3AB3D15845559E0D3C6B8BC34AD8E0D2F9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GSW_Store_m9B85695CF374CDEB837F12D3C7EFC87B60FD7203_gshared (GSW_t0061A262D104F67CF731EDF5CDA9676416DB8031* __this, FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706* ___0_set, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GSW_get_Count_m34188F8B4E9BCFC8990F10F2669CB5FFEEC89C86_gshared (GSW_t0061A262D104F67CF731EDF5CDA9676416DB8031* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GSW_get_Comparer_m5BB61F05EE055B6AD0E453DE0B3D64709A62143C_gshared (GSW_t0061A262D104F67CF731EDF5CDA9676416DB8031* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GSW_FindItemIndex_m3E0A9DCA4784E563ECEB2273E199E47514BDE079_gshared (GSW_t0061A262D104F67CF731EDF5CDA9676416DB8031* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC7CE6D94112648D301AA3F68E7F8536FB8568478 GSW_GetEnumerator_m0B357B4DFDD6B7F84BD688B6823B940B7487DE6A_gshared (GSW_t0061A262D104F67CF731EDF5CDA9676416DB8031* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GSW_Store_m03EC86FC485B8E1F9D7346591C2531D1D302605D_gshared (GSW_t1B36104E24C1F13AA1B79B38D02C46F0656FC7C4* __this, FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706* ___0_set, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GSW_get_Count_m13CA3ED532BF5053A42B7177E6B3318FC03FAC5F_gshared (GSW_t1B36104E24C1F13AA1B79B38D02C46F0656FC7C4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GSW_get_Comparer_m82013CBE6F3EBE379B22BFFBF8C31218502B9EBC_gshared (GSW_t1B36104E24C1F13AA1B79B38D02C46F0656FC7C4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GSW_FindItemIndex_mCAD2F658681A68B9285C2A4552406387EFD324A2_gshared (GSW_t1B36104E24C1F13AA1B79B38D02C46F0656FC7C4* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC7CE6D94112648D301AA3F68E7F8536FB8568478 GSW_GetEnumerator_m737EB08B5F7E79E306ACA0C2484A215BF304AF32_gshared (GSW_t1B36104E24C1F13AA1B79B38D02C46F0656FC7C4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GSW_Store_m7261BA892A37D36B7D097C836975A7EFAC43D227_gshared (GSW_t707226C8C18E35D611B512DB361D4FCC698EA58C* __this, FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706* ___0_set, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GSW_get_Count_m59CC5450DBB3116FE979B34BC2BE335366C4A26C_gshared (GSW_t707226C8C18E35D611B512DB361D4FCC698EA58C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GSW_get_Comparer_m07915B7FE8CB540FE0331CA12267BCA098E69415_gshared (GSW_t707226C8C18E35D611B512DB361D4FCC698EA58C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GSW_FindItemIndex_m2EA6641908617A8524180EDC9F77D47F85D5E115_gshared (GSW_t707226C8C18E35D611B512DB361D4FCC698EA58C* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC7CE6D94112648D301AA3F68E7F8536FB8568478 GSW_GetEnumerator_mB4FB39CB54FD1C9174DEA6697E8D80E9AAF476EC_gshared (GSW_t707226C8C18E35D611B512DB361D4FCC698EA58C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparer_1__ctor_m15D27727BD23D4B1743984704A4FD84E84A9BE40_gshared (Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* __this, const RuntimeMethod* method) ;

inline void FunctionPointer_1__ctor_mC619E78A7A6A909670DFFE07825842FDA7D178F7 (FunctionPointer_1_t45E67205E6D22523A4FEF46DC7A859C5C14566BA* __this, intptr_t ___0_ptr, const RuntimeMethod* method)
{
	((  void (*) (FunctionPointer_1_t45E67205E6D22523A4FEF46DC7A859C5C14566BA*, intptr_t, const RuntimeMethod*))FunctionPointer_1__ctor_mC619E78A7A6A909670DFFE07825842FDA7D178F7_gshared)(__this, ___0_ptr, method);
}
inline intptr_t FunctionPointer_1_get_Value_mA1F1CB8C8E8B4B8030D49BFBEF55560DEB03FDD5_inline (FunctionPointer_1_t45E67205E6D22523A4FEF46DC7A859C5C14566BA* __this, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (FunctionPointer_1_t45E67205E6D22523A4FEF46DC7A859C5C14566BA*, const RuntimeMethod*))FunctionPointer_1_get_Value_mA1F1CB8C8E8B4B8030D49BFBEF55560DEB03FDD5_gshared_inline)(__this, method);
}
inline bool FunctionPointer_1_get_IsCreated_mE896F8993D96765E8D0CE084A5FF954ADB82717C (FunctionPointer_1_t45E67205E6D22523A4FEF46DC7A859C5C14566BA* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (FunctionPointer_1_t45E67205E6D22523A4FEF46DC7A859C5C14566BA*, const RuntimeMethod*))FunctionPointer_1_get_IsCreated_mE896F8993D96765E8D0CE084A5FF954ADB82717C_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_mA41317A57F5C1C0E3F59C7EB25ABD484564B23D4 (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void FunctionPointer_1_CheckIsCreated_m5EF23B4472072E8D10170BEBDBCB2A0D870841F4 (FunctionPointer_1_t45E67205E6D22523A4FEF46DC7A859C5C14566BA* __this, const RuntimeMethod* method)
{
	((  void (*) (FunctionPointer_1_t45E67205E6D22523A4FEF46DC7A859C5C14566BA*, const RuntimeMethod*))FunctionPointer_1_CheckIsCreated_m5EF23B4472072E8D10170BEBDBCB2A0D870841F4_gshared)(__this, method);
}
inline void Marshal_GetDelegateForFunctionPointer_TisIl2CppFullySharedGenericAny_m67DB6027E8CD3914ED5B06FCF1CC232BE11A53EE (intptr_t ___0_ptr, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (intptr_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Marshal_GetDelegateForFunctionPointer_TisIl2CppFullySharedGenericAny_m67DB6027E8CD3914ED5B06FCF1CC232BE11A53EE_gshared)(___0_ptr, il2cppRetVal, method);
}
inline void FunctionPointer_1_get_Invoke_m552FD5AD590BE1F22C35842835DBC3FB96BACA44 (FunctionPointer_1_t45E67205E6D22523A4FEF46DC7A859C5C14566BA* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (FunctionPointer_1_t45E67205E6D22523A4FEF46DC7A859C5C14566BA*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))FunctionPointer_1_get_Invoke_m552FD5AD590BE1F22C35842835DBC3FB96BACA44_gshared)((FunctionPointer_1_t45E67205E6D22523A4FEF46DC7A859C5C14566BA*)__this, il2cppRetVal, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
inline RuntimeObject* FunctionPointer_1_Unity_Burst_IFunctionPointer_FromIntPtr_m83AC3B2AD9CD3551118A13B4D28B96ED0B293725 (FunctionPointer_1_t45E67205E6D22523A4FEF46DC7A859C5C14566BA* __this, intptr_t ___0_ptr, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (FunctionPointer_1_t45E67205E6D22523A4FEF46DC7A859C5C14566BA*, intptr_t, const RuntimeMethod*))FunctionPointer_1_Unity_Burst_IFunctionPointer_FromIntPtr_m83AC3B2AD9CD3551118A13B4D28B96ED0B293725_gshared)(__this, ___0_ptr, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
inline int32_t UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Utility_AllocateBuffer_m0A5BE820A8347EE554DAC72D6E235A49313D2342 (int32_t ___0_elementCount, int32_t ___1_elementStride, int32_t ___2_bufferFlags, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_FreeBuffer_m0E14FA612A7CFC491F826A295297E9EA45426C8E (intptr_t ___0_buffer, const RuntimeMethod* method) ;
inline void* NativeSliceUnsafeUtility_GetUnsafePtr_TisGfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C_m96BF1DA7D07BBC9CBB70382DC0B3582F3E927D38_inline (NativeSlice_1_t2584A7E323E2DAA0F082C26AD9D0DE0FC661F85F ___0_nativeSlice, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeSlice_1_t2584A7E323E2DAA0F082C26AD9D0DE0FC661F85F, const RuntimeMethod*))NativeSliceUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m051D495AEDE8F8F98AF26E7709F9873DF4926036_gshared_inline)(___0_nativeSlice, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline (intptr_t* __this, void* ___0_value, const RuntimeMethod* method) ;
inline int32_t NativeSlice_1_get_Length_m9C484E0369ADC54B05A3EE2B955EF908A81AB4D3_inline (NativeSlice_1_t2584A7E323E2DAA0F082C26AD9D0DE0FC661F85F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeSlice_1_t2584A7E323E2DAA0F082C26AD9D0DE0FC661F85F*, const RuntimeMethod*))NativeSlice_1_get_Length_m0225CA0944599882AC9C2A06A99FDC685362AFBE_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_UpdateBufferRanges_m36DFDDDAC956CE43D560D87B3912EE87F95A59F1 (intptr_t ___0_buffer, intptr_t ___1_ranges, int32_t ___2_rangeCount, int32_t ___3_writeRangeStart, int32_t ___4_writeRangeEnd, const RuntimeMethod* method) ;
inline NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 GPUInstanceDataBufferReadback_1_get_data_m85A66715F31C0E08C13BA9C091BE27292CEAFA28_inline (GPUInstanceDataBufferReadback_1_t5AE9021A468A030012E49A0B36B7A5A237D5BDA0* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (GPUInstanceDataBufferReadback_1_t5AE9021A468A030012E49A0B36B7A5A237D5BDA0*, const RuntimeMethod*))GPUInstanceDataBufferReadback_1_get_data_m85A66715F31C0E08C13BA9C091BE27292CEAFA28_gshared_inline)(__this, method);
}
inline void GPUInstanceDataBufferReadback_1_set_data_m7113F6AA3060BFE24F83C25673C2F5D85A7092A7_inline (GPUInstanceDataBufferReadback_1_t5AE9021A468A030012E49A0B36B7A5A237D5BDA0* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_value, const RuntimeMethod* method)
{
	((  void (*) (GPUInstanceDataBufferReadback_1_t5AE9021A468A030012E49A0B36B7A5A237D5BDA0*, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))GPUInstanceDataBufferReadback_1_set_data_m7113F6AA3060BFE24F83C25673C2F5D85A7092A7_gshared_inline)(__this, ___0_value, method);
}
inline void U3CU3Ec__DisplayClass5_0__ctor_mD8A37C2265383249A912AA4859430FB3DDEF3B80 (U3CU3Ec__DisplayClass5_0_t5B92A45B3E3A5C4A1EE7E006EAD8809BB6DB4DAB* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CU3Ec__DisplayClass5_0_t5B92A45B3E3A5C4A1EE7E006EAD8809BB6DB4DAB*, const RuntimeMethod*))U3CU3Ec__DisplayClass5_0__ctor_mD8A37C2265383249A912AA4859430FB3DDEF3B80_gshared)(__this, method);
}
inline void Assert_IsNotNull_TisGPUInstanceDataBuffer_tAF2FDE10337956B935AE0961BAB4F5A4E534ACF3_mE51594C6431F3FDB140691B45C91F04466FB8665 (GPUInstanceDataBuffer_tAF2FDE10337956B935AE0961BAB4F5A4E534ACF3* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (GPUInstanceDataBuffer_tAF2FDE10337956B935AE0961BAB4F5A4E534ACF3*, const RuntimeMethod*))Assert_IsNotNull_TisIl2CppSharedGenericObject_m0A85585E00CD4BC9B649E72630F685A145E90765_gshared)(___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GPUInstanceDataBuffer_get_gpuBufferByteSize_m627270DF33D9DCE44838EC037A0F130F42A47C53 (GPUInstanceDataBuffer_tAF2FDE10337956B935AE0961BAB4F5A4E534ACF3* __this, const RuntimeMethod* method) ;
inline void NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1 (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* GPUInstanceDataBuffer_get_nativeBuffer_m743B9C8584A049A262CF7217AC56235D284E9CB9 (GPUInstanceDataBuffer_tAF2FDE10337956B935AE0961BAB4F5A4E534ACF3* __this, const RuntimeMethod* method) ;
inline void Action_1__ctor_m347338A163A1A0840FA150F7ACCC029D46339777 (Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m685A441EC9FAC9D554B26FA83A08F4BEF96DFF0E_gshared)(__this, ___0_object, ___1_method, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_RequestAsyncReadback_m36C21893D46947FBB81D4E9DB62255C78F02D1C6 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* ___0_src, Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* ___1_callback, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_WaitAllAsyncReadbackRequests_m6585A039EF9132447EDDA66336D4D37B9E209B1C (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_ExecuteCommandBuffer_mE7D922583404AB08A25C1413A3EA9F6B0D2F16B9 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___0_buffer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_Clear_m4E1272BD1A0C162C9C26434E115279F42FA557C7 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
inline bool GPUInstanceDataBufferReadback_1_Load_m83665036757894EC4D0B5D980D0BAC425A5B7267 (GPUInstanceDataBufferReadback_1_t5AE9021A468A030012E49A0B36B7A5A237D5BDA0* __this, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___0_cmd, GPUInstanceDataBuffer_tAF2FDE10337956B935AE0961BAB4F5A4E534ACF3* ___1_instanceDataBuffer, const RuntimeMethod* method)
{
	return ((  bool (*) (GPUInstanceDataBufferReadback_1_t5AE9021A468A030012E49A0B36B7A5A237D5BDA0*, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7*, GPUInstanceDataBuffer_tAF2FDE10337956B935AE0961BAB4F5A4E534ACF3*, const RuntimeMethod*))GPUInstanceDataBufferReadback_1_Load_m83665036757894EC4D0B5D980D0BAC425A5B7267_gshared)(__this, ___0_cmd, ___1_instanceDataBuffer, method);
}
inline void NativeArray_1_Dispose_m365A262FA4CA431467F021D7732CECD68316AF80 (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))NativeArray_1_Dispose_m365A262FA4CA431467F021D7732CECD68316AF80_gshared)(__this, method);
}
inline void GPUInstanceDataBufferReadback_1_Dispose_m14D34F06B04E86E7F723BB4D560AB33AEE47E916 (GPUInstanceDataBufferReadback_1_t5AE9021A468A030012E49A0B36B7A5A237D5BDA0* __this, const RuntimeMethod* method)
{
	((  void (*) (GPUInstanceDataBufferReadback_1_t5AE9021A468A030012E49A0B36B7A5A237D5BDA0*, const RuntimeMethod*))GPUInstanceDataBufferReadback_1_Dispose_m14D34F06B04E86E7F723BB4D560AB33AEE47E916_gshared)(__this, method);
}
inline void GSW_Store_m5C96193E5808DA834C51975EF38EB97088394A41 (GSW_tF00D1E09805DA6E6A35E624A37C83A4D2DFEF7AD* __this, FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706* ___0_set, const RuntimeMethod* method)
{
	((  void (*) (GSW_tF00D1E09805DA6E6A35E624A37C83A4D2DFEF7AD*, FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706*, const RuntimeMethod*))GSW_Store_m5C96193E5808DA834C51975EF38EB97088394A41_gshared)(__this, ___0_set, method);
}
inline int32_t FrozenSet_1_get_Count_m0D2127C8451374E476181921F2456602820A3A1F (FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706*, const RuntimeMethod*))FrozenSet_1_get_Count_m0D2127C8451374E476181921F2456602820A3A1F_gshared)(__this, method);
}
inline int32_t GSW_get_Count_mC03F2D9BF8EAF4DB416D989990591F436AF9B278 (GSW_tF00D1E09805DA6E6A35E624A37C83A4D2DFEF7AD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (GSW_tF00D1E09805DA6E6A35E624A37C83A4D2DFEF7AD*, const RuntimeMethod*))GSW_get_Count_mC03F2D9BF8EAF4DB416D989990591F436AF9B278_gshared)(__this, method);
}
inline RuntimeObject* FrozenSet_1_get_Comparer_mB3265D335E5104BC225CEFFFED328ACA8FC573D0_inline (FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706*, const RuntimeMethod*))FrozenSet_1_get_Comparer_mB3265D335E5104BC225CEFFFED328ACA8FC573D0_gshared_inline)(__this, method);
}
inline RuntimeObject* GSW_get_Comparer_mC872C97392B1D99A688FC67E8A09C00368FB91B7 (GSW_tF00D1E09805DA6E6A35E624A37C83A4D2DFEF7AD* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (GSW_tF00D1E09805DA6E6A35E624A37C83A4D2DFEF7AD*, const RuntimeMethod*))GSW_get_Comparer_mC872C97392B1D99A688FC67E8A09C00368FB91B7_gshared)(__this, method);
}
inline int32_t GSW_FindItemIndex_m1C6EE5B798AB350CAFDC33DB297B123C9766DD69 (GSW_tF00D1E09805DA6E6A35E624A37C83A4D2DFEF7AD* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (GSW_tF00D1E09805DA6E6A35E624A37C83A4D2DFEF7AD*, Il2CppFullySharedGenericAny, const RuntimeMethod*))GSW_FindItemIndex_m1C6EE5B798AB350CAFDC33DB297B123C9766DD69_gshared)((GSW_tF00D1E09805DA6E6A35E624A37C83A4D2DFEF7AD*)__this, ___0_item, method);
}
inline Enumerator_tC7CE6D94112648D301AA3F68E7F8536FB8568478 FrozenSet_1_GetEnumerator_m1429D218A6E8178BA2DFC3FF6C682AABD7F16298 (FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tC7CE6D94112648D301AA3F68E7F8536FB8568478 (*) (FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706*, const RuntimeMethod*))FrozenSet_1_GetEnumerator_m1429D218A6E8178BA2DFC3FF6C682AABD7F16298_gshared)(__this, method);
}
inline Enumerator_tC7CE6D94112648D301AA3F68E7F8536FB8568478 GSW_GetEnumerator_mB4F247AC50045D87162A79E50A0B7DDDA1A12F1C (GSW_tF00D1E09805DA6E6A35E624A37C83A4D2DFEF7AD* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tC7CE6D94112648D301AA3F68E7F8536FB8568478 (*) (GSW_tF00D1E09805DA6E6A35E624A37C83A4D2DFEF7AD*, const RuntimeMethod*))GSW_GetEnumerator_mB4F247AC50045D87162A79E50A0B7DDDA1A12F1C_gshared)(__this, method);
}
inline void GSW_Store_mA0438D7D417BB9247888183584AA4B46F3F4E218 (GSW_t8857BC3AB3D15845559E0D3C6B8BC34AD8E0D2F9* __this, FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706* ___0_set, const RuntimeMethod* method)
{
	((  void (*) (GSW_t8857BC3AB3D15845559E0D3C6B8BC34AD8E0D2F9*, FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706*, const RuntimeMethod*))GSW_Store_mA0438D7D417BB9247888183584AA4B46F3F4E218_gshared)(__this, ___0_set, method);
}
inline int32_t GSW_get_Count_m64C160237F8CCF96A831A1244AD4CAC1CEFB9107 (GSW_t8857BC3AB3D15845559E0D3C6B8BC34AD8E0D2F9* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (GSW_t8857BC3AB3D15845559E0D3C6B8BC34AD8E0D2F9*, const RuntimeMethod*))GSW_get_Count_m64C160237F8CCF96A831A1244AD4CAC1CEFB9107_gshared)(__this, method);
}
inline RuntimeObject* GSW_get_Comparer_mF5C268881C1C4C117EB6E126AE72BB17D2E88FDD (GSW_t8857BC3AB3D15845559E0D3C6B8BC34AD8E0D2F9* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (GSW_t8857BC3AB3D15845559E0D3C6B8BC34AD8E0D2F9*, const RuntimeMethod*))GSW_get_Comparer_mF5C268881C1C4C117EB6E126AE72BB17D2E88FDD_gshared)(__this, method);
}
inline int32_t GSW_FindItemIndex_mB6835BE23F9161DC6D08087B5163DCE27724D190 (GSW_t8857BC3AB3D15845559E0D3C6B8BC34AD8E0D2F9* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (GSW_t8857BC3AB3D15845559E0D3C6B8BC34AD8E0D2F9*, Il2CppFullySharedGenericAny, const RuntimeMethod*))GSW_FindItemIndex_mB6835BE23F9161DC6D08087B5163DCE27724D190_gshared)((GSW_t8857BC3AB3D15845559E0D3C6B8BC34AD8E0D2F9*)__this, ___0_item, method);
}
inline Enumerator_tC7CE6D94112648D301AA3F68E7F8536FB8568478 GSW_GetEnumerator_m04C241556FF7339B46570454360608449EC1EE58 (GSW_t8857BC3AB3D15845559E0D3C6B8BC34AD8E0D2F9* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tC7CE6D94112648D301AA3F68E7F8536FB8568478 (*) (GSW_t8857BC3AB3D15845559E0D3C6B8BC34AD8E0D2F9*, const RuntimeMethod*))GSW_GetEnumerator_m04C241556FF7339B46570454360608449EC1EE58_gshared)(__this, method);
}
inline void GSW_Store_m9B85695CF374CDEB837F12D3C7EFC87B60FD7203 (GSW_t0061A262D104F67CF731EDF5CDA9676416DB8031* __this, FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706* ___0_set, const RuntimeMethod* method)
{
	((  void (*) (GSW_t0061A262D104F67CF731EDF5CDA9676416DB8031*, FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706*, const RuntimeMethod*))GSW_Store_m9B85695CF374CDEB837F12D3C7EFC87B60FD7203_gshared)(__this, ___0_set, method);
}
inline int32_t GSW_get_Count_m34188F8B4E9BCFC8990F10F2669CB5FFEEC89C86 (GSW_t0061A262D104F67CF731EDF5CDA9676416DB8031* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (GSW_t0061A262D104F67CF731EDF5CDA9676416DB8031*, const RuntimeMethod*))GSW_get_Count_m34188F8B4E9BCFC8990F10F2669CB5FFEEC89C86_gshared)(__this, method);
}
inline RuntimeObject* GSW_get_Comparer_m5BB61F05EE055B6AD0E453DE0B3D64709A62143C (GSW_t0061A262D104F67CF731EDF5CDA9676416DB8031* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (GSW_t0061A262D104F67CF731EDF5CDA9676416DB8031*, const RuntimeMethod*))GSW_get_Comparer_m5BB61F05EE055B6AD0E453DE0B3D64709A62143C_gshared)(__this, method);
}
inline int32_t GSW_FindItemIndex_m3E0A9DCA4784E563ECEB2273E199E47514BDE079 (GSW_t0061A262D104F67CF731EDF5CDA9676416DB8031* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (GSW_t0061A262D104F67CF731EDF5CDA9676416DB8031*, Il2CppFullySharedGenericAny, const RuntimeMethod*))GSW_FindItemIndex_m3E0A9DCA4784E563ECEB2273E199E47514BDE079_gshared)((GSW_t0061A262D104F67CF731EDF5CDA9676416DB8031*)__this, ___0_item, method);
}
inline Enumerator_tC7CE6D94112648D301AA3F68E7F8536FB8568478 GSW_GetEnumerator_m0B357B4DFDD6B7F84BD688B6823B940B7487DE6A (GSW_t0061A262D104F67CF731EDF5CDA9676416DB8031* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tC7CE6D94112648D301AA3F68E7F8536FB8568478 (*) (GSW_t0061A262D104F67CF731EDF5CDA9676416DB8031*, const RuntimeMethod*))GSW_GetEnumerator_m0B357B4DFDD6B7F84BD688B6823B940B7487DE6A_gshared)(__this, method);
}
inline void GSW_Store_m03EC86FC485B8E1F9D7346591C2531D1D302605D (GSW_t1B36104E24C1F13AA1B79B38D02C46F0656FC7C4* __this, FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706* ___0_set, const RuntimeMethod* method)
{
	((  void (*) (GSW_t1B36104E24C1F13AA1B79B38D02C46F0656FC7C4*, FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706*, const RuntimeMethod*))GSW_Store_m03EC86FC485B8E1F9D7346591C2531D1D302605D_gshared)(__this, ___0_set, method);
}
inline int32_t GSW_get_Count_m13CA3ED532BF5053A42B7177E6B3318FC03FAC5F (GSW_t1B36104E24C1F13AA1B79B38D02C46F0656FC7C4* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (GSW_t1B36104E24C1F13AA1B79B38D02C46F0656FC7C4*, const RuntimeMethod*))GSW_get_Count_m13CA3ED532BF5053A42B7177E6B3318FC03FAC5F_gshared)(__this, method);
}
inline RuntimeObject* GSW_get_Comparer_m82013CBE6F3EBE379B22BFFBF8C31218502B9EBC (GSW_t1B36104E24C1F13AA1B79B38D02C46F0656FC7C4* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (GSW_t1B36104E24C1F13AA1B79B38D02C46F0656FC7C4*, const RuntimeMethod*))GSW_get_Comparer_m82013CBE6F3EBE379B22BFFBF8C31218502B9EBC_gshared)(__this, method);
}
inline int32_t GSW_FindItemIndex_mCAD2F658681A68B9285C2A4552406387EFD324A2 (GSW_t1B36104E24C1F13AA1B79B38D02C46F0656FC7C4* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (GSW_t1B36104E24C1F13AA1B79B38D02C46F0656FC7C4*, Il2CppFullySharedGenericAny, const RuntimeMethod*))GSW_FindItemIndex_mCAD2F658681A68B9285C2A4552406387EFD324A2_gshared)((GSW_t1B36104E24C1F13AA1B79B38D02C46F0656FC7C4*)__this, ___0_item, method);
}
inline Enumerator_tC7CE6D94112648D301AA3F68E7F8536FB8568478 GSW_GetEnumerator_m737EB08B5F7E79E306ACA0C2484A215BF304AF32 (GSW_t1B36104E24C1F13AA1B79B38D02C46F0656FC7C4* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tC7CE6D94112648D301AA3F68E7F8536FB8568478 (*) (GSW_t1B36104E24C1F13AA1B79B38D02C46F0656FC7C4*, const RuntimeMethod*))GSW_GetEnumerator_m737EB08B5F7E79E306ACA0C2484A215BF304AF32_gshared)(__this, method);
}
inline void GSW_Store_m7261BA892A37D36B7D097C836975A7EFAC43D227 (GSW_t707226C8C18E35D611B512DB361D4FCC698EA58C* __this, FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706* ___0_set, const RuntimeMethod* method)
{
	((  void (*) (GSW_t707226C8C18E35D611B512DB361D4FCC698EA58C*, FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706*, const RuntimeMethod*))GSW_Store_m7261BA892A37D36B7D097C836975A7EFAC43D227_gshared)(__this, ___0_set, method);
}
inline int32_t GSW_get_Count_m59CC5450DBB3116FE979B34BC2BE335366C4A26C (GSW_t707226C8C18E35D611B512DB361D4FCC698EA58C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (GSW_t707226C8C18E35D611B512DB361D4FCC698EA58C*, const RuntimeMethod*))GSW_get_Count_m59CC5450DBB3116FE979B34BC2BE335366C4A26C_gshared)(__this, method);
}
inline RuntimeObject* GSW_get_Comparer_m07915B7FE8CB540FE0331CA12267BCA098E69415 (GSW_t707226C8C18E35D611B512DB361D4FCC698EA58C* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (GSW_t707226C8C18E35D611B512DB361D4FCC698EA58C*, const RuntimeMethod*))GSW_get_Comparer_m07915B7FE8CB540FE0331CA12267BCA098E69415_gshared)(__this, method);
}
inline int32_t GSW_FindItemIndex_m2EA6641908617A8524180EDC9F77D47F85D5E115 (GSW_t707226C8C18E35D611B512DB361D4FCC698EA58C* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (GSW_t707226C8C18E35D611B512DB361D4FCC698EA58C*, Il2CppFullySharedGenericAny, const RuntimeMethod*))GSW_FindItemIndex_m2EA6641908617A8524180EDC9F77D47F85D5E115_gshared)((GSW_t707226C8C18E35D611B512DB361D4FCC698EA58C*)__this, ___0_item, method);
}
inline Enumerator_tC7CE6D94112648D301AA3F68E7F8536FB8568478 GSW_GetEnumerator_mB4FB39CB54FD1C9174DEA6697E8D80E9AAF476EC (GSW_t707226C8C18E35D611B512DB361D4FCC698EA58C* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tC7CE6D94112648D301AA3F68E7F8536FB8568478 (*) (GSW_t707226C8C18E35D611B512DB361D4FCC698EA58C*, const RuntimeMethod*))GSW_GetEnumerator_mB4FB39CB54FD1C9174DEA6697E8D80E9AAF476EC_gshared)(__this, method);
}
inline void Comparer_1__ctor_m15D27727BD23D4B1743984704A4FD84E84A9BE40 (Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* __this, const RuntimeMethod* method)
{
	((  void (*) (Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB*, const RuntimeMethod*))Comparer_1__ctor_m15D27727BD23D4B1743984704A4FD84E84A9BE40_gshared)(__this, method);
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
void Func_3_Invoke_mFEC7D2DE808B65D9CFE03D0A140F1271C94E972C_Multicast(Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4* currentDelegate = reinterpret_cast<Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_arg1, ___1_arg2, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void Func_3_Invoke_mFEC7D2DE808B65D9CFE03D0A140F1271C94E972C_OpenStaticInvoker(Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker3< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, ___0_arg1, ___1_arg2, il2cppRetVal);
}
void Func_3_Invoke_mFEC7D2DE808B65D9CFE03D0A140F1271C94E972C_ClosedStaticInvoker(Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, __this->___m_target, ___0_arg1, ___1_arg2, il2cppRetVal);
}
void Func_3_Invoke_mFEC7D2DE808B65D9CFE03D0A140F1271C94E972C_ClosedInstInvoker(Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker3< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, __this->___m_target, ___0_arg1, ___1_arg2, il2cppRetVal);
}
void Func_3_Invoke_mFEC7D2DE808B65D9CFE03D0A140F1271C94E972C_OpenInstInvoker(Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, ___0_arg1, ___1_arg2, il2cppRetVal);
}
void Func_3_Invoke_mFEC7D2DE808B65D9CFE03D0A140F1271C94E972C_OpenVirtualInvoker(Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	VirtualActionInvoker2Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_method_get_slot(method), (RuntimeObject*)___0_arg1, ___1_arg2, il2cppRetVal);
}
void Func_3_Invoke_mFEC7D2DE808B65D9CFE03D0A140F1271C94E972C_OpenInterfaceInvoker(Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	InterfaceActionInvoker2Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), (RuntimeObject*)___0_arg1, ___1_arg2, il2cppRetVal);
}
void Func_3_Invoke_mFEC7D2DE808B65D9CFE03D0A140F1271C94E972C_OpenGenericVirtualInvoker(Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	GenericVirtualActionInvoker2Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(method, (RuntimeObject*)___0_arg1, ___1_arg2, il2cppRetVal);
}
void Func_3_Invoke_mFEC7D2DE808B65D9CFE03D0A140F1271C94E972C_OpenGenericInterfaceInvoker(Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	GenericInterfaceActionInvoker2Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(method, (RuntimeObject*)___0_arg1, ___1_arg2, il2cppRetVal);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_3__ctor_m3D53118DAA71CFFC80A4B21073B54F3C4EFA1C68_gshared (Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
			__this->___invoke_impl = (intptr_t)&Func_3_Invoke_mFEC7D2DE808B65D9CFE03D0A140F1271C94E972C_OpenStaticInvoker;
		else
			__this->___invoke_impl = (intptr_t)&Func_3_Invoke_mFEC7D2DE808B65D9CFE03D0A140F1271C94E972C_ClosedStaticInvoker;
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
						__this->___invoke_impl = (intptr_t)&Func_3_Invoke_mFEC7D2DE808B65D9CFE03D0A140F1271C94E972C_OpenGenericInterfaceInvoker;
					else
						__this->___invoke_impl = (intptr_t)&Func_3_Invoke_mFEC7D2DE808B65D9CFE03D0A140F1271C94E972C_OpenGenericVirtualInvoker;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&Func_3_Invoke_mFEC7D2DE808B65D9CFE03D0A140F1271C94E972C_OpenInterfaceInvoker;
					else
						__this->___invoke_impl = (intptr_t)&Func_3_Invoke_mFEC7D2DE808B65D9CFE03D0A140F1271C94E972C_OpenVirtualInvoker;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&Func_3_Invoke_mFEC7D2DE808B65D9CFE03D0A140F1271C94E972C_OpenInstInvoker;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = (intptr_t)&Func_3_Invoke_mFEC7D2DE808B65D9CFE03D0A140F1271C94E972C_ClosedInstInvoker;
		}
	}
	__this->___extra_arg = (intptr_t)&Func_3_Invoke_mFEC7D2DE808B65D9CFE03D0A140F1271C94E972C_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_3_Invoke_mFEC7D2DE808B65D9CFE03D0A140F1271C94E972C_gshared (Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(__this->___method));
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
void Func_4_Invoke_m60FA7E1FAE630870F8DDC50F1E5D55AFA99FD249_Multicast(Func_4_t572D62CCA845BDAD9BC3ABCD839C1AE78144D079* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Func_4_t572D62CCA845BDAD9BC3ABCD839C1AE78144D079* currentDelegate = reinterpret_cast<Func_4_t572D62CCA845BDAD9BC3ABCD839C1AE78144D079*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_arg1, ___1_arg2, ___2_arg3, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void Func_4_Invoke_m60FA7E1FAE630870F8DDC50F1E5D55AFA99FD249_OpenStaticInvoker(Func_4_t572D62CCA845BDAD9BC3ABCD839C1AE78144D079* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker4< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, ___0_arg1, ___1_arg2, ___2_arg3, il2cppRetVal);
}
void Func_4_Invoke_m60FA7E1FAE630870F8DDC50F1E5D55AFA99FD249_ClosedStaticInvoker(Func_4_t572D62CCA845BDAD9BC3ABCD839C1AE78144D079* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker5< RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, __this->___m_target, ___0_arg1, ___1_arg2, ___2_arg3, il2cppRetVal);
}
void Func_4_Invoke_m60FA7E1FAE630870F8DDC50F1E5D55AFA99FD249_ClosedInstInvoker(Func_4_t572D62CCA845BDAD9BC3ABCD839C1AE78144D079* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker4< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, __this->___m_target, ___0_arg1, ___1_arg2, ___2_arg3, il2cppRetVal);
}
void Func_4_Invoke_m60FA7E1FAE630870F8DDC50F1E5D55AFA99FD249_OpenInstInvoker(Func_4_t572D62CCA845BDAD9BC3ABCD839C1AE78144D079* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	InvokerActionInvoker3< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, ___0_arg1, ___1_arg2, ___2_arg3, il2cppRetVal);
}
void Func_4_Invoke_m60FA7E1FAE630870F8DDC50F1E5D55AFA99FD249_OpenVirtualInvoker(Func_4_t572D62CCA845BDAD9BC3ABCD839C1AE78144D079* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	VirtualActionInvoker3Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_method_get_slot(method), (RuntimeObject*)___0_arg1, ___1_arg2, ___2_arg3, il2cppRetVal);
}
void Func_4_Invoke_m60FA7E1FAE630870F8DDC50F1E5D55AFA99FD249_OpenInterfaceInvoker(Func_4_t572D62CCA845BDAD9BC3ABCD839C1AE78144D079* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	InterfaceActionInvoker3Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), (RuntimeObject*)___0_arg1, ___1_arg2, ___2_arg3, il2cppRetVal);
}
void Func_4_Invoke_m60FA7E1FAE630870F8DDC50F1E5D55AFA99FD249_OpenGenericVirtualInvoker(Func_4_t572D62CCA845BDAD9BC3ABCD839C1AE78144D079* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	GenericVirtualActionInvoker3Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(method, (RuntimeObject*)___0_arg1, ___1_arg2, ___2_arg3, il2cppRetVal);
}
void Func_4_Invoke_m60FA7E1FAE630870F8DDC50F1E5D55AFA99FD249_OpenGenericInterfaceInvoker(Func_4_t572D62CCA845BDAD9BC3ABCD839C1AE78144D079* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	GenericInterfaceActionInvoker3Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(method, (RuntimeObject*)___0_arg1, ___1_arg2, ___2_arg3, il2cppRetVal);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_4__ctor_mBBC8F424C8EFF3F35CA9B3557CC2E8C06CAAA249_gshared (Func_4_t572D62CCA845BDAD9BC3ABCD839C1AE78144D079* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&Func_4_Invoke_m60FA7E1FAE630870F8DDC50F1E5D55AFA99FD249_OpenStaticInvoker;
		else
			__this->___invoke_impl = (intptr_t)&Func_4_Invoke_m60FA7E1FAE630870F8DDC50F1E5D55AFA99FD249_ClosedStaticInvoker;
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&Func_4_Invoke_m60FA7E1FAE630870F8DDC50F1E5D55AFA99FD249_OpenGenericInterfaceInvoker;
					else
						__this->___invoke_impl = (intptr_t)&Func_4_Invoke_m60FA7E1FAE630870F8DDC50F1E5D55AFA99FD249_OpenGenericVirtualInvoker;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&Func_4_Invoke_m60FA7E1FAE630870F8DDC50F1E5D55AFA99FD249_OpenInterfaceInvoker;
					else
						__this->___invoke_impl = (intptr_t)&Func_4_Invoke_m60FA7E1FAE630870F8DDC50F1E5D55AFA99FD249_OpenVirtualInvoker;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&Func_4_Invoke_m60FA7E1FAE630870F8DDC50F1E5D55AFA99FD249_OpenInstInvoker;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = (intptr_t)&Func_4_Invoke_m60FA7E1FAE630870F8DDC50F1E5D55AFA99FD249_ClosedInstInvoker;
		}
	}
	__this->___extra_arg = (intptr_t)&Func_4_Invoke_m60FA7E1FAE630870F8DDC50F1E5D55AFA99FD249_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_4_Invoke_m60FA7E1FAE630870F8DDC50F1E5D55AFA99FD249_gshared (Func_4_t572D62CCA845BDAD9BC3ABCD839C1AE78144D079* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, ___2_arg3, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(__this->___method));
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
void Func_5_Invoke_mC05570EABD976522EEE513938C4FC94F0B8FB1B2_Multicast(Func_5_tB069B44093DF1EBDA5245A604B7AD60C4B638397* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Func_5_tB069B44093DF1EBDA5245A604B7AD60C4B638397* currentDelegate = reinterpret_cast<Func_5_tB069B44093DF1EBDA5245A604B7AD60C4B638397*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void Func_5_Invoke_mC05570EABD976522EEE513938C4FC94F0B8FB1B2_OpenStaticInvoker(Func_5_tB069B44093DF1EBDA5245A604B7AD60C4B638397* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker5< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, il2cppRetVal);
}
void Func_5_Invoke_mC05570EABD976522EEE513938C4FC94F0B8FB1B2_ClosedStaticInvoker(Func_5_tB069B44093DF1EBDA5245A604B7AD60C4B638397* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker6< RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, __this->___m_target, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, il2cppRetVal);
}
void Func_5_Invoke_mC05570EABD976522EEE513938C4FC94F0B8FB1B2_ClosedInstInvoker(Func_5_tB069B44093DF1EBDA5245A604B7AD60C4B638397* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker5< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, __this->___m_target, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, il2cppRetVal);
}
void Func_5_Invoke_mC05570EABD976522EEE513938C4FC94F0B8FB1B2_OpenInstInvoker(Func_5_tB069B44093DF1EBDA5245A604B7AD60C4B638397* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	InvokerActionInvoker4< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, il2cppRetVal);
}
void Func_5_Invoke_mC05570EABD976522EEE513938C4FC94F0B8FB1B2_OpenVirtualInvoker(Func_5_tB069B44093DF1EBDA5245A604B7AD60C4B638397* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	VirtualActionInvoker4Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_method_get_slot(method), (RuntimeObject*)___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, il2cppRetVal);
}
void Func_5_Invoke_mC05570EABD976522EEE513938C4FC94F0B8FB1B2_OpenInterfaceInvoker(Func_5_tB069B44093DF1EBDA5245A604B7AD60C4B638397* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	InterfaceActionInvoker4Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), (RuntimeObject*)___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, il2cppRetVal);
}
void Func_5_Invoke_mC05570EABD976522EEE513938C4FC94F0B8FB1B2_OpenGenericVirtualInvoker(Func_5_tB069B44093DF1EBDA5245A604B7AD60C4B638397* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	GenericVirtualActionInvoker4Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(method, (RuntimeObject*)___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, il2cppRetVal);
}
void Func_5_Invoke_mC05570EABD976522EEE513938C4FC94F0B8FB1B2_OpenGenericInterfaceInvoker(Func_5_tB069B44093DF1EBDA5245A604B7AD60C4B638397* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	GenericInterfaceActionInvoker4Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(method, (RuntimeObject*)___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, il2cppRetVal);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_5__ctor_m75692E25A17895B4B3B9CA180C9A1DDE53F5FC22_gshared (Func_5_tB069B44093DF1EBDA5245A604B7AD60C4B638397* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 4;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&Func_5_Invoke_mC05570EABD976522EEE513938C4FC94F0B8FB1B2_OpenStaticInvoker;
		else
			__this->___invoke_impl = (intptr_t)&Func_5_Invoke_mC05570EABD976522EEE513938C4FC94F0B8FB1B2_ClosedStaticInvoker;
	}
	else
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&Func_5_Invoke_mC05570EABD976522EEE513938C4FC94F0B8FB1B2_OpenGenericInterfaceInvoker;
					else
						__this->___invoke_impl = (intptr_t)&Func_5_Invoke_mC05570EABD976522EEE513938C4FC94F0B8FB1B2_OpenGenericVirtualInvoker;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&Func_5_Invoke_mC05570EABD976522EEE513938C4FC94F0B8FB1B2_OpenInterfaceInvoker;
					else
						__this->___invoke_impl = (intptr_t)&Func_5_Invoke_mC05570EABD976522EEE513938C4FC94F0B8FB1B2_OpenVirtualInvoker;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&Func_5_Invoke_mC05570EABD976522EEE513938C4FC94F0B8FB1B2_OpenInstInvoker;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = (intptr_t)&Func_5_Invoke_mC05570EABD976522EEE513938C4FC94F0B8FB1B2_ClosedInstInvoker;
		}
	}
	__this->___extra_arg = (intptr_t)&Func_5_Invoke_mC05570EABD976522EEE513938C4FC94F0B8FB1B2_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_5_Invoke_mC05570EABD976522EEE513938C4FC94F0B8FB1B2_gshared (Func_5_tB069B44093DF1EBDA5245A604B7AD60C4B638397* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void Func_6_Invoke_m65E176783831465A0BF56196A4AC00E1437C41B3_Multicast(Func_6_tF0A0CA0D64145FD856F53441697B240796CBF320* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Func_6_tF0A0CA0D64145FD856F53441697B240796CBF320* currentDelegate = reinterpret_cast<Func_6_tF0A0CA0D64145FD856F53441697B240796CBF320*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void Func_6_Invoke_m65E176783831465A0BF56196A4AC00E1437C41B3_OpenStaticInvoker(Func_6_tF0A0CA0D64145FD856F53441697B240796CBF320* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker6< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, il2cppRetVal);
}
void Func_6_Invoke_m65E176783831465A0BF56196A4AC00E1437C41B3_ClosedStaticInvoker(Func_6_tF0A0CA0D64145FD856F53441697B240796CBF320* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker7< RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, __this->___m_target, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, il2cppRetVal);
}
void Func_6_Invoke_m65E176783831465A0BF56196A4AC00E1437C41B3_ClosedInstInvoker(Func_6_tF0A0CA0D64145FD856F53441697B240796CBF320* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker6< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, __this->___m_target, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, il2cppRetVal);
}
void Func_6_Invoke_m65E176783831465A0BF56196A4AC00E1437C41B3_OpenInstInvoker(Func_6_tF0A0CA0D64145FD856F53441697B240796CBF320* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	InvokerActionInvoker5< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, il2cppRetVal);
}
void Func_6_Invoke_m65E176783831465A0BF56196A4AC00E1437C41B3_OpenVirtualInvoker(Func_6_tF0A0CA0D64145FD856F53441697B240796CBF320* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	VirtualActionInvoker5Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_method_get_slot(method), (RuntimeObject*)___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, il2cppRetVal);
}
void Func_6_Invoke_m65E176783831465A0BF56196A4AC00E1437C41B3_OpenInterfaceInvoker(Func_6_tF0A0CA0D64145FD856F53441697B240796CBF320* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	InterfaceActionInvoker5Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), (RuntimeObject*)___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, il2cppRetVal);
}
void Func_6_Invoke_m65E176783831465A0BF56196A4AC00E1437C41B3_OpenGenericVirtualInvoker(Func_6_tF0A0CA0D64145FD856F53441697B240796CBF320* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	GenericVirtualActionInvoker5Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(method, (RuntimeObject*)___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, il2cppRetVal);
}
void Func_6_Invoke_m65E176783831465A0BF56196A4AC00E1437C41B3_OpenGenericInterfaceInvoker(Func_6_tF0A0CA0D64145FD856F53441697B240796CBF320* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	GenericInterfaceActionInvoker5Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(method, (RuntimeObject*)___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, il2cppRetVal);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_6__ctor_m734165901425BCBC8155BB185630540AB6DA12F8_gshared (Func_6_tF0A0CA0D64145FD856F53441697B240796CBF320* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 5;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&Func_6_Invoke_m65E176783831465A0BF56196A4AC00E1437C41B3_OpenStaticInvoker;
		else
			__this->___invoke_impl = (intptr_t)&Func_6_Invoke_m65E176783831465A0BF56196A4AC00E1437C41B3_ClosedStaticInvoker;
	}
	else
	{
		bool isOpen = parameterCount == 4;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&Func_6_Invoke_m65E176783831465A0BF56196A4AC00E1437C41B3_OpenGenericInterfaceInvoker;
					else
						__this->___invoke_impl = (intptr_t)&Func_6_Invoke_m65E176783831465A0BF56196A4AC00E1437C41B3_OpenGenericVirtualInvoker;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&Func_6_Invoke_m65E176783831465A0BF56196A4AC00E1437C41B3_OpenInterfaceInvoker;
					else
						__this->___invoke_impl = (intptr_t)&Func_6_Invoke_m65E176783831465A0BF56196A4AC00E1437C41B3_OpenVirtualInvoker;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&Func_6_Invoke_m65E176783831465A0BF56196A4AC00E1437C41B3_OpenInstInvoker;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = (intptr_t)&Func_6_Invoke_m65E176783831465A0BF56196A4AC00E1437C41B3_ClosedInstInvoker;
		}
	}
	__this->___extra_arg = (intptr_t)&Func_6_Invoke_m65E176783831465A0BF56196A4AC00E1437C41B3_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_6_Invoke_m65E176783831465A0BF56196A4AC00E1437C41B3_gshared (Func_6_tF0A0CA0D64145FD856F53441697B240796CBF320* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void Func_7_Invoke_m08465AADA3D15F91D2CD77D60BD0E5D0805B6B6C_Multicast(Func_7_tE5BE67F6F06DB3CA05521637000BD00C4D993F80* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Func_7_tE5BE67F6F06DB3CA05521637000BD00C4D993F80* currentDelegate = reinterpret_cast<Func_7_tE5BE67F6F06DB3CA05521637000BD00C4D993F80*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void Func_7_Invoke_m08465AADA3D15F91D2CD77D60BD0E5D0805B6B6C_OpenStaticInvoker(Func_7_tE5BE67F6F06DB3CA05521637000BD00C4D993F80* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker7< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, il2cppRetVal);
}
void Func_7_Invoke_m08465AADA3D15F91D2CD77D60BD0E5D0805B6B6C_ClosedStaticInvoker(Func_7_tE5BE67F6F06DB3CA05521637000BD00C4D993F80* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker8< RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, __this->___m_target, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, il2cppRetVal);
}
void Func_7_Invoke_m08465AADA3D15F91D2CD77D60BD0E5D0805B6B6C_ClosedInstInvoker(Func_7_tE5BE67F6F06DB3CA05521637000BD00C4D993F80* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker7< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, __this->___m_target, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, il2cppRetVal);
}
void Func_7_Invoke_m08465AADA3D15F91D2CD77D60BD0E5D0805B6B6C_OpenInstInvoker(Func_7_tE5BE67F6F06DB3CA05521637000BD00C4D993F80* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	InvokerActionInvoker6< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, il2cppRetVal);
}
void Func_7_Invoke_m08465AADA3D15F91D2CD77D60BD0E5D0805B6B6C_OpenVirtualInvoker(Func_7_tE5BE67F6F06DB3CA05521637000BD00C4D993F80* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	VirtualActionInvoker6Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_method_get_slot(method), (RuntimeObject*)___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, il2cppRetVal);
}
void Func_7_Invoke_m08465AADA3D15F91D2CD77D60BD0E5D0805B6B6C_OpenInterfaceInvoker(Func_7_tE5BE67F6F06DB3CA05521637000BD00C4D993F80* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	InterfaceActionInvoker6Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), (RuntimeObject*)___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, il2cppRetVal);
}
void Func_7_Invoke_m08465AADA3D15F91D2CD77D60BD0E5D0805B6B6C_OpenGenericVirtualInvoker(Func_7_tE5BE67F6F06DB3CA05521637000BD00C4D993F80* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	GenericVirtualActionInvoker6Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(method, (RuntimeObject*)___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, il2cppRetVal);
}
void Func_7_Invoke_m08465AADA3D15F91D2CD77D60BD0E5D0805B6B6C_OpenGenericInterfaceInvoker(Func_7_tE5BE67F6F06DB3CA05521637000BD00C4D993F80* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	GenericInterfaceActionInvoker6Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(method, (RuntimeObject*)___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, il2cppRetVal);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_7__ctor_m1F14D13DDB60D9B74ED6FFFC2B9E2331C055623C_gshared (Func_7_tE5BE67F6F06DB3CA05521637000BD00C4D993F80* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 6;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&Func_7_Invoke_m08465AADA3D15F91D2CD77D60BD0E5D0805B6B6C_OpenStaticInvoker;
		else
			__this->___invoke_impl = (intptr_t)&Func_7_Invoke_m08465AADA3D15F91D2CD77D60BD0E5D0805B6B6C_ClosedStaticInvoker;
	}
	else
	{
		bool isOpen = parameterCount == 5;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&Func_7_Invoke_m08465AADA3D15F91D2CD77D60BD0E5D0805B6B6C_OpenGenericInterfaceInvoker;
					else
						__this->___invoke_impl = (intptr_t)&Func_7_Invoke_m08465AADA3D15F91D2CD77D60BD0E5D0805B6B6C_OpenGenericVirtualInvoker;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&Func_7_Invoke_m08465AADA3D15F91D2CD77D60BD0E5D0805B6B6C_OpenInterfaceInvoker;
					else
						__this->___invoke_impl = (intptr_t)&Func_7_Invoke_m08465AADA3D15F91D2CD77D60BD0E5D0805B6B6C_OpenVirtualInvoker;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&Func_7_Invoke_m08465AADA3D15F91D2CD77D60BD0E5D0805B6B6C_OpenInstInvoker;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = (intptr_t)&Func_7_Invoke_m08465AADA3D15F91D2CD77D60BD0E5D0805B6B6C_ClosedInstInvoker;
		}
	}
	__this->___extra_arg = (intptr_t)&Func_7_Invoke_m08465AADA3D15F91D2CD77D60BD0E5D0805B6B6C_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_7_Invoke_m08465AADA3D15F91D2CD77D60BD0E5D0805B6B6C_gshared (Func_7_tE5BE67F6F06DB3CA05521637000BD00C4D993F80* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void Func_8_Invoke_mA73BCD2F4A8D61F36C2F2A117F9574EFBD4A2696_Multicast(Func_8_t605F8719FA2521B5FF48B1D8047E17F3F082B32E* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny ___6_arg7, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Func_8_t605F8719FA2521B5FF48B1D8047E17F3F082B32E* currentDelegate = reinterpret_cast<Func_8_t605F8719FA2521B5FF48B1D8047E17F3F082B32E*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void Func_8_Invoke_mA73BCD2F4A8D61F36C2F2A117F9574EFBD4A2696_OpenStaticInvoker(Func_8_t605F8719FA2521B5FF48B1D8047E17F3F082B32E* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny ___6_arg7, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker8< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7, il2cppRetVal);
}
void Func_8_Invoke_mA73BCD2F4A8D61F36C2F2A117F9574EFBD4A2696_ClosedStaticInvoker(Func_8_t605F8719FA2521B5FF48B1D8047E17F3F082B32E* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny ___6_arg7, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker9< RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, __this->___m_target, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7, il2cppRetVal);
}
void Func_8_Invoke_mA73BCD2F4A8D61F36C2F2A117F9574EFBD4A2696_ClosedInstInvoker(Func_8_t605F8719FA2521B5FF48B1D8047E17F3F082B32E* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny ___6_arg7, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker8< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, __this->___m_target, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7, il2cppRetVal);
}
void Func_8_Invoke_mA73BCD2F4A8D61F36C2F2A117F9574EFBD4A2696_OpenInstInvoker(Func_8_t605F8719FA2521B5FF48B1D8047E17F3F082B32E* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny ___6_arg7, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	InvokerActionInvoker7< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7, il2cppRetVal);
}
void Func_8_Invoke_mA73BCD2F4A8D61F36C2F2A117F9574EFBD4A2696_OpenVirtualInvoker(Func_8_t605F8719FA2521B5FF48B1D8047E17F3F082B32E* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny ___6_arg7, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	VirtualActionInvoker7Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_method_get_slot(method), (RuntimeObject*)___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7, il2cppRetVal);
}
void Func_8_Invoke_mA73BCD2F4A8D61F36C2F2A117F9574EFBD4A2696_OpenInterfaceInvoker(Func_8_t605F8719FA2521B5FF48B1D8047E17F3F082B32E* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny ___6_arg7, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	InterfaceActionInvoker7Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), (RuntimeObject*)___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7, il2cppRetVal);
}
void Func_8_Invoke_mA73BCD2F4A8D61F36C2F2A117F9574EFBD4A2696_OpenGenericVirtualInvoker(Func_8_t605F8719FA2521B5FF48B1D8047E17F3F082B32E* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny ___6_arg7, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	GenericVirtualActionInvoker7Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(method, (RuntimeObject*)___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7, il2cppRetVal);
}
void Func_8_Invoke_mA73BCD2F4A8D61F36C2F2A117F9574EFBD4A2696_OpenGenericInterfaceInvoker(Func_8_t605F8719FA2521B5FF48B1D8047E17F3F082B32E* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny ___6_arg7, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	GenericInterfaceActionInvoker7Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(method, (RuntimeObject*)___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7, il2cppRetVal);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_8__ctor_m85488FD9B4DF889CE7595C437A1620A43FB3FFCE_gshared (Func_8_t605F8719FA2521B5FF48B1D8047E17F3F082B32E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 7;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&Func_8_Invoke_mA73BCD2F4A8D61F36C2F2A117F9574EFBD4A2696_OpenStaticInvoker;
		else
			__this->___invoke_impl = (intptr_t)&Func_8_Invoke_mA73BCD2F4A8D61F36C2F2A117F9574EFBD4A2696_ClosedStaticInvoker;
	}
	else
	{
		bool isOpen = parameterCount == 6;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&Func_8_Invoke_mA73BCD2F4A8D61F36C2F2A117F9574EFBD4A2696_OpenGenericInterfaceInvoker;
					else
						__this->___invoke_impl = (intptr_t)&Func_8_Invoke_mA73BCD2F4A8D61F36C2F2A117F9574EFBD4A2696_OpenGenericVirtualInvoker;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&Func_8_Invoke_mA73BCD2F4A8D61F36C2F2A117F9574EFBD4A2696_OpenInterfaceInvoker;
					else
						__this->___invoke_impl = (intptr_t)&Func_8_Invoke_mA73BCD2F4A8D61F36C2F2A117F9574EFBD4A2696_OpenVirtualInvoker;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&Func_8_Invoke_mA73BCD2F4A8D61F36C2F2A117F9574EFBD4A2696_OpenInstInvoker;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = (intptr_t)&Func_8_Invoke_mA73BCD2F4A8D61F36C2F2A117F9574EFBD4A2696_ClosedInstInvoker;
		}
	}
	__this->___extra_arg = (intptr_t)&Func_8_Invoke_mA73BCD2F4A8D61F36C2F2A117F9574EFBD4A2696_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_8_Invoke_mA73BCD2F4A8D61F36C2F2A117F9574EFBD4A2696_gshared (Func_8_t605F8719FA2521B5FF48B1D8047E17F3F082B32E* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny ___6_arg7, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void Func_9_Invoke_mA56A1FA60B622495125CAE44FBFE31A807D5473E_Multicast(Func_9_tCA208DB676270504B9EA383199B74083CECB6375* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny ___6_arg7, Il2CppFullySharedGenericAny ___7_arg8, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Func_9_tCA208DB676270504B9EA383199B74083CECB6375* currentDelegate = reinterpret_cast<Func_9_tCA208DB676270504B9EA383199B74083CECB6375*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7, ___7_arg8, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void Func_9_Invoke_mA56A1FA60B622495125CAE44FBFE31A807D5473E_OpenStaticInvoker(Func_9_tCA208DB676270504B9EA383199B74083CECB6375* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny ___6_arg7, Il2CppFullySharedGenericAny ___7_arg8, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker9< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7, ___7_arg8, il2cppRetVal);
}
void Func_9_Invoke_mA56A1FA60B622495125CAE44FBFE31A807D5473E_ClosedStaticInvoker(Func_9_tCA208DB676270504B9EA383199B74083CECB6375* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny ___6_arg7, Il2CppFullySharedGenericAny ___7_arg8, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker10< RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, __this->___m_target, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7, ___7_arg8, il2cppRetVal);
}
void Func_9_Invoke_mA56A1FA60B622495125CAE44FBFE31A807D5473E_ClosedInstInvoker(Func_9_tCA208DB676270504B9EA383199B74083CECB6375* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny ___6_arg7, Il2CppFullySharedGenericAny ___7_arg8, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker9< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, __this->___m_target, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7, ___7_arg8, il2cppRetVal);
}
void Func_9_Invoke_mA56A1FA60B622495125CAE44FBFE31A807D5473E_OpenInstInvoker(Func_9_tCA208DB676270504B9EA383199B74083CECB6375* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny ___6_arg7, Il2CppFullySharedGenericAny ___7_arg8, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	InvokerActionInvoker8< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7, ___7_arg8, il2cppRetVal);
}
void Func_9_Invoke_mA56A1FA60B622495125CAE44FBFE31A807D5473E_OpenVirtualInvoker(Func_9_tCA208DB676270504B9EA383199B74083CECB6375* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny ___6_arg7, Il2CppFullySharedGenericAny ___7_arg8, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	VirtualActionInvoker8Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_method_get_slot(method), (RuntimeObject*)___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7, ___7_arg8, il2cppRetVal);
}
void Func_9_Invoke_mA56A1FA60B622495125CAE44FBFE31A807D5473E_OpenInterfaceInvoker(Func_9_tCA208DB676270504B9EA383199B74083CECB6375* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny ___6_arg7, Il2CppFullySharedGenericAny ___7_arg8, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	InterfaceActionInvoker8Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), (RuntimeObject*)___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7, ___7_arg8, il2cppRetVal);
}
void Func_9_Invoke_mA56A1FA60B622495125CAE44FBFE31A807D5473E_OpenGenericVirtualInvoker(Func_9_tCA208DB676270504B9EA383199B74083CECB6375* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny ___6_arg7, Il2CppFullySharedGenericAny ___7_arg8, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	GenericVirtualActionInvoker8Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(method, (RuntimeObject*)___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7, ___7_arg8, il2cppRetVal);
}
void Func_9_Invoke_mA56A1FA60B622495125CAE44FBFE31A807D5473E_OpenGenericInterfaceInvoker(Func_9_tCA208DB676270504B9EA383199B74083CECB6375* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny ___6_arg7, Il2CppFullySharedGenericAny ___7_arg8, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	GenericInterfaceActionInvoker8Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(method, (RuntimeObject*)___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7, ___7_arg8, il2cppRetVal);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_9__ctor_m9EB19875E265964CF431861B6E8862A68AC2D3FE_gshared (Func_9_tCA208DB676270504B9EA383199B74083CECB6375* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 8;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&Func_9_Invoke_mA56A1FA60B622495125CAE44FBFE31A807D5473E_OpenStaticInvoker;
		else
			__this->___invoke_impl = (intptr_t)&Func_9_Invoke_mA56A1FA60B622495125CAE44FBFE31A807D5473E_ClosedStaticInvoker;
	}
	else
	{
		bool isOpen = parameterCount == 7;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&Func_9_Invoke_mA56A1FA60B622495125CAE44FBFE31A807D5473E_OpenGenericInterfaceInvoker;
					else
						__this->___invoke_impl = (intptr_t)&Func_9_Invoke_mA56A1FA60B622495125CAE44FBFE31A807D5473E_OpenGenericVirtualInvoker;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&Func_9_Invoke_mA56A1FA60B622495125CAE44FBFE31A807D5473E_OpenInterfaceInvoker;
					else
						__this->___invoke_impl = (intptr_t)&Func_9_Invoke_mA56A1FA60B622495125CAE44FBFE31A807D5473E_OpenVirtualInvoker;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&Func_9_Invoke_mA56A1FA60B622495125CAE44FBFE31A807D5473E_OpenInstInvoker;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = (intptr_t)&Func_9_Invoke_mA56A1FA60B622495125CAE44FBFE31A807D5473E_ClosedInstInvoker;
		}
	}
	__this->___extra_arg = (intptr_t)&Func_9_Invoke_mA56A1FA60B622495125CAE44FBFE31A807D5473E_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_9_Invoke_mA56A1FA60B622495125CAE44FBFE31A807D5473E_gshared (Func_9_tCA208DB676270504B9EA383199B74083CECB6375* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, Il2CppFullySharedGenericAny ___2_arg3, Il2CppFullySharedGenericAny ___3_arg4, Il2CppFullySharedGenericAny ___4_arg5, Il2CppFullySharedGenericAny ___5_arg6, Il2CppFullySharedGenericAny ___6_arg7, Il2CppFullySharedGenericAny ___7_arg8, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7, ___7_arg8, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionPointer_1__ctor_mC619E78A7A6A909670DFFE07825842FDA7D178F7_gshared (FunctionPointer_1_t45E67205E6D22523A4FEF46DC7A859C5C14566BA* __this, intptr_t ___0_ptr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionPointer_1_tB635C696E956CB8DC2B055F1669431B2F6D73193_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_ptr));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3545));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 3546));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3547));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3548));
		intptr_t L_0 = ___0_ptr;
		__this->____ptr = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3549));
		return;
	}
}
IL2CPP_EXTERN_C  void FunctionPointer_1__ctor_mC619E78A7A6A909670DFFE07825842FDA7D178F7_AdjustorThunk (RuntimeObject* __this, intptr_t ___0_ptr, const RuntimeMethod* method)
{
	FunctionPointer_1_t45E67205E6D22523A4FEF46DC7A859C5C14566BA* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<FunctionPointer_1_t45E67205E6D22523A4FEF46DC7A859C5C14566BA>(__this);
	FunctionPointer_1__ctor_mC619E78A7A6A909670DFFE07825842FDA7D178F7(_thisAdjusted, ___0_ptr, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FunctionPointer_1_get_Value_mA1F1CB8C8E8B4B8030D49BFBEF55560DEB03FDD5_gshared (FunctionPointer_1_t45E67205E6D22523A4FEF46DC7A859C5C14566BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionPointer_1_tB635C696E956CB8DC2B055F1669431B2F6D73193_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3550));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 3551));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3552));
		intptr_t L_0 = __this->____ptr;
		return L_0;
	}
}
IL2CPP_EXTERN_C  intptr_t FunctionPointer_1_get_Value_mA1F1CB8C8E8B4B8030D49BFBEF55560DEB03FDD5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FunctionPointer_1_t45E67205E6D22523A4FEF46DC7A859C5C14566BA* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<FunctionPointer_1_t45E67205E6D22523A4FEF46DC7A859C5C14566BA>(__this);
	intptr_t _returnValue;
	_returnValue = FunctionPointer_1_get_Value_mA1F1CB8C8E8B4B8030D49BFBEF55560DEB03FDD5_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionPointer_1_CheckIsCreated_m5EF23B4472072E8D10170BEBDBCB2A0D870841F4_gshared (FunctionPointer_1_t45E67205E6D22523A4FEF46DC7A859C5C14566BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionPointer_1_tB635C696E956CB8DC2B055F1669431B2F6D73193_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3553));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 3554));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3555));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3556));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3557));
		bool L_0;
		L_0 = FunctionPointer_1_get_IsCreated_mE896F8993D96765E8D0CE084A5FF954ADB82717C(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3557));
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3558));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3559));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3560));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3561));
		NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* L_2 = (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var)));
		NullReferenceException__ctor_mA41317A57F5C1C0E3F59C7EB25ABD484564B23D4(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4E18EDDD9F60393DD4B0E79C44A56B16E97C9218)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3561));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_001a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3562));
		return;
	}
}
IL2CPP_EXTERN_C  void FunctionPointer_1_CheckIsCreated_m5EF23B4472072E8D10170BEBDBCB2A0D870841F4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FunctionPointer_1_t45E67205E6D22523A4FEF46DC7A859C5C14566BA* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<FunctionPointer_1_t45E67205E6D22523A4FEF46DC7A859C5C14566BA>(__this);
	FunctionPointer_1_CheckIsCreated_m5EF23B4472072E8D10170BEBDBCB2A0D870841F4(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionPointer_1_get_Invoke_m552FD5AD590BE1F22C35842835DBC3FB96BACA44_gshared (FunctionPointer_1_t45E67205E6D22523A4FEF46DC7A859C5C14566BA* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionPointer_1_tB635C696E956CB8DC2B055F1669431B2F6D73193_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t9E37FA2330E4A886B47120B954AAD7D9426B8783 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t9E37FA2330E4A886B47120B954AAD7D9426B8783);
	const Il2CppFullySharedGenericAny L_2 = L_1;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t9E37FA2330E4A886B47120B954AAD7D9426B8783);
	memset(V_0, 0, SizeOf_T_t9E37FA2330E4A886B47120B954AAD7D9426B8783);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3563));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 3564));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3565));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3566));
		intptr_t L_0 = __this->____ptr;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3567));
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_GetDelegateForFunctionPointer_TisIl2CppFullySharedGenericAny_m67DB6027E8CD3914ED5B06FCF1CC232BE11A53EE(L_0, (Il2CppFullySharedGenericAny*)L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3567));
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_T_t9E37FA2330E4A886B47120B954AAD7D9426B8783);
		goto IL_000f;
	}

IL_000f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3568));
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_T_t9E37FA2330E4A886B47120B954AAD7D9426B8783);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_T_t9E37FA2330E4A886B47120B954AAD7D9426B8783);
		return;
	}
}
IL2CPP_EXTERN_C  void FunctionPointer_1_get_Invoke_m552FD5AD590BE1F22C35842835DBC3FB96BACA44_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	FunctionPointer_1_t45E67205E6D22523A4FEF46DC7A859C5C14566BA* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<FunctionPointer_1_t45E67205E6D22523A4FEF46DC7A859C5C14566BA>(__this);
	FunctionPointer_1_get_Invoke_m552FD5AD590BE1F22C35842835DBC3FB96BACA44(_thisAdjusted, il2cppRetVal, method);
	return;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FunctionPointer_1_get_IsCreated_mE896F8993D96765E8D0CE084A5FF954ADB82717C_gshared (FunctionPointer_1_t45E67205E6D22523A4FEF46DC7A859C5C14566BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionPointer_1_tB635C696E956CB8DC2B055F1669431B2F6D73193_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3569));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 3570));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3571));
		intptr_t L_0 = __this->____ptr;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3572));
		bool L_1;
		L_1 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline(L_0, 0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3572));
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool FunctionPointer_1_get_IsCreated_mE896F8993D96765E8D0CE084A5FF954ADB82717C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FunctionPointer_1_t45E67205E6D22523A4FEF46DC7A859C5C14566BA* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<FunctionPointer_1_t45E67205E6D22523A4FEF46DC7A859C5C14566BA>(__this);
	bool _returnValue;
	_returnValue = FunctionPointer_1_get_IsCreated_mE896F8993D96765E8D0CE084A5FF954ADB82717C(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FunctionPointer_1_Unity_Burst_IFunctionPointer_FromIntPtr_m83AC3B2AD9CD3551118A13B4D28B96ED0B293725_gshared (FunctionPointer_1_t45E67205E6D22523A4FEF46DC7A859C5C14566BA* __this, intptr_t ___0_ptr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionPointer_1_tB635C696E956CB8DC2B055F1669431B2F6D73193_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_ptr));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3573));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 3574));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3575));
		intptr_t L_0 = ___0_ptr;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3576));
		FunctionPointer_1_t45E67205E6D22523A4FEF46DC7A859C5C14566BA L_1;
		memset((&L_1), 0, sizeof(L_1));
		FunctionPointer_1__ctor_mC619E78A7A6A909670DFFE07825842FDA7D178F7((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3576));
		FunctionPointer_1_t45E67205E6D22523A4FEF46DC7A859C5C14566BA L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), &L_2);
		return (RuntimeObject*)L_3;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* FunctionPointer_1_Unity_Burst_IFunctionPointer_FromIntPtr_m83AC3B2AD9CD3551118A13B4D28B96ED0B293725_AdjustorThunk (RuntimeObject* __this, intptr_t ___0_ptr, const RuntimeMethod* method)
{
	FunctionPointer_1_t45E67205E6D22523A4FEF46DC7A859C5C14566BA* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<FunctionPointer_1_t45E67205E6D22523A4FEF46DC7A859C5C14566BA>(__this);
	RuntimeObject* _returnValue;
	_returnValue = FunctionPointer_1_Unity_Burst_IFunctionPointer_FromIntPtr_m83AC3B2AD9CD3551118A13B4D28B96ED0B293725(_thisAdjusted, ___0_ptr, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUBuffer_1__ctor_mAFF4D8A66AD91CA8F66032B7C638D4B35B70B4D0_gshared (GPUBuffer_1_tB799E550DAF939E606A31722DEC8AD338C447E86* __this, int32_t ___0_elementCount, int32_t ___1_bufferFlags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPUBuffer_1_t06A179B89ACD0CB84701876CBCE35ACF971D6DAE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8CE21DCF1C28EAB31D71109C60BE5319271612D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_elementCount), (&___1_bufferFlags));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 122015));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 122016));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 122017));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 122018));
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 122018));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 122019));
		int32_t L_0 = ___0_elementCount;
		__this->___elemCount = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 122020));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 122021));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 122021));
		__this->___elemStride = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 122022));
		int32_t L_2 = ___0_elementCount;
		int32_t L_3 = __this->___elemStride;
		int32_t L_4 = ___1_bufferFlags;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 122023));
		il2cpp_codegen_runtime_class_init_inline(Utility_t8CE21DCF1C28EAB31D71109C60BE5319271612D9_il2cpp_TypeInfo_var);
		intptr_t L_5;
		L_5 = Utility_AllocateBuffer_m0A5BE820A8347EE554DAC72D6E235A49313D2342(L_2, L_3, (int32_t)L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 122023));
		__this->___buffer = L_5;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 122024));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUBuffer_1_Dispose_m33AADB9D07D8C26E0DDD7791C12D860A1022B8E1_gshared (GPUBuffer_1_tB799E550DAF939E606A31722DEC8AD338C447E86* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPUBuffer_1_t06A179B89ACD0CB84701876CBCE35ACF971D6DAE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8CE21DCF1C28EAB31D71109C60BE5319271612D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 122025));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 122026));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 122027));
		intptr_t L_0 = __this->___buffer;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 122028));
		il2cpp_codegen_runtime_class_init_inline(Utility_t8CE21DCF1C28EAB31D71109C60BE5319271612D9_il2cpp_TypeInfo_var);
		Utility_FreeBuffer_m0E14FA612A7CFC491F826A295297E9EA45426C8E(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 122028));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 122029));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUBuffer_1_UpdateRanges_m42F6C36F4318229A15ADA026B37AD4CF2198C0C8_gshared (GPUBuffer_1_tB799E550DAF939E606A31722DEC8AD338C447E86* __this, NativeSlice_1_t2584A7E323E2DAA0F082C26AD9D0DE0FC661F85F ___0_ranges, int32_t ___1_writeStart, int32_t ___2_writeEnd, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPUBuffer_1_t06A179B89ACD0CB84701876CBCE35ACF971D6DAE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeSliceUnsafeUtility_GetUnsafePtr_TisGfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C_m96BF1DA7D07BBC9CBB70382DC0B3582F3E927D38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeSlice_1_get_Length_m9C484E0369ADC54B05A3EE2B955EF908A81AB4D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8CE21DCF1C28EAB31D71109C60BE5319271612D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_ranges), (&___1_writeStart), (&___2_writeEnd));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 122030));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 122031));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 122032));
		intptr_t L_0 = __this->___buffer;
		NativeSlice_1_t2584A7E323E2DAA0F082C26AD9D0DE0FC661F85F L_1 = ___0_ranges;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 122033));
		void* L_2;
		L_2 = NativeSliceUnsafeUtility_GetUnsafePtr_TisGfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C_m96BF1DA7D07BBC9CBB70382DC0B3582F3E927D38_inline(L_1, NativeSliceUnsafeUtility_GetUnsafePtr_TisGfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C_m96BF1DA7D07BBC9CBB70382DC0B3582F3E927D38_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 122033));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 122034));
		intptr_t L_3;
		memset((&L_3), 0, sizeof(L_3));
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&L_3), L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 122034));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 122035));
		int32_t L_4;
		L_4 = NativeSlice_1_get_Length_m9C484E0369ADC54B05A3EE2B955EF908A81AB4D3_inline((&___0_ranges), NativeSlice_1_get_Length_m9C484E0369ADC54B05A3EE2B955EF908A81AB4D3_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 122035));
		int32_t L_5 = ___1_writeStart;
		int32_t L_6 = ___2_writeEnd;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 122036));
		il2cpp_codegen_runtime_class_init_inline(Utility_t8CE21DCF1C28EAB31D71109C60BE5319271612D9_il2cpp_TypeInfo_var);
		Utility_UpdateBufferRanges_m36DFDDDAC956CE43D560D87B3912EE87F95A59F1(L_0, L_3, L_4, L_5, L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 122036));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 122037));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GPUBuffer_1_get_ElementStride_mDB41EF98DD2EC340A2A8004394521F520C2A1A5E_gshared (GPUBuffer_1_tB799E550DAF939E606A31722DEC8AD338C447E86* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPUBuffer_1_t06A179B89ACD0CB84701876CBCE35ACF971D6DAE_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 122038));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 122039));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 122040));
		int32_t L_0 = __this->___elemStride;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GPUBuffer_1_get_Count_mC2885B0616AA0D2ABDD91BA6F748FD4DA87A4014_gshared (GPUBuffer_1_tB799E550DAF939E606A31722DEC8AD338C447E86* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPUBuffer_1_t06A179B89ACD0CB84701876CBCE35ACF971D6DAE_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 122041));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 122042));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 122043));
		int32_t L_0 = __this->___elemCount;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GPUBuffer_1_get_BufferPointer_m200B2D5F569C0EB641F764FB090BD0E8798A3581_gshared (GPUBuffer_1_tB799E550DAF939E606A31722DEC8AD338C447E86* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPUBuffer_1_t06A179B89ACD0CB84701876CBCE35ACF971D6DAE_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 122044));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 122045));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 122046));
		intptr_t L_0 = __this->___buffer;
		return L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 GPUInstanceDataBufferReadback_1_get_data_m85A66715F31C0E08C13BA9C091BE27292CEAFA28_gshared (GPUInstanceDataBufferReadback_1_t5AE9021A468A030012E49A0B36B7A5A237D5BDA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPUInstanceDataBufferReadback_1_tEEC8A61DC2A96C3D1B8470E24D4E9EFDE8C598F3_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 3382));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 3383));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 3384));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = __this->___U3CdataU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 GPUInstanceDataBufferReadback_1_get_data_m85A66715F31C0E08C13BA9C091BE27292CEAFA28_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GPUInstanceDataBufferReadback_1_t5AE9021A468A030012E49A0B36B7A5A237D5BDA0* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<GPUInstanceDataBufferReadback_1_t5AE9021A468A030012E49A0B36B7A5A237D5BDA0>(__this);
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 _returnValue;
	_returnValue = GPUInstanceDataBufferReadback_1_get_data_m85A66715F31C0E08C13BA9C091BE27292CEAFA28_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUInstanceDataBufferReadback_1_set_data_m7113F6AA3060BFE24F83C25673C2F5D85A7092A7_gshared (GPUInstanceDataBufferReadback_1_t5AE9021A468A030012E49A0B36B7A5A237D5BDA0* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPUInstanceDataBufferReadback_1_tEEC8A61DC2A96C3D1B8470E24D4E9EFDE8C598F3_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 3385));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 3386));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 3387));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_value;
		__this->___U3CdataU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void GPUInstanceDataBufferReadback_1_set_data_m7113F6AA3060BFE24F83C25673C2F5D85A7092A7_AdjustorThunk (RuntimeObject* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_value, const RuntimeMethod* method)
{
	GPUInstanceDataBufferReadback_1_t5AE9021A468A030012E49A0B36B7A5A237D5BDA0* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<GPUInstanceDataBufferReadback_1_t5AE9021A468A030012E49A0B36B7A5A237D5BDA0>(__this);
	GPUInstanceDataBufferReadback_1_set_data_m7113F6AA3060BFE24F83C25673C2F5D85A7092A7_inline(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GPUInstanceDataBufferReadback_1_Load_m83665036757894EC4D0B5D980D0BAC425A5B7267_gshared (GPUInstanceDataBufferReadback_1_t5AE9021A468A030012E49A0B36B7A5A237D5BDA0* __this, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___0_cmd, GPUInstanceDataBuffer_tAF2FDE10337956B935AE0961BAB4F5A4E534ACF3* ___1_instanceDataBuffer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_IsNotNull_TisGPUInstanceDataBuffer_tAF2FDE10337956B935AE0961BAB4F5A4E534ACF3_mE51594C6431F3FDB140691B45C91F04466FB8665_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPUInstanceDataBufferReadback_1_tEEC8A61DC2A96C3D1B8470E24D4E9EFDE8C598F3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB103234B3080F7F61E702B75D004C9D619EAF047);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass5_0_t5B92A45B3E3A5C4A1EE7E006EAD8809BB6DB4DAB* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_cmd), (&___1_instanceDataBuffer));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 3388));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 3389));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 3390));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 3391));
		U3CU3Ec__DisplayClass5_0_t5B92A45B3E3A5C4A1EE7E006EAD8809BB6DB4DAB* L_0 = (U3CU3Ec__DisplayClass5_0_t5B92A45B3E3A5C4A1EE7E006EAD8809BB6DB4DAB*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		U3CU3Ec__DisplayClass5_0__ctor_mD8A37C2265383249A912AA4859430FB3DDEF3B80(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 3391));
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 3392));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 3393));
		GPUInstanceDataBuffer_tAF2FDE10337956B935AE0961BAB4F5A4E534ACF3* L_1 = ___1_instanceDataBuffer;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 3394));
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsNotNull_TisGPUInstanceDataBuffer_tAF2FDE10337956B935AE0961BAB4F5A4E534ACF3_mE51594C6431F3FDB140691B45C91F04466FB8665(L_1, Assert_IsNotNull_TisGPUInstanceDataBuffer_tAF2FDE10337956B935AE0961BAB4F5A4E534ACF3_mE51594C6431F3FDB140691B45C91F04466FB8665_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 3394));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 3395));
		GPUInstanceDataBuffer_tAF2FDE10337956B935AE0961BAB4F5A4E534ACF3* L_2 = ___1_instanceDataBuffer;
		__this->___m_InstanceDataBuffer = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_InstanceDataBuffer), (void*)L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 3396));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 3397));
		int32_t L_3;
		L_3 = UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 3397));
		V_1 = L_3;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 3398));
		U3CU3Ec__DisplayClass5_0_t5B92A45B3E3A5C4A1EE7E006EAD8809BB6DB4DAB* L_4 = V_0;
		GPUInstanceDataBuffer_tAF2FDE10337956B935AE0961BAB4F5A4E534ACF3* L_5 = ___1_instanceDataBuffer;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 3399));
		NullCheck(L_5);
		int32_t L_6;
		L_6 = GPUInstanceDataBuffer_get_gpuBufferByteSize_m627270DF33D9DCE44838EC037A0F130F42A47C53(L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 3399));
		int32_t L_7 = V_1;
		int32_t L_8 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 3400));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_9;
		memset((&L_9), 0, sizeof(L_9));
		NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1((&L_9), ((int32_t)(((int32_t)il2cpp_codegen_add(L_6, ((int32_t)il2cpp_codegen_subtract(L_7, 1))))/L_8)), (int32_t)4, (int32_t)1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 3400));
		NullCheck(L_4);
		L_4->___localData = L_9;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 3401));
		U3CU3Ec__DisplayClass5_0_t5B92A45B3E3A5C4A1EE7E006EAD8809BB6DB4DAB* L_10 = V_0;
		NullCheck(L_10);
		L_10->___errorCount = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 3402));
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_11 = ___0_cmd;
		GPUInstanceDataBuffer_tAF2FDE10337956B935AE0961BAB4F5A4E534ACF3* L_12 = ___1_instanceDataBuffer;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 3403));
		NullCheck(L_12);
		GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* L_13;
		L_13 = GPUInstanceDataBuffer_get_nativeBuffer_m743B9C8584A049A262CF7217AC56235D284E9CB9(L_12, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 3403));
		U3CU3Ec__DisplayClass5_0_t5B92A45B3E3A5C4A1EE7E006EAD8809BB6DB4DAB* L_14 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 3404));
		Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* L_15 = (Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F*)il2cpp_codegen_object_new(Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F_il2cpp_TypeInfo_var);
		Action_1__ctor_m347338A163A1A0840FA150F7ACCC029D46339777(L_15, (RuntimeObject*)L_14, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 3404));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 3405));
		NullCheck(L_11);
		CommandBuffer_RequestAsyncReadback_m36C21893D46947FBB81D4E9DB62255C78F02D1C6(L_11, L_13, L_15, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 3405));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 3406));
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_16 = ___0_cmd;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 3407));
		NullCheck(L_16);
		CommandBuffer_WaitAllAsyncReadbackRequests_m6585A039EF9132447EDDA66336D4D37B9E209B1C(L_16, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 3407));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 3408));
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_17 = ___0_cmd;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 3409));
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_ExecuteCommandBuffer_mE7D922583404AB08A25C1413A3EA9F6B0D2F16B9(L_17, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 3409));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 3410));
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_18 = ___0_cmd;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 3411));
		NullCheck(L_18);
		CommandBuffer_Clear_m4E1272BD1A0C162C9C26434E115279F42FA557C7(L_18, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 3411));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 3412));
		U3CU3Ec__DisplayClass5_0_t5B92A45B3E3A5C4A1EE7E006EAD8809BB6DB4DAB* L_19 = V_0;
		NullCheck(L_19);
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_20 = L_19->___localData;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 3413));
		GPUInstanceDataBufferReadback_1_set_data_m7113F6AA3060BFE24F83C25673C2F5D85A7092A7_inline(__this, L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 3413));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 3414));
		U3CU3Ec__DisplayClass5_0_t5B92A45B3E3A5C4A1EE7E006EAD8809BB6DB4DAB* L_21 = V_0;
		NullCheck(L_21);
		int32_t L_22 = L_21->___errorCount;
		V_2 = (bool)((!(((uint32_t)L_22) <= ((uint32_t)0)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 3415));
		bool L_23 = V_2;
		if (!L_23)
		{
			goto IL_008e;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 3416));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 3417));
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)_stringLiteralB103234B3080F7F61E702B75D004C9D619EAF047, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 3417));
	}

IL_008e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 3418));
		U3CU3Ec__DisplayClass5_0_t5B92A45B3E3A5C4A1EE7E006EAD8809BB6DB4DAB* L_24 = V_0;
		NullCheck(L_24);
		int32_t L_25 = L_24->___errorCount;
		V_3 = (bool)((((int32_t)L_25) == ((int32_t)0))? 1 : 0);
		goto IL_009a;
	}

IL_009a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 3419));
		bool L_26 = V_3;
		return L_26;
	}
}
IL2CPP_EXTERN_C  bool GPUInstanceDataBufferReadback_1_Load_m83665036757894EC4D0B5D980D0BAC425A5B7267_AdjustorThunk (RuntimeObject* __this, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___0_cmd, GPUInstanceDataBuffer_tAF2FDE10337956B935AE0961BAB4F5A4E534ACF3* ___1_instanceDataBuffer, const RuntimeMethod* method)
{
	GPUInstanceDataBufferReadback_1_t5AE9021A468A030012E49A0B36B7A5A237D5BDA0* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<GPUInstanceDataBufferReadback_1_t5AE9021A468A030012E49A0B36B7A5A237D5BDA0>(__this);
	bool _returnValue;
	_returnValue = GPUInstanceDataBufferReadback_1_Load_m83665036757894EC4D0B5D980D0BAC425A5B7267(_thisAdjusted, ___0_cmd, ___1_instanceDataBuffer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUInstanceDataBufferReadback_1_Dispose_m14D34F06B04E86E7F723BB4D560AB33AEE47E916_gshared (GPUInstanceDataBufferReadback_1_t5AE9021A468A030012E49A0B36B7A5A237D5BDA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPUInstanceDataBufferReadback_1_tEEC8A61DC2A96C3D1B8470E24D4E9EFDE8C598F3_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 3453));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 3454));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 3455));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 3456));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 3457));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0;
		L_0 = GPUInstanceDataBufferReadback_1_get_data_m85A66715F31C0E08C13BA9C091BE27292CEAFA28_inline(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 3457));
		V_0 = L_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 3458));
		NativeArray_1_Dispose_m365A262FA4CA431467F021D7732CECD68316AF80((&V_0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 3458));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 3459));
		return;
	}
}
IL2CPP_EXTERN_C  void GPUInstanceDataBufferReadback_1_Dispose_m14D34F06B04E86E7F723BB4D560AB33AEE47E916_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GPUInstanceDataBufferReadback_1_t5AE9021A468A030012E49A0B36B7A5A237D5BDA0* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<GPUInstanceDataBufferReadback_1_t5AE9021A468A030012E49A0B36B7A5A237D5BDA0>(__this);
	GPUInstanceDataBufferReadback_1_Dispose_m14D34F06B04E86E7F723BB4D560AB33AEE47E916(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GSW_Store_m5C96193E5808DA834C51975EF38EB97088394A41_gshared (GSW_tF00D1E09805DA6E6A35E624A37C83A4D2DFEF7AD* __this, FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706* ___0_set, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706* L_0 = ___0_set;
		__this->____set = ((DefaultFrozenSet_1_t13DDDBF4773580AD15852B0A795E5D4F44E5259A*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____set), (void*)((DefaultFrozenSet_1_t13DDDBF4773580AD15852B0A795E5D4F44E5259A*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1))));
		return;
	}
}
IL2CPP_EXTERN_C  void GSW_Store_m5C96193E5808DA834C51975EF38EB97088394A41_AdjustorThunk (RuntimeObject* __this, FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706* ___0_set, const RuntimeMethod* method)
{
	GSW_tF00D1E09805DA6E6A35E624A37C83A4D2DFEF7AD* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<GSW_tF00D1E09805DA6E6A35E624A37C83A4D2DFEF7AD>(__this);
	GSW_Store_m5C96193E5808DA834C51975EF38EB97088394A41(_thisAdjusted, ___0_set, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GSW_get_Count_mC03F2D9BF8EAF4DB416D989990591F436AF9B278_gshared (GSW_tF00D1E09805DA6E6A35E624A37C83A4D2DFEF7AD* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		DefaultFrozenSet_1_t13DDDBF4773580AD15852B0A795E5D4F44E5259A* L_0 = __this->____set;
		NullCheck((FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706*)L_0);
		int32_t L_1;
		L_1 = FrozenSet_1_get_Count_m0D2127C8451374E476181921F2456602820A3A1F((FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706*)L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t GSW_get_Count_mC03F2D9BF8EAF4DB416D989990591F436AF9B278_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GSW_tF00D1E09805DA6E6A35E624A37C83A4D2DFEF7AD* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<GSW_tF00D1E09805DA6E6A35E624A37C83A4D2DFEF7AD>(__this);
	int32_t _returnValue;
	_returnValue = GSW_get_Count_mC03F2D9BF8EAF4DB416D989990591F436AF9B278(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GSW_get_Comparer_mC872C97392B1D99A688FC67E8A09C00368FB91B7_gshared (GSW_tF00D1E09805DA6E6A35E624A37C83A4D2DFEF7AD* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		DefaultFrozenSet_1_t13DDDBF4773580AD15852B0A795E5D4F44E5259A* L_0 = __this->____set;
		NullCheck((FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706*)L_0);
		RuntimeObject* L_1;
		L_1 = FrozenSet_1_get_Comparer_mB3265D335E5104BC225CEFFFED328ACA8FC573D0_inline((FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706*)L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		return L_1;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* GSW_get_Comparer_mC872C97392B1D99A688FC67E8A09C00368FB91B7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GSW_tF00D1E09805DA6E6A35E624A37C83A4D2DFEF7AD* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<GSW_tF00D1E09805DA6E6A35E624A37C83A4D2DFEF7AD>(__this);
	RuntimeObject* _returnValue;
	_returnValue = GSW_get_Comparer_mC872C97392B1D99A688FC67E8A09C00368FB91B7(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GSW_FindItemIndex_m1C6EE5B798AB350CAFDC33DB297B123C9766DD69_gshared (GSW_tF00D1E09805DA6E6A35E624A37C83A4D2DFEF7AD* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t34A5E30BE7D72327C045BDDB77EA6A2654663039 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t34A5E30BE7D72327C045BDDB77EA6A2654663039);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		DefaultFrozenSet_1_t13DDDBF4773580AD15852B0A795E5D4F44E5259A* L_0 = __this->____set;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6)) ? ___0_item : &___0_item), SizeOf_T_t34A5E30BE7D72327C045BDDB77EA6A2654663039);
		NullCheck((FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706*)L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(25, (FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706*)L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6)) ? L_1: *(void**)L_1));
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t GSW_FindItemIndex_m1C6EE5B798AB350CAFDC33DB297B123C9766DD69_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method)
{
	GSW_tF00D1E09805DA6E6A35E624A37C83A4D2DFEF7AD* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<GSW_tF00D1E09805DA6E6A35E624A37C83A4D2DFEF7AD>(__this);
	int32_t _returnValue;
	_returnValue = GSW_FindItemIndex_m1C6EE5B798AB350CAFDC33DB297B123C9766DD69(_thisAdjusted, ___0_item, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC7CE6D94112648D301AA3F68E7F8536FB8568478 GSW_GetEnumerator_mB4F247AC50045D87162A79E50A0B7DDDA1A12F1C_gshared (GSW_tF00D1E09805DA6E6A35E624A37C83A4D2DFEF7AD* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		DefaultFrozenSet_1_t13DDDBF4773580AD15852B0A795E5D4F44E5259A* L_0 = __this->____set;
		NullCheck((FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706*)L_0);
		Enumerator_tC7CE6D94112648D301AA3F68E7F8536FB8568478 L_1;
		L_1 = FrozenSet_1_GetEnumerator_m1429D218A6E8178BA2DFC3FF6C682AABD7F16298((FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706*)L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return L_1;
	}
}
IL2CPP_EXTERN_C  Enumerator_tC7CE6D94112648D301AA3F68E7F8536FB8568478 GSW_GetEnumerator_mB4F247AC50045D87162A79E50A0B7DDDA1A12F1C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GSW_tF00D1E09805DA6E6A35E624A37C83A4D2DFEF7AD* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<GSW_tF00D1E09805DA6E6A35E624A37C83A4D2DFEF7AD>(__this);
	Enumerator_tC7CE6D94112648D301AA3F68E7F8536FB8568478 _returnValue;
	_returnValue = GSW_GetEnumerator_mB4F247AC50045D87162A79E50A0B7DDDA1A12F1C(_thisAdjusted, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GSW_Store_mA0438D7D417BB9247888183584AA4B46F3F4E218_gshared (GSW_t8857BC3AB3D15845559E0D3C6B8BC34AD8E0D2F9* __this, FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706* ___0_set, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706* L_0 = ___0_set;
		__this->____set = ((SmallFrozenSet_1_tDE7B6B4C98EB8442065DEA04C14788EA1A071737*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____set), (void*)((SmallFrozenSet_1_tDE7B6B4C98EB8442065DEA04C14788EA1A071737*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1))));
		return;
	}
}
IL2CPP_EXTERN_C  void GSW_Store_mA0438D7D417BB9247888183584AA4B46F3F4E218_AdjustorThunk (RuntimeObject* __this, FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706* ___0_set, const RuntimeMethod* method)
{
	GSW_t8857BC3AB3D15845559E0D3C6B8BC34AD8E0D2F9* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<GSW_t8857BC3AB3D15845559E0D3C6B8BC34AD8E0D2F9>(__this);
	GSW_Store_mA0438D7D417BB9247888183584AA4B46F3F4E218(_thisAdjusted, ___0_set, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GSW_get_Count_m64C160237F8CCF96A831A1244AD4CAC1CEFB9107_gshared (GSW_t8857BC3AB3D15845559E0D3C6B8BC34AD8E0D2F9* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SmallFrozenSet_1_tDE7B6B4C98EB8442065DEA04C14788EA1A071737* L_0 = __this->____set;
		NullCheck((FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706*)L_0);
		int32_t L_1;
		L_1 = FrozenSet_1_get_Count_m0D2127C8451374E476181921F2456602820A3A1F((FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706*)L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t GSW_get_Count_m64C160237F8CCF96A831A1244AD4CAC1CEFB9107_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GSW_t8857BC3AB3D15845559E0D3C6B8BC34AD8E0D2F9* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<GSW_t8857BC3AB3D15845559E0D3C6B8BC34AD8E0D2F9>(__this);
	int32_t _returnValue;
	_returnValue = GSW_get_Count_m64C160237F8CCF96A831A1244AD4CAC1CEFB9107(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GSW_get_Comparer_mF5C268881C1C4C117EB6E126AE72BB17D2E88FDD_gshared (GSW_t8857BC3AB3D15845559E0D3C6B8BC34AD8E0D2F9* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SmallFrozenSet_1_tDE7B6B4C98EB8442065DEA04C14788EA1A071737* L_0 = __this->____set;
		NullCheck((FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706*)L_0);
		RuntimeObject* L_1;
		L_1 = FrozenSet_1_get_Comparer_mB3265D335E5104BC225CEFFFED328ACA8FC573D0_inline((FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706*)L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		return L_1;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* GSW_get_Comparer_mF5C268881C1C4C117EB6E126AE72BB17D2E88FDD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GSW_t8857BC3AB3D15845559E0D3C6B8BC34AD8E0D2F9* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<GSW_t8857BC3AB3D15845559E0D3C6B8BC34AD8E0D2F9>(__this);
	RuntimeObject* _returnValue;
	_returnValue = GSW_get_Comparer_mF5C268881C1C4C117EB6E126AE72BB17D2E88FDD(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GSW_FindItemIndex_mB6835BE23F9161DC6D08087B5163DCE27724D190_gshared (GSW_t8857BC3AB3D15845559E0D3C6B8BC34AD8E0D2F9* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tC620D886485CD6AADF237DBEAFDB2A48112F6261 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tC620D886485CD6AADF237DBEAFDB2A48112F6261);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SmallFrozenSet_1_tDE7B6B4C98EB8442065DEA04C14788EA1A071737* L_0 = __this->____set;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6)) ? ___0_item : &___0_item), SizeOf_T_tC620D886485CD6AADF237DBEAFDB2A48112F6261);
		NullCheck((FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706*)L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(25, (FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706*)L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6)) ? L_1: *(void**)L_1));
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t GSW_FindItemIndex_mB6835BE23F9161DC6D08087B5163DCE27724D190_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method)
{
	GSW_t8857BC3AB3D15845559E0D3C6B8BC34AD8E0D2F9* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<GSW_t8857BC3AB3D15845559E0D3C6B8BC34AD8E0D2F9>(__this);
	int32_t _returnValue;
	_returnValue = GSW_FindItemIndex_mB6835BE23F9161DC6D08087B5163DCE27724D190(_thisAdjusted, ___0_item, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC7CE6D94112648D301AA3F68E7F8536FB8568478 GSW_GetEnumerator_m04C241556FF7339B46570454360608449EC1EE58_gshared (GSW_t8857BC3AB3D15845559E0D3C6B8BC34AD8E0D2F9* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SmallFrozenSet_1_tDE7B6B4C98EB8442065DEA04C14788EA1A071737* L_0 = __this->____set;
		NullCheck((FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706*)L_0);
		Enumerator_tC7CE6D94112648D301AA3F68E7F8536FB8568478 L_1;
		L_1 = FrozenSet_1_GetEnumerator_m1429D218A6E8178BA2DFC3FF6C682AABD7F16298((FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706*)L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return L_1;
	}
}
IL2CPP_EXTERN_C  Enumerator_tC7CE6D94112648D301AA3F68E7F8536FB8568478 GSW_GetEnumerator_m04C241556FF7339B46570454360608449EC1EE58_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GSW_t8857BC3AB3D15845559E0D3C6B8BC34AD8E0D2F9* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<GSW_t8857BC3AB3D15845559E0D3C6B8BC34AD8E0D2F9>(__this);
	Enumerator_tC7CE6D94112648D301AA3F68E7F8536FB8568478 _returnValue;
	_returnValue = GSW_GetEnumerator_m04C241556FF7339B46570454360608449EC1EE58(_thisAdjusted, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GSW_Store_m9B85695CF374CDEB837F12D3C7EFC87B60FD7203_gshared (GSW_t0061A262D104F67CF731EDF5CDA9676416DB8031* __this, FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706* ___0_set, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706* L_0 = ___0_set;
		__this->____set = ((SmallValueTypeComparableFrozenSet_1_t1572E9A676BE7FF6EFC9CCF1664312605BDC81D6*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____set), (void*)((SmallValueTypeComparableFrozenSet_1_t1572E9A676BE7FF6EFC9CCF1664312605BDC81D6*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1))));
		return;
	}
}
IL2CPP_EXTERN_C  void GSW_Store_m9B85695CF374CDEB837F12D3C7EFC87B60FD7203_AdjustorThunk (RuntimeObject* __this, FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706* ___0_set, const RuntimeMethod* method)
{
	GSW_t0061A262D104F67CF731EDF5CDA9676416DB8031* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<GSW_t0061A262D104F67CF731EDF5CDA9676416DB8031>(__this);
	GSW_Store_m9B85695CF374CDEB837F12D3C7EFC87B60FD7203(_thisAdjusted, ___0_set, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GSW_get_Count_m34188F8B4E9BCFC8990F10F2669CB5FFEEC89C86_gshared (GSW_t0061A262D104F67CF731EDF5CDA9676416DB8031* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SmallValueTypeComparableFrozenSet_1_t1572E9A676BE7FF6EFC9CCF1664312605BDC81D6* L_0 = __this->____set;
		NullCheck((FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706*)L_0);
		int32_t L_1;
		L_1 = FrozenSet_1_get_Count_m0D2127C8451374E476181921F2456602820A3A1F((FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706*)L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t GSW_get_Count_m34188F8B4E9BCFC8990F10F2669CB5FFEEC89C86_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GSW_t0061A262D104F67CF731EDF5CDA9676416DB8031* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<GSW_t0061A262D104F67CF731EDF5CDA9676416DB8031>(__this);
	int32_t _returnValue;
	_returnValue = GSW_get_Count_m34188F8B4E9BCFC8990F10F2669CB5FFEEC89C86(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GSW_get_Comparer_m5BB61F05EE055B6AD0E453DE0B3D64709A62143C_gshared (GSW_t0061A262D104F67CF731EDF5CDA9676416DB8031* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SmallValueTypeComparableFrozenSet_1_t1572E9A676BE7FF6EFC9CCF1664312605BDC81D6* L_0 = __this->____set;
		NullCheck((FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706*)L_0);
		RuntimeObject* L_1;
		L_1 = FrozenSet_1_get_Comparer_mB3265D335E5104BC225CEFFFED328ACA8FC573D0_inline((FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706*)L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		return L_1;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* GSW_get_Comparer_m5BB61F05EE055B6AD0E453DE0B3D64709A62143C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GSW_t0061A262D104F67CF731EDF5CDA9676416DB8031* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<GSW_t0061A262D104F67CF731EDF5CDA9676416DB8031>(__this);
	RuntimeObject* _returnValue;
	_returnValue = GSW_get_Comparer_m5BB61F05EE055B6AD0E453DE0B3D64709A62143C(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GSW_FindItemIndex_m3E0A9DCA4784E563ECEB2273E199E47514BDE079_gshared (GSW_t0061A262D104F67CF731EDF5CDA9676416DB8031* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tEB05084495F3C61C1BD74E364BACD1E8400CDFA4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tEB05084495F3C61C1BD74E364BACD1E8400CDFA4);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SmallValueTypeComparableFrozenSet_1_t1572E9A676BE7FF6EFC9CCF1664312605BDC81D6* L_0 = __this->____set;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6)) ? ___0_item : &___0_item), SizeOf_T_tEB05084495F3C61C1BD74E364BACD1E8400CDFA4);
		NullCheck((FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706*)L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(25, (FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706*)L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6)) ? L_1: *(void**)L_1));
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t GSW_FindItemIndex_m3E0A9DCA4784E563ECEB2273E199E47514BDE079_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method)
{
	GSW_t0061A262D104F67CF731EDF5CDA9676416DB8031* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<GSW_t0061A262D104F67CF731EDF5CDA9676416DB8031>(__this);
	int32_t _returnValue;
	_returnValue = GSW_FindItemIndex_m3E0A9DCA4784E563ECEB2273E199E47514BDE079(_thisAdjusted, ___0_item, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC7CE6D94112648D301AA3F68E7F8536FB8568478 GSW_GetEnumerator_m0B357B4DFDD6B7F84BD688B6823B940B7487DE6A_gshared (GSW_t0061A262D104F67CF731EDF5CDA9676416DB8031* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SmallValueTypeComparableFrozenSet_1_t1572E9A676BE7FF6EFC9CCF1664312605BDC81D6* L_0 = __this->____set;
		NullCheck((FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706*)L_0);
		Enumerator_tC7CE6D94112648D301AA3F68E7F8536FB8568478 L_1;
		L_1 = FrozenSet_1_GetEnumerator_m1429D218A6E8178BA2DFC3FF6C682AABD7F16298((FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706*)L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return L_1;
	}
}
IL2CPP_EXTERN_C  Enumerator_tC7CE6D94112648D301AA3F68E7F8536FB8568478 GSW_GetEnumerator_m0B357B4DFDD6B7F84BD688B6823B940B7487DE6A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GSW_t0061A262D104F67CF731EDF5CDA9676416DB8031* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<GSW_t0061A262D104F67CF731EDF5CDA9676416DB8031>(__this);
	Enumerator_tC7CE6D94112648D301AA3F68E7F8536FB8568478 _returnValue;
	_returnValue = GSW_GetEnumerator_m0B357B4DFDD6B7F84BD688B6823B940B7487DE6A(_thisAdjusted, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GSW_Store_m03EC86FC485B8E1F9D7346591C2531D1D302605D_gshared (GSW_t1B36104E24C1F13AA1B79B38D02C46F0656FC7C4* __this, FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706* ___0_set, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706* L_0 = ___0_set;
		__this->____set = ((SmallValueTypeDefaultComparerFrozenSet_1_t92FB2791E5B14877BECD7B64AA760805F5D38442*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____set), (void*)((SmallValueTypeDefaultComparerFrozenSet_1_t92FB2791E5B14877BECD7B64AA760805F5D38442*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1))));
		return;
	}
}
IL2CPP_EXTERN_C  void GSW_Store_m03EC86FC485B8E1F9D7346591C2531D1D302605D_AdjustorThunk (RuntimeObject* __this, FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706* ___0_set, const RuntimeMethod* method)
{
	GSW_t1B36104E24C1F13AA1B79B38D02C46F0656FC7C4* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<GSW_t1B36104E24C1F13AA1B79B38D02C46F0656FC7C4>(__this);
	GSW_Store_m03EC86FC485B8E1F9D7346591C2531D1D302605D(_thisAdjusted, ___0_set, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GSW_get_Count_m13CA3ED532BF5053A42B7177E6B3318FC03FAC5F_gshared (GSW_t1B36104E24C1F13AA1B79B38D02C46F0656FC7C4* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SmallValueTypeDefaultComparerFrozenSet_1_t92FB2791E5B14877BECD7B64AA760805F5D38442* L_0 = __this->____set;
		NullCheck((FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706*)L_0);
		int32_t L_1;
		L_1 = FrozenSet_1_get_Count_m0D2127C8451374E476181921F2456602820A3A1F((FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706*)L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t GSW_get_Count_m13CA3ED532BF5053A42B7177E6B3318FC03FAC5F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GSW_t1B36104E24C1F13AA1B79B38D02C46F0656FC7C4* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<GSW_t1B36104E24C1F13AA1B79B38D02C46F0656FC7C4>(__this);
	int32_t _returnValue;
	_returnValue = GSW_get_Count_m13CA3ED532BF5053A42B7177E6B3318FC03FAC5F(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GSW_get_Comparer_m82013CBE6F3EBE379B22BFFBF8C31218502B9EBC_gshared (GSW_t1B36104E24C1F13AA1B79B38D02C46F0656FC7C4* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SmallValueTypeDefaultComparerFrozenSet_1_t92FB2791E5B14877BECD7B64AA760805F5D38442* L_0 = __this->____set;
		NullCheck((FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706*)L_0);
		RuntimeObject* L_1;
		L_1 = FrozenSet_1_get_Comparer_mB3265D335E5104BC225CEFFFED328ACA8FC573D0_inline((FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706*)L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		return L_1;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* GSW_get_Comparer_m82013CBE6F3EBE379B22BFFBF8C31218502B9EBC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GSW_t1B36104E24C1F13AA1B79B38D02C46F0656FC7C4* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<GSW_t1B36104E24C1F13AA1B79B38D02C46F0656FC7C4>(__this);
	RuntimeObject* _returnValue;
	_returnValue = GSW_get_Comparer_m82013CBE6F3EBE379B22BFFBF8C31218502B9EBC(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GSW_FindItemIndex_mCAD2F658681A68B9285C2A4552406387EFD324A2_gshared (GSW_t1B36104E24C1F13AA1B79B38D02C46F0656FC7C4* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t97610E6EBAE26A618CE891FB0BEF12F74FED3C0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t97610E6EBAE26A618CE891FB0BEF12F74FED3C0C);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SmallValueTypeDefaultComparerFrozenSet_1_t92FB2791E5B14877BECD7B64AA760805F5D38442* L_0 = __this->____set;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6)) ? ___0_item : &___0_item), SizeOf_T_t97610E6EBAE26A618CE891FB0BEF12F74FED3C0C);
		NullCheck((FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706*)L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(25, (FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706*)L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6)) ? L_1: *(void**)L_1));
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t GSW_FindItemIndex_mCAD2F658681A68B9285C2A4552406387EFD324A2_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method)
{
	GSW_t1B36104E24C1F13AA1B79B38D02C46F0656FC7C4* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<GSW_t1B36104E24C1F13AA1B79B38D02C46F0656FC7C4>(__this);
	int32_t _returnValue;
	_returnValue = GSW_FindItemIndex_mCAD2F658681A68B9285C2A4552406387EFD324A2(_thisAdjusted, ___0_item, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC7CE6D94112648D301AA3F68E7F8536FB8568478 GSW_GetEnumerator_m737EB08B5F7E79E306ACA0C2484A215BF304AF32_gshared (GSW_t1B36104E24C1F13AA1B79B38D02C46F0656FC7C4* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SmallValueTypeDefaultComparerFrozenSet_1_t92FB2791E5B14877BECD7B64AA760805F5D38442* L_0 = __this->____set;
		NullCheck((FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706*)L_0);
		Enumerator_tC7CE6D94112648D301AA3F68E7F8536FB8568478 L_1;
		L_1 = FrozenSet_1_GetEnumerator_m1429D218A6E8178BA2DFC3FF6C682AABD7F16298((FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706*)L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return L_1;
	}
}
IL2CPP_EXTERN_C  Enumerator_tC7CE6D94112648D301AA3F68E7F8536FB8568478 GSW_GetEnumerator_m737EB08B5F7E79E306ACA0C2484A215BF304AF32_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GSW_t1B36104E24C1F13AA1B79B38D02C46F0656FC7C4* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<GSW_t1B36104E24C1F13AA1B79B38D02C46F0656FC7C4>(__this);
	Enumerator_tC7CE6D94112648D301AA3F68E7F8536FB8568478 _returnValue;
	_returnValue = GSW_GetEnumerator_m737EB08B5F7E79E306ACA0C2484A215BF304AF32(_thisAdjusted, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GSW_Store_m7261BA892A37D36B7D097C836975A7EFAC43D227_gshared (GSW_t707226C8C18E35D611B512DB361D4FCC698EA58C* __this, FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706* ___0_set, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706* L_0 = ___0_set;
		__this->____set = ((ValueTypeDefaultComparerFrozenSet_1_t7446762EF99A96384303A51667262A2C312FF312*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____set), (void*)((ValueTypeDefaultComparerFrozenSet_1_t7446762EF99A96384303A51667262A2C312FF312*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1))));
		return;
	}
}
IL2CPP_EXTERN_C  void GSW_Store_m7261BA892A37D36B7D097C836975A7EFAC43D227_AdjustorThunk (RuntimeObject* __this, FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706* ___0_set, const RuntimeMethod* method)
{
	GSW_t707226C8C18E35D611B512DB361D4FCC698EA58C* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<GSW_t707226C8C18E35D611B512DB361D4FCC698EA58C>(__this);
	GSW_Store_m7261BA892A37D36B7D097C836975A7EFAC43D227(_thisAdjusted, ___0_set, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GSW_get_Count_m59CC5450DBB3116FE979B34BC2BE335366C4A26C_gshared (GSW_t707226C8C18E35D611B512DB361D4FCC698EA58C* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		ValueTypeDefaultComparerFrozenSet_1_t7446762EF99A96384303A51667262A2C312FF312* L_0 = __this->____set;
		NullCheck((FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706*)L_0);
		int32_t L_1;
		L_1 = FrozenSet_1_get_Count_m0D2127C8451374E476181921F2456602820A3A1F((FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706*)L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t GSW_get_Count_m59CC5450DBB3116FE979B34BC2BE335366C4A26C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GSW_t707226C8C18E35D611B512DB361D4FCC698EA58C* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<GSW_t707226C8C18E35D611B512DB361D4FCC698EA58C>(__this);
	int32_t _returnValue;
	_returnValue = GSW_get_Count_m59CC5450DBB3116FE979B34BC2BE335366C4A26C(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GSW_get_Comparer_m07915B7FE8CB540FE0331CA12267BCA098E69415_gshared (GSW_t707226C8C18E35D611B512DB361D4FCC698EA58C* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		ValueTypeDefaultComparerFrozenSet_1_t7446762EF99A96384303A51667262A2C312FF312* L_0 = __this->____set;
		NullCheck((FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706*)L_0);
		RuntimeObject* L_1;
		L_1 = FrozenSet_1_get_Comparer_mB3265D335E5104BC225CEFFFED328ACA8FC573D0_inline((FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706*)L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		return L_1;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* GSW_get_Comparer_m07915B7FE8CB540FE0331CA12267BCA098E69415_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GSW_t707226C8C18E35D611B512DB361D4FCC698EA58C* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<GSW_t707226C8C18E35D611B512DB361D4FCC698EA58C>(__this);
	RuntimeObject* _returnValue;
	_returnValue = GSW_get_Comparer_m07915B7FE8CB540FE0331CA12267BCA098E69415(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GSW_FindItemIndex_m2EA6641908617A8524180EDC9F77D47F85D5E115_gshared (GSW_t707226C8C18E35D611B512DB361D4FCC698EA58C* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t868E5B4ADE9DBDA260C3A18BA8111323732BC629 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t868E5B4ADE9DBDA260C3A18BA8111323732BC629);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		ValueTypeDefaultComparerFrozenSet_1_t7446762EF99A96384303A51667262A2C312FF312* L_0 = __this->____set;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6)) ? ___0_item : &___0_item), SizeOf_T_t868E5B4ADE9DBDA260C3A18BA8111323732BC629);
		NullCheck((FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706*)L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(25, (FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706*)L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6)) ? L_1: *(void**)L_1));
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t GSW_FindItemIndex_m2EA6641908617A8524180EDC9F77D47F85D5E115_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method)
{
	GSW_t707226C8C18E35D611B512DB361D4FCC698EA58C* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<GSW_t707226C8C18E35D611B512DB361D4FCC698EA58C>(__this);
	int32_t _returnValue;
	_returnValue = GSW_FindItemIndex_m2EA6641908617A8524180EDC9F77D47F85D5E115(_thisAdjusted, ___0_item, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC7CE6D94112648D301AA3F68E7F8536FB8568478 GSW_GetEnumerator_mB4FB39CB54FD1C9174DEA6697E8D80E9AAF476EC_gshared (GSW_t707226C8C18E35D611B512DB361D4FCC698EA58C* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		ValueTypeDefaultComparerFrozenSet_1_t7446762EF99A96384303A51667262A2C312FF312* L_0 = __this->____set;
		NullCheck((FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706*)L_0);
		Enumerator_tC7CE6D94112648D301AA3F68E7F8536FB8568478 L_1;
		L_1 = FrozenSet_1_GetEnumerator_m1429D218A6E8178BA2DFC3FF6C682AABD7F16298((FrozenSet_1_tC407F4C7767D80D715AF83F885A5D650F59C1706*)L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return L_1;
	}
}
IL2CPP_EXTERN_C  Enumerator_tC7CE6D94112648D301AA3F68E7F8536FB8568478 GSW_GetEnumerator_mB4FB39CB54FD1C9174DEA6697E8D80E9AAF476EC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GSW_t707226C8C18E35D611B512DB361D4FCC698EA58C* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<GSW_t707226C8C18E35D611B512DB361D4FCC698EA58C>(__this);
	Enumerator_tC7CE6D94112648D301AA3F68E7F8536FB8568478 _returnValue;
	_returnValue = GSW_GetEnumerator_mB4FB39CB54FD1C9174DEA6697E8D80E9AAF476EC(_thisAdjusted, method);
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericComparer_1_Compare_m393DE4691B4D2FF3F0C4294951366C9407C906E5_gshared (GenericComparer_1_tA1FB6768366C07A87C3181B50FABC4AA0BE27C45* __this, Il2CppFullySharedGenericAny ___0_x, Il2CppFullySharedGenericAny ___1_y, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t206AC7254049416911476B50713D159D33505E77 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
	void* L_5 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t206AC7254049416911476B50713D159D33505E77);
	const Il2CppFullySharedGenericAny L_2 = L_0;
	const Il2CppFullySharedGenericAny L_4 = L_0;
	const Il2CppFullySharedGenericAny L_9 = L_0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? ___0_x : &___0_x), SizeOf_T_t206AC7254049416911476B50713D159D33505E77);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), L_0);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? ___1_y : &___1_y), SizeOf_T_t206AC7254049416911476B50713D159D33505E77);
		bool L_3 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), L_2);
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? ___1_y : &___1_y), SizeOf_T_t206AC7254049416911476B50713D159D33505E77);
		Il2CppConstrainedCallData L_6;
		Il2CppMethodPointer L_7 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), il2cpp_rgctx_method(method->klass->rgctx_data, 2), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? ___0_x : &___0_x), &L_6, L_5);
		int32_t L_8 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(L_7, L_6.method,L_6.thisPtr, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? L_4: *(void**)L_4));
		return L_8;
	}

IL_001f:
	{
		return 1;
	}

IL_0021:
	{
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? ___1_y : &___1_y), SizeOf_T_t206AC7254049416911476B50713D159D33505E77);
		bool L_10 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), L_9);
		if (!L_10)
		{
			goto IL_002b;
		}
	}
	{
		return (-1);
	}

IL_002b:
	{
		return 0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericComparer_1_Equals_mA0C1FE8461B22BD8B379BB0CA80C902F6AFBEEB2_gshared (GenericComparer_1_tA1FB6768366C07A87C3181B50FABC4AA0BE27C45* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_obj;
		return (bool)((!(((RuntimeObject*)(GenericComparer_1_tA1FB6768366C07A87C3181B50FABC4AA0BE27C45*)((GenericComparer_1_tA1FB6768366C07A87C3181B50FABC4AA0BE27C45*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 3)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericComparer_1_GetHashCode_m14EC8AF8F5929879F5CF406C7A3004B6B5E02D1E_gshared (GenericComparer_1_tA1FB6768366C07A87C3181B50FABC4AA0BE27C45* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericComparer_1__ctor_mDDD50F323B2A94CCEC4F3BDF7AAC738DF7C3CB26_gshared (GenericComparer_1_tA1FB6768366C07A87C3181B50FABC4AA0BE27C45* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Comparer_1__ctor_m15D27727BD23D4B1743984704A4FD84E84A9BE40((Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		intptr_t L_0 = ___0_value1;
		intptr_t L_1 = ___1_value2;
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline (intptr_t* __this, void* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		void* L_0 = ___0_value;
		*__this = ((intptr_t)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t FunctionPointer_1_get_Value_mA1F1CB8C8E8B4B8030D49BFBEF55560DEB03FDD5_gshared_inline (FunctionPointer_1_t45E67205E6D22523A4FEF46DC7A859C5C14566BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionPointer_1_tB635C696E956CB8DC2B055F1669431B2F6D73193_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3550));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 3551));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 3552));
		intptr_t L_0 = __this->____ptr;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m051D495AEDE8F8F98AF26E7709F9873DF4926036_gshared_inline (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_nativeSlice, const RuntimeMethod* method) 
{
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_nativeSlice));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3553));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3554));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3555));
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		return (void*)(L_1);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeSlice_1_get_Length_m0225CA0944599882AC9C2A06A99FDC685362AFBE_gshared_inline (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeSlice_1_t4906DEA99476205C846F099C0196685F790D468E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3379));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3380));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3381));
		int32_t L_0 = __this->___m_Length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 GPUInstanceDataBufferReadback_1_get_data_m85A66715F31C0E08C13BA9C091BE27292CEAFA28_gshared_inline (GPUInstanceDataBufferReadback_1_t5AE9021A468A030012E49A0B36B7A5A237D5BDA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPUInstanceDataBufferReadback_1_tEEC8A61DC2A96C3D1B8470E24D4E9EFDE8C598F3_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 3382));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 3383));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 3384));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = __this->___U3CdataU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GPUInstanceDataBufferReadback_1_set_data_m7113F6AA3060BFE24F83C25673C2F5D85A7092A7_gshared_inline (GPUInstanceDataBufferReadback_1_t5AE9021A468A030012E49A0B36B7A5A237D5BDA0* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPUInstanceDataBufferReadback_1_tEEC8A61DC2A96C3D1B8470E24D4E9EFDE8C598F3_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 3385));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 3386));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 3387));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_value;
		__this->___U3CdataU3Ek__BackingField = L_0;
		return;
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
