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

struct t1372;

#include "codegen/il2cpp-codegen.h"

extern "C" void m8250_gshared (t1372 * __this, const MethodInfo* method);
#define m8250(__this, method) (( void (*) (t1372 *, const MethodInfo*))m8250_gshared)(__this, method)
extern "C" int32_t m8251_gshared (t1372 * __this, bool p0, const MethodInfo* method);
#define m8251(__this, p0, method) (( int32_t (*) (t1372 *, bool, const MethodInfo*))m8251_gshared)(__this, p0, method)
extern "C" bool m8252_gshared (t1372 * __this, bool p0, bool p1, const MethodInfo* method);
#define m8252(__this, p0, p1, method) (( bool (*) (t1372 *, bool, bool, const MethodInfo*))m8252_gshared)(__this, p0, p1, method)
