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
template <typename R>
struct VirtualFuncInvoker0Invoker
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, NULL, &ret);
		return ret;
	}
};
template <typename R>
struct GenericVirtualFuncInvoker0Invoker
{
	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		R ret;
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, NULL, &ret);
		return ret;
	}
};
template <typename R>
struct InterfaceFuncInvoker0Invoker
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, NULL, &ret);
		return ret;
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0Invoker
{
	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		R ret;
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, NULL, &ret);
		return ret;
	}
};
template <typename R>
struct InvokerFuncInvoker0
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		R ret;
		method->invoker_method(methodPtr, method, obj, NULL, &ret);
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

struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
struct Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B;
struct Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505;
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99;
struct Action_1_t21FD3C63C847CD92920291C92517DD3E3D04358C;
struct Action_2_t8A22776B983FC159A556DCE6E74222D43670F873;
struct Action_2_t1D42C7D8DCD2DEB7C556FB3783F0EDAFF694E5E8;
struct Dictionary_2_tBCCCFBCAC02A3C03E3C84D75696D4860D7444A35;
struct Dictionary_2_t6682243BDABA638FCBE4F1D9875B5B1455A7686E;
struct Dictionary_2_t4055F6540F36F21F9FEDAFB92D8E0089B38EBBC8;
struct Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C;
struct Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F;
struct Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2;
struct Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D;
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0;
struct GPUBuffer_1_tB27A42EE52EA38FD7117C4EC0B1E42703FFE4C36;
struct GPUBuffer_1_tA6A8BA754BA691383F7FA4302803FC11DA7373F3;
struct HashSet_1_t0F16759FF079A28DCA2DCF39BA6A61B5D502A475;
struct IEqualityComparer_1_tE6B9DA002A35D6F58856181BEAC9DAC9D371E3E3;
struct InputStateHistory_1_tFE6497AA1E7DC5B54CA3C00976576A7E88C77798;
struct List_1_t592DF2E59D6E244DA0041698383484A07C7E0480;
struct List_1_t96E9133B70FB6765E6B138E810D33E18901715DA;
struct List_1_tAB87E4B5971ED4449775D015F11B4E1FC43B19AE;
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
struct List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F;
struct List_1_t41896DF347A129D13205BBFADE03DFB21E05E459;
struct List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95;
struct List_1_t90832B88D7207769654164CC28440CF594CC397D;
struct List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A;
struct List_1_t70EE7982F45810D4B024CF720D910E67974A3094;
struct List_1_tB0B308D151FBF226396B20253C1FF11CF7D10D3A;
struct PopupTextElement_t6E5BB59D987F4D2B6989AFA53F762ADE9A822B3C;
struct Popup_1_tD6BBE7B9C18054FA9988518B43C91C9C2F9D36B3;
struct PredicateWrapper_1_tA8CCC29D508BB2FCF14F828C03D07CBDC4F6C1F1;
struct Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107;
struct AttachmentDescriptorU5BU5D_tC70107EBD955FE94BA31C7FDC146069EF9C547C1;
struct BezierPathSegmentU5BU5D_tF53DBE7F0C3C69BC4563DEF35F2E91C9D590D3A1;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5;
struct LocalKeywordU5BU5D_tB7EDF3FB744FE86534FF8190C671AD0E9BE54CA9;
struct NameAndParametersU5BU5D_tA6C2AC34ACDB1967A7A2CEF4BE1D717ADA695CA2;
struct NamedValueU5BU5D_tADD8F1373B88C55F68499688D72C21A97F63303A;
struct PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D;
struct PropertyPathPartU5BU5D_t7994D542F14DDDDEABB1792C335C20149399AEBB;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct StyleValueHandleU5BU5D_t66B7732469E9E30B1FB9A6E386315DAB36914ADE;
struct SubPassDescriptorU5BU5D_tF2049226934378D3C1994935C781C945FC75C708;
struct TextCoreVertexU5BU5D_tB1DD4645DEB2946FA2271F94CE23D57FB4B9FE17;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2;
struct TypeU5BU5D_t386A95FC3A42CDDC6693AD26E6C6B717BEFC82B3;
struct DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE;
struct RowCountsU5BU5D_t5643308C6F852B3BEE7DF8B31FF7FC06780B13CD;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712;
struct Awaitable_t690337FEC1C411606E233EA36A41337B931C23CB;
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303;
struct Binding_tA1358A155852138C1926082E4F3245B6F631CBED;
struct BitSet_t89F906D542C052F4565FBEF32E1E9713B966026B;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
struct CompilerContextData_t0E7B5B9E1A939E4546A3AE9D8357556FC956A77D;
struct ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233;
struct CullingAllocationInfo_tB260F5CD0B290F74E145EB16E54B901CC68D9D5A;
struct DebugInfo_t03C716886CE7E99C1662D1C236CCC2CC6F18A167;
struct DecalCachedChunk_tDEF493C8A3A1F442BDEC1794BDDA0996B32DCACE;
struct DecalCulledChunk_tFD4472F0ADDD173C7B13E8B0529983E745F12ED3;
struct DecalDrawCallChunk_tBD0491A1B0B7D19DF01A5C9EDE0A40CBEDBF7A3A;
struct DecalEntityChunk_t2CDCBFA35711DA074631D26572EF9755A3AD740C;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85;
struct EventConsumer_t6D08A21A3FF574758C289118775786B6D35754F3;
struct FieldInfo_t;
struct FilterFunctionDefinition_tFE41DB19FFB74F4D2B54BF44D1D2051B57FC82F2;
struct Finger_t0E27A005E4B818F9D0078D69AF2B22649DDD4C6A;
struct Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0;
struct FontAsset_t61A6446D934E582651044E33D250EA8D306AB958;
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E;
struct GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1;
struct Handler_t6FB851C86EF75451F6C6D94F0F5470324D915F23;
struct IBinding_t02FD99E9C9F2072B28E110F16C157666F5B2DBC7;
struct IEventHandler_tB1627CA1B7729F3E714572E69A79C91A1578C9A3;
struct IFill_t4B489CA494A2042D3FCC143E718D89AEFE1D35AE;
struct IPanel_tAD0F3807B6DE2ECA557380E7DB5F3A179BE5A7A5;
struct IPanelComponent_tD81E0440587CF3F01EBF4A2726F88D81C40D138F;
struct IVisualElementScheduledItem_t309F1A5445514122A9E3F64182D0D8A4DE34C48F;
struct InlineStyleAccess_t5CA7877999C9442491A220AE50D605C84D09A165;
struct InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5;
struct JsonSchema_t5C01341D5179E59C06CA91638D4DAF86199EBDB6;
struct JsonSchemaModel_t43FC3C8B6C4006B94672B067560A143FBCFDDF4D;
struct Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70;
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
struct MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E;
struct MethodInfo_t;
struct NamingStrategy_tB85DD4A9F6C33F668AF7273D3B5193ABC4617D50;
struct Page_tB4EA8095DF85BAF22AB8FCA71400121E721B57C9;
struct PathRef_t76F7677792A14AF9D6A6EAB7F08C1A3DC2B27A55;
struct Popup_tCD2F8EF10FBFD80CADEC755F65984D5D72BA5F4A;
struct RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B;
struct ReflectionProbe_t7CFA63F0340447A0069E66DB261A8A1B79BA8A2D;
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
struct RenderData_t1ABE116B2B5E0409AC699E195922516606531DC2;
struct ResolvedStyleAccess_t226CC840EBACEE31CE1139ED5F717532AFFAEB45;
struct SVGPropertySheet_t5023A4ACFF15D1D365A142CD93B1A150AEEF276C;
struct ScriptTypeDescriptor_t217D83EB2122B4DEA21A50E9525D681978EF27A9;
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
struct String_t;
struct StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD;
struct StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428;
struct StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527;
struct TextEditingManipulator_t9AC543C81F3778888F421C8D93003EBC8902EB29;
struct TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0;
struct TextSelectingManipulator_t85DD873E0C5537C1F8468B6FE5E4C9995B193855;
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A;
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
struct Type_t;
struct UIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77;
struct UITKTextHandle_t1FF3B4EC2367C05F42D61C660D6FE30DF91C06CE;
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
struct Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7;
struct VisualEffectAsset_t0CD57FD9980CD68033BD96DA356697F92A69E688;
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115;
struct VisualElementTransformData_t3DD575B5990B68FF956673EFF036171C86A38DF3;
struct VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377;
struct XRPass_tFC4577E97B88E0EAAAB2EB387AB3A92E9EB9C6DF;
struct BindingData_t63DF4F2F4FA1BE1BD6130C2DDAE1888DCD76381A;
struct NamespaceDataBuilder_tD5ECDB1682058E50B942AED9241D5181C53927C3;
struct UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4;
struct EqualityComparer_tF8FCE99C5DBB2F35D74728CB65346435381CFD5B;
struct Data_t6BD087CC0FA9794D342D260035A70E365224C66E;
struct TypeData_t01D670B4E71B5571B38C7412B1E652A47D6AF66A;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_UIElementsModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_AppUI[];
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteralA7C63ECDBC55723800FD03B449D6E8EF799719A2;
IL2CPP_EXTERN_C const RuntimeMethod* Popup_get_containerView_m371F24165040F772818042CF2AFEFC5FCF8719A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Popup_get_contentView_m9F565185F46C1235343F98B56A3D523595F52D07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Popup_get_view_mF578D79EAC76D19497F956C68487ED3827D80338_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Popup_set_containerView_mC3FBE53D0E7076F933E1E7D4DE76078E7EE5C8E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Popup_set_keyboardDismissEnabled_m1615718A8DD3B174392736EBF6ECE258E34786B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* PopupTextElement_tC61D8A39B186E784E4FC5034EFE5CD6B4151F522_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Popup_1_tD5E73E4129084F904857B2BBFE581F4D68BEBAF6_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Popup_tCD2F8EF10FBFD80CADEC755F65984D5D72BA5F4A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* PredicateWrapper_1_t4258D6745E06C390A69E717C6DCF009C176EF117_0_0_0_var;
struct AttachmentDescriptor_tBAC9B26B50BB0838C5C0CC22BB296F9DFF41276E;
struct BezierPathSegment_t06C9ADE21B052813D01EA146DF823E9A58804577;
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_com;
struct DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_pinvoke;
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_marshaled_com;
struct LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB_marshaled_com;
struct LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB_marshaled_pinvoke;
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com;
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke;
struct StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D;
struct SubPassDescriptor_t912FE0FF4C99BF293A1E4442353C35B2BB8997A9;
struct TextCoreVertex_t012334F340F916622ED5237971E8BA32198060E4;
struct VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct PredicateWrapper_1_tA8CCC29D508BB2FCF14F828C03D07CBDC4F6C1F1  : public RuntimeObject
{
	Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___predicate;
};
struct CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4  : public RuntimeObject
{
	bool ___isIMGUIContainer;
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* ___m_CallbackRegistry;
};
struct Popup_tCD2F8EF10FBFD80CADEC755F65984D5D72BA5F4A  : public RuntimeObject
{
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_InvokeShownAction;
	Handler_t6FB851C86EF75451F6C6D94F0F5470324D915F23* ___m_Handler;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_PrepareAnimateViewInAction;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_OnLayoutReadyToAnimateInAction;
	RuntimeObject* ___m_ScheduledPrepareAnimateViewIn;
	RuntimeObject* ___m_ScheduledAnimateViewIn;
	RuntimeObject* ___m_ScheduledLayoutReadyToAnimateIn;
	bool ___U3CkeyboardDismissEnabledU3Ek__BackingField;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CviewU3Ek__BackingField;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CcontainerViewU3Ek__BackingField;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CreferenceViewU3Ek__BackingField;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CcontentViewU3Ek__BackingField;
	bool ___U3CfocusOutDismissableU3Ek__BackingField;
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
struct HashEntry_1_t321B6CFFB564D62096DCCA22A3A491DE5469D195 
{
	int32_t ___hash;
	int32_t ___lastFrameUsed;
	CompilerContextData_t0E7B5B9E1A939E4546A3AE9D8357556FC956A77D* ___compiledGraph;
};
struct ImmutableArray_1_tF74A2108C98B37B14FB980028B68A7BB4931CA80 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___array;
};
struct ImmutableArray_1_t8E43EB1F8BCFAB117170CA2801F61323E24D52B3 
{
	RowCountsU5BU5D_t5643308C6F852B3BEE7DF8B31FF7FC06780B13CD* ___array;
};
struct KeyValuePair_2_t17031FB269381984C5AB10E188C72C4A33DBA0A9 
{
	AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___key;
	AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___value;
};
struct KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 
{
	int32_t ___key;
	RuntimeObject* ___value;
};
struct KeyValuePair_2_t8559CB5ECA5D844B7D47AB662A8ABFFD66B499F8 
{
	int32_t ___key;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___value;
};
struct KeyValuePair_2_t6FBA699E626F0DB5D988252D056F02A4938CF89C 
{
	String_t* ___key;
	bool ___value;
};
struct KeyValuePair_2_t969EAFA1501CD07A6B5F6B1BED9FE80CC0C5B835 
{
	String_t* ___key;
	JsonSchema_t5C01341D5179E59C06CA91638D4DAF86199EBDB6* ___value;
};
struct KeyValuePair_2_t0A7E69AAF3E44EDEFBFF8E8F2A292C2E59EDD824 
{
	String_t* ___key;
	JsonSchemaModel_t43FC3C8B6C4006B94672B067560A143FBCFDDF4D* ___value;
};
struct KeyValuePair_2_tCEA5D86B254B011C6E731855788252CD767DEF0E 
{
	String_t* ___key;
	SVGPropertySheet_t5023A4ACFF15D1D365A142CD93B1A150AEEF276C* ___value;
};
struct KeyValuePair_2_t30EE4BA67A5ECAE3A147073BAF7788CA4A4A0DE8 
{
	String_t* ___key;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___value;
};
struct NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t135E2A23AA4EBDBCA846942F90F29A5004E8ACB5 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t8E27FA1E73FC8A04E990C238360882D58A2DB2F9 
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
struct Popup_1_tD6BBE7B9C18054FA9988518B43C91C9C2F9D36B3  : public Popup_tCD2F8EF10FBFD80CADEC755F65984D5D72BA5F4A
{
	Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0* ___m_LastFocusedElement;
	Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* ___shown;
	Action_2_t8A22776B983FC159A556DCE6E74222D43670F873* ___dismissed;
};
struct Range_t73F49141308EC061368B234BCFEFFB5B13783A84 
{
	uint32_t ___start;
	uint32_t ___count;
};
struct Range_t4141DBC68D9D1BE36B093880FA4825058579969A 
{
	uint32_t ___start;
	uint32_t ___count;
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
struct Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4 
{
	InputStateHistory_1_tFE6497AA1E7DC5B54CA3C00976576A7E88C77798* ___m_Owner;
	int32_t ___m_IndexPlusOne;
	uint32_t ___m_Version;
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
struct ValueTuple_2_t51FF23F78F8C8C67877CE8CD8CDC724760651AC4 
{
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___Item1;
	XRPass_tFC4577E97B88E0EAAAB2EB387AB3A92E9EB9C6DF* ___Item2;
};
struct ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D 
{
	int32_t ___Item1;
	int32_t ___Item2;
};
struct ValueTuple_2_tE3CBF4947E2EEAEB4DC6C2F7877FFDA4AFCF3FAD 
{
	int32_t ___Item1;
	Il2CppSharedGenericObject* ___Item2;
};
struct ValueTuple_2_t8F3A83A2600D34C7DB1579395C90D607B3076884 
{
	Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70* ___Item1;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___Item2;
};
struct ValueTuple_2_tCF0A4C74D54E180325228AD0E5EAA46EEB37C8ED 
{
	ScriptTypeDescriptor_t217D83EB2122B4DEA21A50E9525D681978EF27A9* ___Item1;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___Item2;
};
struct ValueTuple_2_tA369C763469BCB1C81541EE3A74BAE7F5F7A4A91 
{
	String_t* ___Item1;
	String_t* ___Item2;
};
struct ValueTuple_2_tB97F43966F527B2125B7A49F02F05E9A07A60494 
{
	String_t* ___Item1;
	Type_t* ___Item2;
};
struct ValueTuple_2_tF34EACCF71A708BBFA7545E7D3A1298BB2019C7D 
{
	Type_t* ___Item1;
	int32_t ___Item2;
};
struct ValueTuple_2_t4B78BAC724959553DC343E61D6BF7758B64F6907 
{
	Type_t* ___Item1;
	Type_t* ___Item2;
};
struct ValueTuple_2_t58F922754242CA7DD28E75FAD3302597DBCB39EF 
{
	Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* ___Item1;
	float ___Item2;
};
struct ValueTuple_3_t0F09E154952FC225E7D29ADD0F7F3316C66798DB 
{
	int32_t ___Item1;
	int32_t ___Item2;
	String_t* ___Item3;
};
struct ValueTuple_4_t784C8D5C582AC2847ED64473EA0EEC79C2A500DD 
{
	int32_t ___Item1;
	int32_t ___Item2;
	int32_t ___Item3;
	int32_t ___Item4;
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
struct BezierContour_tBE4765C820408C08CDAB5A3F8C4D6D48603CA0D7 
{
	BezierPathSegmentU5BU5D_tF53DBE7F0C3C69BC4563DEF35F2E91C9D590D3A1* ___U3CSegmentsU3Ek__BackingField;
	bool ___U3CClosedU3Ek__BackingField;
};
struct BezierContour_tBE4765C820408C08CDAB5A3F8C4D6D48603CA0D7_marshaled_pinvoke
{
	BezierPathSegment_t06C9ADE21B052813D01EA146DF823E9A58804577* ___U3CSegmentsU3Ek__BackingField;
	int32_t ___U3CClosedU3Ek__BackingField;
};
struct BezierContour_tBE4765C820408C08CDAB5A3F8C4D6D48603CA0D7_marshaled_com
{
	BezierPathSegment_t06C9ADE21B052813D01EA146DF823E9A58804577* ___U3CSegmentsU3Ek__BackingField;
	int32_t ___U3CClosedU3Ek__BackingField;
};
struct BlobHandle_t1F9CE60800BF286206910390ADF888833881CD2F 
{
	uint32_t ____value;
};
struct Bone_t2558B1DD1E4F405EA4D76A3B8D5149CA16011975 
{
	uint64_t ___m_DeviceId;
	uint32_t ___m_FeatureIndex;
};
struct BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F 
{
	float ___m_Weight0;
	float ___m_Weight1;
	float ___m_Weight2;
	float ___m_Weight3;
	int32_t ___m_BoneIndex0;
	int32_t ___m_BoneIndex1;
	int32_t ___m_BoneIndex2;
	int32_t ___m_BoneIndex3;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
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
struct ConstraintSource_tA4C8733A808A376FC2767B6CB984C63870357C5F 
{
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_SourceTransform;
	float ___m_Weight;
};
struct ConstraintSource_tA4C8733A808A376FC2767B6CB984C63870357C5F_marshaled_pinvoke
{
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_SourceTransform;
	float ___m_Weight;
};
struct ConstraintSource_tA4C8733A808A376FC2767B6CB984C63870357C5F_marshaled_com
{
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_SourceTransform;
	float ___m_Weight;
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
struct DepthState_t798415D2C1D9202E555FEE5D4C5FDF6B3A077255 
{
	uint8_t ___m_WriteEnabled;
	int8_t ___m_CompareFunction;
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
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct DoublePoint_tD37B3852EC805C6082634F8E7D0D78E88FA3AB9C 
{
	double ___X;
	double ___Y;
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
struct EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD 
{
	uint32_t ____state;
};
struct ExportedTypeHandle_t8AFABF92E22B7FC457281B3D04746A50D4BB8238 
{
	int32_t ____rowId;
};
struct FieldDefinitionHandle_tCD98F30CC58BCAB4BA781B3062B69F3E9FFB8090 
{
	int32_t ____rowId;
};
struct Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0  : public CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4
{
	bool ___m_Focusable;
	int32_t ___m_TabIndex;
	bool ___m_DelegatesFocus;
	bool ___m_ExcludeFromFocusRing;
	bool ___U3CisEligibleToReceiveFocusFromDisabledChildU3Ek__BackingField;
};
struct FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED 
{
	int32_t ___m_Code;
};
struct FrameTimeSample_tADB152E5D63C6EB073852FBE9D9EE9A66CA31AA7 
{
	float ___FramesPerSecond;
	float ___FullFrameTime;
	float ___MainThreadCPUFrameTime;
	float ___MainThreadCPUPresentWaitTime;
	float ___RenderThreadCPUFrameTime;
	float ___GPUFrameTime;
};
struct GeometryPoolSubmeshData_t0332347418E38A9EF6929F821C89AE8309D26477 
{
	int32_t ___submeshIndex;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
};
struct GeometryPoolSubmeshData_t0332347418E38A9EF6929F821C89AE8309D26477_marshaled_pinvoke
{
	int32_t ___submeshIndex;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
};
struct GeometryPoolSubmeshData_t0332347418E38A9EF6929F821C89AE8309D26477_marshaled_com
{
	int32_t ___submeshIndex;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
};
struct GlyphAnchorPoint_t581FDCAD5A1D0F3B129968FAEF20C113AAB0BC08 
{
	float ___m_XCoordinate;
	float ___m_YCoordinate;
};
struct GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A 
{
	float ___m_Width;
	float ___m_Height;
	float ___m_HorizontalBearingX;
	float ___m_HorizontalBearingY;
	float ___m_HorizontalAdvance;
};
struct GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D 
{
	int32_t ___m_X;
	int32_t ___m_Y;
	int32_t ___m_Width;
	int32_t ___m_Height;
};
struct GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E 
{
	float ___m_XPlacement;
	float ___m_YPlacement;
	float ___m_XAdvance;
	float ___m_YAdvance;
};
struct GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 
{
	float ___alpha;
	float ___time;
};
struct GuidHandle_tBD83795685737579B04079056AFFE6A40F967EE4 
{
	int32_t ____index;
};
struct Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 
{
	uint64_t ___u64_0;
	uint64_t ___u64_1;
};
struct HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 
{
	int32_t ___m_Id;
	int32_t ___m_Version;
};
struct InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 
{
	String_t* ___m_Name;
	String_t* ___m_BindingGroup;
	DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE* ___m_DeviceRequirements;
};
struct InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434_marshaled_pinvoke
{
	char* ___m_Name;
	char* ___m_BindingGroup;
	DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_pinvoke* ___m_DeviceRequirements;
};
struct InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434_marshaled_com
{
	Il2CppChar* ___m_Name;
	Il2CppChar* ___m_BindingGroup;
	DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_com* ___m_DeviceRequirements;
};
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD 
{
	uint64_t ___m_DeviceId;
	bool ___m_Initialized;
};
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshaled_pinvoke
{
	uint64_t ___m_DeviceId;
	int32_t ___m_Initialized;
};
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshaled_com
{
	uint64_t ___m_DeviceId;
	int32_t ___m_Initialized;
};
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F 
{
	String_t* ___m_InterfaceName;
	String_t* ___m_DeviceClass;
	String_t* ___m_Manufacturer;
	String_t* ___m_Product;
	String_t* ___m_Serial;
	String_t* ___m_Version;
	String_t* ___m_Capabilities;
};
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_pinvoke
{
	char* ___m_InterfaceName;
	char* ___m_DeviceClass;
	char* ___m_Manufacturer;
	char* ___m_Product;
	char* ___m_Serial;
	char* ___m_Version;
	char* ___m_Capabilities;
};
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_com
{
	Il2CppChar* ___m_InterfaceName;
	Il2CppChar* ___m_DeviceClass;
	Il2CppChar* ___m_Manufacturer;
	Il2CppChar* ___m_Product;
	Il2CppChar* ___m_Serial;
	Il2CppChar* ___m_Version;
	Il2CppChar* ___m_Capabilities;
};
struct InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 
{
	alignas(IL2CPP_SIZEOF_VOID_P) InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5* ___m_EventPtr;
};
struct InputUser_tD938B6FAC4D79FB2BA7040DE247549A4F832000E 
{
	uint32_t ___m_Id;
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
struct IntPoint_t86559D9C7B7C3E7A9810B3328D0168720A1CD90D 
{
	int64_t ___X;
	int64_t ___Y;
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
struct InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 
{
	String_t* ____methodName;
	DebugInfo_t03C716886CE7E99C1662D1C236CCC2CC6F18A167* ____debugInfo;
};
struct InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321_marshaled_pinvoke
{
	char* ____methodName;
	DebugInfo_t03C716886CE7E99C1662D1C236CCC2CC6F18A167* ____debugInfo;
};
struct InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321_marshaled_com
{
	Il2CppChar* ____methodName;
	DebugInfo_t03C716886CE7E99C1662D1C236CCC2CC6F18A167* ____debugInfo;
};
struct LabelHandle_t3049CD9713642B48A3AFB4BCFF191BE02E751BA7 
{
	int32_t ___U3CIdU3Ek__BackingField;
};
struct LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_ComponentGlyphIDs;
	uint32_t ___m_LigatureGlyphID;
};
struct LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94_marshaled_pinvoke
{
	Il2CppSafeArray* ___m_ComponentGlyphIDs;
	uint32_t ___m_LigatureGlyphID;
};
struct LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94_marshaled_com
{
	Il2CppSafeArray* ___m_ComponentGlyphIDs;
	uint32_t ___m_LigatureGlyphID;
};
struct MarkPositionAdjustment_t2523798D56F14A93A080D9D1298498325A51F436 
{
	float ___m_XPositionAdjustment;
	float ___m_YPositionAdjustment;
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
struct MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC 
{
	uint64_t ___m_SubId1;
	uint64_t ___m_SubId2;
};
struct MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF 
{
	TextCoreVertexU5BU5D_tB1DD4645DEB2946FA2271F94CE23D57FB4B9FE17* ___vertexData;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___vertexCount;
};
struct MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF_marshaled_pinvoke
{
	TextCoreVertex_t012334F340F916622ED5237971E8BA32198060E4* ___vertexData;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___vertexCount;
};
struct MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF_marshaled_com
{
	TextCoreVertex_t012334F340F916622ED5237971E8BA32198060E4* ___vertexData;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___vertexCount;
};
struct MeshLodRange_t3DABC0BD42B8551AB24A3F27E672D8C89979143E 
{
	uint32_t ___m_IndexStart;
	uint32_t ___m_IndexCount;
};
struct MethodDefinitionHandle_t94F3F4618C88F6DD6A658FC3C364BC5C5D1EA8BF 
{
	int32_t ____rowId;
};
struct MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B 
{
	uint32_t ___m_TargetGlyphID;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_SubstituteGlyphIDs;
};
struct MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B_marshaled_pinvoke
{
	uint32_t ___m_TargetGlyphID;
	Il2CppSafeArray* ___m_SubstituteGlyphIDs;
};
struct MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B_marshaled_com
{
	uint32_t ___m_TargetGlyphID;
	Il2CppSafeArray* ___m_SubstituteGlyphIDs;
};
struct Name_t9E47EF25D1808C27515EB99D71DB90E187AC1354 
{
	String_t* ___name;
	int32_t ___utf8ByteCount;
};
struct Name_t9E47EF25D1808C27515EB99D71DB90E187AC1354_marshaled_pinvoke
{
	char* ___name;
	int32_t ___utf8ByteCount;
};
struct Name_t9E47EF25D1808C27515EB99D71DB90E187AC1354_marshaled_com
{
	Il2CppChar* ___name;
	int32_t ___utf8ByteCount;
};
struct NamespaceDefinitionHandle_t5490363A809D68426A38836A29CAA7704F7EAFF9 
{
	uint32_t ____value;
};
struct OpenTypeLayoutFeature_t3EDC5D8E6E3294E317FF5709C177F927C5A2CEB1 
{
	String_t* ___tag;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___lookupIndexes;
};
struct OpenTypeLayoutFeature_t3EDC5D8E6E3294E317FF5709C177F927C5A2CEB1_marshaled_pinvoke
{
	char* ___tag;
	Il2CppSafeArray* ___lookupIndexes;
};
struct OpenTypeLayoutFeature_t3EDC5D8E6E3294E317FF5709C177F927C5A2CEB1_marshaled_com
{
	Il2CppChar* ___tag;
	Il2CppSafeArray* ___lookupIndexes;
};
struct OpenTypeLayoutLanguage_tE68E891D9EE3CF24959E39ACC0874462B382216F 
{
	String_t* ___tag;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___featureIndexes;
};
struct OpenTypeLayoutLanguage_tE68E891D9EE3CF24959E39ACC0874462B382216F_marshaled_pinvoke
{
	char* ___tag;
	Il2CppSafeArray* ___featureIndexes;
};
struct OpenTypeLayoutLanguage_tE68E891D9EE3CF24959E39ACC0874462B382216F_marshaled_com
{
	Il2CppChar* ___tag;
	Il2CppSafeArray* ___featureIndexes;
};
struct OpenTypeLayoutScript_t5882DBA987722922B839D021CB8C84DD190F98CF 
{
	String_t* ___tag;
	List_1_tAB87E4B5971ED4449775D015F11B4E1FC43B19AE* ___languages;
};
struct OpenTypeLayoutScript_t5882DBA987722922B839D021CB8C84DD190F98CF_marshaled_pinvoke
{
	char* ___tag;
	List_1_tAB87E4B5971ED4449775D015F11B4E1FC43B19AE* ___languages;
};
struct OpenTypeLayoutScript_t5882DBA987722922B839D021CB8C84DD190F98CF_marshaled_com
{
	Il2CppChar* ___tag;
	List_1_tAB87E4B5971ED4449775D015F11B4E1FC43B19AE* ___languages;
};
struct PassIdentifier_tB001434DD777C99EE72429B150D574210E94CE70 
{
	uint32_t ___m_SubShaderIndex;
	uint32_t ___m_PassIndex;
};
#pragma pack(push, tp, 1)
struct ProfilerRecorderHandle_t1215F88C92BAED83BFC3665C0D1BBFD347A33FD4 
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
					uint64_t ___handle;
				};
				#pragma pack(pop, tp)
				struct
				{
					uint64_t ___handle_forAlignmentOnly;
				};
			};
		};
		uint8_t ProfilerRecorderHandle_t1215F88C92BAED83BFC3665C0D1BBFD347A33FD4__padding[8];
	};
};
#pragma pack(pop, tp)
struct ProfilerRecorderSample_t1F59CC43F81B774053308543605585CA87C94C5F 
{
	int64_t ___value;
	int64_t ___count;
	int64_t ___refValue;
};
struct PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 
{
	int32_t ___id;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct RangePositionInfo_t27BA7EB1EC12061DD5ACFD24BD71A915D412223F 
{
	BitSet_t89F906D542C052F4565FBEF32E1E9713B966026B* ___curpos;
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___rangeCounters;
};
struct RangePositionInfo_t27BA7EB1EC12061DD5ACFD24BD71A915D412223F_marshaled_pinvoke
{
	BitSet_t89F906D542C052F4565FBEF32E1E9713B966026B* ___curpos;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* ___rangeCounters;
};
struct RangePositionInfo_t27BA7EB1EC12061DD5ACFD24BD71A915D412223F_marshaled_com
{
	BitSet_t89F906D542C052F4565FBEF32E1E9713B966026B* ___curpos;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* ___rangeCounters;
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
struct ReflectionProbeBlendInfo_t9E258E27B79B396F9D1693B972157A79AFBD9200 
{
	ReflectionProbe_t7CFA63F0340447A0069E66DB261A8A1B79BA8A2D* ___probe;
	float ___weight;
};
struct ReflectionProbeBlendInfo_t9E258E27B79B396F9D1693B972157A79AFBD9200_marshaled_pinvoke
{
	ReflectionProbe_t7CFA63F0340447A0069E66DB261A8A1B79BA8A2D* ___probe;
	float ___weight;
};
struct ReflectionProbeBlendInfo_t9E258E27B79B396F9D1693B972157A79AFBD9200_marshaled_com
{
	ReflectionProbe_t7CFA63F0340447A0069E66DB261A8A1B79BA8A2D* ___probe;
	float ___weight;
};
struct RefreshRate_t44FF0D3F256477CC8AB97FA49D08B636AFB4F68F 
{
	uint32_t ___numerator;
	uint32_t ___denominator;
};
struct RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71 
{
	int32_t ___m_LowerBound;
	int32_t ___m_UpperBound;
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
struct ResourcePath_t1A9F9A499E0CEB5D5C5F93B3C7BCC975AF5CCB31 
{
	int32_t ___pathIndex;
	int32_t ___subAssetNameIndex;
};
struct RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E 
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet;
	StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* ___complexSelector;
};
struct RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E_marshaled_pinvoke
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet;
	StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* ___complexSelector;
};
struct RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E_marshaled_com
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet;
	StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* ___complexSelector;
};
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	int8_t ___m_value;
};
struct ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F 
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___normalImage;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___highResolutionImage;
};
struct ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F_marshaled_pinvoke
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___normalImage;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___highResolutionImage;
};
struct ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F_marshaled_com
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___normalImage;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___highResolutionImage;
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
struct ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 
{
	int32_t ___m_Id;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct SortingLayerRange_t96D04CFB4E8824978FEB2CFFFCFEAC37E56D52C9 
{
	int16_t ___m_LowerBound;
	int16_t ___m_UpperBound;
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
struct UIntPtr_t 
{
	void* ____pointer;
};
struct UnmanagedDataHandle_t5295F32E122AF2E09BF729381A22BD86B72C1DD1 
{
	int32_t ___Index;
	int32_t ___Version;
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
struct U3CshaderPassNamesU3Ee__FixedBuffer_t5EDC823777BDDC9D50E55FF3779FBC1B3820126D 
{
	union
	{
		struct
		{
			int32_t ___FixedElementField;
		};
		uint8_t U3CshaderPassNamesU3Ee__FixedBuffer_t5EDC823777BDDC9D50E55FF3779FBC1B3820126D__padding[64];
	};
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
struct ButtonsState_tC596C9B742AF4FDB4D32B05551EEDB23D243E996 
{
	uint32_t ____state;
};
struct TextureIdentifier_tA1CDC255400F534A6496877CC86C07B80C45A199 
{
	uint64_t ___value;
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
struct U3CbuttonsU3Ee__FixedBuffer_t32316838CB3560CC83CB36DE00B3352EF9FF122F 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3CbuttonsU3Ee__FixedBuffer_t32316838CB3560CC83CB36DE00B3352EF9FF122F__padding[40];
	};
};
struct CopyInfo_tB2613726E308EEDC2AE910784FA68BBB0A771565 
{
	void* ___srcCpuBuffer;
	GPUBuffer_1_tB27A42EE52EA38FD7117C4EC0B1E42703FFE4C36* ___dstGpuBuffer;
	NativeSlice_1_t135E2A23AA4EBDBCA846942F90F29A5004E8ACB5 ___pendingGpuCopies;
};
struct CopyInfo_tD052D128BF5295669FA0728D8E0336E9557CE744 
{
	void* ___srcCpuBuffer;
	GPUBuffer_1_tA6A8BA754BA691383F7FA4302803FC11DA7373F3* ___dstGpuBuffer;
	NativeSlice_1_t135E2A23AA4EBDBCA846942F90F29A5004E8ACB5 ___pendingGpuCopies;
};
struct DebugProfilingType_t177B6C546DE37888331A738F2C30B75899D1E6BF 
{
	int32_t ___value__;
};
struct KeyValuePair_2_t574F7D758CAB3236E54B30D75264EE43F9099217 
{
	RuntimeObject* ___key;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value;
};
struct KeyValuePair_2_t2C4E2C6E51C801D66BA4BE6788E3768138569F9F 
{
	NamespaceDefinitionHandle_t5490363A809D68426A38836A29CAA7704F7EAFF9 ___key;
	NamespaceDataBuilder_tD5ECDB1682058E50B942AED9241D5181C53927C3* ___value;
};
struct KeyValuePair_2_t3957A76A201E348ECA02584F03F8112B45D8EAB4 
{
	String_t* ___key;
	StringHandle_t5E953149979CB6063CF363B9A4727ADBF823991C ___value;
};
struct KeyValuePair_2_t53294556C9836D4C13852590DDE0844EDA56402B 
{
	UIDocumentHierarchicalIndex_tB5F81735A42395827E61B3BB21C46133D0AC36BF ___key;
	UIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77* ___value;
};
struct Position_t75E6656730C425178FF2DF4ED2F984F7972BF8CB 
{
	int32_t ___value__;
};
struct Position_t185E49582ED029B7A57E7414967CA7C697B290CF 
{
	int32_t ___value__;
};
struct Position_t4B931FE87036B630E43500218B621C965D32F505 
{
	int32_t ___value__;
};
struct ValueTuple_2_tF84FEBD8A912F24572EFCF15570D16C3346CEB6E 
{
	RuntimeObject* ___Item1;
	ValueTuple_2_tF34EACCF71A708BBFA7545E7D3A1298BB2019C7D ___Item2;
};
struct ValueTuple_2_t66C82960295DE11A5326D3FF7142662DC4C8C68A 
{
	TextureIdentifier_tA1CDC255400F534A6496877CC86C07B80C45A199 ___Item1;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___Item2;
};
struct ValueTuple_3_tFCE08B8569F9E16C6B098364F9CF710B901F71D3 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___Item1;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___Item2;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___Item3;
};
struct AccessFlags_tB7D400C853C05A1DB9C6B56DF14E43721F0B1739 
{
	int32_t ___value__;
};
struct AddressMode_t2C6D839F1391CCABEFAB25D8500B448D3CAB5EA3 
{
	int32_t ___value__;
};
struct AdvancedUpscalers_tDD36F800B8F15407DE4E2E4E501ADC26352EA986 
{
	uint8_t ___value__;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 
{
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_ClipEntityId;
	float ___m_Weight;
};
struct AssetLoadingSubsystem_t16CE02097A0BE1FAB24960335EB524629CD31473 
{
	int32_t ___value__;
};
struct AsyncGPUReadbackRequest_t6A735D3E0F1DEF8F43EBD0E6FE550FAE564519C7 
{
	intptr_t ___m_Ptr;
	int32_t ___m_Version;
};
struct AvailableTrackingData_t223756B90093C1B8974F04856043E3983BA37402 
{
	int32_t ___value__;
};
struct BackgroundPositionKeyword_tE680A05B983D256AADC8E2CF1CA169D004B8641B 
{
	int32_t ___value__;
};
struct BezierPathSegment_t06C9ADE21B052813D01EA146DF823E9A58804577 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___P0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___P1;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___P2;
};
struct BezierSegment_t68B5B75A62189149498B537F5F099866E392621B 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___P0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___P1;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___P2;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___P3;
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
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_ThisColliderEntityId;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_OtherColliderEntityId;
	float ___m_Separation;
};
struct ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Point;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Normal;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity;
	float ___m_Friction;
	float ___m_Bounciness;
	float ___m_Separation;
	float ___m_NormalImpulse;
	float ___m_TangentImpulse;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_Collider;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_OtherCollider;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_Rigidbody;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_OtherRigidbody;
	int32_t ___m_Enabled;
};
struct CullMode_t049B71889E4E981866E205A3F71DC8B856306D50 
{
	int32_t ___value__;
};
struct CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 
{
	intptr_t ___ptr;
	CullingAllocationInfo_tB260F5CD0B290F74E145EB16E54B901CC68D9D5A* ___m_AllocationInfo;
};
struct CustomRenderTextureUpdateZone_t98B3AAB09D6B712F4CCC416CB2DF820C2B6BDCED 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___updateZoneCenter;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___updateZoneSize;
	float ___rotation;
	int32_t ___passIndex;
	bool ___needSwap;
};
struct CustomRenderTextureUpdateZone_t98B3AAB09D6B712F4CCC416CB2DF820C2B6BDCED_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___updateZoneCenter;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___updateZoneSize;
	float ___rotation;
	int32_t ___passIndex;
	int32_t ___needSwap;
};
struct CustomRenderTextureUpdateZone_t98B3AAB09D6B712F4CCC416CB2DF820C2B6BDCED_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___updateZoneCenter;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___updateZoneSize;
	float ___rotation;
	int32_t ___passIndex;
	int32_t ___needSwap;
};
struct DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 
{
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____dateTime;
	int16_t ____offsetMinutes;
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
struct DismissType_tC0BA1632E781EBB8E0190DB4FBB81E53F7D5BC8F 
{
	int32_t ___value__;
};
struct DisplayInfo_tF41D127F984E526091EDFBE6289D76024755B473 
{
	uint64_t ___handle;
	int32_t ___width;
	int32_t ___height;
	RefreshRate_t44FF0D3F256477CC8AB97FA49D08B636AFB4F68F ___refreshRate;
	RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___workArea;
	String_t* ___name;
	float ___physicalDpi;
};
struct DisplayInfo_tF41D127F984E526091EDFBE6289D76024755B473_marshaled_pinvoke
{
	uint64_t ___handle;
	int32_t ___width;
	int32_t ___height;
	RefreshRate_t44FF0D3F256477CC8AB97FA49D08B636AFB4F68F ___refreshRate;
	RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___workArea;
	char* ___name;
	float ___physicalDpi;
};
struct DisplayInfo_tF41D127F984E526091EDFBE6289D76024755B473_marshaled_com
{
	uint64_t ___handle;
	int32_t ___width;
	int32_t ___height;
	RefreshRate_t44FF0D3F256477CC8AB97FA49D08B636AFB4F68F ___refreshRate;
	RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___workArea;
	Il2CppChar* ___name;
	float ___physicalDpi;
};
struct DistanceMetric_t071B9815BB961E33F7CA2C553CA725F61AE09EDE 
{
	int32_t ___value__;
};
struct DrawRendererFlags_t3AD0574208BFF93F323D5E1E92012F19EAE972CD 
{
	int32_t ___value__;
};
struct EasingMode_tEF87477B9B9EB2524525550AE5ABEBC00FC7B0DF 
{
	int32_t ___value__;
};
struct EventModifiers_tB9DEEF73F8FC4C312B8E0C34336C7D9C3023B270 
{
	int32_t ___value__;
};
struct EventSource_t395F7AD9932CE73777C8DB122DE6638A61AAA07E 
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
struct FileReadType_tCFC31639640BDB1F65BD8CB109A722747C947145 
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
struct FilteringSettings_t75860B12A7BCF9A0E2F13CB2C2E5DCD9E1EEAD9F 
{
	RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71 ___m_RenderQueueRange;
	int32_t ___m_LayerMask;
	uint32_t ___m_RenderingLayerMask;
	uint32_t ___m_BatchLayerMask;
	int32_t ___m_ExcludeMotionVectorObjects;
	int32_t ___m_ForceAllMotionVectorObjects;
	SortingLayerRange_t96D04CFB4E8824978FEB2CFFFCFEAC37E56D52C9 ___m_SortingLayerRange;
};
struct FontFeatureLookupFlags_t2000121BA341A3CAE5E0D4FAC6AA4378FE14AE1B 
{
	int32_t ___value__;
};
struct FontStyles_t284AF8C10031F4774DF8BC8DE6DF9EC11EE14668 
{
	int32_t ___value__;
};
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	intptr_t ___handle;
};
struct GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 
{
	uint32_t ___m_GlyphIndex;
	GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E ___m_GlyphValueRecord;
};
struct GlyphRenderMode_tE7FB60827750662A45E89D168932FE2D8AEB5281 
{
	int32_t ___value__;
};
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E  : public RuntimeObject
{
	intptr_t ___m_Ptr;
	bool ___m_RequiresNativeCleanup;
};
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_marshaled_pinvoke
{
	intptr_t ___m_Ptr;
	int32_t ___m_RequiresNativeCleanup;
};
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_marshaled_com
{
	intptr_t ___m_Ptr;
	int32_t ___m_RequiresNativeCleanup;
};
struct GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
	float ___time;
};
struct GradientType_tF6700196CF15D686C2CFC54BDDE6EF4B4B325F22 
{
	int32_t ___value__;
};
struct HierarchySearchFilterOperator_t2A969B6F137B3E37A5EAB8E5830A27EA631C618D 
{
	int32_t ___value__;
};
struct HorizontalAlignment_t671E4AFA8AB13903A7304392F6C320D8F0FB48EC 
{
	int32_t ___value__;
};
struct ILOpCode_t6F0D7BCBF2ED4ACD3B1C05B684A6E74BDC9D6AC1 
{
	uint16_t ___value__;
};
struct InputFeatureType_t36E1610AE349AD6D620AE209A3397E8CD825A9FC 
{
	uint32_t ___value__;
};
struct JsonContainerType_t4F8244AEE40CAB63CA2C1E281038F4E2B3E3887E 
{
	int32_t ___value__;
};
struct JsonSchemaType_tC2B753E68E38718C8928E6AC847F0A1DF5F3C5EC 
{
	int32_t ___value__;
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
struct LoadReason_t6890871E119ACAB707211201A00DE631CA266CF9 
{
	int32_t ___value__;
};
struct MarginDirection_t4A35937119F46ED07CE1882E8F8E29F94F63D89A 
{
	int32_t ___value__;
};
struct MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 
{
	uint32_t ___m_BaseGlyphID;
	GlyphAnchorPoint_t581FDCAD5A1D0F3B129968FAEF20C113AAB0BC08 ___m_BaseGlyphAnchorPoint;
	uint32_t ___m_MarkGlyphID;
	MarkPositionAdjustment_t2523798D56F14A93A080D9D1298498325A51F436 ___m_MarkPositionAdjustment;
};
struct MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C 
{
	uint32_t ___m_BaseMarkGlyphID;
	GlyphAnchorPoint_t581FDCAD5A1D0F3B129968FAEF20C113AAB0BC08 ___m_BaseMarkGlyphAnchorPoint;
	uint32_t ___m_CombiningMarkGlyphID;
	MarkPositionAdjustment_t2523798D56F14A93A080D9D1298498325A51F436 ___m_CombiningMarkPositionAdjustment;
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
struct MaterialPropertyValueType_t3AE79BF4BF4F82EFA7E2ED2CB4EC5BAB096BC5A8 
{
	int32_t ___value__;
};
struct MeshChangeState_t4CCBA82867A78CD1241B037198571A5365D7910C 
{
	int32_t ___value__;
};
struct MeshTopology_t815FF5CF04D62195A23E2DF8A5C0A071F11FBCBF 
{
	int32_t ___value__;
};
struct MouseButton_tEF578B8F208D798E053BC320C29FCBB655E24454 
{
	int32_t ___value__;
};
struct NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 
{
	String_t* ___U3CnameU3Ek__BackingField;
	ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9 ___U3CparametersU3Ek__BackingField;
};
struct NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField;
	ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9 ___U3CparametersU3Ek__BackingField;
};
struct NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField;
	ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9 ___U3CparametersU3Ek__BackingField;
};
struct NavMeshBuildMarkup_tC2D636663691297A05F32A8B2B8CAA7108FEE8AC 
{
	int32_t ___m_OverrideArea;
	int32_t ___m_Area;
	int32_t ___m_InheritIgnoreFromBuild;
	int32_t ___m_IgnoreFromBuild;
	int32_t ___m_OverrideGenerateLinks;
	int32_t ___m_GenerateLinks;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_EntityId;
	int32_t ___m_IgnoreChildren;
};
struct NavMeshBuildSourceShape_t0D044D75712305894A038997DAFB311723771268 
{
	int32_t ___value__;
};
struct OTL_FeatureTag_tBBECF2FD22CC2F58596A115102D5BE3DA80ACA34 
{
	uint32_t ___value__;
};
struct OccluderSubviewUpdate_t0F6F2469118EFD70CCA43057AEDD76AF2EF4DBB7 
{
	int32_t ___subviewIndex;
	int32_t ___depthSliceIndex;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___depthOffset;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___viewMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___invViewMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___gpuProjMatrix;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___viewOffsetWorldSpace;
};
struct Op_t9FFA443E2EA78558062551D21EDF023BEF222F18 
{
	uint32_t ___value__;
};
struct ParticleCollisionEvent_t9152F03D9336BAAFEAF1CCA498C0F156ABD19858 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Intersection;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Velocity;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_ColliderEntityId;
};
struct ParticleSystemVertexStream_tFC6A07E7476C2DD5FFC571004365658A0E53F2CC 
{
	int32_t ___value__;
};
struct PassBreakReason_t57DD36F9EC4ED3DA89A4740BE8C32987018CF808 
{
	int32_t ___value__;
};
struct PassMergeState_t7815130D2990D177421E7CB405CE173EC704A117 
{
	int32_t ___value__;
};
struct PerObjectData_t04DDCBE9ABF1113E8F9BAFCF4A7F94DD841B9CC9 
{
	int32_t ___value__;
};
struct PerformanceBottleneck_t8FB75622048BB8C659D66BA1D6B09EF60D6B14CA 
{
	int32_t ___value__;
};
struct PhysicsShapeType2D_t44AE2DF9DE93C130AF36529B830CDCD34D55223B 
{
	int32_t ___value__;
};
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F 
{
	Type_t* ___type;
	PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* ___subSystemList;
	UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4* ___updateDelegate;
	intptr_t ___updateFunction;
	intptr_t ___loopConditionFunction;
};
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke
{
	Type_t* ___type;
	PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke* ___subSystemList;
	Il2CppMethodPointer ___updateDelegate;
	intptr_t ___updateFunction;
	intptr_t ___loopConditionFunction;
};
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com
{
	Type_t* ___type;
	PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com* ___subSystemList;
	Il2CppMethodPointer ___updateDelegate;
	intptr_t ___updateFunction;
	intptr_t ___loopConditionFunction;
};
struct PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5 
{
	Type_t* ___type;
	UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4* ___updateDelegate;
	intptr_t ___updateFunction;
	intptr_t ___loopConditionFunction;
	int32_t ___numSubSystems;
};
struct PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshaled_pinvoke
{
	Type_t* ___type;
	Il2CppMethodPointer ___updateDelegate;
	intptr_t ___updateFunction;
	intptr_t ___loopConditionFunction;
	int32_t ___numSubSystems;
};
struct PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshaled_com
{
	Type_t* ___type;
	Il2CppMethodPointer ___updateDelegate;
	intptr_t ___updateFunction;
	intptr_t ___loopConditionFunction;
	int32_t ___numSubSystems;
};
struct Priority_t769409A2EFD44653EE7F1F47CAF002A6FAA12214 
{
	int32_t ___value__;
};
struct ProcessingState_t10820A0F2C4361EF738FC9F09881334C28700FD8 
{
	int32_t ___value__;
};
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	intptr_t ___m_Ptr;
};
struct PropertyPathPartKind_t82152825D88A0E450DDCE8503272A10595047F87 
{
	int32_t ___value__;
};
struct PseudoStates_tF4AB056E8743741BCE464A0983A060A53AAB7E4D 
{
	int32_t ___value__;
};
struct RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Centroid;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Point;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Normal;
	float ___m_Distance;
	float ___m_Fraction;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_Collider;
};
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module;
	float ___distance;
	float ___index;
	int32_t ___depth;
	int32_t ___sortingGroupID;
	int32_t ___sortingGroupOrder;
	int32_t ___sortingLayer;
	int32_t ___sortingOrder;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition;
	int32_t ___displayIndex;
	RuntimeObject* ___panelComponent;
	RuntimeObject* ___m_element;
};
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module;
	float ___distance;
	float ___index;
	int32_t ___depth;
	int32_t ___sortingGroupID;
	int32_t ___sortingGroupOrder;
	int32_t ___sortingLayer;
	int32_t ___sortingOrder;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition;
	int32_t ___displayIndex;
	RuntimeObject* ___panelComponent;
	RuntimeObject* ___m_element;
};
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module;
	float ___distance;
	float ___index;
	int32_t ___depth;
	int32_t ___sortingGroupID;
	int32_t ___sortingGroupOrder;
	int32_t ___sortingLayer;
	int32_t ___sortingOrder;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition;
	int32_t ___displayIndex;
	RuntimeObject* ___panelComponent;
	RuntimeObject* ___m_element;
};
struct RegexOptions_tE9DA9C4DF8FB26DD1C7E0F8AA022C1164A423F6B 
{
	int32_t ___value__;
};
struct RenderBufferLoadAction_t3333B2CABABAC39DA0CDC25602E5E4FD93C2CB0E 
{
	int32_t ___value__;
};
struct RenderBufferStoreAction_t87683F22C09634E24A574F21F42037C953A2C8B7 
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
struct RenderHints_t4032FC4AB3FD946FD2A484865B8861730D9035E7 
{
	int32_t ___value__;
};
struct RenderStateMask_tC9C95BF62EADEE4D622D4E16CDE1DF94E2A9EF57 
{
	int32_t ___value__;
};
struct RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 
{
	uintptr_t ___context;
	uint32_t ___index;
	uint32_t ___frame;
	uint32_t ___type;
	uint32_t ___contextID;
};
struct RendererListHandleType_tF4A920C02D6273E876EA0E5E7BF6B7096E278E57 
{
	int32_t ___value__;
};
struct Repeat_tC0330B75B12D24B063BA5151AF3BB73B85D8B840 
{
	int32_t ___value__;
};
struct SType_tE3DFFE5B3B024FA464DDA118517A9392E882E1C4 
{
	uint8_t ___value__;
};
struct ScaleMode_t16AD656758EE54C56B3DA34FE4F2033C9C2EE13D 
{
	int32_t ___value__;
};
struct SceneHandle_t4C3B517546B91EF78A6ED15DDC6C54AB5E03D8A3 
{
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_Value;
};
struct SectionCharacteristics_t4CB501495BC18951119375C2DBFD3109D9D4AE8A 
{
	uint32_t ___value__;
};
struct SerializedCommandType_tCCFFDB6712F9C2F7158BAF13B11DB958DC387213 
{
	int32_t ___value__;
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
struct SortingCriteria_t4907D221CB6E6AA4A32C1ED7B5D17103FD3E7C39 
{
	int32_t ___value__;
};
struct StoreReason_tB71F110DFEED47ED8929B7874BE46BD4AFA9D5AC 
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
struct TextFontWeight_t789E26840C291C6C1270D4434CE007ACDFA40350 
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
struct Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70 
{
	Finger_t0E27A005E4B818F9D0078D69AF2B22649DDD4C6A* ___m_Finger;
	Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4 ___m_TouchRecord;
};
struct Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70_marshaled_pinvoke
{
	Finger_t0E27A005E4B818F9D0078D69AF2B22649DDD4C6A* ___m_Finger;
	Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4 ___m_TouchRecord;
};
struct Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70_marshaled_com
{
	Finger_t0E27A005E4B818F9D0078D69AF2B22649DDD4C6A* ___m_Finger;
	Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4 ___m_TouchRecord;
};
struct TouchScreenKeyboardType_t3F5A06315B263282460BE67DE01393B6FB3780C1 
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
struct VisualElementFlags_t4D1066E11400967A1A2DA7331391ACDC4AA14409 
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
struct Command_t8AE6C32AB4C4E5FC4B8C77082D0EE5275B3414B9 
{
	int32_t ___value__;
};
struct Type_t978C0427FF2CB3DE1CC7BB6CC19BAC9005EC519D 
{
	int32_t ___value__;
};
struct Unit_tAE6456027618FB5F9E5CCB6E5C209250AC5695CC 
{
	int32_t ___value__;
};
struct Type_tDE4005CDD70E001C9402FEE8D2F2431154FED092 
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
struct Flags_t2ED4EFE461994B03533B3B524C8C2EA71315AAE6 
{
	int32_t ___value__;
};
struct DeviceInfo_tAB83FF3BB4996BA68DFDF5D6255C1FEBB452AE52 
{
	int32_t ___m_DeviceId;
	String_t* ___m_Layout;
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___m_StateFormat;
	int32_t ___m_StateSizeInBytes;
	String_t* ___m_FullLayoutJson;
};
struct DeviceInfo_tAB83FF3BB4996BA68DFDF5D6255C1FEBB452AE52_marshaled_pinvoke
{
	int32_t ___m_DeviceId;
	char* ___m_Layout;
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___m_StateFormat;
	int32_t ___m_StateSizeInBytes;
	char* ___m_FullLayoutJson;
};
struct DeviceInfo_tAB83FF3BB4996BA68DFDF5D6255C1FEBB452AE52_marshaled_com
{
	int32_t ___m_DeviceId;
	Il2CppChar* ___m_Layout;
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___m_StateFormat;
	int32_t ___m_StateSizeInBytes;
	Il2CppChar* ___m_FullLayoutJson;
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
struct ButtonsState_tDD5A3F9241886C7E1BA2975DF6E7045C321583E3 
{
	U3CbuttonsU3Ee__FixedBuffer_t32316838CB3560CC83CB36DE00B3352EF9FF122F ___buttons;
};
struct Type_tBD67F20EC8969784B5377C5DC8F261E207A14792 
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
struct Direction_tCF5F04CE76DF556D8ABCA537FC7C977681A14996 
{
	int32_t ___value__;
};
struct Type_tDA196B70B848DC5CD4982EBF31E0945B199A68C7 
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
struct TagType_t247BEA6080E7E453FA6F0BC2E8C05D682D94E35A 
{
	int32_t ___value__;
};
struct TagUnitType_tA19133D06543FE075CD72E0FA7C6F085F7172E8B 
{
	int32_t ___value__;
};
struct OrderedSelectorType_t49DF99E203DFB48B847915806D99D3DB0E1AA50B 
{
	int32_t ___value__;
};
struct MeasureMode_t35F26AA967A10198AA0924BD26D23DA0D999BE53 
{
	int32_t ___value__;
};
struct SettingsOptions_t935A71692F21EE9D959FCAC00574AA018F8BA2CB 
{
	uint16_t ___value__;
};
struct Flags_t36D5070200D1061BA68BF41808748FA000DEE57C 
{
	int32_t ___value__;
};
struct Flags_t1E712B23AAE0C9B46749E115A88CF844D5AD1C33 
{
	int32_t ___value__;
};
struct NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t76F16C71E23AB5F30821F9564775BA0C510012AA 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t96CEF42677DEFA822FCF9EABABD69E7624393AC9 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t8F0D14C1F4EAFB3AE60DB55E5E05E84CEA614690 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t64A170A060ACF969546C0A9E3DB21FE7ED7A6672 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t0AB49EE6A37F6BC668C15EDFBE9BE92A22B2F0DB 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tB946AB7C39022A3069BADCA1BFB2EB857A84AAD9 
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
struct NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tE60150ECC1618145E24B39FDB42788271982A962 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
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
struct ValueTuple_2_t225725AC1D0F8A5AECD63C25426AEE2326B8342A 
{
	Type_t* ___Item1;
	int32_t ___Item2;
};
struct ValueTuple_3_t8C663CA7B0DCF863A109E0786A128B1D3B9A21CE 
{
	int32_t ___Item1;
	int32_t ___Item2;
	String_t* ___Item3;
};
struct AsyncReadManagerRequestMetric_t41C6C9C513C5E798C5D4A9BD4A04216D42458B13 
{
	String_t* ___U3CAssetNameU3Ek__BackingField;
	String_t* ___U3CFileNameU3Ek__BackingField;
	uint64_t ___U3COffsetBytesU3Ek__BackingField;
	uint64_t ___U3CSizeBytesU3Ek__BackingField;
	uint64_t ___U3CAssetTypeIdU3Ek__BackingField;
	uint64_t ___U3CCurrentBytesReadU3Ek__BackingField;
	uint32_t ___U3CBatchReadCountU3Ek__BackingField;
	bool ___U3CIsBatchReadU3Ek__BackingField;
	int32_t ___U3CStateU3Ek__BackingField;
	int32_t ___U3CReadTypeU3Ek__BackingField;
	int32_t ___U3CPriorityLevelU3Ek__BackingField;
	int32_t ___U3CSubsystemU3Ek__BackingField;
	double ___U3CRequestTimeMicrosecondsU3Ek__BackingField;
	double ___U3CTimeInQueueMicrosecondsU3Ek__BackingField;
	double ___U3CTotalTimeMicrosecondsU3Ek__BackingField;
};
struct AsyncReadManagerRequestMetric_t41C6C9C513C5E798C5D4A9BD4A04216D42458B13_marshaled_pinvoke
{
	char* ___U3CAssetNameU3Ek__BackingField;
	char* ___U3CFileNameU3Ek__BackingField;
	uint64_t ___U3COffsetBytesU3Ek__BackingField;
	uint64_t ___U3CSizeBytesU3Ek__BackingField;
	uint64_t ___U3CAssetTypeIdU3Ek__BackingField;
	uint64_t ___U3CCurrentBytesReadU3Ek__BackingField;
	uint32_t ___U3CBatchReadCountU3Ek__BackingField;
	int32_t ___U3CIsBatchReadU3Ek__BackingField;
	int32_t ___U3CStateU3Ek__BackingField;
	int32_t ___U3CReadTypeU3Ek__BackingField;
	int32_t ___U3CPriorityLevelU3Ek__BackingField;
	int32_t ___U3CSubsystemU3Ek__BackingField;
	double ___U3CRequestTimeMicrosecondsU3Ek__BackingField;
	double ___U3CTimeInQueueMicrosecondsU3Ek__BackingField;
	double ___U3CTotalTimeMicrosecondsU3Ek__BackingField;
};
struct AsyncReadManagerRequestMetric_t41C6C9C513C5E798C5D4A9BD4A04216D42458B13_marshaled_com
{
	Il2CppChar* ___U3CAssetNameU3Ek__BackingField;
	Il2CppChar* ___U3CFileNameU3Ek__BackingField;
	uint64_t ___U3COffsetBytesU3Ek__BackingField;
	uint64_t ___U3CSizeBytesU3Ek__BackingField;
	uint64_t ___U3CAssetTypeIdU3Ek__BackingField;
	uint64_t ___U3CCurrentBytesReadU3Ek__BackingField;
	uint32_t ___U3CBatchReadCountU3Ek__BackingField;
	int32_t ___U3CIsBatchReadU3Ek__BackingField;
	int32_t ___U3CStateU3Ek__BackingField;
	int32_t ___U3CReadTypeU3Ek__BackingField;
	int32_t ___U3CPriorityLevelU3Ek__BackingField;
	int32_t ___U3CSubsystemU3Ek__BackingField;
	double ___U3CRequestTimeMicrosecondsU3Ek__BackingField;
	double ___U3CTimeInQueueMicrosecondsU3Ek__BackingField;
	double ___U3CTotalTimeMicrosecondsU3Ek__BackingField;
};
struct BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F 
{
	int32_t ___x;
	int32_t ___y;
};
struct BlittableCornerCases_t37C41B7D459B8FA6428B124E79D9DF4FF303D4DC 
{
	Il2CppChar ___cVal;
	bool ___bVal;
	int32_t ___eVal;
};
struct BlittableCornerCases_t37C41B7D459B8FA6428B124E79D9DF4FF303D4DC_marshaled_pinvoke
{
	uint8_t ___cVal;
	int32_t ___bVal;
	int32_t ___eVal;
};
struct BlittableCornerCases_t37C41B7D459B8FA6428B124E79D9DF4FF303D4DC_marshaled_com
{
	uint8_t ___cVal;
	int32_t ___bVal;
	int32_t ___eVal;
};
struct CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F 
{
	int32_t ___type;
	int32_t ___command;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1 
{
	int32_t ___id;
	int32_t ___durationMs;
	int32_t ___delayMs;
	Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* ___easingCurve;
};
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_pinvoke
{
	int32_t ___id;
	int32_t ___durationMs;
	int32_t ___delayMs;
	Il2CppMethodPointer ___easingCurve;
};
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_com
{
	int32_t ___id;
	int32_t ___durationMs;
	int32_t ___delayMs;
	Il2CppMethodPointer ___easingCurve;
};
struct DebugDirectoryEntry_tD846620D70D1749D77AEA05536BC557EBD9F2C71 
{
	uint32_t ___U3CStampU3Ek__BackingField;
	uint16_t ___U3CMajorVersionU3Ek__BackingField;
	uint16_t ___U3CMinorVersionU3Ek__BackingField;
	int32_t ___U3CTypeU3Ek__BackingField;
	int32_t ___U3CDataSizeU3Ek__BackingField;
	int32_t ___U3CDataRelativeVirtualAddressU3Ek__BackingField;
	int32_t ___U3CDataPointerU3Ek__BackingField;
};
struct Dimension_t5B1EAB500AE32C3789A2BCC4D43F7A29996DF3F8 
{
	int32_t ___unit;
	float ___value;
};
struct EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 
{
	int32_t ___m_Mode;
};
struct ExceptionRegion_tCAC19DE77D3140F13DC9592642B1590A39F0FF46 
{
	uint16_t ____kind;
	int32_t ____tryOffset;
	int32_t ____tryLength;
	int32_t ____handlerOffset;
	int32_t ____handlerLength;
	int32_t ____classTokenOrFilterOffset;
};
struct FillGradient_tB22AE7CE1752049F9075529CC95E38E0F73FB14C 
{
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___U3CgradientU3Ek__BackingField;
	int32_t ___U3CgradientTypeU3Ek__BackingField;
	int32_t ___U3CaddressModeU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CstartU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CendU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CcenterU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CfocusU3Ek__BackingField;
	float ___U3CradiusU3Ek__BackingField;
};
struct FillGradient_tB22AE7CE1752049F9075529CC95E38E0F73FB14C_marshaled_pinvoke
{
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_marshaled_pinvoke ___U3CgradientU3Ek__BackingField;
	int32_t ___U3CgradientTypeU3Ek__BackingField;
	int32_t ___U3CaddressModeU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CstartU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CendU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CcenterU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CfocusU3Ek__BackingField;
	float ___U3CradiusU3Ek__BackingField;
};
struct FillGradient_tB22AE7CE1752049F9075529CC95E38E0F73FB14C_marshaled_com
{
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_marshaled_com* ___U3CgradientU3Ek__BackingField;
	int32_t ___U3CgradientTypeU3Ek__BackingField;
	int32_t ___U3CaddressModeU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CstartU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CendU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CcenterU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CfocusU3Ek__BackingField;
	float ___U3CradiusU3Ek__BackingField;
};
struct FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060 
{
	int32_t ___m_Type;
	float ___m_FloatValue;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_ColorValue;
};
struct GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E 
{
	GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 ___m_FirstAdjustmentRecord;
	GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 ___m_SecondAdjustmentRecord;
	int32_t ___m_FeatureLookupFlags;
};
struct GradientSettings_tADA3CAA17319C58811DE187298039CC950FBAAF3 
{
	int32_t ___gradientType;
	int32_t ___addressMode;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___radialFocus;
	RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___location;
};
struct HierarchySearchFilter_tF29BB2EAA1077E1A1F070C6144227AF48123AF65 
{
	String_t* ___U3CNameU3Ek__BackingField;
	String_t* ___U3CValueU3Ek__BackingField;
	float ___U3CNumValueU3Ek__BackingField;
	int32_t ___U3COpU3Ek__BackingField;
};
struct HierarchySearchFilter_tF29BB2EAA1077E1A1F070C6144227AF48123AF65_marshaled_pinvoke
{
	char* ___U3CNameU3Ek__BackingField;
	char* ___U3CValueU3Ek__BackingField;
	float ___U3CNumValueU3Ek__BackingField;
	int32_t ___U3COpU3Ek__BackingField;
};
struct HierarchySearchFilter_tF29BB2EAA1077E1A1F070C6144227AF48123AF65_marshaled_com
{
	Il2CppChar* ___U3CNameU3Ek__BackingField;
	Il2CppChar* ___U3CValueU3Ek__BackingField;
	float ___U3CNumValueU3Ek__BackingField;
	int32_t ___U3COpU3Ek__BackingField;
};
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 
{
	String_t* ___m_Name;
	String_t* ___m_Id;
	String_t* ___m_Path;
	String_t* ___m_Interactions;
	String_t* ___m_Processors;
	String_t* ___m_Groups;
	String_t* ___m_Action;
	int32_t ___m_Flags;
	String_t* ___m_OverridePath;
	String_t* ___m_OverrideInteractions;
	String_t* ___m_OverrideProcessors;
};
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_pinvoke
{
	char* ___m_Name;
	char* ___m_Id;
	char* ___m_Path;
	char* ___m_Interactions;
	char* ___m_Processors;
	char* ___m_Groups;
	char* ___m_Action;
	int32_t ___m_Flags;
	char* ___m_OverridePath;
	char* ___m_OverrideInteractions;
	char* ___m_OverrideProcessors;
};
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_com
{
	Il2CppChar* ___m_Name;
	Il2CppChar* ___m_Id;
	Il2CppChar* ___m_Path;
	Il2CppChar* ___m_Interactions;
	Il2CppChar* ___m_Processors;
	Il2CppChar* ___m_Groups;
	Il2CppChar* ___m_Action;
	int32_t ___m_Flags;
	Il2CppChar* ___m_OverridePath;
	Il2CppChar* ___m_OverrideInteractions;
	Il2CppChar* ___m_OverrideProcessors;
};
struct InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599 
{
	String_t* ___m_Name;
	uint32_t ___m_InternalType;
};
struct InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599_marshaled_pinvoke
{
	char* ___m_Name;
	uint32_t ___m_InternalType;
};
struct InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599_marshaled_com
{
	Il2CppChar* ___m_Name;
	uint32_t ___m_InternalType;
};
struct JsonPosition_t7788656A280615072710710E8C15D23285850E8E 
{
	int32_t ___Type;
	int32_t ___Position;
	String_t* ___PropertyName;
	bool ___HasIndex;
};
struct JsonPosition_t7788656A280615072710710E8C15D23285850E8E_marshaled_pinvoke
{
	int32_t ___Type;
	int32_t ___Position;
	char* ___PropertyName;
	int32_t ___HasIndex;
};
struct JsonPosition_t7788656A280615072710710E8C15D23285850E8E_marshaled_com
{
	int32_t ___Type;
	int32_t ___Position;
	Il2CppChar* ___PropertyName;
	int32_t ___HasIndex;
};
struct KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931 
{
	int32_t ___type;
	int32_t ___keyCode;
	ButtonsState_tDD5A3F9241886C7E1BA2975DF6E7045C321583E3 ___buttonsState;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 
{
	float ___m_Value;
	int32_t ___m_Unit;
};
struct LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C 
{
	int32_t ___reason;
	int32_t ___passId;
};
struct ManipulatorActivationFilter_t866A0295DA75EA271B30BDC1F9EEA2C4FDEB1A81 
{
	int32_t ___U3CbuttonU3Ek__BackingField;
	int32_t ___U3CmodifiersU3Ek__BackingField;
	int32_t ___U3CclickCountU3Ek__BackingField;
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
struct MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA 
{
	MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___U3CMeshIdU3Ek__BackingField;
	int32_t ___U3CChangeStateU3Ek__BackingField;
	int32_t ___U3CPriorityHintU3Ek__BackingField;
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
struct NavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_Transform;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Size;
	int32_t ___m_Shape;
	int32_t ___m_Area;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_EntityId;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_ComponentID;
	int32_t ___m_GenerateLinks;
};
struct NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD 
{
	int32_t ___type;
	int32_t ___direction;
	bool ___shouldBeUsed;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_marshaled_pinvoke
{
	int32_t ___type;
	int32_t ___direction;
	int32_t ___shouldBeUsed;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_marshaled_com
{
	int32_t ___type;
	int32_t ___direction;
	int32_t ___shouldBeUsed;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct PassBreakAudit_t86F0837A5B639D308588333370DEB00AB5933A76 
{
	int32_t ___reason;
	int32_t ___breakPass;
};
struct PassData_t88911D47229A306D70A3F6A7D3B2FC8FF12F8BAD 
{
	int32_t ___passId;
	int32_t ___type;
	bool ___hasFoveatedRasterization;
	int32_t ___extendedFeatureFlags;
	int32_t ___tag;
	int32_t ___shadingRateFragmentSize;
	int32_t ___primitiveShadingRateCombiner;
	int32_t ___fragmentShadingRateCombiner;
	int32_t ___mergeState;
	int32_t ___nativePassIndex;
	int32_t ___nativeSubPassIndex;
	int32_t ___firstInput;
	int32_t ___numInputs;
	int32_t ___firstOutput;
	int32_t ___numOutputs;
	int32_t ___firstFragment;
	int32_t ___numFragments;
	int32_t ___firstFragmentInput;
	int32_t ___numFragmentInputs;
	int32_t ___firstSampledOnlyRaster;
	int32_t ___numSampledOnlyRaster;
	int32_t ___firstRandomAccessResource;
	int32_t ___numRandomAccessResources;
	int32_t ___firstCreate;
	int32_t ___numCreated;
	int32_t ___firstDestroy;
	int32_t ___numDestroyed;
	int32_t ___shadingRateImageIndex;
	int32_t ___fragmentInfoWidth;
	int32_t ___fragmentInfoHeight;
	int32_t ___fragmentInfoVolumeDepth;
	int32_t ___fragmentInfoSamples;
	int32_t ___waitOnGraphicsFencePassId;
	int32_t ___awaitingMyGraphicsFencePassId;
	bool ___asyncCompute;
	bool ___hasSideEffects;
	bool ___culled;
	bool ___beginNativeSubpass;
	bool ___fragmentInfoValid;
	bool ___fragmentInfoHasDepth;
	bool ___insertGraphicsFence;
	bool ___hasShadingRateStates;
};
struct PassData_t88911D47229A306D70A3F6A7D3B2FC8FF12F8BAD_marshaled_pinvoke
{
	int32_t ___passId;
	int32_t ___type;
	int32_t ___hasFoveatedRasterization;
	int32_t ___extendedFeatureFlags;
	int32_t ___tag;
	int32_t ___shadingRateFragmentSize;
	int32_t ___primitiveShadingRateCombiner;
	int32_t ___fragmentShadingRateCombiner;
	int32_t ___mergeState;
	int32_t ___nativePassIndex;
	int32_t ___nativeSubPassIndex;
	int32_t ___firstInput;
	int32_t ___numInputs;
	int32_t ___firstOutput;
	int32_t ___numOutputs;
	int32_t ___firstFragment;
	int32_t ___numFragments;
	int32_t ___firstFragmentInput;
	int32_t ___numFragmentInputs;
	int32_t ___firstSampledOnlyRaster;
	int32_t ___numSampledOnlyRaster;
	int32_t ___firstRandomAccessResource;
	int32_t ___numRandomAccessResources;
	int32_t ___firstCreate;
	int32_t ___numCreated;
	int32_t ___firstDestroy;
	int32_t ___numDestroyed;
	int32_t ___shadingRateImageIndex;
	int32_t ___fragmentInfoWidth;
	int32_t ___fragmentInfoHeight;
	int32_t ___fragmentInfoVolumeDepth;
	int32_t ___fragmentInfoSamples;
	int32_t ___waitOnGraphicsFencePassId;
	int32_t ___awaitingMyGraphicsFencePassId;
	int32_t ___asyncCompute;
	int32_t ___hasSideEffects;
	int32_t ___culled;
	int32_t ___beginNativeSubpass;
	int32_t ___fragmentInfoValid;
	int32_t ___fragmentInfoHasDepth;
	int32_t ___insertGraphicsFence;
	int32_t ___hasShadingRateStates;
};
struct PassData_t88911D47229A306D70A3F6A7D3B2FC8FF12F8BAD_marshaled_com
{
	int32_t ___passId;
	int32_t ___type;
	int32_t ___hasFoveatedRasterization;
	int32_t ___extendedFeatureFlags;
	int32_t ___tag;
	int32_t ___shadingRateFragmentSize;
	int32_t ___primitiveShadingRateCombiner;
	int32_t ___fragmentShadingRateCombiner;
	int32_t ___mergeState;
	int32_t ___nativePassIndex;
	int32_t ___nativeSubPassIndex;
	int32_t ___firstInput;
	int32_t ___numInputs;
	int32_t ___firstOutput;
	int32_t ___numOutputs;
	int32_t ___firstFragment;
	int32_t ___numFragments;
	int32_t ___firstFragmentInput;
	int32_t ___numFragmentInputs;
	int32_t ___firstSampledOnlyRaster;
	int32_t ___numSampledOnlyRaster;
	int32_t ___firstRandomAccessResource;
	int32_t ___numRandomAccessResources;
	int32_t ___firstCreate;
	int32_t ___numCreated;
	int32_t ___firstDestroy;
	int32_t ___numDestroyed;
	int32_t ___shadingRateImageIndex;
	int32_t ___fragmentInfoWidth;
	int32_t ___fragmentInfoHeight;
	int32_t ___fragmentInfoVolumeDepth;
	int32_t ___fragmentInfoSamples;
	int32_t ___waitOnGraphicsFencePassId;
	int32_t ___awaitingMyGraphicsFencePassId;
	int32_t ___asyncCompute;
	int32_t ___hasSideEffects;
	int32_t ___culled;
	int32_t ___beginNativeSubpass;
	int32_t ___fragmentInfoValid;
	int32_t ___fragmentInfoHasDepth;
	int32_t ___insertGraphicsFence;
	int32_t ___hasShadingRateStates;
};
struct PhysicsShape2D_t443155710C4DE7DE8C48EADA86BC4DC7EA70226E 
{
	int32_t ___m_ShapeType;
	float ___m_Radius;
	int32_t ___m_VertexStartIndex;
	int32_t ___m_VertexCount;
	int32_t ___m_UseAdjacentStart;
	int32_t ___m_UseAdjacentEnd;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_AdjacentStart;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_AdjacentEnd;
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
struct RendererListHandle_t2DFC72A560B979AE0BAFBABBD8B9AF5DC1FEFEBA 
{
	int32_t ___type;
	bool ___m_IsValid;
	int32_t ___U3ChandleU3Ek__BackingField;
};
struct RendererListHandle_t2DFC72A560B979AE0BAFBABBD8B9AF5DC1FEFEBA_marshaled_pinvoke
{
	int32_t ___type;
	int32_t ___m_IsValid;
	int32_t ___U3ChandleU3Ek__BackingField;
};
struct RendererListHandle_t2DFC72A560B979AE0BAFBABBD8B9AF5DC1FEFEBA_marshaled_com
{
	int32_t ___type;
	int32_t ___m_IsValid;
	int32_t ___U3ChandleU3Ek__BackingField;
};
struct RendererListLegacyResource_tEF05A444F7845E04F5E6568549AF26D434AD1B68 
{
	RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 ___rendererList;
	bool ___isActive;
};
struct RendererListLegacyResource_tEF05A444F7845E04F5E6568549AF26D434AD1B68_marshaled_pinvoke
{
	RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 ___rendererList;
	int32_t ___isActive;
};
struct RendererListLegacyResource_tEF05A444F7845E04F5E6568549AF26D434AD1B68_marshaled_com
{
	RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 ___rendererList;
	int32_t ___isActive;
};
struct ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C 
{
	uint32_t ___m_VersionIndex;
	uint32_t ___m_Validity;
	int32_t ___m_Type;
};
struct SectionHeader_tDCEF2AA85F5E6EE0259E66E18A7333E383FDA7D3 
{
	String_t* ___U3CNameU3Ek__BackingField;
	int32_t ___U3CVirtualSizeU3Ek__BackingField;
	int32_t ___U3CVirtualAddressU3Ek__BackingField;
	int32_t ___U3CSizeOfRawDataU3Ek__BackingField;
	int32_t ___U3CPointerToRawDataU3Ek__BackingField;
	int32_t ___U3CPointerToRelocationsU3Ek__BackingField;
	int32_t ___U3CPointerToLineNumbersU3Ek__BackingField;
	uint16_t ___U3CNumberOfRelocationsU3Ek__BackingField;
	uint16_t ___U3CNumberOfLineNumbersU3Ek__BackingField;
	uint32_t ___U3CSectionCharacteristicsU3Ek__BackingField;
};
struct SectionHeader_tDCEF2AA85F5E6EE0259E66E18A7333E383FDA7D3_marshaled_pinvoke
{
	char* ___U3CNameU3Ek__BackingField;
	int32_t ___U3CVirtualSizeU3Ek__BackingField;
	int32_t ___U3CVirtualAddressU3Ek__BackingField;
	int32_t ___U3CSizeOfRawDataU3Ek__BackingField;
	int32_t ___U3CPointerToRawDataU3Ek__BackingField;
	int32_t ___U3CPointerToRelocationsU3Ek__BackingField;
	int32_t ___U3CPointerToLineNumbersU3Ek__BackingField;
	uint16_t ___U3CNumberOfRelocationsU3Ek__BackingField;
	uint16_t ___U3CNumberOfLineNumbersU3Ek__BackingField;
	uint32_t ___U3CSectionCharacteristicsU3Ek__BackingField;
};
struct SectionHeader_tDCEF2AA85F5E6EE0259E66E18A7333E383FDA7D3_marshaled_com
{
	Il2CppChar* ___U3CNameU3Ek__BackingField;
	int32_t ___U3CVirtualSizeU3Ek__BackingField;
	int32_t ___U3CVirtualAddressU3Ek__BackingField;
	int32_t ___U3CSizeOfRawDataU3Ek__BackingField;
	int32_t ___U3CPointerToRawDataU3Ek__BackingField;
	int32_t ___U3CPointerToRelocationsU3Ek__BackingField;
	int32_t ___U3CPointerToLineNumbersU3Ek__BackingField;
	uint16_t ___U3CNumberOfRelocationsU3Ek__BackingField;
	uint16_t ___U3CNumberOfLineNumbersU3Ek__BackingField;
	uint32_t ___U3CSectionCharacteristicsU3Ek__BackingField;
};
struct SerializedCommand_tC29E0C661BDD3D6C4B4EAEE095AADFCDF5CE97AB 
{
	int32_t ___type;
	intptr_t ___vertexBuffer;
	intptr_t ___indexBuffer;
	int32_t ___firstRange;
	int32_t ___rangeCount;
	int32_t ___textureName;
	intptr_t ___textureRefPtr;
	int32_t ___gpuDataOffset;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___gpuData0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___gpuData1;
	intptr_t ___userProps;
};
struct SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_WorldToCameraMatrix;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_CameraPosition;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_CustomAxis;
	int32_t ___m_Criteria;
	int32_t ___m_DistanceMetric;
};
struct StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292 
{
	int32_t ___reason;
	int32_t ___passId;
	int32_t ___msaaReason;
	int32_t ___msaaPassId;
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
struct TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A 
{
	Il2CppChar ___character;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_marshaled_pinvoke
{
	uint8_t ___character;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_marshaled_com
{
	uint8_t ___character;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct TextSpan_tD088342260A71C10DC0840BCA5D5E28139BA4219 
{
	int32_t ___startIndex;
	int32_t ___length;
	intptr_t ___fontAsset;
	intptr_t ___gradientAsset;
	int32_t ___fontSize;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color;
	int32_t ___fontStyle;
	int32_t ___fontWeight;
	int32_t ___mspace;
	int32_t ___mspaceUnitType;
	int32_t ___cspace;
	int32_t ___cspaceUnitType;
	int32_t ___linkID;
	int32_t ___alignment;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___highlightPadding;
	GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A ___spriteMetrics;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___spriteID;
	bool ___spriteTint;
	float ___spriteScale;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___spriteColor;
	int32_t ___margin;
	int32_t ___marginDirection;
	int32_t ___marginUnitType;
	int32_t ___lineHeight;
	int32_t ___lineHeightUnitType;
	int32_t ___indent;
	int32_t ___indentUnitType;
	int32_t ___vOffset;
	int32_t ___vOffsetUnitType;
	int8_t ___subscriptNestingLevel;
	int8_t ___superscriptNestingLevel;
};
struct TextSpan_tD088342260A71C10DC0840BCA5D5E28139BA4219_marshaled_pinvoke
{
	int32_t ___startIndex;
	int32_t ___length;
	intptr_t ___fontAsset;
	intptr_t ___gradientAsset;
	int32_t ___fontSize;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color;
	int32_t ___fontStyle;
	int32_t ___fontWeight;
	int32_t ___mspace;
	int32_t ___mspaceUnitType;
	int32_t ___cspace;
	int32_t ___cspaceUnitType;
	int32_t ___linkID;
	int32_t ___alignment;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___highlightPadding;
	GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A ___spriteMetrics;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___spriteID;
	int32_t ___spriteTint;
	float ___spriteScale;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___spriteColor;
	int32_t ___margin;
	int32_t ___marginDirection;
	int32_t ___marginUnitType;
	int32_t ___lineHeight;
	int32_t ___lineHeightUnitType;
	int32_t ___indent;
	int32_t ___indentUnitType;
	int32_t ___vOffset;
	int32_t ___vOffsetUnitType;
	int8_t ___subscriptNestingLevel;
	int8_t ___superscriptNestingLevel;
};
struct TextSpan_tD088342260A71C10DC0840BCA5D5E28139BA4219_marshaled_com
{
	int32_t ___startIndex;
	int32_t ___length;
	intptr_t ___fontAsset;
	intptr_t ___gradientAsset;
	int32_t ___fontSize;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color;
	int32_t ___fontStyle;
	int32_t ___fontWeight;
	int32_t ___mspace;
	int32_t ___mspaceUnitType;
	int32_t ___cspace;
	int32_t ___cspaceUnitType;
	int32_t ___linkID;
	int32_t ___alignment;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___highlightPadding;
	GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A ___spriteMetrics;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___spriteID;
	int32_t ___spriteTint;
	float ___spriteScale;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___spriteColor;
	int32_t ___margin;
	int32_t ___marginDirection;
	int32_t ___marginUnitType;
	int32_t ___lineHeight;
	int32_t ___lineHeightUnitType;
	int32_t ___indent;
	int32_t ___indentUnitType;
	int32_t ___vOffset;
	int32_t ___vOffsetUnitType;
	int8_t ___subscriptNestingLevel;
	int8_t ___superscriptNestingLevel;
};
struct TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E 
{
	float ___m_Value;
	int32_t ___m_Unit;
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
struct HIDPageUsage_t13808EE79B93302D9F7E841A0DEEAA6671BA591F 
{
	int32_t ___page;
	int32_t ___usage;
};
struct DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056 
{
	String_t* ___m_ControlPath;
	int32_t ___m_Flags;
};
struct DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_pinvoke
{
	char* ___m_ControlPath;
	int32_t ___m_Flags;
};
struct DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_com
{
	Il2CppChar* ___m_ControlPath;
	int32_t ___m_Flags;
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
struct KeyEvent_tCBB9830C9FA6B909A5A6BD122FF4B532126E7674 
{
	int32_t ___U3CkeyU3Ek__BackingField;
	int32_t ___U3CmodifiersU3Ek__BackingField;
};
struct Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505  : public MulticastDelegate_t
{
};
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99  : public MulticastDelegate_t
{
};
struct Action_2_t8A22776B983FC159A556DCE6E74222D43670F873  : public MulticastDelegate_t
{
};
struct Action_2_t1D42C7D8DCD2DEB7C556FB3783F0EDAFF694E5E8  : public MulticastDelegate_t
{
};
struct DeferredArray_tB1EEA722CAEFADCA5DB101F288131BDB91341699 
{
	NativeArray_1_t76F16C71E23AB5F30821F9564775BA0C510012AA ___array;
	int32_t ___framesRemaining;
};
struct DeferredArray_t550A0C1FE3282F51201CDCB03B920FD2C8F8A819 
{
	NativeArray_1_tB946AB7C39022A3069BADCA1BFB2EB857A84AAD9 ___array;
	int32_t ___framesRemaining;
};
struct FixedAttachmentArray_1_t74727BB5F586B5A943D14A73DE3B503914222023 
{
	LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C ___a0;
	LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C ___a1;
	LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C ___a2;
	LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C ___a3;
	LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C ___a4;
	LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C ___a5;
	LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C ___a6;
	LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C ___a7;
	int32_t ___activeAttachments;
};
struct FixedAttachmentArray_1_t6EACA4660BC8F4A12B49791F310286827E4B8906 
{
	StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292 ___a0;
	StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292 ___a1;
	StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292 ___a2;
	StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292 ___a3;
	StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292 ___a4;
	StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292 ___a5;
	StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292 ___a6;
	StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292 ___a7;
	int32_t ___activeAttachments;
};
struct FixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C 
{
	FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060 _____0;
	FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060 _____1;
	FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060 _____2;
	FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060 _____3;
};
struct Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D  : public MulticastDelegate_t
{
};
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0  : public MulticastDelegate_t
{
};
struct KeyValuePair_2_t3B08CB565546FAA05345E98661ADF3C33916BDE8 
{
	String_t* ___key;
	JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___value;
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
struct Page_t00291F75278697336C2012AEC6F5682758487EAE 
{
	NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 ___array;
	int32_t ___used;
};
struct Page_tD28926EC9C906A8FCC66851C6D35FFC01F537A80 
{
	NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81 ___array;
	int32_t ___used;
};
struct Predicate_1_t7FCB25F46267D2CAE3C35FBD166CE0F52C80A92E  : public MulticastDelegate_t
{
};
struct Predicate_1_tBCC4BE47433B3F1D8C5681CF2E0ADD0D2BF53149  : public MulticastDelegate_t
{
};
struct Predicate_1_t326BC0F998ADE18AE2E91A1700AE54D525F9D657  : public MulticastDelegate_t
{
};
struct Predicate_1_t9836D21670BD7E0AD869C6598C558A1BB4977EAB  : public MulticastDelegate_t
{
};
struct Predicate_1_t69DA57CB92DDB26ECAB9849FF826B1C6606E6865  : public MulticastDelegate_t
{
};
struct Predicate_1_t5054A5550A7C3CFA5BC71895331F39E99C855E59  : public MulticastDelegate_t
{
};
struct Predicate_1_t54B1B731DA3AAA810ADFD8DAB1CE8944B6AB2A81  : public MulticastDelegate_t
{
};
struct Predicate_1_tAA474A7CBA0B071928D3FA19F80ACB079CE181DF  : public MulticastDelegate_t
{
};
struct Predicate_1_tF2BF192BFF0005978850CA84C5E46DC9E0772C29  : public MulticastDelegate_t
{
};
struct Predicate_1_t2215F09C82AE22726A8FA315215065D5DC27584C  : public MulticastDelegate_t
{
};
struct Predicate_1_tEFD22AC59C59B423FBD1720252021BCAF4A4CEC2  : public MulticastDelegate_t
{
};
struct Predicate_1_t4D865CF9EE599CDD6D0C8E2789C1C8AE0E40DC13  : public MulticastDelegate_t
{
};
struct Predicate_1_t26FB42D52E1019D513CBD6294B15023423B9A59B  : public MulticastDelegate_t
{
};
struct Predicate_1_t6DA15585C9DD4E50886E6AFE63652B2AB0C4A72E  : public MulticastDelegate_t
{
};
struct Predicate_1_tEE72E27369C3F5AC637A31CE278967AF19969048  : public MulticastDelegate_t
{
};
struct Predicate_1_tA53CD6FAEBEFC067AA7BFFFA6BCB840FEEDE4C4F  : public MulticastDelegate_t
{
};
struct Predicate_1_t4F76571EA5DA701B5472238ECF336615EEE50DF2  : public MulticastDelegate_t
{
};
struct Predicate_1_tE7F0B8F2D61DAA0EE83A00DF57A15332E430561E  : public MulticastDelegate_t
{
};
struct Predicate_1_tBF8D5C95E97FB38A68992914E17DC5DBEA0067CC  : public MulticastDelegate_t
{
};
struct Predicate_1_t1C53D780B27B71BFA5C37D3AD07C465CFA9F1E58  : public MulticastDelegate_t
{
};
struct Predicate_1_t3EDF95CE9754C646ED00EFB69810A0615F1C2DBE  : public MulticastDelegate_t
{
};
struct Predicate_1_t70AAF50F868371C18DFCA4D5BF99890434599192  : public MulticastDelegate_t
{
};
struct Predicate_1_t0A5B4938200CA8A4F5CBC11F1EBEBC63D4CA2CA1  : public MulticastDelegate_t
{
};
struct Predicate_1_t8887B96C8225261B3AF8A1D90DC38F9AA049845A  : public MulticastDelegate_t
{
};
struct Predicate_1_tBC2AD55688745A6CA5E6B47ECF3220A21D98A70E  : public MulticastDelegate_t
{
};
struct Predicate_1_tBE5246110FB6B57363BB87ED00D4AA257F9E2DE7  : public MulticastDelegate_t
{
};
struct Predicate_1_tE16314310A990F69FC6ECE70236F642AAF2DE7B0  : public MulticastDelegate_t
{
};
struct Predicate_1_t4D5B2E690DD588FBB49CD72844396DFB0CEE0504  : public MulticastDelegate_t
{
};
struct Predicate_1_t38B8302B127C83A4456CD00961BF2D335ABFDAE9  : public MulticastDelegate_t
{
};
struct Predicate_1_t150D35C8BE928DC5B2463BE6E9D6E0BB3BB447D9  : public MulticastDelegate_t
{
};
struct Predicate_1_t0975DB41DF05DB131ED71196B8040B350891EC53  : public MulticastDelegate_t
{
};
struct Predicate_1_t1DA949E4BCEF562B1EFF1FB75642D3C549C09956  : public MulticastDelegate_t
{
};
struct Predicate_1_tF55E55A108649EA4A3C792D4211EB855C8128DD8  : public MulticastDelegate_t
{
};
struct Predicate_1_t416D3BC2F088319CA78A1B32F447B21E4D0972AA  : public MulticastDelegate_t
{
};
struct Predicate_1_tB4760B6D3F922ACC1DBDC86097FBFF3A4E1A4B63  : public MulticastDelegate_t
{
};
struct Predicate_1_t46416F3DCC747FDE88EF591BA9C68A0F878F0A7C  : public MulticastDelegate_t
{
};
struct Predicate_1_tF55D4AF3BB82947809050A8D3352255F8D6E25E3  : public MulticastDelegate_t
{
};
struct Predicate_1_tCA64DE92AD797794C37C9E74AA1447D1A8BC35A4  : public MulticastDelegate_t
{
};
struct Predicate_1_t4ECFB164D87B98BF3DC2BF9471430782184C6834  : public MulticastDelegate_t
{
};
struct Predicate_1_t029A346000F81DBC5D9A7781A8E3719302946D6E  : public MulticastDelegate_t
{
};
struct Predicate_1_t0E773283C10575EF50160BF882DEDD6BEC52085A  : public MulticastDelegate_t
{
};
struct Predicate_1_t291C0D10D456B82FC6814D0B6013EA6CE933DFE7  : public MulticastDelegate_t
{
};
struct Predicate_1_tD985E3452F2ED295040F8AE528C05F9B5690BC6C  : public MulticastDelegate_t
{
};
struct Predicate_1_tF14D08E7BF26024FBDA6AE85D1BAD6B7D5DBC849  : public MulticastDelegate_t
{
};
struct Predicate_1_tE3CB0AEA831965D3841D167F3B5201A37F459FE8  : public MulticastDelegate_t
{
};
struct Predicate_1_t759BED397F6FB7BCB9A6096B967A9A92B171A729  : public MulticastDelegate_t
{
};
struct Predicate_1_t41CEE02E3FA421215884426CCD4BEE7AC6D1FB5A  : public MulticastDelegate_t
{
};
struct Predicate_1_t19DFC479E31CA340EF9C9F56D9D49A9F86744141  : public MulticastDelegate_t
{
};
struct Predicate_1_t0EFEEFCBB2AC715140B0070F3545DAE33CE17454  : public MulticastDelegate_t
{
};
struct Predicate_1_tA8D77AA9373518E964B6958F3EC327EDBA9D8649  : public MulticastDelegate_t
{
};
struct Predicate_1_tC09C8084AE6EDE6A0F77F2FEAEE099F2FDA14CBE  : public MulticastDelegate_t
{
};
struct Predicate_1_t7C22446D86E534484B9F66ACCBF0B7E1C8AEB588  : public MulticastDelegate_t
{
};
struct Predicate_1_t3DFDD90D2D8606EC1341F6E6A558B43DB6474D41  : public MulticastDelegate_t
{
};
struct Predicate_1_t27B874E6D8FA113BB5A4E1BCAF54DDDD1810649D  : public MulticastDelegate_t
{
};
struct Predicate_1_tE1E6FD106F51DE53239FA9984ECAFA8247339F43  : public MulticastDelegate_t
{
};
struct Predicate_1_t1256C59F79D10BAD00A852B7BB6212CB9234D703  : public MulticastDelegate_t
{
};
struct Predicate_1_t0C797C021DD0891FAD8275A78BF16FFE9DFB1E7A  : public MulticastDelegate_t
{
};
struct Predicate_1_t373B545D9ECC9CC6CF47021B9FF68A46E35A5E58  : public MulticastDelegate_t
{
};
struct Predicate_1_tF80E875AAA9DD64D0B22F19D7BAEB1C95A78C0D3  : public MulticastDelegate_t
{
};
struct Predicate_1_tA6886D3A0D68FA2ADE9C143393E3088C644FE196  : public MulticastDelegate_t
{
};
struct Predicate_1_tC0ECFF551C9E980E6022D575E9097589E010E584  : public MulticastDelegate_t
{
};
struct Predicate_1_t408CE23D762D084DB98996FD34D97C27DAD4A6C0  : public MulticastDelegate_t
{
};
struct Predicate_1_tFE5918AF30C7947F1B23F2777E30351884D834E2  : public MulticastDelegate_t
{
};
struct Predicate_1_t498CAB8C3A239510DF1CD4E0D9D0B8EFB398536E  : public MulticastDelegate_t
{
};
struct Predicate_1_t134ABA8D774E13C8AAF117E61638F91FC07DF10F  : public MulticastDelegate_t
{
};
struct Predicate_1_tC9C6851E26B700167C533F8020C5E001634C932B  : public MulticastDelegate_t
{
};
struct Predicate_1_t7BDE1990F24B0932600F7FC4DC25C1D46B7FC784  : public MulticastDelegate_t
{
};
struct Predicate_1_tED5D8C0125D1EC613B62FB8FB07781DC30E453D6  : public MulticastDelegate_t
{
};
struct Predicate_1_tC2F3E51595502F27EF77D4B42585762C90B126D0  : public MulticastDelegate_t
{
};
struct Predicate_1_tCFDD8129772DD49CEC5FE041AAF472E73FC19975  : public MulticastDelegate_t
{
};
struct Predicate_1_t9777C342AA5C53464F214708C2709CB4E84BA0CA  : public MulticastDelegate_t
{
};
struct Predicate_1_tF22881A47A45E702CAA370DE516FE026A48ECC43  : public MulticastDelegate_t
{
};
struct Predicate_1_t4F2B6EF16CA317D6330F414F59BFCE7C6A712F61  : public MulticastDelegate_t
{
};
struct Predicate_1_t1892DB5C2222BFD3DDB2C0DACE2B774FD64C246D  : public MulticastDelegate_t
{
};
struct Predicate_1_tFD0FBA2B16ECCF5F78DAEF47BB57AED9D5C00103  : public MulticastDelegate_t
{
};
struct Predicate_1_t17F8D386C49B7EC57DA9AD8D166FF4CAD68BD299  : public MulticastDelegate_t
{
};
struct Predicate_1_t53A707EBE1306DBDEAB0A4812C9545131C708ED6  : public MulticastDelegate_t
{
};
struct Predicate_1_tB03EDBE8ACD90421CF319C8AFAE9BCE16B1CEA77  : public MulticastDelegate_t
{
};
struct Predicate_1_tD342C855A615107CC8D95AF70BEF061044EFEBE3  : public MulticastDelegate_t
{
};
struct Predicate_1_tF2746812FD39342AFEEB8519928F82ABCD461F3E  : public MulticastDelegate_t
{
};
struct Predicate_1_t41A292D787559D27EFF52A663E15AC7062F21FF9  : public MulticastDelegate_t
{
};
struct Predicate_1_tBEF474A8961AB248CCCAB7A443893DDC7E47AD8B  : public MulticastDelegate_t
{
};
struct Predicate_1_tB973671570036B161687FC55E150A1E359FDDCAB  : public MulticastDelegate_t
{
};
struct Predicate_1_tDAC14581D6B56CB20AE0FD1511033740030C7F4B  : public MulticastDelegate_t
{
};
struct Predicate_1_tE76698318CDC0E3CD5C0FBA516C97A1CE9FD608B  : public MulticastDelegate_t
{
};
struct Predicate_1_tF479F47E87C4E416B6871D249782D222BFBB78E7  : public MulticastDelegate_t
{
};
struct Predicate_1_t7077A84784DB37633ABB1741DB2F8A669AC4FB4C  : public MulticastDelegate_t
{
};
struct Predicate_1_t5E79E8BB1D2161955B52A1C1B380524DA3032AE7  : public MulticastDelegate_t
{
};
struct Predicate_1_tD18BC17A16DFA9CD63282BFEAEBCFD3D4CD71D0E  : public MulticastDelegate_t
{
};
struct Predicate_1_t57BE7B707D080A864F17031A97B4D0E7D17AECF4  : public MulticastDelegate_t
{
};
struct Predicate_1_tD86F16489689EF310618E80DCAB3BC95AED04027  : public MulticastDelegate_t
{
};
struct Predicate_1_t912D108801F97E5276D36F467DFA804138778F76  : public MulticastDelegate_t
{
};
struct Predicate_1_tB4C816C4D97D1F62F17DD491EB56438F1F931B77  : public MulticastDelegate_t
{
};
struct Predicate_1_t0967DF7281EDCB0FC0CEEC135228AB6555D54A8C  : public MulticastDelegate_t
{
};
struct Predicate_1_tF823D276B7A520D872A23B3AE6C14035647D8828  : public MulticastDelegate_t
{
};
struct Predicate_1_t658965A911E90D0932916C0734E567A5B87EBBF0  : public MulticastDelegate_t
{
};
struct Predicate_1_tDEE95C00EC08E28B655BE830E153CCD1A669DEE7  : public MulticastDelegate_t
{
};
struct Predicate_1_t9CCB73E8B5294C98A4D492B2F8ECACEEDD0BE87E  : public MulticastDelegate_t
{
};
struct Predicate_1_t80FB7E5C66BEF660F7A73B065A0027BEB853ED76  : public MulticastDelegate_t
{
};
struct Predicate_1_t2F2BEC402386E3B09B1D7D7D935BD33BDB4FAFF8  : public MulticastDelegate_t
{
};
struct Predicate_1_tDF8F70C8D505D46B036F1C5F5089459C9D44A2FD  : public MulticastDelegate_t
{
};
struct Predicate_1_t2DF0E7DBC4309449559BF46E80C79293D7C812C9  : public MulticastDelegate_t
{
};
struct Predicate_1_tD6D987D67889B47487837636A399BAFEB8B73476  : public MulticastDelegate_t
{
};
struct Predicate_1_tD5DD7F250006C46B5F9180B938DE69B68E9ACDEA  : public MulticastDelegate_t
{
};
struct Predicate_1_t1F0D31C97B74C37A9764B0BCF88B6E15E2930219  : public MulticastDelegate_t
{
};
struct Predicate_1_tF5C5F9F2C3CFB2FA0A40089B46C80C8B21D9ADCB  : public MulticastDelegate_t
{
};
struct Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3  : public MulticastDelegate_t
{
};
struct Predicate_1_t92F2E90B1EAD00A30D1CC5D15AB968FC7C1029AD  : public MulticastDelegate_t
{
};
struct Predicate_1_tBE7D1CE43FAEAC59CC3E613A3755873DE541F60F  : public MulticastDelegate_t
{
};
struct Predicate_1_t1659F6182C62A18F9877F492426DD2DEC6A68A9B  : public MulticastDelegate_t
{
};
struct Predicate_1_t2EB8AC06BBCD4AE7BBA9CACDDC3C1B9F611618FD  : public MulticastDelegate_t
{
};
struct Predicate_1_t5805DB64113904AB19024DCCBF911D02BFAF1A18  : public MulticastDelegate_t
{
};
struct Predicate_1_t56A91CF2D89FDD3659300B6A790B0CDEC442916A  : public MulticastDelegate_t
{
};
struct Predicate_1_tB77E4291FBD92AF501644A204C39F1282DFE6191  : public MulticastDelegate_t
{
};
struct Predicate_1_tC43E0601E3961158A7F8D3954BD93B6354D70AA3  : public MulticastDelegate_t
{
};
struct Predicate_1_t75A270EF719DA010F98BE7630ECAA21A66DD8FFE  : public MulticastDelegate_t
{
};
struct Predicate_1_t8A36A16586A785169751044D47DFD03165CFBFA7  : public MulticastDelegate_t
{
};
struct Predicate_1_t1A0605C87155DBCA6412C23F07D0AEBBDC65F25B  : public MulticastDelegate_t
{
};
struct Predicate_1_t86696A7752B102AFC6ED1D86EE72BB4CD74918CF  : public MulticastDelegate_t
{
};
struct Predicate_1_t2BCB073AAF680FBF64B2C8E6954CCE3366B8D76B  : public MulticastDelegate_t
{
};
struct Predicate_1_t2EB53370B4AEB4FB33E216FE6A2963088ECBF35B  : public MulticastDelegate_t
{
};
struct Predicate_1_t4C407F62BAC454EA127AEFFEA4CB1B00FBC8E788  : public MulticastDelegate_t
{
};
struct Predicate_1_t57CCCB4F94BDBB356EA2BB14A1C517CFFD664D03  : public MulticastDelegate_t
{
};
struct Predicate_1_t09023B0AB7D2D62F61A5FE077D1F3DF03EFB51D3  : public MulticastDelegate_t
{
};
struct Predicate_1_t7E15870B0171E156AAA7351AD499B8CD47B8265F  : public MulticastDelegate_t
{
};
struct Predicate_1_t658038A21DCC88E73FB5BADB60AC64BFC2ABB23F  : public MulticastDelegate_t
{
};
struct Predicate_1_tB19E1C7275588953C5ED1BC720F0294C2011833E  : public MulticastDelegate_t
{
};
struct Predicate_1_t384FC2EF5318B24F1C0EE968DEE10DB711C1CF87  : public MulticastDelegate_t
{
};
struct Predicate_1_t8CFA91D4D02A049830E5D472DAAE120481DD8FC0  : public MulticastDelegate_t
{
};
struct Predicate_1_tCFD426A467E212A2AF90B081F4CAEAB2AAE596D5  : public MulticastDelegate_t
{
};
struct Predicate_1_tE36ED951FC57D0E26A3496ED05AE0EC01AA83DC3  : public MulticastDelegate_t
{
};
struct Predicate_1_tCF1DB80F9B8D54F7D416D5F1B9C6FA54CA2F535D  : public MulticastDelegate_t
{
};
struct Predicate_1_t1A9B2940450EB61BB507CA10D4A277554C94F948  : public MulticastDelegate_t
{
};
struct Predicate_1_t627A879A3DFC58A1148B7BF075E6B9CE1228556B  : public MulticastDelegate_t
{
};
struct Predicate_1_tE820497991AD9F06943D885CC9A354A3229F28C9  : public MulticastDelegate_t
{
};
struct Predicate_1_t12DCCB3294C77A50E007B90092B7E472A40B6708  : public MulticastDelegate_t
{
};
struct Predicate_1_t38A5CC18C44415361DE282BDC757ECF91EB68D66  : public MulticastDelegate_t
{
};
struct Predicate_1_t0A19C3F2B7B973635AAFBC52F3EFFF9790C9AD83  : public MulticastDelegate_t
{
};
struct Predicate_1_tB8E201832CEEC1B73A72C46D2BDD9CE8C9D30DE0  : public MulticastDelegate_t
{
};
struct Predicate_1_t56A0CE538418D290A8A15D2CB0DDDD8F5B3CDFD6  : public MulticastDelegate_t
{
};
struct Predicate_1_t15BDBF8F19A5FAE5FD86B4514589E78672CE8E99  : public MulticastDelegate_t
{
};
struct Predicate_1_t0114AB4A8654AB8D1A44BA37C8B324DE3B2A76C6  : public MulticastDelegate_t
{
};
struct Predicate_1_t4B5EFA1D3704747F90062CA423B22347C4D937C4  : public MulticastDelegate_t
{
};
struct Predicate_1_t530D2C32649D02E8737B3FF8B74EC53E299F7451  : public MulticastDelegate_t
{
};
struct Predicate_1_tD7F59339EFAADB30598E676043DB8CB2CDA5B17A  : public MulticastDelegate_t
{
};
struct Predicate_1_t5D008D34FB01D17ADE75703218CF68C68B3133A7  : public MulticastDelegate_t
{
};
struct Predicate_1_t075ADBB65A5D7A671D2B9106233A45E39F89B259  : public MulticastDelegate_t
{
};
struct Predicate_1_t4924177017C1A5E0D518B83B34D475845B1A5CF7  : public MulticastDelegate_t
{
};
struct Predicate_1_tA7A8A85B11304C160F44A3267B0A4C72BCDB66CF  : public MulticastDelegate_t
{
};
struct Predicate_1_t121D809CDCA93B0323F13C12156E57C8FF50EB6C  : public MulticastDelegate_t
{
};
struct Predicate_1_t231FE77F451704871DD8332FA13BC563C1DF98A7  : public MulticastDelegate_t
{
};
struct Predicate_1_t1335EE59D89A3558FF28D51C2BD57E9A6CBEE4A2  : public MulticastDelegate_t
{
};
struct Predicate_1_tC468AAE4EF34F5C0E10BD43FF63255E698171CEC  : public MulticastDelegate_t
{
};
struct Predicate_1_t4E2DCAD6B2A184221B5B5B7CB2856915444BEFAA  : public MulticastDelegate_t
{
};
struct Predicate_1_t0A3398727BB8F7EF9240C2BE26622CC794E64EC6  : public MulticastDelegate_t
{
};
struct Predicate_1_t1D48F8FA3DEDDA90C863B9872BACD1F802AE704D  : public MulticastDelegate_t
{
};
struct Predicate_1_t4F6F5B6DB903B99D6E202304A8726FFEF3D3C1D2  : public MulticastDelegate_t
{
};
struct Predicate_1_t14098631D37DC8342B94819E0B33BAA05141B212  : public MulticastDelegate_t
{
};
struct Predicate_1_t443845A10BDC358572BE0FD455618725E80F09F5  : public MulticastDelegate_t
{
};
struct Predicate_1_t9286A67DA86135244D08CD86C357A55F16C1C504  : public MulticastDelegate_t
{
};
struct Predicate_1_tF2CAE639A2C6E958DF4481CD10C66862245F9B77  : public MulticastDelegate_t
{
};
struct Predicate_1_t73712DDC60A72913D08D4AB937615171122702A6  : public MulticastDelegate_t
{
};
struct Predicate_1_t335E1C5FF683D1333BBF66A6381A618BD07EAC9B  : public MulticastDelegate_t
{
};
struct Predicate_1_tDBB7832E61C51B2AAC48AE34045F7F3801794D91  : public MulticastDelegate_t
{
};
struct Predicate_1_tC671B68F9EA429073BF3DE8D532A63AFBB3C2748  : public MulticastDelegate_t
{
};
struct Predicate_1_t8F71F5E6EEBAB0763A7E355D152645E5F12A0FD5  : public MulticastDelegate_t
{
};
struct Predicate_1_t125AE1C131A4AEC6F2F748BA19DF8F1F28E1B64A  : public MulticastDelegate_t
{
};
struct Predicate_1_t082074DFBBB16B23CBEAF213047C359D45971EBD  : public MulticastDelegate_t
{
};
struct Predicate_1_t806384B0E47C6DED9C060BF6DF5A4AAEAB41B5DC  : public MulticastDelegate_t
{
};
struct Predicate_1_t678C2AAAB4D5E236101DD0ADB5511B85B28AA381  : public MulticastDelegate_t
{
};
struct Predicate_1_tECA06EB82DA6AEBC4F101B945A192111822901DD  : public MulticastDelegate_t
{
};
struct Predicate_1_t851ABC02F1DEF60C0F66B3EEDAF5A2CE89F43C78  : public MulticastDelegate_t
{
};
struct Predicate_1_t085F417CC7AC607136297EE8E965897B25E22BA0  : public MulticastDelegate_t
{
};
struct Predicate_1_tB7EA5FD55979E5BFA2A773AF040845091A48F1F2  : public MulticastDelegate_t
{
};
struct Predicate_1_t63161D94C4B81589C6E2E7255CF7C7408E116598  : public MulticastDelegate_t
{
};
struct Predicate_1_t62D35E585A87CD1095C7BB83FA7A8F106882D19B  : public MulticastDelegate_t
{
};
struct Predicate_1_t0FA75C2688E250A8F997BCC1793B987042152CAD  : public MulticastDelegate_t
{
};
struct Predicate_1_t33210454BBD5525EDCF57579B4F30B5893B8C8EC  : public MulticastDelegate_t
{
};
struct Predicate_1_tD44833D3E82DB77FCCAF428B5A05B3F717AC19D7  : public MulticastDelegate_t
{
};
struct Predicate_1_t56CBD671890A506EE17489FA02B2F252085963B5  : public MulticastDelegate_t
{
};
struct Predicate_1_t9058548C4810505B646B00E24AECF8F76512256C  : public MulticastDelegate_t
{
};
struct Predicate_1_t52040C0404BB605626DC3B4050B99A7392B681C6  : public MulticastDelegate_t
{
};
struct Predicate_1_tCB0206F95928AC6F6E70EF6E03063F8C1942D09A  : public MulticastDelegate_t
{
};
struct Predicate_1_t67DD53883C4A1D53416D3D5AC04450D4C2D550B9  : public MulticastDelegate_t
{
};
struct Predicate_1_t6977A4A8FB4FA264FE5CA63284BEE71B0652FD68  : public MulticastDelegate_t
{
};
struct Predicate_1_tA26E40D8D8E40E1F1751F90FEBED87F4AAD88308  : public MulticastDelegate_t
{
};
struct Predicate_1_tD5A949E7B7A12F5D7F1F939A0DC04B213ACF03CD  : public MulticastDelegate_t
{
};
struct Predicate_1_t8BFFAEFC5F80E3A5CD534EFA1FCE8E02111F2938  : public MulticastDelegate_t
{
};
struct Predicate_1_t10CFB8F3569199C8C7E41D689C783BF8FF85A6CD  : public MulticastDelegate_t
{
};
struct Predicate_1_tF77354EE58DBBBB2118B440CD2E5CCC285D7509B  : public MulticastDelegate_t
{
};
struct Predicate_1_tB42DFC3FAEDCC361490394CE84FDAB0897614DCA  : public MulticastDelegate_t
{
};
struct Predicate_1_tD9C43B9F9F1E24AC8BF0B13DA518A038655CF159  : public MulticastDelegate_t
{
};
struct Predicate_1_t8BE8EDB6E5831599B205FAC82EE0FE3F1E170EEE  : public MulticastDelegate_t
{
};
struct Predicate_1_t2F212B682F64543895DDB2A14A8816A433567EFF  : public MulticastDelegate_t
{
};
struct Predicate_1_t4CC76CDB2DE98076E841155882228372ED64954D  : public MulticastDelegate_t
{
};
struct Predicate_1_t5683E0C967A7CEC61E3FB13655948650E40838B3  : public MulticastDelegate_t
{
};
struct Predicate_1_tAB62443BD8D2351939FF4054451DD1A99A2387A1  : public MulticastDelegate_t
{
};
struct Predicate_1_tEAAAB877302235E809D3416D8DD71E15AB6CA7ED  : public MulticastDelegate_t
{
};
struct Predicate_1_t551A2141926C3BAC9E5BFE8E6BB96ADE610D288F  : public MulticastDelegate_t
{
};
struct Predicate_1_t203C64C908D51E90EAD0465C23AF919A7C1F55CD  : public MulticastDelegate_t
{
};
struct Predicate_1_t81974A023BAFB944D5B1430A69D464C84F544F53  : public MulticastDelegate_t
{
};
struct Predicate_1_tBC2D1635EBBB177D914FBB7ECC54E4A7465EE41C  : public MulticastDelegate_t
{
};
struct Predicate_1_t8D91570A038BAB6E7BC403EFE6EF0F769F8D0F3D  : public MulticastDelegate_t
{
};
struct Predicate_1_t7744EBE2271FC2C4CBF28703CF361AF669D73B95  : public MulticastDelegate_t
{
};
struct Predicate_1_tE96ECD003F473EE07C8DCDFCCD657300A8DE453B  : public MulticastDelegate_t
{
};
struct Predicate_1_t5D3885F0B10D3F6345B19C0FFF8C67C14C7ECE1D  : public MulticastDelegate_t
{
};
struct Predicate_1_t3AF07CB0C94B3B8008CF7A68FB207F496576F905  : public MulticastDelegate_t
{
};
struct Predicate_1_t34FC9FE4137EF0639ABE9C1FEA3E718F546B3433  : public MulticastDelegate_t
{
};
struct Predicate_1_tB2B4613BB6B50416AC05F114BE23CAB79DB2105B  : public MulticastDelegate_t
{
};
struct Predicate_1_tB9999C9C9C42FA89BBE6865404B6372BA3E8F5F5  : public MulticastDelegate_t
{
};
struct Predicate_1_t2DE22422FB6DB49CDDD303060640BD2A601F9494  : public MulticastDelegate_t
{
};
struct Predicate_1_tAC2079F7E6995DA080B0BA133041858D4D7709D0  : public MulticastDelegate_t
{
};
struct Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107  : public MulticastDelegate_t
{
};
struct Predicate_1_tE6DC0E6F825337288FF238A376D517EF321BF19C  : public MulticastDelegate_t
{
};
struct Predicate_1_t96F71CAD31474B55556E2929EBBDD2A513491317  : public MulticastDelegate_t
{
};
struct Predicate_1_tA6EA869EC035935C687560A7C7B2665939B2FF89  : public MulticastDelegate_t
{
};
struct Predicate_1_t3F38457B9EC912152CADD8A303B97559060B734C  : public MulticastDelegate_t
{
};
struct Predicate_1_t8194F57B81937B278B5EFEF0F5B667BBB054B0D0  : public MulticastDelegate_t
{
};
struct Predicate_1_t52FF23711F254610555E47294A60791608149553  : public MulticastDelegate_t
{
};
struct Predicate_1_t7D7D9E4DC517A8D37B779DE4AB9C2C2BCB022BED  : public MulticastDelegate_t
{
};
struct Predicate_1_t9F3B9EE31F045F47C8F071AF5704303B596904E2  : public MulticastDelegate_t
{
};
struct Predicate_1_tAF6D3AA2A52B75AC2FB24C406B954695198CB543  : public MulticastDelegate_t
{
};
struct Predicate_1_tEC6CC19D44A0951E3F052DFEEA23AD9617C11D98  : public MulticastDelegate_t
{
};
struct Predicate_1_tA79A10B2685C101827A7F9155FDB96CF41167EED  : public MulticastDelegate_t
{
};
struct Predicate_1_t4690EFF9D263616BDC96916FFF73A24E6EF49CF6  : public MulticastDelegate_t
{
};
struct Predicate_1_t89A1D19BC05D75BB38A3AFED83EB050A112E5D65  : public MulticastDelegate_t
{
};
struct Predicate_1_t44DCEC204E26EFC09B4010F471C482F35789FC56  : public MulticastDelegate_t
{
};
struct Predicate_1_tABC7C098EE8EF07897599821E821E7475DD7748A  : public MulticastDelegate_t
{
};
struct Predicate_1_tFAC7FC229F0A1EFE26E081595C8FCCE069E2DD4D  : public MulticastDelegate_t
{
};
struct Predicate_1_tA17BC206702BF0590B94B2C3B98F4BABBE18DE61  : public MulticastDelegate_t
{
};
struct Predicate_1_t15E52F38022348884DB7434BD48688EFBD9A7C92  : public MulticastDelegate_t
{
};
struct Predicate_1_tE7A821CD57BA00206E0206E8CE3F6FF208B143AE  : public MulticastDelegate_t
{
};
struct Predicate_1_tE5E8B446638E679852FEF004F090064B020B1851  : public MulticastDelegate_t
{
};
struct Predicate_1_tFB60CD13D423EFABC2480AB1A0005D748762F6DD  : public MulticastDelegate_t
{
};
struct Predicate_1_t8DCFD1E780C42A60574281B4F7F34FD875DDB856  : public MulticastDelegate_t
{
};
struct Predicate_1_t5F82C0C3503EA1B68ECEC5CA226056D878DF53F0  : public MulticastDelegate_t
{
};
struct Predicate_1_t307A0D6E571F6E29070EB62217398E9D4D45C556  : public MulticastDelegate_t
{
};
struct Predicate_1_t707D110447A1E467577F8726EDDBA914E487B1B1  : public MulticastDelegate_t
{
};
struct Predicate_1_tCC6C1019817F23EFFAC06C8D0EDD8803C71D54E4  : public MulticastDelegate_t
{
};
struct Predicate_1_t81E65ECFCC613C16F7408ECA5D3D94536697174D  : public MulticastDelegate_t
{
};
struct Predicate_1_t30B6C0EA4B49279CABE20C001AAC4DD54EAE9AB6  : public MulticastDelegate_t
{
};
struct Predicate_1_t81BE711230EEE3DC50CF76B00DD7457CAF4A32E1  : public MulticastDelegate_t
{
};
struct Predicate_1_t2016617F02A0CD278E2CBE15AAEECE2ABC730D96  : public MulticastDelegate_t
{
};
struct Predicate_1_t14B8A21069ACE62988B7E5E9CC64CECF7FBC0127  : public MulticastDelegate_t
{
};
struct Predicate_1_t63CC92F8F64FA5367F9BC2F2DF4B327E680DCB69  : public MulticastDelegate_t
{
};
struct Predicate_1_t9263129E96C108B5B48D487E2D639A1E1A752A08  : public MulticastDelegate_t
{
};
struct Predicate_1_tD7190E65F15F6D4C605E0A4A156601BBD82CF3D4  : public MulticastDelegate_t
{
};
struct Predicate_1_t343F1CDB13539914AF85E118F53CCA1C14A7E12C  : public MulticastDelegate_t
{
};
struct Predicate_1_t1AEBC3BDA3382A244A73B455B916631AA922BE3C  : public MulticastDelegate_t
{
};
struct Predicate_1_tEA4395AFAC8BC9CF23979B7D814E1815CF054B26  : public MulticastDelegate_t
{
};
struct Predicate_1_t68CDD644EB35C03561AA215906DAEACADEC6C494  : public MulticastDelegate_t
{
};
struct Predicate_1_tE4207C6D75284E27F72F6C6165E82E316878688B  : public MulticastDelegate_t
{
};
struct Predicate_1_tB9F4BFD3F1C18A5DF9F779AE11956CEC4BBACB6B  : public MulticastDelegate_t
{
};
struct Predicate_1_tFBD59C2FE9D410C0EC5E3DC5517787169E4E4484  : public MulticastDelegate_t
{
};
struct Predicate_1_tEE351B2933BE240DE02360D0E8B4174CAD666F51  : public MulticastDelegate_t
{
};
struct Predicate_1_t8AF19A4EC51B315CAF4AB37D9CEEB1F101339ED3  : public MulticastDelegate_t
{
};
struct Predicate_1_t8E440748E81BBD49669D7FC4EEC505703D79FFA9  : public MulticastDelegate_t
{
};
struct Predicate_1_t77F0D1C0E3390C0CD838E63C2F1D363833AB4777  : public MulticastDelegate_t
{
};
struct Predicate_1_t644FF3475BC3864DCB3AE2D0E9D770E0CE173139  : public MulticastDelegate_t
{
};
struct Predicate_1_tA6F9529BC1C103FD42387DE9AD00421F9A03245D  : public MulticastDelegate_t
{
};
struct Predicate_1_t5A2FF4127A74A00DDF3C43C77B9C3ABD99178F1D  : public MulticastDelegate_t
{
};
struct Predicate_1_tC9584BC8DC958A3B6B776D877F817F1E77034DB0  : public MulticastDelegate_t
{
};
struct Predicate_1_t8E26B1020673A799BAA7C3D8ADC5D1DA8FC9AC47  : public MulticastDelegate_t
{
};
struct Predicate_1_t8CBAB5DC871B9BE3C950BC9ED3CBB89844A6B5B0  : public MulticastDelegate_t
{
};
struct Predicate_1_tCA0F32239152F8012ACB032DF36698B988FD701D  : public MulticastDelegate_t
{
};
struct Predicate_1_tA41D4ACA414D7C5033F84738C3BD94DA1D08AFB0  : public MulticastDelegate_t
{
};
struct Predicate_1_tB65CBF17008294E8C8A279A792871B16F010B7C3  : public MulticastDelegate_t
{
};
struct Predicate_1_tCD6A673D23F6D6C015406E78E23866E3809650C3  : public MulticastDelegate_t
{
};
struct Predicate_1_tBD3BA43838BB8EF9CBED8BB1446F0CE941A17714  : public MulticastDelegate_t
{
};
struct Predicate_1_t96E4575E1EB17BCFDF651F08D132FE8189AF804A  : public MulticastDelegate_t
{
};
struct Predicate_1_tCFCFAB92C5D18FD5838F6E67BA8B7E3381A35B87  : public MulticastDelegate_t
{
};
struct Predicate_1_tF51C00D6A8A1FDE68F562270D8ACAB63F1BEF40E  : public MulticastDelegate_t
{
};
struct ValueTuple_2_t059A8AD33AE237A7BFC276D757CE4C0F5F8B2009 
{
	KeyEvent_tCBB9830C9FA6B909A5A6BD122FF4B532126E7674 ___Item1;
	int32_t ___Item2;
};
struct ValueTuple_2_t21F35A829693C22937C9C3D3FFD4C302B4AE8392 
{
	KeyEvent_tCBB9830C9FA6B909A5A6BD122FF4B532126E7674 ___Item1;
	int32_t ___Item2;
};
struct BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 
{
	int32_t ___keyword;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___offset;
};
struct DrawingSettings_t3B64EB029DB6F94A1F2A9B2D19D2969AE361BB49 
{
	SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72 ___m_SortingSettings;
	U3CshaderPassNamesU3Ee__FixedBuffer_t5EDC823777BDDC9D50E55FF3779FBC1B3820126D ___shaderPassNames;
	int32_t ___m_PerObjectData;
	int32_t ___m_Flags;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_OverrideShaderID;
	int32_t ___m_OverrideShaderPassIndex;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_OverrideMaterialEntityId;
	int32_t ___m_OverrideMaterialPassIndex;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_fallbackMaterialEntityId;
	int32_t ___m_MainLightIndex;
	int32_t ___m_UseSrpBatcher;
	int32_t ___m_LodCrossFadeStencilMask;
};
struct Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ____type;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ____type_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____managedEvent_OffsetPadding[8];
			RuntimeObject* ____managedEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____managedEvent_OffsetPadding_forAlignmentOnly[8];
			RuntimeObject* ____managedEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____keyEvent_OffsetPadding[16];
			KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931 ____keyEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____keyEvent_OffsetPadding_forAlignmentOnly[16];
			KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931 ____keyEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____pointerEvent_OffsetPadding[16];
			PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05 ____pointerEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____pointerEvent_OffsetPadding_forAlignmentOnly[16];
			PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05 ____pointerEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____textInputEvent_OffsetPadding[16];
			TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A ____textInputEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____textInputEvent_OffsetPadding_forAlignmentOnly[16];
			TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A ____textInputEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____commandEvent_OffsetPadding[16];
			CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F ____commandEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____commandEvent_OffsetPadding_forAlignmentOnly[16];
			CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F ____commandEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____navigationEvent_OffsetPadding[16];
			NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD ____navigationEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____navigationEvent_OffsetPadding_forAlignmentOnly[16];
			NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD ____navigationEvent_forAlignmentOnly;
		};
	};
};
struct Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ____type;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ____type_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____managedEvent_OffsetPadding[8];
			Il2CppIUnknown* ____managedEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____managedEvent_OffsetPadding_forAlignmentOnly[8];
			Il2CppIUnknown* ____managedEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____keyEvent_OffsetPadding[16];
			KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931 ____keyEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____keyEvent_OffsetPadding_forAlignmentOnly[16];
			KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931 ____keyEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____pointerEvent_OffsetPadding[16];
			PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_marshaled_pinvoke ____pointerEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____pointerEvent_OffsetPadding_forAlignmentOnly[16];
			PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_marshaled_pinvoke ____pointerEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____textInputEvent_OffsetPadding[16];
			TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_marshaled_pinvoke ____textInputEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____textInputEvent_OffsetPadding_forAlignmentOnly[16];
			TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_marshaled_pinvoke ____textInputEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____commandEvent_OffsetPadding[16];
			CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F ____commandEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____commandEvent_OffsetPadding_forAlignmentOnly[16];
			CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F ____commandEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____navigationEvent_OffsetPadding[16];
			NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_marshaled_pinvoke ____navigationEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____navigationEvent_OffsetPadding_forAlignmentOnly[16];
			NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_marshaled_pinvoke ____navigationEvent_forAlignmentOnly;
		};
	};
};
struct Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ____type;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ____type_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____managedEvent_OffsetPadding[8];
			Il2CppIUnknown* ____managedEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____managedEvent_OffsetPadding_forAlignmentOnly[8];
			Il2CppIUnknown* ____managedEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____keyEvent_OffsetPadding[16];
			KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931 ____keyEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____keyEvent_OffsetPadding_forAlignmentOnly[16];
			KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931 ____keyEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____pointerEvent_OffsetPadding[16];
			PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_marshaled_com ____pointerEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____pointerEvent_OffsetPadding_forAlignmentOnly[16];
			PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_marshaled_com ____pointerEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____textInputEvent_OffsetPadding[16];
			TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_marshaled_com ____textInputEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____textInputEvent_OffsetPadding_forAlignmentOnly[16];
			TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_marshaled_com ____textInputEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____commandEvent_OffsetPadding[16];
			CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F ____commandEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____commandEvent_OffsetPadding_forAlignmentOnly[16];
			CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F ____commandEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____navigationEvent_OffsetPadding[16];
			NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_marshaled_com ____navigationEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____navigationEvent_OffsetPadding_forAlignmentOnly[16];
			NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_marshaled_com ____navigationEvent_forAlignmentOnly;
		};
	};
};
struct NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED 
{
	String_t* ___U3CnameU3Ek__BackingField;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___U3CvalueU3Ek__BackingField;
};
struct NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke ___U3CvalueU3Ek__BackingField;
};
struct NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com ___U3CvalueU3Ek__BackingField;
};
struct NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4 
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___handle;
	int32_t ___loadAction;
	int32_t ___storeAction;
	bool ___memoryless;
	int32_t ___mipLevel;
	int32_t ___depthSlice;
};
struct NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4_marshaled_pinvoke
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___handle;
	int32_t ___loadAction;
	int32_t ___storeAction;
	int32_t ___memoryless;
	int32_t ___mipLevel;
	int32_t ___depthSlice;
};
struct NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4_marshaled_com
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___handle;
	int32_t ___loadAction;
	int32_t ___storeAction;
	int32_t ___memoryless;
	int32_t ___mipLevel;
	int32_t ___depthSlice;
};
struct OccluderContext_tF8A07609A274625BEEE254608925CAD2BF4DFDB5 
{
	int32_t ___version;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___depthBufferSize;
	NativeArray_1_t8F0D14C1F4EAFB3AE60DB55E5E05E84CEA614690 ___subviewData;
	int32_t ___subviewValidMask;
	NativeArray_1_t64A170A060ACF969546C0A9E3DB21FE7ED7A6672 ___occluderMipBounds;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___occluderMipLayoutSize;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___occluderDepthPyramidSize;
	RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* ___occluderDepthPyramid;
	int32_t ___occlusionDebugOverlaySize;
	GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* ___occlusionDebugOverlay;
	bool ___debugNeedsClear;
	ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___constantBuffer;
	NativeArray_1_t96CEF42677DEFA822FCF9EABABD69E7624393AC9 ___constantBufferData;
};
struct OccluderContext_tF8A07609A274625BEEE254608925CAD2BF4DFDB5_marshaled_pinvoke
{
	int32_t ___version;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___depthBufferSize;
	NativeArray_1_t8F0D14C1F4EAFB3AE60DB55E5E05E84CEA614690 ___subviewData;
	int32_t ___subviewValidMask;
	NativeArray_1_t64A170A060ACF969546C0A9E3DB21FE7ED7A6672 ___occluderMipBounds;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___occluderMipLayoutSize;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___occluderDepthPyramidSize;
	RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* ___occluderDepthPyramid;
	int32_t ___occlusionDebugOverlaySize;
	GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* ___occlusionDebugOverlay;
	int32_t ___debugNeedsClear;
	ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___constantBuffer;
	NativeArray_1_t96CEF42677DEFA822FCF9EABABD69E7624393AC9 ___constantBufferData;
};
struct OccluderContext_tF8A07609A274625BEEE254608925CAD2BF4DFDB5_marshaled_com
{
	int32_t ___version;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___depthBufferSize;
	NativeArray_1_t8F0D14C1F4EAFB3AE60DB55E5E05E84CEA614690 ___subviewData;
	int32_t ___subviewValidMask;
	NativeArray_1_t64A170A060ACF969546C0A9E3DB21FE7ED7A6672 ___occluderMipBounds;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___occluderMipLayoutSize;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___occluderDepthPyramidSize;
	RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* ___occluderDepthPyramid;
	int32_t ___occlusionDebugOverlaySize;
	GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* ___occlusionDebugOverlay;
	int32_t ___debugNeedsClear;
	ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___constantBuffer;
	NativeArray_1_t96CEF42677DEFA822FCF9EABABD69E7624393AC9 ___constantBufferData;
};
struct PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C 
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___resource;
	int32_t ___accessFlags;
	int32_t ___mipLevel;
	int32_t ___depthSlice;
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
struct UnmanagedDataStore_t66CFDF2DBB3C86F8A58F5B3EBEE5E9537BDF2759 
{
	MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2 ___m_MemoryLabel;
	Data_t6BD087CC0FA9794D342D260035A70E365224C66E* ___m_Data;
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
struct FixedAttachmentArray_1_tEFFF2A913823035718F09AB3C6DD33263A082714 
{
	NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4 ___a0;
	NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4 ___a1;
	NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4 ___a2;
	NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4 ___a3;
	NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4 ___a4;
	NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4 ___a5;
	NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4 ___a6;
	NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4 ___a7;
	int32_t ___activeAttachments;
};
struct FixedAttachmentArray_1_t097F263B4BA144B4ACC3DC76BEBD68D2B99E582C 
{
	PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C ___a0;
	PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C ___a1;
	PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C ___a2;
	PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C ___a3;
	PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C ___a4;
	PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C ___a5;
	PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C ___a6;
	PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C ___a7;
	int32_t ___activeAttachments;
};
struct Predicate_1_tBE1A103CDA1A7F58A8774EF9FBC07CE404D92F52  : public MulticastDelegate_t
{
};
struct Predicate_1_tDE8C39770B6625B6BAC221E40622C4D3926A7FBB  : public MulticastDelegate_t
{
};
struct Predicate_1_tE9FD7B2E1F37D9019ECD0A704949CB9A27402D28  : public MulticastDelegate_t
{
};
struct Predicate_1_tFA8369D1130890E1D0663FDC849FC622CDF7BFDF  : public MulticastDelegate_t
{
};
struct Predicate_1_t4FE3633068CB7519806C7282F7CA894E87FBAF1E  : public MulticastDelegate_t
{
};
struct Predicate_1_t27683C5743E0FA4BBB81FAFFC3BE477DB965308A  : public MulticastDelegate_t
{
};
struct Predicate_1_t95624AA9929D1D29ECA2783DF51DB03FAB5E87E4  : public MulticastDelegate_t
{
};
struct Predicate_1_t014B8E27884BE51A67BAA26C7CC0D19E486E5350  : public MulticastDelegate_t
{
};
struct Predicate_1_tDF40C5B214B8C1CD42C03A302327D001EDCFE1A0  : public MulticastDelegate_t
{
};
struct Predicate_1_t59F3994CC3E1B8223E34263EBC45913D3B15BBE7  : public MulticastDelegate_t
{
};
struct Predicate_1_tB989E899E4E9154054171E9C43DE93B6E2AC6FCC  : public MulticastDelegate_t
{
};
struct Predicate_1_t2DA82FB1808C6902625283DE5A7167D87CFA99EE  : public MulticastDelegate_t
{
};
struct Predicate_1_t617F3EA6502813DEBA443B525E03338EDA2266D9  : public MulticastDelegate_t
{
};
struct Predicate_1_tDA45FFEC703500A529E702D9733C1C2095D663FC  : public MulticastDelegate_t
{
};
struct Predicate_1_tC75D341DFD48D44CB7A8EA7918C14FB58A53AA61  : public MulticastDelegate_t
{
};
struct ValueTuple_2_t441643900DE75EDC780AF50BC751CFA37BAA7C67 
{
	TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388 ___Item1;
	int32_t ___Item2;
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
struct LayoutDataAccess_t99AA56349D0BC76F3742B927F4F0DDB21511FBBA 
{
	int32_t ___m_Manager;
	UnmanagedDataStore_t66CFDF2DBB3C86F8A58F5B3EBEE5E9537BDF2759 ___m_Nodes;
	UnmanagedDataStore_t66CFDF2DBB3C86F8A58F5B3EBEE5E9537BDF2759 ___m_Configs;
};
struct PropertyPathInfo_t4F516150FF223D10399DC8E09E5DA06F616C124C 
{
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___propertyPath;
	Type_t* ___type;
};
struct PropertyPathInfo_t4F516150FF223D10399DC8E09E5DA06F616C124C_marshaled_pinvoke
{
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_pinvoke ___propertyPath;
	Type_t* ___type;
};
struct PropertyPathInfo_t4F516150FF223D10399DC8E09E5DA06F616C124C_marshaled_com
{
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_com ___propertyPath;
	Type_t* ___type;
};
struct RendererListParams_t13F72282BCE2DC255747FE7694C6BBC3377944B1 
{
	CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 ___cullingResults;
	DrawingSettings_t3B64EB029DB6F94A1F2A9B2D19D2969AE361BB49 ___drawSettings;
	FilteringSettings_t75860B12A7BCF9A0E2F13CB2C2E5DCD9E1EEAD9F ___filteringSettings;
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___tagName;
	bool ___isPassTagName;
	Nullable_1_t791F8A662AA857374FA6AFEEEA22B1F1E103327B ___tagValues;
	Nullable_1_tEB29AC5A73D1D1AF8DE0D726A51B415DC226387C ___stateBlocks;
};
struct RendererListParams_t13F72282BCE2DC255747FE7694C6BBC3377944B1_marshaled_pinvoke
{
	CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 ___cullingResults;
	DrawingSettings_t3B64EB029DB6F94A1F2A9B2D19D2969AE361BB49 ___drawSettings;
	FilteringSettings_t75860B12A7BCF9A0E2F13CB2C2E5DCD9E1EEAD9F ___filteringSettings;
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___tagName;
	int32_t ___isPassTagName;
	Nullable_1_t791F8A662AA857374FA6AFEEEA22B1F1E103327B ___tagValues;
	Nullable_1_tEB29AC5A73D1D1AF8DE0D726A51B415DC226387C ___stateBlocks;
};
struct RendererListParams_t13F72282BCE2DC255747FE7694C6BBC3377944B1_marshaled_com
{
	CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 ___cullingResults;
	DrawingSettings_t3B64EB029DB6F94A1F2A9B2D19D2969AE361BB49 ___drawSettings;
	FilteringSettings_t75860B12A7BCF9A0E2F13CB2C2E5DCD9E1EEAD9F ___filteringSettings;
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___tagName;
	int32_t ___isPassTagName;
	Nullable_1_t791F8A662AA857374FA6AFEEEA22B1F1E103327B ___tagValues;
	Nullable_1_tEB29AC5A73D1D1AF8DE0D726A51B415DC226387C ___stateBlocks;
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
struct Predicate_1_t4DEEDA7ED7ED88E4754FCA9BD1A8207F2B1C4C60  : public MulticastDelegate_t
{
};
struct Predicate_1_t1E8C79D8C762EA2BD16CBBA5AD9892619650D66A  : public MulticastDelegate_t
{
};
struct Predicate_1_t4A4778EA9CE02323E7CD7EF80CB64985D49A1BA6  : public MulticastDelegate_t
{
};
struct Predicate_1_tFF8577F292BFBC7355C242033DFA45A41AD78D0B  : public MulticastDelegate_t
{
};
struct Predicate_1_t86E77B1D9A29DD60AA05047257FCF6BBDE992299  : public MulticastDelegate_t
{
};
struct Predicate_1_t358EF298EA520AC65E008E82941FC029EE7B7A84  : public MulticastDelegate_t
{
};
struct Predicate_1_t460C0D2DC94DFD7AED48A6DDD41017B07418063C  : public MulticastDelegate_t
{
};
struct ValueTuple_2_t02ED95D21220C9364A7E49F149E633EDC9B48B4B 
{
	Binding_tA1358A155852138C1926082E4F3245B6F631CBED* ___Item1;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___Item2;
};
struct BindingInfo_tF061F1329D44DB3BDCE4BD845187F4A94AD6C460 
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CtargetElementU3Ek__BackingField;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___U3CbindingIdU3Ek__BackingField;
	Binding_tA1358A155852138C1926082E4F3245B6F631CBED* ___U3CbindingU3Ek__BackingField;
};
struct BindingInfo_tF061F1329D44DB3BDCE4BD845187F4A94AD6C460_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CtargetElementU3Ek__BackingField;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E_marshaled_pinvoke ___U3CbindingIdU3Ek__BackingField;
	Binding_tA1358A155852138C1926082E4F3245B6F631CBED* ___U3CbindingU3Ek__BackingField;
};
struct BindingInfo_tF061F1329D44DB3BDCE4BD845187F4A94AD6C460_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CtargetElementU3Ek__BackingField;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E_marshaled_com ___U3CbindingIdU3Ek__BackingField;
	Binding_tA1358A155852138C1926082E4F3245B6F631CBED* ___U3CbindingU3Ek__BackingField;
};
struct LayoutNode_tADF081B0F16F76B66459DE38F3AD8EC098F22CBE 
{
	LayoutDataAccess_t99AA56349D0BC76F3742B927F4F0DDB21511FBBA ___m_Access;
	UnmanagedDataHandle_t5295F32E122AF2E09BF729381A22BD86B72C1DD1 ___m_Handle;
};
struct NativePassData_tC0F1669A8ED49F7203325B91DF9C473D65AA9CD2 
{
	FixedAttachmentArray_1_t74727BB5F586B5A943D14A73DE3B503914222023 ___loadAudit;
	FixedAttachmentArray_1_t6EACA4660BC8F4A12B49791F310286827E4B8906 ___storeAudit;
	PassBreakAudit_t86F0837A5B639D308588333370DEB00AB5933A76 ___breakAudit;
	FixedAttachmentArray_1_t097F263B4BA144B4ACC3DC76BEBD68D2B99E582C ___fragments;
	FixedAttachmentArray_1_tEFFF2A913823035718F09AB3C6DD33263A082714 ___attachments;
	int32_t ___firstGraphPass;
	int32_t ___lastGraphPass;
	int32_t ___numGraphPasses;
	int32_t ___firstCompactedNonCulledRasterPass;
	int32_t ___lastCompactedNonCulledRasterPass;
	int32_t ___firstNativeSubPass;
	int32_t ___numNativeSubPasses;
	int32_t ___width;
	int32_t ___height;
	int32_t ___volumeDepth;
	int32_t ___samples;
	int32_t ___shadingRateImageIndex;
	bool ___hasDepth;
	bool ___hasFoveatedRasterization;
	bool ___hasShadingRateStates;
	int32_t ___extendedFeatureFlags;
	int32_t ___shadingRateFragmentSize;
	int32_t ___primitiveShadingRateCombiner;
	int32_t ___fragmentShadingRateCombiner;
};
struct NativePassData_tC0F1669A8ED49F7203325B91DF9C473D65AA9CD2_marshaled_pinvoke
{
	FixedAttachmentArray_1_t74727BB5F586B5A943D14A73DE3B503914222023 ___loadAudit;
	FixedAttachmentArray_1_t6EACA4660BC8F4A12B49791F310286827E4B8906 ___storeAudit;
	PassBreakAudit_t86F0837A5B639D308588333370DEB00AB5933A76 ___breakAudit;
	FixedAttachmentArray_1_t097F263B4BA144B4ACC3DC76BEBD68D2B99E582C ___fragments;
	FixedAttachmentArray_1_tEFFF2A913823035718F09AB3C6DD33263A082714 ___attachments;
	int32_t ___firstGraphPass;
	int32_t ___lastGraphPass;
	int32_t ___numGraphPasses;
	int32_t ___firstCompactedNonCulledRasterPass;
	int32_t ___lastCompactedNonCulledRasterPass;
	int32_t ___firstNativeSubPass;
	int32_t ___numNativeSubPasses;
	int32_t ___width;
	int32_t ___height;
	int32_t ___volumeDepth;
	int32_t ___samples;
	int32_t ___shadingRateImageIndex;
	int32_t ___hasDepth;
	int32_t ___hasFoveatedRasterization;
	int32_t ___hasShadingRateStates;
	int32_t ___extendedFeatureFlags;
	int32_t ___shadingRateFragmentSize;
	int32_t ___primitiveShadingRateCombiner;
	int32_t ___fragmentShadingRateCombiner;
};
struct NativePassData_tC0F1669A8ED49F7203325B91DF9C473D65AA9CD2_marshaled_com
{
	FixedAttachmentArray_1_t74727BB5F586B5A943D14A73DE3B503914222023 ___loadAudit;
	FixedAttachmentArray_1_t6EACA4660BC8F4A12B49791F310286827E4B8906 ___storeAudit;
	PassBreakAudit_t86F0837A5B639D308588333370DEB00AB5933A76 ___breakAudit;
	FixedAttachmentArray_1_t097F263B4BA144B4ACC3DC76BEBD68D2B99E582C ___fragments;
	FixedAttachmentArray_1_tEFFF2A913823035718F09AB3C6DD33263A082714 ___attachments;
	int32_t ___firstGraphPass;
	int32_t ___lastGraphPass;
	int32_t ___numGraphPasses;
	int32_t ___firstCompactedNonCulledRasterPass;
	int32_t ___lastCompactedNonCulledRasterPass;
	int32_t ___firstNativeSubPass;
	int32_t ___numNativeSubPasses;
	int32_t ___width;
	int32_t ___height;
	int32_t ___volumeDepth;
	int32_t ___samples;
	int32_t ___shadingRateImageIndex;
	int32_t ___hasDepth;
	int32_t ___hasFoveatedRasterization;
	int32_t ___hasShadingRateStates;
	int32_t ___extendedFeatureFlags;
	int32_t ___shadingRateFragmentSize;
	int32_t ___primitiveShadingRateCombiner;
	int32_t ___fragmentShadingRateCombiner;
};
struct RendererListResource_tCB75EF1874F8A294101A45F937987CC314B92214 
{
	RendererListParams_t13F72282BCE2DC255747FE7694C6BBC3377944B1 ___desc;
	RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 ___rendererList;
};
struct RendererListResource_tCB75EF1874F8A294101A45F937987CC314B92214_marshaled_pinvoke
{
	RendererListParams_t13F72282BCE2DC255747FE7694C6BBC3377944B1_marshaled_pinvoke ___desc;
	RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 ___rendererList;
};
struct RendererListResource_tCB75EF1874F8A294101A45F937987CC314B92214_marshaled_com
{
	RendererListParams_t13F72282BCE2DC255747FE7694C6BBC3377944B1_marshaled_com ___desc;
	RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 ___rendererList;
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
struct Predicate_1_t4519DCFAE39088390CFAC9A62AEA350ED0596BA3  : public MulticastDelegate_t
{
};
struct Predicate_1_tF3E33C67A02C51643F92FC3DF4304271764F91FD  : public MulticastDelegate_t
{
};
struct Predicate_1_tB5BA30AD19A61B79F87596B1E6B2AE996BBEF641  : public MulticastDelegate_t
{
};
struct Predicate_1_t235E7EB0316932E2F9623009E7A01FC94010C462  : public MulticastDelegate_t
{
};
struct Predicate_1_tEBFA44E2F0D8B114072ABA5F4A6A8C6368D57FD3  : public MulticastDelegate_t
{
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
struct BindableElement_t873EFF65032D21AB3B7BFBA21675D1693967435C  : public VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115
{
	RuntimeObject* ___U3CbindingU3Ek__BackingField;
	String_t* ___U3CbindingPathU3Ek__BackingField;
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
struct PopupTextElement_tB66F018ABFF49109BE15AE72F4E3702EDF7BB82F  : public TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0
{
};
struct PopupTextElement_t9907DF8AE9D5B0B23DCF3C517A9571E49EC398EA  : public TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0
{
};
struct PopupTextElement_t6E5BB59D987F4D2B6989AFA53F762ADE9A822B3C  : public TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0
{
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


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m6343941059117DF354182855F996EB3D08B4C06C_gshared_inline (Action_2_t1D42C7D8DCD2DEB7C556FB3783F0EDAFF694E5E8* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Func_2_Invoke_m31CAC166FDC80DC5AE52A5AEFFEE2D9B27A1CA3F_gshared_inline (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* __this, Il2CppFullySharedGenericAny ___0_arg, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 TextElement_MeasureTextSize_m4F2E0FF21CE393339DD63D04723159B9CFD55386 (TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0* __this, String_t* ___0_textToMeasure, float ___1_width, int32_t ___2_widthMode, float ___3_height, int32_t ___4_heightMode, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextElement__ctor_mB52112242702EEDC8E13BF444AB19E97329B7CE5 (TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Popup__ctor_m9BAF0E8F1692444B9167F06552B7A3302351B50A (Popup_tCD2F8EF10FBFD80CADEC755F65984D5D72BA5F4A* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_referenceView, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___1_view, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___2_contentView, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* Popup_get_contentView_m9F565185F46C1235343F98B56A3D523595F52D07_inline (Popup_tCD2F8EF10FBFD80CADEC755F65984D5D72BA5F4A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* Popup_get_view_mF578D79EAC76D19497F956C68487ED3827D80338_inline (Popup_tCD2F8EF10FBFD80CADEC755F65984D5D72BA5F4A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VisualElement_get_panel_m44AEFA3041785E57641AA3F895D11215C841BED1 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Popup_set_containerView_mC3FBE53D0E7076F933E1E7D4DE76078E7EE5C8E3_inline (Popup_tCD2F8EF10FBFD80CADEC755F65984D5D72BA5F4A* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* Popup_get_containerView_m371F24165040F772818042CF2AFEFC5FCF8719A4_inline (Popup_tCD2F8EF10FBFD80CADEC755F65984D5D72BA5F4A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_child, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Popup_set_keyboardDismissEnabled_m1615718A8DD3B174392736EBF6ECE258E34786B2_inline (Popup_tCD2F8EF10FBFD80CADEC755F65984D5D72BA5F4A* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Popup_InvokeShownEventHandlers_m2E6FFDCAA0AA78DA0FC669AD05C8691CE9DBD86B (Popup_tCD2F8EF10FBFD80CADEC755F65984D5D72BA5F4A* __this, const RuntimeMethod* method) ;
inline void Action_1_Invoke_mDB8F7C7381C08B4DCE4E409D2FA4073BC17F90B5_inline (Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* __this, Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, Il2CppFullySharedGenericAny, const RuntimeMethod*))Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline)((Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)__this, (Il2CppFullySharedGenericAny)___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Popup_InvokeDismissedEventHandlers_m17C86BB18849FC922DB1FD0A3341B4F3017CE95D (Popup_tCD2F8EF10FBFD80CADEC755F65984D5D72BA5F4A* __this, int32_t ___0_reason, const RuntimeMethod* method) ;
inline void Action_2_Invoke_mD03DE2B0211B47C43CB080D9D1587D611D91FA77_inline (Action_2_t8A22776B983FC159A556DCE6E74222D43670F873* __this, Il2CppSharedGenericObject* ___0_arg1, int32_t ___1_arg2, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t1D42C7D8DCD2DEB7C556FB3783F0EDAFF694E5E8*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, const RuntimeMethod*))Action_2_Invoke_m6343941059117DF354182855F996EB3D08B4C06C_gshared_inline)((Action_2_t1D42C7D8DCD2DEB7C556FB3783F0EDAFF694E5E8*)__this, (Il2CppFullySharedGenericAny)___0_arg1, (Il2CppFullySharedGenericAny)&___1_arg2, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_RemoveFromHierarchy_m5F43EA9B8CBA47EA2AEC2D75180713395AEECF64 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
inline bool Func_2_Invoke_mDFD235952DAD602D1DFB25297EC22590CE99B6F5_inline (Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* __this, Il2CppSharedGenericObject* ___0_arg, const RuntimeMethod* method)
{
	bool il2cppRetVal;
	((  void (*) (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Func_2_Invoke_m31CAC166FDC80DC5AE52A5AEFFEE2D9B27A1CA3F_gshared_inline)((Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*)__this, (Il2CppFullySharedGenericAny)___0_arg, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PopupTextElement_DoMeasure_m08A6F6DEA118A8E742A859383923A01107BE2C01_gshared (PopupTextElement_t6E5BB59D987F4D2B6989AFA53F762ADE9A822B3C* __this, float ___0_desiredWidth, int32_t ___1_widthMode, float ___2_desiredHeight, int32_t ___3_heightMode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PopupTextElement_tC61D8A39B186E784E4FC5034EFE5CD6B4151F522_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_desiredWidth), (&___1_widthMode), (&___2_desiredHeight), (&___3_heightMode));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 12727));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 12728));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 12729));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 12730));
		NullCheck((TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0*)__this);
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(273, (TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0*)__this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 12730));
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 12731));
		String_t* L_1 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 12732));
		bool L_2;
		L_2 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 12732));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 12733));
		V_0 = _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
	}

