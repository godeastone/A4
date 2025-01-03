// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_svg_element.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_node_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_angle.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animated_length.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animated_preserve_aspect_ratio.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animated_rect.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_length.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_matrix.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_number.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_point.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_rect.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_transform.h"
#include "third_party/blink/renderer/core/animation/element_animation.h"
#include "third_party/blink/renderer/core/css/cssom/element_computed_style_map.h"
#include "third_party/blink/renderer/core/dom/name_node_list.h"
#include "third_party/blink/renderer/core/dom/node_list.h"
#include "third_party/blink/renderer/core/dom/static_node_list.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/core/fullscreen/element_fullscreen.h"
#include "third_party/blink/renderer/core/html/forms/labels_node_list.h"
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
const WrapperTypeInfo V8SVGSVGElement::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8SVGSVGElement::domTemplate,
    nullptr,
    "SVGSVGElement",
    &V8SVGGraphicsElement::wrapperTypeInfo,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kNodeClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in SVGSVGElement.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& SVGSVGElement::wrapper_type_info_ = V8SVGSVGElement::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, SVGSVGElement>::value,
    "SVGSVGElement inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&SVGSVGElement::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "SVGSVGElement is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace SVGSVGElementV8Internal {

static void xAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGSVGElement* impl = V8SVGSVGElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->x()), impl);
}

static void yAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGSVGElement* impl = V8SVGSVGElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->y()), impl);
}

static void widthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGSVGElement* impl = V8SVGSVGElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->width()), impl);
}

static void heightAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGSVGElement* impl = V8SVGSVGElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->height()), impl);
}

static void currentScaleAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGSVGElement* impl = V8SVGSVGElement::ToImpl(holder);

  V8SetReturnValue(info, impl->currentScale());
}

static void currentScaleAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SVGSVGElement* impl = V8SVGSVGElement::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "SVGSVGElement", "currentScale");

  // Prepare the value to be set.
  float cppValue = NativeValueTraits<IDLFloat>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setCurrentScale(cppValue);
}

static void currentTranslateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGSVGElement* impl = V8SVGSVGElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->currentTranslateFromJavascript()), impl);
}

static void viewBoxAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGSVGElement* impl = V8SVGSVGElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->viewBox()), impl);
}

static void preserveAspectRatioAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGSVGElement* impl = V8SVGSVGElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->preserveAspectRatio()), impl);
}

static void zoomAndPanAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGSVGElement* impl = V8SVGSVGElement::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->zoomAndPan());
}

static void zoomAndPanAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SVGSVGElement* impl = V8SVGSVGElement::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "SVGSVGElement", "zoomAndPan");

  // Prepare the value to be set.
  uint16_t cppValue = NativeValueTraits<IDLUnsignedShort>::NativeValue(info.GetIsolate(), v8Value, exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->setZoomAndPan(cppValue, exceptionState);
}

static void getIntersectionListMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  SVGSVGElement* impl = V8SVGSVGElement::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getIntersectionList", "SVGSVGElement", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  SVGRectTearOff* rect;
  SVGElement* referenceElement;
  rect = V8SVGRect::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!rect) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getIntersectionList", "SVGSVGElement", "parameter 1 is not of type 'SVGRect'."));
    return;
  }

  referenceElement = V8SVGElement::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!referenceElement && !IsUndefinedOrNull(info[1])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getIntersectionList", "SVGSVGElement", "parameter 2 is not of type 'SVGElement'."));
    return;
  }

  V8SetReturnValueFast(info, impl->getIntersectionList(rect, referenceElement), impl);
}

