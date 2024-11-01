#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct AssertException_tCA7C43FC9481011C405E3177480D5961583725AF;
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct ConsoleCancelEventHandler_t7E25E018B7944F60BD34AE7F32E119F34DCEA053;
struct ConsoleLogger_t5806253577532253A50D9EF797836676938CEE10;
struct EmbeddedAttribute_t97821AE477F79516DB31E4AE03E97471B4CB5B1D;
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
struct Exception_t;
struct FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
struct ILogDumpable_tF7971A8D248BF21B2B429C1D840994D662C28D8A;
struct ILogSource_tF3DA613BD3B0DEE672B43AABD1B269191AD34120;
struct ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024;
struct ILogger_tE9BF358A14D675B0B165178D24E3FB9400F34DB1;
struct ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42;
struct IsReadOnlyAttribute_tC5E2B1A10F146DBABB9AEED2F62CE4DA2E539F5E;
struct IsUnmanagedAttribute_t59FB1F97B7BB3598F41D696A413E03232349641C;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct PropertyInfo_t;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct StringBuilder_t;
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7;
struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3;
struct TextWriterLogger_tEC0B61D502EEEDF71A51BE83B742B57953622D6D;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AssertException_tCA7C43FC9481011C405E3177480D5961583725AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConsoleLogger_t5806253577532253A50D9EF797836676938CEE10_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILogDumpable_tF7971A8D248BF21B2B429C1D840994D662C28D8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILogger_tE9BF358A14D675B0B165178D24E3FB9400F34DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00A203AD7F07939D322F0ED0CC5261312AF60D2E;
IL2CPP_EXTERN_C String_t* _stringLiteral092B96EE8A7ACE3B47312DE7F1D20E8317F089D0;
IL2CPP_EXTERN_C String_t* _stringLiteral1168E92C164109D6220480DEDA987085B2A21155;
IL2CPP_EXTERN_C String_t* _stringLiteral353B2C4F2AD69325073238DA4239FF3BF4BAA404;
IL2CPP_EXTERN_C String_t* _stringLiteral424AF8E2289ABDE439D9C98ACC8D3CAB7720CACA;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral5D4F9EA2133219037FA4DA5FC58495A8EF9B1970;
IL2CPP_EXTERN_C String_t* _stringLiteral5EA56E0739223C156A40E92809C27BEAEC315026;
IL2CPP_EXTERN_C String_t* _stringLiteral638C5441E8427B2B9D2C941DDBF958579B5FE3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral667AFC1A17B6445860DB73B04F31DE63C8122404;
IL2CPP_EXTERN_C String_t* _stringLiteral7501DA0A9C59EE5BCAC045730636B20424C11BBF;
IL2CPP_EXTERN_C String_t* _stringLiteral78F56529E0F2D4459413FC1874F402EB2A0F4C7B;
IL2CPP_EXTERN_C String_t* _stringLiteral85FFB99C028A10585D5971239ACA9E19D8D8933D;
IL2CPP_EXTERN_C String_t* _stringLiteral880A8971935743ADCB7A9F3BCD81BAA750321A19;
IL2CPP_EXTERN_C String_t* _stringLiteralA3A3173B2F271BCD05B58BDD1255EFBC378C316F;
IL2CPP_EXTERN_C String_t* _stringLiteralA3C041E17A01BB72D1E3733004D3829177B72306;
IL2CPP_EXTERN_C String_t* _stringLiteralAEC84533D667A957C2CE587DA77F054753D245BB;
IL2CPP_EXTERN_C String_t* _stringLiteralB0B267465E6809858C6C0C2664BB62BA5715FCE4;
IL2CPP_EXTERN_C String_t* _stringLiteralB5A6CB578FF33F204EEEE4847E3AC2425DE6783F;
IL2CPP_EXTERN_C String_t* _stringLiteralB5F02B51DE18FB4A0772AA6553D4A124AAADE677;
IL2CPP_EXTERN_C String_t* _stringLiteralB9CEBAA82567368A3DB279022579AC8FB3DB92D8;
IL2CPP_EXTERN_C String_t* _stringLiteralC1FABAFA00346986D73CBEB8DD9BBB2DA5206568;
IL2CPP_EXTERN_C String_t* _stringLiteralC8E9D2307BDE4FFEE2D69909D725AB3CE8153028;
IL2CPP_EXTERN_C String_t* _stringLiteralCA816A20F0CF24FE3583D22D2B8AD3305323C346;
IL2CPP_EXTERN_C String_t* _stringLiteralD7CC4528988100434DC8BA5B4A713FE36DB8ECD9;
IL2CPP_EXTERN_C String_t* _stringLiteralE2CACCA027530802511895F2C4C873F9DC8ED360;
IL2CPP_EXTERN_C String_t* _stringLiteralF32F3E56650C3F80BE23A9D6B31340C467EACE97;
IL2CPP_EXTERN_C String_t* _stringLiteralF49E44C494F559336F4EE9CB1F596FA7869F5B9D;
IL2CPP_EXTERN_C String_t* _stringLiteralFF1E8303D9E2C13EE209783E9D0F5995965603E2;
IL2CPP_EXTERN_C const RuntimeMethod* Assert_AlwaysFail_m3B098A1C40AAC3C7CF0964F9B8F58B9E8F01E26F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Assert_AlwaysFail_m86DB02605C3EA917426A8FD066B04A718F7B2516_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Assert_Always_m02F48B35B4ECA37CC0C89CFCDB6656E960409F2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Assert_Always_m286663A0000C434BF6CE43490BD1B9BF2AF0D041_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Assert_Always_m33D3DA9E628919B4B38B9789A80931C0C589A1BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Assert_Check_m808094CE26271238A2C37411624A8B83BD2551F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Assert_Check_m911E026C27B73741BA5481D5EA63CB89649BC5F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Assert_Check_m995D6B96BCCC7F55928DAA2C2E54EA9BF9707D12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Assert_Check_mC32649F86CDD7A225D4E9AC9B093769E6FB3F594_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Assert_Check_mF25C18F92B92CDBB1638FA3E8433E9CC3AB6B6A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Assert_Fail_m3AC72DE6C9620DD6E032D70CA6270EC097D65671_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Assert_Fail_m3FF26D46F2BAE2E52C54D41BA1DF3EAEB1CE464E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Assert_Fail_m57143F5584A6B703C6ADDEE2C74B7A0A98853040_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FusionEditorLog__cctor_mEBEE989A4F3CE5850ED17CB70D58F30E1909C3EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextWriterLogger__ctor_m30174F54AD8645CF5E35BC03C0EFFCADDF2DF75A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Type_GetType_m50BCE4A0EB39D97381431E6CC2576C50DCE69C67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Lock_t32A78416DABEA294270289BDD467DFA016411297_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_tFA4B8DD8D59CD3C8F0365C7233538CD567E93BBF 
{
};
struct Assert_t0933039451CA30AAD4836AB4EEE49E6A8F0D2CD1  : public RuntimeObject
{
};
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};
struct Console_t5EDF9498D011BD48287171978EDBBA6964829C3E  : public RuntimeObject
{
};
struct Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F  : public RuntimeObject
{
};
struct FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87  : public RuntimeObject
{
};
struct Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99  : public RuntimeObject
{
};
struct LogUtils_t3C8741E179D59B39485E23009EE24AF7C852E39D  : public RuntimeObject
{
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	RuntimeObject* ____identity;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct StringBuilder_t  : public RuntimeObject
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars;
	StringBuilder_t* ___m_ChunkPrevious;
	int32_t ___m_ChunkLength;
	int32_t ___m_ChunkOffset;
	int32_t ___m_MaxCapacity;
};
struct TextWriterLogger_tEC0B61D502EEEDF71A51BE83B742B57953622D6D  : public RuntimeObject
{
	StringBuilder_t* ____builder;
	TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ____writer;
	bool ____disposeWriter;
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
struct Lock_t32A78416DABEA294270289BDD467DFA016411297  : public RuntimeObject
{
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
struct ConsoleLogger_t5806253577532253A50D9EF797836676938CEE10  : public TextWriterLogger_tEC0B61D502EEEDF71A51BE83B742B57953622D6D
{
};
struct EmbeddedAttribute_t97821AE477F79516DB31E4AE03E97471B4CB5B1D  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
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
struct IsReadOnlyAttribute_tC5E2B1A10F146DBABB9AEED2F62CE4DA2E539F5E  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};
struct IsUnmanagedAttribute_t59FB1F97B7BB3598F41D696A413E03232349641C  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};
struct LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074 
{
	String_t* ___Prefix;
	RuntimeObject* ___Source;
};
struct LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074_marshaled_pinvoke
{
	char* ___Prefix;
	Il2CppIUnknown* ___Source;
};
struct LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074_marshaled_com
{
	Il2CppChar* ___Prefix;
	Il2CppIUnknown* ___Source;
};
struct PropertyInfo_t  : public MemberInfo_t
{
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___CoreNewLine;
	String_t* ___CoreNewLineStr;
	RuntimeObject* ____internalFormatProvider;
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
struct DumpDefferedClass_tDA78A888584277A38739EF1E7518684767C3CD1B 
{
	RuntimeObject* ___Obj;
};
struct DumpDefferedClass_tDA78A888584277A38739EF1E7518684767C3CD1B_marshaled_pinvoke
{
	RuntimeObject* ___Obj;
};
struct DumpDefferedClass_tDA78A888584277A38739EF1E7518684767C3CD1B_marshaled_com
{
	RuntimeObject* ___Obj;
};
struct BindingFlags_t5DC2835E4AE9C1862B3AD172EF35B6A5F4F1812C 
{
	int32_t ___value__;
};
struct ConsoleColor_tF1C4F0AD2193FB7B4B0903ACA588E0EA0DBABD2F 
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
struct LogType_t31783F322251CAAFA31B0181DF05C4483723B80B 
{
	uint8_t ___value__;
};
struct LogType_t9CC0F1B620DFBF3A01E8C2D2316A850D745EF331 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct AssertException_tCA7C43FC9481011C405E3177480D5961583725AF  : public Exception_t
{
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_StaticFields
{
	TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___stdout;
	TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___stderr;
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___stdin;
	bool ___IsRunningOnAndroid;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___inputEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___outputEncoding;
	ConsoleCancelEventHandler_t7E25E018B7944F60BD34AE7F32E119F34DCEA053* ___cancel_event;
};
struct Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticFields
{
	RuntimeObject* ___s_DefaultLogger;
	RuntimeObject* ___s_Logger;
};
struct FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_StaticFields
{
	String_t* ___s_color;
};
struct Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields
{
	RuntimeObject* ____logger;
	uint8_t ___LogLevel;
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
struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3_StaticFields
{
	TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___Null;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___s_coreNewLine;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
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
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};



IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F (Exception_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssertException__ctor_mF10C8F69C9A270A1FE866FC2AB688112A41BC0BA (AssertException_tCA7C43FC9481011C405E3177480D5961583725AF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssertException__ctor_m75F06F0A6921CBC67C17F8EEE8937F70C292B6F7 (AssertException_tCA7C43FC9481011C405E3177480D5961583725AF* __this, String_t* ___0_msg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* Console_get_Out_m73E553D219D64916F2AA7CDC41568968CB055F1E_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextWriterLogger__ctor_m30174F54AD8645CF5E35BC03C0EFFCADDF2DF75A (TextWriterLogger_tEC0B61D502EEEDF71A51BE83B742B57953622D6D* __this, TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___0_writer, bool ___1_disposeWriter, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Console_set_ForegroundColor_m4332BA76D4ECCFF08C9C71F05C4D47EA83EC176F (int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextWriterLogger_Log_mA8D7A5EA485D173EC8F26D483F16A1F12DF6132D (TextWriterLogger_tEC0B61D502EEEDF71A51BE83B742B57953622D6D* __this, uint8_t ___0_logType, RuntimeObject* ___1_message, LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074* ___2_logContext, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextWriterLogger_LogException_mF9959EC6545E0FBBE1323520562D904FAC8F130A (TextWriterLogger_tEC0B61D502EEEDF71A51BE83B742B57953622D6D* __this, Exception_t* ___0_ex, LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074* ___1_logContext, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_c, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionEditorLog_SetPrefixColor_m6A98EF2BACDB65C1E255FE46D4C6D2BC5C22F29E (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_c, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___0_r, uint8_t ___1_g, uint8_t ___2_b, uint8_t ___3_a, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfo_t* Type_GetProperty_m6E63875E6098E89250149F4E76FAD40844708391 (Type_t* __this, String_t* ___0_name, int32_t ___1_bindingAttr, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyInfo_op_Equality_m3BFC2276AECF2A16B66F171D65516817B4578B4F (PropertyInfo_t* ___0_left, PropertyInfo_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyInfo_GetValue_m89576462107E2A4DF5B7775216AEC29D74FF6088 (PropertyInfo_t* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Debug_get_unityLogger_m4FDE4D41C187123244FE13124DA636BB50C9C1E1_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleLogger__ctor_mD6570AD4DA239CA3CFA0C6C1BCB3DEDF9E80BC26 (ConsoleLogger_t5806253577532253A50D9EF797836676938CEE10* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Init_m58AD459A0E55A15B06D8A7CD91D2B02B7C081967 (RuntimeObject* ___0_logger, uint8_t ___1_LogLevel, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogContext__ctor_mAD9FADE06711B00C3048C6215B0E88C5AFCD9E27 (LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074* __this, String_t* ___0_prefix, RuntimeObject* ___1_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_InfoInternal_mF1943A24B9BE704BBD95948F51266F67DBE568AF (RuntimeObject* ___0_msg, String_t* ___1_stream, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_WarnInternal_mB6CDB22C09F62936E531E19CDE3ED5F3F7EB05A5 (RuntimeObject* ___0_msg, String_t* ___1_stream, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_ErrorInternal_mA69CCBB3B43000476141642844033FAB5E5CCDD5 (RuntimeObject* ___0_msg, String_t* ___1_stream, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_InfoInternalValue_m978412FAAE1CE3D61FFBA0261F28B4D482B2E98B (RuntimeObject* ___0_source, RuntimeObject* ___1_msg, String_t* ___2_stream, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_WarnInternalValue_m9A39523DA34ADFC990ECD5E90D1B500CBDC8F5A2 (RuntimeObject* ___0_source, RuntimeObject* ___1_msg, String_t* ___2_stream, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_ErrorInternalValue_mEDB2CA84DE5A1C1225F63F2989C7B3EBE477B477 (RuntimeObject* ___0_source, RuntimeObject* ___1_msg, String_t* ___2_stream, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_ExceptionInternal_m965D6D8166AA30F0837C99305AD5E01D7F40751A (Exception_t* ___0_exn, String_t* ___1_stream, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DumpDefferedClass__ctor_m964526ADC6CB773148C2F5C5B6D6D05D7F779E08_inline (DumpDefferedClass_tDA78A888584277A38739EF1E7518684767C3CD1B* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DumpDefferedClass_ToString_m63E428B6AAD02097A6097E104BB9D20171B975B2 (DumpDefferedClass_tDA78A888584277A38739EF1E7518684767C3CD1B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextWriter_Dispose_m5B2CA4D250335AB11031AFC7F202AA5B7A70C4D7 (TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6 (StringBuilder_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63 (StringBuilder_t* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_m62D8C96456D26296425095A0EB82B397F682A5D3 (EmbeddedAttribute_t97821AE477F79516DB31E4AE03E97471B4CB5B1D* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsReadOnlyAttribute__ctor_m5305F630EF8BD5A061CD184DD5DDD1F1E2B15231 (IsReadOnlyAttribute_tC5E2B1A10F146DBABB9AEED2F62CE4DA2E539F5E* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsUnmanagedAttribute__ctor_m99005C1BD305D39F2CF6D25FDCCEEF7241863686 (IsUnmanagedAttribute_t59FB1F97B7BB3598F41D696A413E03232349641C* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssertException__ctor_mF10C8F69C9A270A1FE866FC2AB688112A41BC0BA (AssertException_tCA7C43FC9481011C405E3177480D5961583725AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssertException__ctor_m75F06F0A6921CBC67C17F8EEE8937F70C292B6F7 (AssertException_tCA7C43FC9481011C405E3177480D5961583725AF* __this, String_t* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_msg;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
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
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Assert_Fail_m3FF26D46F2BAE2E52C54D41BA1DF3EAEB1CE464E (const RuntimeMethod* method) 
{
	{
		AssertException_tCA7C43FC9481011C405E3177480D5961583725AF* L_0 = (AssertException_tCA7C43FC9481011C405E3177480D5961583725AF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AssertException_tCA7C43FC9481011C405E3177480D5961583725AF_il2cpp_TypeInfo_var)));
		AssertException__ctor_mF10C8F69C9A270A1FE866FC2AB688112A41BC0BA(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Assert_Fail_m3FF26D46F2BAE2E52C54D41BA1DF3EAEB1CE464E_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Assert_Fail_m57143F5584A6B703C6ADDEE2C74B7A0A98853040 (String_t* ___0_error, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_error;
		AssertException_tCA7C43FC9481011C405E3177480D5961583725AF* L_1 = (AssertException_tCA7C43FC9481011C405E3177480D5961583725AF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AssertException_tCA7C43FC9481011C405E3177480D5961583725AF_il2cpp_TypeInfo_var)));
		AssertException__ctor_m75F06F0A6921CBC67C17F8EEE8937F70C292B6F7(L_1, L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Assert_Fail_m57143F5584A6B703C6ADDEE2C74B7A0A98853040_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Assert_Fail_m3AC72DE6C9620DD6E032D70CA6270EC097D65671 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		String_t* L_2;
		L_2 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_0, L_1, NULL);
		AssertException_tCA7C43FC9481011C405E3177480D5961583725AF* L_3 = (AssertException_tCA7C43FC9481011C405E3177480D5961583725AF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AssertException_tCA7C43FC9481011C405E3177480D5961583725AF_il2cpp_TypeInfo_var)));
		AssertException__ctor_m75F06F0A6921CBC67C17F8EEE8937F70C292B6F7(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Assert_Fail_m3AC72DE6C9620DD6E032D70CA6270EC097D65671_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Assert_Check_m911E026C27B73741BA5481D5EA63CB89649BC5F4 (RuntimeObject* ___0_condition, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_condition;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		AssertException_tCA7C43FC9481011C405E3177480D5961583725AF* L_1 = (AssertException_tCA7C43FC9481011C405E3177480D5961583725AF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AssertException_tCA7C43FC9481011C405E3177480D5961583725AF_il2cpp_TypeInfo_var)));
		AssertException__ctor_mF10C8F69C9A270A1FE866FC2AB688112A41BC0BA(L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Assert_Check_m911E026C27B73741BA5481D5EA63CB89649BC5F4_RuntimeMethod_var)));
	}

IL_0009:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Assert_Check_mC32649F86CDD7A225D4E9AC9B093769E6FB3F594 (void* ___0_condition, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_condition;
		if ((!(((uintptr_t)L_0) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_000b;
		}
	}
	{
		AssertException_tCA7C43FC9481011C405E3177480D5961583725AF* L_1 = (AssertException_tCA7C43FC9481011C405E3177480D5961583725AF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AssertException_tCA7C43FC9481011C405E3177480D5961583725AF_il2cpp_TypeInfo_var)));
		AssertException__ctor_mF10C8F69C9A270A1FE866FC2AB688112A41BC0BA(L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Assert_Check_mC32649F86CDD7A225D4E9AC9B093769E6FB3F594_RuntimeMethod_var)));
	}

IL_000b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Assert_Check_mF25C18F92B92CDBB1638FA3E8433E9CC3AB6B6A8 (bool ___0_condition, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_condition;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		AssertException_tCA7C43FC9481011C405E3177480D5961583725AF* L_1 = (AssertException_tCA7C43FC9481011C405E3177480D5961583725AF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AssertException_tCA7C43FC9481011C405E3177480D5961583725AF_il2cpp_TypeInfo_var)));
		AssertException__ctor_mF10C8F69C9A270A1FE866FC2AB688112A41BC0BA(L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Assert_Check_mF25C18F92B92CDBB1638FA3E8433E9CC3AB6B6A8_RuntimeMethod_var)));
	}

IL_0009:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Assert_Check_m995D6B96BCCC7F55928DAA2C2E54EA9BF9707D12 (bool ___0_condition, String_t* ___1_error, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_condition;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		String_t* L_1 = ___1_error;
		AssertException_tCA7C43FC9481011C405E3177480D5961583725AF* L_2 = (AssertException_tCA7C43FC9481011C405E3177480D5961583725AF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AssertException_tCA7C43FC9481011C405E3177480D5961583725AF_il2cpp_TypeInfo_var)));
		AssertException__ctor_m75F06F0A6921CBC67C17F8EEE8937F70C292B6F7(L_2, L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Assert_Check_m995D6B96BCCC7F55928DAA2C2E54EA9BF9707D12_RuntimeMethod_var)));
	}

IL_000a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Assert_Check_m808094CE26271238A2C37411624A8B83BD2551F0 (bool ___0_condition, String_t* ___1_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_condition;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		String_t* L_1 = ___1_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		String_t* L_3;
		L_3 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_1, L_2, NULL);
		AssertException_tCA7C43FC9481011C405E3177480D5961583725AF* L_4 = (AssertException_tCA7C43FC9481011C405E3177480D5961583725AF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AssertException_tCA7C43FC9481011C405E3177480D5961583725AF_il2cpp_TypeInfo_var)));
		AssertException__ctor_m75F06F0A6921CBC67C17F8EEE8937F70C292B6F7(L_4, L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Assert_Check_m808094CE26271238A2C37411624A8B83BD2551F0_RuntimeMethod_var)));
	}

IL_0010:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Assert_AlwaysFail_m3B098A1C40AAC3C7CF0964F9B8F58B9E8F01E26F (String_t* ___0_error, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_error;
		AssertException_tCA7C43FC9481011C405E3177480D5961583725AF* L_1 = (AssertException_tCA7C43FC9481011C405E3177480D5961583725AF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AssertException_tCA7C43FC9481011C405E3177480D5961583725AF_il2cpp_TypeInfo_var)));
		AssertException__ctor_m75F06F0A6921CBC67C17F8EEE8937F70C292B6F7(L_1, L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Assert_AlwaysFail_m3B098A1C40AAC3C7CF0964F9B8F58B9E8F01E26F_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Assert_AlwaysFail_m86DB02605C3EA917426A8FD066B04A718F7B2516 (RuntimeObject* ___0_error, const RuntimeMethod* method) 
{
	String_t* G_B3_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_error;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_error;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_1);
		G_B3_0 = L_2;
	}

IL_000c:
	{
		AssertException_tCA7C43FC9481011C405E3177480D5961583725AF* L_3 = (AssertException_tCA7C43FC9481011C405E3177480D5961583725AF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AssertException_tCA7C43FC9481011C405E3177480D5961583725AF_il2cpp_TypeInfo_var)));
		AssertException__ctor_m75F06F0A6921CBC67C17F8EEE8937F70C292B6F7(L_3, G_B3_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Assert_AlwaysFail_m86DB02605C3EA917426A8FD066B04A718F7B2516_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Assert_Always_m02F48B35B4ECA37CC0C89CFCDB6656E960409F2B (bool ___0_condition, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_condition;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		AssertException_tCA7C43FC9481011C405E3177480D5961583725AF* L_1 = (AssertException_tCA7C43FC9481011C405E3177480D5961583725AF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AssertException_tCA7C43FC9481011C405E3177480D5961583725AF_il2cpp_TypeInfo_var)));
		AssertException__ctor_mF10C8F69C9A270A1FE866FC2AB688112A41BC0BA(L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Assert_Always_m02F48B35B4ECA37CC0C89CFCDB6656E960409F2B_RuntimeMethod_var)));
	}

IL_0009:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Assert_Always_m33D3DA9E628919B4B38B9789A80931C0C589A1BA (bool ___0_condition, String_t* ___1_error, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_condition;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		String_t* L_1 = ___1_error;
		AssertException_tCA7C43FC9481011C405E3177480D5961583725AF* L_2 = (AssertException_tCA7C43FC9481011C405E3177480D5961583725AF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AssertException_tCA7C43FC9481011C405E3177480D5961583725AF_il2cpp_TypeInfo_var)));
		AssertException__ctor_m75F06F0A6921CBC67C17F8EEE8937F70C292B6F7(L_2, L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Assert_Always_m33D3DA9E628919B4B38B9789A80931C0C589A1BA_RuntimeMethod_var)));
	}

IL_000a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Assert_Always_m286663A0000C434BF6CE43490BD1B9BF2AF0D041 (bool ___0_condition, String_t* ___1_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_condition;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		String_t* L_1 = ___1_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		String_t* L_3;
		L_3 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_1, L_2, NULL);
		AssertException_tCA7C43FC9481011C405E3177480D5961583725AF* L_4 = (AssertException_tCA7C43FC9481011C405E3177480D5961583725AF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AssertException_tCA7C43FC9481011C405E3177480D5961583725AF_il2cpp_TypeInfo_var)));
		AssertException__ctor_m75F06F0A6921CBC67C17F8EEE8937F70C292B6F7(L_4, L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Assert_Always_m286663A0000C434BF6CE43490BD1B9BF2AF0D041_RuntimeMethod_var)));
	}

