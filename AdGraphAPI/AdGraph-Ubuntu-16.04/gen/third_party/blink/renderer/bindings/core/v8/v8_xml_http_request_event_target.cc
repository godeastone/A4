// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_xml_http_request_event_target.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_abstract_event_listener.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_listener_helper.h"
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
const WrapperTypeInfo V8XMLHttpRequestEventTarget::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8XMLHttpRequestEventTarget::domTemplate,
    nullptr,
    "XMLHttpRequestEventTarget",
    &V8EventTarget::wrapperTypeInfo,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in XMLHttpRequestEventTarget.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& XMLHttpRequestEventTarget::wrapper_type_info_ = V8XMLHttpRequestEventTarget::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, XMLHttpRequestEventTarget>::value,
    "XMLHttpRequestEventTarget inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&XMLHttpRequestEventTarget::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "XMLHttpRequestEventTarget is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace XMLHttpRequestEventTargetV8Internal {

static void onloadstartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  XMLHttpRequestEventTarget* impl = V8XMLHttpRequestEventTarget::ToImpl(holder);

  EventListener* cppValue(WTF::GetPtr(impl->onloadstart()));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onloadstartAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  XMLHttpRequestEventTarget* impl = V8XMLHttpRequestEventTarget::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnloadstart(V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onprogressAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  XMLHttpRequestEventTarget* impl = V8XMLHttpRequestEventTarget::ToImpl(holder);

  EventListener* cppValue(WTF::GetPtr(impl->onprogress()));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onprogressAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  XMLHttpRequestEventTarget* impl = V8XMLHttpRequestEventTarget::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnprogress(V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onabortAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  XMLHttpRequestEventTarget* impl = V8XMLHttpRequestEventTarget::ToImpl(holder);

  EventListener* cppValue(WTF::GetPtr(impl->onabort()));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onabortAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  XMLHttpRequestEventTarget* impl = V8XMLHttpRequestEventTarget::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnabort(V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onerrorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  XMLHttpRequestEventTarget* impl = V8XMLHttpRequestEventTarget::ToImpl(holder);

  EventListener* cppValue(WTF::GetPtr(impl->onerror()));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onerrorAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  XMLHttpRequestEventTarget* impl = V8XMLHttpRequestEventTarget::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnerror(V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onloadAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  XMLHttpRequestEventTarget* impl = V8XMLHttpRequestEventTarget::ToImpl(holder);

  EventListener* cppValue(WTF::GetPtr(impl->onload()));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onloadAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  XMLHttpRequestEventTarget* impl = V8XMLHttpRequestEventTarget::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnload(V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void ontimeoutAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  XMLHttpRequestEventTarget* impl = V8XMLHttpRequestEventTarget::ToImpl(holder);

  EventListener* cppValue(WTF::GetPtr(impl->ontimeout()));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void ontimeoutAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  XMLHttpRequestEventTarget* impl = V8XMLHttpRequestEventTarget::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOntimeout(V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onloadendAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  XMLHttpRequestEventTarget* impl = V8XMLHttpRequestEventTarget::ToImpl(holder);

  EventListener* cppValue(WTF::GetPtr(impl->onloadend()));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onloadendAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  XMLHttpRequestEventTarget* impl = V8XMLHttpRequestEventTarget::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnloadend(V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

} // namespace XMLHttpRequestEventTargetV8Internal

void V8XMLHttpRequestEventTarget::onloadstartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequestEventTarget_onloadstart_Getter");

  XMLHttpRequestEventTargetV8Internal::onloadstartAttributeGetter(info);
}

void V8XMLHttpRequestEventTarget::onloadstartAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequestEventTarget_onloadstart_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  XMLHttpRequestEventTargetV8Internal::onloadstartAttributeSetter(v8Value, info);
}

void V8XMLHttpRequestEventTarget::onprogressAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequestEventTarget_onprogress_Getter");

  XMLHttpRequestEventTargetV8Internal::onprogressAttributeGetter(info);
}

void V8XMLHttpRequestEventTarget::onprogressAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequestEventTarget_onprogress_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  XMLHttpRequestEventTargetV8Internal::onprogressAttributeSetter(v8Value, info);
}

void V8XMLHttpRequestEventTarget::onabortAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequestEventTarget_onabort_Getter");

  XMLHttpRequestEventTargetV8Internal::onabortAttributeGetter(info);
}

void V8XMLHttpRequestEventTarget::onabortAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequestEventTarget_onabort_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  XMLHttpRequestEventTargetV8Internal::onabortAttributeSetter(v8Value, info);
}

void V8XMLHttpRequestEventTarget::onerrorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequestEventTarget_onerror_Getter");

  XMLHttpRequestEventTargetV8Internal::onerrorAttributeGetter(info);
}

