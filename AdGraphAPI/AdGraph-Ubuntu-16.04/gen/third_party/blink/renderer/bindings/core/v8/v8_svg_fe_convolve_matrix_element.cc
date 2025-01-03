// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_fe_convolve_matrix_element.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animated_boolean.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animated_enumeration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animated_integer.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animated_length.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animated_number.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animated_number_list.h"
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
const WrapperTypeInfo V8SVGFEConvolveMatrixElement::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8SVGFEConvolveMatrixElement::domTemplate,
    nullptr,
    "SVGFEConvolveMatrixElement",
    &V8SVGElement::wrapperTypeInfo,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kNodeClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in SVGFEConvolveMatrixElement.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& SVGFEConvolveMatrixElement::wrapper_type_info_ = V8SVGFEConvolveMatrixElement::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, SVGFEConvolveMatrixElement>::value,
    "SVGFEConvolveMatrixElement inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&SVGFEConvolveMatrixElement::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "SVGFEConvolveMatrixElement is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace SVGFEConvolveMatrixElementV8Internal {

static void in1AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGFEConvolveMatrixElement* impl = V8SVGFEConvolveMatrixElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->in1()), impl);
}

static void orderXAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGFEConvolveMatrixElement* impl = V8SVGFEConvolveMatrixElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->orderX()), impl);
}

static void orderYAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGFEConvolveMatrixElement* impl = V8SVGFEConvolveMatrixElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->orderY()), impl);
}

static void kernelMatrixAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGFEConvolveMatrixElement* impl = V8SVGFEConvolveMatrixElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->kernelMatrix()), impl);
}

static void divisorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGFEConvolveMatrixElement* impl = V8SVGFEConvolveMatrixElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->divisor()), impl);
}

static void biasAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGFEConvolveMatrixElement* impl = V8SVGFEConvolveMatrixElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->bias()), impl);
}

static void targetXAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGFEConvolveMatrixElement* impl = V8SVGFEConvolveMatrixElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->targetX()), impl);
}

static void targetYAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGFEConvolveMatrixElement* impl = V8SVGFEConvolveMatrixElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->targetY()), impl);
}

static void edgeModeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGFEConvolveMatrixElement* impl = V8SVGFEConvolveMatrixElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->edgeMode()), impl);
}

static void kernelUnitLengthXAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGFEConvolveMatrixElement* impl = V8SVGFEConvolveMatrixElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->kernelUnitLengthX()), impl);
}

static void kernelUnitLengthYAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGFEConvolveMatrixElement* impl = V8SVGFEConvolveMatrixElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->kernelUnitLengthY()), impl);
}

static void preserveAlphaAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGFEConvolveMatrixElement* impl = V8SVGFEConvolveMatrixElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->preserveAlpha()), impl);
}

static void xAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGFEConvolveMatrixElement* impl = V8SVGFEConvolveMatrixElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->x()), impl);
}

static void yAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGFEConvolveMatrixElement* impl = V8SVGFEConvolveMatrixElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->y()), impl);
}

static void widthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGFEConvolveMatrixElement* impl = V8SVGFEConvolveMatrixElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->width()), impl);
}

static void heightAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGFEConvolveMatrixElement* impl = V8SVGFEConvolveMatrixElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->height()), impl);
}

static void resultAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGFEConvolveMatrixElement* impl = V8SVGFEConvolveMatrixElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->result()), impl);
}

} // namespace SVGFEConvolveMatrixElementV8Internal

void V8SVGFEConvolveMatrixElement::SVG_EDGEMODE_UNKNOWNConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFEConvolveMatrixElement_SVG_EDGEMODE_UNKNOWN_ConstantGetter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVG1DOMFilter);
  V8SetReturnValueInt(info, 0);
}

void V8SVGFEConvolveMatrixElement::SVG_EDGEMODE_DUPLICATEConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFEConvolveMatrixElement_SVG_EDGEMODE_DUPLICATE_ConstantGetter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVG1DOMFilter);
  V8SetReturnValueInt(info, 1);
}