IL_0015:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 12734));
		String_t* L_3 = V_0;
		float L_4 = ___0_desiredWidth;
		int32_t L_5 = ___1_widthMode;
		float L_6 = ___2_desiredHeight;
		int32_t L_7 = ___3_heightMode;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 12735));
		NullCheck((TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0*)__this);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = TextElement_MeasureTextSize_m4F2E0FF21CE393339DD63D04723159B9CFD55386((TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0*)__this, L_3, L_4, L_5, L_6, L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 12735));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PopupTextElement__ctor_m6688B3A98E9B7A65789457365B655E892944A34D_gshared (PopupTextElement_t6E5BB59D987F4D2B6989AFA53F762ADE9A822B3C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_runtime_class_init_inline(TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0_il2cpp_TypeInfo_var);
		TextElement__ctor_mB52112242702EEDC8E13BF444AB19E97329B7CE5((TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Popup_1__ctor_m8CC94DFB0C66B83B16040C6121E3017AC04A2193_gshared (Popup_1_tD6BBE7B9C18054FA9988518B43C91C9C2F9D36B3* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_referenceView, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___1_view, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___2_contentView, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Popup_1_tD5E73E4129084F904857B2BBFE581F4D68BEBAF6_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_referenceView), (&___1_view), (&___2_contentView));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53750));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 53751));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53752));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = ___0_referenceView;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_1 = ___1_view;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_2 = ___2_contentView;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53753));
		Popup__ctor_m9BAF0E8F1692444B9167F06552B7A3302351B50A((Popup_tCD2F8EF10FBFD80CADEC755F65984D5D72BA5F4A*)__this, L_0, L_1, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53753));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53754));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53755));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Popup_1_add_shown_mB6936A774E6AFC3765B584C0BDC05C0012C99205_gshared (Popup_1_tD6BBE7B9C18054FA9988518B43C91C9C2F9D36B3* __this, Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* ___0_value, const RuntimeMethod* method) 
{
	Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* V_0 = NULL;
	Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* V_1 = NULL;
	Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* V_2 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* L_0 = __this->___shown;
		V_0 = L_0;
	}

