// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_marker_element.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_angle.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animated_angle.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animated_enumeration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animated_length.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animated_preserve_aspect_ratio.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animated_rect.h"
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
const WrapperTypeInfo V8SVGMarkerElement::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8SVGMarkerElement::domTemplate,
    nullptr,
    "SVGMarkerElement",
    &V8SVGElement::wrapperTypeInfo,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kNodeClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in SVGMarkerElement.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& SVGMarkerElement::wrapper_type_info_ = V8SVGMarkerElement::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, SVGMarkerElement>::value,
    "SVGMarkerElement inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&SVGMarkerElement::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "SVGMarkerElement is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace SVGMarkerElementV8Internal {

static void refXAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGMarkerElement* impl = V8SVGMarkerElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->refX()), impl);
}

static void refYAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGMarkerElement* impl = V8SVGMarkerElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->refY()), impl);
}

static void markerUnitsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGMarkerElement* impl = V8SVGMarkerElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->markerUnits()), impl);
}

static void markerWidthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGMarkerElement* impl = V8SVGMarkerElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->markerWidth()), impl);
}

static void markerHeightAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGMarkerElement* impl = V8SVGMarkerElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->markerHeight()), impl);
}

static void orientTypeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGMarkerElement* impl = V8SVGMarkerElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->orientType()), impl);
}

static void orientAngleAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGMarkerElement* impl = V8SVGMarkerElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->orientAngle()), impl);
}

static void viewBoxAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGMarkerElement* impl = V8SVGMarkerElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->viewBox()), impl);
}

static void preserveAspectRatioAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGMarkerElement* impl = V8SVGMarkerElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->preserveAspectRatio()), impl);
}

static void setOrientToAutoMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  SVGMarkerElement* impl = V8SVGMarkerElement::ToImpl(info.Holder());

  impl->setOrientToAuto();
}

static void setOrientToAngleMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  SVGMarkerElement* impl = V8SVGMarkerElement::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("setOrientToAngle", "SVGMarkerElement", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  SVGAngleTearOff* angle;
  angle = V8SVGAngle::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!angle) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("setOrientToAngle", "SVGMarkerElement", "parameter 1 is not of type 'SVGAngle'."));
    return;
  }

  impl->setOrientToAngle(angle);
}

} // namespace SVGMarkerElementV8Internal

void V8SVGMarkerElement::refXAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGMarkerElement_refX_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVG1DOMMarkerElement);

  SVGMarkerElementV8Internal::refXAttributeGetter(info);
}

void V8SVGMarkerElement::refYAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGMarkerElement_refY_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVG1DOMMarkerElement);

  SVGMarkerElementV8Internal::refYAttributeGetter(info);
}

void V8SVGMarkerElement::markerUnitsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGMarkerElement_markerUnits_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVG1DOMMarkerElement);

  SVGMarkerElementV8Internal::markerUnitsAttributeGetter(info);
}

void V8SVGMarkerElement::markerWidthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGMarkerElement_markerWidth_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVG1DOMMarkerElement);

  SVGMarkerElementV8Internal::markerWidthAttributeGetter(info);
}

void V8SVGMarkerElement::markerHeightAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGMarkerElement_markerHeight_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVG1DOMMarkerElement);

  SVGMarkerElementV8Internal::markerHeightAttributeGetter(info);
}

void V8SVGMarkerElement::orientTypeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGMarkerElement_orientType_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVG1DOMMarkerElement);

  SVGMarkerElementV8Internal::orientTypeAttributeGetter(info);
}

void V8SVGMarkerElement::orientAngleAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGMarkerElement_orientAngle_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVG1DOMMarkerElement);

  SVGMarkerElementV8Internal::orientAngleAttributeGetter(info);
}

void V8SVGMarkerElement::viewBoxAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGMarkerElement_viewBox_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVG1DOMFitToViewBox);

  SVGMarkerElementV8Internal::viewBoxAttributeGetter(info);
}

void V8SVGMarkerElement::preserveAspectRatioAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGMarkerElement_preserveAspectRatio_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVG1DOMFitToViewBox);

  SVGMarkerElementV8Internal::preserveAspectRatioAttributeGetter(info);
}