IL_0010:
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleLogger__ctor_mD6570AD4DA239CA3CFA0C6C1BCB3DEDF9E80BC26 (ConsoleLogger_t5806253577532253A50D9EF797836676938CEE10* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_0;
		L_0 = Console_get_Out_m73E553D219D64916F2AA7CDC41568968CB055F1E_inline(NULL);
		TextWriterLogger__ctor_m30174F54AD8645CF5E35BC03C0EFFCADDF2DF75A(__this, L_0, (bool)0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleLogger_Log_mD5BA6E5F7E46295DC900C62354DA1278806CB9C2 (ConsoleLogger_t5806253577532253A50D9EF797836676938CEE10* __this, uint8_t ___0_logType, RuntimeObject* ___1_message, LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074* ___2_logContext, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint8_t L_0 = ___0_logType;
		switch (L_0)
		{
			case 0:
			{
				goto IL_002d;
			}
			case 1:
			{
				goto IL_0024;
			}
			case 2:
			{
				goto IL_001c;
			}
			case 3:
			{
				goto IL_001c;
			}
			case 4:
			{
				goto IL_001c;
			}
		}
	}
	{
		goto IL_0034;
	}

IL_001c:
	{
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		Console_set_ForegroundColor_m4332BA76D4ECCFF08C9C71F05C4D47EA83EC176F(7, NULL);
		goto IL_0034;
	}

IL_0024:
	{
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		Console_set_ForegroundColor_m4332BA76D4ECCFF08C9C71F05C4D47EA83EC176F(((int32_t)14), NULL);
		goto IL_0034;
	}

IL_002d:
	{
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		Console_set_ForegroundColor_m4332BA76D4ECCFF08C9C71F05C4D47EA83EC176F(((int32_t)12), NULL);
	}

IL_0034:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0040:
			{
				il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
				Console_set_ForegroundColor_m4332BA76D4ECCFF08C9C71F05C4D47EA83EC176F(7, NULL);
				return;
			}
		});
		try
		{
			uint8_t L_1 = ___0_logType;
			RuntimeObject* L_2 = ___1_message;
			LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074* L_3 = ___2_logContext;
			TextWriterLogger_Log_mA8D7A5EA485D173EC8F26D483F16A1F12DF6132D(__this, L_1, L_2, L_3, NULL);
			goto IL_0047;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0047:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleLogger_LogException_m284C9DBDCFEEE33406F24B8FCAB0525E83014533 (ConsoleLogger_t5806253577532253A50D9EF797836676938CEE10* __this, Exception_t* ___0_ex, LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074* ___1_logContext, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		Console_set_ForegroundColor_m4332BA76D4ECCFF08C9C71F05C4D47EA83EC176F(((int32_t)12), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0011:
			{
				il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
				Console_set_ForegroundColor_m4332BA76D4ECCFF08C9C71F05C4D47EA83EC176F(7, NULL);
				return;
			}
		});
		try
		{
			Exception_t* L_0 = ___0_ex;
			LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074* L_1 = ___1_logContext;
			TextWriterLogger_LogException_mF9959EC6545E0FBBE1323520562D904FAC8F130A(__this, L_0, L_1, NULL);
			goto IL_0018;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0018:
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionEditorLog_SetPrefixColor_mFC5776A8B3D171F144D4F6CFBB4C1E32F7BA67C5 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_color;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_1;
		L_1 = Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var);
		FusionEditorLog_SetPrefixColor_m6A98EF2BACDB65C1E255FE46D4C6D2BC5C22F29E(L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionEditorLog_SetPrefixColor_m6A98EF2BACDB65C1E255FE46D4C6D2BC5C22F29E (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_c, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2CACCA027530802511895F2C4C873F9DC8ED360);
		s_Il2CppMethodInitialized = true;
	}
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = ___0_c;
		uint8_t L_1 = L_0.___r;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_2 = ___0_c;
		uint8_t L_3 = L_2.___g;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_4 = ___0_c;
		uint8_t L_5 = L_4.___b;
		int32_t L_6 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_1<<((int32_t)16)))|((int32_t)((int32_t)L_3<<8))))|(int32_t)L_5));
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralE2CACCA027530802511895F2C4C873F9DC8ED360, L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var);
		((FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_StaticFields*)il2cpp_codegen_static_fields_for(FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var))->___s_color = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_StaticFields*)il2cpp_codegen_static_fields_for(FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var))->___s_color), (void*)L_8);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionEditorLog__cctor_mEBEE989A4F3CE5850ED17CB70D58F30E1909C3EA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionEditorLog__cctor_mEBEE989A4F3CE5850ED17CB70D58F30E1909C3EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_GetType_m50BCE4A0EB39D97381431E6CC2576C50DCE69C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00A203AD7F07939D322F0ED0CC5261312AF60D2E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1FABAFA00346986D73CBEB8DD9BBB2DA5206568);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	PropertyInfo_t* G_B3_0 = NULL;
	PropertyInfo_t* G_B2_0 = NULL;
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_0), (uint8_t)((int32_t)115), (uint8_t)((int32_t)172), (uint8_t)((int32_t)229), (uint8_t)((int32_t)255), NULL);
		FusionEditorLog_SetPrefixColor_m6A98EF2BACDB65C1E255FE46D4C6D2BC5C22F29E(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		if (!L_1)
		{
			goto IL_007c;
		}
	}
	{
		V_0 = _stringLiteralC1FABAFA00346986D73CBEB8DD9BBB2DA5206568;
		String_t* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = il2cpp_codegen_get_type(L_2, (bool)1, Type_GetType_m50BCE4A0EB39D97381431E6CC2576C50DCE69C67_RuntimeMethod_var, FusionEditorLog__cctor_mEBEE989A4F3CE5850ED17CB70D58F30E1909C3EA_RuntimeMethod_var);
		NullCheck(L_3);
		PropertyInfo_t* L_4;
		L_4 = Type_GetProperty_m6E63875E6098E89250149F4E76FAD40844708391(L_3, _stringLiteral00A203AD7F07939D322F0ED0CC5261312AF60D2E, ((int32_t)24), NULL);
		PropertyInfo_t* L_5 = L_4;
		bool L_6;
		L_6 = PropertyInfo_op_Equality_m3BFC2276AECF2A16B66F171D65516817B4578B4F(L_5, (PropertyInfo_t*)NULL, NULL);
		if (!L_6)
		{
			G_B3_0 = L_5;
			goto IL_005a;
		}
		G_B2_0 = L_5;
	}
	{
		String_t* L_7 = V_0;
		String_t* L_8;
		L_8 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA3A3173B2F271BCD05B58BDD1255EFBC378C316F)), L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_9 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FusionEditorLog__cctor_mEBEE989A4F3CE5850ED17CB70D58F30E1909C3EA_RuntimeMethod_var)));
	}

IL_005a:
	{
		NullCheck(G_B3_0);
		RuntimeObject* L_10;
		L_10 = PropertyInfo_GetValue_m89576462107E2A4DF5B7775216AEC29D74FF6088(G_B3_0, NULL, NULL);
		if (((*(bool*)((bool*)(bool*)UnBox(L_10, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)))))
		{
			goto IL_007c;
		}
	}
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_11;
		memset((&L_11), 0, sizeof(L_11));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_11), (uint8_t)((int32_t)18), (uint8_t)((int32_t)75), (uint8_t)((int32_t)60), (uint8_t)((int32_t)255), NULL);
		FusionEditorLog_SetPrefixColor_m6A98EF2BACDB65C1E255FE46D4C6D2BC5C22F29E(L_11, NULL);
	}

