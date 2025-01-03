// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_mojo_interface_interceptor.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_abstract_event_listener.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_listener_helper.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/local_dom_window.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"
#include "third_party/blink/renderer/platform/wtf/get_ptr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8MojoInterfaceInterceptor::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8MojoInterfaceInterceptor::domTemplate,
    nullptr,
    "MojoInterfaceInterceptor",
    &V8EventTarget::wrapperTypeInfo,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in MojoInterfaceInterceptor.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& MojoInterfaceInterceptor::wrapper_type_info_ = V8MojoInterfaceInterceptor::wrapperTypeInfo;

// [ActiveScriptWrappable]
static_assert(
    std::is_base_of<ActiveScriptWrappableBase, MojoInterfaceInterceptor>::value,
    "MojoInterfaceInterceptor does not inherit from ActiveScriptWrappable<>, but specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    !std::is_same<decltype(&MojoInterfaceInterceptor::HasPendingActivity),
                  decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "MojoInterfaceInterceptor is not overriding hasPendingActivity(), but is specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace MojoInterfaceInterceptorV8Internal {

static void oninterfacerequestAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  MojoInterfaceInterceptor* impl = V8MojoInterfaceInterceptor::ToImpl(holder);

  EventListener* cppValue(WTF::GetPtr(impl->oninterfacerequest()));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void oninterfacerequestAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  MojoInterfaceInterceptor* impl = V8MojoInterfaceInterceptor::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOninterfacerequest(V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void startMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "MojoInterfaceInterceptor", "start");

  MojoInterfaceInterceptor* impl = V8MojoInterfaceInterceptor::ToImpl(info.Holder());

  impl->start(exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void stopMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  MojoInterfaceInterceptor* impl = V8MojoInterfaceInterceptor::ToImpl(info.Holder());

  impl->stop();
}

static void constructor(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MojoInterfaceInterceptor_ConstructorCallback");

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kConstructionContext, "MojoInterfaceInterceptor");

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> interfaceName;
  V8StringResource<> scope;
  interfaceName = info[0];
  if (!interfaceName.Prepare())
    return;

  if (!info[1]->IsUndefined()) {
    scope = info[1];
    if (!scope.Prepare())
      return;
    const char* validScopeValues[] = {
        "context",
        "process",
    };
    if (!IsValidEnum(scope, validScopeValues, arraysize(validScopeValues), "MojoScope", exceptionState)) {
      return;
    }
  } else {
    scope = "context";
  }

  ExecutionContext* executionContext = ToExecutionContext(
      info.NewTarget().As<v8::Object>()->CreationContext());
  MojoInterfaceInterceptor* impl = MojoInterfaceInterceptor::Create(executionContext, interfaceName, scope, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  v8::Local<v8::Object> wrapper = info.Holder();
  wrapper = impl->AssociateWithWrapper(info.GetIsolate(), &V8MojoInterfaceInterceptor::wrapperTypeInfo, wrapper);
  V8SetReturnValue(info, wrapper);
}

} // namespace MojoInterfaceInterceptorV8Internal

void V8MojoInterfaceInterceptor::oninterfacerequestAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MojoInterfaceInterceptor_oninterfacerequest_Getter");

  MojoInterfaceInterceptorV8Internal::oninterfacerequestAttributeGetter(info);
}

void V8MojoInterfaceInterceptor::oninterfacerequestAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MojoInterfaceInterceptor_oninterfacerequest_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  MojoInterfaceInterceptorV8Internal::oninterfacerequestAttributeSetter(v8Value, info);
}

void V8MojoInterfaceInterceptor::startMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MojoInterfaceInterceptor_start");

  MojoInterfaceInterceptorV8Internal::startMethod(info);
}

void V8MojoInterfaceInterceptor::stopMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MojoInterfaceInterceptor_stop");

  MojoInterfaceInterceptorV8Internal::stopMethod(info);
}

static const V8DOMConfiguration::AccessorConfiguration V8MojoInterfaceInterceptorAccessors[] = {
    { "oninterfacerequest", V8MojoInterfaceInterceptor::oninterfacerequestAttributeGetterCallback, V8MojoInterfaceInterceptor::oninterfacerequestAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
};

static const V8DOMConfiguration::MethodConfiguration V8MojoInterfaceInterceptorMethods[] = {
    {"start", V8MojoInterfaceInterceptor::startMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"stop", V8MojoInterfaceInterceptor::stopMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

void V8MojoInterfaceInterceptor::constructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MojoInterfaceInterceptor_Constructor");

  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::ConstructorNotCallableAsFunction("MojoInterfaceInterceptor"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  MojoInterfaceInterceptorV8Internal::constructor(info);
}

static void installV8MojoInterfaceInterceptorTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8MojoInterfaceInterceptor::wrapperTypeInfo.interface_name, V8EventTarget::domTemplate(isolate, world), V8MojoInterfaceInterceptor::internalFieldCount);
  interfaceTemplate->SetCallHandler(V8MojoInterfaceInterceptor::constructorCallback);
  interfaceTemplate->SetLength(1);

  if (!RuntimeEnabledFeatures::MojoJSTestEnabled()) {
    return;
  }

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8MojoInterfaceInterceptorAccessors, arraysize(V8MojoInterfaceInterceptorAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8MojoInterfaceInterceptorMethods, arraysize(V8MojoInterfaceInterceptorMethods));

  // Custom signature

  V8MojoInterfaceInterceptor::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8MojoInterfaceInterceptor::InstallRuntimeEnabledFeaturesOnTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  if (!RuntimeEnabledFeatures::MojoJSTestEnabled()) {
    return;
  }

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.

  // Custom signature
}

v8::Local<v8::FunctionTemplate> V8MojoInterfaceInterceptor::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8MojoInterfaceInterceptorTemplate);
}

bool V8MojoInterfaceInterceptor::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8MojoInterfaceInterceptor::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

MojoInterfaceInterceptor* V8MojoInterfaceInterceptor::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

MojoInterfaceInterceptor* NativeValueTraits<MojoInterfaceInterceptor>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  MojoInterfaceInterceptor* nativeValue = V8MojoInterfaceInterceptor::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "MojoInterfaceInterceptor"));
  }
  return nativeValue;
}

}  // namespace blink
