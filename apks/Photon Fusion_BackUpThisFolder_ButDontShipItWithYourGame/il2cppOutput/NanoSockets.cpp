#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>



struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct Exception_t;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct StringBuilder_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* Address_t0C64043894DC43092287210A04CAD369B08FDBF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral557FB10169DCBA7723885B2E54E8A0318602F069;
IL2CPP_EXTERN_C String_t* _stringLiteral668A0814576A84F2A858D64078CA645AFEC4008A;
IL2CPP_EXTERN_C String_t* _stringLiteral76C3D4024DE9EE847070E35CC5A197DC21F66FEE;
IL2CPP_EXTERN_C String_t* _stringLiteralDFDA65A58F314AF29AAED48115FBE1675B6D5C8B;
IL2CPP_EXTERN_C String_t* _stringLiteralE71CEA2F4DC92DEB85E44E625E13F0973AA40B52;
IL2CPP_EXTERN_C const RuntimeMethod* Address_CreateFromIpPort_m7C09770345C1669CFD0DDC5A7F3EADE7C273CA4C_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_t4BE65B6F1710D457344CD3459B2FF2272C0F4D0E 
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
struct UDP_t8F24AAE5C64860650E21D6AB8397B4FE1DF09038  : public RuntimeObject
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
#pragma pack(push, tp, 1)
struct Address_t0C64043894DC43092287210A04CAD369B08FDBF3 
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
					uint64_t ____address0;
				};
				#pragma pack(pop, tp)
				struct
				{
					uint64_t ____address0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ____address1_OffsetPadding[8];
					uint64_t ____address1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ____address1_OffsetPadding_forAlignmentOnly[8];
					uint64_t ____address1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___Port_OffsetPadding[16];
					uint16_t ___Port;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___Port_OffsetPadding_forAlignmentOnly[16];
					uint16_t ___Port_forAlignmentOnly;
				};
			};
		};
		uint8_t Address_t0C64043894DC43092287210A04CAD369B08FDBF3__padding[24];
	};
};
#pragma pack(pop, tp)
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
struct Socket_t46CD8CA395215449BFCC033F0B1B802E1DC42CF6 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___handle;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___handle_forAlignmentOnly;
		};
	};
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
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
struct Status_t45C4B4BBD57041D59A667D0EE4709923472BB5C9 
{
	int32_t ___value__;
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
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};



IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Socket_get_IsCreated_m808C27EDEF63277B4567C6E4AE8BE8AF1772A701 (Socket_t46CD8CA395215449BFCC033F0B1B802E1DC42CF6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Address_Equals_m19F1A04FCFA04C181170EFE7B99B12A27FA2C6F6 (Address_t0C64043894DC43092287210A04CAD369B08FDBF3* __this, Address_t0C64043894DC43092287210A04CAD369B08FDBF3 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Address_Equals_mDDBFB7BB02D6A7AF30ECBC0637B7CE220B7AC282 (Address_t0C64043894DC43092287210A04CAD369B08FDBF3* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92 (uint64_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200 (uint16_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Address_GetHashCode_m40F507481CB45DC401163A00C2C7DA21348A4D5F (Address_t0C64043894DC43092287210A04CAD369B08FDBF3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_AllocHGlobal_mE1D700DF967E28BE8AB3E0D67C81A96B4FCC8F4F (int32_t ___0_cb, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_GetIP_mB9B2909D5C8B48DDAC8029FFBC0DA627E4AD7129 (Address_t0C64043894DC43092287210A04CAD369B08FDBF3* ___0_address, intptr_t ___1_ip, int32_t ___2_ipLength, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Marshal_PtrToStringAnsi_m8DF88D9F22FCF791C538A36C9233B3882F579B4A (intptr_t ___0_ptr, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9 (intptr_t ___0_hglobal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Address_ToString_m8A446F2E577DF79B979E0EFCEA892BB5D119909F (Address_t0C64043894DC43092287210A04CAD369B08FDBF3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Address_t0C64043894DC43092287210A04CAD369B08FDBF3 Address_CreateFromIpPort_m7C09770345C1669CFD0DDC5A7F3EADE7C273CA4C (String_t* ___0_ip, uint16_t ___1_port, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_SetIP_mF1CF6D8F9786F22018C40EDF81EAB80067742E6C (Address_t0C64043894DC43092287210A04CAD369B08FDBF3* ___0_address, String_t* ___1_ip, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL nanosockets_initialize();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
IL2CPP_EXTERN_C void CDECL nanosockets_deinitialize();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
IL2CPP_EXTERN_C int64_t CDECL nanosockets_create(int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
IL2CPP_EXTERN_C void CDECL nanosockets_destroy(int64_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL nanosockets_bind(int64_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL nanosockets_connect(int64_t, Address_t0C64043894DC43092287210A04CAD369B08FDBF3*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL nanosockets_set_option(int64_t, int32_t, int32_t, int32_t*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL nanosockets_get_option(int64_t, int32_t, int32_t, int32_t*, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL nanosockets_set_nonblocking(int64_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL nanosockets_set_dontfragment(int64_t, uint8_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL nanosockets_send(int64_t, intptr_t, intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL nanosockets_receive(int64_t, intptr_t, intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL nanosockets_poll(int64_t, int64_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL nanosockets_address_get(int64_t, Address_t0C64043894DC43092287210A04CAD369B08FDBF3*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL nanosockets_address_is_equal(Address_t0C64043894DC43092287210A04CAD369B08FDBF3*, Address_t0C64043894DC43092287210A04CAD369B08FDBF3*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL nanosockets_address_set_ip(Address_t0C64043894DC43092287210A04CAD369B08FDBF3*, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL nanosockets_address_get_ip(Address_t0C64043894DC43092287210A04CAD369B08FDBF3*, intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL nanosockets_address_set_hostname(Address_t0C64043894DC43092287210A04CAD369B08FDBF3*, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL nanosockets_address_get_hostname(Address_t0C64043894DC43092287210A04CAD369B08FDBF3*, intptr_t, int32_t);
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Socket_get_IsCreated_m808C27EDEF63277B4567C6E4AE8BE8AF1772A701 (Socket_t46CD8CA395215449BFCC033F0B1B802E1DC42CF6* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___handle;
		return (bool)((((int64_t)L_0) > ((int64_t)((int64_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool Socket_get_IsCreated_m808C27EDEF63277B4567C6E4AE8BE8AF1772A701_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Socket_t46CD8CA395215449BFCC033F0B1B802E1DC42CF6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Socket_t46CD8CA395215449BFCC033F0B1B802E1DC42CF6*>(__this + _offset);
	bool _returnValue;
	_returnValue = Socket_get_IsCreated_m808C27EDEF63277B4567C6E4AE8BE8AF1772A701(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Socket_op_Implicit_m4A8C4A66658531E284B8918B73AF89CB7D6BEE9E (Socket_t46CD8CA395215449BFCC033F0B1B802E1DC42CF6 ___0_socket, const RuntimeMethod* method) 
{
	{
		Socket_t46CD8CA395215449BFCC033F0B1B802E1DC42CF6 L_0 = ___0_socket;
		int64_t L_1 = L_0.___handle;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Socket_t46CD8CA395215449BFCC033F0B1B802E1DC42CF6 Socket_op_Implicit_m3C97289072E892870B01964DF5389B8798138E31 (int64_t ___0_handle, const RuntimeMethod* method) 
{
	Socket_t46CD8CA395215449BFCC033F0B1B802E1DC42CF6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int64_t L_0 = ___0_handle;
		(&V_0)->___handle = L_0;
		Socket_t46CD8CA395215449BFCC033F0B1B802E1DC42CF6 L_1 = V_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Address_Equals_m19F1A04FCFA04C181170EFE7B99B12A27FA2C6F6 (Address_t0C64043894DC43092287210A04CAD369B08FDBF3* __this, Address_t0C64043894DC43092287210A04CAD369B08FDBF3 ___0_other, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = __this->____address0;
		Address_t0C64043894DC43092287210A04CAD369B08FDBF3 L_1 = ___0_other;
		uint64_t L_2 = L_1.____address0;
		if ((!(((uint64_t)L_0) == ((uint64_t)L_2))))
		{
			goto IL_002b;
		}
	}
	{
		uint64_t L_3 = __this->____address1;
		Address_t0C64043894DC43092287210A04CAD369B08FDBF3 L_4 = ___0_other;
		uint64_t L_5 = L_4.____address1;
		if ((!(((uint64_t)L_3) == ((uint64_t)L_5))))
		{
			goto IL_002b;
		}
	}
	{
		uint16_t L_6 = __this->___Port;
		Address_t0C64043894DC43092287210A04CAD369B08FDBF3 L_7 = ___0_other;
		uint16_t L_8 = L_7.___Port;
		return (bool)((((int32_t)L_6) == ((int32_t)L_8))? 1 : 0);
	}

IL_002b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Address_Equals_m19F1A04FCFA04C181170EFE7B99B12A27FA2C6F6_AdjustorThunk (RuntimeObject* __this, Address_t0C64043894DC43092287210A04CAD369B08FDBF3 ___0_other, const RuntimeMethod* method)
{
	Address_t0C64043894DC43092287210A04CAD369B08FDBF3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Address_t0C64043894DC43092287210A04CAD369B08FDBF3*>(__this + _offset);
	bool _returnValue;
	_returnValue = Address_Equals_m19F1A04FCFA04C181170EFE7B99B12A27FA2C6F6(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Address_Equals_mDDBFB7BB02D6A7AF30ECBC0637B7CE220B7AC282 (Address_t0C64043894DC43092287210A04CAD369B08FDBF3* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Address_t0C64043894DC43092287210A04CAD369B08FDBF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Address_t0C64043894DC43092287210A04CAD369B08FDBF3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Address_t0C64043894DC43092287210A04CAD369B08FDBF3_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((*(Address_t0C64043894DC43092287210A04CAD369B08FDBF3*)((Address_t0C64043894DC43092287210A04CAD369B08FDBF3*)(Address_t0C64043894DC43092287210A04CAD369B08FDBF3*)UnBox(L_1, Address_t0C64043894DC43092287210A04CAD369B08FDBF3_il2cpp_TypeInfo_var))));
		Address_t0C64043894DC43092287210A04CAD369B08FDBF3 L_2 = V_0;
		bool L_3;
		L_3 = Address_Equals_m19F1A04FCFA04C181170EFE7B99B12A27FA2C6F6(__this, L_2, NULL);
		return L_3;
	}

IL_0017:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Address_Equals_mDDBFB7BB02D6A7AF30ECBC0637B7CE220B7AC282_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	Address_t0C64043894DC43092287210A04CAD369B08FDBF3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Address_t0C64043894DC43092287210A04CAD369B08FDBF3*>(__this + _offset);
	bool _returnValue;
	_returnValue = Address_Equals_mDDBFB7BB02D6A7AF30ECBC0637B7CE220B7AC282(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Address_GetHashCode_m40F507481CB45DC401163A00C2C7DA21348A4D5F (Address_t0C64043894DC43092287210A04CAD369B08FDBF3* __this, const RuntimeMethod* method) 
{
	{
		uint64_t* L_0 = (uint64_t*)(&__this->____address0);
		int32_t L_1;
		L_1 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(L_0, NULL);
		uint64_t* L_2 = (uint64_t*)(&__this->____address1);
		int32_t L_3;
		L_3 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(L_2, NULL);
		uint16_t* L_4 = (uint16_t*)(&__this->___Port);
		int32_t L_5;
		L_5 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_4, NULL);
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)17), ((int32_t)31))), L_1)), ((int32_t)31))), L_3)), ((int32_t)31))), L_5));
	}
}
IL2CPP_EXTERN_C  int32_t Address_GetHashCode_m40F507481CB45DC401163A00C2C7DA21348A4D5F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Address_t0C64043894DC43092287210A04CAD369B08FDBF3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Address_t0C64043894DC43092287210A04CAD369B08FDBF3*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Address_GetHashCode_m40F507481CB45DC401163A00C2C7DA21348A4D5F(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Address_ToString_m8A446F2E577DF79B979E0EFCEA892BB5D119909F (Address_t0C64043894DC43092287210A04CAD369B08FDBF3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral557FB10169DCBA7723885B2E54E8A0318602F069);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral668A0814576A84F2A858D64078CA645AFEC4008A);
		s_Il2CppMethodInitialized = true;
	}
	Address_t0C64043894DC43092287210A04CAD369B08FDBF3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	String_t* V_3 = NULL;
	{
		Address_t0C64043894DC43092287210A04CAD369B08FDBF3 L_0 = (*(Address_t0C64043894DC43092287210A04CAD369B08FDBF3*)__this);
		V_0 = L_0;
		V_1 = ((int32_t)64);
		int32_t L_1 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = Marshal_AllocHGlobal_mE1D700DF967E28BE8AB3E0D67C81A96B4FCC8F4F(L_1, NULL);
		V_2 = L_2;
		intptr_t L_3 = V_2;
		int32_t L_4 = V_1;
		int32_t L_5;
		L_5 = UDP_GetIP_mB9B2909D5C8B48DDAC8029FFBC0DA627E4AD7129((&V_0), L_3, L_4, NULL);
		intptr_t L_6 = V_2;
		String_t* L_7;
		L_7 = Marshal_PtrToStringAnsi_m8DF88D9F22FCF791C538A36C9233B3882F579B4A(L_6, NULL);
		V_3 = L_7;
		intptr_t L_8 = V_2;
		Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9(L_8, NULL);
		String_t* L_9 = V_3;
		uint16_t L_10 = __this->___Port;
		uint16_t L_11 = L_10;
		RuntimeObject* L_12 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_11);
		String_t* L_13;
		L_13 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral668A0814576A84F2A858D64078CA645AFEC4008A, _stringLiteral557FB10169DCBA7723885B2E54E8A0318602F069, L_9, L_12, NULL);
		return L_13;
	}
}
IL2CPP_EXTERN_C  String_t* Address_ToString_m8A446F2E577DF79B979E0EFCEA892BB5D119909F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Address_t0C64043894DC43092287210A04CAD369B08FDBF3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Address_t0C64043894DC43092287210A04CAD369B08FDBF3*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Address_ToString_m8A446F2E577DF79B979E0EFCEA892BB5D119909F(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Address_t0C64043894DC43092287210A04CAD369B08FDBF3 Address_LocalhostIPv4_m40AB160347342D09EB555488D65BB8237DDCAF7E (uint16_t ___0_port, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76C3D4024DE9EE847070E35CC5A197DC21F66FEE);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint16_t L_0 = ___0_port;
		Address_t0C64043894DC43092287210A04CAD369B08FDBF3 L_1;
		L_1 = Address_CreateFromIpPort_m7C09770345C1669CFD0DDC5A7F3EADE7C273CA4C(_stringLiteral76C3D4024DE9EE847070E35CC5A197DC21F66FEE, L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Address_t0C64043894DC43092287210A04CAD369B08FDBF3 Address_Any_m8BB1B10920430CBE549DC7B7E2C31AADE4C44D76 (uint16_t ___0_port, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE71CEA2F4DC92DEB85E44E625E13F0973AA40B52);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint16_t L_0 = ___0_port;
		Address_t0C64043894DC43092287210A04CAD369B08FDBF3 L_1;
		L_1 = Address_CreateFromIpPort_m7C09770345C1669CFD0DDC5A7F3EADE7C273CA4C(_stringLiteralE71CEA2F4DC92DEB85E44E625E13F0973AA40B52, L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Address_t0C64043894DC43092287210A04CAD369B08FDBF3 Address_CreateFromIpPort_m7C09770345C1669CFD0DDC5A7F3EADE7C273CA4C (String_t* ___0_ip, uint16_t ___1_port, const RuntimeMethod* method) 
{
	Address_t0C64043894DC43092287210A04CAD369B08FDBF3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Address_t0C64043894DC43092287210A04CAD369B08FDBF3));
		String_t* L_0 = ___0_ip;
		int32_t L_1;
		L_1 = UDP_SetIP_mF1CF6D8F9786F22018C40EDF81EAB80067742E6C((&V_0), L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Exception_t* L_2 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDFDA65A58F314AF29AAED48115FBE1675B6D5C8B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Address_CreateFromIpPort_m7C09770345C1669CFD0DDC5A7F3EADE7C273CA4C_RuntimeMethod_var)));
	}

IL_001d:
	{
		uint16_t L_3 = ___1_port;
		(&V_0)->___Port = L_3;
		Address_t0C64043894DC43092287210A04CAD369B08FDBF3 L_4 = V_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_Initialize_m57075AE2BE769B96D5F004C4AA28B144D3516242 (const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_initialize", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(nanosockets_initialize)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDP_Deinitialize_m142521FA35ABCF9AF4E5DE0487CDEF73C27E82B9 (const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_deinitialize", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	reinterpret_cast<PInvokeFunc>(nanosockets_deinitialize)();
	#else
	il2cppPInvokeFunc();
	#endif

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UDP_Create_mB5F2E191961D17ECE4FA3F211BF3D6BD08E5BC19 (int32_t ___0_sendBufferSize, int32_t ___1_receiveBufferSize, const RuntimeMethod* method) 
{
	typedef int64_t (CDECL *PInvokeFunc) (int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_create", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	int64_t returnValue = reinterpret_cast<PInvokeFunc>(nanosockets_create)(___0_sendBufferSize, ___1_receiveBufferSize);
	#else
	int64_t returnValue = il2cppPInvokeFunc(___0_sendBufferSize, ___1_receiveBufferSize);
	#endif

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDP_Destroy_mF1ACFBED787AD6718D53AB70DB2E600E3865C6C7 (int64_t* ___0_socket, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (int64_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int64_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_destroy", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	reinterpret_cast<PInvokeFunc>(nanosockets_destroy)(___0_socket);
	#else
	il2cppPInvokeFunc(___0_socket);
	#endif

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_Bind_mE0E1E0A7E795DCBADB7075DA77CC05D6A0092CB8 (int64_t ___0_socket, intptr_t ___1_address, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (int64_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int64_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_bind", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(nanosockets_bind)(___0_socket, ___1_address);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_socket, ___1_address);
	#endif

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_Bind_m483D56DA0B36FD2C1CECC7B81F891927B66E3C3B (int64_t ___0_socket, Address_t0C64043894DC43092287210A04CAD369B08FDBF3* ___1_address, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (int64_t, Address_t0C64043894DC43092287210A04CAD369B08FDBF3*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int64_t) + sizeof(Address_t0C64043894DC43092287210A04CAD369B08FDBF3*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_bind", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(nanosockets_bind)(___0_socket, ___1_address);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_socket, ___1_address);
	#endif

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_Connect_mF4CB58B00DC7454EE94B83C3AB49B18D15F2E332 (int64_t ___0_socket, Address_t0C64043894DC43092287210A04CAD369B08FDBF3* ___1_address, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (int64_t, Address_t0C64043894DC43092287210A04CAD369B08FDBF3*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int64_t) + sizeof(Address_t0C64043894DC43092287210A04CAD369B08FDBF3*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_connect", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(nanosockets_connect)(___0_socket, ___1_address);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_socket, ___1_address);
	#endif

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_SetOption_m68077ABBF91822D1936F754AB045718C0290EDA2 (int64_t ___0_socket, int32_t ___1_level, int32_t ___2_optionName, int32_t* ___3_optionValue, int32_t ___4_optionLength, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (int64_t, int32_t, int32_t, int32_t*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int64_t) + sizeof(int32_t) + sizeof(int32_t) + sizeof(int32_t*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_set_option", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(nanosockets_set_option)(___0_socket, ___1_level, ___2_optionName, ___3_optionValue, ___4_optionLength);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_socket, ___1_level, ___2_optionName, ___3_optionValue, ___4_optionLength);
	#endif

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_GetOption_mDF42DC7846B8915681532F1FAA7A84F43FA37512 (int64_t ___0_socket, int32_t ___1_level, int32_t ___2_optionName, int32_t* ___3_optionValue, int32_t* ___4_optionLength, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (int64_t, int32_t, int32_t, int32_t*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int64_t) + sizeof(int32_t) + sizeof(int32_t) + sizeof(int32_t*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_get_option", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(nanosockets_get_option)(___0_socket, ___1_level, ___2_optionName, ___3_optionValue, ___4_optionLength);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_socket, ___1_level, ___2_optionName, ___3_optionValue, ___4_optionLength);
	#endif

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_SetNonBlocking_m6B56D212ADCADB070E4C21F9671736EDDA01330F (int64_t ___0_socket, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (int64_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int64_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_set_nonblocking", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(nanosockets_set_nonblocking)(___0_socket);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_socket);
	#endif

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_SetDontFragment_m5BCFAFC515A08FEDB6CECD50381948FCA0EBB4F1 (int64_t ___0_socket, uint8_t ___1_df, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (int64_t, uint8_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int64_t) + sizeof(uint8_t) + 3;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_set_dontfragment", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(nanosockets_set_dontfragment)(___0_socket, ___1_df);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_socket, ___1_df);
	#endif

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_Send_m328B94FC3741B5C886B6433B1471B55F0D2B97DD (int64_t ___0_socket, intptr_t ___1_address, intptr_t ___2_buffer, int32_t ___3_bufferLength, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (int64_t, intptr_t, intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int64_t) + sizeof(intptr_t) + sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_send", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(nanosockets_send)(___0_socket, ___1_address, ___2_buffer, ___3_bufferLength);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_socket, ___1_address, ___2_buffer, ___3_bufferLength);
	#endif

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_Send_mD117A3F7C36BF460C8374AD9FDAC452973241309 (int64_t ___0_socket, intptr_t ___1_address, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_buffer, int32_t ___3_bufferLength, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (int64_t, intptr_t, uint8_t*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int64_t) + sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_send", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	uint8_t* ____2_buffer_marshaled = NULL;
	if (___2_buffer != NULL)
	{
		____2_buffer_marshaled = reinterpret_cast<uint8_t*>((___2_buffer)->GetAddressAtUnchecked(0));
	}

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(nanosockets_send)(___0_socket, ___1_address, ____2_buffer_marshaled, ___3_bufferLength);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_socket, ___1_address, ____2_buffer_marshaled, ___3_bufferLength);
	#endif

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_Send_m9FE852DB10DDB36F7EB3F594B45548F3A6CDAE62 (int64_t ___0_socket, Address_t0C64043894DC43092287210A04CAD369B08FDBF3* ___1_address, intptr_t ___2_buffer, int32_t ___3_bufferLength, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (int64_t, Address_t0C64043894DC43092287210A04CAD369B08FDBF3*, intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int64_t) + sizeof(Address_t0C64043894DC43092287210A04CAD369B08FDBF3*) + sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_send", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(nanosockets_send)(___0_socket, ___1_address, ___2_buffer, ___3_bufferLength);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_socket, ___1_address, ___2_buffer, ___3_bufferLength);
	#endif

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_Send_m967DD7A2E1DCD53E7D2650045AAF6A03A4E503CB (int64_t ___0_socket, Address_t0C64043894DC43092287210A04CAD369B08FDBF3* ___1_address, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_buffer, int32_t ___3_bufferLength, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (int64_t, Address_t0C64043894DC43092287210A04CAD369B08FDBF3*, uint8_t*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int64_t) + sizeof(Address_t0C64043894DC43092287210A04CAD369B08FDBF3*) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_send", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	uint8_t* ____2_buffer_marshaled = NULL;
	if (___2_buffer != NULL)
	{
		____2_buffer_marshaled = reinterpret_cast<uint8_t*>((___2_buffer)->GetAddressAtUnchecked(0));
	}

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(nanosockets_send)(___0_socket, ___1_address, ____2_buffer_marshaled, ___3_bufferLength);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_socket, ___1_address, ____2_buffer_marshaled, ___3_bufferLength);
	#endif

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_Send_mAEAE53B0829B7F5787156BC0BA0DA4B56F8BAE3B (int64_t ___0_socket, Address_t0C64043894DC43092287210A04CAD369B08FDBF3* ___1_address, uint8_t* ___2_buffer, int32_t ___3_bufferLength, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (int64_t, Address_t0C64043894DC43092287210A04CAD369B08FDBF3*, uint8_t*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int64_t) + sizeof(Address_t0C64043894DC43092287210A04CAD369B08FDBF3*) + sizeof(uint8_t*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_send", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(nanosockets_send)(___0_socket, ___1_address, ___2_buffer, ___3_bufferLength);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_socket, ___1_address, ___2_buffer, ___3_bufferLength);
	#endif

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_Receive_m2C9520933A3AAFBBF7DA91625E7A35747DF14859 (int64_t ___0_socket, intptr_t ___1_address, intptr_t ___2_buffer, int32_t ___3_bufferLength, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (int64_t, intptr_t, intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int64_t) + sizeof(intptr_t) + sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_receive", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(nanosockets_receive)(___0_socket, ___1_address, ___2_buffer, ___3_bufferLength);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_socket, ___1_address, ___2_buffer, ___3_bufferLength);
	#endif

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_Receive_m08207AFC8067E841B4BF922CC4CC5BBF3E4C7680 (int64_t ___0_socket, intptr_t ___1_address, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_buffer, int32_t ___3_bufferLength, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (int64_t, intptr_t, uint8_t*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int64_t) + sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_receive", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	uint8_t* ____2_buffer_marshaled = NULL;
	if (___2_buffer != NULL)
	{
		____2_buffer_marshaled = reinterpret_cast<uint8_t*>((___2_buffer)->GetAddressAtUnchecked(0));
	}

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(nanosockets_receive)(___0_socket, ___1_address, ____2_buffer_marshaled, ___3_bufferLength);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_socket, ___1_address, ____2_buffer_marshaled, ___3_bufferLength);
	#endif

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_Receive_m619ECAE6653CB1D817053652197004F8A14D5E5D (int64_t ___0_socket, Address_t0C64043894DC43092287210A04CAD369B08FDBF3* ___1_address, intptr_t ___2_buffer, int32_t ___3_bufferLength, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (int64_t, Address_t0C64043894DC43092287210A04CAD369B08FDBF3*, intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int64_t) + sizeof(Address_t0C64043894DC43092287210A04CAD369B08FDBF3*) + sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_receive", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(nanosockets_receive)(___0_socket, ___1_address, ___2_buffer, ___3_bufferLength);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_socket, ___1_address, ___2_buffer, ___3_bufferLength);
	#endif

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_Receive_mE9295EA105E6740A22CFE30A301CDFE414313AD6 (int64_t ___0_socket, Address_t0C64043894DC43092287210A04CAD369B08FDBF3* ___1_address, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_buffer, int32_t ___3_bufferLength, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (int64_t, Address_t0C64043894DC43092287210A04CAD369B08FDBF3*, uint8_t*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int64_t) + sizeof(Address_t0C64043894DC43092287210A04CAD369B08FDBF3*) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_receive", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	uint8_t* ____2_buffer_marshaled = NULL;
	if (___2_buffer != NULL)
	{
		____2_buffer_marshaled = reinterpret_cast<uint8_t*>((___2_buffer)->GetAddressAtUnchecked(0));
	}

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(nanosockets_receive)(___0_socket, ___1_address, ____2_buffer_marshaled, ___3_bufferLength);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_socket, ___1_address, ____2_buffer_marshaled, ___3_bufferLength);
	#endif

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_Receive_m5A791E2945312E13447D393FD45DB7CF50EDBFA9 (int64_t ___0_socket, Address_t0C64043894DC43092287210A04CAD369B08FDBF3* ___1_address, uint8_t* ___2_buffer, int32_t ___3_bufferLength, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (int64_t, Address_t0C64043894DC43092287210A04CAD369B08FDBF3*, uint8_t*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int64_t) + sizeof(Address_t0C64043894DC43092287210A04CAD369B08FDBF3*) + sizeof(uint8_t*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_receive", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(nanosockets_receive)(___0_socket, ___1_address, ___2_buffer, ___3_bufferLength);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_socket, ___1_address, ___2_buffer, ___3_bufferLength);
	#endif

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_Poll_m2FD909366141924D3DF035FD35935230CA623928 (int64_t ___0_socket, int64_t ___1_timeout, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (int64_t, int64_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int64_t) + sizeof(int64_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_poll", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(nanosockets_poll)(___0_socket, ___1_timeout);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_socket, ___1_timeout);
	#endif

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_GetAddress_m6DCA3D3E0C05F8146BEF4E47502D0989BCBA1493 (int64_t ___0_socket, Address_t0C64043894DC43092287210A04CAD369B08FDBF3* ___1_address, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (int64_t, Address_t0C64043894DC43092287210A04CAD369B08FDBF3*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int64_t) + sizeof(Address_t0C64043894DC43092287210A04CAD369B08FDBF3*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_address_get", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(nanosockets_address_get)(___0_socket, ___1_address);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_socket, ___1_address);
	#endif

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_IsEqual_m24CDC994B9DC9BF6E3C359434D62A831EE421C9E (Address_t0C64043894DC43092287210A04CAD369B08FDBF3* ___0_left, Address_t0C64043894DC43092287210A04CAD369B08FDBF3* ___1_right, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (Address_t0C64043894DC43092287210A04CAD369B08FDBF3*, Address_t0C64043894DC43092287210A04CAD369B08FDBF3*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(Address_t0C64043894DC43092287210A04CAD369B08FDBF3*) + sizeof(Address_t0C64043894DC43092287210A04CAD369B08FDBF3*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_address_is_equal", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(nanosockets_address_is_equal)(___0_left, ___1_right);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_left, ___1_right);
	#endif

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_SetIP_mEDE381786612D5CB1195815B653D4855D3534F52 (Address_t0C64043894DC43092287210A04CAD369B08FDBF3* ___0_address, intptr_t ___1_ip, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (Address_t0C64043894DC43092287210A04CAD369B08FDBF3*, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(Address_t0C64043894DC43092287210A04CAD369B08FDBF3*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_address_set_ip", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(nanosockets_address_set_ip)(___0_address, ___1_ip);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_address, ___1_ip);
	#endif

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_SetIP_mF1CF6D8F9786F22018C40EDF81EAB80067742E6C (Address_t0C64043894DC43092287210A04CAD369B08FDBF3* ___0_address, String_t* ___1_ip, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (Address_t0C64043894DC43092287210A04CAD369B08FDBF3*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(Address_t0C64043894DC43092287210A04CAD369B08FDBF3*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_address_set_ip", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	char* ____1_ip_marshaled = NULL;
	____1_ip_marshaled = il2cpp_codegen_marshal_string(___1_ip);

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(nanosockets_address_set_ip)(___0_address, ____1_ip_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_address, ____1_ip_marshaled);
	#endif

	il2cpp_codegen_marshal_free(____1_ip_marshaled);
	____1_ip_marshaled = NULL;

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_GetIP_mB9B2909D5C8B48DDAC8029FFBC0DA627E4AD7129 (Address_t0C64043894DC43092287210A04CAD369B08FDBF3* ___0_address, intptr_t ___1_ip, int32_t ___2_ipLength, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (Address_t0C64043894DC43092287210A04CAD369B08FDBF3*, intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(Address_t0C64043894DC43092287210A04CAD369B08FDBF3*) + sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_address_get_ip", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(nanosockets_address_get_ip)(___0_address, ___1_ip, ___2_ipLength);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_address, ___1_ip, ___2_ipLength);
	#endif

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_GetIP_mB7067CC0F6B24A90EE2E85A04063197AECD45A37 (Address_t0C64043894DC43092287210A04CAD369B08FDBF3* ___0_address, StringBuilder_t* ___1_ip, int32_t ___2_ipLength, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (Address_t0C64043894DC43092287210A04CAD369B08FDBF3*, char*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(Address_t0C64043894DC43092287210A04CAD369B08FDBF3*) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_address_get_ip", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	char* ____1_ip_marshaled = NULL;
	____1_ip_marshaled = il2cpp_codegen_marshal_string_builder(___1_ip);

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(nanosockets_address_get_ip)(___0_address, ____1_ip_marshaled, ___2_ipLength);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_address, ____1_ip_marshaled, ___2_ipLength);
	#endif

	il2cpp_codegen_marshal_string_builder_result(___1_ip, ____1_ip_marshaled);

	il2cpp_codegen_marshal_free(____1_ip_marshaled);
	____1_ip_marshaled = NULL;

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_SetHostName_mFA70402C4DEF0D3561FD2A9D0C0D9E60C1235D99 (Address_t0C64043894DC43092287210A04CAD369B08FDBF3* ___0_address, intptr_t ___1_name, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (Address_t0C64043894DC43092287210A04CAD369B08FDBF3*, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(Address_t0C64043894DC43092287210A04CAD369B08FDBF3*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_address_set_hostname", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(nanosockets_address_set_hostname)(___0_address, ___1_name);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_address, ___1_name);
	#endif

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_SetHostName_mE46F196C64AB74D5EE1F3A2215C758A57811427D (Address_t0C64043894DC43092287210A04CAD369B08FDBF3* ___0_address, String_t* ___1_name, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (Address_t0C64043894DC43092287210A04CAD369B08FDBF3*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(Address_t0C64043894DC43092287210A04CAD369B08FDBF3*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_address_set_hostname", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	char* ____1_name_marshaled = NULL;
	____1_name_marshaled = il2cpp_codegen_marshal_string(___1_name);

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(nanosockets_address_set_hostname)(___0_address, ____1_name_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_address, ____1_name_marshaled);
	#endif

	il2cpp_codegen_marshal_free(____1_name_marshaled);
	____1_name_marshaled = NULL;

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_GetHostName_m73C5CE0EEF223D4B202F0EBA1F9954D9AFE0D890 (Address_t0C64043894DC43092287210A04CAD369B08FDBF3* ___0_address, intptr_t ___1_name, int32_t ___2_nameLength, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (Address_t0C64043894DC43092287210A04CAD369B08FDBF3*, intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(Address_t0C64043894DC43092287210A04CAD369B08FDBF3*) + sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_address_get_hostname", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(nanosockets_address_get_hostname)(___0_address, ___1_name, ___2_nameLength);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_address, ___1_name, ___2_nameLength);
	#endif

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_GetHostName_m2D80DDB35D71ED8273D5B597612ADC0845ECA7D0 (Address_t0C64043894DC43092287210A04CAD369B08FDBF3* ___0_address, StringBuilder_t* ___1_name, int32_t ___2_nameLength, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (Address_t0C64043894DC43092287210A04CAD369B08FDBF3*, char*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(Address_t0C64043894DC43092287210A04CAD369B08FDBF3*) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_address_get_hostname", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	char* ____1_name_marshaled = NULL;
	____1_name_marshaled = il2cpp_codegen_marshal_string_builder(___1_name);

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(nanosockets_address_get_hostname)(___0_address, ____1_name_marshaled, ___2_nameLength);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_address, ____1_name_marshaled, ___2_nameLength);
	#endif

	il2cpp_codegen_marshal_string_builder_result(___1_name, ____1_name_marshaled);

	il2cpp_codegen_marshal_free(____1_name_marshaled);
	____1_name_marshaled = NULL;

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
