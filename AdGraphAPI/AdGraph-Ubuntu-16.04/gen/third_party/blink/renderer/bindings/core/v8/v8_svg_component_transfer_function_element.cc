// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_component_transfer_function_element.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animated_enumeration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animated_number.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animated_number_list.h"
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
const WrapperTypeInfo V8SVGComponentTransferFunctionElement::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8SVGComponentTransferFunctionElement::domTemplate,
    nullptr,
    "SVGComponentTransferFunctionElement",
    &V8SVGElement::wrapperTypeInfo,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kNodeClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in SVGComponentTransferFunctionElement.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& SVGComponentTransferFunctionElement::wrapper_type_info_ = V8SVGComponentTransferFunctionElement::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, SVGComponentTransferFunctionElement>::value,
    "SVGComponentTransferFunctionElement inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&SVGComponentTransferFunctionElement::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "SVGComponentTransferFunctionElement is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace SVGComponentTransferFunctionElementV8Internal {

static void typeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGComponentTransferFunctionElement* impl = V8SVGComponentTransferFunctionElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->type()), impl);
}

static void tableValuesAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGComponentTransferFunctionElement* impl = V8SVGComponentTransferFunctionElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->tableValues()), impl);
}

static void slopeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGComponentTransferFunctionElement* impl = V8SVGComponentTransferFunctionElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->slope()), impl);
}

static void interceptAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGComponentTransferFunctionElement* impl = V8SVGComponentTransferFunctionElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->intercept()), impl);
}

static void amplitudeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGComponentTransferFunctionElement* impl = V8SVGComponentTransferFunctionElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->amplitude()), impl);
}

static void exponentAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGComponentTransferFunctionElement* impl = V8SVGComponentTransferFunctionElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->exponent()), impl);
}

static void offsetAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGComponentTransferFunctionElement* impl = V8SVGComponentTransferFunctionElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->offset()), impl);
}

} // namespace SVGComponentTransferFunctionElementV8Internal

void V8SVGComponentTransferFunctionElement::SVG_FECOMPONENTTRANSFER_TYPE_UNKNOWNConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGComponentTransferFunctionElement_SVG_FECOMPONENTTRANSFER_TYPE_UNKNOWN_ConstantGetter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVG1DOMFilter);
  V8SetReturnValueInt(info, 0);
}

void V8SVGComponentTransferFunctionElement::SVG_FECOMPONENTTRANSFER_TYPE_IDENTITYConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGComponentTransferFunctionElement_SVG_FECOMPONENTTRANSFER_TYPE_IDENTITY_ConstantGetter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVG1DOMFilter);
  V8SetReturnValueInt(info, 1);
}

void V8SVGComponentTransferFunctionElement::SVG_FECOMPONENTTRANSFER_TYPE_TABLEConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGComponentTransferFunctionElement_SVG_FECOMPONENTTRANSFER_TYPE_TABLE_ConstantGetter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVG1DOMFilter);
  V8SetReturnValueInt(info, 2);
}

void V8SVGComponentTransferFunctionElement::SVG_FECOMPONENTTRANSFER_TYPE_DISCRETEConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGComponentTransferFunctionElement_SVG_FECOMPONENTTRANSFER_TYPE_DISCRETE_ConstantGetter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVG1DOMFilter);
  V8SetReturnValueInt(info, 3);
}

void V8SVGComponentTransferFunctionElement::SVG_FECOMPONENTTRANSFER_TYPE_LINEARConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGComponentTransferFunctionElement_SVG_FECOMPONENTTRANSFER_TYPE_LINEAR_ConstantGetter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVG1DOMFilter);
  V8SetReturnValueInt(info, 4);
}

void V8SVGComponentTransferFunctionElement::SVG_FECOMPONENTTRANSFER_TYPE_GAMMAConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGComponentTransferFunctionElement_SVG_FECOMPONENTTRANSFER_TYPE_GAMMA_ConstantGetter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVG1DOMFilter);
  V8SetReturnValueInt(info, 5);
}

void V8SVGComponentTransferFunctionElement::typeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGComponentTransferFunctionElement_type_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVG1DOMFilter);

  SVGComponentTransferFunctionElementV8Internal::typeAttributeGetter(info);
}

void V8SVGComponentTransferFunctionElement::tableValuesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGComponentTransferFunctionElement_tableValues_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVG1DOMFilter);

  SVGComponentTransferFunctionElementV8Internal::tableValuesAttributeGetter(info);
}

void V8SVGComponentTransferFunctionElement::slopeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGComponentTransferFunctionElement_slope_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVG1DOMFilter);

  SVGComponentTransferFunctionElementV8Internal::slopeAttributeGetter(info);
}

