// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_deprecated_storage_quota.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_storage_error_callback.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_storage_quota_callback.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_storage_usage_callback.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
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
const WrapperTypeInfo V8DeprecatedStorageQuota::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8DeprecatedStorageQuota::domTemplate,
    nullptr,
    "DeprecatedStorageQuota",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in DeprecatedStorageQuota.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& DeprecatedStorageQuota::wrapper_type_info_ = V8DeprecatedStorageQuota::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, DeprecatedStorageQuota>::value,
    "DeprecatedStorageQuota inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&DeprecatedStorageQuota::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "DeprecatedStorageQuota is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace DeprecatedStorageQuotaV8Internal {

static void queryUsageAndQuotaMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  DeprecatedStorageQuota* impl = V8DeprecatedStorageQuota::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("queryUsageAndQuota", "DeprecatedStorageQuota", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StorageUsageCallback* usageCallback;
  V8StorageErrorCallback* errorCallback;
  int numArgsPassed = info.Length();
  while (numArgsPassed > 0) {
    if (!info[numArgsPassed - 1]->IsUndefined())
      break;
    --numArgsPassed;
  }
  if (info[0]->IsFunction()) {
    usageCallback = V8StorageUsageCallback::Create(info[0].As<v8::Function>());
  } else {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("queryUsageAndQuota", "DeprecatedStorageQuota", "The callback provided as parameter 1 is not a function."));
    return;
  }

  if (UNLIKELY(numArgsPassed <= 1)) {
    impl->queryUsageAndQuota(scriptState, usageCallback);
    return;
  }
  if (info[1]->IsFunction()) {
    errorCallback = V8StorageErrorCallback::Create(info[1].As<v8::Function>());
  } else if (info[1]->IsNullOrUndefined()) {
    errorCallback = nullptr;
  } else {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("queryUsageAndQuota", "DeprecatedStorageQuota", "The callback provided as parameter 2 is not a function."));
    return;
  }

  impl->queryUsageAndQuota(scriptState, usageCallback, errorCallback);
}

static void requestQuotaMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "DeprecatedStorageQuota", "requestQuota");

  DeprecatedStorageQuota* impl = V8DeprecatedStorageQuota::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint64_t newQuotaInBytes;
  V8StorageQuotaCallback* quotaCallback;
  V8StorageErrorCallback* errorCallback;
  int numArgsPassed = info.Length();
  while (numArgsPassed > 0) {
    if (!info[numArgsPassed - 1]->IsUndefined())
      break;
    --numArgsPassed;
  }
  newQuotaInBytes = NativeValueTraits<IDLUnsignedLongLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  if (UNLIKELY(numArgsPassed <= 1)) {
    impl->requestQuota(scriptState, newQuotaInBytes);
    return;
  }
  if (info[1]->IsFunction()) {
    quotaCallback = V8StorageQuotaCallback::Create(info[1].As<v8::Function>());
  } else if (info[1]->IsNullOrUndefined()) {
    quotaCallback = nullptr;
  } else {
    exceptionState.ThrowTypeError("The callback provided as parameter 2 is not a function.");
    return;
  }

  if (UNLIKELY(numArgsPassed <= 2)) {
    impl->requestQuota(scriptState, newQuotaInBytes, quotaCallback);
    return;
  }
  if (info[2]->IsFunction()) {
    errorCallback = V8StorageErrorCallback::Create(info[2].As<v8::Function>());
  } else if (info[2]->IsNullOrUndefined()) {
    errorCallback = nullptr;
  } else {
    exceptionState.ThrowTypeError("The callback provided as parameter 3 is not a function.");
    return;
  }

  impl->requestQuota(scriptState, newQuotaInBytes, quotaCallback, errorCallback);
}

} // namespace DeprecatedStorageQuotaV8Internal

void V8DeprecatedStorageQuota::queryUsageAndQuotaMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DeprecatedStorageQuota_queryUsageAndQuota");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8DeprecatedStorageQuota_QueryUsageAndQuota_Method);
  DeprecatedStorageQuotaV8Internal::queryUsageAndQuotaMethod(info);
}

void V8DeprecatedStorageQuota::requestQuotaMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DeprecatedStorageQuota_requestQuota");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8DeprecatedStorageQuota_RequestQuota_Method);
  DeprecatedStorageQuotaV8Internal::requestQuotaMethod(info);
}

static const V8DOMConfiguration::MethodConfiguration V8DeprecatedStorageQuotaMethods[] = {
    {"queryUsageAndQuota", V8DeprecatedStorageQuota::queryUsageAndQuotaMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"requestQuota", V8DeprecatedStorageQuota::requestQuotaMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void installV8DeprecatedStorageQuotaTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8DeprecatedStorageQuota::wrapperTypeInfo.interface_name, v8::Local<v8::FunctionTemplate>(), V8DeprecatedStorageQuota::internalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallMethods(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8DeprecatedStorageQuotaMethods, arraysize(V8DeprecatedStorageQuotaMethods));

  // Custom signature

  V8DeprecatedStorageQuota::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8DeprecatedStorageQuota::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8DeprecatedStorageQuota::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8DeprecatedStorageQuotaTemplate);
}

bool V8DeprecatedStorageQuota::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8DeprecatedStorageQuota::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

DeprecatedStorageQuota* V8DeprecatedStorageQuota::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

DeprecatedStorageQuota* NativeValueTraits<DeprecatedStorageQuota>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  DeprecatedStorageQuota* nativeValue = V8DeprecatedStorageQuota::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "DeprecatedStorageQuota"));
  }
  return nativeValue;
}

}  // namespace blink