IL_0007:
	{
		CHECK_PAUSE_POINT;
		Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* L_1 = V_0;
		V_1 = L_1;
		Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* L_2 = V_1;
		Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00((Delegate_t*)L_2, (Delegate_t*)L_3, NULL);
		V_2 = ((Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505** L_5 = (Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505**)(&__this->___shown);
		Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* L_6 = V_2;
		Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* L_7 = V_1;
		Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* L_9 = V_0;
		Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505*)L_9) == ((RuntimeObject*)(Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Popup_1_remove_shown_m51DE1518697A30C67C9C6D92CBD8DD923837F03B_gshared (Popup_1_tD6BBE7B9C18054FA9988518B43C91C9C2F9D36B3* __this, Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* ___0_value, const RuntimeMethod* method) 
{
	Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* V_0 = NULL;
	Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* V_1 = NULL;
	Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* V_2 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* L_0 = __this->___shown;
		V_0 = L_0;
	}

IL_0007:
	{
		CHECK_PAUSE_POINT;
		Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* L_1 = V_0;
		V_1 = L_1;
		Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* L_2 = V_1;
		Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3((Delegate_t*)L_2, (Delegate_t*)L_3, NULL);
		V_2 = ((Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505** L_5 = (Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505**)(&__this->___shown);
		Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* L_6 = V_2;
		Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* L_7 = V_1;
		Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* L_9 = V_0;
		Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505*)L_9) == ((RuntimeObject*)(Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Popup_1_add_dismissed_m5C017765411149A159A88A1E2E7E7CF7C54E5129_gshared (Popup_1_tD6BBE7B9C18054FA9988518B43C91C9C2F9D36B3* __this, Action_2_t8A22776B983FC159A556DCE6E74222D43670F873* ___0_value, const RuntimeMethod* method) 
{
	Action_2_t8A22776B983FC159A556DCE6E74222D43670F873* V_0 = NULL;
	Action_2_t8A22776B983FC159A556DCE6E74222D43670F873* V_1 = NULL;
	Action_2_t8A22776B983FC159A556DCE6E74222D43670F873* V_2 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Action_2_t8A22776B983FC159A556DCE6E74222D43670F873* L_0 = __this->___dismissed;
		V_0 = L_0;
	}

IL_0007:
	{
		CHECK_PAUSE_POINT;
		Action_2_t8A22776B983FC159A556DCE6E74222D43670F873* L_1 = V_0;
		V_1 = L_1;
		Action_2_t8A22776B983FC159A556DCE6E74222D43670F873* L_2 = V_1;
		Action_2_t8A22776B983FC159A556DCE6E74222D43670F873* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00((Delegate_t*)L_2, (Delegate_t*)L_3, NULL);
		V_2 = ((Action_2_t8A22776B983FC159A556DCE6E74222D43670F873*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
		Action_2_t8A22776B983FC159A556DCE6E74222D43670F873** L_5 = (Action_2_t8A22776B983FC159A556DCE6E74222D43670F873**)(&__this->___dismissed);
		Action_2_t8A22776B983FC159A556DCE6E74222D43670F873* L_6 = V_2;
		Action_2_t8A22776B983FC159A556DCE6E74222D43670F873* L_7 = V_1;
		Action_2_t8A22776B983FC159A556DCE6E74222D43670F873* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_2_t8A22776B983FC159A556DCE6E74222D43670F873*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_2_t8A22776B983FC159A556DCE6E74222D43670F873* L_9 = V_0;
		Action_2_t8A22776B983FC159A556DCE6E74222D43670F873* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_2_t8A22776B983FC159A556DCE6E74222D43670F873*)L_9) == ((RuntimeObject*)(Action_2_t8A22776B983FC159A556DCE6E74222D43670F873*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Popup_1_remove_dismissed_m8D9326354450266CB777ACEC998CCBA5BF7FBA65_gshared (Popup_1_tD6BBE7B9C18054FA9988518B43C91C9C2F9D36B3* __this, Action_2_t8A22776B983FC159A556DCE6E74222D43670F873* ___0_value, const RuntimeMethod* method) 
{
	Action_2_t8A22776B983FC159A556DCE6E74222D43670F873* V_0 = NULL;
	Action_2_t8A22776B983FC159A556DCE6E74222D43670F873* V_1 = NULL;
	Action_2_t8A22776B983FC159A556DCE6E74222D43670F873* V_2 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Action_2_t8A22776B983FC159A556DCE6E74222D43670F873* L_0 = __this->___dismissed;
		V_0 = L_0;
	}

IL_0007:
	{
		CHECK_PAUSE_POINT;
		Action_2_t8A22776B983FC159A556DCE6E74222D43670F873* L_1 = V_0;
		V_1 = L_1;
		Action_2_t8A22776B983FC159A556DCE6E74222D43670F873* L_2 = V_1;
		Action_2_t8A22776B983FC159A556DCE6E74222D43670F873* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3((Delegate_t*)L_2, (Delegate_t*)L_3, NULL);
		V_2 = ((Action_2_t8A22776B983FC159A556DCE6E74222D43670F873*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
		Action_2_t8A22776B983FC159A556DCE6E74222D43670F873** L_5 = (Action_2_t8A22776B983FC159A556DCE6E74222D43670F873**)(&__this->___dismissed);
		Action_2_t8A22776B983FC159A556DCE6E74222D43670F873* L_6 = V_2;
		Action_2_t8A22776B983FC159A556DCE6E74222D43670F873* L_7 = V_1;
		Action_2_t8A22776B983FC159A556DCE6E74222D43670F873* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_2_t8A22776B983FC159A556DCE6E74222D43670F873*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_2_t8A22776B983FC159A556DCE6E74222D43670F873* L_9 = V_0;
		Action_2_t8A22776B983FC159A556DCE6E74222D43670F873* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_2_t8A22776B983FC159A556DCE6E74222D43670F873*)L_9) == ((RuntimeObject*)(Action_2_t8A22776B983FC159A556DCE6E74222D43670F873*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Popup_1_SetContainerView_mD71A48F07F16187FA33BF3AA7D3314B98DB2C9B3_gshared (Popup_1_tD6BBE7B9C18054FA9988518B43C91C9C2F9D36B3* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_element, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Popup_1_tD5E73E4129084F904857B2BBFE581F4D68BEBAF6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7C63ECDBC55723800FD03B449D6E8EF799719A2);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Il2CppSharedGenericObject* V_2 = NULL;
	bool V_3 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_element));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53756));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 53757));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53758));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53759));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53760));
		NullCheck((Popup_tCD2F8EF10FBFD80CADEC755F65984D5D72BA5F4A*)__this);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0;
		L_0 = Popup_get_contentView_m9F565185F46C1235343F98B56A3D523595F52D07_inline((Popup_tCD2F8EF10FBFD80CADEC755F65984D5D72BA5F4A*)__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53760));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_1 = ___0_element;
		V_1 = (bool)((((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_0) == ((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_1))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53761));
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53762));
		V_2 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)__this, il2cpp_rgctx_data(method->klass->rgctx_data, 7)));
		goto IL_005b;
	}