void V8XMLHttpRequestEventTarget::onerrorAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequestEventTarget_onerror_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  XMLHttpRequestEventTargetV8Internal::onerrorAttributeSetter(v8Value, info);
}

void V8XMLHttpRequestEventTarget::onloadAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequestEventTarget_onload_Getter");

  XMLHttpRequestEventTargetV8Internal::onloadAttributeGetter(info);
}

void V8XMLHttpRequestEventTarget::onloadAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequestEventTarget_onload_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  XMLHttpRequestEventTargetV8Internal::onloadAttributeSetter(v8Value, info);
}

void V8XMLHttpRequestEventTarget::ontimeoutAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequestEventTarget_ontimeout_Getter");

  XMLHttpRequestEventTargetV8Internal::ontimeoutAttributeGetter(info);
}

void V8XMLHttpRequestEventTarget::ontimeoutAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequestEventTarget_ontimeout_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  XMLHttpRequestEventTargetV8Internal::ontimeoutAttributeSetter(v8Value, info);
}

void V8XMLHttpRequestEventTarget::onloadendAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequestEventTarget_onloadend_Getter");

  XMLHttpRequestEventTargetV8Internal::onloadendAttributeGetter(info);
}

void V8XMLHttpRequestEventTarget::onloadendAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequestEventTarget_onloadend_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  XMLHttpRequestEventTargetV8Internal::onloadendAttributeSetter(v8Value, info);
}

static const V8DOMConfiguration::AccessorConfiguration V8XMLHttpRequestEventTargetAccessors[] = {
    { "onloadstart", V8XMLHttpRequestEventTarget::onloadstartAttributeGetterCallback, V8XMLHttpRequestEventTarget::onloadstartAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onprogress", V8XMLHttpRequestEventTarget::onprogressAttributeGetterCallback, V8XMLHttpRequestEventTarget::onprogressAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onabort", V8XMLHttpRequestEventTarget::onabortAttributeGetterCallback, V8XMLHttpRequestEventTarget::onabortAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onerror", V8XMLHttpRequestEventTarget::onerrorAttributeGetterCallback, V8XMLHttpRequestEventTarget::onerrorAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onload", V8XMLHttpRequestEventTarget::onloadAttributeGetterCallback, V8XMLHttpRequestEventTarget::onloadAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "ontimeout", V8XMLHttpRequestEventTarget::ontimeoutAttributeGetterCallback, V8XMLHttpRequestEventTarget::ontimeoutAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onloadend", V8XMLHttpRequestEventTarget::onloadendAttributeGetterCallback, V8XMLHttpRequestEventTarget::onloadendAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
};

static void installV8XMLHttpRequestEventTargetTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8XMLHttpRequestEventTarget::wrapperTypeInfo.interface_name, V8EventTarget::domTemplate(isolate, world), V8XMLHttpRequestEventTarget::internalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8XMLHttpRequestEventTargetAccessors, arraysize(V8XMLHttpRequestEventTargetAccessors));

  // Custom signature

  V8XMLHttpRequestEventTarget::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8XMLHttpRequestEventTarget::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8XMLHttpRequestEventTarget::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8XMLHttpRequestEventTargetTemplate);
}

bool V8XMLHttpRequestEventTarget::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8XMLHttpRequestEventTarget::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

XMLHttpRequestEventTarget* V8XMLHttpRequestEventTarget::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

XMLHttpRequestEventTarget* NativeValueTraits<XMLHttpRequestEventTarget>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  XMLHttpRequestEventTarget* nativeValue = V8XMLHttpRequestEventTarget::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "XMLHttpRequestEventTarget"));
  }
  return nativeValue;
}

}  // namespace blink
