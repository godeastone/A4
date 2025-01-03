// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_resource_timing.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_server_timing.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
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
const WrapperTypeInfo V8PerformanceResourceTiming::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8PerformanceResourceTiming::domTemplate,
    nullptr,
    "PerformanceResourceTiming",
    &V8PerformanceEntry::wrapperTypeInfo,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in PerformanceResourceTiming.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& PerformanceResourceTiming::wrapper_type_info_ = V8PerformanceResourceTiming::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, PerformanceResourceTiming>::value,
    "PerformanceResourceTiming inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&PerformanceResourceTiming::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "PerformanceResourceTiming is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace PerformanceResourceTimingV8Internal {

static void initiatorTypeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PerformanceResourceTiming* impl = V8PerformanceResourceTiming::ToImpl(holder);

  V8SetReturnValueString(info, impl->initiatorType(), info.GetIsolate());
}

static void nextHopProtocolAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PerformanceResourceTiming* impl = V8PerformanceResourceTiming::ToImpl(holder);

  V8SetReturnValueString(info, impl->nextHopProtocol(), info.GetIsolate());
}

static void workerStartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PerformanceResourceTiming* impl = V8PerformanceResourceTiming::ToImpl(holder);

  V8SetReturnValue(info, impl->workerStart());
}

static void redirectStartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PerformanceResourceTiming* impl = V8PerformanceResourceTiming::ToImpl(holder);

  V8SetReturnValue(info, impl->redirectStart());
}

static void redirectEndAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PerformanceResourceTiming* impl = V8PerformanceResourceTiming::ToImpl(holder);

  V8SetReturnValue(info, impl->redirectEnd());
}

static void fetchStartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PerformanceResourceTiming* impl = V8PerformanceResourceTiming::ToImpl(holder);

  V8SetReturnValue(info, impl->fetchStart());
}

static void domainLookupStartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PerformanceResourceTiming* impl = V8PerformanceResourceTiming::ToImpl(holder);

  V8SetReturnValue(info, impl->domainLookupStart());
}

static void domainLookupEndAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PerformanceResourceTiming* impl = V8PerformanceResourceTiming::ToImpl(holder);

  V8SetReturnValue(info, impl->domainLookupEnd());
}

static void connectStartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PerformanceResourceTiming* impl = V8PerformanceResourceTiming::ToImpl(holder);

  V8SetReturnValue(info, impl->connectStart());
}

static void connectEndAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PerformanceResourceTiming* impl = V8PerformanceResourceTiming::ToImpl(holder);

  V8SetReturnValue(info, impl->connectEnd());
}

static void secureConnectionStartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PerformanceResourceTiming* impl = V8PerformanceResourceTiming::ToImpl(holder);

  V8SetReturnValue(info, impl->secureConnectionStart());
}

static void requestStartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PerformanceResourceTiming* impl = V8PerformanceResourceTiming::ToImpl(holder);

  V8SetReturnValue(info, impl->requestStart());
}

static void responseStartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PerformanceResourceTiming* impl = V8PerformanceResourceTiming::ToImpl(holder);

  V8SetReturnValue(info, impl->responseStart());
}

static void responseEndAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PerformanceResourceTiming* impl = V8PerformanceResourceTiming::ToImpl(holder);

  V8SetReturnValue(info, impl->responseEnd());
}

static void transferSizeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PerformanceResourceTiming* impl = V8PerformanceResourceTiming::ToImpl(holder);

  V8SetReturnValue(info, static_cast<double>(impl->transferSize()));
}

static void encodedBodySizeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PerformanceResourceTiming* impl = V8PerformanceResourceTiming::ToImpl(holder);

  V8SetReturnValue(info, static_cast<double>(impl->encodedBodySize()));
}

static void decodedBodySizeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PerformanceResourceTiming* impl = V8PerformanceResourceTiming::ToImpl(holder);

  V8SetReturnValue(info, static_cast<double>(impl->decodedBodySize()));
}

static void serverTimingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PerformanceResourceTiming* impl = V8PerformanceResourceTiming::ToImpl(holder);

  V8SetReturnValue(info, FreezeV8Object(ToV8(impl->serverTiming(), info.Holder(), info.GetIsolate()), info.GetIsolate()));
}

static void toJSONMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  PerformanceResourceTiming* impl = V8PerformanceResourceTiming::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  ScriptValue result = impl->toJSONForBinding(scriptState);
  V8SetReturnValue(info, result.V8Value());
}

} // namespace PerformanceResourceTimingV8Internal

void V8PerformanceResourceTiming::initiatorTypeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceResourceTiming_initiatorType_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kPerformanceResourceTimingInitiatorType);

  PerformanceResourceTimingV8Internal::initiatorTypeAttributeGetter(info);
}

void V8PerformanceResourceTiming::nextHopProtocolAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceResourceTiming_nextHopProtocol_Getter");

  PerformanceResourceTimingV8Internal::nextHopProtocolAttributeGetter(info);
}

void V8PerformanceResourceTiming::workerStartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceResourceTiming_workerStart_Getter");

  PerformanceResourceTimingV8Internal::workerStartAttributeGetter(info);
}

void V8PerformanceResourceTiming::redirectStartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceResourceTiming_redirectStart_Getter");

  PerformanceResourceTimingV8Internal::redirectStartAttributeGetter(info);
}

void V8PerformanceResourceTiming::redirectEndAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceResourceTiming_redirectEnd_Getter");

  PerformanceResourceTimingV8Internal::redirectEndAttributeGetter(info);
}

void V8PerformanceResourceTiming::fetchStartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceResourceTiming_fetchStart_Getter");

  PerformanceResourceTimingV8Internal::fetchStartAttributeGetter(info);
}

