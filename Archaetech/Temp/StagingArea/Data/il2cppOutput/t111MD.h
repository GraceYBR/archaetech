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


#include "codegen/il2cpp-codegen.h"

extern "C" void t111_marshal(const t111& unmarshaled, t111_marshaled& marshaled);
extern "C" void t111_marshal_back(const t111_marshaled& marshaled, t111& unmarshaled);
extern "C" void t111_marshal_cleanup(t111_marshaled& marshaled);
