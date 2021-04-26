#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.String
struct String_t;

IL2CPP_EXTERN_C RuntimeClass* StyleKeyword_t5C285A4249A1A7A807C1B4D2AAF5D1350B0A3560_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const uint32_t StyleEnum_1_GetHashCode_mA3BDF8E038179D79DFE761A60E55AB94F2F73A94_MetadataUsageId;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// System.Boolean
struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.XR.InputFeatureUsage`1<System.Boolean>
struct InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<System.Object>
struct InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<System.Single>
struct InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<System.UInt32Enum>
struct InputFeatureUsage_1_t7297B4773ACFDD5F58F69C09F25F70A4B87EBF8D 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t7297B4773ACFDD5F58F69C09F25F70A4B87EBF8D, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>
struct InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2>
struct InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>
struct InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes>
struct InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>
struct InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// System.Int32Enum
struct Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.StyleKeyword
struct StyleKeyword_t5C285A4249A1A7A807C1B4D2AAF5D1350B0A3560 
{
public:
	// System.Int32 UnityEngine.UIElements.StyleKeyword::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StyleKeyword_t5C285A4249A1A7A807C1B4D2AAF5D1350B0A3560, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>
struct StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C 
{
public:
	// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleEnum`1::m_Keyword
	int32_t ___m_Keyword_0;
	// T UnityEngine.UIElements.StyleEnum`1::m_Value
	int32_t ___m_Value_1;
	// System.Int32 UnityEngine.UIElements.StyleEnum`1::m_Specificity
	int32_t ___m_Specificity_2;