static void getEnclosureListMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  SVGSVGElement* impl = V8SVGSVGElement::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getEnclosureList", "SVGSVGElement", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  SVGRectTearOff* rect;
  SVGElement* referenceElement;
  rect = V8SVGRect::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!rect) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getEnclosureList", "SVGSVGElement", "parameter 1 is not of type 'SVGRect'."));
    return;
  }

  referenceElement = V8SVGElement::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!referenceElement && !IsUndefinedOrNull(info[1])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getEnclosureList", "SVGSVGElement", "parameter 2 is not of type 'SVGElement'."));
    return;
  }

  V8SetReturnValueFast(info, impl->getEnclosureList(rect, referenceElement), impl);
}

static void checkIntersectionMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  SVGSVGElement* impl = V8SVGSVGElement::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("checkIntersection", "SVGSVGElement", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  SVGElement* element;
  SVGRectTearOff* rect;
  element = V8SVGElement::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!element) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("checkIntersection", "SVGSVGElement", "parameter 1 is not of type 'SVGElement'."));
    return;
  }

  rect = V8SVGRect::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!rect) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("checkIntersection", "SVGSVGElement", "parameter 2 is not of type 'SVGRect'."));
    return;
  }

  V8SetReturnValueBool(info, impl->checkIntersection(element, rect));
}

static void checkEnclosureMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  SVGSVGElement* impl = V8SVGSVGElement::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("checkEnclosure", "SVGSVGElement", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  SVGElement* element;
  SVGRectTearOff* rect;
  element = V8SVGElement::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!element) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("checkEnclosure", "SVGSVGElement", "parameter 1 is not of type 'SVGElement'."));
    return;
  }

  rect = V8SVGRect::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!rect) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("checkEnclosure", "SVGSVGElement", "parameter 2 is not of type 'SVGRect'."));
    return;
  }

  V8SetReturnValueBool(info, impl->checkEnclosure(element, rect));
}

static void deselectAllMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  SVGSVGElement* impl = V8SVGSVGElement::ToImpl(info.Holder());

  impl->deselectAll();
}

static void createSVGNumberMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  SVGSVGElement* impl = V8SVGSVGElement::ToImpl(info.Holder());

  V8SetReturnValueFast(info, impl->createSVGNumber(), impl);
}

static void createSVGLengthMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  SVGSVGElement* impl = V8SVGSVGElement::ToImpl(info.Holder());

  V8SetReturnValueFast(info, impl->createSVGLength(), impl);
}

static void createSVGAngleMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  SVGSVGElement* impl = V8SVGSVGElement::ToImpl(info.Holder());

  V8SetReturnValueFast(info, impl->createSVGAngle(), impl);
}

static void createSVGPointMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  SVGSVGElement* impl = V8SVGSVGElement::ToImpl(info.Holder());

  V8SetReturnValueFast(info, impl->createSVGPoint(), impl);
}

static void createSVGMatrixMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  SVGSVGElement* impl = V8SVGSVGElement::ToImpl(info.Holder());

  V8SetReturnValueFast(info, impl->createSVGMatrix(), impl);
}

static void createSVGRectMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  SVGSVGElement* impl = V8SVGSVGElement::ToImpl(info.Holder());

  V8SetReturnValueFast(info, impl->createSVGRect(), impl);
}

static void createSVGTransformMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  SVGSVGElement* impl = V8SVGSVGElement::ToImpl(info.Holder());

  V8SetReturnValueFast(info, impl->createSVGTransform(), impl);
}

static void createSVGTransformFromMatrixMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  SVGSVGElement* impl = V8SVGSVGElement::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("createSVGTransformFromMatrix", "SVGSVGElement", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  SVGMatrixTearOff* matrix;
  matrix = V8SVGMatrix::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!matrix) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("createSVGTransformFromMatrix", "SVGSVGElement", "parameter 1 is not of type 'SVGMatrix'."));
    return;
  }

  V8SetReturnValueFast(info, impl->createSVGTransformFromMatrix(matrix), impl);
}

static void getElementByIdMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  SVGSVGElement* impl = V8SVGSVGElement::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getElementById", "SVGSVGElement", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> elementId;
  elementId = info[0];
  if (!elementId.Prepare())
    return;

  V8SetReturnValueFast(info, impl->getElementById(elementId), impl);
}