void V8SVGFEConvolveMatrixElement::SVG_EDGEMODE_WRAPConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFEConvolveMatrixElement_SVG_EDGEMODE_WRAP_ConstantGetter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVG1DOMFilter);
  V8SetReturnValueInt(info, 2);
}

void V8SVGFEConvolveMatrixElement::SVG_EDGEMODE_NONEConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFEConvolveMatrixElement_SVG_EDGEMODE_NONE_ConstantGetter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVG1DOMFilter);
  V8SetReturnValueInt(info, 3);
}

void V8SVGFEConvolveMatrixElement::in1AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFEConvolveMatrixElement_in1_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVG1DOMFilter);

  SVGFEConvolveMatrixElementV8Internal::in1AttributeGetter(info);
}

void V8SVGFEConvolveMatrixElement::orderXAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFEConvolveMatrixElement_orderX_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVG1DOMFilter);

  SVGFEConvolveMatrixElementV8Internal::orderXAttributeGetter(info);
}

void V8SVGFEConvolveMatrixElement::orderYAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFEConvolveMatrixElement_orderY_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVG1DOMFilter);

  SVGFEConvolveMatrixElementV8Internal::orderYAttributeGetter(info);
}

void V8SVGFEConvolveMatrixElement::kernelMatrixAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFEConvolveMatrixElement_kernelMatrix_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVG1DOMFilter);

  SVGFEConvolveMatrixElementV8Internal::kernelMatrixAttributeGetter(info);
}

void V8SVGFEConvolveMatrixElement::divisorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFEConvolveMatrixElement_divisor_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVG1DOMFilter);

  SVGFEConvolveMatrixElementV8Internal::divisorAttributeGetter(info);
}

void V8SVGFEConvolveMatrixElement::biasAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFEConvolveMatrixElement_bias_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVG1DOMFilter);

  SVGFEConvolveMatrixElementV8Internal::biasAttributeGetter(info);
}

void V8SVGFEConvolveMatrixElement::targetXAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFEConvolveMatrixElement_targetX_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVG1DOMFilter);

  SVGFEConvolveMatrixElementV8Internal::targetXAttributeGetter(info);
}

void V8SVGFEConvolveMatrixElement::targetYAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFEConvolveMatrixElement_targetY_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVG1DOMFilter);

  SVGFEConvolveMatrixElementV8Internal::targetYAttributeGetter(info);
}

void V8SVGFEConvolveMatrixElement::edgeModeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFEConvolveMatrixElement_edgeMode_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVG1DOMFilter);

  SVGFEConvolveMatrixElementV8Internal::edgeModeAttributeGetter(info);
}

void V8SVGFEConvolveMatrixElement::kernelUnitLengthXAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFEConvolveMatrixElement_kernelUnitLengthX_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVG1DOMFilter);

  SVGFEConvolveMatrixElementV8Internal::kernelUnitLengthXAttributeGetter(info);
}

void V8SVGFEConvolveMatrixElement::kernelUnitLengthYAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFEConvolveMatrixElement_kernelUnitLengthY_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVG1DOMFilter);

  SVGFEConvolveMatrixElementV8Internal::kernelUnitLengthYAttributeGetter(info);
}

void V8SVGFEConvolveMatrixElement::preserveAlphaAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFEConvolveMatrixElement_preserveAlpha_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8SVGFEConvolveMatrixElement_PreserveAlpha_AttributeGetter);

  SVGFEConvolveMatrixElementV8Internal::preserveAlphaAttributeGetter(info);
}

void V8SVGFEConvolveMatrixElement::xAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFEConvolveMatrixElement_x_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVG1DOMFilter);

  SVGFEConvolveMatrixElementV8Internal::xAttributeGetter(info);
}

void V8SVGFEConvolveMatrixElement::yAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFEConvolveMatrixElement_y_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVG1DOMFilter);

  SVGFEConvolveMatrixElementV8Internal::yAttributeGetter(info);
}

void V8SVGFEConvolveMatrixElement::widthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFEConvolveMatrixElement_width_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVG1DOMFilter);

  SVGFEConvolveMatrixElementV8Internal::widthAttributeGetter(info);
}