IL_0017:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53763));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53764));
		NullCheck((Popup_tCD2F8EF10FBFD80CADEC755F65984D5D72BA5F4A*)__this);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_3;
		L_3 = Popup_get_view_mF578D79EAC76D19497F956C68487ED3827D80338_inline((Popup_tCD2F8EF10FBFD80CADEC755F65984D5D72BA5F4A*)__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53764));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53765));
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = VisualElement_get_panel_m44AEFA3041785E57641AA3F895D11215C841BED1(L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53765));
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53766));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_5 = ___0_element;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53767));
		NullCheck((Popup_tCD2F8EF10FBFD80CADEC755F65984D5D72BA5F4A*)__this);
		Popup_set_containerView_mC3FBE53D0E7076F933E1E7D4DE76078E7EE5C8E3_inline((Popup_tCD2F8EF10FBFD80CADEC755F65984D5D72BA5F4A*)__this, L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53767));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53768));
		bool L_6 = V_0;
		V_3 = L_6;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53769));
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0052;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53770));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53771));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53772));
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralA7C63ECDBC55723800FD03B449D6E8EF799719A2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53772));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53773));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53774));
		NullCheck((Popup_tCD2F8EF10FBFD80CADEC755F65984D5D72BA5F4A*)__this);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_8;
		L_8 = Popup_get_containerView_m371F24165040F772818042CF2AFEFC5FCF8719A4_inline((Popup_tCD2F8EF10FBFD80CADEC755F65984D5D72BA5F4A*)__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53774));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53775));
		NullCheck((Popup_tCD2F8EF10FBFD80CADEC755F65984D5D72BA5F4A*)__this);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_9;
		L_9 = Popup_get_view_mF578D79EAC76D19497F956C68487ED3827D80338_inline((Popup_tCD2F8EF10FBFD80CADEC755F65984D5D72BA5F4A*)__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53775));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53776));
		NullCheck(L_8);
		VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(L_8, L_9, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53776));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53777));
	}