public:
	inline static int32_t get_offset_of_m_Keyword_0() { return static_cast<int32_t>(offsetof(StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C, ___m_Keyword_0)); }
	inline int32_t get_m_Keyword_0() const { return ___m_Keyword_0; }
	inline int32_t* get_address_of_m_Keyword_0() { return &___m_Keyword_0; }
	inline void set_m_Keyword_0(int32_t value)
	{
		___m_Keyword_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C, ___m_Value_1)); }
	inline int32_t get_m_Value_1() const { return ___m_Value_1; }
	inline int32_t* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(int32_t value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_Specificity_2() { return static_cast<int32_t>(offsetof(StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C, ___m_Specificity_2)); }
	inline int32_t get_m_Specificity_2() const { return ___m_Specificity_2; }
	inline int32_t* get_address_of_m_Specificity_2() { return &___m_Specificity_2; }
	inline void set_m_Specificity_2(int32_t value)
	{
		___m_Specificity_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// T UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StyleEnum_1_get_value_m863E731D80D0A943F5A206AE32787D5C073A3109_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::set_specificity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleEnum_1_set_specificity_mF1C94EF10622C93C04EA507D94C7294E5AFAC06B_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::get_keyword()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StyleEnum_1_get_keyword_m73D1031A571AC4D33C8FAE3C20FAC0E5C2A456A2_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::.ctor(T,UnityEngine.UIElements.StyleKeyword)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleEnum_1__ctor_m9808A49AC4955C97AB41242A2EB776741D566E82_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, int32_t ___v0, int32_t ___keyword1, const RuntimeMethod* method);
// System.Boolean UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::Equals(UnityEngine.UIElements.StyleEnum`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StyleEnum_1_Equals_mFA300F4368EBB8B5AED6497B6462C7BC7A851FC2_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StyleEnum_1_Equals_m24B121AC6754A2F66CF25C7F26F5D73B79AD7FD6_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StyleEnum_1_GetHashCode_mA3BDF8E038179D79DFE761A60E55AB94F2F73A94_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, const RuntimeMethod* method);
// System.String UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StyleEnum_1_ToString_m8F8781B4E85F3CF71A0EB27291996FC8607775BF_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, const RuntimeMethod* method);
// System.String UnityEngine.XR.InputFeatureUsage`1<System.Boolean>::get_name()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_1_get_name_m903AED0104CEFB362CB3C95F7E914CEF22391C05_gshared_inline (InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputFeatureUsage`1<System.Boolean>::set_name(System.String)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void InputFeatureUsage_1_set_name_mE26954497B6DFC1BC4B35527BC1FE45E8DD3325C_gshared_inline (InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputFeatureUsage`1<System.Boolean>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_mC49A5E081361EA5F0DAC95BDA74915F47155EE82_gshared (InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * __this, String_t* ___usageName0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<System.Boolean>::Equals(UnityEngine.XR.InputFeatureUsage`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_1_Equals_m2A82D70606F644B38DEBC0D357AD42EB8B5354F1_gshared (InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * __this, InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<System.Boolean>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_1_Equals_mABB6FF60DEFBE3CB5C67D807ECC39EF80DB478D0_gshared (InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.InputFeatureUsage`1<System.Boolean>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputFeatureUsage_1_GetHashCode_m93A72CC1175CC929BE33BB73AF85996606365FCB_gshared (InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * __this, const RuntimeMethod* method);
// System.String UnityEngine.XR.InputFeatureUsage`1<System.Object>::get_name()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_1_get_name_m986856E010E34F183B7A519CF76E9FBC5135F937_gshared_inline (InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputFeatureUsage`1<System.Object>::set_name(System.String)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void InputFeatureUsage_1_set_name_m381E43D77D92715FD446AF475884BBABEFAA6FAD_gshared_inline (InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputFeatureUsage`1<System.Object>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_mA8366FF400074A765C8808AB3EF9EC8A087C239B_gshared (InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 * __this, String_t* ___usageName0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<System.Object>::Equals(UnityEngine.XR.InputFeatureUsage`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_1_Equals_m1FB35646C10F8A881D1AEB78F8668F2C42DA8513_gshared (InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 * __this, InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<System.Object>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_1_Equals_m58E552AF934455C32BFCA81494BDF2B795F74DF9_gshared (InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.InputFeatureUsage`1<System.Object>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputFeatureUsage_1_GetHashCode_m588500B8DB43E81CACD7FC80C5EFF404CA5D4531_gshared (InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 * __this, const RuntimeMethod* method);
// System.String UnityEngine.XR.InputFeatureUsage`1<System.Single>::get_name()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_1_get_name_m0B93C4D7D84F986B7E8F3875FF5415F2218A60B2_gshared_inline (InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputFeatureUsage`1<System.Single>::set_name(System.String)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void InputFeatureUsage_1_set_name_mBA3A4DE56CA8F0B5ABA6BBF0F5D3D274D56DBE16_gshared_inline (InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputFeatureUsage`1<System.Single>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_mC7229AD9710B8EBA513850357B738E0FD7587B1C_gshared (InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * __this, String_t* ___usageName0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<System.Single>::Equals(UnityEngine.XR.InputFeatureUsage`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_1_Equals_mF25B1D914C0386DEDD34C65EB634CDC5E44BFF36_gshared (InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * __this, InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<System.Single>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_1_Equals_m008498E9F2FC1E2A387E668D4E7EE17F7252D541_gshared (InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.InputFeatureUsage`1<System.Single>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputFeatureUsage_1_GetHashCode_m9992536F666651AA6EF6B05CF76B9F2A726E43D8_gshared (InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * __this, const RuntimeMethod* method);
// System.String UnityEngine.XR.InputFeatureUsage`1<System.UInt32Enum>::get_name()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_1_get_name_mD91FDF6B491CC3025F5F721BD8E2238B97AB7923_gshared_inline (InputFeatureUsage_1_t7297B4773ACFDD5F58F69C09F25F70A4B87EBF8D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputFeatureUsage`1<System.UInt32Enum>::set_name(System.String)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void InputFeatureUsage_1_set_name_m99655B755F7FA4070ABB48E4A70AC5F6AD3AF9C3_gshared_inline (InputFeatureUsage_1_t7297B4773ACFDD5F58F69C09F25F70A4B87EBF8D * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputFeatureUsage`1<System.UInt32Enum>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_m276ED7E398BE054962338A7209FA50E4AE905D63_gshared (InputFeatureUsage_1_t7297B4773ACFDD5F58F69C09F25F70A4B87EBF8D * __this, String_t* ___usageName0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<System.UInt32Enum>::Equals(UnityEngine.XR.InputFeatureUsage`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_1_Equals_m5391565B37117ABFF721DE3C375D43629417AEC9_gshared (InputFeatureUsage_1_t7297B4773ACFDD5F58F69C09F25F70A4B87EBF8D * __this, InputFeatureUsage_1_t7297B4773ACFDD5F58F69C09F25F70A4B87EBF8D  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<System.UInt32Enum>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_1_Equals_m57FFF3869DC74B498519028A5271E2926FED9848_gshared (InputFeatureUsage_1_t7297B4773ACFDD5F58F69C09F25F70A4B87EBF8D * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.InputFeatureUsage`1<System.UInt32Enum>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputFeatureUsage_1_GetHashCode_mCF83B00D79F97EF681C185658A50C144F9FE7206_gshared (InputFeatureUsage_1_t7297B4773ACFDD5F58F69C09F25F70A4B87EBF8D * __this, const RuntimeMethod* method);
// System.String UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>::get_name()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_1_get_name_m29153C47FF6FB8C8E63028FA4206F0092C6F88D1_gshared_inline (InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>::set_name(System.String)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void InputFeatureUsage_1_set_name_m64E2C297CAC54F998DA45F1BA04094DCF22251FF_gshared_inline (InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_m3B59FD20FA1B25E7917D8C886A130AA6AC210054_gshared (InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * __this, String_t* ___usageName0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>::Equals(UnityEngine.XR.InputFeatureUsage`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_1_Equals_m1D49D3B859269709529967B8B3C05157D0CF2F02_gshared (InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * __this, InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_1_Equals_mBC9EF1D43D70CEC4575D8F7905AD93F0F5320678_gshared (InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputFeatureUsage_1_GetHashCode_m636CCD8DE451B1E8A862AE81B3E53CA4390A4CA1_gshared (InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * __this, const RuntimeMethod* method);
// System.String UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2>::get_name()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_1_get_name_m7F6B322542926549FC0ABE214734CCE487014CAA_gshared_inline (InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2>::set_name(System.String)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void InputFeatureUsage_1_set_name_m3D2A0A63C99B5D1AF2BA400A25D4AAF6EBC095DB_gshared_inline (InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_mE2F7F992A3067FC468DA8DD417E218C4276C10B8_gshared (InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A * __this, String_t* ___usageName0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2>::Equals(UnityEngine.XR.InputFeatureUsage`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_1_Equals_mA1EF7ED40CAFEC0E40B7E528433F266FBC73A690_gshared (InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A * __this, InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_1_Equals_m365D41C6C88100FDCA1544FFC80C03B71CB01C3A_gshared (InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputFeatureUsage_1_GetHashCode_m5738C6AEDF63738EB30A4D6F89B698C6F895ED0A_gshared (InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A * __this, const RuntimeMethod* method);
// System.String UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>::get_name()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_1_get_name_mC2BA903C90FBEB270B18F098CBE94784B43D03C1_gshared_inline (InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>::set_name(System.String)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void InputFeatureUsage_1_set_name_mDBCA9524945C814FED4B07892E213D182123206A_gshared_inline (InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_m3515B2BCA28829CC3D2D542F921D097E4756B3A0_gshared (InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * __this, String_t* ___usageName0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>::Equals(UnityEngine.XR.InputFeatureUsage`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_1_Equals_mACCAF974C7E4BC10A0326C1F1CF8BCB9AB061484_gshared (InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * __this, InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_1_Equals_m4CFF311B75A14CBE1EF1C3ED663E5EBB13E84746_gshared (InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputFeatureUsage_1_GetHashCode_m31F2DC4020D409D1E4F43B2FE21897A2E33AE0FA_gshared (InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * __this, const RuntimeMethod* method);
// System.String UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes>::get_name()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_1_get_name_m699DA5870A9BF21E697FACFC6589A3F2370F039B_gshared_inline (InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes>::set_name(System.String)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void InputFeatureUsage_1_set_name_m2D93EEC13BF0AD5F0368EB7FC94EE7A0BBD801A3_gshared_inline (InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_m8D45A935C96C0C635D2CAE69913C0CBA008BDCE3_gshared (InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 * __this, String_t* ___usageName0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes>::Equals(UnityEngine.XR.InputFeatureUsage`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_1_Equals_m1D7B7ACAA8DB8A12CD63C4C5EC8E173C15402A01_gshared (InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 * __this, InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_1_Equals_m1E7DEF80A8743FD014505EDD2AB776F59897DFDD_gshared (InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputFeatureUsage_1_GetHashCode_mADF72423508FEA9E58E717C94021FAEE8CCCD597_gshared (InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 * __this, const RuntimeMethod* method);
// System.String UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>::get_name()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_1_get_name_mB9B1E3F3BDC0D763D76A6C24B2971F3645F738FB_gshared_inline (InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>::set_name(System.String)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void InputFeatureUsage_1_set_name_m9EF61B0529C323B6516D53487886B4E31FD68ED0_gshared_inline (InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_m64DE4780A339D8989009F70CC22C910EC3F28C6F_gshared (InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF * __this, String_t* ___usageName0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>::Equals(UnityEngine.XR.InputFeatureUsage`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_1_Equals_m5E36D2B168BB2BE17A6B595AA19524E25E43EB23_gshared (InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF * __this, InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_1_Equals_mC60CA85D6903AADCCFE24F2B47FBCA38912CA3BA_gshared (InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputFeatureUsage_1_GetHashCode_mC5069ABE58109235CBD00DBC3AE9E14FE9464F7B_gshared (InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF * __this, const RuntimeMethod* method);

// T UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::get_value()
inline int32_t StyleEnum_1_get_value_m863E731D80D0A943F5A206AE32787D5C073A3109 (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *, const RuntimeMethod*))StyleEnum_1_get_value_m863E731D80D0A943F5A206AE32787D5C073A3109_gshared)(__this, method);
}
// System.Void UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::set_specificity(System.Int32)
inline void StyleEnum_1_set_specificity_mF1C94EF10622C93C04EA507D94C7294E5AFAC06B (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *, int32_t, const RuntimeMethod*))StyleEnum_1_set_specificity_mF1C94EF10622C93C04EA507D94C7294E5AFAC06B_gshared)(__this, ___value0, method);
}
// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::get_keyword()
inline int32_t StyleEnum_1_get_keyword_m73D1031A571AC4D33C8FAE3C20FAC0E5C2A456A2 (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *, const RuntimeMethod*))StyleEnum_1_get_keyword_m73D1031A571AC4D33C8FAE3C20FAC0E5C2A456A2_gshared)(__this, method);
}
// System.Void UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::.ctor(T,UnityEngine.UIElements.StyleKeyword)
inline void StyleEnum_1__ctor_m9808A49AC4955C97AB41242A2EB776741D566E82 (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, int32_t ___v0, int32_t ___keyword1, const RuntimeMethod* method)
{
	((  void (*) (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *, int32_t, int32_t, const RuntimeMethod*))StyleEnum_1__ctor_m9808A49AC4955C97AB41242A2EB776741D566E82_gshared)(__this, ___v0, ___keyword1, method);
}
// System.Boolean UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::Equals(UnityEngine.UIElements.StyleEnum`1<T>)
inline bool StyleEnum_1_Equals_mFA300F4368EBB8B5AED6497B6462C7BC7A851FC2 (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  ___other0, const RuntimeMethod* method)
{
	return ((  bool (*) (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *, StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C , const RuntimeMethod*))StyleEnum_1_Equals_mFA300F4368EBB8B5AED6497B6462C7BC7A851FC2_gshared)(__this, ___other0, method);
}
// System.Boolean UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::Equals(System.Object)
inline bool StyleEnum_1_Equals_m24B121AC6754A2F66CF25C7F26F5D73B79AD7FD6 (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *, RuntimeObject *, const RuntimeMethod*))StyleEnum_1_Equals_m24B121AC6754A2F66CF25C7F26F5D73B79AD7FD6_gshared)(__this, ___obj0, method);
}
// System.Int32 System.Int32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m245C424ECE351E5FE3277A88EEB02132DAB8C25A (int32_t* __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::GetHashCode()
inline int32_t StyleEnum_1_GetHashCode_mA3BDF8E038179D79DFE761A60E55AB94F2F73A94 (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *, const RuntimeMethod*))StyleEnum_1_GetHashCode_mA3BDF8E038179D79DFE761A60E55AB94F2F73A94_gshared)(__this, method);
}
// System.String UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::ToString()
inline String_t* StyleEnum_1_ToString_m8F8781B4E85F3CF71A0EB27291996FC8607775BF (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *, const RuntimeMethod*))StyleEnum_1_ToString_m8F8781B4E85F3CF71A0EB27291996FC8607775BF_gshared)(__this, method);
}
// System.String UnityEngine.XR.InputFeatureUsage`1<System.Boolean>::get_name()
inline String_t* InputFeatureUsage_1_get_name_m903AED0104CEFB362CB3C95F7E914CEF22391C05_inline (InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E *, const RuntimeMethod*))InputFeatureUsage_1_get_name_m903AED0104CEFB362CB3C95F7E914CEF22391C05_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<System.Boolean>::set_name(System.String)
inline void InputFeatureUsage_1_set_name_mE26954497B6DFC1BC4B35527BC1FE45E8DD3325C_inline (InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * __this, String_t* ___value0, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E *, String_t*, const RuntimeMethod*))InputFeatureUsage_1_set_name_mE26954497B6DFC1BC4B35527BC1FE45E8DD3325C_gshared_inline)(__this, ___value0, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<System.Boolean>::.ctor(System.String)
inline void InputFeatureUsage_1__ctor_mC49A5E081361EA5F0DAC95BDA74915F47155EE82 (InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E *, String_t*, const RuntimeMethod*))InputFeatureUsage_1__ctor_mC49A5E081361EA5F0DAC95BDA74915F47155EE82_gshared)(__this, ___usageName0, method);
}
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<System.Boolean>::Equals(UnityEngine.XR.InputFeatureUsage`1<T>)
inline bool InputFeatureUsage_1_Equals_m2A82D70606F644B38DEBC0D357AD42EB8B5354F1 (InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * __this, InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___other0, const RuntimeMethod* method)
{
	return ((  bool (*) (InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E *, InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E , const RuntimeMethod*))InputFeatureUsage_1_Equals_m2A82D70606F644B38DEBC0D357AD42EB8B5354F1_gshared)(__this, ___other0, method);
}
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<System.Boolean>::Equals(System.Object)
inline bool InputFeatureUsage_1_Equals_mABB6FF60DEFBE3CB5C67D807ECC39EF80DB478D0 (InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E *, RuntimeObject *, const RuntimeMethod*))InputFeatureUsage_1_Equals_mABB6FF60DEFBE3CB5C67D807ECC39EF80DB478D0_gshared)(__this, ___obj0, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.InputFeatureUsage`1<System.Boolean>::GetHashCode()
inline int32_t InputFeatureUsage_1_GetHashCode_m93A72CC1175CC929BE33BB73AF85996606365FCB (InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E *, const RuntimeMethod*))InputFeatureUsage_1_GetHashCode_m93A72CC1175CC929BE33BB73AF85996606365FCB_gshared)(__this, method);
}
// System.String UnityEngine.XR.InputFeatureUsage`1<System.Object>::get_name()
inline String_t* InputFeatureUsage_1_get_name_m986856E010E34F183B7A519CF76E9FBC5135F937_inline (InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 *, const RuntimeMethod*))InputFeatureUsage_1_get_name_m986856E010E34F183B7A519CF76E9FBC5135F937_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<System.Object>::set_name(System.String)
inline void InputFeatureUsage_1_set_name_m381E43D77D92715FD446AF475884BBABEFAA6FAD_inline (InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 *, String_t*, const RuntimeMethod*))InputFeatureUsage_1_set_name_m381E43D77D92715FD446AF475884BBABEFAA6FAD_gshared_inline)(__this, ___value0, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<System.Object>::.ctor(System.String)
inline void InputFeatureUsage_1__ctor_mA8366FF400074A765C8808AB3EF9EC8A087C239B (InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 * __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 *, String_t*, const RuntimeMethod*))InputFeatureUsage_1__ctor_mA8366FF400074A765C8808AB3EF9EC8A087C239B_gshared)(__this, ___usageName0, method);
}
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<System.Object>::Equals(UnityEngine.XR.InputFeatureUsage`1<T>)
inline bool InputFeatureUsage_1_Equals_m1FB35646C10F8A881D1AEB78F8668F2C42DA8513 (InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 * __this, InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7  ___other0, const RuntimeMethod* method)
{
	return ((  bool (*) (InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 *, InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 , const RuntimeMethod*))InputFeatureUsage_1_Equals_m1FB35646C10F8A881D1AEB78F8668F2C42DA8513_gshared)(__this, ___other0, method);
}
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<System.Object>::Equals(System.Object)
inline bool InputFeatureUsage_1_Equals_m58E552AF934455C32BFCA81494BDF2B795F74DF9 (InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 *, RuntimeObject *, const RuntimeMethod*))InputFeatureUsage_1_Equals_m58E552AF934455C32BFCA81494BDF2B795F74DF9_gshared)(__this, ___obj0, method);
}
// System.Int32 UnityEngine.XR.InputFeatureUsage`1<System.Object>::GetHashCode()
inline int32_t InputFeatureUsage_1_GetHashCode_m588500B8DB43E81CACD7FC80C5EFF404CA5D4531 (InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 *, const RuntimeMethod*))InputFeatureUsage_1_GetHashCode_m588500B8DB43E81CACD7FC80C5EFF404CA5D4531_gshared)(__this, method);
}
// System.String UnityEngine.XR.InputFeatureUsage`1<System.Single>::get_name()
inline String_t* InputFeatureUsage_1_get_name_m0B93C4D7D84F986B7E8F3875FF5415F2218A60B2_inline (InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 *, const RuntimeMethod*))InputFeatureUsage_1_get_name_m0B93C4D7D84F986B7E8F3875FF5415F2218A60B2_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<System.Single>::set_name(System.String)
inline void InputFeatureUsage_1_set_name_mBA3A4DE56CA8F0B5ABA6BBF0F5D3D274D56DBE16_inline (InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 *, String_t*, const RuntimeMethod*))InputFeatureUsage_1_set_name_mBA3A4DE56CA8F0B5ABA6BBF0F5D3D274D56DBE16_gshared_inline)(__this, ___value0, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<System.Single>::.ctor(System.String)
inline void InputFeatureUsage_1__ctor_mC7229AD9710B8EBA513850357B738E0FD7587B1C (InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 *, String_t*, const RuntimeMethod*))InputFeatureUsage_1__ctor_mC7229AD9710B8EBA513850357B738E0FD7587B1C_gshared)(__this, ___usageName0, method);
}
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<System.Single>::Equals(UnityEngine.XR.InputFeatureUsage`1<T>)
inline bool InputFeatureUsage_1_Equals_mF25B1D914C0386DEDD34C65EB634CDC5E44BFF36 (InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * __this, InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  ___other0, const RuntimeMethod* method)
{
	return ((  bool (*) (InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 *, InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 , const RuntimeMethod*))InputFeatureUsage_1_Equals_mF25B1D914C0386DEDD34C65EB634CDC5E44BFF36_gshared)(__this, ___other0, method);
}
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<System.Single>::Equals(System.Object)
inline bool InputFeatureUsage_1_Equals_m008498E9F2FC1E2A387E668D4E7EE17F7252D541 (InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 *, RuntimeObject *, const RuntimeMethod*))InputFeatureUsage_1_Equals_m008498E9F2FC1E2A387E668D4E7EE17F7252D541_gshared)(__this, ___obj0, method);
}
// System.Int32 UnityEngine.XR.InputFeatureUsage`1<System.Single>::GetHashCode()
inline int32_t InputFeatureUsage_1_GetHashCode_m9992536F666651AA6EF6B05CF76B9F2A726E43D8 (InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 *, const RuntimeMethod*))InputFeatureUsage_1_GetHashCode_m9992536F666651AA6EF6B05CF76B9F2A726E43D8_gshared)(__this, method);
}
// System.String UnityEngine.XR.InputFeatureUsage`1<System.UInt32Enum>::get_name()
inline String_t* InputFeatureUsage_1_get_name_mD91FDF6B491CC3025F5F721BD8E2238B97AB7923_inline (InputFeatureUsage_1_t7297B4773ACFDD5F58F69C09F25F70A4B87EBF8D * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (InputFeatureUsage_1_t7297B4773ACFDD5F58F69C09F25F70A4B87EBF8D *, const RuntimeMethod*))InputFeatureUsage_1_get_name_mD91FDF6B491CC3025F5F721BD8E2238B97AB7923_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<System.UInt32Enum>::set_name(System.String)
inline void InputFeatureUsage_1_set_name_m99655B755F7FA4070ABB48E4A70AC5F6AD3AF9C3_inline (InputFeatureUsage_1_t7297B4773ACFDD5F58F69C09F25F70A4B87EBF8D * __this, String_t* ___value0, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_t7297B4773ACFDD5F58F69C09F25F70A4B87EBF8D *, String_t*, const RuntimeMethod*))InputFeatureUsage_1_set_name_m99655B755F7FA4070ABB48E4A70AC5F6AD3AF9C3_gshared_inline)(__this, ___value0, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<System.UInt32Enum>::.ctor(System.String)
inline void InputFeatureUsage_1__ctor_m276ED7E398BE054962338A7209FA50E4AE905D63 (InputFeatureUsage_1_t7297B4773ACFDD5F58F69C09F25F70A4B87EBF8D * __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_t7297B4773ACFDD5F58F69C09F25F70A4B87EBF8D *, String_t*, const RuntimeMethod*))InputFeatureUsage_1__ctor_m276ED7E398BE054962338A7209FA50E4AE905D63_gshared)(__this, ___usageName0, method);
}
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<System.UInt32Enum>::Equals(UnityEngine.XR.InputFeatureUsage`1<T>)
inline bool InputFeatureUsage_1_Equals_m5391565B37117ABFF721DE3C375D43629417AEC9 (InputFeatureUsage_1_t7297B4773ACFDD5F58F69C09F25F70A4B87EBF8D * __this, InputFeatureUsage_1_t7297B4773ACFDD5F58F69C09F25F70A4B87EBF8D  ___other0, const RuntimeMethod* method)
{
	return ((  bool (*) (InputFeatureUsage_1_t7297B4773ACFDD5F58F69C09F25F70A4B87EBF8D *, InputFeatureUsage_1_t7297B4773ACFDD5F58F69C09F25F70A4B87EBF8D , const RuntimeMethod*))InputFeatureUsage_1_Equals_m5391565B37117ABFF721DE3C375D43629417AEC9_gshared)(__this, ___other0, method);
}
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<System.UInt32Enum>::Equals(System.Object)
inline bool InputFeatureUsage_1_Equals_m57FFF3869DC74B498519028A5271E2926FED9848 (InputFeatureUsage_1_t7297B4773ACFDD5F58F69C09F25F70A4B87EBF8D * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (InputFeatureUsage_1_t7297B4773ACFDD5F58F69C09F25F70A4B87EBF8D *, RuntimeObject *, const RuntimeMethod*))InputFeatureUsage_1_Equals_m57FFF3869DC74B498519028A5271E2926FED9848_gshared)(__this, ___obj0, method);
}
// System.Int32 UnityEngine.XR.InputFeatureUsage`1<System.UInt32Enum>::GetHashCode()
inline int32_t InputFeatureUsage_1_GetHashCode_mCF83B00D79F97EF681C185658A50C144F9FE7206 (InputFeatureUsage_1_t7297B4773ACFDD5F58F69C09F25F70A4B87EBF8D * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (InputFeatureUsage_1_t7297B4773ACFDD5F58F69C09F25F70A4B87EBF8D *, const RuntimeMethod*))InputFeatureUsage_1_GetHashCode_mCF83B00D79F97EF681C185658A50C144F9FE7206_gshared)(__this, method);
}
// System.String UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>::get_name()
inline String_t* InputFeatureUsage_1_get_name_m29153C47FF6FB8C8E63028FA4206F0092C6F88D1_inline (InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 *, const RuntimeMethod*))InputFeatureUsage_1_get_name_m29153C47FF6FB8C8E63028FA4206F0092C6F88D1_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>::set_name(System.String)
inline void InputFeatureUsage_1_set_name_m64E2C297CAC54F998DA45F1BA04094DCF22251FF_inline (InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 *, String_t*, const RuntimeMethod*))InputFeatureUsage_1_set_name_m64E2C297CAC54F998DA45F1BA04094DCF22251FF_gshared_inline)(__this, ___value0, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>::.ctor(System.String)
inline void InputFeatureUsage_1__ctor_m3B59FD20FA1B25E7917D8C886A130AA6AC210054 (InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 *, String_t*, const RuntimeMethod*))InputFeatureUsage_1__ctor_m3B59FD20FA1B25E7917D8C886A130AA6AC210054_gshared)(__this, ___usageName0, method);
}
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>::Equals(UnityEngine.XR.InputFeatureUsage`1<T>)
inline bool InputFeatureUsage_1_Equals_m1D49D3B859269709529967B8B3C05157D0CF2F02 (InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * __this, InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  ___other0, const RuntimeMethod* method)
{
	return ((  bool (*) (InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 *, InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 , const RuntimeMethod*))InputFeatureUsage_1_Equals_m1D49D3B859269709529967B8B3C05157D0CF2F02_gshared)(__this, ___other0, method);
}
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>::Equals(System.Object)
inline bool InputFeatureUsage_1_Equals_mBC9EF1D43D70CEC4575D8F7905AD93F0F5320678 (InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 *, RuntimeObject *, const RuntimeMethod*))InputFeatureUsage_1_Equals_mBC9EF1D43D70CEC4575D8F7905AD93F0F5320678_gshared)(__this, ___obj0, method);
}
// System.Int32 UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>::GetHashCode()
inline int32_t InputFeatureUsage_1_GetHashCode_m636CCD8DE451B1E8A862AE81B3E53CA4390A4CA1 (InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 *, const RuntimeMethod*))InputFeatureUsage_1_GetHashCode_m636CCD8DE451B1E8A862AE81B3E53CA4390A4CA1_gshared)(__this, method);
}
// System.String UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2>::get_name()
inline String_t* InputFeatureUsage_1_get_name_m7F6B322542926549FC0ABE214734CCE487014CAA_inline (InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A *, const RuntimeMethod*))InputFeatureUsage_1_get_name_m7F6B322542926549FC0ABE214734CCE487014CAA_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2>::set_name(System.String)
inline void InputFeatureUsage_1_set_name_m3D2A0A63C99B5D1AF2BA400A25D4AAF6EBC095DB_inline (InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A * __this, String_t* ___value0, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A *, String_t*, const RuntimeMethod*))InputFeatureUsage_1_set_name_m3D2A0A63C99B5D1AF2BA400A25D4AAF6EBC095DB_gshared_inline)(__this, ___value0, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2>::.ctor(System.String)
inline void InputFeatureUsage_1__ctor_mE2F7F992A3067FC468DA8DD417E218C4276C10B8 (InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A * __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A *, String_t*, const RuntimeMethod*))InputFeatureUsage_1__ctor_mE2F7F992A3067FC468DA8DD417E218C4276C10B8_gshared)(__this, ___usageName0, method);
}
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2>::Equals(UnityEngine.XR.InputFeatureUsage`1<T>)
inline bool InputFeatureUsage_1_Equals_mA1EF7ED40CAFEC0E40B7E528433F266FBC73A690 (InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A * __this, InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  ___other0, const RuntimeMethod* method)
{
	return ((  bool (*) (InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A *, InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A , const RuntimeMethod*))InputFeatureUsage_1_Equals_mA1EF7ED40CAFEC0E40B7E528433F266FBC73A690_gshared)(__this, ___other0, method);
}
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2>::Equals(System.Object)
inline bool InputFeatureUsage_1_Equals_m365D41C6C88100FDCA1544FFC80C03B71CB01C3A (InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A *, RuntimeObject *, const RuntimeMethod*))InputFeatureUsage_1_Equals_m365D41C6C88100FDCA1544FFC80C03B71CB01C3A_gshared)(__this, ___obj0, method);
}
// System.Int32 UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2>::GetHashCode()
inline int32_t InputFeatureUsage_1_GetHashCode_m5738C6AEDF63738EB30A4D6F89B698C6F895ED0A (InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A *, const RuntimeMethod*))InputFeatureUsage_1_GetHashCode_m5738C6AEDF63738EB30A4D6F89B698C6F895ED0A_gshared)(__this, method);
}
// System.String UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>::get_name()
inline String_t* InputFeatureUsage_1_get_name_mC2BA903C90FBEB270B18F098CBE94784B43D03C1_inline (InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 *, const RuntimeMethod*))InputFeatureUsage_1_get_name_mC2BA903C90FBEB270B18F098CBE94784B43D03C1_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>::set_name(System.String)
inline void InputFeatureUsage_1_set_name_mDBCA9524945C814FED4B07892E213D182123206A_inline (InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 *, String_t*, const RuntimeMethod*))InputFeatureUsage_1_set_name_mDBCA9524945C814FED4B07892E213D182123206A_gshared_inline)(__this, ___value0, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>::.ctor(System.String)
inline void InputFeatureUsage_1__ctor_m3515B2BCA28829CC3D2D542F921D097E4756B3A0 (InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 *, String_t*, const RuntimeMethod*))InputFeatureUsage_1__ctor_m3515B2BCA28829CC3D2D542F921D097E4756B3A0_gshared)(__this, ___usageName0, method);
}
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>::Equals(UnityEngine.XR.InputFeatureUsage`1<T>)
inline bool InputFeatureUsage_1_Equals_mACCAF974C7E4BC10A0326C1F1CF8BCB9AB061484 (InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * __this, InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___other0, const RuntimeMethod* method)
{
	return ((  bool (*) (InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 *, InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 , const RuntimeMethod*))InputFeatureUsage_1_Equals_mACCAF974C7E4BC10A0326C1F1CF8BCB9AB061484_gshared)(__this, ___other0, method);
}
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>::Equals(System.Object)
inline bool InputFeatureUsage_1_Equals_m4CFF311B75A14CBE1EF1C3ED663E5EBB13E84746 (InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 *, RuntimeObject *, const RuntimeMethod*))InputFeatureUsage_1_Equals_m4CFF311B75A14CBE1EF1C3ED663E5EBB13E84746_gshared)(__this, ___obj0, method);
}
// System.Int32 UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>::GetHashCode()
inline int32_t InputFeatureUsage_1_GetHashCode_m31F2DC4020D409D1E4F43B2FE21897A2E33AE0FA (InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 *, const RuntimeMethod*))InputFeatureUsage_1_GetHashCode_m31F2DC4020D409D1E4F43B2FE21897A2E33AE0FA_gshared)(__this, method);
}
// System.String UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes>::get_name()
inline String_t* InputFeatureUsage_1_get_name_m699DA5870A9BF21E697FACFC6589A3F2370F039B_inline (InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 *, const RuntimeMethod*))InputFeatureUsage_1_get_name_m699DA5870A9BF21E697FACFC6589A3F2370F039B_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes>::set_name(System.String)
inline void InputFeatureUsage_1_set_name_m2D93EEC13BF0AD5F0368EB7FC94EE7A0BBD801A3_inline (InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 *, String_t*, const RuntimeMethod*))InputFeatureUsage_1_set_name_m2D93EEC13BF0AD5F0368EB7FC94EE7A0BBD801A3_gshared_inline)(__this, ___value0, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes>::.ctor(System.String)
inline void InputFeatureUsage_1__ctor_m8D45A935C96C0C635D2CAE69913C0CBA008BDCE3 (InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 * __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 *, String_t*, const RuntimeMethod*))InputFeatureUsage_1__ctor_m8D45A935C96C0C635D2CAE69913C0CBA008BDCE3_gshared)(__this, ___usageName0, method);
}
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes>::Equals(UnityEngine.XR.InputFeatureUsage`1<T>)
inline bool InputFeatureUsage_1_Equals_m1D7B7ACAA8DB8A12CD63C4C5EC8E173C15402A01 (InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 * __this, InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83  ___other0, const RuntimeMethod* method)
{
	return ((  bool (*) (InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 *, InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 , const RuntimeMethod*))InputFeatureUsage_1_Equals_m1D7B7ACAA8DB8A12CD63C4C5EC8E173C15402A01_gshared)(__this, ___other0, method);
}
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes>::Equals(System.Object)
inline bool InputFeatureUsage_1_Equals_m1E7DEF80A8743FD014505EDD2AB776F59897DFDD (InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 *, RuntimeObject *, const RuntimeMethod*))InputFeatureUsage_1_Equals_m1E7DEF80A8743FD014505EDD2AB776F59897DFDD_gshared)(__this, ___obj0, method);
}
// System.Int32 UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes>::GetHashCode()
inline int32_t InputFeatureUsage_1_GetHashCode_mADF72423508FEA9E58E717C94021FAEE8CCCD597 (InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 *, const RuntimeMethod*))InputFeatureUsage_1_GetHashCode_mADF72423508FEA9E58E717C94021FAEE8CCCD597_gshared)(__this, method);
}
// System.String UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>::get_name()
inline String_t* InputFeatureUsage_1_get_name_mB9B1E3F3BDC0D763D76A6C24B2971F3645F738FB_inline (InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF *, const RuntimeMethod*))InputFeatureUsage_1_get_name_mB9B1E3F3BDC0D763D76A6C24B2971F3645F738FB_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>::set_name(System.String)
inline void InputFeatureUsage_1_set_name_m9EF61B0529C323B6516D53487886B4E31FD68ED0_inline (InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF * __this, String_t* ___value0, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF *, String_t*, const RuntimeMethod*))InputFeatureUsage_1_set_name_m9EF61B0529C323B6516D53487886B4E31FD68ED0_gshared_inline)(__this, ___value0, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>::.ctor(System.String)
inline void InputFeatureUsage_1__ctor_m64DE4780A339D8989009F70CC22C910EC3F28C6F (InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF * __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF *, String_t*, const RuntimeMethod*))InputFeatureUsage_1__ctor_m64DE4780A339D8989009F70CC22C910EC3F28C6F_gshared)(__this, ___usageName0, method);
}
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>::Equals(UnityEngine.XR.InputFeatureUsage`1<T>)
inline bool InputFeatureUsage_1_Equals_m5E36D2B168BB2BE17A6B595AA19524E25E43EB23 (InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF * __this, InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF  ___other0, const RuntimeMethod* method)
{
	return ((  bool (*) (InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF *, InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF , const RuntimeMethod*))InputFeatureUsage_1_Equals_m5E36D2B168BB2BE17A6B595AA19524E25E43EB23_gshared)(__this, ___other0, method);
}
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>::Equals(System.Object)
inline bool InputFeatureUsage_1_Equals_mC60CA85D6903AADCCFE24F2B47FBCA38912CA3BA (InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF *, RuntimeObject *, const RuntimeMethod*))InputFeatureUsage_1_Equals_mC60CA85D6903AADCCFE24F2B47FBCA38912CA3BA_gshared)(__this, ___obj0, method);
}
// System.Int32 UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>::GetHashCode()
inline int32_t InputFeatureUsage_1_GetHashCode_mC5069ABE58109235CBD00DBC3AE9E14FE9464F7B (InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF *, const RuntimeMethod*))InputFeatureUsage_1_GetHashCode_mC5069ABE58109235CBD00DBC3AE9E14FE9464F7B_gshared)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StyleEnum_1_get_value_m863E731D80D0A943F5A206AE32787D5C073A3109_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->get_m_Keyword_0();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_1 = V_0;
		G_B3_0 = L_1;
		goto IL_001a;
	}

IL_0014:
	{
		int32_t L_2 = (int32_t)__this->get_m_Value_1();
		G_B3_0 = L_2;
	}

IL_001a:
	{
		V_1 = (int32_t)G_B3_0;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_3 = V_1;
		return (int32_t)L_3;
	}
}
IL2CPP_EXTERN_C  int32_t StyleEnum_1_get_value_m863E731D80D0A943F5A206AE32787D5C073A3109_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * _thisAdjusted = reinterpret_cast<StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *>(__this + _offset);
	return StyleEnum_1_get_value_m863E731D80D0A943F5A206AE32787D5C073A3109(_thisAdjusted, method);
}
// System.Void UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::set_specificity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleEnum_1_set_specificity_mF1C94EF10622C93C04EA507D94C7294E5AFAC06B_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_m_Specificity_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void StyleEnum_1_set_specificity_mF1C94EF10622C93C04EA507D94C7294E5AFAC06B_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * _thisAdjusted = reinterpret_cast<StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *>(__this + _offset);
	StyleEnum_1_set_specificity_mF1C94EF10622C93C04EA507D94C7294E5AFAC06B(_thisAdjusted, ___value0, method);
}
// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::get_keyword()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StyleEnum_1_get_keyword_m73D1031A571AC4D33C8FAE3C20FAC0E5C2A456A2_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->get_m_Keyword_0();
		V_0 = (int32_t)L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return (int32_t)L_1;
	}
}
IL2CPP_EXTERN_C  int32_t StyleEnum_1_get_keyword_m73D1031A571AC4D33C8FAE3C20FAC0E5C2A456A2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * _thisAdjusted = reinterpret_cast<StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *>(__this + _offset);
	return StyleEnum_1_get_keyword_m73D1031A571AC4D33C8FAE3C20FAC0E5C2A456A2(_thisAdjusted, method);
}
// System.Void UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::.ctor(T,UnityEngine.UIElements.StyleKeyword)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleEnum_1__ctor_m9808A49AC4955C97AB41242A2EB776741D566E82_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, int32_t ___v0, int32_t ___keyword1, const RuntimeMethod* method)
{
	{
		__this->set_m_Specificity_2(0);
		int32_t L_0 = ___keyword1;
		__this->set_m_Keyword_0(L_0);
		int32_t L_1 = ___v0;
		__this->set_m_Value_1(L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void StyleEnum_1__ctor_m9808A49AC4955C97AB41242A2EB776741D566E82_AdjustorThunk (RuntimeObject * __this, int32_t ___v0, int32_t ___keyword1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * _thisAdjusted = reinterpret_cast<StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *>(__this + _offset);
	StyleEnum_1__ctor_m9808A49AC4955C97AB41242A2EB776741D566E82(_thisAdjusted, ___v0, ___keyword1, method);
}
// System.Boolean UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::op_Equality(UnityEngine.UIElements.StyleEnum`1<T>,UnityEngine.UIElements.StyleEnum`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StyleEnum_1_op_Equality_mCBBFEC68B4112344CE885DAA95737BD217263E3E_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  ___lhs0, StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  ___rhs1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  L_0 = ___lhs0;
		int32_t L_1 = (int32_t)L_0.get_m_Keyword_0();
		StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  L_2 = ___rhs1;
		int32_t L_3 = (int32_t)L_2.get_m_Keyword_0();
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0029;
		}
	}
	{
		StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  L_4 = ___lhs0;
		int32_t L_5 = (int32_t)L_4.get_m_Value_1();
		int32_t L_6 = ((  int32_t (*) (int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  L_7 = ___rhs1;
		int32_t L_8 = (int32_t)L_7.get_m_Value_1();
		int32_t L_9 = ((  int32_t (*) (int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		G_B3_0 = ((((int32_t)L_6) == ((int32_t)L_9))? 1 : 0);
		goto IL_002a;
	}

IL_0029:
	{
		G_B3_0 = 0;
	}

IL_002a:
	{
		V_0 = (bool)G_B3_0;
		goto IL_002d;
	}

IL_002d:
	{
		bool L_10 = V_0;
		return (bool)L_10;
	}
}
// System.Boolean UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::Equals(UnityEngine.UIElements.StyleEnum`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StyleEnum_1_Equals_mFA300F4368EBB8B5AED6497B6462C7BC7A851FC2_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  L_0 = ___other0;
		StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  L_1 = (*(StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *)__this);
		bool L_2 = ((  bool (*) (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C , StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)((StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C )L_0, (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_0 = (bool)L_2;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
IL2CPP_EXTERN_C  bool StyleEnum_1_Equals_mFA300F4368EBB8B5AED6497B6462C7BC7A851FC2_AdjustorThunk (RuntimeObject * __this, StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * _thisAdjusted = reinterpret_cast<StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *>(__this + _offset);
	return StyleEnum_1_Equals_mFA300F4368EBB8B5AED6497B6462C7BC7A851FC2(_thisAdjusted, ___other0, method);
}
// System.Boolean UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StyleEnum_1_Equals_m24B121AC6754A2F66CF25C7F26F5D73B79AD7FD6_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	{
		RuntimeObject * L_0 = ___obj0;
		V_1 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3)))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_002c;
	}

IL_0016:
	{
		RuntimeObject * L_2 = ___obj0;
		V_0 = (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C )((*(StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *)((StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *)UnBox(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3)))));
		StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  L_3 = V_0;
		StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  L_4 = (*(StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *)__this);
		bool L_5 = ((  bool (*) (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C , StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)((StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C )L_3, (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_2 = (bool)L_5;
		goto IL_002c;
	}

IL_002c:
	{
		bool L_6 = V_2;
		return (bool)L_6;
	}
}
IL2CPP_EXTERN_C  bool StyleEnum_1_Equals_m24B121AC6754A2F66CF25C7F26F5D73B79AD7FD6_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * _thisAdjusted = reinterpret_cast<StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *>(__this + _offset);
	return StyleEnum_1_Equals_m24B121AC6754A2F66CF25C7F26F5D73B79AD7FD6(_thisAdjusted, ___obj0, method);
}
// System.Int32 UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StyleEnum_1_GetHashCode_mA3BDF8E038179D79DFE761A60E55AB94F2F73A94_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StyleEnum_1_GetHashCode_mA3BDF8E038179D79DFE761A60E55AB94F2F73A94_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = (int32_t)((int32_t)917506989);
		int32_t L_0 = V_0;
		int32_t* L_1 = (int32_t*)__this->get_address_of_m_Keyword_0();
		Il2CppFakeBox<int32_t> L_2(StyleKeyword_t5C285A4249A1A7A807C1B4D2AAF5D1350B0A3560_il2cpp_TypeInfo_var, L_1);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(&L_2));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)((int32_t)-1521134295))), (int32_t)L_3));
		int32_t L_4 = V_0;
		int32_t* L_5 = (int32_t*)__this->get_address_of_m_Value_1();
		Il2CppFakeBox<int32_t> L_6(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_5);
		int32_t L_7 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(&L_6));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_4, (int32_t)((int32_t)-1521134295))), (int32_t)L_7));
		int32_t L_8 = V_0;
		int32_t* L_9 = (int32_t*)__this->get_address_of_m_Specificity_2();
		int32_t L_10 = Int32_GetHashCode_m245C424ECE351E5FE3277A88EEB02132DAB8C25A((int32_t*)(int32_t*)L_9, /*hidden argument*/NULL);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_8, (int32_t)((int32_t)-1521134295))), (int32_t)L_10));
		int32_t L_11 = V_0;
		V_1 = (int32_t)L_11;
		goto IL_0053;
	}