void V8SVGFEConvolveMatrixElement::heightAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFEConvolveMatrixElement_height_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVG1DOMFilter);

  SVGFEConvolveMatrixElementV8Internal::heightAttributeGetter(info);
}

void V8SVGFEConvolveMatrixElement::resultAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFEConvolveMatrixElement_result_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVG1DOMFilter);

  SVGFEConvolveMatrixElementV8Internal::resultAttributeGetter(info);
}

static const V8DOMConfiguration::AccessorConfiguration V8SVGFEConvolveMatrixElementAccessors[] = {
    { "in1", V8SVGFEConvolveMatrixElement::in1AttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "orderX", V8SVGFEConvolveMatrixElement::orderXAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "orderY", V8SVGFEConvolveMatrixElement::orderYAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "kernelMatrix", V8SVGFEConvolveMatrixElement::kernelMatrixAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "divisor", V8SVGFEConvolveMatrixElement::divisorAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "bias", V8SVGFEConvolveMatrixElement::biasAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "targetX", V8SVGFEConvolveMatrixElement::targetXAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "targetY", V8SVGFEConvolveMatrixElement::targetYAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "edgeMode", V8SVGFEConvolveMatrixElement::edgeModeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "kernelUnitLengthX", V8SVGFEConvolveMatrixElement::kernelUnitLengthXAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "kernelUnitLengthY", V8SVGFEConvolveMatrixElement::kernelUnitLengthYAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "preserveAlpha", V8SVGFEConvolveMatrixElement::preserveAlphaAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "x", V8SVGFEConvolveMatrixElement::xAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "y", V8SVGFEConvolveMatrixElement::yAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "width", V8SVGFEConvolveMatrixElement::widthAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "height", V8SVGFEConvolveMatrixElement::heightAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "result", V8SVGFEConvolveMatrixElement::resultAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
};

static void installV8SVGFEConvolveMatrixElementTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8SVGFEConvolveMatrixElement::wrapperTypeInfo.interface_name, V8SVGElement::domTemplate(isolate, world), V8SVGFEConvolveMatrixElement::internalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallConstantWithGetter(
      isolate, interfaceTemplate, prototypeTemplate,
      "SVG_EDGEMODE_UNKNOWN", V8SVGFEConvolveMatrixElement::SVG_EDGEMODE_UNKNOWNConstantGetterCallback);
  V8DOMConfiguration::InstallConstantWithGetter(
      isolate, interfaceTemplate, prototypeTemplate,
      "SVG_EDGEMODE_DUPLICATE", V8SVGFEConvolveMatrixElement::SVG_EDGEMODE_DUPLICATEConstantGetterCallback);
  V8DOMConfiguration::InstallConstantWithGetter(
      isolate, interfaceTemplate, prototypeTemplate,
      "SVG_EDGEMODE_WRAP", V8SVGFEConvolveMatrixElement::SVG_EDGEMODE_WRAPConstantGetterCallback);
  V8DOMConfiguration::InstallConstantWithGetter(
      isolate, interfaceTemplate, prototypeTemplate,
      "SVG_EDGEMODE_NONE", V8SVGFEConvolveMatrixElement::SVG_EDGEMODE_NONEConstantGetterCallback);
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8SVGFEConvolveMatrixElementAccessors, arraysize(V8SVGFEConvolveMatrixElementAccessors));

  // Custom signature

  V8SVGFEConvolveMatrixElement::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8SVGFEConvolveMatrixElement::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8SVGFEConvolveMatrixElement::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8SVGFEConvolveMatrixElementTemplate);
}

bool V8SVGFEConvolveMatrixElement::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8SVGFEConvolveMatrixElement::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

SVGFEConvolveMatrixElement* V8SVGFEConvolveMatrixElement::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

SVGFEConvolveMatrixElement* NativeValueTraits<SVGFEConvolveMatrixElement>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  SVGFEConvolveMatrixElement* nativeValue = V8SVGFEConvolveMatrixElement::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "SVGFEConvolveMatrixElement"));
  }
  return nativeValue;
}

}  // namespace blink