IL_0052:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53778));
		V_2 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)__this, il2cpp_rgctx_data(method->klass->rgctx_data, 7)));
		goto IL_005b;
	}

IL_005b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53779));
		Il2CppSharedGenericObject* L_10 = V_2;
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Popup_1_SetKeyboardDismiss_m25C8EE8682A61E02BCE71D1F89145368005AF909_gshared (Popup_1_tD6BBE7B9C18054FA9988518B43C91C9C2F9D36B3* __this, bool ___0_dismissEnabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Popup_1_tD5E73E4129084F904857B2BBFE581F4D68BEBAF6_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppSharedGenericObject* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_dismissEnabled));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53780));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 53781));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53782));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53783));
		bool L_0 = ___0_dismissEnabled;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53784));
		NullCheck((Popup_tCD2F8EF10FBFD80CADEC755F65984D5D72BA5F4A*)__this);
		Popup_set_keyboardDismissEnabled_m1615718A8DD3B174392736EBF6ECE258E34786B2_inline((Popup_tCD2F8EF10FBFD80CADEC755F65984D5D72BA5F4A*)__this, L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53784));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53785));
		V_0 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)__this, il2cpp_rgctx_data(method->klass->rgctx_data, 7)));
		goto IL_0012;
	}

IL_0012:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53786));
		Il2CppSharedGenericObject* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Popup_1_SetLastFocusedElement_m4B3BB481299115E5BA506483C61FCE3D3B18F1B3_gshared (Popup_1_tD6BBE7B9C18054FA9988518B43C91C9C2F9D36B3* __this, Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0* ___0_focusable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Popup_1_tD5E73E4129084F904857B2BBFE581F4D68BEBAF6_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppSharedGenericObject* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_focusable));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53787));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 53788));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53789));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53790));
		Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0* L_0 = ___0_focusable;
		__this->___m_LastFocusedElement = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LastFocusedElement), (void*)L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53791));
		V_0 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)__this, il2cpp_rgctx_data(method->klass->rgctx_data, 7)));
		goto IL_0011;
	}