void V8PerformanceResourceTiming::domainLookupStartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceResourceTiming_domainLookupStart_Getter");

  PerformanceResourceTimingV8Internal::domainLookupStartAttributeGetter(info);
}

void V8PerformanceResourceTiming::domainLookupEndAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceResourceTiming_domainLookupEnd_Getter");

  PerformanceResourceTimingV8Internal::domainLookupEndAttributeGetter(info);
}

void V8PerformanceResourceTiming::connectStartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceResourceTiming_connectStart_Getter");

  PerformanceResourceTimingV8Internal::connectStartAttributeGetter(info);
}

void V8PerformanceResourceTiming::connectEndAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceResourceTiming_connectEnd_Getter");

  PerformanceResourceTimingV8Internal::connectEndAttributeGetter(info);
}

void V8PerformanceResourceTiming::secureConnectionStartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceResourceTiming_secureConnectionStart_Getter");

  PerformanceResourceTimingV8Internal::secureConnectionStartAttributeGetter(info);
}

void V8PerformanceResourceTiming::requestStartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceResourceTiming_requestStart_Getter");

  PerformanceResourceTimingV8Internal::requestStartAttributeGetter(info);
}

void V8PerformanceResourceTiming::responseStartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceResourceTiming_responseStart_Getter");

  PerformanceResourceTimingV8Internal::responseStartAttributeGetter(info);
}

void V8PerformanceResourceTiming::responseEndAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceResourceTiming_responseEnd_Getter");

  PerformanceResourceTimingV8Internal::responseEndAttributeGetter(info);
}

void V8PerformanceResourceTiming::transferSizeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceResourceTiming_transferSize_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kPerformanceResourceTimingSizes);

  PerformanceResourceTimingV8Internal::transferSizeAttributeGetter(info);
}

void V8PerformanceResourceTiming::encodedBodySizeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceResourceTiming_encodedBodySize_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kPerformanceResourceTimingSizes);

  PerformanceResourceTimingV8Internal::encodedBodySizeAttributeGetter(info);
}

void V8PerformanceResourceTiming::decodedBodySizeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceResourceTiming_decodedBodySize_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kPerformanceResourceTimingSizes);

  PerformanceResourceTimingV8Internal::decodedBodySizeAttributeGetter(info);
}

void V8PerformanceResourceTiming::serverTimingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceResourceTiming_serverTiming_Getter");

  PerformanceResourceTimingV8Internal::serverTimingAttributeGetter(info);
}

void V8PerformanceResourceTiming::toJSONMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceResourceTiming_toJSON");

  PerformanceResourceTimingV8Internal::toJSONMethod(info);
}

static const V8DOMConfiguration::AccessorConfiguration V8PerformanceResourceTimingAccessors[] = {
    { "initiatorType", V8PerformanceResourceTiming::initiatorTypeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "nextHopProtocol", V8PerformanceResourceTiming::nextHopProtocolAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "workerStart", V8PerformanceResourceTiming::workerStartAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "redirectStart", V8PerformanceResourceTiming::redirectStartAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "redirectEnd", V8PerformanceResourceTiming::redirectEndAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "fetchStart", V8PerformanceResourceTiming::fetchStartAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "domainLookupStart", V8PerformanceResourceTiming::domainLookupStartAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "domainLookupEnd", V8PerformanceResourceTiming::domainLookupEndAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "connectStart", V8PerformanceResourceTiming::connectStartAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "connectEnd", V8PerformanceResourceTiming::connectEndAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "secureConnectionStart", V8PerformanceResourceTiming::secureConnectionStartAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "requestStart", V8PerformanceResourceTiming::requestStartAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "responseStart", V8PerformanceResourceTiming::responseStartAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "responseEnd", V8PerformanceResourceTiming::responseEndAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "transferSize", V8PerformanceResourceTiming::transferSizeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "encodedBodySize", V8PerformanceResourceTiming::encodedBodySizeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "decodedBodySize", V8PerformanceResourceTiming::decodedBodySizeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
};

static const V8DOMConfiguration::MethodConfiguration V8PerformanceResourceTimingMethods[] = {
    {"toJSON", V8PerformanceResourceTiming::toJSONMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void installV8PerformanceResourceTimingTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8PerformanceResourceTiming::wrapperTypeInfo.interface_name, V8PerformanceEntry::domTemplate(isolate, world), V8PerformanceResourceTiming::internalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8PerformanceResourceTimingAccessors, arraysize(V8PerformanceResourceTimingAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8PerformanceResourceTimingMethods, arraysize(V8PerformanceResourceTimingMethods));

  // Custom signature

  V8PerformanceResourceTiming::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8PerformanceResourceTiming::InstallRuntimeEnabledFeaturesOnTemplate(
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

  if (RuntimeEnabledFeatures::ServerTimingEnabled()) {
    static const V8DOMConfiguration::AccessorConfiguration accessor_configurations[] = {
        { "serverTiming", V8PerformanceResourceTiming::serverTimingAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, accessor_configurations,
        arraysize(accessor_configurations));
  }

  // Custom signature
}

v8::Local<v8::FunctionTemplate> V8PerformanceResourceTiming::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8PerformanceResourceTimingTemplate);
}

bool V8PerformanceResourceTiming::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8PerformanceResourceTiming::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

PerformanceResourceTiming* V8PerformanceResourceTiming::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

PerformanceResourceTiming* NativeValueTraits<PerformanceResourceTiming>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  PerformanceResourceTiming* nativeValue = V8PerformanceResourceTiming::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "PerformanceResourceTiming"));
  }
  return nativeValue;
}

}  // namespace blink