IL_007c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionEditorLog_Assert_m26A76A0CA60D582E0E31A54C8FD238AEDE83031F (bool ___0_condition, String_t* ___1_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral880A8971935743ADCB7A9F3BCD81BAA750321A19);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF32F3E56650C3F80BE23A9D6B31340C467EACE97);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___0_condition;
		if (!L_0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = Debug_get_unityLogger_m4FDE4D41C187123244FE13124DA636BB50C9C1E1_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var);
		String_t* L_2 = ((FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_StaticFields*)il2cpp_codegen_static_fields_for(FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var))->___s_color;
		String_t* L_3 = ___1_message;
		String_t* L_4;
		L_4 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralF32F3E56650C3F80BE23A9D6B31340C467EACE97, L_2, _stringLiteral880A8971935743ADCB7A9F3BCD81BAA750321A19, L_3, NULL);
		NullCheck(L_1);
		InterfaceActionInvoker2< int32_t, RuntimeObject* >::Invoke(2, ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var, L_1, 1, L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionEditorLog_Assert_mBD113A6943F7A902A5E6D152BD14797EDC799D02 (bool ___0_condition, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral667AFC1A17B6445860DB73B04F31DE63C8122404);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF32F3E56650C3F80BE23A9D6B31340C467EACE97);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___0_condition;
		if (!L_0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = Debug_get_unityLogger_m4FDE4D41C187123244FE13124DA636BB50C9C1E1_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var);
		String_t* L_2 = ((FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_StaticFields*)il2cpp_codegen_static_fields_for(FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var))->___s_color;
		String_t* L_3;
		L_3 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralF32F3E56650C3F80BE23A9D6B31340C467EACE97, L_2, _stringLiteral667AFC1A17B6445860DB73B04F31DE63C8122404, NULL);
		NullCheck(L_1);
		InterfaceActionInvoker2< int32_t, RuntimeObject* >::Invoke(2, ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var, L_1, 1, L_3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionEditorLog_TraceImport_m002BBAC4AC93BEF3E899007D609B250528754477 (String_t* ___0_assetPath, String_t* ___1_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral092B96EE8A7ACE3B47312DE7F1D20E8317F089D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF32F3E56650C3F80BE23A9D6B31340C467EACE97);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralF32F3E56650C3F80BE23A9D6B31340C467EACE97);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		il2cpp_codegen_runtime_class_init_inline(FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var);
		String_t* L_3 = ((FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_StaticFields*)il2cpp_codegen_static_fields_for(FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var))->___s_color;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_2;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral092B96EE8A7ACE3B47312DE7F1D20E8317F089D0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		String_t* L_6 = ___0_assetPath;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_5;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		String_t* L_9 = ___1_msg;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_9);
		String_t* L_10;
		L_10 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_10, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionEditorLog_WarnImport_m39CB029EE41EA9491CE5AE64C73A3E6D50134CDE (String_t* ___0_assetPath, String_t* ___1_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral092B96EE8A7ACE3B47312DE7F1D20E8317F089D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF32F3E56650C3F80BE23A9D6B31340C467EACE97);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralF32F3E56650C3F80BE23A9D6B31340C467EACE97);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		il2cpp_codegen_runtime_class_init_inline(FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var);
		String_t* L_3 = ((FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_StaticFields*)il2cpp_codegen_static_fields_for(FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var))->___s_color;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_2;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral092B96EE8A7ACE3B47312DE7F1D20E8317F089D0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		String_t* L_6 = ___0_assetPath;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_5;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		String_t* L_9 = ___1_msg;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_9);
		String_t* L_10;
		L_10 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_10, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionEditorLog_LogImport_mC22B52005DFD7A6483E34B50DA9EAE1E2EC67AD8 (String_t* ___0_assetPath, String_t* ___1_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral092B96EE8A7ACE3B47312DE7F1D20E8317F089D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF32F3E56650C3F80BE23A9D6B31340C467EACE97);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralF32F3E56650C3F80BE23A9D6B31340C467EACE97);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		il2cpp_codegen_runtime_class_init_inline(FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var);
		String_t* L_3 = ((FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_StaticFields*)il2cpp_codegen_static_fields_for(FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var))->___s_color;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_2;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral092B96EE8A7ACE3B47312DE7F1D20E8317F089D0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		String_t* L_6 = ___0_assetPath;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_5;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		String_t* L_9 = ___1_msg;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_9);
		String_t* L_10;
		L_10 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_10, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionEditorLog_ErrorImport_m6FDAB7A49C5F1D61349E6AFE295A3AFA26127CF3 (String_t* ___0_assetPath, String_t* ___1_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral092B96EE8A7ACE3B47312DE7F1D20E8317F089D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF32F3E56650C3F80BE23A9D6B31340C467EACE97);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralF32F3E56650C3F80BE23A9D6B31340C467EACE97);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		il2cpp_codegen_runtime_class_init_inline(FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var);
		String_t* L_3 = ((FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_StaticFields*)il2cpp_codegen_static_fields_for(FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var))->___s_color;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_2;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral092B96EE8A7ACE3B47312DE7F1D20E8317F089D0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		String_t* L_6 = ___0_assetPath;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_5;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		String_t* L_9 = ___1_msg;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_9);
		String_t* L_10;
		L_10 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_10, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionEditorLog_Trace_m410AAFDBA4AF6D2836F9FE977BD6B612A4BB49A3 (String_t* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5F02B51DE18FB4A0772AA6553D4A124AAADE677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF32F3E56650C3F80BE23A9D6B31340C467EACE97);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var);
		String_t* L_0 = ((FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_StaticFields*)il2cpp_codegen_static_fields_for(FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var))->___s_color;
		String_t* L_1 = ___0_msg;
		String_t* L_2;
		L_2 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralF32F3E56650C3F80BE23A9D6B31340C467EACE97, L_0, _stringLiteralB5F02B51DE18FB4A0772AA6553D4A124AAADE677, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionEditorLog_Warn_mA20922283B52CEFA921228093631176D42517556 (String_t* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5F02B51DE18FB4A0772AA6553D4A124AAADE677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF32F3E56650C3F80BE23A9D6B31340C467EACE97);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var);
		String_t* L_0 = ((FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_StaticFields*)il2cpp_codegen_static_fields_for(FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var))->___s_color;
		String_t* L_1 = ___0_msg;
		String_t* L_2;
		L_2 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralF32F3E56650C3F80BE23A9D6B31340C467EACE97, L_0, _stringLiteralB5F02B51DE18FB4A0772AA6553D4A124AAADE677, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionEditorLog_Log_mB86D09E0C58EE17B8AFC86E99D1264A7C28AA697 (String_t* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5F02B51DE18FB4A0772AA6553D4A124AAADE677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF32F3E56650C3F80BE23A9D6B31340C467EACE97);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var);
		String_t* L_0 = ((FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_StaticFields*)il2cpp_codegen_static_fields_for(FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var))->___s_color;
		String_t* L_1 = ___0_msg;
		String_t* L_2;
		L_2 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralF32F3E56650C3F80BE23A9D6B31340C467EACE97, L_0, _stringLiteralB5F02B51DE18FB4A0772AA6553D4A124AAADE677, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionEditorLog_Error_mF722552ADDAD6C4F30B66813D865D447062BC014 (String_t* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5F02B51DE18FB4A0772AA6553D4A124AAADE677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF32F3E56650C3F80BE23A9D6B31340C467EACE97);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var);
		String_t* L_0 = ((FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_StaticFields*)il2cpp_codegen_static_fields_for(FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var))->___s_color;
		String_t* L_1 = ___0_msg;
		String_t* L_2;
		L_2 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralF32F3E56650C3F80BE23A9D6B31340C467EACE97, L_0, _stringLiteralB5F02B51DE18FB4A0772AA6553D4A124AAADE677, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionEditorLog_TraceConfig_m53354404EF9BE527F9E4A08C2D59304F792F05B9 (String_t* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3C041E17A01BB72D1E3733004D3829177B72306);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF32F3E56650C3F80BE23A9D6B31340C467EACE97);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var);
		String_t* L_0 = ((FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_StaticFields*)il2cpp_codegen_static_fields_for(FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var))->___s_color;
		String_t* L_1 = ___0_msg;
		String_t* L_2;
		L_2 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralF32F3E56650C3F80BE23A9D6B31340C467EACE97, L_0, _stringLiteralA3C041E17A01BB72D1E3733004D3829177B72306, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionEditorLog_WarnConfig_mE6282113294A6B1C87C43607D3BC9C7FF8CBE70D (String_t* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3C041E17A01BB72D1E3733004D3829177B72306);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF32F3E56650C3F80BE23A9D6B31340C467EACE97);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var);
		String_t* L_0 = ((FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_StaticFields*)il2cpp_codegen_static_fields_for(FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var))->___s_color;
		String_t* L_1 = ___0_msg;
		String_t* L_2;
		L_2 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralF32F3E56650C3F80BE23A9D6B31340C467EACE97, L_0, _stringLiteralA3C041E17A01BB72D1E3733004D3829177B72306, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionEditorLog_LogConfig_m20B13C6B9FF89FA73BDB64198AC6A062D2DD4013 (String_t* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3C041E17A01BB72D1E3733004D3829177B72306);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF32F3E56650C3F80BE23A9D6B31340C467EACE97);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var);
		String_t* L_0 = ((FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_StaticFields*)il2cpp_codegen_static_fields_for(FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var))->___s_color;
		String_t* L_1 = ___0_msg;
		String_t* L_2;
		L_2 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralF32F3E56650C3F80BE23A9D6B31340C467EACE97, L_0, _stringLiteralA3C041E17A01BB72D1E3733004D3829177B72306, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionEditorLog_ErrorConfig_m08113948E89196E3AE126A76EDFE67598DE70FCF (String_t* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3C041E17A01BB72D1E3733004D3829177B72306);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF32F3E56650C3F80BE23A9D6B31340C467EACE97);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var);
		String_t* L_0 = ((FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_StaticFields*)il2cpp_codegen_static_fields_for(FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var))->___s_color;
		String_t* L_1 = ___0_msg;
		String_t* L_2;
		L_2 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralF32F3E56650C3F80BE23A9D6B31340C467EACE97, L_0, _stringLiteralA3C041E17A01BB72D1E3733004D3829177B72306, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionEditorLog_TraceInstaller_m2F0F9BCD59C0029330AA6EC706E161F72A3BB0E8 (String_t* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF32F3E56650C3F80BE23A9D6B31340C467EACE97);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF49E44C494F559336F4EE9CB1F596FA7869F5B9D);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var);
		String_t* L_0 = ((FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_StaticFields*)il2cpp_codegen_static_fields_for(FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var))->___s_color;
		String_t* L_1 = ___0_msg;
		String_t* L_2;
		L_2 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralF32F3E56650C3F80BE23A9D6B31340C467EACE97, L_0, _stringLiteralF49E44C494F559336F4EE9CB1F596FA7869F5B9D, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionEditorLog_WarnInstaller_mB8DB50408113E0623B44AFF9AB91EBB863E1E84C (String_t* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF32F3E56650C3F80BE23A9D6B31340C467EACE97);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF49E44C494F559336F4EE9CB1F596FA7869F5B9D);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var);
		String_t* L_0 = ((FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_StaticFields*)il2cpp_codegen_static_fields_for(FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var))->___s_color;
		String_t* L_1 = ___0_msg;
		String_t* L_2;
		L_2 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralF32F3E56650C3F80BE23A9D6B31340C467EACE97, L_0, _stringLiteralF49E44C494F559336F4EE9CB1F596FA7869F5B9D, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionEditorLog_LogInstaller_m4A7AE59FE71301F2E896E48DF980A50D707946C9 (String_t* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF32F3E56650C3F80BE23A9D6B31340C467EACE97);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF49E44C494F559336F4EE9CB1F596FA7869F5B9D);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var);
		String_t* L_0 = ((FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_StaticFields*)il2cpp_codegen_static_fields_for(FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var))->___s_color;
		String_t* L_1 = ___0_msg;
		String_t* L_2;
		L_2 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralF32F3E56650C3F80BE23A9D6B31340C467EACE97, L_0, _stringLiteralF49E44C494F559336F4EE9CB1F596FA7869F5B9D, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionEditorLog_ErrorInstaller_mD62807E613BDD6955D46230FAEF17C94786D8D12 (String_t* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF32F3E56650C3F80BE23A9D6B31340C467EACE97);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF49E44C494F559336F4EE9CB1F596FA7869F5B9D);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var);
		String_t* L_0 = ((FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_StaticFields*)il2cpp_codegen_static_fields_for(FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var))->___s_color;
		String_t* L_1 = ___0_msg;
		String_t* L_2;
		L_2 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralF32F3E56650C3F80BE23A9D6B31340C467EACE97, L_0, _stringLiteralF49E44C494F559336F4EE9CB1F596FA7869F5B9D, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionEditorLog_TraceImport_m948D37E70A9443F7BD545D953C21B1C4433858DA (String_t* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral092B96EE8A7ACE3B47312DE7F1D20E8317F089D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF32F3E56650C3F80BE23A9D6B31340C467EACE97);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var);
		String_t* L_0 = ((FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_StaticFields*)il2cpp_codegen_static_fields_for(FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var))->___s_color;
		String_t* L_1 = ___0_msg;
		String_t* L_2;
		L_2 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralF32F3E56650C3F80BE23A9D6B31340C467EACE97, L_0, _stringLiteral092B96EE8A7ACE3B47312DE7F1D20E8317F089D0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionEditorLog_WarnImport_m53D09A264BE866CD1D40F6B29E9B14D4062761F9 (String_t* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral092B96EE8A7ACE3B47312DE7F1D20E8317F089D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF32F3E56650C3F80BE23A9D6B31340C467EACE97);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var);
		String_t* L_0 = ((FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_StaticFields*)il2cpp_codegen_static_fields_for(FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var))->___s_color;
		String_t* L_1 = ___0_msg;
		String_t* L_2;
		L_2 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralF32F3E56650C3F80BE23A9D6B31340C467EACE97, L_0, _stringLiteral092B96EE8A7ACE3B47312DE7F1D20E8317F089D0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionEditorLog_LogImport_m9884BB5EC1BC5BD3B889D5E6511113E2A7670EFB (String_t* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral092B96EE8A7ACE3B47312DE7F1D20E8317F089D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF32F3E56650C3F80BE23A9D6B31340C467EACE97);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var);
		String_t* L_0 = ((FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_StaticFields*)il2cpp_codegen_static_fields_for(FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var))->___s_color;
		String_t* L_1 = ___0_msg;
		String_t* L_2;
		L_2 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralF32F3E56650C3F80BE23A9D6B31340C467EACE97, L_0, _stringLiteral092B96EE8A7ACE3B47312DE7F1D20E8317F089D0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionEditorLog_ErrorImport_m90C127ADA07D93DBC5DCF95BD2D149A83BC94840 (String_t* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral092B96EE8A7ACE3B47312DE7F1D20E8317F089D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF32F3E56650C3F80BE23A9D6B31340C467EACE97);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var);
		String_t* L_0 = ((FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_StaticFields*)il2cpp_codegen_static_fields_for(FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var))->___s_color;
		String_t* L_1 = ___0_msg;
		String_t* L_2;
		L_2 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralF32F3E56650C3F80BE23A9D6B31340C467EACE97, L_0, _stringLiteral092B96EE8A7ACE3B47312DE7F1D20E8317F089D0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionEditorLog_TraceInspector_m08F7147ED35EF0C82005AB13F57858C293393908 (String_t* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8E9D2307BDE4FFEE2D69909D725AB3CE8153028);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF32F3E56650C3F80BE23A9D6B31340C467EACE97);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var);
		String_t* L_0 = ((FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_StaticFields*)il2cpp_codegen_static_fields_for(FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var))->___s_color;
		String_t* L_1 = ___0_msg;
		String_t* L_2;
		L_2 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralF32F3E56650C3F80BE23A9D6B31340C467EACE97, L_0, _stringLiteralC8E9D2307BDE4FFEE2D69909D725AB3CE8153028, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionEditorLog_WarnInspector_m4FFD12EE3D744E075BAED8D677CE2C16807BADC7 (String_t* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8E9D2307BDE4FFEE2D69909D725AB3CE8153028);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF32F3E56650C3F80BE23A9D6B31340C467EACE97);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var);
		String_t* L_0 = ((FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_StaticFields*)il2cpp_codegen_static_fields_for(FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var))->___s_color;
		String_t* L_1 = ___0_msg;
		String_t* L_2;
		L_2 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralF32F3E56650C3F80BE23A9D6B31340C467EACE97, L_0, _stringLiteralC8E9D2307BDE4FFEE2D69909D725AB3CE8153028, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionEditorLog_LogInspector_mBFDC185556E03B827A08217199ACEDC8D89A4410 (String_t* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8E9D2307BDE4FFEE2D69909D725AB3CE8153028);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF32F3E56650C3F80BE23A9D6B31340C467EACE97);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var);
		String_t* L_0 = ((FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_StaticFields*)il2cpp_codegen_static_fields_for(FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var))->___s_color;
		String_t* L_1 = ___0_msg;
		String_t* L_2;
		L_2 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralF32F3E56650C3F80BE23A9D6B31340C467EACE97, L_0, _stringLiteralC8E9D2307BDE4FFEE2D69909D725AB3CE8153028, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionEditorLog_ErrorInspector_mCCC06E1EA2E9E86C49465E4C6EFFEE89FA1A9D9C (String_t* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8E9D2307BDE4FFEE2D69909D725AB3CE8153028);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF32F3E56650C3F80BE23A9D6B31340C467EACE97);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var);
		String_t* L_0 = ((FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_StaticFields*)il2cpp_codegen_static_fields_for(FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var))->___s_color;
		String_t* L_1 = ___0_msg;
		String_t* L_2;
		L_2 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralF32F3E56650C3F80BE23A9D6B31340C467EACE97, L_0, _stringLiteralC8E9D2307BDE4FFEE2D69909D725AB3CE8153028, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionEditorLog_TraceMppm_m89314D24E229C1BE3CBF0AAE953E155F8D41CB9C (String_t* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAEC84533D667A957C2CE587DA77F054753D245BB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF32F3E56650C3F80BE23A9D6B31340C467EACE97);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var);
		String_t* L_0 = ((FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_StaticFields*)il2cpp_codegen_static_fields_for(FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var))->___s_color;
		String_t* L_1 = ___0_msg;
		String_t* L_2;
		L_2 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralF32F3E56650C3F80BE23A9D6B31340C467EACE97, L_0, _stringLiteralAEC84533D667A957C2CE587DA77F054753D245BB, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionEditorLog_WarnMppm_mB490AF0E7FF41390D1967C22CA538330EBF66B71 (String_t* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAEC84533D667A957C2CE587DA77F054753D245BB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF32F3E56650C3F80BE23A9D6B31340C467EACE97);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var);
		String_t* L_0 = ((FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_StaticFields*)il2cpp_codegen_static_fields_for(FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var))->___s_color;
		String_t* L_1 = ___0_msg;
		String_t* L_2;
		L_2 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralF32F3E56650C3F80BE23A9D6B31340C467EACE97, L_0, _stringLiteralAEC84533D667A957C2CE587DA77F054753D245BB, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionEditorLog_LogMppm_m69C389B95FB7D320D5C5FD6560E5924A4479BDFA (String_t* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAEC84533D667A957C2CE587DA77F054753D245BB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF32F3E56650C3F80BE23A9D6B31340C467EACE97);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var);
		String_t* L_0 = ((FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_StaticFields*)il2cpp_codegen_static_fields_for(FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var))->___s_color;
		String_t* L_1 = ___0_msg;
		String_t* L_2;
		L_2 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralF32F3E56650C3F80BE23A9D6B31340C467EACE97, L_0, _stringLiteralAEC84533D667A957C2CE587DA77F054753D245BB, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionEditorLog_ErrorMppm_m048D76740E5A6AAA2239613995467A8C279760B5 (String_t* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAEC84533D667A957C2CE587DA77F054753D245BB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF32F3E56650C3F80BE23A9D6B31340C467EACE97);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var);
		String_t* L_0 = ((FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_StaticFields*)il2cpp_codegen_static_fields_for(FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87_il2cpp_TypeInfo_var))->___s_color;
		String_t* L_1 = ___0_msg;
		String_t* L_2;
		L_2 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralF32F3E56650C3F80BE23A9D6B31340C467EACE97, L_0, _stringLiteralAEC84533D667A957C2CE587DA77F054753D245BB, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionEditorLog__ctor_mFC2808E5FAA91169DED39B48878C1B5D6F1BFB39 (FusionEditorLog_t265BF4A5E7DD8745B02E86CF9E492886AE89EF87* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_InitForConsole_m08BE8B325DB7309693C2C8184C89292D4642721B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsoleLogger_t5806253577532253A50D9EF797836676938CEE10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConsoleLogger_t5806253577532253A50D9EF797836676938CEE10* L_0 = (ConsoleLogger_t5806253577532253A50D9EF797836676938CEE10*)il2cpp_codegen_object_new(ConsoleLogger_t5806253577532253A50D9EF797836676938CEE10_il2cpp_TypeInfo_var);
		ConsoleLogger__ctor_mD6570AD4DA239CA3CFA0C6C1BCB3DEDF9E80BC26(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_Init_m58AD459A0E55A15B06D8A7CD91D2B02B7C081967(L_0, 3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Init_m58AD459A0E55A15B06D8A7CD91D2B02B7C081967 (RuntimeObject* ___0_logger, uint8_t ___1_LogLevel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lock_t32A78416DABEA294270289BDD467DFA016411297_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	bool V_1 = false;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Lock_t32A78416DABEA294270289BDD467DFA016411297_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0023:
			{
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_002c;
					}
				}
				{
					Type_t* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_002c:
				{
					return;
				}
			}
		});
		try
		{
			Type_t* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			RuntimeObject* L_5 = ___0_logger;
			il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
			((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->____logger = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->____logger), (void*)L_5);
			uint8_t L_6 = ___1_LogLevel;
			((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->___LogLevel = L_6;
			goto IL_002d;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Log_get_Initialized_mE9564A8701EC4481BEF509D156DA42D358925365 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->____logger;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Reset_mE0741E4698A13FACEEDC6C3CA02A722D7709C170 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->___LogLevel = 3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Exception_m2CD3BFA506678DB70A6633E19F428D1D7A9C16B2 (Exception_t* ___0_exn, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tE9BF358A14D675B0B165178D24E3FB9400F34DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lock_t32A78416DABEA294270289BDD467DFA016411297_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	bool V_2 = false;
	LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->____logger;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0042;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		uint8_t L_2 = ((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->___LogLevel;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (Lock_t32A78416DABEA294270289BDD467DFA016411297_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		V_1 = L_4;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0038:
			{
				{
					bool L_5 = V_2;
					if (!L_5)
					{
						goto IL_0041;
					}
				}
				{
					Type_t* L_6 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_6, NULL);
				}

IL_0041:
				{
					return;
				}
			}
		});
		try
		{
			Type_t* L_7 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_7, (&V_2), NULL);
			RuntimeObject* L_8 = V_0;
			Exception_t* L_9 = ___0_exn;
			LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074* L_10 = (&V_3);
			il2cpp_codegen_initobj(L_10, sizeof(LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074));
			NullCheck(L_8);
			InterfaceActionInvoker2< Exception_t*, LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074* >::Invoke(1, ILogger_tE9BF358A14D675B0B165178D24E3FB9400F34DB1_il2cpp_TypeInfo_var, L_8, L_9, L_10);
			goto IL_0042;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0042:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_ExceptionInternal_m965D6D8166AA30F0837C99305AD5E01D7F40751A (Exception_t* ___0_exn, String_t* ___1_stream, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tE9BF358A14D675B0B165178D24E3FB9400F34DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lock_t32A78416DABEA294270289BDD467DFA016411297_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	bool V_2 = false;
	LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->____logger;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0043;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		uint8_t L_2 = ((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->___LogLevel;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0043;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (Lock_t32A78416DABEA294270289BDD467DFA016411297_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		V_1 = L_4;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{
				{
					bool L_5 = V_2;
					if (!L_5)
					{
						goto IL_0042;
					}
				}
				{
					Type_t* L_6 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_6, NULL);
				}

IL_0042:
				{
					return;
				}
			}
		});
		try
		{
			Type_t* L_7 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_7, (&V_2), NULL);
			RuntimeObject* L_8 = V_0;
			Exception_t* L_9 = ___0_exn;
			String_t* L_10 = ___1_stream;
			LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074 L_11;
			memset((&L_11), 0, sizeof(L_11));
			LogContext__ctor_mAD9FADE06711B00C3048C6215B0E88C5AFCD9E27((&L_11), L_10, NULL, NULL);
			V_3 = L_11;
			NullCheck(L_8);
			InterfaceActionInvoker2< Exception_t*, LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074* >::Invoke(1, ILogger_tE9BF358A14D675B0B165178D24E3FB9400F34DB1_il2cpp_TypeInfo_var, L_8, L_9, (&V_3));
			goto IL_0043;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0043:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Trace_m31DDA9DD385A56A551BDDE5EA1B19671CF836050 (RuntimeObject* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_InfoInternal_mF1943A24B9BE704BBD95948F51266F67DBE568AF(L_0, (String_t*)NULL, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_TraceWarn_mCBE3D5485F673B558615C22474917272D543EE1E (RuntimeObject* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_WarnInternal_mB6CDB22C09F62936E531E19CDE3ED5F3F7EB05A5(L_0, (String_t*)NULL, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_TraceError_mC69D21E933E7292BB8848A35E86368D899A0A22E (RuntimeObject* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_ErrorInternal_mA69CCBB3B43000476141642844033FAB5E5CCDD5(L_0, (String_t*)NULL, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Trace_mEA4B68DDE4E918B782366FB7574CAC4AAD7E4C2C (RuntimeObject* ___0_source, RuntimeObject* ___1_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((RuntimeObject*)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_source;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = L_2;
	}

IL_000c:
	{
		RuntimeObject* L_3 = ___1_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_InfoInternalValue_m978412FAAE1CE3D61FFBA0261F28B4D482B2E98B(G_B3_0, L_3, (String_t*)NULL, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_TraceWarn_m8E28CC0EDE613A3E982A80A7F74DDE1DC8885DF1 (RuntimeObject* ___0_source, RuntimeObject* ___1_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((RuntimeObject*)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_source;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = L_2;
	}

IL_000c:
	{
		RuntimeObject* L_3 = ___1_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_WarnInternalValue_m9A39523DA34ADFC990ECD5E90D1B500CBDC8F5A2(G_B3_0, L_3, (String_t*)NULL, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_TraceError_m048A925EFA9BA4D2C96EC9BD20DBE21768F2A572 (RuntimeObject* ___0_source, RuntimeObject* ___1_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((RuntimeObject*)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_source;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = L_2;
	}

IL_000c:
	{
		RuntimeObject* L_3 = ___1_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_ErrorInternalValue_mEDB2CA84DE5A1C1225F63F2989C7B3EBE477B477(G_B3_0, L_3, (String_t*)NULL, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Debug_m231D853CA4D75BF48BD2D2FA0575B3EBD399BD1A (RuntimeObject* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_InfoInternal_mF1943A24B9BE704BBD95948F51266F67DBE568AF(L_0, (String_t*)NULL, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_DebugWarn_m7FA68A40C7DA1C844368BEBF0E81EC5EB924F546 (RuntimeObject* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_WarnInternal_mB6CDB22C09F62936E531E19CDE3ED5F3F7EB05A5(L_0, (String_t*)NULL, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_DebugError_mEF614F48F82EF857A6984E727F2A2C9A1CA702C4 (RuntimeObject* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_ErrorInternal_mA69CCBB3B43000476141642844033FAB5E5CCDD5(L_0, (String_t*)NULL, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Debug_mE64B0C6F0EDB42A1002C5B07204B05A57DFFC7CC (RuntimeObject* ___0_source, RuntimeObject* ___1_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((RuntimeObject*)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_source;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = L_2;
	}

IL_000c:
	{
		RuntimeObject* L_3 = ___1_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_InfoInternalValue_m978412FAAE1CE3D61FFBA0261F28B4D482B2E98B(G_B3_0, L_3, (String_t*)NULL, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_DebugWarn_mAFC33816191C82BD493EFD3B9D8E3B5D4861D8B4 (RuntimeObject* ___0_source, RuntimeObject* ___1_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((RuntimeObject*)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_source;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = L_2;
	}

IL_000c:
	{
		RuntimeObject* L_3 = ___1_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_WarnInternalValue_m9A39523DA34ADFC990ECD5E90D1B500CBDC8F5A2(G_B3_0, L_3, (String_t*)NULL, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_DebugError_mEC53E2FBBB8F7FEB9B6DC09D93ED7A847FB09901 (RuntimeObject* ___0_source, RuntimeObject* ___1_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((RuntimeObject*)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_source;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = L_2;
	}

IL_000c:
	{
		RuntimeObject* L_3 = ___1_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_ErrorInternalValue_mEDB2CA84DE5A1C1225F63F2989C7B3EBE477B477(G_B3_0, L_3, (String_t*)NULL, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_TraceStun_mED7B9DF84934FEBD8EED6D2F618B6626FAFBF156 (RuntimeObject* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral424AF8E2289ABDE439D9C98ACC8D3CAB7720CACA);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_InfoInternal_mF1943A24B9BE704BBD95948F51266F67DBE568AF(L_0, _stringLiteral424AF8E2289ABDE439D9C98ACC8D3CAB7720CACA, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_TraceStunWarn_mBFF6CA7421275DF33B59572EC9294EC919BF5C85 (RuntimeObject* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral424AF8E2289ABDE439D9C98ACC8D3CAB7720CACA);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_WarnInternal_mB6CDB22C09F62936E531E19CDE3ED5F3F7EB05A5(L_0, _stringLiteral424AF8E2289ABDE439D9C98ACC8D3CAB7720CACA, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_TraceStunError_m02675FC6993B220BD47A4C3A62ED94BD9E86B341 (RuntimeObject* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral424AF8E2289ABDE439D9C98ACC8D3CAB7720CACA);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_ErrorInternal_mA69CCBB3B43000476141642844033FAB5E5CCDD5(L_0, _stringLiteral424AF8E2289ABDE439D9C98ACC8D3CAB7720CACA, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_TraceStun_m95116C565D4C540C97C8DEA5C189F423014B9946 (RuntimeObject* ___0_source, RuntimeObject* ___1_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral424AF8E2289ABDE439D9C98ACC8D3CAB7720CACA);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((RuntimeObject*)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_source;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = L_2;
	}

IL_000c:
	{
		RuntimeObject* L_3 = ___1_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_InfoInternalValue_m978412FAAE1CE3D61FFBA0261F28B4D482B2E98B(G_B3_0, L_3, _stringLiteral424AF8E2289ABDE439D9C98ACC8D3CAB7720CACA, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_TraceStunWarn_m62ECD2211A0C9A9A8C4696CC20F6D71A8024BB3B (RuntimeObject* ___0_source, RuntimeObject* ___1_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral424AF8E2289ABDE439D9C98ACC8D3CAB7720CACA);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((RuntimeObject*)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_source;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = L_2;
	}

IL_000c:
	{
		RuntimeObject* L_3 = ___1_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_WarnInternalValue_m9A39523DA34ADFC990ECD5E90D1B500CBDC8F5A2(G_B3_0, L_3, _stringLiteral424AF8E2289ABDE439D9C98ACC8D3CAB7720CACA, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_TraceStunError_m882B7DF68509DB69677B1F73CB185C81BD1F511B (RuntimeObject* ___0_source, RuntimeObject* ___1_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral424AF8E2289ABDE439D9C98ACC8D3CAB7720CACA);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((RuntimeObject*)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_source;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = L_2;
	}

IL_000c:
	{
		RuntimeObject* L_3 = ___1_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_ErrorInternalValue_mEDB2CA84DE5A1C1225F63F2989C7B3EBE477B477(G_B3_0, L_3, _stringLiteral424AF8E2289ABDE439D9C98ACC8D3CAB7720CACA, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_TraceObject_mF8477AED74CDE261FBEC87A904A8FD9F770DF8FE (RuntimeObject* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA816A20F0CF24FE3583D22D2B8AD3305323C346);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_InfoInternal_mF1943A24B9BE704BBD95948F51266F67DBE568AF(L_0, _stringLiteralCA816A20F0CF24FE3583D22D2B8AD3305323C346, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_TraceObjectWarn_mE986AC37E1E6C0DF99B4820556850997126F792A (RuntimeObject* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA816A20F0CF24FE3583D22D2B8AD3305323C346);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_WarnInternal_mB6CDB22C09F62936E531E19CDE3ED5F3F7EB05A5(L_0, _stringLiteralCA816A20F0CF24FE3583D22D2B8AD3305323C346, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_TraceObjectError_mFD9675DC62026E1F69273B80F5B4213A0CDDE5F0 (RuntimeObject* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA816A20F0CF24FE3583D22D2B8AD3305323C346);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_ErrorInternal_mA69CCBB3B43000476141642844033FAB5E5CCDD5(L_0, _stringLiteralCA816A20F0CF24FE3583D22D2B8AD3305323C346, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_TraceObject_m2F39000EC778C70FAC9DCBC7A59A28E83D7932A5 (RuntimeObject* ___0_source, RuntimeObject* ___1_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA816A20F0CF24FE3583D22D2B8AD3305323C346);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((RuntimeObject*)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_source;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = L_2;
	}

IL_000c:
	{
		RuntimeObject* L_3 = ___1_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_InfoInternalValue_m978412FAAE1CE3D61FFBA0261F28B4D482B2E98B(G_B3_0, L_3, _stringLiteralCA816A20F0CF24FE3583D22D2B8AD3305323C346, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_TraceObjectWarn_m69D8EA3BC4B6AB71E1B0CFAC001BDB890283E5C6 (RuntimeObject* ___0_source, RuntimeObject* ___1_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA816A20F0CF24FE3583D22D2B8AD3305323C346);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((RuntimeObject*)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_source;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = L_2;
	}

IL_000c:
	{
		RuntimeObject* L_3 = ___1_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_WarnInternalValue_m9A39523DA34ADFC990ECD5E90D1B500CBDC8F5A2(G_B3_0, L_3, _stringLiteralCA816A20F0CF24FE3583D22D2B8AD3305323C346, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_TraceObjectError_mD12957164486738C81C51C14B930C4D27D487CD5 (RuntimeObject* ___0_source, RuntimeObject* ___1_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA816A20F0CF24FE3583D22D2B8AD3305323C346);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((RuntimeObject*)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_source;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = L_2;
	}

IL_000c:
	{
		RuntimeObject* L_3 = ___1_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_ErrorInternalValue_mEDB2CA84DE5A1C1225F63F2989C7B3EBE477B477(G_B3_0, L_3, _stringLiteralCA816A20F0CF24FE3583D22D2B8AD3305323C346, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_TraceNetwork_m926042AC692342EFAC98EF2FC744E77EE5B16531 (RuntimeObject* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78F56529E0F2D4459413FC1874F402EB2A0F4C7B);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_InfoInternal_mF1943A24B9BE704BBD95948F51266F67DBE568AF(L_0, _stringLiteral78F56529E0F2D4459413FC1874F402EB2A0F4C7B, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_TraceNetworkWarn_m43E9DBE70586E8FB2AE873A89F28664C37411342 (RuntimeObject* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78F56529E0F2D4459413FC1874F402EB2A0F4C7B);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_WarnInternal_mB6CDB22C09F62936E531E19CDE3ED5F3F7EB05A5(L_0, _stringLiteral78F56529E0F2D4459413FC1874F402EB2A0F4C7B, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_TraceNetworkError_m56F2B7641E2E46F481557BDC798B8A75E2DD00EF (RuntimeObject* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78F56529E0F2D4459413FC1874F402EB2A0F4C7B);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_ErrorInternal_mA69CCBB3B43000476141642844033FAB5E5CCDD5(L_0, _stringLiteral78F56529E0F2D4459413FC1874F402EB2A0F4C7B, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_TraceNetwork_mAEEE0DB8781BFC7F27DFAE501DA4B0BAA7DA0C95 (RuntimeObject* ___0_source, RuntimeObject* ___1_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78F56529E0F2D4459413FC1874F402EB2A0F4C7B);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((RuntimeObject*)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_source;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = L_2;
	}

IL_000c:
	{
		RuntimeObject* L_3 = ___1_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_InfoInternalValue_m978412FAAE1CE3D61FFBA0261F28B4D482B2E98B(G_B3_0, L_3, _stringLiteral78F56529E0F2D4459413FC1874F402EB2A0F4C7B, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_TraceNetworkWarn_mA61A6A71CB3E26378C06DE3B976FE54387EDC022 (RuntimeObject* ___0_source, RuntimeObject* ___1_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78F56529E0F2D4459413FC1874F402EB2A0F4C7B);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((RuntimeObject*)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_source;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = L_2;
	}

IL_000c:
	{
		RuntimeObject* L_3 = ___1_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_WarnInternalValue_m9A39523DA34ADFC990ECD5E90D1B500CBDC8F5A2(G_B3_0, L_3, _stringLiteral78F56529E0F2D4459413FC1874F402EB2A0F4C7B, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_TraceNetworkError_m56210F8018E092D8A7ED2AFA0EECB0E744C25CB6 (RuntimeObject* ___0_source, RuntimeObject* ___1_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78F56529E0F2D4459413FC1874F402EB2A0F4C7B);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((RuntimeObject*)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_source;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = L_2;
	}

IL_000c:
	{
		RuntimeObject* L_3 = ___1_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_ErrorInternalValue_mEDB2CA84DE5A1C1225F63F2989C7B3EBE477B477(G_B3_0, L_3, _stringLiteral78F56529E0F2D4459413FC1874F402EB2A0F4C7B, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_TracePrefab_mCF373912C978FF1F51C31BF0D3B368D4F5B7683A (RuntimeObject* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral353B2C4F2AD69325073238DA4239FF3BF4BAA404);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_InfoInternal_mF1943A24B9BE704BBD95948F51266F67DBE568AF(L_0, _stringLiteral353B2C4F2AD69325073238DA4239FF3BF4BAA404, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_TracePrefabWarn_mA650EA0CE0A92BC679A370C74A37B3CF5B149EA5 (RuntimeObject* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral353B2C4F2AD69325073238DA4239FF3BF4BAA404);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_WarnInternal_mB6CDB22C09F62936E531E19CDE3ED5F3F7EB05A5(L_0, _stringLiteral353B2C4F2AD69325073238DA4239FF3BF4BAA404, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_TracePrefabError_m266C2B104A386F1591650B4692098239B880571D (RuntimeObject* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral353B2C4F2AD69325073238DA4239FF3BF4BAA404);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_ErrorInternal_mA69CCBB3B43000476141642844033FAB5E5CCDD5(L_0, _stringLiteral353B2C4F2AD69325073238DA4239FF3BF4BAA404, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_TracePrefab_m0EE08441BEE1678EC46E50EFA439ED0172E93B26 (RuntimeObject* ___0_source, RuntimeObject* ___1_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral353B2C4F2AD69325073238DA4239FF3BF4BAA404);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((RuntimeObject*)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_source;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = L_2;
	}

IL_000c:
	{
		RuntimeObject* L_3 = ___1_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_InfoInternalValue_m978412FAAE1CE3D61FFBA0261F28B4D482B2E98B(G_B3_0, L_3, _stringLiteral353B2C4F2AD69325073238DA4239FF3BF4BAA404, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_TracePrefabWarn_mE2901484C306DD05E4F81B5A62DFB70EFD4D7187 (RuntimeObject* ___0_source, RuntimeObject* ___1_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral353B2C4F2AD69325073238DA4239FF3BF4BAA404);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((RuntimeObject*)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_source;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = L_2;
	}

IL_000c:
	{
		RuntimeObject* L_3 = ___1_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_WarnInternalValue_m9A39523DA34ADFC990ECD5E90D1B500CBDC8F5A2(G_B3_0, L_3, _stringLiteral353B2C4F2AD69325073238DA4239FF3BF4BAA404, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_TracePrefabError_mC19E938151C913613778EF82A5F540AB12C4618A (RuntimeObject* ___0_source, RuntimeObject* ___1_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral353B2C4F2AD69325073238DA4239FF3BF4BAA404);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((RuntimeObject*)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_source;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = L_2;
	}

IL_000c:
	{
		RuntimeObject* L_3 = ___1_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_ErrorInternalValue_mEDB2CA84DE5A1C1225F63F2989C7B3EBE477B477(G_B3_0, L_3, _stringLiteral353B2C4F2AD69325073238DA4239FF3BF4BAA404, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_TraceSceneInfo_mA6C8BAB51189511BF72B660622446302E4C44443 (RuntimeObject* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85FFB99C028A10585D5971239ACA9E19D8D8933D);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_InfoInternal_mF1943A24B9BE704BBD95948F51266F67DBE568AF(L_0, _stringLiteral85FFB99C028A10585D5971239ACA9E19D8D8933D, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_TraceSceneInfoWarn_m51E52E8FBD4EC689AC1B80098F2C249561E15622 (RuntimeObject* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85FFB99C028A10585D5971239ACA9E19D8D8933D);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_WarnInternal_mB6CDB22C09F62936E531E19CDE3ED5F3F7EB05A5(L_0, _stringLiteral85FFB99C028A10585D5971239ACA9E19D8D8933D, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_TraceSceneInfoError_m1E6A3D450711DA38A9838C6A4F09DFD22A8F9052 (RuntimeObject* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85FFB99C028A10585D5971239ACA9E19D8D8933D);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_ErrorInternal_mA69CCBB3B43000476141642844033FAB5E5CCDD5(L_0, _stringLiteral85FFB99C028A10585D5971239ACA9E19D8D8933D, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_TraceSceneInfo_mBA18AB8375056E66D67DAA738E0ED365CD30B847 (RuntimeObject* ___0_source, RuntimeObject* ___1_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85FFB99C028A10585D5971239ACA9E19D8D8933D);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((RuntimeObject*)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_source;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = L_2;
	}

IL_000c:
	{
		RuntimeObject* L_3 = ___1_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_InfoInternalValue_m978412FAAE1CE3D61FFBA0261F28B4D482B2E98B(G_B3_0, L_3, _stringLiteral85FFB99C028A10585D5971239ACA9E19D8D8933D, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_TraceSceneInfoWarn_mDFA6FDB5B0DAD16F3B05F9BDA09363F18A38DA2B (RuntimeObject* ___0_source, RuntimeObject* ___1_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85FFB99C028A10585D5971239ACA9E19D8D8933D);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((RuntimeObject*)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_source;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = L_2;
	}

IL_000c:
	{
		RuntimeObject* L_3 = ___1_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_WarnInternalValue_m9A39523DA34ADFC990ECD5E90D1B500CBDC8F5A2(G_B3_0, L_3, _stringLiteral85FFB99C028A10585D5971239ACA9E19D8D8933D, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_TraceSceneInfoError_mB2FD106684DF5A235FA21ABA0704B224209DF483 (RuntimeObject* ___0_source, RuntimeObject* ___1_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85FFB99C028A10585D5971239ACA9E19D8D8933D);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((RuntimeObject*)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_source;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = L_2;
	}

IL_000c:
	{
		RuntimeObject* L_3 = ___1_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_ErrorInternalValue_mEDB2CA84DE5A1C1225F63F2989C7B3EBE477B477(G_B3_0, L_3, _stringLiteral85FFB99C028A10585D5971239ACA9E19D8D8933D, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_TraceSimulationMessage_m3B13208224CD8795EB16A0431A3320563C2E8D6C (RuntimeObject* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D4F9EA2133219037FA4DA5FC58495A8EF9B1970);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_InfoInternal_mF1943A24B9BE704BBD95948F51266F67DBE568AF(L_0, _stringLiteral5D4F9EA2133219037FA4DA5FC58495A8EF9B1970, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_TraceSimulationMessageWarn_m90D77646938CC95504447141588DFE14B282638A (RuntimeObject* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D4F9EA2133219037FA4DA5FC58495A8EF9B1970);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_WarnInternal_mB6CDB22C09F62936E531E19CDE3ED5F3F7EB05A5(L_0, _stringLiteral5D4F9EA2133219037FA4DA5FC58495A8EF9B1970, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_TraceSimulationMessageError_m5F5D58A4FAD87EEDC2D34B9918B17B3EE2C10093 (RuntimeObject* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D4F9EA2133219037FA4DA5FC58495A8EF9B1970);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_ErrorInternal_mA69CCBB3B43000476141642844033FAB5E5CCDD5(L_0, _stringLiteral5D4F9EA2133219037FA4DA5FC58495A8EF9B1970, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_TraceSimulationMessage_mD36862FBFA8282E1628B001D7D7506BB43A5EACC (RuntimeObject* ___0_source, RuntimeObject* ___1_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D4F9EA2133219037FA4DA5FC58495A8EF9B1970);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((RuntimeObject*)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_source;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = L_2;
	}

IL_000c:
	{
		RuntimeObject* L_3 = ___1_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_InfoInternalValue_m978412FAAE1CE3D61FFBA0261F28B4D482B2E98B(G_B3_0, L_3, _stringLiteral5D4F9EA2133219037FA4DA5FC58495A8EF9B1970, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_TraceSimulationMessageWarn_m8C7284CC76C9684F140A70EA5EFF6DA2F49DCB83 (RuntimeObject* ___0_source, RuntimeObject* ___1_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D4F9EA2133219037FA4DA5FC58495A8EF9B1970);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((RuntimeObject*)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_source;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = L_2;
	}

IL_000c:
	{
		RuntimeObject* L_3 = ___1_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_WarnInternalValue_m9A39523DA34ADFC990ECD5E90D1B500CBDC8F5A2(G_B3_0, L_3, _stringLiteral5D4F9EA2133219037FA4DA5FC58495A8EF9B1970, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_TraceSimulationMessageError_mC461631A385B40BDA257B159645C9802E732107A (RuntimeObject* ___0_source, RuntimeObject* ___1_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D4F9EA2133219037FA4DA5FC58495A8EF9B1970);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((RuntimeObject*)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_source;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = L_2;
	}

IL_000c:
	{
		RuntimeObject* L_3 = ___1_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_ErrorInternalValue_mEDB2CA84DE5A1C1225F63F2989C7B3EBE477B477(G_B3_0, L_3, _stringLiteral5D4F9EA2133219037FA4DA5FC58495A8EF9B1970, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_TraceHostMigration_m874A5886BD59B75464847FA1986F85C5443040D0 (RuntimeObject* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EA56E0739223C156A40E92809C27BEAEC315026);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_InfoInternal_mF1943A24B9BE704BBD95948F51266F67DBE568AF(L_0, _stringLiteral5EA56E0739223C156A40E92809C27BEAEC315026, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_TraceHostMigrationWarn_m5A3EF3378CD69BFF52441971E9363F61EEA41E9B (RuntimeObject* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EA56E0739223C156A40E92809C27BEAEC315026);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_WarnInternal_mB6CDB22C09F62936E531E19CDE3ED5F3F7EB05A5(L_0, _stringLiteral5EA56E0739223C156A40E92809C27BEAEC315026, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_TraceHostMigrationError_mB46BB581E34AB13106123EFE1FD3F444190B9BF8 (RuntimeObject* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EA56E0739223C156A40E92809C27BEAEC315026);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_ErrorInternal_mA69CCBB3B43000476141642844033FAB5E5CCDD5(L_0, _stringLiteral5EA56E0739223C156A40E92809C27BEAEC315026, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_TraceHostMigration_mA5DD9842F5DF70578907AAE62B14D56F701BBA7A (RuntimeObject* ___0_source, RuntimeObject* ___1_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EA56E0739223C156A40E92809C27BEAEC315026);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((RuntimeObject*)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_source;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = L_2;
	}

IL_000c:
	{
		RuntimeObject* L_3 = ___1_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_InfoInternalValue_m978412FAAE1CE3D61FFBA0261F28B4D482B2E98B(G_B3_0, L_3, _stringLiteral5EA56E0739223C156A40E92809C27BEAEC315026, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_TraceHostMigrationWarn_mA60A66540C7BAD97B5CCD7682A37F9ED7EC78B58 (RuntimeObject* ___0_source, RuntimeObject* ___1_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EA56E0739223C156A40E92809C27BEAEC315026);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((RuntimeObject*)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_source;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = L_2;
	}

IL_000c:
	{
		RuntimeObject* L_3 = ___1_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_WarnInternalValue_m9A39523DA34ADFC990ECD5E90D1B500CBDC8F5A2(G_B3_0, L_3, _stringLiteral5EA56E0739223C156A40E92809C27BEAEC315026, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_TraceHostMigrationError_mA3A707D878E44526EA029EDF80CDCFD767F70664 (RuntimeObject* ___0_source, RuntimeObject* ___1_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EA56E0739223C156A40E92809C27BEAEC315026);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((RuntimeObject*)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_source;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = L_2;
	}

IL_000c:
	{
		RuntimeObject* L_3 = ___1_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_ErrorInternalValue_mEDB2CA84DE5A1C1225F63F2989C7B3EBE477B477(G_B3_0, L_3, _stringLiteral5EA56E0739223C156A40E92809C27BEAEC315026, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_TraceEncryption_mE824C5CCC6F676C1C7CF4C739058AD01E95C82BF (RuntimeObject* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5A6CB578FF33F204EEEE4847E3AC2425DE6783F);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_InfoInternal_mF1943A24B9BE704BBD95948F51266F67DBE568AF(L_0, _stringLiteralB5A6CB578FF33F204EEEE4847E3AC2425DE6783F, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_TraceEncryptionWarn_m8C47D3EFE48EC942A2086AEDC4DA732C08A380F8 (RuntimeObject* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5A6CB578FF33F204EEEE4847E3AC2425DE6783F);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_WarnInternal_mB6CDB22C09F62936E531E19CDE3ED5F3F7EB05A5(L_0, _stringLiteralB5A6CB578FF33F204EEEE4847E3AC2425DE6783F, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_TraceEncryptionError_mF5CD708CEE88B451AF7956305493B2B86B72FBA1 (RuntimeObject* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5A6CB578FF33F204EEEE4847E3AC2425DE6783F);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_ErrorInternal_mA69CCBB3B43000476141642844033FAB5E5CCDD5(L_0, _stringLiteralB5A6CB578FF33F204EEEE4847E3AC2425DE6783F, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_TraceEncryption_mC8A4E3AD8BF21AE0A2B436D6D9DF642CC7B7016E (RuntimeObject* ___0_source, RuntimeObject* ___1_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5A6CB578FF33F204EEEE4847E3AC2425DE6783F);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((RuntimeObject*)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_source;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = L_2;
	}

IL_000c:
	{
		RuntimeObject* L_3 = ___1_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_InfoInternalValue_m978412FAAE1CE3D61FFBA0261F28B4D482B2E98B(G_B3_0, L_3, _stringLiteralB5A6CB578FF33F204EEEE4847E3AC2425DE6783F, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_TraceEncryptionWarn_m53E588F0A3C58E3D0F2CB35F18B0E5DF6EB63E00 (RuntimeObject* ___0_source, RuntimeObject* ___1_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5A6CB578FF33F204EEEE4847E3AC2425DE6783F);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((RuntimeObject*)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_source;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = L_2;
	}

IL_000c:
	{
		RuntimeObject* L_3 = ___1_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_WarnInternalValue_m9A39523DA34ADFC990ECD5E90D1B500CBDC8F5A2(G_B3_0, L_3, _stringLiteralB5A6CB578FF33F204EEEE4847E3AC2425DE6783F, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_TraceEncryptionError_mCE2CD0D56D2E79284A4DC004B5A6F9A602554212 (RuntimeObject* ___0_source, RuntimeObject* ___1_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5A6CB578FF33F204EEEE4847E3AC2425DE6783F);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((RuntimeObject*)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_source;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = L_2;
	}

IL_000c:
	{
		RuntimeObject* L_3 = ___1_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_ErrorInternalValue_mEDB2CA84DE5A1C1225F63F2989C7B3EBE477B477(G_B3_0, L_3, _stringLiteralB5A6CB578FF33F204EEEE4847E3AC2425DE6783F, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_TraceDummyTraffic_mB743D948B4C6554E2026D59F652A859C85A64608 (RuntimeObject* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7501DA0A9C59EE5BCAC045730636B20424C11BBF);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_InfoInternal_mF1943A24B9BE704BBD95948F51266F67DBE568AF(L_0, _stringLiteral7501DA0A9C59EE5BCAC045730636B20424C11BBF, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_TraceDummyTrafficWarn_mB615193A274D17C013E66A426F5EB03EBD8F62D6 (RuntimeObject* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7501DA0A9C59EE5BCAC045730636B20424C11BBF);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_WarnInternal_mB6CDB22C09F62936E531E19CDE3ED5F3F7EB05A5(L_0, _stringLiteral7501DA0A9C59EE5BCAC045730636B20424C11BBF, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_TraceDummyTrafficError_m480D4A8600A93D12BE4D892782EA46121D9C4C58 (RuntimeObject* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7501DA0A9C59EE5BCAC045730636B20424C11BBF);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_ErrorInternal_mA69CCBB3B43000476141642844033FAB5E5CCDD5(L_0, _stringLiteral7501DA0A9C59EE5BCAC045730636B20424C11BBF, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_TraceDummyTraffic_mE7F87970B34F872EC3AB58407C777E2035429332 (RuntimeObject* ___0_source, RuntimeObject* ___1_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7501DA0A9C59EE5BCAC045730636B20424C11BBF);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((RuntimeObject*)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_source;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = L_2;
	}

IL_000c:
	{
		RuntimeObject* L_3 = ___1_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_InfoInternalValue_m978412FAAE1CE3D61FFBA0261F28B4D482B2E98B(G_B3_0, L_3, _stringLiteral7501DA0A9C59EE5BCAC045730636B20424C11BBF, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_TraceDummyTrafficWarn_m792CFF503D1F45B9D12B05BFD171D1B7990D2E71 (RuntimeObject* ___0_source, RuntimeObject* ___1_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7501DA0A9C59EE5BCAC045730636B20424C11BBF);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((RuntimeObject*)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_source;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = L_2;
	}

IL_000c:
	{
		RuntimeObject* L_3 = ___1_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_WarnInternalValue_m9A39523DA34ADFC990ECD5E90D1B500CBDC8F5A2(G_B3_0, L_3, _stringLiteral7501DA0A9C59EE5BCAC045730636B20424C11BBF, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_TraceDummyTrafficError_m80CBD97391A6234F435C452340DEA3FC9EAE387A (RuntimeObject* ___0_source, RuntimeObject* ___1_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7501DA0A9C59EE5BCAC045730636B20424C11BBF);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((RuntimeObject*)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_source;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = L_2;
	}

IL_000c:
	{
		RuntimeObject* L_3 = ___1_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_ErrorInternalValue_mEDB2CA84DE5A1C1225F63F2989C7B3EBE477B477(G_B3_0, L_3, _stringLiteral7501DA0A9C59EE5BCAC045730636B20424C11BBF, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_InfoRealtime_mC681CCB9CEA6B43222971E38D8F8374ED493BCF0 (RuntimeObject* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9CEBAA82567368A3DB279022579AC8FB3DB92D8);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_InfoInternal_mF1943A24B9BE704BBD95948F51266F67DBE568AF(L_0, _stringLiteralB9CEBAA82567368A3DB279022579AC8FB3DB92D8, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_WarnRealtime_m018A9136C1E1DC137E1E7C222C8B5C2563558467 (RuntimeObject* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9CEBAA82567368A3DB279022579AC8FB3DB92D8);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_WarnInternal_mB6CDB22C09F62936E531E19CDE3ED5F3F7EB05A5(L_0, _stringLiteralB9CEBAA82567368A3DB279022579AC8FB3DB92D8, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_ErrorRealtime_mCFCAE3B0B5CAC51AC21C7842E0F270A70DB963BD (RuntimeObject* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9CEBAA82567368A3DB279022579AC8FB3DB92D8);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_ErrorInternal_mA69CCBB3B43000476141642844033FAB5E5CCDD5(L_0, _stringLiteralB9CEBAA82567368A3DB279022579AC8FB3DB92D8, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_ExceptionRealtime_m378CDD99CC9ACFAE2CFBCF33B15C434BAEBE351B (Exception_t* ___0_ex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9CEBAA82567368A3DB279022579AC8FB3DB92D8);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t* L_0 = ___0_ex;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_ExceptionInternal_m965D6D8166AA30F0837C99305AD5E01D7F40751A(L_0, _stringLiteralB9CEBAA82567368A3DB279022579AC8FB3DB92D8, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_TraceSceneManager_m09D5654859EF919E84037FB474E465260B899BE3 (RuntimeObject* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0B267465E6809858C6C0C2664BB62BA5715FCE4);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_InfoInternal_mF1943A24B9BE704BBD95948F51266F67DBE568AF(L_0, _stringLiteralB0B267465E6809858C6C0C2664BB62BA5715FCE4, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_WarnSceneManager_m5BCA1071B9E7ACFD5F602FA8975524015DEFA2DE (RuntimeObject* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0B267465E6809858C6C0C2664BB62BA5715FCE4);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_WarnInternal_mB6CDB22C09F62936E531E19CDE3ED5F3F7EB05A5(L_0, _stringLiteralB0B267465E6809858C6C0C2664BB62BA5715FCE4, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_ErrorSceneManager_m7888372333EDFA6357911BBC1685E91F45225B4B (RuntimeObject* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0B267465E6809858C6C0C2664BB62BA5715FCE4);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		Log_ErrorInternal_mA69CCBB3B43000476141642844033FAB5E5CCDD5(L_0, _stringLiteralB0B267465E6809858C6C0C2664BB62BA5715FCE4, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Info_mFC08A08DB88747519BB4C6A283A5DDA3828AA2A7 (RuntimeObject* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tE9BF358A14D675B0B165178D24E3FB9400F34DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lock_t32A78416DABEA294270289BDD467DFA016411297_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	bool V_2 = false;
	LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->____logger;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0043;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		uint8_t L_2 = ((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->___LogLevel;
		if ((((int32_t)L_2) < ((int32_t)2)))
		{
			goto IL_0043;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (Lock_t32A78416DABEA294270289BDD467DFA016411297_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		V_1 = L_4;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{
				{
					bool L_5 = V_2;
					if (!L_5)
					{
						goto IL_0042;
					}
				}
				{
					Type_t* L_6 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_6, NULL);
				}

IL_0042:
				{
					return;
				}
			}
		});
		try
		{
			Type_t* L_7 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_7, (&V_2), NULL);
			RuntimeObject* L_8 = V_0;
			RuntimeObject* L_9 = ___0_msg;
			LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074* L_10 = (&V_3);
			il2cpp_codegen_initobj(L_10, sizeof(LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074));
			NullCheck(L_8);
			InterfaceActionInvoker3< uint8_t, RuntimeObject*, LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074* >::Invoke(0, ILogger_tE9BF358A14D675B0B165178D24E3FB9400F34DB1_il2cpp_TypeInfo_var, L_8, 2, L_9, L_10);
			goto IL_0043;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0043:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Info_m2D5ADC65B6E4FCB3406CC039B127C1F197C60B67 (RuntimeObject* ___0_source, RuntimeObject* ___1_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tE9BF358A14D675B0B165178D24E3FB9400F34DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lock_t32A78416DABEA294270289BDD467DFA016411297_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	bool V_2 = false;
	LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->____logger;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0044;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		uint8_t L_2 = ((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->___LogLevel;
		if ((((int32_t)L_2) < ((int32_t)2)))
		{
			goto IL_0044;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (Lock_t32A78416DABEA294270289BDD467DFA016411297_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		V_1 = L_4;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003a:
			{
				{
					bool L_5 = V_2;
					if (!L_5)
					{
						goto IL_0043;
					}
				}
				{
					Type_t* L_6 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_6, NULL);
				}

IL_0043:
				{
					return;
				}
			}
		});
		try
		{
			Type_t* L_7 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_7, (&V_2), NULL);
			RuntimeObject* L_8 = V_0;
			RuntimeObject* L_9 = ___1_msg;
			RuntimeObject* L_10 = ___0_source;
			LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074 L_11;
			memset((&L_11), 0, sizeof(L_11));
			LogContext__ctor_mAD9FADE06711B00C3048C6215B0E88C5AFCD9E27((&L_11), (String_t*)NULL, L_10, NULL);
			V_3 = L_11;
			NullCheck(L_8);
			InterfaceActionInvoker3< uint8_t, RuntimeObject*, LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074* >::Invoke(0, ILogger_tE9BF358A14D675B0B165178D24E3FB9400F34DB1_il2cpp_TypeInfo_var, L_8, 2, L_9, (&V_3));
			goto IL_0044;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0044:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Info_m87ECE01CB4FC332F7A549E806F6CC2E31F82246C (RuntimeObject* ___0_sourceProxy, RuntimeObject* ___1_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tE9BF358A14D675B0B165178D24E3FB9400F34DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lock_t32A78416DABEA294270289BDD467DFA016411297_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	bool V_2 = false;
	LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074 V_3;
	memset((&V_3), 0, sizeof(V_3));
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B5_1 = NULL;
	int32_t G_B5_2 = 0;
	RuntimeObject* G_B5_3 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	int32_t G_B4_2 = 0;
	RuntimeObject* G_B4_3 = NULL;
	RuntimeObject* G_B6_0 = NULL;
	RuntimeObject* G_B6_1 = NULL;
	RuntimeObject* G_B6_2 = NULL;
	int32_t G_B6_3 = 0;
	RuntimeObject* G_B6_4 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->____logger;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_004f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		uint8_t L_2 = ((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->___LogLevel;
		if ((((int32_t)L_2) < ((int32_t)2)))
		{
			goto IL_004f;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (Lock_t32A78416DABEA294270289BDD467DFA016411297_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		V_1 = L_4;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0045:
			{
				{
					bool L_5 = V_2;
					if (!L_5)
					{
						goto IL_004e;
					}
				}
				{
					Type_t* L_6 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_6, NULL);
				}

IL_004e:
				{
					return;
				}
			}
		});
		try
		{
			{
				Type_t* L_7 = V_1;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_7, (&V_2), NULL);
				RuntimeObject* L_8 = V_0;
				RuntimeObject* L_9 = ___1_msg;
				RuntimeObject* L_10 = ___0_sourceProxy;
				if (L_10)
				{
					G_B5_0 = NULL;
					G_B5_1 = L_9;
					G_B5_2 = 2;
					G_B5_3 = L_8;
					goto IL_0030_1;
				}
				G_B4_0 = NULL;
				G_B4_1 = L_9;
				G_B4_2 = 2;
				G_B4_3 = L_8;
			}
			{
				G_B6_0 = ((RuntimeObject*)(NULL));
				G_B6_1 = G_B4_0;
				G_B6_2 = G_B4_1;
				G_B6_3 = G_B4_2;
				G_B6_4 = G_B4_3;
				goto IL_0036_1;
			}

IL_0030_1:
			{
				RuntimeObject* L_11 = ___0_sourceProxy;
				NullCheck(L_11);
				RuntimeObject* L_12;
				L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var, L_11);
				G_B6_0 = L_12;
				G_B6_1 = G_B5_0;
				G_B6_2 = G_B5_1;
				G_B6_3 = G_B5_2;
				G_B6_4 = G_B5_3;
			}

IL_0036_1:
			{
				LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074 L_13;
				memset((&L_13), 0, sizeof(L_13));
				LogContext__ctor_mAD9FADE06711B00C3048C6215B0E88C5AFCD9E27((&L_13), (String_t*)G_B6_1, G_B6_0, NULL);
				V_3 = L_13;
				NullCheck(G_B6_4);
				InterfaceActionInvoker3< uint8_t, RuntimeObject*, LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074* >::Invoke(0, ILogger_tE9BF358A14D675B0B165178D24E3FB9400F34DB1_il2cpp_TypeInfo_var, G_B6_4, G_B6_3, G_B6_2, (&V_3));
				goto IL_004f;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_InfoInternal_mF1943A24B9BE704BBD95948F51266F67DBE568AF (RuntimeObject* ___0_msg, String_t* ___1_stream, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tE9BF358A14D675B0B165178D24E3FB9400F34DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lock_t32A78416DABEA294270289BDD467DFA016411297_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	bool V_2 = false;
	LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->____logger;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0044;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		uint8_t L_2 = ((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->___LogLevel;
		if ((((int32_t)L_2) < ((int32_t)2)))
		{
			goto IL_0044;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (Lock_t32A78416DABEA294270289BDD467DFA016411297_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		V_1 = L_4;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003a:
			{
				{
					bool L_5 = V_2;
					if (!L_5)
					{
						goto IL_0043;
					}
				}
				{
					Type_t* L_6 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_6, NULL);
				}

IL_0043:
				{
					return;
				}
			}
		});
		try
		{
			Type_t* L_7 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_7, (&V_2), NULL);
			RuntimeObject* L_8 = V_0;
			RuntimeObject* L_9 = ___0_msg;
			String_t* L_10 = ___1_stream;
			LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074 L_11;
			memset((&L_11), 0, sizeof(L_11));
			LogContext__ctor_mAD9FADE06711B00C3048C6215B0E88C5AFCD9E27((&L_11), L_10, NULL, NULL);
			V_3 = L_11;
			NullCheck(L_8);
			InterfaceActionInvoker3< uint8_t, RuntimeObject*, LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074* >::Invoke(0, ILogger_tE9BF358A14D675B0B165178D24E3FB9400F34DB1_il2cpp_TypeInfo_var, L_8, 2, L_9, (&V_3));
			goto IL_0044;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0044:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_InfoInternalValue_m978412FAAE1CE3D61FFBA0261F28B4D482B2E98B (RuntimeObject* ___0_source, RuntimeObject* ___1_msg, String_t* ___2_stream, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tE9BF358A14D675B0B165178D24E3FB9400F34DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lock_t32A78416DABEA294270289BDD467DFA016411297_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	bool V_2 = false;
	LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->____logger;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0044;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		uint8_t L_2 = ((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->___LogLevel;
		if ((((int32_t)L_2) < ((int32_t)2)))
		{
			goto IL_0044;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (Lock_t32A78416DABEA294270289BDD467DFA016411297_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		V_1 = L_4;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003a:
			{
				{
					bool L_5 = V_2;
					if (!L_5)
					{
						goto IL_0043;
					}
				}
				{
					Type_t* L_6 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_6, NULL);
				}

IL_0043:
				{
					return;
				}
			}
		});
		try
		{
			Type_t* L_7 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_7, (&V_2), NULL);
			RuntimeObject* L_8 = V_0;
			RuntimeObject* L_9 = ___1_msg;
			String_t* L_10 = ___2_stream;
			RuntimeObject* L_11 = ___0_source;
			LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074 L_12;
			memset((&L_12), 0, sizeof(L_12));
			LogContext__ctor_mAD9FADE06711B00C3048C6215B0E88C5AFCD9E27((&L_12), L_10, L_11, NULL);
			V_3 = L_12;
			NullCheck(L_8);
			InterfaceActionInvoker3< uint8_t, RuntimeObject*, LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074* >::Invoke(0, ILogger_tE9BF358A14D675B0B165178D24E3FB9400F34DB1_il2cpp_TypeInfo_var, L_8, 2, L_9, (&V_3));
			goto IL_0044;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0044:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Warn_m87E3E181297CB224BFA282BDFD494619B3D23F49 (RuntimeObject* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tE9BF358A14D675B0B165178D24E3FB9400F34DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lock_t32A78416DABEA294270289BDD467DFA016411297_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	bool V_2 = false;
	LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->____logger;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0043;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		uint8_t L_2 = ((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->___LogLevel;
		if ((((int32_t)L_2) < ((int32_t)1)))
		{
			goto IL_0043;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (Lock_t32A78416DABEA294270289BDD467DFA016411297_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		V_1 = L_4;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{
				{
					bool L_5 = V_2;
					if (!L_5)
					{
						goto IL_0042;
					}
				}
				{
					Type_t* L_6 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_6, NULL);
				}

IL_0042:
				{
					return;
				}
			}
		});
		try
		{
			Type_t* L_7 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_7, (&V_2), NULL);
			RuntimeObject* L_8 = V_0;
			RuntimeObject* L_9 = ___0_msg;
			LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074* L_10 = (&V_3);
			il2cpp_codegen_initobj(L_10, sizeof(LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074));
			NullCheck(L_8);
			InterfaceActionInvoker3< uint8_t, RuntimeObject*, LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074* >::Invoke(0, ILogger_tE9BF358A14D675B0B165178D24E3FB9400F34DB1_il2cpp_TypeInfo_var, L_8, 1, L_9, L_10);
			goto IL_0043;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0043:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Warn_mC15634B0CA8BA36B8334A7454B94AC4F250B6390 (RuntimeObject* ___0_source, RuntimeObject* ___1_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tE9BF358A14D675B0B165178D24E3FB9400F34DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lock_t32A78416DABEA294270289BDD467DFA016411297_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	bool V_2 = false;
	LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->____logger;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0044;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		uint8_t L_2 = ((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->___LogLevel;
		if ((((int32_t)L_2) < ((int32_t)1)))
		{
			goto IL_0044;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (Lock_t32A78416DABEA294270289BDD467DFA016411297_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		V_1 = L_4;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003a:
			{
				{
					bool L_5 = V_2;
					if (!L_5)
					{
						goto IL_0043;
					}
				}
				{
					Type_t* L_6 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_6, NULL);
				}

IL_0043:
				{
					return;
				}
			}
		});
		try
		{
			Type_t* L_7 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_7, (&V_2), NULL);
			RuntimeObject* L_8 = V_0;
			RuntimeObject* L_9 = ___1_msg;
			RuntimeObject* L_10 = ___0_source;
			LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074 L_11;
			memset((&L_11), 0, sizeof(L_11));
			LogContext__ctor_mAD9FADE06711B00C3048C6215B0E88C5AFCD9E27((&L_11), (String_t*)NULL, L_10, NULL);
			V_3 = L_11;
			NullCheck(L_8);
			InterfaceActionInvoker3< uint8_t, RuntimeObject*, LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074* >::Invoke(0, ILogger_tE9BF358A14D675B0B165178D24E3FB9400F34DB1_il2cpp_TypeInfo_var, L_8, 1, L_9, (&V_3));
			goto IL_0044;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0044:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Warn_mE2F04F65BA41789B7C8D01C35DA0AF6CD03CDD82 (RuntimeObject* ___0_sourceProxy, RuntimeObject* ___1_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tE9BF358A14D675B0B165178D24E3FB9400F34DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lock_t32A78416DABEA294270289BDD467DFA016411297_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	bool V_2 = false;
	LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074 V_3;
	memset((&V_3), 0, sizeof(V_3));
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B5_1 = NULL;
	int32_t G_B5_2 = 0;
	RuntimeObject* G_B5_3 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	int32_t G_B4_2 = 0;
	RuntimeObject* G_B4_3 = NULL;
	RuntimeObject* G_B6_0 = NULL;
	RuntimeObject* G_B6_1 = NULL;
	RuntimeObject* G_B6_2 = NULL;
	int32_t G_B6_3 = 0;
	RuntimeObject* G_B6_4 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->____logger;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_004f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		uint8_t L_2 = ((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->___LogLevel;
		if ((((int32_t)L_2) < ((int32_t)1)))
		{
			goto IL_004f;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (Lock_t32A78416DABEA294270289BDD467DFA016411297_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		V_1 = L_4;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0045:
			{
				{
					bool L_5 = V_2;
					if (!L_5)
					{
						goto IL_004e;
					}
				}
				{
					Type_t* L_6 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_6, NULL);
				}

IL_004e:
				{
					return;
				}
			}
		});
		try
		{
			{
				Type_t* L_7 = V_1;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_7, (&V_2), NULL);
				RuntimeObject* L_8 = V_0;
				RuntimeObject* L_9 = ___1_msg;
				RuntimeObject* L_10 = ___0_sourceProxy;
				if (L_10)
				{
					G_B5_0 = NULL;
					G_B5_1 = L_9;
					G_B5_2 = 1;
					G_B5_3 = L_8;
					goto IL_0030_1;
				}
				G_B4_0 = NULL;
				G_B4_1 = L_9;
				G_B4_2 = 1;
				G_B4_3 = L_8;
			}
			{
				G_B6_0 = ((RuntimeObject*)(NULL));
				G_B6_1 = G_B4_0;
				G_B6_2 = G_B4_1;
				G_B6_3 = G_B4_2;
				G_B6_4 = G_B4_3;
				goto IL_0036_1;
			}

IL_0030_1:
			{
				RuntimeObject* L_11 = ___0_sourceProxy;
				NullCheck(L_11);
				RuntimeObject* L_12;
				L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var, L_11);
				G_B6_0 = L_12;
				G_B6_1 = G_B5_0;
				G_B6_2 = G_B5_1;
				G_B6_3 = G_B5_2;
				G_B6_4 = G_B5_3;
			}

IL_0036_1:
			{
				LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074 L_13;
				memset((&L_13), 0, sizeof(L_13));
				LogContext__ctor_mAD9FADE06711B00C3048C6215B0E88C5AFCD9E27((&L_13), (String_t*)G_B6_1, G_B6_0, NULL);
				V_3 = L_13;
				NullCheck(G_B6_4);
				InterfaceActionInvoker3< uint8_t, RuntimeObject*, LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074* >::Invoke(0, ILogger_tE9BF358A14D675B0B165178D24E3FB9400F34DB1_il2cpp_TypeInfo_var, G_B6_4, G_B6_3, G_B6_2, (&V_3));
				goto IL_004f;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_WarnInternal_mB6CDB22C09F62936E531E19CDE3ED5F3F7EB05A5 (RuntimeObject* ___0_msg, String_t* ___1_stream, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tE9BF358A14D675B0B165178D24E3FB9400F34DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lock_t32A78416DABEA294270289BDD467DFA016411297_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	bool V_2 = false;
	LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->____logger;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0044;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		uint8_t L_2 = ((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->___LogLevel;
		if ((((int32_t)L_2) < ((int32_t)1)))
		{
			goto IL_0044;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (Lock_t32A78416DABEA294270289BDD467DFA016411297_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		V_1 = L_4;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003a:
			{
				{
					bool L_5 = V_2;
					if (!L_5)
					{
						goto IL_0043;
					}
				}
				{
					Type_t* L_6 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_6, NULL);
				}

IL_0043:
				{
					return;
				}
			}
		});
		try
		{
			Type_t* L_7 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_7, (&V_2), NULL);
			RuntimeObject* L_8 = V_0;
			RuntimeObject* L_9 = ___0_msg;
			String_t* L_10 = ___1_stream;
			LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074 L_11;
			memset((&L_11), 0, sizeof(L_11));
			LogContext__ctor_mAD9FADE06711B00C3048C6215B0E88C5AFCD9E27((&L_11), L_10, NULL, NULL);
			V_3 = L_11;
			NullCheck(L_8);
			InterfaceActionInvoker3< uint8_t, RuntimeObject*, LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074* >::Invoke(0, ILogger_tE9BF358A14D675B0B165178D24E3FB9400F34DB1_il2cpp_TypeInfo_var, L_8, 1, L_9, (&V_3));
			goto IL_0044;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0044:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_WarnInternalValue_m9A39523DA34ADFC990ECD5E90D1B500CBDC8F5A2 (RuntimeObject* ___0_source, RuntimeObject* ___1_msg, String_t* ___2_stream, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tE9BF358A14D675B0B165178D24E3FB9400F34DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lock_t32A78416DABEA294270289BDD467DFA016411297_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	bool V_2 = false;
	LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->____logger;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0044;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		uint8_t L_2 = ((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->___LogLevel;
		if ((((int32_t)L_2) < ((int32_t)1)))
		{
			goto IL_0044;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (Lock_t32A78416DABEA294270289BDD467DFA016411297_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		V_1 = L_4;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003a:
			{
				{
					bool L_5 = V_2;
					if (!L_5)
					{
						goto IL_0043;
					}
				}
				{
					Type_t* L_6 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_6, NULL);
				}

IL_0043:
				{
					return;
				}
			}
		});
		try
		{
			Type_t* L_7 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_7, (&V_2), NULL);
			RuntimeObject* L_8 = V_0;
			RuntimeObject* L_9 = ___1_msg;
			String_t* L_10 = ___2_stream;
			RuntimeObject* L_11 = ___0_source;
			LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074 L_12;
			memset((&L_12), 0, sizeof(L_12));
			LogContext__ctor_mAD9FADE06711B00C3048C6215B0E88C5AFCD9E27((&L_12), L_10, L_11, NULL);
			V_3 = L_12;
			NullCheck(L_8);
			InterfaceActionInvoker3< uint8_t, RuntimeObject*, LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074* >::Invoke(0, ILogger_tE9BF358A14D675B0B165178D24E3FB9400F34DB1_il2cpp_TypeInfo_var, L_8, 1, L_9, (&V_3));
			goto IL_0044;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0044:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Error_mF2B91AB1906898C0FB8817C95D0E94221CE1EABE (RuntimeObject* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tE9BF358A14D675B0B165178D24E3FB9400F34DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lock_t32A78416DABEA294270289BDD467DFA016411297_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	bool V_2 = false;
	LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->____logger;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0043;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		uint8_t L_2 = ((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->___LogLevel;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0043;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (Lock_t32A78416DABEA294270289BDD467DFA016411297_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		V_1 = L_4;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{
				{
					bool L_5 = V_2;
					if (!L_5)
					{
						goto IL_0042;
					}
				}
				{
					Type_t* L_6 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_6, NULL);
				}

IL_0042:
				{
					return;
				}
			}
		});
		try
		{
			Type_t* L_7 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_7, (&V_2), NULL);
			RuntimeObject* L_8 = V_0;
			RuntimeObject* L_9 = ___0_msg;
			LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074* L_10 = (&V_3);
			il2cpp_codegen_initobj(L_10, sizeof(LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074));
			NullCheck(L_8);
			InterfaceActionInvoker3< uint8_t, RuntimeObject*, LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074* >::Invoke(0, ILogger_tE9BF358A14D675B0B165178D24E3FB9400F34DB1_il2cpp_TypeInfo_var, L_8, 0, L_9, L_10);
			goto IL_0043;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0043:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Error_m7F9072C1FAD6BE612C5304207004762617E16371 (RuntimeObject* ___0_source, RuntimeObject* ___1_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tE9BF358A14D675B0B165178D24E3FB9400F34DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lock_t32A78416DABEA294270289BDD467DFA016411297_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	bool V_2 = false;
	LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->____logger;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0044;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		uint8_t L_2 = ((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->___LogLevel;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (Lock_t32A78416DABEA294270289BDD467DFA016411297_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		V_1 = L_4;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003a:
			{
				{
					bool L_5 = V_2;
					if (!L_5)
					{
						goto IL_0043;
					}
				}
				{
					Type_t* L_6 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_6, NULL);
				}

IL_0043:
				{
					return;
				}
			}
		});
		try
		{
			Type_t* L_7 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_7, (&V_2), NULL);
			RuntimeObject* L_8 = V_0;
			RuntimeObject* L_9 = ___1_msg;
			RuntimeObject* L_10 = ___0_source;
			LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074 L_11;
			memset((&L_11), 0, sizeof(L_11));
			LogContext__ctor_mAD9FADE06711B00C3048C6215B0E88C5AFCD9E27((&L_11), (String_t*)NULL, L_10, NULL);
			V_3 = L_11;
			NullCheck(L_8);
			InterfaceActionInvoker3< uint8_t, RuntimeObject*, LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074* >::Invoke(0, ILogger_tE9BF358A14D675B0B165178D24E3FB9400F34DB1_il2cpp_TypeInfo_var, L_8, 0, L_9, (&V_3));
			goto IL_0044;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0044:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Error_m61B8BD6803FF2A478E249EC9348CD1D760E06EEC (RuntimeObject* ___0_sourceProxy, RuntimeObject* ___1_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tE9BF358A14D675B0B165178D24E3FB9400F34DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lock_t32A78416DABEA294270289BDD467DFA016411297_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	bool V_2 = false;
	LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074 V_3;
	memset((&V_3), 0, sizeof(V_3));
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B5_1 = NULL;
	int32_t G_B5_2 = 0;
	RuntimeObject* G_B5_3 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	int32_t G_B4_2 = 0;
	RuntimeObject* G_B4_3 = NULL;
	RuntimeObject* G_B6_0 = NULL;
	RuntimeObject* G_B6_1 = NULL;
	RuntimeObject* G_B6_2 = NULL;
	int32_t G_B6_3 = 0;
	RuntimeObject* G_B6_4 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->____logger;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_004f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		uint8_t L_2 = ((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->___LogLevel;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (Lock_t32A78416DABEA294270289BDD467DFA016411297_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		V_1 = L_4;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0045:
			{
				{
					bool L_5 = V_2;
					if (!L_5)
					{
						goto IL_004e;
					}
				}
				{
					Type_t* L_6 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_6, NULL);
				}

IL_004e:
				{
					return;
				}
			}
		});
		try
		{
			{
				Type_t* L_7 = V_1;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_7, (&V_2), NULL);
				RuntimeObject* L_8 = V_0;
				RuntimeObject* L_9 = ___1_msg;
				RuntimeObject* L_10 = ___0_sourceProxy;
				if (L_10)
				{
					G_B5_0 = NULL;
					G_B5_1 = L_9;
					G_B5_2 = 0;
					G_B5_3 = L_8;
					goto IL_0030_1;
				}
				G_B4_0 = NULL;
				G_B4_1 = L_9;
				G_B4_2 = 0;
				G_B4_3 = L_8;
			}
			{
				G_B6_0 = ((RuntimeObject*)(NULL));
				G_B6_1 = G_B4_0;
				G_B6_2 = G_B4_1;
				G_B6_3 = G_B4_2;
				G_B6_4 = G_B4_3;
				goto IL_0036_1;
			}

IL_0030_1:
			{
				RuntimeObject* L_11 = ___0_sourceProxy;
				NullCheck(L_11);
				RuntimeObject* L_12;
				L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, ILogSourceProxy_t1A89665BB88954672BEF407492105CAE5FBF8024_il2cpp_TypeInfo_var, L_11);
				G_B6_0 = L_12;
				G_B6_1 = G_B5_0;
				G_B6_2 = G_B5_1;
				G_B6_3 = G_B5_2;
				G_B6_4 = G_B5_3;
			}

IL_0036_1:
			{
				LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074 L_13;
				memset((&L_13), 0, sizeof(L_13));
				LogContext__ctor_mAD9FADE06711B00C3048C6215B0E88C5AFCD9E27((&L_13), (String_t*)G_B6_1, G_B6_0, NULL);
				V_3 = L_13;
				NullCheck(G_B6_4);
				InterfaceActionInvoker3< uint8_t, RuntimeObject*, LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074* >::Invoke(0, ILogger_tE9BF358A14D675B0B165178D24E3FB9400F34DB1_il2cpp_TypeInfo_var, G_B6_4, G_B6_3, G_B6_2, (&V_3));
				goto IL_004f;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_ErrorInternal_mA69CCBB3B43000476141642844033FAB5E5CCDD5 (RuntimeObject* ___0_msg, String_t* ___1_stream, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tE9BF358A14D675B0B165178D24E3FB9400F34DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lock_t32A78416DABEA294270289BDD467DFA016411297_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	bool V_2 = false;
	LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->____logger;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0044;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		uint8_t L_2 = ((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->___LogLevel;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (Lock_t32A78416DABEA294270289BDD467DFA016411297_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		V_1 = L_4;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003a:
			{
				{
					bool L_5 = V_2;
					if (!L_5)
					{
						goto IL_0043;
					}
				}
				{
					Type_t* L_6 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_6, NULL);
				}

IL_0043:
				{
					return;
				}
			}
		});
		try
		{
			Type_t* L_7 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_7, (&V_2), NULL);
			RuntimeObject* L_8 = V_0;
			RuntimeObject* L_9 = ___0_msg;
			String_t* L_10 = ___1_stream;
			LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074 L_11;
			memset((&L_11), 0, sizeof(L_11));
			LogContext__ctor_mAD9FADE06711B00C3048C6215B0E88C5AFCD9E27((&L_11), L_10, NULL, NULL);
			V_3 = L_11;
			NullCheck(L_8);
			InterfaceActionInvoker3< uint8_t, RuntimeObject*, LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074* >::Invoke(0, ILogger_tE9BF358A14D675B0B165178D24E3FB9400F34DB1_il2cpp_TypeInfo_var, L_8, 0, L_9, (&V_3));
			goto IL_0044;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0044:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_ErrorInternalValue_mEDB2CA84DE5A1C1225F63F2989C7B3EBE477B477 (RuntimeObject* ___0_source, RuntimeObject* ___1_msg, String_t* ___2_stream, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tE9BF358A14D675B0B165178D24E3FB9400F34DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lock_t32A78416DABEA294270289BDD467DFA016411297_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	bool V_2 = false;
	LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->____logger;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0044;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		uint8_t L_2 = ((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->___LogLevel;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (Lock_t32A78416DABEA294270289BDD467DFA016411297_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		V_1 = L_4;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003a:
			{
				{
					bool L_5 = V_2;
					if (!L_5)
					{
						goto IL_0043;
					}
				}
				{
					Type_t* L_6 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_6, NULL);
				}

IL_0043:
				{
					return;
				}
			}
		});
		try
		{
			Type_t* L_7 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_7, (&V_2), NULL);
			RuntimeObject* L_8 = V_0;
			RuntimeObject* L_9 = ___1_msg;
			String_t* L_10 = ___2_stream;
			RuntimeObject* L_11 = ___0_source;
			LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074 L_12;
			memset((&L_12), 0, sizeof(L_12));
			LogContext__ctor_mAD9FADE06711B00C3048C6215B0E88C5AFCD9E27((&L_12), L_10, L_11, NULL);
			V_3 = L_12;
			NullCheck(L_8);
			InterfaceActionInvoker3< uint8_t, RuntimeObject*, LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074* >::Invoke(0, ILogger_tE9BF358A14D675B0B165178D24E3FB9400F34DB1_il2cpp_TypeInfo_var, L_8, 0, L_9, (&V_3));
			goto IL_0044;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0044:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log__cctor_m5AA973FCC7A95742E9D9C302127E11A64648D3D5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_StaticFields*)il2cpp_codegen_static_fields_for(Log_tA23D7C4C428EA4C21C3A0E26A0B7D87D6D707E99_il2cpp_TypeInfo_var))->___LogLevel = 3;
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
IL2CPP_EXTERN_C void LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074_marshal_pinvoke(const LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074& unmarshaled, LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074_marshaled_pinvoke& marshaled)
{
	marshaled.___Prefix = il2cpp_codegen_marshal_string(unmarshaled.___Prefix);
	if (unmarshaled.___Source != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___Source))
		{
			marshaled.___Source = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.___Source));
			(marshaled.___Source)->AddRef();
		}
		else
		{
			marshaled.___Source = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.___Source);
		}
	}
	else
	{
		marshaled.___Source = NULL;
	}
}
IL2CPP_EXTERN_C void LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074_marshal_pinvoke_back(const LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074_marshaled_pinvoke& marshaled, LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___Prefix = il2cpp_codegen_marshal_string_result(marshaled.___Prefix);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Prefix), (void*)il2cpp_codegen_marshal_string_result(marshaled.___Prefix));
	if (marshaled.___Source != NULL)
	{
		unmarshaled.___Source = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___Source, Il2CppComObject_il2cpp_TypeInfo_var);
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Source), (void*)il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___Source, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___Source))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.___Source), Il2CppIUnknown::IID, marshaled.___Source);
		}
	}
	else
	{
		unmarshaled.___Source = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Source), (void*)NULL);
	}
}
IL2CPP_EXTERN_C void LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074_marshal_pinvoke_cleanup(LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___Prefix);
	marshaled.___Prefix = NULL;
	if (marshaled.___Source != NULL)
	{
		(marshaled.___Source)->Release();
		marshaled.___Source = NULL;
	}
}
IL2CPP_EXTERN_C void LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074_marshal_com(const LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074& unmarshaled, LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074_marshaled_com& marshaled)
{
	marshaled.___Prefix = il2cpp_codegen_marshal_bstring(unmarshaled.___Prefix);
	if (unmarshaled.___Source != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___Source))
		{
			marshaled.___Source = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.___Source));
			(marshaled.___Source)->AddRef();
		}
		else
		{
			marshaled.___Source = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.___Source);
		}
	}
	else
	{
		marshaled.___Source = NULL;
	}
}
IL2CPP_EXTERN_C void LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074_marshal_com_back(const LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074_marshaled_com& marshaled, LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___Prefix = il2cpp_codegen_marshal_bstring_result(marshaled.___Prefix);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Prefix), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___Prefix));
	if (marshaled.___Source != NULL)
	{
		unmarshaled.___Source = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___Source, Il2CppComObject_il2cpp_TypeInfo_var);
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Source), (void*)il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___Source, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___Source))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.___Source), Il2CppIUnknown::IID, marshaled.___Source);
		}
	}
	else
	{
		unmarshaled.___Source = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Source), (void*)NULL);
	}
}
IL2CPP_EXTERN_C void LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074_marshal_com_cleanup(LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___Prefix);
	marshaled.___Prefix = NULL;
	if (marshaled.___Source != NULL)
	{
		(marshaled.___Source)->Release();
		marshaled.___Source = NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogContext__ctor_mAD9FADE06711B00C3048C6215B0E88C5AFCD9E27 (LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074* __this, String_t* ___0_prefix, RuntimeObject* ___1_source, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_prefix;
		__this->___Prefix = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Prefix), (void*)L_0);
		RuntimeObject* L_1 = ___1_source;
		__this->___Source = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Source), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void LogContext__ctor_mAD9FADE06711B00C3048C6215B0E88C5AFCD9E27_AdjustorThunk (RuntimeObject* __this, String_t* ___0_prefix, RuntimeObject* ___1_source, const RuntimeMethod* method)
{
	LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074*>(__this + _offset);
	LogContext__ctor_mAD9FADE06711B00C3048C6215B0E88C5AFCD9E27(_thisAdjusted, ___0_prefix, ___1_source, method);
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
IL2CPP_EXTERN_C void DumpDefferedClass_tDA78A888584277A38739EF1E7518684767C3CD1B_marshal_pinvoke(const DumpDefferedClass_tDA78A888584277A38739EF1E7518684767C3CD1B& unmarshaled, DumpDefferedClass_tDA78A888584277A38739EF1E7518684767C3CD1B_marshaled_pinvoke& marshaled)
{
	Exception_t* ___ObjException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Obj' of type 'DumpDefferedClass': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___ObjException, NULL);
}
IL2CPP_EXTERN_C void DumpDefferedClass_tDA78A888584277A38739EF1E7518684767C3CD1B_marshal_pinvoke_back(const DumpDefferedClass_tDA78A888584277A38739EF1E7518684767C3CD1B_marshaled_pinvoke& marshaled, DumpDefferedClass_tDA78A888584277A38739EF1E7518684767C3CD1B& unmarshaled)
{
	Exception_t* ___ObjException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Obj' of type 'DumpDefferedClass': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___ObjException, NULL);
}
IL2CPP_EXTERN_C void DumpDefferedClass_tDA78A888584277A38739EF1E7518684767C3CD1B_marshal_pinvoke_cleanup(DumpDefferedClass_tDA78A888584277A38739EF1E7518684767C3CD1B_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void DumpDefferedClass_tDA78A888584277A38739EF1E7518684767C3CD1B_marshal_com(const DumpDefferedClass_tDA78A888584277A38739EF1E7518684767C3CD1B& unmarshaled, DumpDefferedClass_tDA78A888584277A38739EF1E7518684767C3CD1B_marshaled_com& marshaled)
{
	Exception_t* ___ObjException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Obj' of type 'DumpDefferedClass': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___ObjException, NULL);
}
IL2CPP_EXTERN_C void DumpDefferedClass_tDA78A888584277A38739EF1E7518684767C3CD1B_marshal_com_back(const DumpDefferedClass_tDA78A888584277A38739EF1E7518684767C3CD1B_marshaled_com& marshaled, DumpDefferedClass_tDA78A888584277A38739EF1E7518684767C3CD1B& unmarshaled)
{
	Exception_t* ___ObjException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Obj' of type 'DumpDefferedClass': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___ObjException, NULL);
}
IL2CPP_EXTERN_C void DumpDefferedClass_tDA78A888584277A38739EF1E7518684767C3CD1B_marshal_com_cleanup(DumpDefferedClass_tDA78A888584277A38739EF1E7518684767C3CD1B_marshaled_com& marshaled)
{
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DumpDefferedClass__ctor_m964526ADC6CB773148C2F5C5B6D6D05D7F779E08 (DumpDefferedClass_tDA78A888584277A38739EF1E7518684767C3CD1B* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		__this->___Obj = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Obj), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void DumpDefferedClass__ctor_m964526ADC6CB773148C2F5C5B6D6D05D7F779E08_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	DumpDefferedClass_tDA78A888584277A38739EF1E7518684767C3CD1B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DumpDefferedClass_tDA78A888584277A38739EF1E7518684767C3CD1B*>(__this + _offset);
	DumpDefferedClass__ctor_m964526ADC6CB773148C2F5C5B6D6D05D7F779E08_inline(_thisAdjusted, ___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DumpDefferedClass_ToString_m63E428B6AAD02097A6097E104BB9D20171B975B2 (DumpDefferedClass_tDA78A888584277A38739EF1E7518684767C3CD1B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogDumpable_tF7971A8D248BF21B2B429C1D840994D662C28D8A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->___Obj;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		StringBuilder_t* L_1 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_1, NULL);
		V_0 = L_1;
		RuntimeObject* L_2 = __this->___Obj;
		StringBuilder_t* L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< StringBuilder_t* >::Invoke(0, ILogDumpable_tF7971A8D248BF21B2B429C1D840994D662C28D8A_il2cpp_TypeInfo_var, L_2, L_3);
		StringBuilder_t* L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_4);
		return L_5;
	}

IL_0021:
	{
		return _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
	}
}
IL2CPP_EXTERN_C  String_t* DumpDefferedClass_ToString_m63E428B6AAD02097A6097E104BB9D20171B975B2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DumpDefferedClass_tDA78A888584277A38739EF1E7518684767C3CD1B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DumpDefferedClass_tDA78A888584277A38739EF1E7518684767C3CD1B*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = DumpDefferedClass_ToString_m63E428B6AAD02097A6097E104BB9D20171B975B2(_thisAdjusted, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextWriterLogger__ctor_m30174F54AD8645CF5E35BC03C0EFFCADDF2DF75A (TextWriterLogger_tEC0B61D502EEEDF71A51BE83B742B57953622D6D* __this, TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___0_writer, bool ___1_disposeWriter, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		__this->____builder = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____builder), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_1 = ___0_writer;
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral638C5441E8427B2B9D2C941DDBF958579B5FE3F0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TextWriterLogger__ctor_m30174F54AD8645CF5E35BC03C0EFFCADDF2DF75A_RuntimeMethod_var)));
	}

IL_001f:
	{
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_3 = ___0_writer;
		__this->____writer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____writer), (void*)L_3);
		bool L_4 = ___1_disposeWriter;
		__this->____disposeWriter = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextWriterLogger_Dispose_m4452495BBE9EB0F8F9FC5D0B46B33B89FD9759D1 (TextWriterLogger_tEC0B61D502EEEDF71A51BE83B742B57953622D6D* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____disposeWriter;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_1 = __this->____writer;
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_2 = __this->____writer;
		__this->____writer = (TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____writer), (void*)(TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3*)NULL);
		NullCheck(L_2);
		TextWriter_Dispose_m5B2CA4D250335AB11031AFC7F202AA5B7A70C4D7(L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextWriterLogger_Log_mA8D7A5EA485D173EC8F26D483F16A1F12DF6132D (TextWriterLogger_tEC0B61D502EEEDF71A51BE83B742B57953622D6D* __this, uint8_t ___0_logType, RuntimeObject* ___1_message, LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074* ___2_logContext, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7CC4528988100434DC8BA5B4A713FE36DB8ECD9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF1E8303D9E2C13EE209783E9D0F5995965603E2);
		s_Il2CppMethodInitialized = true;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0081:
			{
				StringBuilder_t* L_0 = __this->____builder;
				NullCheck(L_0);
				StringBuilder_t* L_1;
				L_1 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_0, NULL);
				return;
			}
		});
		try
		{
			{
				uint8_t L_2 = ___0_logType;
				if ((!(((uint32_t)L_2) == ((uint32_t)3))))
				{
					goto IL_0017_1;
				}
			}
			{
				StringBuilder_t* L_3 = __this->____builder;
				NullCheck(L_3);
				StringBuilder_t* L_4;
				L_4 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_3, _stringLiteralD7CC4528988100434DC8BA5B4A713FE36DB8ECD9, NULL);
				goto IL_002c_1;
			}

IL_0017_1:
			{
				uint8_t L_5 = ___0_logType;
				if ((!(((uint32_t)L_5) == ((uint32_t)4))))
				{
					goto IL_002c_1;
				}
			}
			{
				StringBuilder_t* L_6 = __this->____builder;
				NullCheck(L_6);
				StringBuilder_t* L_7;
				L_7 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_6, _stringLiteralFF1E8303D9E2C13EE209783E9D0F5995965603E2, NULL);
			}

IL_002c_1:
			{
				LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074* L_8 = ___2_logContext;
				String_t* L_9 = L_8->___Prefix;
				bool L_10;
				L_10 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_9, NULL);
				if (L_10)
				{
					goto IL_005c_1;
				}
			}
			{
				StringBuilder_t* L_11 = __this->____builder;
				LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074* L_12 = ___2_logContext;
				String_t* L_13 = L_12->___Prefix;
				NullCheck(L_11);
				StringBuilder_t* L_14;
				L_14 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_11, L_13, NULL);
				StringBuilder_t* L_15 = __this->____builder;
				NullCheck(L_15);
				StringBuilder_t* L_16;
				L_16 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, _stringLiteral1168E92C164109D6220480DEDA987085B2A21155, NULL);
			}

IL_005c_1:
			{
				StringBuilder_t* L_17 = __this->____builder;
				RuntimeObject* L_18 = ___1_message;
				NullCheck(L_17);
				StringBuilder_t* L_19;
				L_19 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_17, L_18, NULL);
				TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_20 = __this->____writer;
				StringBuilder_t* L_21 = __this->____builder;
				NullCheck(L_21);
				String_t* L_22;
				L_22 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_21);
				NullCheck(L_20);
				VirtualActionInvoker1< String_t* >::Invoke(20, L_20, L_22);
				goto IL_008e;
			}
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextWriterLogger_LogException_mF9959EC6545E0FBBE1323520562D904FAC8F130A (TextWriterLogger_tEC0B61D502EEEDF71A51BE83B742B57953622D6D* __this, Exception_t* ___0_ex, LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074* ___1_logContext, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004d:
			{
				StringBuilder_t* L_0 = __this->____builder;
				NullCheck(L_0);
				StringBuilder_t* L_1;
				L_1 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_0, NULL);
				return;
			}
		});
		try
		{
			StringBuilder_t* L_2 = __this->____builder;
			LogContext_t6521DAC4A96781740628C4B07615C5CC8AEBE074* L_3 = ___1_logContext;
			String_t* L_4 = L_3->___Prefix;
			NullCheck(L_2);
			StringBuilder_t* L_5;
			L_5 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_2, L_4, NULL);
			StringBuilder_t* L_6 = __this->____builder;
			Exception_t* L_7 = ___0_ex;
			NullCheck(L_7);
			String_t* L_8;
			L_8 = VirtualFuncInvoker0< String_t* >::Invoke(5, L_7);
			NullCheck(L_6);
			StringBuilder_t* L_9;
			L_9 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_6, L_8, NULL);
			TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_10 = __this->____writer;
			StringBuilder_t* L_11 = __this->____builder;
			NullCheck(L_11);
			String_t* L_12;
			L_12 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_11);
			NullCheck(L_10);
			VirtualActionInvoker1< String_t* >::Invoke(20, L_10, L_12);
			TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_13 = __this->____writer;
			Exception_t* L_14 = ___0_ex;
			NullCheck(L_14);
			String_t* L_15;
			L_15 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_14);
			NullCheck(L_13);
			VirtualActionInvoker1< String_t* >::Invoke(20, L_13, L_15);
			goto IL_005a;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005a:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* Console_get_Out_m73E553D219D64916F2AA7CDC41568968CB055F1E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_0 = ((Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_StaticFields*)il2cpp_codegen_static_fields_for(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var))->___stdout;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_c, const RuntimeMethod* method) 
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_c;
		float L_1 = L_0.___r;
		float L_2;
		L_2 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_1, NULL);
		float L_3;
		L_3 = bankers_roundf(((float)il2cpp_codegen_multiply(L_2, (255.0f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___0_c;
		float L_5 = L_4.___g;
		float L_6;
		L_6 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_5, NULL);
		float L_7;
		L_7 = bankers_roundf(((float)il2cpp_codegen_multiply(L_6, (255.0f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___0_c;
		float L_9 = L_8.___b;
		float L_10;
		L_10 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_9, NULL);
		float L_11;
		L_11 = bankers_roundf(((float)il2cpp_codegen_multiply(L_10, (255.0f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = ___0_c;
		float L_13 = L_12.___a;
		float L_14;
		L_14 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_13, NULL);
		float L_15;
		L_15 = bankers_roundf(((float)il2cpp_codegen_multiply(L_14, (255.0f))));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_16;
		memset((&L_16), 0, sizeof(L_16));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_16), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_3), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_7), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_11), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_15), NULL);
		V_0 = L_16;
		goto IL_0065;
	}

IL_0065:
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___0_r, uint8_t ___1_g, uint8_t ___2_b, uint8_t ___3_a, const RuntimeMethod* method) 
{
	{
		__this->___rgba = 0;
		uint8_t L_0 = ___0_r;
		__this->___r = L_0;
		uint8_t L_1 = ___1_g;
		__this->___g = L_1;
		uint8_t L_2 = ___2_b;
		__this->___b = L_2;
		uint8_t L_3 = ___3_a;
		__this->___a = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Debug_get_unityLogger_m4FDE4D41C187123244FE13124DA636BB50C9C1E1_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticFields*)il2cpp_codegen_static_fields_for(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var))->___s_Logger;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DumpDefferedClass__ctor_m964526ADC6CB773148C2F5C5B6D6D05D7F779E08_inline (DumpDefferedClass_tDA78A888584277A38739EF1E7518684767C3CD1B* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		__this->___Obj = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Obj), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___0_value;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
