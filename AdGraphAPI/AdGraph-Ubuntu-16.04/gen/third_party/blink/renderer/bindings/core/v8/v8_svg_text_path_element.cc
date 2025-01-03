// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_text_path_element.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animated_enumeration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animated_length.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animated_string.h"
#include "third_party/blink/renderer/core/animation/element_animation.h"
#include "third_party/blink/renderer/core/css/cssom/element_computed_style_map.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/core/fullscreen/element_fullscreen.h"
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
const WrapperTypeInfo V8SVGTextPathElement::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8SVGTextPathElement::domTemplate,
    nullptr,
    "SVGTextPathElement",
    &V8SVGTextContentElement::wrapperTypeInfo,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kNodeClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in SVGTextPathElement.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& SVGTextPathElement::wrapper_type_info_ = V8SVGTextPathElement::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, SVGTextPathElement>::value,
    "SVGTextPathElement inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&SVGTextPathElement::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "SVGTextPathElement is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace SVGTextPathElementV8Internal {

static void startOffsetAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGTextPathElement* impl = V8SVGTextPathElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->startOffset()), impl);
}

static void methodAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGTextPathElement* impl = V8SVGTextPathElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->method()), impl);
}

static void spacingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGTextPathElement* impl = V8SVGTextPathElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->spacing()), impl);
}

static void hrefAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGTextPathElement* impl = V8SVGTextPathElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->href()), impl);
}

} // namespace SVGTextPathElementV8Internal

void V8SVGTextPathElement::TEXTPATH_METHODTYPE_UNKNOWNConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGTextPathElement_TEXTPATH_METHODTYPE_UNKNOWN_ConstantGetter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVG1DOMText);
  V8SetReturnValueInt(info, 0);
}

void V8SVGTextPathElement::TEXTPATH_METHODTYPE_ALIGNConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGTextPathElement_TEXTPATH_METHODTYPE_ALIGN_ConstantGetter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVG1DOMText);
  V8SetReturnValueInt(info, 1);
}

void V8SVGTextPathElement::TEXTPATH_METHODTYPE_STRETCHConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGTextPathElement_TEXTPATH_METHODTYPE_STRETCH_ConstantGetter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVG1DOMText);
  V8SetReturnValueInt(info, 2);
}

void V8SVGTextPathElement::TEXTPATH_SPACINGTYPE_UNKNOWNConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGTextPathElement_TEXTPATH_SPACINGTYPE_UNKNOWN_ConstantGetter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVG1DOMText);
  V8SetReturnValueInt(info, 0);
}

void V8SVGTextPathElement::TEXTPATH_SPACINGTYPE_AUTOConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGTextPathElement_TEXTPATH_SPACINGTYPE_AUTO_ConstantGetter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVG1DOMText);
  V8SetReturnValueInt(info, 1);
}

void V8SVGTextPathElement::TEXTPATH_SPACINGTYPE_EXACTConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGTextPathElement_TEXTPATH_SPACINGTYPE_EXACT_ConstantGetter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVG1DOMText);
  V8SetReturnValueInt(info, 2);
}

void V8SVGTextPathElement::startOffsetAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGTextPathElement_startOffset_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVG1DOMText);

  SVGTextPathElementV8Internal::startOffsetAttributeGetter(info);
}

void V8SVGTextPathElement::methodAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGTextPathElement_method_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVG1DOMText);

  SVGTextPathElementV8Internal::methodAttributeGetter(info);
}

void V8SVGTextPathElement::spacingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGTextPathElement_spacing_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVG1DOMText);

  SVGTextPathElementV8Internal::spacingAttributeGetter(info);
}

void V8SVGTextPathElement::hrefAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGTextPathElement_href_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVG1DOMUriReference);

  SVGTextPathElementV8Internal::hrefAttributeGetter(info);
}

