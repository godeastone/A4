// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_ext_disjoint_timer_query.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_timer_query_ext.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/wtf/get_ptr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8EXTDisjointTimerQuery::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8EXTDisjointTimerQuery::domTemplate,
    nullptr,
    "EXTDisjointTimerQuery",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in EXTDisjointTimerQuery.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& EXTDisjointTimerQuery::wrapper_type_info_ = V8EXTDisjointTimerQuery::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, EXTDisjointTimerQuery>::value,
    "EXTDisjointTimerQuery inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&EXTDisjointTimerQuery::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "EXTDisjointTimerQuery is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace EXTDisjointTimerQueryV8Internal {

static void createQueryEXTMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  EXTDisjointTimerQuery* impl = V8EXTDisjointTimerQuery::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->createQueryEXT());
}

static void deleteQueryEXTMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  EXTDisjointTimerQuery* impl = V8EXTDisjointTimerQuery::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteQueryEXT", "EXTDisjointTimerQuery", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLTimerQueryEXT* query;
  query = V8WebGLTimerQueryEXT::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!query && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteQueryEXT", "EXTDisjointTimerQuery", "parameter 1 is not of type 'WebGLTimerQueryEXT'."));
    return;
  }

  impl->deleteQueryEXT(query);
}

static void isQueryEXTMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  EXTDisjointTimerQuery* impl = V8EXTDisjointTimerQuery::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isQueryEXT", "EXTDisjointTimerQuery", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLTimerQueryEXT* query;
  query = V8WebGLTimerQueryEXT::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!query && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isQueryEXT", "EXTDisjointTimerQuery", "parameter 1 is not of type 'WebGLTimerQueryEXT'."));
    return;
  }

  V8SetReturnValueBool(info, impl->isQueryEXT(query));
}

static void beginQueryEXTMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "EXTDisjointTimerQuery", "beginQueryEXT");

  EXTDisjointTimerQuery* impl = V8EXTDisjointTimerQuery::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  uint32_t target;
  WebGLTimerQueryEXT* query;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  query = V8WebGLTimerQueryEXT::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!query) {
    exceptionState.ThrowTypeError("parameter 2 is not of type 'WebGLTimerQueryEXT'.");
    return;
  }

  impl->beginQueryEXT(target, query);
}

static void endQueryEXTMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "EXTDisjointTimerQuery", "endQueryEXT");

  EXTDisjointTimerQuery* impl = V8EXTDisjointTimerQuery::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t target;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->endQueryEXT(target);
}

static void queryCounterEXTMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "EXTDisjointTimerQuery", "queryCounterEXT");

  EXTDisjointTimerQuery* impl = V8EXTDisjointTimerQuery::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  WebGLTimerQueryEXT* query;
  uint32_t target;
  query = V8WebGLTimerQueryEXT::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!query) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLTimerQueryEXT'.");
    return;
  }

  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->queryCounterEXT(query, target);
}

static void getQueryEXTMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "EXTDisjointTimerQuery", "getQueryEXT");

  EXTDisjointTimerQuery* impl = V8EXTDisjointTimerQuery::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  uint32_t target;
  uint32_t pname;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  pname = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  ScriptValue result = impl->getQueryEXT(scriptState, target, pname);
  V8SetReturnValue(info, result.V8Value());
}

static void getQueryObjectEXTMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "EXTDisjointTimerQuery", "getQueryObjectEXT");

  EXTDisjointTimerQuery* impl = V8EXTDisjointTimerQuery::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  WebGLTimerQueryEXT* query;
  uint32_t pname;
  query = V8WebGLTimerQueryEXT::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!query) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLTimerQueryEXT'.");
    return;
  }

  pname = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  ScriptValue result = impl->getQueryObjectEXT(scriptState, query, pname);
  V8SetReturnValue(info, result.V8Value());
}

} // namespace EXTDisjointTimerQueryV8Internal

void V8EXTDisjointTimerQuery::createQueryEXTMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_EXTDisjointTimerQuery_createQueryEXT");

  EXTDisjointTimerQueryV8Internal::createQueryEXTMethod(info);
}

