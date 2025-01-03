// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_capabilities_info.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
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
const WrapperTypeInfo V8MediaCapabilitiesInfo::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8MediaCapabilitiesInfo::domTemplate,
    nullptr,
    "MediaCapabilitiesInfo",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in MediaCapabilitiesInfo.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& MediaCapabilitiesInfo::wrapper_type_info_ = V8MediaCapabilitiesInfo::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, MediaCapabilitiesInfo>::value,
    "MediaCapabilitiesInfo inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&MediaCapabilitiesInfo::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "MediaCapabilitiesInfo is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace MediaCapabilitiesInfoV8Internal {

static void supportedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  MediaCapabilitiesInfo* impl = V8MediaCapabilitiesInfo::ToImpl(holder);

  V8SetReturnValueBool(info, impl->supported());
}

static void smoothAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  MediaCapabilitiesInfo* impl = V8MediaCapabilitiesInfo::ToImpl(holder);

  V8SetReturnValueBool(info, impl->smooth());
}

static void powerEfficientAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  MediaCapabilitiesInfo* impl = V8MediaCapabilitiesInfo::ToImpl(holder);

  V8SetReturnValueBool(info, impl->powerEfficient());
}

} // namespace MediaCapabilitiesInfoV8Internal

void V8MediaCapabilitiesInfo::supportedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MediaCapabilitiesInfo_supported_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8MediaCapabilitiesInfo_Supported_AttributeGetter);

  MediaCapabilitiesInfoV8Internal::supportedAttributeGetter(info);
}

void V8MediaCapabilitiesInfo::smoothAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MediaCapabilitiesInfo_smooth_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8MediaCapabilitiesInfo_Smooth_AttributeGetter);

  MediaCapabilitiesInfoV8Internal::smoothAttributeGetter(info);
}

void V8MediaCapabilitiesInfo::powerEfficientAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MediaCapabilitiesInfo_powerEfficient_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8MediaCapabilitiesInfo_PowerEfficient_AttributeGetter);

  MediaCapabilitiesInfoV8Internal::powerEfficientAttributeGetter(info);
}

static const V8DOMConfiguration::AccessorConfiguration V8MediaCapabilitiesInfoAccessors[] = {
    { "supported", V8MediaCapabilitiesInfo::supportedAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "smooth", V8MediaCapabilitiesInfo::smoothAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "powerEfficient", V8MediaCapabilitiesInfo::powerEfficientAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
};

static void installV8MediaCapabilitiesInfoTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8MediaCapabilitiesInfo::wrapperTypeInfo.interface_name, v8::Local<v8::FunctionTemplate>(), V8MediaCapabilitiesInfo::internalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8MediaCapabilitiesInfoAccessors, arraysize(V8MediaCapabilitiesInfoAccessors));

  // Custom signature

  V8MediaCapabilitiesInfo::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8MediaCapabilitiesInfo::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8MediaCapabilitiesInfo::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8MediaCapabilitiesInfoTemplate);
}

bool V8MediaCapabilitiesInfo::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8MediaCapabilitiesInfo::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

MediaCapabilitiesInfo* V8MediaCapabilitiesInfo::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

MediaCapabilitiesInfo* NativeValueTraits<MediaCapabilitiesInfo>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  MediaCapabilitiesInfo* nativeValue = V8MediaCapabilitiesInfo::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "MediaCapabilitiesInfo"));
  }
  return nativeValue;
}

}  // namespace blink