static void suspendRedrawMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "SVGSVGElement", "suspendRedraw");

  SVGSVGElement* impl = V8SVGSVGElement::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t maxWaitMilliseconds;
  maxWaitMilliseconds = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  V8SetReturnValueUnsigned(info, impl->suspendRedraw(maxWaitMilliseconds));
}

static void unsuspendRedrawMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "SVGSVGElement", "unsuspendRedraw");

  SVGSVGElement* impl = V8SVGSVGElement::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t suspendHandleId;
  suspendHandleId = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->unsuspendRedraw(suspendHandleId);
}

static void unsuspendRedrawAllMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  SVGSVGElement* impl = V8SVGSVGElement::ToImpl(info.Holder());

  impl->unsuspendRedrawAll();
}

static void forceRedrawMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  SVGSVGElement* impl = V8SVGSVGElement::ToImpl(info.Holder());

  impl->forceRedraw();
}

static void pauseAnimationsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  SVGSVGElement* impl = V8SVGSVGElement::ToImpl(info.Holder());

  impl->pauseAnimations();
}

static void unpauseAnimationsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  SVGSVGElement* impl = V8SVGSVGElement::ToImpl(info.Holder());

  impl->unpauseAnimations();
}

static void animationsPausedMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  SVGSVGElement* impl = V8SVGSVGElement::ToImpl(info.Holder());

  V8SetReturnValueBool(info, impl->animationsPaused());
}

static void getCurrentTimeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  SVGSVGElement* impl = V8SVGSVGElement::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->getCurrentTime());
}

static void setCurrentTimeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "SVGSVGElement", "setCurrentTime");

  SVGSVGElement* impl = V8SVGSVGElement::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  float seconds;
  seconds = NativeValueTraits<IDLFloat>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setCurrentTime(seconds);
}

} // namespace SVGSVGElementV8Internal

void V8SVGSVGElement::xAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGSVGElement_x_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVG1DOMSVGElement);

  SVGSVGElementV8Internal::xAttributeGetter(info);
}

void V8SVGSVGElement::yAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGSVGElement_y_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVG1DOMSVGElement);

  SVGSVGElementV8Internal::yAttributeGetter(info);
}

void V8SVGSVGElement::widthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGSVGElement_width_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVG1DOMSVGElement);

  SVGSVGElementV8Internal::widthAttributeGetter(info);
}

void V8SVGSVGElement::heightAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGSVGElement_height_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVG1DOMSVGElement);

  SVGSVGElementV8Internal::heightAttributeGetter(info);
}

void V8SVGSVGElement::currentScaleAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGSVGElement_currentScale_Getter");

  SVGSVGElementV8Internal::currentScaleAttributeGetter(info);
}

void V8SVGSVGElement::currentScaleAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGSVGElement_currentScale_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  SVGSVGElementV8Internal::currentScaleAttributeSetter(v8Value, info);
}

void V8SVGSVGElement::currentTranslateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGSVGElement_currentTranslate_Getter");

  SVGSVGElementV8Internal::currentTranslateAttributeGetter(info);
}

void V8SVGSVGElement::viewBoxAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGSVGElement_viewBox_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVG1DOMFitToViewBox);

  SVGSVGElementV8Internal::viewBoxAttributeGetter(info);
}

void V8SVGSVGElement::preserveAspectRatioAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGSVGElement_preserveAspectRatio_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVG1DOMFitToViewBox);

  SVGSVGElementV8Internal::preserveAspectRatioAttributeGetter(info);
}

void V8SVGSVGElement::zoomAndPanAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGSVGElement_zoomAndPan_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVG1DOMZoomAndPan);

  SVGSVGElementV8Internal::zoomAndPanAttributeGetter(info);
}

