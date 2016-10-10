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

struct t29;
struct t29_marshaled;
struct t12;
struct t14;

#include "codegen/il2cpp-codegen.h"
#include "t37.h"

extern "C" void m303 (t29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t12* m304 (t29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m305 (t29 * __this, t14 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m306 (t29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m307 (t14 * __this , t29 * p0, t29 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m308 (t14 * __this , t29 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m309 (t29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t37 m310 (t29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m311 (t14 * __this , t29 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m312 (t14 * __this , t29 * p0, t29 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m313 (t14 * __this , t29 * p0, t29 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t29_marshal(const t29& unmarshaled, t29_marshaled& marshaled);
extern "C" void t29_marshal_back(const t29_marshaled& marshaled, t29& unmarshaled);
extern "C" void t29_marshal_cleanup(t29_marshaled& marshaled);
