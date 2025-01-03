// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_oes_vertex_array_object.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_vertex_array_object_oes.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/wtf/get_ptr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8OESVertexArrayObject::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8OESVertexArrayObject::domTemplate,
    nullptr,
    "OESVertexArrayObject",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in OESVertexArrayObject.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& OESVertexArrayObject::wrapper_type_info_ = V8OESVertexArrayObject::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, OESVertexArrayObject>::value,
    "OESVertexArrayObject inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&OESVertexArrayObject::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "OESVertexArrayObject is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace OESVertexArrayObjectV8Internal {

static void createVertexArrayOESMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  OESVertexArrayObject* impl = V8OESVertexArrayObject::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->createVertexArrayOES());
}

static void deleteVertexArrayOESMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  OESVertexArrayObject* impl = V8OESVertexArrayObject::ToImpl(info.Holder());

  WebGLVertexArrayObjectOES* arrayObject;
  arrayObject = V8WebGLVertexArrayObjectOES::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!arrayObject && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteVertexArrayOES", "OESVertexArrayObject", "parameter 1 is not of type 'WebGLVertexArrayObjectOES'."));
    return;
  }

  impl->deleteVertexArrayOES(arrayObject);
}

static void isVertexArrayOESMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  OESVertexArrayObject* impl = V8OESVertexArrayObject::ToImpl(info.Holder());

  WebGLVertexArrayObjectOES* arrayObject;
  arrayObject = V8WebGLVertexArrayObjectOES::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!arrayObject && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isVertexArrayOES", "OESVertexArrayObject", "parameter 1 is not of type 'WebGLVertexArrayObjectOES'."));
    return;
  }

  V8SetReturnValueBool(info, impl->isVertexArrayOES(arrayObject));
}

static void bindVertexArrayOESMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  OESVertexArrayObject* impl = V8OESVertexArrayObject::ToImpl(info.Holder());

  WebGLVertexArrayObjectOES* arrayObject;
  arrayObject = V8WebGLVertexArrayObjectOES::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!arrayObject && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("bindVertexArrayOES", "OESVertexArrayObject", "parameter 1 is not of type 'WebGLVertexArrayObjectOES'."));
    return;
  }

  impl->bindVertexArrayOES(arrayObject);
}

} // namespace OESVertexArrayObjectV8Internal

void V8OESVertexArrayObject::createVertexArrayOESMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OESVertexArrayObject_createVertexArrayOES");

  OESVertexArrayObjectV8Internal::createVertexArrayOESMethod(info);
}

void V8OESVertexArrayObject::deleteVertexArrayOESMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OESVertexArrayObject_deleteVertexArrayOES");

  OESVertexArrayObjectV8Internal::deleteVertexArrayOESMethod(info);
}

void V8OESVertexArrayObject::isVertexArrayOESMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OESVertexArrayObject_isVertexArrayOES");

  OESVertexArrayObjectV8Internal::isVertexArrayOESMethod(info);
}

void V8OESVertexArrayObject::bindVertexArrayOESMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OESVertexArrayObject_bindVertexArrayOES");

  OESVertexArrayObjectV8Internal::bindVertexArrayOESMethod(info);
}

static const V8DOMConfiguration::MethodConfiguration V8OESVertexArrayObjectMethods[] = {
    {"createVertexArrayOES", V8OESVertexArrayObject::createVertexArrayOESMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"deleteVertexArrayOES", V8OESVertexArrayObject::deleteVertexArrayOESMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isVertexArrayOES", V8OESVertexArrayObject::isVertexArrayOESMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"bindVertexArrayOES", V8OESVertexArrayObject::bindVertexArrayOESMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void installV8OESVertexArrayObjectTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8OESVertexArrayObject::wrapperTypeInfo.interface_name, v8::Local<v8::FunctionTemplate>(), V8OESVertexArrayObject::internalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  static constexpr V8DOMConfiguration::ConstantConfiguration V8OESVertexArrayObjectConstants[] = {
      {"VERTEX_ARRAY_BINDING_OES", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x85B5)},
  };
  V8DOMConfiguration::InstallConstants(
      isolate, interfaceTemplate, prototypeTemplate,
      V8OESVertexArrayObjectConstants, arraysize(V8OESVertexArrayObjectConstants));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8OESVertexArrayObjectMethods, arraysize(V8OESVertexArrayObjectMethods));

  // Custom signature

  V8OESVertexArrayObject::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8OESVertexArrayObject::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8OESVertexArrayObject::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8OESVertexArrayObjectTemplate);
}

bool V8OESVertexArrayObject::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8OESVertexArrayObject::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

OESVertexArrayObject* V8OESVertexArrayObject::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

OESVertexArrayObject* NativeValueTraits<OESVertexArrayObject>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  OESVertexArrayObject* nativeValue = V8OESVertexArrayObject::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "OESVertexArrayObject"));
  }
  return nativeValue;
}

}  // namespace blink