IL_0011:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53792));
		Il2CppSharedGenericObject* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Popup_1_InvokeShownEventHandlers_mB5B76C5C236D0CE7AF7D22BB1DFD439923E0AE19_gshared (Popup_1_tD6BBE7B9C18054FA9988518B43C91C9C2F9D36B3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Popup_1_tD5E73E4129084F904857B2BBFE581F4D68BEBAF6_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53793));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 53794));
	Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* G_B2_0 = NULL;
	Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* G_B1_0 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53795));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53796));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53797));
		NullCheck((Popup_tCD2F8EF10FBFD80CADEC755F65984D5D72BA5F4A*)__this);
		Popup_InvokeShownEventHandlers_m2E6FFDCAA0AA78DA0FC669AD05C8691CE9DBD86B((Popup_tCD2F8EF10FBFD80CADEC755F65984D5D72BA5F4A*)__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53797));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53798));
		Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* L_0 = __this->___shown;
		Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0014;
		}
		G_B1_0 = L_1;
	}
	{
		goto IL_0020;
	}

IL_0014:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53799));
		NullCheck(G_B2_0);
		Action_1_Invoke_mDB8F7C7381C08B4DCE4E409D2FA4073BC17F90B5_inline(G_B2_0, ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)__this, il2cpp_rgctx_data(method->klass->rgctx_data, 7))), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53799));
	}

