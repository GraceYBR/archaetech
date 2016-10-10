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

struct t1351;

#include "codegen/il2cpp-codegen.h"

extern "C" void m8086_gshared (t1351 * __this, const MethodInfo* method);
#define m8086(__this, method) (( void (*) (t1351 *, const MethodInfo*))m8086_gshared)(__this, method)
