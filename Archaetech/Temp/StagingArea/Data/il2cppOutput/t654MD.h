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

extern "C" void t654_marshal(const t654& unmarshaled, t654_marshaled& marshaled);
extern "C" void t654_marshal_back(const t654_marshaled& marshaled, t654& unmarshaled);
extern "C" void t654_marshal_cleanup(t654_marshaled& marshaled);