void V8SVGComponentTransferFunctionElement::interceptAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGComponentTransferFunctionElement_intercept_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVG1DOMFilter);

  SVGComponentTransferFunctionElementV8Internal::interceptAttributeGetter(info);
}

void V8SVGComponentTransferFunctionElement::amplitudeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGComponentTransferFunctionElement_amplitude_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVG1DOMFilter);

  SVGComponentTransferFunctionElementV8Internal::amplitudeAttributeGetter(info);
}

void V8SVGComponentTransferFunctionElement::exponentAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGComponentTransferFunctionElement_exponent_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVG1DOMFilter);

  SVGComponentTransferFunctionElementV8Internal::exponentAttributeGetter(info);
}

void V8SVGComponentTransferFunctionElement::offsetAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGComponentTransferFunctionElement_offset_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVG1DOMFilter);

  SVGComponentTransferFunctionElementV8Internal::offsetAttributeGetter(info);
}

static const V8DOMConfiguration::AccessorConfiguration V8SVGComponentTransferFunctionElementAccessors[] = {
    { "type", V8SVGComponentTransferFunctionElement::typeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "tableValues", V8SVGComponentTransferFunctionElement::tableValuesAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "slope", V8SVGComponentTransferFunctionElement::slopeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "intercept", V8SVGComponentTransferFunctionElement::interceptAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "amplitude", V8SVGComponentTransferFunctionElement::amplitudeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "exponent", V8SVGComponentTransferFunctionElement::exponentAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "offset", V8SVGComponentTransferFunctionElement::offsetAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
};

static void installV8SVGComponentTransferFunctionElementTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8SVGComponentTransferFunctionElement::wrapperTypeInfo.interface_name, V8SVGElement::domTemplate(isolate, world), V8SVGComponentTransferFunctionElement::internalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallConstantWithGetter(
      isolate, interfaceTemplate, prototypeTemplate,
      "SVG_FECOMPONENTTRANSFER_TYPE_UNKNOWN", V8SVGComponentTransferFunctionElement::SVG_FECOMPONENTTRANSFER_TYPE_UNKNOWNConstantGetterCallback);
  V8DOMConfiguration::InstallConstantWithGetter(
      isolate, interfaceTemplate, prototypeTemplate,
      "SVG_FECOMPONENTTRANSFER_TYPE_IDENTITY", V8SVGComponentTransferFunctionElement::SVG_FECOMPONENTTRANSFER_TYPE_IDENTITYConstantGetterCallback);
  V8DOMConfiguration::InstallConstantWithGetter(
      isolate, interfaceTemplate, prototypeTemplate,
      "SVG_FECOMPONENTTRANSFER_TYPE_TABLE", V8SVGComponentTransferFunctionElement::SVG_FECOMPONENTTRANSFER_TYPE_TABLEConstantGetterCallback);
  V8DOMConfiguration::InstallConstantWithGetter(
      isolate, interfaceTemplate, prototypeTemplate,
      "SVG_FECOMPONENTTRANSFER_TYPE_DISCRETE", V8SVGComponentTransferFunctionElement::SVG_FECOMPONENTTRANSFER_TYPE_DISCRETEConstantGetterCallback);
  V8DOMConfiguration::InstallConstantWithGetter(
      isolate, interfaceTemplate, prototypeTemplate,
      "SVG_FECOMPONENTTRANSFER_TYPE_LINEAR", V8SVGComponentTransferFunctionElement::SVG_FECOMPONENTTRANSFER_TYPE_LINEARConstantGetterCallback);
  V8DOMConfiguration::InstallConstantWithGetter(
      isolate, interfaceTemplate, prototypeTemplate,
      "SVG_FECOMPONENTTRANSFER_TYPE_GAMMA", V8SVGComponentTransferFunctionElement::SVG_FECOMPONENTTRANSFER_TYPE_GAMMAConstantGetterCallback);
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8SVGComponentTransferFunctionElementAccessors, arraysize(V8SVGComponentTransferFunctionElementAccessors));

  // Custom signature

  V8SVGComponentTransferFunctionElement::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8SVGComponentTransferFunctionElement::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8SVGComponentTransferFunctionElement::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8SVGComponentTransferFunctionElementTemplate);
}

bool V8SVGComponentTransferFunctionElement::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8SVGComponentTransferFunctionElement::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

SVGComponentTransferFunctionElement* V8SVGComponentTransferFunctionElement::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

SVGComponentTransferFunctionElement* NativeValueTraits<SVGComponentTransferFunctionElement>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  SVGComponentTransferFunctionElement* nativeValue = V8SVGComponentTransferFunctionElement::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "SVGComponentTransferFunctionElement"));
  }
  return nativeValue;
}

}  // namespace blink