void V8SVGSVGElement::zoomAndPanAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGSVGElement_zoomAndPan_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVG1DOMZoomAndPan);

  SVGSVGElementV8Internal::zoomAndPanAttributeSetter(v8Value, info);
}

void V8SVGSVGElement::getIntersectionListMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGSVGElement_getIntersectionList");

  SVGSVGElementV8Internal::getIntersectionListMethod(info);
}

void V8SVGSVGElement::getEnclosureListMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGSVGElement_getEnclosureList");

  SVGSVGElementV8Internal::getEnclosureListMethod(info);
}

void V8SVGSVGElement::checkIntersectionMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGSVGElement_checkIntersection");

  SVGSVGElementV8Internal::checkIntersectionMethod(info);
}

void V8SVGSVGElement::checkEnclosureMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGSVGElement_checkEnclosure");

  SVGSVGElementV8Internal::checkEnclosureMethod(info);
}

void V8SVGSVGElement::deselectAllMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGSVGElement_deselectAll");

  SVGSVGElementV8Internal::deselectAllMethod(info);
}

void V8SVGSVGElement::createSVGNumberMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGSVGElement_createSVGNumber");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8SVGSVGElement_CreateSVGNumber_Method);
  SVGSVGElementV8Internal::createSVGNumberMethod(info);
}

void V8SVGSVGElement::createSVGLengthMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGSVGElement_createSVGLength");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8SVGSVGElement_CreateSVGLength_Method);
  SVGSVGElementV8Internal::createSVGLengthMethod(info);
}

void V8SVGSVGElement::createSVGAngleMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGSVGElement_createSVGAngle");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8SVGSVGElement_CreateSVGAngle_Method);
  SVGSVGElementV8Internal::createSVGAngleMethod(info);
}

void V8SVGSVGElement::createSVGPointMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGSVGElement_createSVGPoint");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8SVGSVGElement_CreateSVGPoint_Method);
  SVGSVGElementV8Internal::createSVGPointMethod(info);
}

void V8SVGSVGElement::createSVGMatrixMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGSVGElement_createSVGMatrix");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8SVGSVGElement_CreateSVGMatrix_Method);
  SVGSVGElementV8Internal::createSVGMatrixMethod(info);
}

void V8SVGSVGElement::createSVGRectMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGSVGElement_createSVGRect");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8SVGSVGElement_CreateSVGRect_Method);
  SVGSVGElementV8Internal::createSVGRectMethod(info);
}

void V8SVGSVGElement::createSVGTransformMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGSVGElement_createSVGTransform");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8SVGSVGElement_CreateSVGTransform_Method);
  SVGSVGElementV8Internal::createSVGTransformMethod(info);
}

void V8SVGSVGElement::createSVGTransformFromMatrixMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGSVGElement_createSVGTransformFromMatrix");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8SVGSVGElement_CreateSVGTransformFromMatrix_Method);
  SVGSVGElementV8Internal::createSVGTransformFromMatrixMethod(info);
}

void V8SVGSVGElement::getElementByIdMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGSVGElement_getElementById");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8SVGSVGElement_GetElementById_Method);
  SVGSVGElementV8Internal::getElementByIdMethod(info);
}

void V8SVGSVGElement::suspendRedrawMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGSVGElement_suspendRedraw");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVGSVGElementSuspendRedraw);
  SVGSVGElementV8Internal::suspendRedrawMethod(info);
}

void V8SVGSVGElement::unsuspendRedrawMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGSVGElement_unsuspendRedraw");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVGSVGElementUnsuspendRedraw);
  SVGSVGElementV8Internal::unsuspendRedrawMethod(info);
}

void V8SVGSVGElement::unsuspendRedrawAllMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGSVGElement_unsuspendRedrawAll");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVGSVGElementUnsuspendRedrawAll);
  SVGSVGElementV8Internal::unsuspendRedrawAllMethod(info);
}

