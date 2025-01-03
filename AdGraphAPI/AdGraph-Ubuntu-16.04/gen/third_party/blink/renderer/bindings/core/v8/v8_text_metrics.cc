// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_text_metrics.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
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
const WrapperTypeInfo V8TextMetrics::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8TextMetrics::domTemplate,
    nullptr,
    "TextMetrics",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in TextMetrics.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& TextMetrics::wrapper_type_info_ = V8TextMetrics::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, TextMetrics>::value,
    "TextMetrics inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&TextMetrics::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "TextMetrics is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace TextMetricsV8Internal {

static void widthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  TextMetrics* impl = V8TextMetrics::ToImpl(holder);

  V8SetReturnValue(info, impl->width());
}

static void actualBoundingBoxLeftAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  TextMetrics* impl = V8TextMetrics::ToImpl(holder);

  V8SetReturnValue(info, impl->actualBoundingBoxLeft());
}

static void actualBoundingBoxRightAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  TextMetrics* impl = V8TextMetrics::ToImpl(holder);

  V8SetReturnValue(info, impl->actualBoundingBoxRight());
}

static void fontBoundingBoxAscentAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  TextMetrics* impl = V8TextMetrics::ToImpl(holder);

  V8SetReturnValue(info, impl->fontBoundingBoxAscent());
}

static void fontBoundingBoxDescentAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  TextMetrics* impl = V8TextMetrics::ToImpl(holder);

  V8SetReturnValue(info, impl->fontBoundingBoxDescent());
}

static void actualBoundingBoxAscentAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  TextMetrics* impl = V8TextMetrics::ToImpl(holder);

  V8SetReturnValue(info, impl->actualBoundingBoxAscent());
}

static void actualBoundingBoxDescentAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  TextMetrics* impl = V8TextMetrics::ToImpl(holder);

  V8SetReturnValue(info, impl->actualBoundingBoxDescent());
}

static void emHeightAscentAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  TextMetrics* impl = V8TextMetrics::ToImpl(holder);

  V8SetReturnValue(info, impl->emHeightAscent());
}

static void emHeightDescentAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  TextMetrics* impl = V8TextMetrics::ToImpl(holder);

  V8SetReturnValue(info, impl->emHeightDescent());
}

static void hangingBaselineAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  TextMetrics* impl = V8TextMetrics::ToImpl(holder);

  V8SetReturnValue(info, impl->hangingBaseline());
}

static void alphabeticBaselineAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  TextMetrics* impl = V8TextMetrics::ToImpl(holder);

  V8SetReturnValue(info, impl->alphabeticBaseline());
}

static void ideographicBaselineAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  TextMetrics* impl = V8TextMetrics::ToImpl(holder);

  V8SetReturnValue(info, impl->ideographicBaseline());
}

} // namespace TextMetricsV8Internal

void V8TextMetrics::widthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TextMetrics_width_Getter");

  TextMetricsV8Internal::widthAttributeGetter(info);
}

void V8TextMetrics::actualBoundingBoxLeftAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TextMetrics_actualBoundingBoxLeft_Getter");

  TextMetricsV8Internal::actualBoundingBoxLeftAttributeGetter(info);
}

void V8TextMetrics::actualBoundingBoxRightAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TextMetrics_actualBoundingBoxRight_Getter");

  TextMetricsV8Internal::actualBoundingBoxRightAttributeGetter(info);
}

void V8TextMetrics::fontBoundingBoxAscentAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TextMetrics_fontBoundingBoxAscent_Getter");

  TextMetricsV8Internal::fontBoundingBoxAscentAttributeGetter(info);
}

void V8TextMetrics::fontBoundingBoxDescentAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TextMetrics_fontBoundingBoxDescent_Getter");

  TextMetricsV8Internal::fontBoundingBoxDescentAttributeGetter(info);
}

void V8TextMetrics::actualBoundingBoxAscentAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TextMetrics_actualBoundingBoxAscent_Getter");

  TextMetricsV8Internal::actualBoundingBoxAscentAttributeGetter(info);
}

void V8TextMetrics::actualBoundingBoxDescentAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TextMetrics_actualBoundingBoxDescent_Getter");

  TextMetricsV8Internal::actualBoundingBoxDescentAttributeGetter(info);
}

void V8TextMetrics::emHeightAscentAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TextMetrics_emHeightAscent_Getter");

  TextMetricsV8Internal::emHeightAscentAttributeGetter(info);
}

void V8TextMetrics::emHeightDescentAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TextMetrics_emHeightDescent_Getter");

  TextMetricsV8Internal::emHeightDescentAttributeGetter(info);
}

void V8TextMetrics::hangingBaselineAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TextMetrics_hangingBaseline_Getter");

  TextMetricsV8Internal::hangingBaselineAttributeGetter(info);
}

void V8TextMetrics::alphabeticBaselineAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TextMetrics_alphabeticBaseline_Getter");

  TextMetricsV8Internal::alphabeticBaselineAttributeGetter(info);
}

void V8TextMetrics::ideographicBaselineAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TextMetrics_ideographicBaseline_Getter");

  TextMetricsV8Internal::ideographicBaselineAttributeGetter(info);
}

static const V8DOMConfiguration::AccessorConfiguration V8TextMetricsAccessors[] = {
    { "width", V8TextMetrics::widthAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
};

static void installV8TextMetricsTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8TextMetrics::wrapperTypeInfo.interface_name, v8::Local<v8::FunctionTemplate>(), V8TextMetrics::internalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8TextMetricsAccessors, arraysize(V8TextMetricsAccessors));

  // Custom signature

  V8TextMetrics::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8TextMetrics::InstallRuntimeEnabledFeaturesOnTemplate(
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

  if (RuntimeEnabledFeatures::ExtendedTextMetricsEnabled()) {
    static const V8DOMConfiguration::AccessorConfiguration accessor_configurations[] = {
        { "actualBoundingBoxAscent", V8TextMetrics::actualBoundingBoxAscentAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "actualBoundingBoxDescent", V8TextMetrics::actualBoundingBoxDescentAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "actualBoundingBoxLeft", V8TextMetrics::actualBoundingBoxLeftAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "actualBoundingBoxRight", V8TextMetrics::actualBoundingBoxRightAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "alphabeticBaseline", V8TextMetrics::alphabeticBaselineAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "emHeightAscent", V8TextMetrics::emHeightAscentAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "emHeightDescent", V8TextMetrics::emHeightDescentAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "fontBoundingBoxAscent", V8TextMetrics::fontBoundingBoxAscentAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "fontBoundingBoxDescent", V8TextMetrics::fontBoundingBoxDescentAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "hangingBaseline", V8TextMetrics::hangingBaselineAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "ideographicBaseline", V8TextMetrics::ideographicBaselineAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, accessor_configurations,
        arraysize(accessor_configurations));
  }

  // Custom signature
}

v8::Local<v8::FunctionTemplate> V8TextMetrics::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8TextMetricsTemplate);
}

bool V8TextMetrics::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8TextMetrics::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

TextMetrics* V8TextMetrics::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

TextMetrics* NativeValueTraits<TextMetrics>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  TextMetrics* nativeValue = V8TextMetrics::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "TextMetrics"));
  }
  return nativeValue;
}

}  // namespace blink
