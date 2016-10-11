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

// OnTap
struct OnTap_t76319012;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array1146569071.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790MethodDeclarations.h"
#include "AssemblyU2DCSharp_OnTap76319012.h"
#include "AssemblyU2DCSharp_OnTap76319012MethodDeclarations.h"
#include "mscorlib_System_Void2863195528.h"
#include "UnityEngine_UnityEngine_MonoBehaviour667441552MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Input4200062272MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Debug4195163081MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Camera2727095145MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector24282066565MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Physics3358180733MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component3501516275MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Touch4210255029.h"
#include "UnityEngine_ArrayTypes.h"
#include "mscorlib_System_Int321153838500.h"
#include "UnityEngine_UnityEngine_Ray3134616544.h"
#include "UnityEngine_UnityEngine_RaycastHit4003175726.h"
#include "UnityEngine_UnityEngine_TouchPhase1567063616.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Object4170816371.h"
#include "UnityEngine_UnityEngine_Camera2727095145.h"
#include "UnityEngine_UnityEngine_Touch4210255029MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "mscorlib_System_Boolean476798718.h"
#include "UnityEngine_UnityEngine_RaycastHit4003175726MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Collider2939674232.h"
#include "UnityEngine_UnityEngine_SendMessageOptions3856946179.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void OnTap::.ctor()
extern "C"  void OnTap__ctor_m684148935 (OnTap_t76319012 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void OnTap::Start()
extern "C"  void OnTap_Start_m3926254023 (OnTap_t76319012 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void OnTap::Update()
extern Il2CppClass* Input_t4200062272_il2cpp_TypeInfo_var;
extern Il2CppClass* Debug_t4195163081_il2cpp_TypeInfo_var;
extern Il2CppClass* Boolean_t476798718_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2172626842;
extern Il2CppCodeGenString* _stringLiteral1990551251;
extern Il2CppCodeGenString* _stringLiteral2000397634;
extern const uint32_t OnTap_Update_m1460642598_MetadataUsageId;
extern "C"  void OnTap_Update_m1460642598 (OnTap_t76319012 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (OnTap_Update_m1460642598_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Touch_t4210255029  V_0;
	memset(&V_0, 0, sizeof(V_0));
	TouchU5BU5D_t3635654872* V_1 = NULL;
	int32_t V_2 = 0;
	Ray_t3134616544  V_3;
	memset(&V_3, 0, sizeof(V_3));
	RaycastHit_t4003175726  V_4;
	memset(&V_4, 0, sizeof(V_4));
	int32_t V_5 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		TouchU5BU5D_t3635654872* L_0 = Input_get_touches_m300368858(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_0;
		V_2 = 0;
		goto IL_00ab;
	}

IL_000d:
	{
		TouchU5BU5D_t3635654872* L_1 = V_1;
		int32_t L_2 = V_2;
		V_0 = (*(Touch_t4210255029 *)((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2))));
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t4195163081_il2cpp_TypeInfo_var);
		Debug_Log_m1731103628(NULL /*static, unused*/, _stringLiteral2172626842, /*hidden argument*/NULL);
		Camera_t2727095145 * L_3 = Camera_get_main_m671815697(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t4282066565  L_4 = Touch_get_position_m1943849441((&V_0), /*hidden argument*/NULL);
		Vector3_t4282066566  L_5 = Vector2_op_Implicit_m482286037(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		Ray_t3134616544  L_6 = Camera_ScreenPointToRay_m1733083890(L_3, L_5, /*hidden argument*/NULL);
		V_3 = L_6;
		Ray_t3134616544  L_7 = V_3;
		bool L_8 = Physics_Raycast_m1343340263(NULL /*static, unused*/, L_7, (&V_4), /*hidden argument*/NULL);
		bool L_9 = L_8;
		Il2CppObject * L_10 = Box(Boolean_t476798718_il2cpp_TypeInfo_var, &L_9);
		Debug_Log_m1731103628(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		Ray_t3134616544  L_11 = V_3;
		bool L_12 = Physics_Raycast_m1343340263(NULL /*static, unused*/, L_11, (&V_4), /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_00a7;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t4195163081_il2cpp_TypeInfo_var);
		Debug_Log_m1731103628(NULL /*static, unused*/, _stringLiteral1990551251, /*hidden argument*/NULL);
		int32_t L_13 = Touch_get_phase_m3314549414((&V_0), /*hidden argument*/NULL);
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
		Collider_t2939674232 * L_15 = RaycastHit_get_collider_m3116882274((&V_4), /*hidden argument*/NULL);
		Component_SendMessage_m1163914169(L_15, _stringLiteral2000397634, NULL, 1, /*hidden argument*/NULL);
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
		TouchU5BU5D_t3635654872* L_18 = V_1;
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_18)->max_length)))))))
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
