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

struct t1349;

#include "codegen/il2cpp-codegen.h"

extern "C" void m8084_gshared (t1349 * __this, const MethodInfo* method);
#define m8084(__this, method) (( void (*) (t1349 *, const MethodInfo*))m8084_gshared)(__this, method)