void V8SVGSVGElement::forceRedrawMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGSVGElement_forceRedraw");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVGSVGElementForceRedraw);
  SVGSVGElementV8Internal::forceRedrawMethod(info);
}

void V8SVGSVGElement::pauseAnimationsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGSVGElement_pauseAnimations");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVGSMILPausing);
  SVGSVGElementV8Internal::pauseAnimationsMethod(info);
}

void V8SVGSVGElement::unpauseAnimationsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGSVGElement_unpauseAnimations");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVGSMILPausing);
  SVGSVGElementV8Internal::unpauseAnimationsMethod(info);
}

void V8SVGSVGElement::animationsPausedMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGSVGElement_animationsPaused");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVGSMILPausing);
  SVGSVGElementV8Internal::animationsPausedMethod(info);
}

void V8SVGSVGElement::getCurrentTimeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGSVGElement_getCurrentTime");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVGSMILCurrentTime);
  SVGSVGElementV8Internal::getCurrentTimeMethod(info);
}

void V8SVGSVGElement::setCurrentTimeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGSVGElement_setCurrentTime");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVGSMILCurrentTime);
  SVGSVGElementV8Internal::setCurrentTimeMethod(info);
}

static const V8DOMConfiguration::AccessorConfiguration V8SVGSVGElementAccessors[] = {
    { "x", V8SVGSVGElement::xAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "y", V8SVGSVGElement::yAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "width", V8SVGSVGElement::widthAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "height", V8SVGSVGElement::heightAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "currentScale", V8SVGSVGElement::currentScaleAttributeGetterCallback, V8SVGSVGElement::currentScaleAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "currentTranslate", V8SVGSVGElement::currentTranslateAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "viewBox", V8SVGSVGElement::viewBoxAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "preserveAspectRatio", V8SVGSVGElement::preserveAspectRatioAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "zoomAndPan", V8SVGSVGElement::zoomAndPanAttributeGetterCallback, V8SVGSVGElement::zoomAndPanAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
};

static const V8DOMConfiguration::MethodConfiguration V8SVGSVGElementMethods[] = {
    {"getIntersectionList", V8SVGSVGElement::getIntersectionListMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getEnclosureList", V8SVGSVGElement::getEnclosureListMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"checkIntersection", V8SVGSVGElement::checkIntersectionMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"checkEnclosure", V8SVGSVGElement::checkEnclosureMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"deselectAll", V8SVGSVGElement::deselectAllMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createSVGNumber", V8SVGSVGElement::createSVGNumberMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createSVGLength", V8SVGSVGElement::createSVGLengthMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createSVGAngle", V8SVGSVGElement::createSVGAngleMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createSVGPoint", V8SVGSVGElement::createSVGPointMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createSVGMatrix", V8SVGSVGElement::createSVGMatrixMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createSVGRect", V8SVGSVGElement::createSVGRectMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createSVGTransform", V8SVGSVGElement::createSVGTransformMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createSVGTransformFromMatrix", V8SVGSVGElement::createSVGTransformFromMatrixMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getElementById", V8SVGSVGElement::getElementByIdMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"suspendRedraw", V8SVGSVGElement::suspendRedrawMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"unsuspendRedraw", V8SVGSVGElement::unsuspendRedrawMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"unsuspendRedrawAll", V8SVGSVGElement::unsuspendRedrawAllMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"forceRedraw", V8SVGSVGElement::forceRedrawMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void installV8SVGSVGElementTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8SVGSVGElement::wrapperTypeInfo.interface_name, V8SVGGraphicsElement::domTemplate(isolate, world), V8SVGSVGElement::internalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  static constexpr V8DOMConfiguration::ConstantConfiguration V8SVGSVGElementConstants[] = {
      {"SVG_ZOOMANDPAN_UNKNOWN", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(0)},
      {"SVG_ZOOMANDPAN_DISABLE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(1)},
      {"SVG_ZOOMANDPAN_MAGNIFY", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(2)},
  };
  V8DOMConfiguration::InstallConstants(
      isolate, interfaceTemplate, prototypeTemplate,
      V8SVGSVGElementConstants, arraysize(V8SVGSVGElementConstants));
  static_assert(0 == SVGSVGElement::kSvgZoomandpanUnknown, "the value of SVGSVGElement_kSvgZoomandpanUnknown does not match with implementation");
  static_assert(1 == SVGSVGElement::kSvgZoomandpanDisable, "the value of SVGSVGElement_kSvgZoomandpanDisable does not match with implementation");
  static_assert(2 == SVGSVGElement::kSvgZoomandpanMagnify, "the value of SVGSVGElement_kSvgZoomandpanMagnify does not match with implementation");
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8SVGSVGElementAccessors, arraysize(V8SVGSVGElementAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8SVGSVGElementMethods, arraysize(V8SVGSVGElementMethods));

  // Custom signature

  V8SVGSVGElement::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8SVGSVGElement::InstallRuntimeEnabledFeaturesOnTemplate(
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
  if (RuntimeEnabledFeatures::SMILEnabled()) {
    const V8DOMConfiguration::MethodConfiguration pauseAnimationsMethodConfiguration[] = {
      {"pauseAnimations", V8SVGSVGElement::pauseAnimationsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
    };
    for (const auto& methodConfig : pauseAnimationsMethodConfiguration)
      V8DOMConfiguration::InstallMethod(isolate, world, instance_template, prototype_template, interface_template, signature, methodConfig);
  }
  if (RuntimeEnabledFeatures::SMILEnabled()) {
    const V8DOMConfiguration::MethodConfiguration unpauseAnimationsMethodConfiguration[] = {
      {"unpauseAnimations", V8SVGSVGElement::unpauseAnimationsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
    };
    for (const auto& methodConfig : unpauseAnimationsMethodConfiguration)
      V8DOMConfiguration::InstallMethod(isolate, world, instance_template, prototype_template, interface_template, signature, methodConfig);
  }
  if (RuntimeEnabledFeatures::SMILEnabled()) {
    const V8DOMConfiguration::MethodConfiguration animationsPausedMethodConfiguration[] = {
      {"animationsPaused", V8SVGSVGElement::animationsPausedMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
    };
    for (const auto& methodConfig : animationsPausedMethodConfiguration)
      V8DOMConfiguration::InstallMethod(isolate, world, instance_template, prototype_template, interface_template, signature, methodConfig);
  }
  if (RuntimeEnabledFeatures::SMILEnabled()) {
    const V8DOMConfiguration::MethodConfiguration getCurrentTimeMethodConfiguration[] = {
      {"getCurrentTime", V8SVGSVGElement::getCurrentTimeMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
    };
    for (const auto& methodConfig : getCurrentTimeMethodConfiguration)
      V8DOMConfiguration::InstallMethod(isolate, world, instance_template, prototype_template, interface_template, signature, methodConfig);
  }
  if (RuntimeEnabledFeatures::SMILEnabled()) {
    const V8DOMConfiguration::MethodConfiguration setCurrentTimeMethodConfiguration[] = {
      {"setCurrentTime", V8SVGSVGElement::setCurrentTimeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
    };
    for (const auto& methodConfig : setCurrentTimeMethodConfiguration)
      V8DOMConfiguration::InstallMethod(isolate, world, instance_template, prototype_template, interface_template, signature, methodConfig);
  }
}

v8::Local<v8::FunctionTemplate> V8SVGSVGElement::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8SVGSVGElementTemplate);
}

bool V8SVGSVGElement::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8SVGSVGElement::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

SVGSVGElement* V8SVGSVGElement::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

SVGSVGElement* NativeValueTraits<SVGSVGElement>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  SVGSVGElement* nativeValue = V8SVGSVGElement::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "SVGSVGElement"));
  }
  return nativeValue;
}

}  // namespace blink