IL_0053:
	{
		int32_t L_12 = V_1;
		return (int32_t)L_12;
	}
}
IL2CPP_EXTERN_C  int32_t StyleEnum_1_GetHashCode_mA3BDF8E038179D79DFE761A60E55AB94F2F73A94_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * _thisAdjusted = reinterpret_cast<StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *>(__this + _offset);
	return StyleEnum_1_GetHashCode_mA3BDF8E038179D79DFE761A60E55AB94F2F73A94(_thisAdjusted, method);
}
// System.String UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StyleEnum_1_ToString_m8F8781B4E85F3CF71A0EB27291996FC8607775BF_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  L_0 = (*(StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *)__this);
		StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  L_1 = L_0;
		RuntimeObject * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3), &L_1);
		String_t* L_3 = ((  String_t* (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)((RuntimeObject*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = (String_t*)L_3;
		goto IL_0014;
	}

IL_0014:
	{
		String_t* L_4 = V_0;
		return (String_t*)L_4;
	}
}
IL2CPP_EXTERN_C  String_t* StyleEnum_1_ToString_m8F8781B4E85F3CF71A0EB27291996FC8607775BF_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * _thisAdjusted = reinterpret_cast<StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *>(__this + _offset);
	return StyleEnum_1_ToString_m8F8781B4E85F3CF71A0EB27291996FC8607775BF(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String UnityEngine.XR.InputFeatureUsage`1<System.Boolean>::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_1_get_name_m903AED0104CEFB362CB3C95F7E914CEF22391C05_gshared (InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = (String_t*)__this->get_U3CnameU3Ek__BackingField_0();
		return (String_t*)L_0;
	}
}
IL2CPP_EXTERN_C  String_t* InputFeatureUsage_1_get_name_m903AED0104CEFB362CB3C95F7E914CEF22391C05_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E *>(__this + _offset);
	return InputFeatureUsage_1_get_name_m903AED0104CEFB362CB3C95F7E914CEF22391C05_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<System.Boolean>::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1_set_name_mE26954497B6DFC1BC4B35527BC1FE45E8DD3325C_gshared (InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CnameU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void InputFeatureUsage_1_set_name_mE26954497B6DFC1BC4B35527BC1FE45E8DD3325C_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E *>(__this + _offset);
	InputFeatureUsage_1_set_name_mE26954497B6DFC1BC4B35527BC1FE45E8DD3325C_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<System.Boolean>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_mC49A5E081361EA5F0DAC95BDA74915F47155EE82_gshared (InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___usageName0;
		InputFeatureUsage_1_set_name_mE26954497B6DFC1BC4B35527BC1FE45E8DD3325C_inline((InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E *)(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E *)__this, (String_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C  void InputFeatureUsage_1__ctor_mC49A5E081361EA5F0DAC95BDA74915F47155EE82_AdjustorThunk (RuntimeObject * __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E *>(__this + _offset);
	InputFeatureUsage_1__ctor_mC49A5E081361EA5F0DAC95BDA74915F47155EE82(_thisAdjusted, ___usageName0, method);
}
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<System.Boolean>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_1_Equals_mABB6FF60DEFBE3CB5C67D807ECC39EF80DB478D0_gshared (InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject * L_0 = ___obj0;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject * L_2 = ___obj0;
		bool L_3 = InputFeatureUsage_1_Equals_m2A82D70606F644B38DEBC0D357AD42EB8B5354F1((InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E *)(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E *)__this, (InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E )((*(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E *)((InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E *)UnBox(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_1 = (bool)L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return (bool)L_4;
	}
}
IL2CPP_EXTERN_C  bool InputFeatureUsage_1_Equals_mABB6FF60DEFBE3CB5C67D807ECC39EF80DB478D0_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E *>(__this + _offset);
	return InputFeatureUsage_1_Equals_mABB6FF60DEFBE3CB5C67D807ECC39EF80DB478D0(_thisAdjusted, ___obj0, method);
}
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<System.Boolean>::Equals(UnityEngine.XR.InputFeatureUsage`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_1_Equals_m2A82D70606F644B38DEBC0D357AD42EB8B5354F1_gshared (InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * __this, InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		String_t* L_0 = InputFeatureUsage_1_get_name_m903AED0104CEFB362CB3C95F7E914CEF22391C05_inline((InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E *)(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		String_t* L_1 = InputFeatureUsage_1_get_name_m903AED0104CEFB362CB3C95F7E914CEF22391C05_inline((InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E *)(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E *)(&___other0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		bool L_2 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE((String_t*)L_0, (String_t*)L_1, /*hidden argument*/NULL);
		V_0 = (bool)L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
IL2CPP_EXTERN_C  bool InputFeatureUsage_1_Equals_m2A82D70606F644B38DEBC0D357AD42EB8B5354F1_AdjustorThunk (RuntimeObject * __this, InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E *>(__this + _offset);
	return InputFeatureUsage_1_Equals_m2A82D70606F644B38DEBC0D357AD42EB8B5354F1(_thisAdjusted, ___other0, method);
}
// System.Int32 UnityEngine.XR.InputFeatureUsage`1<System.Boolean>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputFeatureUsage_1_GetHashCode_m93A72CC1175CC929BE33BB73AF85996606365FCB_gshared (InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = InputFeatureUsage_1_get_name_m903AED0104CEFB362CB3C95F7E914CEF22391C05_inline((InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E *)(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		NullCheck((RuntimeObject *)L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)L_0);
		V_0 = (int32_t)L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
IL2CPP_EXTERN_C  int32_t InputFeatureUsage_1_GetHashCode_m93A72CC1175CC929BE33BB73AF85996606365FCB_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E *>(__this + _offset);
	return InputFeatureUsage_1_GetHashCode_m93A72CC1175CC929BE33BB73AF85996606365FCB(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String UnityEngine.XR.InputFeatureUsage`1<System.Object>::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_1_get_name_m986856E010E34F183B7A519CF76E9FBC5135F937_gshared (InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = (String_t*)__this->get_U3CnameU3Ek__BackingField_0();
		return (String_t*)L_0;
	}
}
IL2CPP_EXTERN_C  String_t* InputFeatureUsage_1_get_name_m986856E010E34F183B7A519CF76E9FBC5135F937_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 *>(__this + _offset);
	return InputFeatureUsage_1_get_name_m986856E010E34F183B7A519CF76E9FBC5135F937_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<System.Object>::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1_set_name_m381E43D77D92715FD446AF475884BBABEFAA6FAD_gshared (InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CnameU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void InputFeatureUsage_1_set_name_m381E43D77D92715FD446AF475884BBABEFAA6FAD_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 *>(__this + _offset);
	InputFeatureUsage_1_set_name_m381E43D77D92715FD446AF475884BBABEFAA6FAD_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<System.Object>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_mA8366FF400074A765C8808AB3EF9EC8A087C239B_gshared (InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 * __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___usageName0;
		InputFeatureUsage_1_set_name_m381E43D77D92715FD446AF475884BBABEFAA6FAD_inline((InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 *)(InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 *)__this, (String_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C  void InputFeatureUsage_1__ctor_mA8366FF400074A765C8808AB3EF9EC8A087C239B_AdjustorThunk (RuntimeObject * __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 *>(__this + _offset);
	InputFeatureUsage_1__ctor_mA8366FF400074A765C8808AB3EF9EC8A087C239B(_thisAdjusted, ___usageName0, method);
}
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<System.Object>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_1_Equals_m58E552AF934455C32BFCA81494BDF2B795F74DF9_gshared (InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject * L_0 = ___obj0;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject * L_2 = ___obj0;
		bool L_3 = InputFeatureUsage_1_Equals_m1FB35646C10F8A881D1AEB78F8668F2C42DA8513((InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 *)(InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 *)__this, (InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 )((*(InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 *)((InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 *)UnBox(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_1 = (bool)L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return (bool)L_4;
	}
}
IL2CPP_EXTERN_C  bool InputFeatureUsage_1_Equals_m58E552AF934455C32BFCA81494BDF2B795F74DF9_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 *>(__this + _offset);
	return InputFeatureUsage_1_Equals_m58E552AF934455C32BFCA81494BDF2B795F74DF9(_thisAdjusted, ___obj0, method);
}
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<System.Object>::Equals(UnityEngine.XR.InputFeatureUsage`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_1_Equals_m1FB35646C10F8A881D1AEB78F8668F2C42DA8513_gshared (InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 * __this, InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		String_t* L_0 = InputFeatureUsage_1_get_name_m986856E010E34F183B7A519CF76E9FBC5135F937_inline((InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 *)(InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		String_t* L_1 = InputFeatureUsage_1_get_name_m986856E010E34F183B7A519CF76E9FBC5135F937_inline((InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 *)(InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 *)(&___other0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		bool L_2 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE((String_t*)L_0, (String_t*)L_1, /*hidden argument*/NULL);
		V_0 = (bool)L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
IL2CPP_EXTERN_C  bool InputFeatureUsage_1_Equals_m1FB35646C10F8A881D1AEB78F8668F2C42DA8513_AdjustorThunk (RuntimeObject * __this, InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 *>(__this + _offset);
	return InputFeatureUsage_1_Equals_m1FB35646C10F8A881D1AEB78F8668F2C42DA8513(_thisAdjusted, ___other0, method);
}
// System.Int32 UnityEngine.XR.InputFeatureUsage`1<System.Object>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputFeatureUsage_1_GetHashCode_m588500B8DB43E81CACD7FC80C5EFF404CA5D4531_gshared (InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = InputFeatureUsage_1_get_name_m986856E010E34F183B7A519CF76E9FBC5135F937_inline((InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 *)(InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		NullCheck((RuntimeObject *)L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)L_0);
		V_0 = (int32_t)L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
IL2CPP_EXTERN_C  int32_t InputFeatureUsage_1_GetHashCode_m588500B8DB43E81CACD7FC80C5EFF404CA5D4531_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 *>(__this + _offset);
	return InputFeatureUsage_1_GetHashCode_m588500B8DB43E81CACD7FC80C5EFF404CA5D4531(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String UnityEngine.XR.InputFeatureUsage`1<System.Single>::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_1_get_name_m0B93C4D7D84F986B7E8F3875FF5415F2218A60B2_gshared (InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = (String_t*)__this->get_U3CnameU3Ek__BackingField_0();
		return (String_t*)L_0;
	}
}
IL2CPP_EXTERN_C  String_t* InputFeatureUsage_1_get_name_m0B93C4D7D84F986B7E8F3875FF5415F2218A60B2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 *>(__this + _offset);
	return InputFeatureUsage_1_get_name_m0B93C4D7D84F986B7E8F3875FF5415F2218A60B2_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<System.Single>::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1_set_name_mBA3A4DE56CA8F0B5ABA6BBF0F5D3D274D56DBE16_gshared (InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CnameU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void InputFeatureUsage_1_set_name_mBA3A4DE56CA8F0B5ABA6BBF0F5D3D274D56DBE16_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 *>(__this + _offset);
	InputFeatureUsage_1_set_name_mBA3A4DE56CA8F0B5ABA6BBF0F5D3D274D56DBE16_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<System.Single>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_mC7229AD9710B8EBA513850357B738E0FD7587B1C_gshared (InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___usageName0;
		InputFeatureUsage_1_set_name_mBA3A4DE56CA8F0B5ABA6BBF0F5D3D274D56DBE16_inline((InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 *)(InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 *)__this, (String_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C  void InputFeatureUsage_1__ctor_mC7229AD9710B8EBA513850357B738E0FD7587B1C_AdjustorThunk (RuntimeObject * __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 *>(__this + _offset);
	InputFeatureUsage_1__ctor_mC7229AD9710B8EBA513850357B738E0FD7587B1C(_thisAdjusted, ___usageName0, method);
}
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<System.Single>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_1_Equals_m008498E9F2FC1E2A387E668D4E7EE17F7252D541_gshared (InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject * L_0 = ___obj0;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject * L_2 = ___obj0;
		bool L_3 = InputFeatureUsage_1_Equals_mF25B1D914C0386DEDD34C65EB634CDC5E44BFF36((InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 *)(InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 *)__this, (InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 )((*(InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 *)((InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 *)UnBox(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_1 = (bool)L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return (bool)L_4;
	}
}
IL2CPP_EXTERN_C  bool InputFeatureUsage_1_Equals_m008498E9F2FC1E2A387E668D4E7EE17F7252D541_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 *>(__this + _offset);
	return InputFeatureUsage_1_Equals_m008498E9F2FC1E2A387E668D4E7EE17F7252D541(_thisAdjusted, ___obj0, method);
}
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<System.Single>::Equals(UnityEngine.XR.InputFeatureUsage`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_1_Equals_mF25B1D914C0386DEDD34C65EB634CDC5E44BFF36_gshared (InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * __this, InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		String_t* L_0 = InputFeatureUsage_1_get_name_m0B93C4D7D84F986B7E8F3875FF5415F2218A60B2_inline((InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 *)(InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		String_t* L_1 = InputFeatureUsage_1_get_name_m0B93C4D7D84F986B7E8F3875FF5415F2218A60B2_inline((InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 *)(InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 *)(&___other0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		bool L_2 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE((String_t*)L_0, (String_t*)L_1, /*hidden argument*/NULL);
		V_0 = (bool)L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
IL2CPP_EXTERN_C  bool InputFeatureUsage_1_Equals_mF25B1D914C0386DEDD34C65EB634CDC5E44BFF36_AdjustorThunk (RuntimeObject * __this, InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 *>(__this + _offset);
	return InputFeatureUsage_1_Equals_mF25B1D914C0386DEDD34C65EB634CDC5E44BFF36(_thisAdjusted, ___other0, method);
}
// System.Int32 UnityEngine.XR.InputFeatureUsage`1<System.Single>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputFeatureUsage_1_GetHashCode_m9992536F666651AA6EF6B05CF76B9F2A726E43D8_gshared (InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = InputFeatureUsage_1_get_name_m0B93C4D7D84F986B7E8F3875FF5415F2218A60B2_inline((InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 *)(InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		NullCheck((RuntimeObject *)L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)L_0);
		V_0 = (int32_t)L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
IL2CPP_EXTERN_C  int32_t InputFeatureUsage_1_GetHashCode_m9992536F666651AA6EF6B05CF76B9F2A726E43D8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 *>(__this + _offset);
	return InputFeatureUsage_1_GetHashCode_m9992536F666651AA6EF6B05CF76B9F2A726E43D8(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String UnityEngine.XR.InputFeatureUsage`1<System.UInt32Enum>::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_1_get_name_mD91FDF6B491CC3025F5F721BD8E2238B97AB7923_gshared (InputFeatureUsage_1_t7297B4773ACFDD5F58F69C09F25F70A4B87EBF8D * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = (String_t*)__this->get_U3CnameU3Ek__BackingField_0();
		return (String_t*)L_0;
	}
}
IL2CPP_EXTERN_C  String_t* InputFeatureUsage_1_get_name_mD91FDF6B491CC3025F5F721BD8E2238B97AB7923_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t7297B4773ACFDD5F58F69C09F25F70A4B87EBF8D * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t7297B4773ACFDD5F58F69C09F25F70A4B87EBF8D *>(__this + _offset);
	return InputFeatureUsage_1_get_name_mD91FDF6B491CC3025F5F721BD8E2238B97AB7923_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<System.UInt32Enum>::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1_set_name_m99655B755F7FA4070ABB48E4A70AC5F6AD3AF9C3_gshared (InputFeatureUsage_1_t7297B4773ACFDD5F58F69C09F25F70A4B87EBF8D * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CnameU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void InputFeatureUsage_1_set_name_m99655B755F7FA4070ABB48E4A70AC5F6AD3AF9C3_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t7297B4773ACFDD5F58F69C09F25F70A4B87EBF8D * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t7297B4773ACFDD5F58F69C09F25F70A4B87EBF8D *>(__this + _offset);
	InputFeatureUsage_1_set_name_m99655B755F7FA4070ABB48E4A70AC5F6AD3AF9C3_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<System.UInt32Enum>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_m276ED7E398BE054962338A7209FA50E4AE905D63_gshared (InputFeatureUsage_1_t7297B4773ACFDD5F58F69C09F25F70A4B87EBF8D * __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___usageName0;
		InputFeatureUsage_1_set_name_m99655B755F7FA4070ABB48E4A70AC5F6AD3AF9C3_inline((InputFeatureUsage_1_t7297B4773ACFDD5F58F69C09F25F70A4B87EBF8D *)(InputFeatureUsage_1_t7297B4773ACFDD5F58F69C09F25F70A4B87EBF8D *)__this, (String_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C  void InputFeatureUsage_1__ctor_m276ED7E398BE054962338A7209FA50E4AE905D63_AdjustorThunk (RuntimeObject * __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t7297B4773ACFDD5F58F69C09F25F70A4B87EBF8D * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t7297B4773ACFDD5F58F69C09F25F70A4B87EBF8D *>(__this + _offset);
	InputFeatureUsage_1__ctor_m276ED7E398BE054962338A7209FA50E4AE905D63(_thisAdjusted, ___usageName0, method);
}
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<System.UInt32Enum>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_1_Equals_m57FFF3869DC74B498519028A5271E2926FED9848_gshared (InputFeatureUsage_1_t7297B4773ACFDD5F58F69C09F25F70A4B87EBF8D * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject * L_0 = ___obj0;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject * L_2 = ___obj0;
		bool L_3 = InputFeatureUsage_1_Equals_m5391565B37117ABFF721DE3C375D43629417AEC9((InputFeatureUsage_1_t7297B4773ACFDD5F58F69C09F25F70A4B87EBF8D *)(InputFeatureUsage_1_t7297B4773ACFDD5F58F69C09F25F70A4B87EBF8D *)__this, (InputFeatureUsage_1_t7297B4773ACFDD5F58F69C09F25F70A4B87EBF8D )((*(InputFeatureUsage_1_t7297B4773ACFDD5F58F69C09F25F70A4B87EBF8D *)((InputFeatureUsage_1_t7297B4773ACFDD5F58F69C09F25F70A4B87EBF8D *)UnBox(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_1 = (bool)L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return (bool)L_4;
	}
}
IL2CPP_EXTERN_C  bool InputFeatureUsage_1_Equals_m57FFF3869DC74B498519028A5271E2926FED9848_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t7297B4773ACFDD5F58F69C09F25F70A4B87EBF8D * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t7297B4773ACFDD5F58F69C09F25F70A4B87EBF8D *>(__this + _offset);
	return InputFeatureUsage_1_Equals_m57FFF3869DC74B498519028A5271E2926FED9848(_thisAdjusted, ___obj0, method);
}
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<System.UInt32Enum>::Equals(UnityEngine.XR.InputFeatureUsage`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_1_Equals_m5391565B37117ABFF721DE3C375D43629417AEC9_gshared (InputFeatureUsage_1_t7297B4773ACFDD5F58F69C09F25F70A4B87EBF8D * __this, InputFeatureUsage_1_t7297B4773ACFDD5F58F69C09F25F70A4B87EBF8D  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		String_t* L_0 = InputFeatureUsage_1_get_name_mD91FDF6B491CC3025F5F721BD8E2238B97AB7923_inline((InputFeatureUsage_1_t7297B4773ACFDD5F58F69C09F25F70A4B87EBF8D *)(InputFeatureUsage_1_t7297B4773ACFDD5F58F69C09F25F70A4B87EBF8D *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		String_t* L_1 = InputFeatureUsage_1_get_name_mD91FDF6B491CC3025F5F721BD8E2238B97AB7923_inline((InputFeatureUsage_1_t7297B4773ACFDD5F58F69C09F25F70A4B87EBF8D *)(InputFeatureUsage_1_t7297B4773ACFDD5F58F69C09F25F70A4B87EBF8D *)(&___other0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		bool L_2 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE((String_t*)L_0, (String_t*)L_1, /*hidden argument*/NULL);
		V_0 = (bool)L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
IL2CPP_EXTERN_C  bool InputFeatureUsage_1_Equals_m5391565B37117ABFF721DE3C375D43629417AEC9_AdjustorThunk (RuntimeObject * __this, InputFeatureUsage_1_t7297B4773ACFDD5F58F69C09F25F70A4B87EBF8D  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t7297B4773ACFDD5F58F69C09F25F70A4B87EBF8D * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t7297B4773ACFDD5F58F69C09F25F70A4B87EBF8D *>(__this + _offset);
	return InputFeatureUsage_1_Equals_m5391565B37117ABFF721DE3C375D43629417AEC9(_thisAdjusted, ___other0, method);
}
// System.Int32 UnityEngine.XR.InputFeatureUsage`1<System.UInt32Enum>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputFeatureUsage_1_GetHashCode_mCF83B00D79F97EF681C185658A50C144F9FE7206_gshared (InputFeatureUsage_1_t7297B4773ACFDD5F58F69C09F25F70A4B87EBF8D * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = InputFeatureUsage_1_get_name_mD91FDF6B491CC3025F5F721BD8E2238B97AB7923_inline((InputFeatureUsage_1_t7297B4773ACFDD5F58F69C09F25F70A4B87EBF8D *)(InputFeatureUsage_1_t7297B4773ACFDD5F58F69C09F25F70A4B87EBF8D *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		NullCheck((RuntimeObject *)L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)L_0);
		V_0 = (int32_t)L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
IL2CPP_EXTERN_C  int32_t InputFeatureUsage_1_GetHashCode_mCF83B00D79F97EF681C185658A50C144F9FE7206_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t7297B4773ACFDD5F58F69C09F25F70A4B87EBF8D * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t7297B4773ACFDD5F58F69C09F25F70A4B87EBF8D *>(__this + _offset);
	return InputFeatureUsage_1_GetHashCode_mCF83B00D79F97EF681C185658A50C144F9FE7206(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_1_get_name_m29153C47FF6FB8C8E63028FA4206F0092C6F88D1_gshared (InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = (String_t*)__this->get_U3CnameU3Ek__BackingField_0();
		return (String_t*)L_0;
	}
}
IL2CPP_EXTERN_C  String_t* InputFeatureUsage_1_get_name_m29153C47FF6FB8C8E63028FA4206F0092C6F88D1_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 *>(__this + _offset);
	return InputFeatureUsage_1_get_name_m29153C47FF6FB8C8E63028FA4206F0092C6F88D1_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1_set_name_m64E2C297CAC54F998DA45F1BA04094DCF22251FF_gshared (InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CnameU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void InputFeatureUsage_1_set_name_m64E2C297CAC54F998DA45F1BA04094DCF22251FF_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 *>(__this + _offset);
	InputFeatureUsage_1_set_name_m64E2C297CAC54F998DA45F1BA04094DCF22251FF_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_m3B59FD20FA1B25E7917D8C886A130AA6AC210054_gshared (InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___usageName0;
		InputFeatureUsage_1_set_name_m64E2C297CAC54F998DA45F1BA04094DCF22251FF_inline((InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 *)(InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 *)__this, (String_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C  void InputFeatureUsage_1__ctor_m3B59FD20FA1B25E7917D8C886A130AA6AC210054_AdjustorThunk (RuntimeObject * __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 *>(__this + _offset);
	InputFeatureUsage_1__ctor_m3B59FD20FA1B25E7917D8C886A130AA6AC210054(_thisAdjusted, ___usageName0, method);
}
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_1_Equals_mBC9EF1D43D70CEC4575D8F7905AD93F0F5320678_gshared (InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject * L_0 = ___obj0;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject * L_2 = ___obj0;
		bool L_3 = InputFeatureUsage_1_Equals_m1D49D3B859269709529967B8B3C05157D0CF2F02((InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 *)(InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 *)__this, (InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 )((*(InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 *)((InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 *)UnBox(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_1 = (bool)L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return (bool)L_4;
	}
}
IL2CPP_EXTERN_C  bool InputFeatureUsage_1_Equals_mBC9EF1D43D70CEC4575D8F7905AD93F0F5320678_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 *>(__this + _offset);
	return InputFeatureUsage_1_Equals_mBC9EF1D43D70CEC4575D8F7905AD93F0F5320678(_thisAdjusted, ___obj0, method);
}
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>::Equals(UnityEngine.XR.InputFeatureUsage`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_1_Equals_m1D49D3B859269709529967B8B3C05157D0CF2F02_gshared (InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * __this, InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		String_t* L_0 = InputFeatureUsage_1_get_name_m29153C47FF6FB8C8E63028FA4206F0092C6F88D1_inline((InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 *)(InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		String_t* L_1 = InputFeatureUsage_1_get_name_m29153C47FF6FB8C8E63028FA4206F0092C6F88D1_inline((InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 *)(InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 *)(&___other0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		bool L_2 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE((String_t*)L_0, (String_t*)L_1, /*hidden argument*/NULL);
		V_0 = (bool)L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
IL2CPP_EXTERN_C  bool InputFeatureUsage_1_Equals_m1D49D3B859269709529967B8B3C05157D0CF2F02_AdjustorThunk (RuntimeObject * __this, InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 *>(__this + _offset);
	return InputFeatureUsage_1_Equals_m1D49D3B859269709529967B8B3C05157D0CF2F02(_thisAdjusted, ___other0, method);
}
// System.Int32 UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputFeatureUsage_1_GetHashCode_m636CCD8DE451B1E8A862AE81B3E53CA4390A4CA1_gshared (InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = InputFeatureUsage_1_get_name_m29153C47FF6FB8C8E63028FA4206F0092C6F88D1_inline((InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 *)(InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		NullCheck((RuntimeObject *)L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)L_0);
		V_0 = (int32_t)L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
IL2CPP_EXTERN_C  int32_t InputFeatureUsage_1_GetHashCode_m636CCD8DE451B1E8A862AE81B3E53CA4390A4CA1_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 *>(__this + _offset);
	return InputFeatureUsage_1_GetHashCode_m636CCD8DE451B1E8A862AE81B3E53CA4390A4CA1(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2>::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_1_get_name_m7F6B322542926549FC0ABE214734CCE487014CAA_gshared (InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = (String_t*)__this->get_U3CnameU3Ek__BackingField_0();
		return (String_t*)L_0;
	}
}
IL2CPP_EXTERN_C  String_t* InputFeatureUsage_1_get_name_m7F6B322542926549FC0ABE214734CCE487014CAA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A *>(__this + _offset);
	return InputFeatureUsage_1_get_name_m7F6B322542926549FC0ABE214734CCE487014CAA_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2>::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1_set_name_m3D2A0A63C99B5D1AF2BA400A25D4AAF6EBC095DB_gshared (InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CnameU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void InputFeatureUsage_1_set_name_m3D2A0A63C99B5D1AF2BA400A25D4AAF6EBC095DB_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A *>(__this + _offset);
	InputFeatureUsage_1_set_name_m3D2A0A63C99B5D1AF2BA400A25D4AAF6EBC095DB_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_mE2F7F992A3067FC468DA8DD417E218C4276C10B8_gshared (InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A * __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___usageName0;
		InputFeatureUsage_1_set_name_m3D2A0A63C99B5D1AF2BA400A25D4AAF6EBC095DB_inline((InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A *)(InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A *)__this, (String_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C  void InputFeatureUsage_1__ctor_mE2F7F992A3067FC468DA8DD417E218C4276C10B8_AdjustorThunk (RuntimeObject * __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A *>(__this + _offset);
	InputFeatureUsage_1__ctor_mE2F7F992A3067FC468DA8DD417E218C4276C10B8(_thisAdjusted, ___usageName0, method);
}
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_1_Equals_m365D41C6C88100FDCA1544FFC80C03B71CB01C3A_gshared (InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject * L_0 = ___obj0;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject * L_2 = ___obj0;
		bool L_3 = InputFeatureUsage_1_Equals_mA1EF7ED40CAFEC0E40B7E528433F266FBC73A690((InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A *)(InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A *)__this, (InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A )((*(InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A *)((InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A *)UnBox(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_1 = (bool)L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return (bool)L_4;
	}
}
IL2CPP_EXTERN_C  bool InputFeatureUsage_1_Equals_m365D41C6C88100FDCA1544FFC80C03B71CB01C3A_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A *>(__this + _offset);
	return InputFeatureUsage_1_Equals_m365D41C6C88100FDCA1544FFC80C03B71CB01C3A(_thisAdjusted, ___obj0, method);
}
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2>::Equals(UnityEngine.XR.InputFeatureUsage`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_1_Equals_mA1EF7ED40CAFEC0E40B7E528433F266FBC73A690_gshared (InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A * __this, InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		String_t* L_0 = InputFeatureUsage_1_get_name_m7F6B322542926549FC0ABE214734CCE487014CAA_inline((InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A *)(InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		String_t* L_1 = InputFeatureUsage_1_get_name_m7F6B322542926549FC0ABE214734CCE487014CAA_inline((InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A *)(InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A *)(&___other0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		bool L_2 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE((String_t*)L_0, (String_t*)L_1, /*hidden argument*/NULL);
		V_0 = (bool)L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
IL2CPP_EXTERN_C  bool InputFeatureUsage_1_Equals_mA1EF7ED40CAFEC0E40B7E528433F266FBC73A690_AdjustorThunk (RuntimeObject * __this, InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A *>(__this + _offset);
	return InputFeatureUsage_1_Equals_mA1EF7ED40CAFEC0E40B7E528433F266FBC73A690(_thisAdjusted, ___other0, method);
}
// System.Int32 UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputFeatureUsage_1_GetHashCode_m5738C6AEDF63738EB30A4D6F89B698C6F895ED0A_gshared (InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = InputFeatureUsage_1_get_name_m7F6B322542926549FC0ABE214734CCE487014CAA_inline((InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A *)(InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		NullCheck((RuntimeObject *)L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)L_0);
		V_0 = (int32_t)L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
IL2CPP_EXTERN_C  int32_t InputFeatureUsage_1_GetHashCode_m5738C6AEDF63738EB30A4D6F89B698C6F895ED0A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A *>(__this + _offset);
	return InputFeatureUsage_1_GetHashCode_m5738C6AEDF63738EB30A4D6F89B698C6F895ED0A(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_1_get_name_mC2BA903C90FBEB270B18F098CBE94784B43D03C1_gshared (InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = (String_t*)__this->get_U3CnameU3Ek__BackingField_0();
		return (String_t*)L_0;
	}
}
IL2CPP_EXTERN_C  String_t* InputFeatureUsage_1_get_name_mC2BA903C90FBEB270B18F098CBE94784B43D03C1_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 *>(__this + _offset);
	return InputFeatureUsage_1_get_name_mC2BA903C90FBEB270B18F098CBE94784B43D03C1_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1_set_name_mDBCA9524945C814FED4B07892E213D182123206A_gshared (InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CnameU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void InputFeatureUsage_1_set_name_mDBCA9524945C814FED4B07892E213D182123206A_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 *>(__this + _offset);
	InputFeatureUsage_1_set_name_mDBCA9524945C814FED4B07892E213D182123206A_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_m3515B2BCA28829CC3D2D542F921D097E4756B3A0_gshared (InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___usageName0;
		InputFeatureUsage_1_set_name_mDBCA9524945C814FED4B07892E213D182123206A_inline((InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 *)(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 *)__this, (String_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C  void InputFeatureUsage_1__ctor_m3515B2BCA28829CC3D2D542F921D097E4756B3A0_AdjustorThunk (RuntimeObject * __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 *>(__this + _offset);
	InputFeatureUsage_1__ctor_m3515B2BCA28829CC3D2D542F921D097E4756B3A0(_thisAdjusted, ___usageName0, method);
}
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_1_Equals_m4CFF311B75A14CBE1EF1C3ED663E5EBB13E84746_gshared (InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject * L_0 = ___obj0;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject * L_2 = ___obj0;
		bool L_3 = InputFeatureUsage_1_Equals_mACCAF974C7E4BC10A0326C1F1CF8BCB9AB061484((InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 *)(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 *)__this, (InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 )((*(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 *)((InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 *)UnBox(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_1 = (bool)L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return (bool)L_4;
	}
}
IL2CPP_EXTERN_C  bool InputFeatureUsage_1_Equals_m4CFF311B75A14CBE1EF1C3ED663E5EBB13E84746_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 *>(__this + _offset);
	return InputFeatureUsage_1_Equals_m4CFF311B75A14CBE1EF1C3ED663E5EBB13E84746(_thisAdjusted, ___obj0, method);
}
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>::Equals(UnityEngine.XR.InputFeatureUsage`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_1_Equals_mACCAF974C7E4BC10A0326C1F1CF8BCB9AB061484_gshared (InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * __this, InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		String_t* L_0 = InputFeatureUsage_1_get_name_mC2BA903C90FBEB270B18F098CBE94784B43D03C1_inline((InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 *)(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		String_t* L_1 = InputFeatureUsage_1_get_name_mC2BA903C90FBEB270B18F098CBE94784B43D03C1_inline((InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 *)(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 *)(&___other0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		bool L_2 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE((String_t*)L_0, (String_t*)L_1, /*hidden argument*/NULL);
		V_0 = (bool)L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
IL2CPP_EXTERN_C  bool InputFeatureUsage_1_Equals_mACCAF974C7E4BC10A0326C1F1CF8BCB9AB061484_AdjustorThunk (RuntimeObject * __this, InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 *>(__this + _offset);
	return InputFeatureUsage_1_Equals_mACCAF974C7E4BC10A0326C1F1CF8BCB9AB061484(_thisAdjusted, ___other0, method);
}
// System.Int32 UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputFeatureUsage_1_GetHashCode_m31F2DC4020D409D1E4F43B2FE21897A2E33AE0FA_gshared (InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = InputFeatureUsage_1_get_name_mC2BA903C90FBEB270B18F098CBE94784B43D03C1_inline((InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 *)(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		NullCheck((RuntimeObject *)L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)L_0);
		V_0 = (int32_t)L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
IL2CPP_EXTERN_C  int32_t InputFeatureUsage_1_GetHashCode_m31F2DC4020D409D1E4F43B2FE21897A2E33AE0FA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 *>(__this + _offset);
	return InputFeatureUsage_1_GetHashCode_m31F2DC4020D409D1E4F43B2FE21897A2E33AE0FA(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes>::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_1_get_name_m699DA5870A9BF21E697FACFC6589A3F2370F039B_gshared (InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = (String_t*)__this->get_U3CnameU3Ek__BackingField_0();
		return (String_t*)L_0;
	}
}
IL2CPP_EXTERN_C  String_t* InputFeatureUsage_1_get_name_m699DA5870A9BF21E697FACFC6589A3F2370F039B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 *>(__this + _offset);
	return InputFeatureUsage_1_get_name_m699DA5870A9BF21E697FACFC6589A3F2370F039B_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes>::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1_set_name_m2D93EEC13BF0AD5F0368EB7FC94EE7A0BBD801A3_gshared (InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CnameU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void InputFeatureUsage_1_set_name_m2D93EEC13BF0AD5F0368EB7FC94EE7A0BBD801A3_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 *>(__this + _offset);
	InputFeatureUsage_1_set_name_m2D93EEC13BF0AD5F0368EB7FC94EE7A0BBD801A3_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_m8D45A935C96C0C635D2CAE69913C0CBA008BDCE3_gshared (InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 * __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___usageName0;
		InputFeatureUsage_1_set_name_m2D93EEC13BF0AD5F0368EB7FC94EE7A0BBD801A3_inline((InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 *)(InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 *)__this, (String_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C  void InputFeatureUsage_1__ctor_m8D45A935C96C0C635D2CAE69913C0CBA008BDCE3_AdjustorThunk (RuntimeObject * __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 *>(__this + _offset);
	InputFeatureUsage_1__ctor_m8D45A935C96C0C635D2CAE69913C0CBA008BDCE3(_thisAdjusted, ___usageName0, method);
}
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_1_Equals_m1E7DEF80A8743FD014505EDD2AB776F59897DFDD_gshared (InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject * L_0 = ___obj0;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject * L_2 = ___obj0;
		bool L_3 = InputFeatureUsage_1_Equals_m1D7B7ACAA8DB8A12CD63C4C5EC8E173C15402A01((InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 *)(InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 *)__this, (InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 )((*(InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 *)((InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 *)UnBox(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_1 = (bool)L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return (bool)L_4;
	}
}
IL2CPP_EXTERN_C  bool InputFeatureUsage_1_Equals_m1E7DEF80A8743FD014505EDD2AB776F59897DFDD_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 *>(__this + _offset);
	return InputFeatureUsage_1_Equals_m1E7DEF80A8743FD014505EDD2AB776F59897DFDD(_thisAdjusted, ___obj0, method);
}
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes>::Equals(UnityEngine.XR.InputFeatureUsage`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_1_Equals_m1D7B7ACAA8DB8A12CD63C4C5EC8E173C15402A01_gshared (InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 * __this, InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		String_t* L_0 = InputFeatureUsage_1_get_name_m699DA5870A9BF21E697FACFC6589A3F2370F039B_inline((InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 *)(InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		String_t* L_1 = InputFeatureUsage_1_get_name_m699DA5870A9BF21E697FACFC6589A3F2370F039B_inline((InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 *)(InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 *)(&___other0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		bool L_2 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE((String_t*)L_0, (String_t*)L_1, /*hidden argument*/NULL);
		V_0 = (bool)L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
IL2CPP_EXTERN_C  bool InputFeatureUsage_1_Equals_m1D7B7ACAA8DB8A12CD63C4C5EC8E173C15402A01_AdjustorThunk (RuntimeObject * __this, InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 *>(__this + _offset);
	return InputFeatureUsage_1_Equals_m1D7B7ACAA8DB8A12CD63C4C5EC8E173C15402A01(_thisAdjusted, ___other0, method);
}
// System.Int32 UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputFeatureUsage_1_GetHashCode_mADF72423508FEA9E58E717C94021FAEE8CCCD597_gshared (InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = InputFeatureUsage_1_get_name_m699DA5870A9BF21E697FACFC6589A3F2370F039B_inline((InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 *)(InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		NullCheck((RuntimeObject *)L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)L_0);
		V_0 = (int32_t)L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
IL2CPP_EXTERN_C  int32_t InputFeatureUsage_1_GetHashCode_mADF72423508FEA9E58E717C94021FAEE8CCCD597_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 *>(__this + _offset);
	return InputFeatureUsage_1_GetHashCode_mADF72423508FEA9E58E717C94021FAEE8CCCD597(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_1_get_name_mB9B1E3F3BDC0D763D76A6C24B2971F3645F738FB_gshared (InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = (String_t*)__this->get_U3CnameU3Ek__BackingField_0();
		return (String_t*)L_0;
	}
}
IL2CPP_EXTERN_C  String_t* InputFeatureUsage_1_get_name_mB9B1E3F3BDC0D763D76A6C24B2971F3645F738FB_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF *>(__this + _offset);
	return InputFeatureUsage_1_get_name_mB9B1E3F3BDC0D763D76A6C24B2971F3645F738FB_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1_set_name_m9EF61B0529C323B6516D53487886B4E31FD68ED0_gshared (InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CnameU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void InputFeatureUsage_1_set_name_m9EF61B0529C323B6516D53487886B4E31FD68ED0_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF *>(__this + _offset);
	InputFeatureUsage_1_set_name_m9EF61B0529C323B6516D53487886B4E31FD68ED0_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_m64DE4780A339D8989009F70CC22C910EC3F28C6F_gshared (InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF * __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___usageName0;
		InputFeatureUsage_1_set_name_m9EF61B0529C323B6516D53487886B4E31FD68ED0_inline((InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF *)(InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF *)__this, (String_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C  void InputFeatureUsage_1__ctor_m64DE4780A339D8989009F70CC22C910EC3F28C6F_AdjustorThunk (RuntimeObject * __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF *>(__this + _offset);
	InputFeatureUsage_1__ctor_m64DE4780A339D8989009F70CC22C910EC3F28C6F(_thisAdjusted, ___usageName0, method);
}
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_1_Equals_mC60CA85D6903AADCCFE24F2B47FBCA38912CA3BA_gshared (InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject * L_0 = ___obj0;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject * L_2 = ___obj0;
		bool L_3 = InputFeatureUsage_1_Equals_m5E36D2B168BB2BE17A6B595AA19524E25E43EB23((InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF *)(InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF *)__this, (InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF )((*(InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF *)((InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF *)UnBox(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_1 = (bool)L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return (bool)L_4;
	}
}
IL2CPP_EXTERN_C  bool InputFeatureUsage_1_Equals_mC60CA85D6903AADCCFE24F2B47FBCA38912CA3BA_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF *>(__this + _offset);
	return InputFeatureUsage_1_Equals_mC60CA85D6903AADCCFE24F2B47FBCA38912CA3BA(_thisAdjusted, ___obj0, method);
}
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>::Equals(UnityEngine.XR.InputFeatureUsage`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_1_Equals_m5E36D2B168BB2BE17A6B595AA19524E25E43EB23_gshared (InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF * __this, InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		String_t* L_0 = InputFeatureUsage_1_get_name_mB9B1E3F3BDC0D763D76A6C24B2971F3645F738FB_inline((InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF *)(InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		String_t* L_1 = InputFeatureUsage_1_get_name_mB9B1E3F3BDC0D763D76A6C24B2971F3645F738FB_inline((InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF *)(InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF *)(&___other0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		bool L_2 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE((String_t*)L_0, (String_t*)L_1, /*hidden argument*/NULL);
		V_0 = (bool)L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
IL2CPP_EXTERN_C  bool InputFeatureUsage_1_Equals_m5E36D2B168BB2BE17A6B595AA19524E25E43EB23_AdjustorThunk (RuntimeObject * __this, InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF *>(__this + _offset);
	return InputFeatureUsage_1_Equals_m5E36D2B168BB2BE17A6B595AA19524E25E43EB23(_thisAdjusted, ___other0, method);
}
// System.Int32 UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputFeatureUsage_1_GetHashCode_mC5069ABE58109235CBD00DBC3AE9E14FE9464F7B_gshared (InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = InputFeatureUsage_1_get_name_mB9B1E3F3BDC0D763D76A6C24B2971F3645F738FB_inline((InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF *)(InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		NullCheck((RuntimeObject *)L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)L_0);
		V_0 = (int32_t)L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
IL2CPP_EXTERN_C  int32_t InputFeatureUsage_1_GetHashCode_mC5069ABE58109235CBD00DBC3AE9E14FE9464F7B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF *>(__this + _offset);
	return InputFeatureUsage_1_GetHashCode_mC5069ABE58109235CBD00DBC3AE9E14FE9464F7B(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_1_get_name_m903AED0104CEFB362CB3C95F7E914CEF22391C05_gshared_inline (InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = (String_t*)__this->get_U3CnameU3Ek__BackingField_0();
		return (String_t*)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void InputFeatureUsage_1_set_name_mE26954497B6DFC1BC4B35527BC1FE45E8DD3325C_gshared_inline (InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CnameU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_1_get_name_m986856E010E34F183B7A519CF76E9FBC5135F937_gshared_inline (InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = (String_t*)__this->get_U3CnameU3Ek__BackingField_0();
		return (String_t*)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void InputFeatureUsage_1_set_name_m381E43D77D92715FD446AF475884BBABEFAA6FAD_gshared_inline (InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CnameU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_1_get_name_m0B93C4D7D84F986B7E8F3875FF5415F2218A60B2_gshared_inline (InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = (String_t*)__this->get_U3CnameU3Ek__BackingField_0();
		return (String_t*)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void InputFeatureUsage_1_set_name_mBA3A4DE56CA8F0B5ABA6BBF0F5D3D274D56DBE16_gshared_inline (InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CnameU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_1_get_name_mD91FDF6B491CC3025F5F721BD8E2238B97AB7923_gshared_inline (InputFeatureUsage_1_t7297B4773ACFDD5F58F69C09F25F70A4B87EBF8D * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = (String_t*)__this->get_U3CnameU3Ek__BackingField_0();
		return (String_t*)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void InputFeatureUsage_1_set_name_m99655B755F7FA4070ABB48E4A70AC5F6AD3AF9C3_gshared_inline (InputFeatureUsage_1_t7297B4773ACFDD5F58F69C09F25F70A4B87EBF8D * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CnameU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_1_get_name_m29153C47FF6FB8C8E63028FA4206F0092C6F88D1_gshared_inline (InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = (String_t*)__this->get_U3CnameU3Ek__BackingField_0();
		return (String_t*)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void InputFeatureUsage_1_set_name_m64E2C297CAC54F998DA45F1BA04094DCF22251FF_gshared_inline (InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CnameU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_1_get_name_m7F6B322542926549FC0ABE214734CCE487014CAA_gshared_inline (InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = (String_t*)__this->get_U3CnameU3Ek__BackingField_0();
		return (String_t*)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void InputFeatureUsage_1_set_name_m3D2A0A63C99B5D1AF2BA400A25D4AAF6EBC095DB_gshared_inline (InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CnameU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_1_get_name_mC2BA903C90FBEB270B18F098CBE94784B43D03C1_gshared_inline (InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = (String_t*)__this->get_U3CnameU3Ek__BackingField_0();
		return (String_t*)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void InputFeatureUsage_1_set_name_mDBCA9524945C814FED4B07892E213D182123206A_gshared_inline (InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CnameU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_1_get_name_m699DA5870A9BF21E697FACFC6589A3F2370F039B_gshared_inline (InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = (String_t*)__this->get_U3CnameU3Ek__BackingField_0();
		return (String_t*)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void InputFeatureUsage_1_set_name_m2D93EEC13BF0AD5F0368EB7FC94EE7A0BBD801A3_gshared_inline (InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CnameU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_1_get_name_mB9B1E3F3BDC0D763D76A6C24B2971F3645F738FB_gshared_inline (InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = (String_t*)__this->get_U3CnameU3Ek__BackingField_0();
		return (String_t*)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void InputFeatureUsage_1_set_name_m9EF61B0529C323B6516D53487886B4E31FD68ED0_gshared_inline (InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CnameU3Ek__BackingField_0(L_0);
		return;
	}
}