static const V8DOMConfiguration::AccessorConfiguration V8SVGTextPathElementAccessors[] = {
    { "startOffset", V8SVGTextPathElement::startOffsetAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "method", V8SVGTextPathElement::methodAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "spacing", V8SVGTextPathElement::spacingAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "href", V8SVGTextPathElement::hrefAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
};

static void installV8SVGTextPathElementTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8SVGTextPathElement::wrapperTypeInfo.interface_name, V8SVGTextContentElement::domTemplate(isolate, world), V8SVGTextPathElement::internalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallConstantWithGetter(
      isolate, interfaceTemplate, prototypeTemplate,
      "TEXTPATH_METHODTYPE_UNKNOWN", V8SVGTextPathElement::TEXTPATH_METHODTYPE_UNKNOWNConstantGetterCallback);
  V8DOMConfiguration::InstallConstantWithGetter(
      isolate, interfaceTemplate, prototypeTemplate,
      "TEXTPATH_METHODTYPE_ALIGN", V8SVGTextPathElement::TEXTPATH_METHODTYPE_ALIGNConstantGetterCallback);
  V8DOMConfiguration::InstallConstantWithGetter(
      isolate, interfaceTemplate, prototypeTemplate,
      "TEXTPATH_METHODTYPE_STRETCH", V8SVGTextPathElement::TEXTPATH_METHODTYPE_STRETCHConstantGetterCallback);
  V8DOMConfiguration::InstallConstantWithGetter(
      isolate, interfaceTemplate, prototypeTemplate,
      "TEXTPATH_SPACINGTYPE_UNKNOWN", V8SVGTextPathElement::TEXTPATH_SPACINGTYPE_UNKNOWNConstantGetterCallback);
  V8DOMConfiguration::InstallConstantWithGetter(
      isolate, interfaceTemplate, prototypeTemplate,
      "TEXTPATH_SPACINGTYPE_AUTO", V8SVGTextPathElement::TEXTPATH_SPACINGTYPE_AUTOConstantGetterCallback);
  V8DOMConfiguration::InstallConstantWithGetter(
      isolate, interfaceTemplate, prototypeTemplate,
      "TEXTPATH_SPACINGTYPE_EXACT", V8SVGTextPathElement::TEXTPATH_SPACINGTYPE_EXACTConstantGetterCallback);
  static_assert(0 == SVGTextPathElement::kTextpathMethodtypeUnknown, "the value of SVGTextPathElement_kTextpathMethodtypeUnknown does not match with implementation");
  static_assert(1 == SVGTextPathElement::kTextpathMethodtypeAlign, "the value of SVGTextPathElement_kTextpathMethodtypeAlign does not match with implementation");
  static_assert(2 == SVGTextPathElement::kTextpathMethodtypeStretch, "the value of SVGTextPathElement_kTextpathMethodtypeStretch does not match with implementation");
  static_assert(0 == SVGTextPathElement::kTextpathSpacingtypeUnknown, "the value of SVGTextPathElement_kTextpathSpacingtypeUnknown does not match with implementation");
  static_assert(1 == SVGTextPathElement::kTextpathSpacingtypeAuto, "the value of SVGTextPathElement_kTextpathSpacingtypeAuto does not match with implementation");
  static_assert(2 == SVGTextPathElement::kTextpathSpacingtypeExact, "the value of SVGTextPathElement_kTextpathSpacingtypeExact does not match with implementation");
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8SVGTextPathElementAccessors, arraysize(V8SVGTextPathElementAccessors));

  // Custom signature

  V8SVGTextPathElement::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8SVGTextPathElement::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8SVGTextPathElement::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8SVGTextPathElementTemplate);
}

bool V8SVGTextPathElement::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8SVGTextPathElement::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

SVGTextPathElement* V8SVGTextPathElement::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

SVGTextPathElement* NativeValueTraits<SVGTextPathElement>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  SVGTextPathElement* nativeValue = V8SVGTextPathElement::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "SVGTextPathElement"));
  }
  return nativeValue;
}

}  // namespace blink