IL_0020:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53800));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Popup_1_InvokeDismissedEventHandlers_m4D6F11BBB7F9CB7D05882B0130EA6B951231351C_gshared (Popup_1_tD6BBE7B9C18054FA9988518B43C91C9C2F9D36B3* __this, int32_t ___0_reason, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Popup_1_tD5E73E4129084F904857B2BBFE581F4D68BEBAF6_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_reason));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53801));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 53802));
	Action_2_t8A22776B983FC159A556DCE6E74222D43670F873* G_B2_0 = NULL;
	Action_2_t8A22776B983FC159A556DCE6E74222D43670F873* G_B1_0 = NULL;
	Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0* G_B6_0 = NULL;
	Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0* G_B5_0 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53803));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53804));
		int32_t L_0 = ___0_reason;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53805));
		NullCheck((Popup_tCD2F8EF10FBFD80CADEC755F65984D5D72BA5F4A*)__this);
		Popup_InvokeDismissedEventHandlers_m17C86BB18849FC922DB1FD0A3341B4F3017CE95D((Popup_tCD2F8EF10FBFD80CADEC755F65984D5D72BA5F4A*)__this, L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53805));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53806));
		Action_2_t8A22776B983FC159A556DCE6E74222D43670F873* L_1 = __this->___dismissed;
		Action_2_t8A22776B983FC159A556DCE6E74222D43670F873* L_2 = L_1;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0015;
		}
		G_B1_0 = L_2;
	}
	{
		goto IL_0022;
	}

