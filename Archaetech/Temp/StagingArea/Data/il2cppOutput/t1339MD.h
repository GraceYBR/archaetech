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

struct t1339;
struct t14;

#include "codegen/il2cpp-codegen.h"

extern "C" void m7975_gshared (t1339 * __this, const MethodInfo* method);
#define m7975(__this, method) (( void (*) (t1339 *, const MethodInfo*))m7975_gshared)(__this, method)
extern "C" int32_t m7976_gshared (t1339 * __this, t14 * p0, const MethodInfo* method);
#define m7976(__this, p0, method) (( int32_t (*) (t1339 *, t14 *, const MethodInfo*))m7976_gshared)(__this, p0, method)
extern "C" bool m7977_gshared (t1339 * __this, t14 * p0, t14 * p1, const MethodInfo* method);
#define m7977(__this, p0, p1, method) (( bool (*) (t1339 *, t14 *, t14 *, const MethodInfo*))m7977_gshared)(__this, p0, p1, method)