void V8EXTDisjointTimerQuery::deleteQueryEXTMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_EXTDisjointTimerQuery_deleteQueryEXT");

  EXTDisjointTimerQueryV8Internal::deleteQueryEXTMethod(info);
}

void V8EXTDisjointTimerQuery::isQueryEXTMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_EXTDisjointTimerQuery_isQueryEXT");

  EXTDisjointTimerQueryV8Internal::isQueryEXTMethod(info);
}

void V8EXTDisjointTimerQuery::beginQueryEXTMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_EXTDisjointTimerQuery_beginQueryEXT");

  EXTDisjointTimerQueryV8Internal::beginQueryEXTMethod(info);
}

void V8EXTDisjointTimerQuery::endQueryEXTMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_EXTDisjointTimerQuery_endQueryEXT");

  EXTDisjointTimerQueryV8Internal::endQueryEXTMethod(info);
}

void V8EXTDisjointTimerQuery::queryCounterEXTMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_EXTDisjointTimerQuery_queryCounterEXT");

  EXTDisjointTimerQueryV8Internal::queryCounterEXTMethod(info);
}

void V8EXTDisjointTimerQuery::getQueryEXTMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_EXTDisjointTimerQuery_getQueryEXT");

  EXTDisjointTimerQueryV8Internal::getQueryEXTMethod(info);
}

void V8EXTDisjointTimerQuery::getQueryObjectEXTMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_EXTDisjointTimerQuery_getQueryObjectEXT");

  EXTDisjointTimerQueryV8Internal::getQueryObjectEXTMethod(info);
}

static const V8DOMConfiguration::MethodConfiguration V8EXTDisjointTimerQueryMethods[] = {
    {"createQueryEXT", V8EXTDisjointTimerQuery::createQueryEXTMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"deleteQueryEXT", V8EXTDisjointTimerQuery::deleteQueryEXTMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isQueryEXT", V8EXTDisjointTimerQuery::isQueryEXTMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"beginQueryEXT", V8EXTDisjointTimerQuery::beginQueryEXTMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"endQueryEXT", V8EXTDisjointTimerQuery::endQueryEXTMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"queryCounterEXT", V8EXTDisjointTimerQuery::queryCounterEXTMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getQueryEXT", V8EXTDisjointTimerQuery::getQueryEXTMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getQueryObjectEXT", V8EXTDisjointTimerQuery::getQueryObjectEXTMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void installV8EXTDisjointTimerQueryTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8EXTDisjointTimerQuery::wrapperTypeInfo.interface_name, v8::Local<v8::FunctionTemplate>(), V8EXTDisjointTimerQuery::internalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  static constexpr V8DOMConfiguration::ConstantConfiguration V8EXTDisjointTimerQueryConstants[] = {
      {"QUERY_COUNTER_BITS_EXT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8864)},
      {"CURRENT_QUERY_EXT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8865)},
      {"QUERY_RESULT_EXT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8866)},
      {"QUERY_RESULT_AVAILABLE_EXT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8867)},
      {"TIME_ELAPSED_EXT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x88BF)},
      {"TIMESTAMP_EXT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8E28)},
      {"GPU_DISJOINT_EXT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8FBB)},
  };
  V8DOMConfiguration::InstallConstants(
      isolate, interfaceTemplate, prototypeTemplate,
      V8EXTDisjointTimerQueryConstants, arraysize(V8EXTDisjointTimerQueryConstants));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8EXTDisjointTimerQueryMethods, arraysize(V8EXTDisjointTimerQueryMethods));

  // Custom signature

  V8EXTDisjointTimerQuery::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8EXTDisjointTimerQuery::InstallRuntimeEnabledFeaturesOnTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.

  // Custom signature
}

v8::Local<v8::FunctionTemplate> V8EXTDisjointTimerQuery::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8EXTDisjointTimerQueryTemplate);
}

bool V8EXTDisjointTimerQuery::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8EXTDisjointTimerQuery::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

EXTDisjointTimerQuery* V8EXTDisjointTimerQuery::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

EXTDisjointTimerQuery* NativeValueTraits<EXTDisjointTimerQuery>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  EXTDisjointTimerQuery* nativeValue = V8EXTDisjointTimerQuery::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "EXTDisjointTimerQuery"));
  }
  return nativeValue;
}

}  // namespace blink
