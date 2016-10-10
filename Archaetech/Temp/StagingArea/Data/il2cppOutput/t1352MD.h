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

struct t1352;

#include "codegen/il2cpp-codegen.h"

extern "C" void m8087_gshared (t1352 * __this, const MethodInfo* method);
#define m8087(__this, method) (( void (*) (t1352 *, const MethodInfo*))m8087_gshared)(__this, method)