IL_0015:
	{
		int32_t L_3 = ___0_reason;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53807));
		NullCheck(G_B2_0);
		Action_2_Invoke_mD03DE2B0211B47C43CB080D9D1587D611D91FA77_inline(G_B2_0, ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)__this, il2cpp_rgctx_data(method->klass->rgctx_data, 7))), L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53807));
	}

IL_0022:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53808));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53809));
		NullCheck((Popup_tCD2F8EF10FBFD80CADEC755F65984D5D72BA5F4A*)__this);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_4;
		L_4 = Popup_get_view_mF578D79EAC76D19497F956C68487ED3827D80338_inline((Popup_tCD2F8EF10FBFD80CADEC755F65984D5D72BA5F4A*)__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53809));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53810));
		NullCheck(L_4);
		VisualElement_RemoveFromHierarchy_m5F43EA9B8CBA47EA2AEC2D75180713395AEECF64(L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53810));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53811));
		int32_t L_5 = ___0_reason;
		V_0 = (bool)((((int32_t)((((int32_t)L_5) == ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53812));
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_004b;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53813));
		Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0* L_7 = __this->___m_LastFocusedElement;
		Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0* L_8 = L_7;
		if (L_8)
		{
			G_B6_0 = L_8;
			goto IL_0045;
		}
		G_B5_0 = L_8;
	}
	{
		goto IL_004b;
	}

IL_0045:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53814));
		NullCheck(G_B6_0);
		VirtualActionInvoker0::Invoke(23, G_B6_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53814));
	}

IL_004b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53815));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PredicateWrapper_1__ctor_m1074B56E50CC0AA936EA8F4398A6E22F05448AE2_gshared (PredicateWrapper_1_tA8CCC29D508BB2FCF14F828C03D07CBDC4F6C1F1* __this, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PredicateWrapper_1_t4258D6745E06C390A69E717C6DCF009C176EF117_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_p));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 112566));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 112567));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 112568));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 112569));
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 112569));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 112570));
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_0 = ___0_p;
		__this->___predicate = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 112571));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PredicateWrapper_1_Predicate_m0831F12D27C0C2C91663A37F70846EAEF8E58A19_gshared (PredicateWrapper_1_tA8CCC29D508BB2FCF14F828C03D07CBDC4F6C1F1* __this, RuntimeObject* ___0_e, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PredicateWrapper_1_t4258D6745E06C390A69E717C6DCF009C176EF117_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppSharedGenericObject* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_e));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 112572));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 112573));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 112574));
		RuntimeObject* L_0 = ___0_e;
		V_0 = ((Il2CppSharedGenericObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2)));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 112575));
		Il2CppSharedGenericObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 112576));
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_2 = __this->___predicate;
		Il2CppSharedGenericObject* L_3 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 112577));
		NullCheck(L_2);
		bool L_4;
		L_4 = Func_2_Invoke_mDFD235952DAD602D1DFB25297EC22590CE99B6F5_inline(L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 112577));
		return L_4;
	}

IL_0021:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 112578));
		return (bool)0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
bool Predicate_1_Invoke_m6F76B5644E2D6BD882F23B65434545AD90EFE5A1_Multicast(Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* __this, Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	bool retVal = false;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* currentDelegate = reinterpret_cast<Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107*>(delegatesToInvoke[i]);
		typedef bool (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
bool Predicate_1_Invoke_m6F76B5644E2D6BD882F23B65434545AD90EFE5A1_OpenStaticInvoker(Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* __this, Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, ___0_obj);
}
bool Predicate_1_Invoke_m6F76B5644E2D6BD882F23B65434545AD90EFE5A1_ClosedStaticInvoker(Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* __this, Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< bool, RuntimeObject*, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, __this->___m_target, ___0_obj);
}
bool Predicate_1_Invoke_m6F76B5644E2D6BD882F23B65434545AD90EFE5A1_ClosedInstInvoker(Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* __this, Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, __this->___m_target, ___0_obj);
}
bool Predicate_1_Invoke_m6F76B5644E2D6BD882F23B65434545AD90EFE5A1_OpenInstInvoker(Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* __this, Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method)
{
	NullCheck(___0_obj);
	return InvokerFuncInvoker0< bool >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, ___0_obj);
}
bool Predicate_1_Invoke_m6F76B5644E2D6BD882F23B65434545AD90EFE5A1_OpenVirtualInvoker(Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* __this, Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method)
{
	NullCheck(___0_obj);
	return VirtualFuncInvoker0Invoker< bool >::Invoke(il2cpp_codegen_method_get_slot(method), (RuntimeObject*)___0_obj);
}
bool Predicate_1_Invoke_m6F76B5644E2D6BD882F23B65434545AD90EFE5A1_OpenInterfaceInvoker(Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* __this, Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method)
{
	NullCheck(___0_obj);
	return InterfaceFuncInvoker0Invoker< bool >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), (RuntimeObject*)___0_obj);
}
bool Predicate_1_Invoke_m6F76B5644E2D6BD882F23B65434545AD90EFE5A1_OpenGenericVirtualInvoker(Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* __this, Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method)
{
	NullCheck(___0_obj);
	return GenericVirtualFuncInvoker0Invoker< bool >::Invoke(method, (RuntimeObject*)___0_obj);
}
bool Predicate_1_Invoke_m6F76B5644E2D6BD882F23B65434545AD90EFE5A1_OpenGenericInterfaceInvoker(Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* __this, Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method)
{
	NullCheck(___0_obj);
	return GenericInterfaceFuncInvoker0Invoker< bool >::Invoke(method, (RuntimeObject*)___0_obj);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m2B0279AF2950764FCBFEF3BC1BF616854B3EE3AC_gshared (Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&Predicate_1_Invoke_m6F76B5644E2D6BD882F23B65434545AD90EFE5A1_OpenStaticInvoker;
		else
			__this->___invoke_impl = (intptr_t)&Predicate_1_Invoke_m6F76B5644E2D6BD882F23B65434545AD90EFE5A1_ClosedStaticInvoker;
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&Predicate_1_Invoke_m6F76B5644E2D6BD882F23B65434545AD90EFE5A1_OpenGenericInterfaceInvoker;
					else
						__this->___invoke_impl = (intptr_t)&Predicate_1_Invoke_m6F76B5644E2D6BD882F23B65434545AD90EFE5A1_OpenGenericVirtualInvoker;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&Predicate_1_Invoke_m6F76B5644E2D6BD882F23B65434545AD90EFE5A1_OpenInterfaceInvoker;
					else
						__this->___invoke_impl = (intptr_t)&Predicate_1_Invoke_m6F76B5644E2D6BD882F23B65434545AD90EFE5A1_OpenVirtualInvoker;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&Predicate_1_Invoke_m6F76B5644E2D6BD882F23B65434545AD90EFE5A1_OpenInstInvoker;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = (intptr_t)&Predicate_1_Invoke_m6F76B5644E2D6BD882F23B65434545AD90EFE5A1_ClosedInstInvoker;
		}
	}
	__this->___extra_arg = (intptr_t)&Predicate_1_Invoke_m6F76B5644E2D6BD882F23B65434545AD90EFE5A1_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m6F76B5644E2D6BD882F23B65434545AD90EFE5A1_gshared (Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* __this, Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* Popup_get_contentView_m9F565185F46C1235343F98B56A3D523595F52D07_inline (Popup_tCD2F8EF10FBFD80CADEC755F65984D5D72BA5F4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Popup_get_contentView_m9F565185F46C1235343F98B56A3D523595F52D07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Popup_tCD2F8EF10FBFD80CADEC755F65984D5D72BA5F4A_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Popup_get_contentView_m9F565185F46C1235343F98B56A3D523595F52D07_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53502));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 53503));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53504));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = __this->___U3CcontentViewU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* Popup_get_view_mF578D79EAC76D19497F956C68487ED3827D80338_inline (Popup_tCD2F8EF10FBFD80CADEC755F65984D5D72BA5F4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Popup_get_view_mF578D79EAC76D19497F956C68487ED3827D80338_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Popup_tCD2F8EF10FBFD80CADEC755F65984D5D72BA5F4A_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Popup_get_view_mF578D79EAC76D19497F956C68487ED3827D80338_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53490));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 53491));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53492));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = __this->___U3CviewU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Popup_set_containerView_mC3FBE53D0E7076F933E1E7D4DE76078E7EE5C8E3_inline (Popup_tCD2F8EF10FBFD80CADEC755F65984D5D72BA5F4A* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Popup_set_containerView_mC3FBE53D0E7076F933E1E7D4DE76078E7EE5C8E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Popup_tCD2F8EF10FBFD80CADEC755F65984D5D72BA5F4A_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Popup_set_containerView_mC3FBE53D0E7076F933E1E7D4DE76078E7EE5C8E3_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53496));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 53497));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53498));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = ___0_value;
		__this->___U3CcontainerViewU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcontainerViewU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* Popup_get_containerView_m371F24165040F772818042CF2AFEFC5FCF8719A4_inline (Popup_tCD2F8EF10FBFD80CADEC755F65984D5D72BA5F4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Popup_get_containerView_m371F24165040F772818042CF2AFEFC5FCF8719A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Popup_tCD2F8EF10FBFD80CADEC755F65984D5D72BA5F4A_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Popup_get_containerView_m371F24165040F772818042CF2AFEFC5FCF8719A4_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53493));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 53494));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53495));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = __this->___U3CcontainerViewU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Popup_set_keyboardDismissEnabled_m1615718A8DD3B174392736EBF6ECE258E34786B2_inline (Popup_tCD2F8EF10FBFD80CADEC755F65984D5D72BA5F4A* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Popup_set_keyboardDismissEnabled_m1615718A8DD3B174392736EBF6ECE258E34786B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Popup_tCD2F8EF10FBFD80CADEC755F65984D5D72BA5F4A_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Popup_set_keyboardDismissEnabled_m1615718A8DD3B174392736EBF6ECE258E34786B2_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53487));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_AppUI + 53488));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_AppUI + 53489));
		bool L_0 = ___0_value;
		__this->___U3CkeyboardDismissEnabledU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m6343941059117DF354182855F996EB3D08B4C06C_gshared_inline (Action_2_t1D42C7D8DCD2DEB7C556FB3783F0EDAFF694E5E8* __this, Il2CppFullySharedGenericAny ___0_arg1, Il2CppFullySharedGenericAny ___1_arg2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Func_2_Invoke_m31CAC166FDC80DC5AE52A5AEFFEE2D9B27A1CA3F_gshared_inline (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* __this, Il2CppFullySharedGenericAny ___0_arg, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
