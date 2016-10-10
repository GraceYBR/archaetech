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

struct t1;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "t3.h"
#include "t0.h"
#include "t0MD.h"
#include "t1.h"
#include "t1MD.h"
#include "t4.h"
#include "t2MD.h"
#include "t11MD.h"
#include "t13MD.h"
#include "t15MD.h"
#include "t5MD.h"
#include "t16MD.h"
#include "t18MD.h"
#include "t9MD.h"
#include "t21MD.h"
#include "t5.h"
#include "UnityEngine_ArrayTypes.h"
#include "t7.h"
#include "t8.h"
#include "t9.h"
#include "t10.h"
#include "t12.h"
#include "t14.h"
#include "t15.h"
#include "t16.h"
#include "t17.h"
#include "t19.h"
#include "t20.h"
#include "t22.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void m0 (t1 * __this, const MethodInfo* method)
{
	{
		m3(__this, NULL);
		return;
	}
}
extern "C" void m1 (t1 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
extern TypeInfo* t11_TI_var;
extern TypeInfo* t19_TI_var;
extern Il2CppCodeGenString* _stringLiteral0;
extern Il2CppCodeGenString* _stringLiteral1;
extern Il2CppCodeGenString* _stringLiteral2;
extern "C" void m2 (t1 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t11_TI_var = il2cpp_codegen_type_info_from_index(1);
		t19_TI_var = il2cpp_codegen_type_info_from_index(2);
		_stringLiteral0 = il2cpp_codegen_string_literal_from_index(0);
		_stringLiteral1 = il2cpp_codegen_string_literal_from_index(1);
		_stringLiteral2 = il2cpp_codegen_string_literal_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	t5  V_0 = {0};
	t6* V_1 = {0};
	int32_t V_2 = 0;
	t8  V_3 = {0};
	t9  V_4 = {0};
	int32_t V_5 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(t11_TI_var);
		t6* L_0 = m4(NULL, NULL);
		V_1 = L_0;
		V_2 = 0;
		goto IL_00ab;
	}

IL_000d:
	{
		t6* L_1 = V_1;
		int32_t L_2 = V_2;
		V_0 = (*(t5 *)((t5 *)(t5 *)SZArrayLdElema(L_1, L_2, sizeof(t5 ))));
		m5(NULL, _stringLiteral0, NULL);
		t15 * L_3 = m6(NULL, NULL);
		t16  L_4 = m7((&V_0), NULL);
		t17  L_5 = m8(NULL, L_4, NULL);
		t8  L_6 = m9(L_3, L_5, NULL);
		V_3 = L_6;
		t8  L_7 = V_3;
		bool L_8 = m10(NULL, L_7, (&V_4), NULL);
		bool L_9 = L_8;
		t14 * L_10 = Box(t19_TI_var, &L_9);
		m5(NULL, L_10, NULL);
		t8  L_11 = V_3;
		bool L_12 = m10(NULL, L_11, (&V_4), NULL);
		if (!L_12)
		{
			goto IL_00a7;
		}
	}
	{
		m5(NULL, _stringLiteral1, NULL);
		int32_t L_13 = m11((&V_0), NULL);
		V_5 = L_13;
		int32_t L_14 = V_5;
		if (L_14 == 0)
		{
			goto IL_0085;
		}
		if (L_14 == 1)
		{
			goto IL_009d;
		}
		if (L_14 == 2)
		{
			goto IL_009d;
		}
	}
	{
		goto IL_00a2;
	}

IL_0085:
	{
		t20 * L_15 = m12((&V_4), NULL);
		m13(L_15, _stringLiteral2, NULL, 1, NULL);
		goto IL_00a7;
	}

IL_009d:
	{
		goto IL_00a7;
	}

IL_00a2:
	{
		goto IL_00a7;
	}

IL_00a7:
	{
		int32_t L_16 = V_2;
		V_2 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_00ab:
	{
		int32_t L_17 = V_2;
		t6* L_18 = V_1;
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)((int32_t)(((t3 *)L_18)->max_length)))))))
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
