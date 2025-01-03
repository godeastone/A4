// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_css_rule.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_rule.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_style_sheet.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/bindings/v8_private_property.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"
#include "third_party/blink/renderer/platform/wtf/get_ptr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8CSSRule::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8CSSRule::domTemplate,
    nullptr,
    "CSSRule",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in CSSRule.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& CSSRule::wrapper_type_info_ = V8CSSRule::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, CSSRule>::value,
    "CSSRule inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&CSSRule::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "CSSRule is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace CSSRuleV8Internal {

static void typeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  CSSRule* impl = V8CSSRule::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->type());
}

static void cssTextAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  CSSRule* impl = V8CSSRule::ToImpl(holder);

  V8SetReturnValueString(info, impl->cssText(), info.GetIsolate());
}

static void cssTextAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  CSSRule* impl = V8CSSRule::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  impl->setCSSText(cppValue);
}

static void parentRuleAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  CSSRule* impl = V8CSSRule::ToImpl(holder);

  CSSRule* cppValue(WTF::GetPtr(impl->parentRule()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#CSSRule#parentRule")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void parentStyleSheetAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  CSSRule* impl = V8CSSRule::ToImpl(holder);

  CSSStyleSheet* cppValue(WTF::GetPtr(impl->parentStyleSheet()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#CSSRule#parentStyleSheet")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

} // namespace CSSRuleV8Internal

void V8CSSRule::typeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSRule_type_Getter");

  CSSRuleV8Internal::typeAttributeGetter(info);
}

void V8CSSRule::cssTextAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSRule_cssText_Getter");

  CSSRuleV8Internal::cssTextAttributeGetter(info);
}

void V8CSSRule::cssTextAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSRule_cssText_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  CSSRuleV8Internal::cssTextAttributeSetter(v8Value, info);
}

void V8CSSRule::parentRuleAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSRule_parentRule_Getter");

  CSSRuleV8Internal::parentRuleAttributeGetter(info);
}

void V8CSSRule::parentStyleSheetAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSRule_parentStyleSheet_Getter");

  CSSRuleV8Internal::parentStyleSheetAttributeGetter(info);
}

static const V8DOMConfiguration::AccessorConfiguration V8CSSRuleAccessors[] = {
    { "type", V8CSSRule::typeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "cssText", V8CSSRule::cssTextAttributeGetterCallback, V8CSSRule::cssTextAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "parentRule", V8CSSRule::parentRuleAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "parentStyleSheet", V8CSSRule::parentStyleSheetAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
};

static void installV8CSSRuleTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8CSSRule::wrapperTypeInfo.interface_name, v8::Local<v8::FunctionTemplate>(), V8CSSRule::internalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  static constexpr V8DOMConfiguration::ConstantConfiguration V8CSSRuleConstants[] = {
      {"STYLE_RULE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(1)},
      {"CHARSET_RULE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(2)},
      {"IMPORT_RULE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(3)},
      {"MEDIA_RULE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(4)},
      {"FONT_FACE_RULE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(5)},
      {"PAGE_RULE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(6)},
      {"NAMESPACE_RULE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(10)},
      {"KEYFRAMES_RULE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(7)},
      {"KEYFRAME_RULE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(8)},
      {"SUPPORTS_RULE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(12)},
  };
  V8DOMConfiguration::InstallConstants(
      isolate, interfaceTemplate, prototypeTemplate,
      V8CSSRuleConstants, arraysize(V8CSSRuleConstants));
  static_assert(1 == CSSRule::kStyleRule, "the value of CSSRule_kStyleRule does not match with implementation");
  static_assert(2 == CSSRule::kCharsetRule, "the value of CSSRule_kCharsetRule does not match with implementation");
  static_assert(3 == CSSRule::kImportRule, "the value of CSSRule_kImportRule does not match with implementation");
  static_assert(4 == CSSRule::kMediaRule, "the value of CSSRule_kMediaRule does not match with implementation");
  static_assert(5 == CSSRule::kFontFaceRule, "the value of CSSRule_kFontFaceRule does not match with implementation");
  static_assert(6 == CSSRule::kPageRule, "the value of CSSRule_kPageRule does not match with implementation");
  static_assert(10 == CSSRule::kNamespaceRule, "the value of CSSRule_kNamespaceRule does not match with implementation");
  static_assert(7 == CSSRule::kKeyframesRule, "the value of CSSRule_kKeyframesRule does not match with implementation");
  static_assert(8 == CSSRule::kKeyframeRule, "the value of CSSRule_kKeyframeRule does not match with implementation");
  static_assert(12 == CSSRule::kSupportsRule, "the value of CSSRule_kSupportsRule does not match with implementation");
  static_assert(15 == CSSRule::kViewportRule, "the value of CSSRule_kViewportRule does not match with implementation");
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8CSSRuleAccessors, arraysize(V8CSSRuleAccessors));

  // Custom signature

  V8CSSRule::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8CSSRule::InstallRuntimeEnabledFeaturesOnTemplate(
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
  if (RuntimeEnabledFeatures::CSSViewportEnabled()) {
    static const V8DOMConfiguration::ConstantConfiguration constant_configurations[] = {
        {"VIEWPORT_RULE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(15)},
    };
    V8DOMConfiguration::InstallConstants(
        isolate, interface_template, prototype_template,
        constant_configurations, arraysize(constant_configurations));
  }

  // Custom signature
}

v8::Local<v8::FunctionTemplate> V8CSSRule::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8CSSRuleTemplate);
}

bool V8CSSRule::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8CSSRule::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

CSSRule* V8CSSRule::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

CSSRule* NativeValueTraits<CSSRule>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  CSSRule* nativeValue = V8CSSRule::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "CSSRule"));
  }
  return nativeValue;
}

}  // namespace blink