void V8SVGMarkerElement::setOrientToAutoMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGMarkerElement_setOrientToAuto");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVG1DOMMarkerElement);
  SVGMarkerElementV8Internal::setOrientToAutoMethod(info);
}

void V8SVGMarkerElement::setOrientToAngleMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGMarkerElement_setOrientToAngle");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVG1DOMMarkerElement);
  SVGMarkerElementV8Internal::setOrientToAngleMethod(info);
}

static const V8DOMConfiguration::AccessorConfiguration V8SVGMarkerElementAccessors[] = {
    { "refX", V8SVGMarkerElement::refXAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "refY", V8SVGMarkerElement::refYAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "markerUnits", V8SVGMarkerElement::markerUnitsAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "markerWidth", V8SVGMarkerElement::markerWidthAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "markerHeight", V8SVGMarkerElement::markerHeightAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "orientType", V8SVGMarkerElement::orientTypeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "orientAngle", V8SVGMarkerElement::orientAngleAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "viewBox", V8SVGMarkerElement::viewBoxAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "preserveAspectRatio", V8SVGMarkerElement::preserveAspectRatioAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
};

static const V8DOMConfiguration::MethodConfiguration V8SVGMarkerElementMethods[] = {
    {"setOrientToAuto", V8SVGMarkerElement::setOrientToAutoMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setOrientToAngle", V8SVGMarkerElement::setOrientToAngleMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void installV8SVGMarkerElementTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8SVGMarkerElement::wrapperTypeInfo.interface_name, V8SVGElement::domTemplate(isolate, world), V8SVGMarkerElement::internalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  static constexpr V8DOMConfiguration::ConstantConfiguration V8SVGMarkerElementConstants[] = {
      {"SVG_MARKERUNITS_UNKNOWN", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(0)},
      {"SVG_MARKERUNITS_USERSPACEONUSE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(1)},
      {"SVG_MARKERUNITS_STROKEWIDTH", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(2)},
      {"SVG_MARKER_ORIENT_UNKNOWN", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(0)},
      {"SVG_MARKER_ORIENT_AUTO", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(1)},
      {"SVG_MARKER_ORIENT_ANGLE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(2)},
  };
  V8DOMConfiguration::InstallConstants(
      isolate, interfaceTemplate, prototypeTemplate,
      V8SVGMarkerElementConstants, arraysize(V8SVGMarkerElementConstants));
  static_assert(0 == SVGMarkerElement::kSvgMarkerunitsUnknown, "the value of SVGMarkerElement_kSvgMarkerunitsUnknown does not match with implementation");
  static_assert(1 == SVGMarkerElement::kSvgMarkerunitsUserspaceonuse, "the value of SVGMarkerElement_kSvgMarkerunitsUserspaceonuse does not match with implementation");
  static_assert(2 == SVGMarkerElement::kSvgMarkerunitsStrokewidth, "the value of SVGMarkerElement_kSvgMarkerunitsStrokewidth does not match with implementation");
  static_assert(0 == SVGMarkerElement::kSvgMarkerOrientUnknown, "the value of SVGMarkerElement_kSvgMarkerOrientUnknown does not match with implementation");
  static_assert(1 == SVGMarkerElement::kSvgMarkerOrientAuto, "the value of SVGMarkerElement_kSvgMarkerOrientAuto does not match with implementation");
  static_assert(2 == SVGMarkerElement::kSvgMarkerOrientAngle, "the value of SVGMarkerElement_kSvgMarkerOrientAngle does not match with implementation");
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8SVGMarkerElementAccessors, arraysize(V8SVGMarkerElementAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8SVGMarkerElementMethods, arraysize(V8SVGMarkerElementMethods));

  // Custom signature

  V8SVGMarkerElement::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8SVGMarkerElement::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8SVGMarkerElement::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8SVGMarkerElementTemplate);
}

bool V8SVGMarkerElement::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8SVGMarkerElement::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

SVGMarkerElement* V8SVGMarkerElement::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

SVGMarkerElement* NativeValueTraits<SVGMarkerElement>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  SVGMarkerElement* nativeValue = V8SVGMarkerElement::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "SVGMarkerElement"));
  }
  return nativeValue;
}

}  // namespace blink
