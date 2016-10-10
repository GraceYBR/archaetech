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

extern "C" void t405_marshal(const t405& unmarshaled, t405_marshaled& marshaled);
extern "C" void t405_marshal_back(const t405_marshaled& marshaled, t405& unmarshaled);
extern "C" void t405_marshal_cleanup(t405_marshaled& marshaled);
