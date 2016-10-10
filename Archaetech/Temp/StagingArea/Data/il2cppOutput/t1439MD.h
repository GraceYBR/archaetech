#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

struct t1439;
struct t14;

#include "codegen/il2cpp-codegen.h"

extern "C" void m8821_gshared (t1439 * __this, const MethodInfo* method);
#define m8821(__this, method) (( void (*) (t1439 *, const MethodInfo*))m8821_gshared)(__this, method)
extern "C" int32_t m8822_gshared (t1439 * __this, t14 * p0, const MethodInfo* method);
#define m8822(__this, p0, method) (( int32_t (*) (t1439 *, t14 *, const MethodInfo*))m8822_gshared)(__this, p0, method)
extern "C" bool m8823_gshared (t1439 * __this, t14 * p0, t14 * p1, const MethodInfo* method);
#define m8823(__this, p0, p1, method) (( bool (*) (t1439 *, t14 *, t14 *, const MethodInfo*))m8823_gshared)(__this, p0, p1, method)
