// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_offscreen_canvas_rendering_context_2d.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer_view.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_image_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_float32_array.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_canvas_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_image_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_video_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_image_bitmap.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_image_data.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_image_data_color_settings.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_offscreen_canvas.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_image_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_text_metrics.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_uint16_array.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_uint8_clamped_array.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_canvas_gradient.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_canvas_pattern.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_path_2d.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/core/inspector/console_message.h"
#include "third_party/blink/renderer/core/typed_arrays/array_buffer_view_helpers.h"
#include "third_party/blink/renderer/core/typed_arrays/flexible_array_buffer_view.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
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
const WrapperTypeInfo V8OffscreenCanvasRenderingContext2D::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8OffscreenCanvasRenderingContext2D::domTemplate,
    nullptr,
    "OffscreenCanvasRenderingContext2D",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in OffscreenCanvasRenderingContext2D.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& OffscreenCanvasRenderingContext2D::wrapper_type_info_ = V8OffscreenCanvasRenderingContext2D::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, OffscreenCanvasRenderingContext2D>::value,
    "OffscreenCanvasRenderingContext2D inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&OffscreenCanvasRenderingContext2D::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "OffscreenCanvasRenderingContext2D is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace OffscreenCanvasRenderingContext2DV8Internal {

static void canvasAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  OffscreenCanvas* cppValue(WTF::GetPtr(impl->offscreenCanvasForBinding()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#OffscreenCanvasRenderingContext2D#canvas")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void globalAlphaAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  V8SetReturnValue(info, impl->globalAlpha());
}

static void globalAlphaAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "OffscreenCanvasRenderingContext2D", "globalAlpha");

  // Prepare the value to be set.
  double cppValue = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setGlobalAlpha(cppValue);
}

static void globalCompositeOperationAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  V8SetReturnValueString(info, impl->globalCompositeOperation(), info.GetIsolate());
}

static void globalCompositeOperationAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  impl->setGlobalCompositeOperation(cppValue);
}

static void filterAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  V8SetReturnValueString(info, impl->filter(), info.GetIsolate());
}

static void filterAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  ExecutionContext* executionContext = ExecutionContext::ForRelevantRealm(info);

  impl->setFilter(executionContext, cppValue);
}

static void imageSmoothingEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  V8SetReturnValueBool(info, impl->imageSmoothingEnabled());
}

static void imageSmoothingEnabledAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "OffscreenCanvasRenderingContext2D", "imageSmoothingEnabled");

  // Prepare the value to be set.
  bool cppValue = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setImageSmoothingEnabled(cppValue);
}

static void imageSmoothingQualityAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  V8SetReturnValueString(info, impl->imageSmoothingQuality(), info.GetIsolate());
}

static void imageSmoothingQualityAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "OffscreenCanvasRenderingContext2D", "imageSmoothingQuality");

  // Prepare the value to be set.
  V8StringResource<> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  // Type check per: http://heycam.github.io/webidl/#dfn-attribute-setter
  // Returns undefined without setting the value if the value is invalid.
  DummyExceptionStateForTesting dummyExceptionState;
  const char* validValues[] = {
      "low",
      "medium",
      "high",
  };
  if (!IsValidEnum(cppValue, validValues, arraysize(validValues), "ImageSmoothingQuality", dummyExceptionState)) {
    ExecutionContext::ForCurrentRealm(info)->AddConsoleMessage(
        ConsoleMessage::Create(kJSMessageSource, kWarningMessageLevel,
                               dummyExceptionState.Message()));
    return;
  }

  impl->setImageSmoothingQuality(cppValue);
}

static void strokeStyleAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  StringOrCanvasGradientOrCanvasPattern result;
  impl->strokeStyle(result);

  V8SetReturnValue(info, result);
}

static void strokeStyleAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "OffscreenCanvasRenderingContext2D", "strokeStyle");

  // Prepare the value to be set.
  StringOrCanvasGradientOrCanvasPattern cppValue;
  V8StringOrCanvasGradientOrCanvasPattern::ToImpl(info.GetIsolate(), v8Value, cppValue, UnionTypeConversionMode::kNotNullable, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setStrokeStyle(cppValue);
}

static void fillStyleAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  StringOrCanvasGradientOrCanvasPattern result;
  impl->fillStyle(result);

  V8SetReturnValue(info, result);
}

static void fillStyleAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "OffscreenCanvasRenderingContext2D", "fillStyle");

  // Prepare the value to be set.
  StringOrCanvasGradientOrCanvasPattern cppValue;
  V8StringOrCanvasGradientOrCanvasPattern::ToImpl(info.GetIsolate(), v8Value, cppValue, UnionTypeConversionMode::kNotNullable, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setFillStyle(cppValue);
}

static void shadowOffsetXAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  V8SetReturnValue(info, impl->shadowOffsetX());
}

static void shadowOffsetXAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "OffscreenCanvasRenderingContext2D", "shadowOffsetX");

  // Prepare the value to be set.
  double cppValue = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setShadowOffsetX(cppValue);
}

static void shadowOffsetYAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  V8SetReturnValue(info, impl->shadowOffsetY());
}

static void shadowOffsetYAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "OffscreenCanvasRenderingContext2D", "shadowOffsetY");

  // Prepare the value to be set.
  double cppValue = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setShadowOffsetY(cppValue);
}

static void shadowBlurAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  V8SetReturnValue(info, impl->shadowBlur());
}

static void shadowBlurAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "OffscreenCanvasRenderingContext2D", "shadowBlur");

  // Prepare the value to be set.
  double cppValue = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setShadowBlur(cppValue);
}

static void shadowColorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  V8SetReturnValueString(info, impl->shadowColor(), info.GetIsolate());
}

static void shadowColorAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  impl->setShadowColor(cppValue);
}

static void lineWidthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  V8SetReturnValue(info, impl->lineWidth());
}

static void lineWidthAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "OffscreenCanvasRenderingContext2D", "lineWidth");

  // Prepare the value to be set.
  double cppValue = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setLineWidth(cppValue);
}

static void lineCapAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  V8SetReturnValueString(info, impl->lineCap(), info.GetIsolate());
}

static void lineCapAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  impl->setLineCap(cppValue);
}

static void lineJoinAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  V8SetReturnValueString(info, impl->lineJoin(), info.GetIsolate());
}

static void lineJoinAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  impl->setLineJoin(cppValue);
}

static void miterLimitAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  V8SetReturnValue(info, impl->miterLimit());
}

static void miterLimitAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "OffscreenCanvasRenderingContext2D", "miterLimit");

  // Prepare the value to be set.
  double cppValue = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setMiterLimit(cppValue);
}

static void lineDashOffsetAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  V8SetReturnValue(info, impl->lineDashOffset());
}

static void lineDashOffsetAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "OffscreenCanvasRenderingContext2D", "lineDashOffset");

  // Prepare the value to be set.
  double cppValue = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setLineDashOffset(cppValue);
}

static void fontAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  V8SetReturnValueString(info, impl->font(), info.GetIsolate());
}

static void fontAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  impl->setFont(cppValue);
}

static void textAlignAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  V8SetReturnValueString(info, impl->textAlign(), info.GetIsolate());
}

static void textAlignAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  impl->setTextAlign(cppValue);
}

static void textBaselineAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  V8SetReturnValueString(info, impl->textBaseline(), info.GetIsolate());
}

static void textBaselineAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  impl->setTextBaseline(cppValue);
}

static void directionAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  V8SetReturnValueString(info, impl->direction(), info.GetIsolate());
}

static void directionAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  impl->setDirection(cppValue);
}

static void commitMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  impl->commit();
}

static void saveMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  impl->save();
}

static void restoreMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  impl->restore();
}

static void scaleMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "scale");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  double x;
  double y;
  x = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  y = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->scale(x, y);
}

static void rotateMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "rotate");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  double angle;
  angle = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->rotate(angle);
}

static void translateMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "translate");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  double x;
  double y;
  x = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  y = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->translate(x, y);
}

static void transformMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "transform");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 6)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(6, info.Length()));
    return;
  }

  double a;
  double b;
  double c;
  double d;
  double e;
  double f;
  a = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  b = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  c = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;

  d = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[3], exceptionState);
  if (exceptionState.HadException())
    return;

  e = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[4], exceptionState);
  if (exceptionState.HadException())
    return;

  f = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[5], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->transform(a, b, c, d, e, f);
}

static void setTransformMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "setTransform");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 6)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(6, info.Length()));
    return;
  }

  double a;
  double b;
  double c;
  double d;
  double e;
  double f;
  a = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  b = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  c = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;

  d = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[3], exceptionState);
  if (exceptionState.HadException())
    return;

  e = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[4], exceptionState);
  if (exceptionState.HadException())
    return;

  f = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[5], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setTransform(a, b, c, d, e, f);
}

static void resetTransformMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  impl->resetTransform();
}

static void createLinearGradientMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "createLinearGradient");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 4)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(4, info.Length()));
    return;
  }

  double x0;
  double y0;
  double x1;
  double y1;
  x0 = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  y0 = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  x1 = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;

  y1 = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[3], exceptionState);
  if (exceptionState.HadException())
    return;

  V8SetReturnValue(info, impl->createLinearGradient(x0, y0, x1, y1));
}

static void createRadialGradientMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "createRadialGradient");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 6)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(6, info.Length()));
    return;
  }

  double x0;
  double y0;
  double r0;
  double x1;
  double y1;
  double r1;
  x0 = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  y0 = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  r0 = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;

  x1 = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[3], exceptionState);
  if (exceptionState.HadException())
    return;

  y1 = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[4], exceptionState);
  if (exceptionState.HadException())
    return;

  r1 = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[5], exceptionState);
  if (exceptionState.HadException())
    return;

  CanvasGradient* result = impl->createRadialGradient(x0, y0, r0, x1, y1, r1, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void createPatternMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "createPattern");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas image;
  V8StringResource<kTreatNullAsNullString> repetitionType;
  V8CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas::ToImpl(info.GetIsolate(), info[0], image, UnionTypeConversionMode::kNotNullable, exceptionState);
  if (exceptionState.HadException())
    return;

  repetitionType = info[1];
  if (!repetitionType.Prepare())
    return;

  CanvasPattern* result = impl->createPattern(scriptState, image, repetitionType, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void clearRectMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "clearRect");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 4)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(4, info.Length()));
    return;
  }

  double x;
  double y;
  double width;
  double height;
  x = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  y = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  width = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;

  height = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[3], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->clearRect(x, y, width, height);
}

static void fillRectMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "fillRect");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 4)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(4, info.Length()));
    return;
  }

  double x;
  double y;
  double width;
  double height;
  x = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  y = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  width = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;

  height = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[3], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->fillRect(x, y, width, height);
}

static void strokeRectMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "strokeRect");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 4)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(4, info.Length()));
    return;
  }

  double x;
  double y;
  double width;
  double height;
  x = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  y = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  width = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;

  height = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[3], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->strokeRect(x, y, width, height);
}

static void beginPathMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  impl->beginPath();
}

static void fill1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "fill");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  V8StringResource<> winding;
  int numArgsPassed = info.Length();
  while (numArgsPassed > 0) {
    if (!info[numArgsPassed - 1]->IsUndefined())
      break;
    --numArgsPassed;
  }
  if (UNLIKELY(numArgsPassed <= 0)) {
    impl->fill();
    return;
  }
  winding = info[0];
  if (!winding.Prepare())
    return;
  const char* validWindingValues[] = {
      "nonzero",
      "evenodd",
  };
  if (!IsValidEnum(winding, validWindingValues, arraysize(validWindingValues), "CanvasFillRule", exceptionState)) {
    return;
  }

  impl->fill(winding);
}

static void fill2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "fill");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  Path2D* path;
  V8StringResource<> winding;
  int numArgsPassed = info.Length();
  while (numArgsPassed > 0) {
    if (!info[numArgsPassed - 1]->IsUndefined())
      break;
    --numArgsPassed;
  }
  path = V8Path2D::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!path) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Path2D'.");
    return;
  }

  if (UNLIKELY(numArgsPassed <= 1)) {
    impl->fill(path);
    return;
  }
  winding = info[1];
  if (!winding.Prepare())
    return;
  const char* validWindingValues[] = {
      "nonzero",
      "evenodd",
  };
  if (!IsValidEnum(winding, validWindingValues, arraysize(validWindingValues), "CanvasFillRule", exceptionState)) {
    return;
  }

  impl->fill(path, winding);
}

static void fillMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(2, info.Length())) {
    case 0:
      if (true) {
        fill1Method(info);
        return;
      }
      break;
    case 1:
      if (info[0]->IsUndefined()) {
        fill1Method(info);
        return;
      }
      if (V8Path2D::hasInstance(info[0], info.GetIsolate())) {
        fill2Method(info);
        return;
      }
      if (true) {
        fill1Method(info);
        return;
      }
      break;
    case 2:
      if (true) {
        fill2Method(info);
        return;
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "fill");
  if (isArityError) {
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void stroke1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  impl->stroke();
}

static void stroke2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  Path2D* path;
  path = V8Path2D::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!path) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("stroke", "OffscreenCanvasRenderingContext2D", "parameter 1 is not of type 'Path2D'."));
    return;
  }

  impl->stroke(path);
}

static void strokeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(1, info.Length())) {
    case 0:
      if (true) {
        stroke1Method(info);
        return;
      }
      break;
    case 1:
      if (true) {
        stroke2Method(info);
        return;
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "stroke");
  if (isArityError) {
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void clip1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  impl->clip();
}

static void clip2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  Path2D* path;
  path = V8Path2D::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!path) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("clip", "OffscreenCanvasRenderingContext2D", "parameter 1 is not of type 'Path2D'."));
    return;
  }

  impl->clip(path);
}

static void clipMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(1, info.Length())) {
    case 0:
      if (true) {
        clip1Method(info);
        return;
      }
      break;
    case 1:
      if (true) {
        clip2Method(info);
        return;
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "clip");
  if (isArityError) {
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void isPointInPath1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "isPointInPath");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  double x;
  double y;
  V8StringResource<> winding;
  int numArgsPassed = info.Length();
  while (numArgsPassed > 0) {
    if (!info[numArgsPassed - 1]->IsUndefined())
      break;
    --numArgsPassed;
  }
  x = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  y = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  if (UNLIKELY(numArgsPassed <= 2)) {
    V8SetReturnValueBool(info, impl->isPointInPath(x, y));
    return;
  }
  winding = info[2];
  if (!winding.Prepare())
    return;
  const char* validWindingValues[] = {
      "nonzero",
      "evenodd",
  };
  if (!IsValidEnum(winding, validWindingValues, arraysize(validWindingValues), "CanvasFillRule", exceptionState)) {
    return;
  }

  V8SetReturnValueBool(info, impl->isPointInPath(x, y, winding));
}

static void isPointInPath2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "isPointInPath");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  Path2D* path;
  double x;
  double y;
  V8StringResource<> winding;
  int numArgsPassed = info.Length();
  while (numArgsPassed > 0) {
    if (!info[numArgsPassed - 1]->IsUndefined())
      break;
    --numArgsPassed;
  }
  path = V8Path2D::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!path) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Path2D'.");
    return;
  }

  x = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  y = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;

  if (UNLIKELY(numArgsPassed <= 3)) {
    V8SetReturnValueBool(info, impl->isPointInPath(path, x, y));
    return;
  }
  winding = info[3];
  if (!winding.Prepare())
    return;
  const char* validWindingValues[] = {
      "nonzero",
      "evenodd",
  };
  if (!IsValidEnum(winding, validWindingValues, arraysize(validWindingValues), "CanvasFillRule", exceptionState)) {
    return;
  }

  V8SetReturnValueBool(info, impl->isPointInPath(path, x, y, winding));
}

static void isPointInPathMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(4, info.Length())) {
    case 2:
      if (true) {
        isPointInPath1Method(info);
        return;
      }
      break;
    case 3:
      if (V8Path2D::hasInstance(info[0], info.GetIsolate())) {
        isPointInPath2Method(info);
        return;
      }
      if (info[0]->IsNumber()) {
        isPointInPath1Method(info);
        return;
      }
      if (true) {
        isPointInPath1Method(info);
        return;
      }
      break;
    case 4:
      if (true) {
        isPointInPath2Method(info);
        return;
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "isPointInPath");
  if (isArityError) {
    if (info.Length() < 2) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void isPointInStroke1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "isPointInStroke");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  double x;
  double y;
  x = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  y = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  V8SetReturnValueBool(info, impl->isPointInStroke(x, y));
}

static void isPointInStroke2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "isPointInStroke");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  Path2D* path;
  double x;
  double y;
  path = V8Path2D::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!path) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Path2D'.");
    return;
  }

  x = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  y = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;

  V8SetReturnValueBool(info, impl->isPointInStroke(path, x, y));
}

static void isPointInStrokeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(3, info.Length())) {
    case 2:
      if (true) {
        isPointInStroke1Method(info);
        return;
      }
      break;
    case 3:
      if (true) {
        isPointInStroke2Method(info);
        return;
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "isPointInStroke");
  if (isArityError) {
    if (info.Length() < 2) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void fillTextMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "fillText");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  V8StringResource<> text;
  double x;
  double y;
  double maxWidth;
  int numArgsPassed = info.Length();
  while (numArgsPassed > 0) {
    if (!info[numArgsPassed - 1]->IsUndefined())
      break;
    --numArgsPassed;
  }
  text = info[0];
  if (!text.Prepare())
    return;

  x = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  y = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;

  if (UNLIKELY(numArgsPassed <= 3)) {
    impl->fillText(text, x, y);
    return;
  }
  maxWidth = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[3], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->fillText(text, x, y, maxWidth);
}

static void strokeTextMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "strokeText");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  V8StringResource<> text;
  double x;
  double y;
  double maxWidth;
  int numArgsPassed = info.Length();
  while (numArgsPassed > 0) {
    if (!info[numArgsPassed - 1]->IsUndefined())
      break;
    --numArgsPassed;
  }
  text = info[0];
  if (!text.Prepare())
    return;

  x = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  y = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;

  if (UNLIKELY(numArgsPassed <= 3)) {
    impl->strokeText(text, x, y);
    return;
  }
  maxWidth = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[3], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->strokeText(text, x, y, maxWidth);
}

static void measureTextMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("measureText", "OffscreenCanvasRenderingContext2D", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> text;
  text = info[0];
  if (!text.Prepare())
    return;

  V8SetReturnValue(info, impl->measureText(text));
}

static void drawImage1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "drawImage");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas image;
  double x;
  double y;
  V8CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas::ToImpl(info.GetIsolate(), info[0], image, UnionTypeConversionMode::kNotNullable, exceptionState);
  if (exceptionState.HadException())
    return;

  x = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  y = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->drawImage(scriptState, image, x, y, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void drawImage2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "drawImage");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas image;
  double x;
  double y;
  double width;
  double height;
  V8CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas::ToImpl(info.GetIsolate(), info[0], image, UnionTypeConversionMode::kNotNullable, exceptionState);
  if (exceptionState.HadException())
    return;

  x = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  y = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;

  width = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[3], exceptionState);
  if (exceptionState.HadException())
    return;

  height = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[4], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->drawImage(scriptState, image, x, y, width, height, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void drawImage3Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "drawImage");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas image;
  double sx;
  double sy;
  double sw;
  double sh;
  double dx;
  double dy;
  double dw;
  double dh;
  V8CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas::ToImpl(info.GetIsolate(), info[0], image, UnionTypeConversionMode::kNotNullable, exceptionState);
  if (exceptionState.HadException())
    return;

  sx = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  sy = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;

  sw = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[3], exceptionState);
  if (exceptionState.HadException())
    return;

  sh = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[4], exceptionState);
  if (exceptionState.HadException())
    return;

  dx = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[5], exceptionState);
  if (exceptionState.HadException())
    return;

  dy = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[6], exceptionState);
  if (exceptionState.HadException())
    return;

  dw = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[7], exceptionState);
  if (exceptionState.HadException())
    return;

  dh = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[8], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->drawImage(scriptState, image, sx, sy, sw, sh, dx, dy, dw, dh, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void drawImageMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(9, info.Length())) {
    case 3:
      if (true) {
        drawImage1Method(info);
        return;
      }
      break;
    case 5:
      if (true) {
        drawImage2Method(info);
        return;
      }
      break;
    case 9:
      if (true) {
        drawImage3Method(info);
        return;
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "drawImage");
  if (isArityError) {
    if (info.Length() < 3) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
      return;
    }
    if (info.Length() >= 3) {
      exceptionState.ThrowTypeError(ExceptionMessages::InvalidArity("[3, 5, 9]", info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void createImageData1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "createImageData");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  ImageData* imagedata;
  imagedata = V8ImageData::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!imagedata) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'ImageData'.");
    return;
  }

  ImageData* result = impl->createImageData(imagedata, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void createImageData2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "createImageData");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  int32_t sw;
  int32_t sh;
  sw = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  sh = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  ImageData* result = impl->createImageData(sw, sh, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void getImageDataMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "getImageData");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 4)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(4, info.Length()));
    return;
  }

  int32_t sx;
  int32_t sy;
  int32_t sw;
  int32_t sh;
  sx = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  sy = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  sw = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  sh = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  ImageData* result = impl->getImageData(sx, sy, sw, sh, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void putImageData1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "putImageData");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  ImageData* imagedata;
  int32_t dx;
  int32_t dy;
  imagedata = V8ImageData::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!imagedata) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'ImageData'.");
    return;
  }

  dx = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  dy = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->putImageData(imagedata, dx, dy, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void putImageData2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "putImageData");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  ImageData* imagedata;
  int32_t dx;
  int32_t dy;
  int32_t dirtyX;
  int32_t dirtyY;
  int32_t dirtyWidth;
  int32_t dirtyHeight;
  imagedata = V8ImageData::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!imagedata) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'ImageData'.");
    return;
  }

  dx = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  dy = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  dirtyX = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  dirtyY = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  dirtyWidth = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  dirtyHeight = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[6], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->putImageData(imagedata, dx, dy, dirtyX, dirtyY, dirtyWidth, dirtyHeight, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void putImageDataMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(7, info.Length())) {
    case 3:
      if (true) {
        putImageData1Method(info);
        return;
      }
      break;
    case 7:
      if (true) {
        putImageData2Method(info);
        return;
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "putImageData");
  if (isArityError) {
    if (info.Length() < 3) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
      return;
    }
    if (info.Length() >= 3) {
      exceptionState.ThrowTypeError(ExceptionMessages::InvalidArity("[3, 7]", info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void createImageData3Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "createImageData");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  uint32_t sw;
  uint32_t sh;
  ImageDataColorSettings imageDataColorSettings;
  sw = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  sh = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  if (!info[2]->IsNullOrUndefined() && !info[2]->IsObject()) {
    exceptionState.ThrowTypeError("parameter 3 ('imageDataColorSettings') is not an object.");
    return;
  }
  V8ImageDataColorSettings::ToImpl(info.GetIsolate(), info[2], imageDataColorSettings, exceptionState);
  if (exceptionState.HadException())
    return;

  ImageData* result = impl->createImageData(sw, sh, imageDataColorSettings, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void createImageData4Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "createImageData");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  Uint8ClampedArrayOrUint16ArrayOrFloat32Array data;
  uint32_t sw;
  uint32_t sh;
  ImageDataColorSettings imageDataColorSettings;
  V8Uint8ClampedArrayOrUint16ArrayOrFloat32Array::ToImpl(info.GetIsolate(), info[0], data, UnionTypeConversionMode::kNotNullable, exceptionState);
  if (exceptionState.HadException())
    return;

  sw = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  sh = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  if (!info[3]->IsNullOrUndefined() && !info[3]->IsObject()) {
    exceptionState.ThrowTypeError("parameter 4 ('imageDataColorSettings') is not an object.");
    return;
  }
  V8ImageDataColorSettings::ToImpl(info.GetIsolate(), info[3], imageDataColorSettings, exceptionState);
  if (exceptionState.HadException())
    return;

  ImageData* result = impl->createImageData(data, sw, sh, imageDataColorSettings, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static int createImageDataMethodMaxArg() {
  if (RuntimeEnabledFeatures::CanvasColorManagementEnabled()) {
    return 4;
  }
  if (RuntimeEnabledFeatures::CanvasColorManagementEnabled()) {
    return 3;
  }
  return 2;
}

static void createImageDataMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(OffscreenCanvasRenderingContext2DV8Internal::createImageDataMethodMaxArg(), info.Length())) {
    case 1:
      if (true) {
        createImageData1Method(info);
        return;
      }
      break;
    case 2:
      if (true) {
        createImageData2Method(info);
        return;
      }
      break;
    case 3:
      if (RuntimeEnabledFeatures::CanvasColorManagementEnabled()) {
        if (true) {
          createImageData3Method(info);
          return;
        }
      }
      break;
    case 4:
      if (RuntimeEnabledFeatures::CanvasColorManagementEnabled()) {
        if (true) {
          createImageData4Method(info);
          return;
        }
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "createImageData");
  if (isArityError) {
    if (info.Length() < 1) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void setLineDashMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "setLineDash");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Vector<double> dash;
  dash = NativeValueTraits<IDLSequence<IDLUnrestrictedDouble>>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setLineDash(dash);
}

static void getLineDashMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  V8SetReturnValue(info, ToV8(impl->getLineDash(), info.Holder(), info.GetIsolate()));
}

static void closePathMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  impl->closePath();
}

static void moveToMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "moveTo");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  float x;
  float y;
  x = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  y = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->moveTo(x, y);
}

static void lineToMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "lineTo");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  float x;
  float y;
  x = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  y = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->lineTo(x, y);
}

static void quadraticCurveToMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "quadraticCurveTo");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 4)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(4, info.Length()));
    return;
  }

  float cpx;
  float cpy;
  float x;
  float y;
  cpx = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  cpy = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  x = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;

  y = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[3], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->quadraticCurveTo(cpx, cpy, x, y);
}

static void bezierCurveToMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "bezierCurveTo");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 6)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(6, info.Length()));
    return;
  }

  float cp1x;
  float cp1y;
  float cp2x;
  float cp2y;
  float x;
  float y;
  cp1x = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  cp1y = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  cp2x = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;

  cp2y = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[3], exceptionState);
  if (exceptionState.HadException())
    return;

  x = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[4], exceptionState);
  if (exceptionState.HadException())
    return;

  y = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[5], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->bezierCurveTo(cp1x, cp1y, cp2x, cp2y, x, y);
}

static void arcToMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "arcTo");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 5)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(5, info.Length()));
    return;
  }

  float x1;
  float y1;
  float x2;
  float y2;
  float radius;
  x1 = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  y1 = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  x2 = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;

  y2 = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[3], exceptionState);
  if (exceptionState.HadException())
    return;

  radius = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[4], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->arcTo(x1, y1, x2, y2, radius, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void rectMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "rect");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 4)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(4, info.Length()));
    return;
  }

  float x;
  float y;
  float width;
  float height;
  x = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  y = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  width = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;

  height = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[3], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->rect(x, y, width, height);
}

static void arcMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "arc");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 5)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(5, info.Length()));
    return;
  }

  float x;
  float y;
  float radius;
  float startAngle;
  float endAngle;
  bool anticlockwise;
  x = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  y = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  radius = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;

  startAngle = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[3], exceptionState);
  if (exceptionState.HadException())
    return;

  endAngle = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[4], exceptionState);
  if (exceptionState.HadException())
    return;

  anticlockwise = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[5], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->arc(x, y, radius, startAngle, endAngle, anticlockwise, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void ellipseMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "OffscreenCanvasRenderingContext2D", "ellipse");

  OffscreenCanvasRenderingContext2D* impl = V8OffscreenCanvasRenderingContext2D::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 7)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(7, info.Length()));
    return;
  }

  float x;
  float y;
  float radiusX;
  float radiusY;
  float rotation;
  float startAngle;
  float endAngle;
  bool anticlockwise;
  x = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  y = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  radiusX = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;

  radiusY = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[3], exceptionState);
  if (exceptionState.HadException())
    return;

  rotation = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[4], exceptionState);
  if (exceptionState.HadException())
    return;

  startAngle = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[5], exceptionState);
  if (exceptionState.HadException())
    return;

  endAngle = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[6], exceptionState);
  if (exceptionState.HadException())
    return;

  anticlockwise = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[7], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->ellipse(x, y, radiusX, radiusY, rotation, startAngle, endAngle, anticlockwise, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

} // namespace OffscreenCanvasRenderingContext2DV8Internal

void V8OffscreenCanvasRenderingContext2D::canvasAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_canvas_Getter");

  OffscreenCanvasRenderingContext2DV8Internal::canvasAttributeGetter(info);
}

void V8OffscreenCanvasRenderingContext2D::globalAlphaAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_globalAlpha_Getter");

  OffscreenCanvasRenderingContext2DV8Internal::globalAlphaAttributeGetter(info);
}

void V8OffscreenCanvasRenderingContext2D::globalAlphaAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_globalAlpha_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  OffscreenCanvasRenderingContext2DV8Internal::globalAlphaAttributeSetter(v8Value, info);
}

void V8OffscreenCanvasRenderingContext2D::globalCompositeOperationAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_globalCompositeOperation_Getter");

  OffscreenCanvasRenderingContext2DV8Internal::globalCompositeOperationAttributeGetter(info);
}

void V8OffscreenCanvasRenderingContext2D::globalCompositeOperationAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_globalCompositeOperation_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  OffscreenCanvasRenderingContext2DV8Internal::globalCompositeOperationAttributeSetter(v8Value, info);
}

void V8OffscreenCanvasRenderingContext2D::filterAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_filter_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kCanvas2DFilter);

  OffscreenCanvasRenderingContext2DV8Internal::filterAttributeGetter(info);
}

void V8OffscreenCanvasRenderingContext2D::filterAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_filter_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kCanvas2DFilter);

  OffscreenCanvasRenderingContext2DV8Internal::filterAttributeSetter(v8Value, info);
}

void V8OffscreenCanvasRenderingContext2D::imageSmoothingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_imageSmoothingEnabled_Getter");

  OffscreenCanvasRenderingContext2DV8Internal::imageSmoothingEnabledAttributeGetter(info);
}

void V8OffscreenCanvasRenderingContext2D::imageSmoothingEnabledAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_imageSmoothingEnabled_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  OffscreenCanvasRenderingContext2DV8Internal::imageSmoothingEnabledAttributeSetter(v8Value, info);
}

void V8OffscreenCanvasRenderingContext2D::imageSmoothingQualityAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_imageSmoothingQuality_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kCanvas2DImageSmoothingQuality);

  OffscreenCanvasRenderingContext2DV8Internal::imageSmoothingQualityAttributeGetter(info);
}

void V8OffscreenCanvasRenderingContext2D::imageSmoothingQualityAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_imageSmoothingQuality_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kCanvas2DImageSmoothingQuality);

  OffscreenCanvasRenderingContext2DV8Internal::imageSmoothingQualityAttributeSetter(v8Value, info);
}

void V8OffscreenCanvasRenderingContext2D::strokeStyleAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_strokeStyle_Getter");

  OffscreenCanvasRenderingContext2DV8Internal::strokeStyleAttributeGetter(info);
}

void V8OffscreenCanvasRenderingContext2D::strokeStyleAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_strokeStyle_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  OffscreenCanvasRenderingContext2DV8Internal::strokeStyleAttributeSetter(v8Value, info);
}

void V8OffscreenCanvasRenderingContext2D::fillStyleAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_fillStyle_Getter");

  OffscreenCanvasRenderingContext2DV8Internal::fillStyleAttributeGetter(info);
}

void V8OffscreenCanvasRenderingContext2D::fillStyleAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_fillStyle_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  OffscreenCanvasRenderingContext2DV8Internal::fillStyleAttributeSetter(v8Value, info);
}

void V8OffscreenCanvasRenderingContext2D::shadowOffsetXAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_shadowOffsetX_Getter");

  OffscreenCanvasRenderingContext2DV8Internal::shadowOffsetXAttributeGetter(info);
}

void V8OffscreenCanvasRenderingContext2D::shadowOffsetXAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_shadowOffsetX_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  OffscreenCanvasRenderingContext2DV8Internal::shadowOffsetXAttributeSetter(v8Value, info);
}

void V8OffscreenCanvasRenderingContext2D::shadowOffsetYAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_shadowOffsetY_Getter");

  OffscreenCanvasRenderingContext2DV8Internal::shadowOffsetYAttributeGetter(info);
}

void V8OffscreenCanvasRenderingContext2D::shadowOffsetYAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_shadowOffsetY_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  OffscreenCanvasRenderingContext2DV8Internal::shadowOffsetYAttributeSetter(v8Value, info);
}

void V8OffscreenCanvasRenderingContext2D::shadowBlurAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_shadowBlur_Getter");

  OffscreenCanvasRenderingContext2DV8Internal::shadowBlurAttributeGetter(info);
}

void V8OffscreenCanvasRenderingContext2D::shadowBlurAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_shadowBlur_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  OffscreenCanvasRenderingContext2DV8Internal::shadowBlurAttributeSetter(v8Value, info);
}

void V8OffscreenCanvasRenderingContext2D::shadowColorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_shadowColor_Getter");

  OffscreenCanvasRenderingContext2DV8Internal::shadowColorAttributeGetter(info);
}

void V8OffscreenCanvasRenderingContext2D::shadowColorAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_shadowColor_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  OffscreenCanvasRenderingContext2DV8Internal::shadowColorAttributeSetter(v8Value, info);
}

void V8OffscreenCanvasRenderingContext2D::lineWidthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_lineWidth_Getter");

  OffscreenCanvasRenderingContext2DV8Internal::lineWidthAttributeGetter(info);
}

void V8OffscreenCanvasRenderingContext2D::lineWidthAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_lineWidth_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  OffscreenCanvasRenderingContext2DV8Internal::lineWidthAttributeSetter(v8Value, info);
}

void V8OffscreenCanvasRenderingContext2D::lineCapAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_lineCap_Getter");

  OffscreenCanvasRenderingContext2DV8Internal::lineCapAttributeGetter(info);
}

void V8OffscreenCanvasRenderingContext2D::lineCapAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_lineCap_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  OffscreenCanvasRenderingContext2DV8Internal::lineCapAttributeSetter(v8Value, info);
}

void V8OffscreenCanvasRenderingContext2D::lineJoinAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_lineJoin_Getter");

  OffscreenCanvasRenderingContext2DV8Internal::lineJoinAttributeGetter(info);
}

void V8OffscreenCanvasRenderingContext2D::lineJoinAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_lineJoin_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  OffscreenCanvasRenderingContext2DV8Internal::lineJoinAttributeSetter(v8Value, info);
}

void V8OffscreenCanvasRenderingContext2D::miterLimitAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_miterLimit_Getter");

  OffscreenCanvasRenderingContext2DV8Internal::miterLimitAttributeGetter(info);
}

void V8OffscreenCanvasRenderingContext2D::miterLimitAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_miterLimit_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  OffscreenCanvasRenderingContext2DV8Internal::miterLimitAttributeSetter(v8Value, info);
}

void V8OffscreenCanvasRenderingContext2D::lineDashOffsetAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_lineDashOffset_Getter");

  OffscreenCanvasRenderingContext2DV8Internal::lineDashOffsetAttributeGetter(info);
}

void V8OffscreenCanvasRenderingContext2D::lineDashOffsetAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_lineDashOffset_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  OffscreenCanvasRenderingContext2DV8Internal::lineDashOffsetAttributeSetter(v8Value, info);
}

void V8OffscreenCanvasRenderingContext2D::fontAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_font_Getter");

  OffscreenCanvasRenderingContext2DV8Internal::fontAttributeGetter(info);
}

void V8OffscreenCanvasRenderingContext2D::fontAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_font_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  OffscreenCanvasRenderingContext2DV8Internal::fontAttributeSetter(v8Value, info);
}

void V8OffscreenCanvasRenderingContext2D::textAlignAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_textAlign_Getter");

  OffscreenCanvasRenderingContext2DV8Internal::textAlignAttributeGetter(info);
}

void V8OffscreenCanvasRenderingContext2D::textAlignAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_textAlign_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  OffscreenCanvasRenderingContext2DV8Internal::textAlignAttributeSetter(v8Value, info);
}

void V8OffscreenCanvasRenderingContext2D::textBaselineAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_textBaseline_Getter");

  OffscreenCanvasRenderingContext2DV8Internal::textBaselineAttributeGetter(info);
}

void V8OffscreenCanvasRenderingContext2D::textBaselineAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_textBaseline_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  OffscreenCanvasRenderingContext2DV8Internal::textBaselineAttributeSetter(v8Value, info);
}

void V8OffscreenCanvasRenderingContext2D::directionAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_direction_Getter");

  OffscreenCanvasRenderingContext2DV8Internal::directionAttributeGetter(info);
}

void V8OffscreenCanvasRenderingContext2D::directionAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_direction_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  OffscreenCanvasRenderingContext2DV8Internal::directionAttributeSetter(v8Value, info);
}

void V8OffscreenCanvasRenderingContext2D::commitMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_commit");

  OffscreenCanvasRenderingContext2DV8Internal::commitMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::saveMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_save");

  OffscreenCanvasRenderingContext2DV8Internal::saveMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::restoreMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_restore");

  OffscreenCanvasRenderingContext2DV8Internal::restoreMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::scaleMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_scale");

  OffscreenCanvasRenderingContext2DV8Internal::scaleMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::rotateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_rotate");

  OffscreenCanvasRenderingContext2DV8Internal::rotateMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::translateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_translate");

  OffscreenCanvasRenderingContext2DV8Internal::translateMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::transformMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_transform");

  OffscreenCanvasRenderingContext2DV8Internal::transformMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::setTransformMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_setTransform");

  OffscreenCanvasRenderingContext2DV8Internal::setTransformMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::resetTransformMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_resetTransform");

  OffscreenCanvasRenderingContext2DV8Internal::resetTransformMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::createLinearGradientMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_createLinearGradient");

  OffscreenCanvasRenderingContext2DV8Internal::createLinearGradientMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::createRadialGradientMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_createRadialGradient");

  OffscreenCanvasRenderingContext2DV8Internal::createRadialGradientMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::createPatternMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_createPattern");

  OffscreenCanvasRenderingContext2DV8Internal::createPatternMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::clearRectMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_clearRect");

  OffscreenCanvasRenderingContext2DV8Internal::clearRectMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::fillRectMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_fillRect");

  OffscreenCanvasRenderingContext2DV8Internal::fillRectMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::strokeRectMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_strokeRect");

  OffscreenCanvasRenderingContext2DV8Internal::strokeRectMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::beginPathMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_beginPath");

  OffscreenCanvasRenderingContext2DV8Internal::beginPathMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::fillMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_fill");

  OffscreenCanvasRenderingContext2DV8Internal::fillMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::strokeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_stroke");

  OffscreenCanvasRenderingContext2DV8Internal::strokeMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::clipMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_clip");

  OffscreenCanvasRenderingContext2DV8Internal::clipMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::isPointInPathMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_isPointInPath");

  OffscreenCanvasRenderingContext2DV8Internal::isPointInPathMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::isPointInStrokeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_isPointInStroke");

  OffscreenCanvasRenderingContext2DV8Internal::isPointInStrokeMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::fillTextMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_fillText");

  OffscreenCanvasRenderingContext2DV8Internal::fillTextMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::strokeTextMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_strokeText");

  OffscreenCanvasRenderingContext2DV8Internal::strokeTextMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::measureTextMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_measureText");

  OffscreenCanvasRenderingContext2DV8Internal::measureTextMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::drawImageMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_drawImage");

  OffscreenCanvasRenderingContext2DV8Internal::drawImageMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::getImageDataMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_getImageData");

  OffscreenCanvasRenderingContext2DV8Internal::getImageDataMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::putImageDataMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_putImageData");

  OffscreenCanvasRenderingContext2DV8Internal::putImageDataMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::createImageDataMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_createImageData");

  OffscreenCanvasRenderingContext2DV8Internal::createImageDataMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::setLineDashMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_setLineDash");

  OffscreenCanvasRenderingContext2DV8Internal::setLineDashMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::getLineDashMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_getLineDash");

  OffscreenCanvasRenderingContext2DV8Internal::getLineDashMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::closePathMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_closePath");

  OffscreenCanvasRenderingContext2DV8Internal::closePathMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::moveToMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_moveTo");

  OffscreenCanvasRenderingContext2DV8Internal::moveToMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::lineToMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_lineTo");

  OffscreenCanvasRenderingContext2DV8Internal::lineToMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::quadraticCurveToMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_quadraticCurveTo");

  OffscreenCanvasRenderingContext2DV8Internal::quadraticCurveToMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::bezierCurveToMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_bezierCurveTo");

  OffscreenCanvasRenderingContext2DV8Internal::bezierCurveToMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::arcToMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_arcTo");

  OffscreenCanvasRenderingContext2DV8Internal::arcToMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::rectMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_rect");

  OffscreenCanvasRenderingContext2DV8Internal::rectMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::arcMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_arc");

  OffscreenCanvasRenderingContext2DV8Internal::arcMethod(info);
}

void V8OffscreenCanvasRenderingContext2D::ellipseMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OffscreenCanvasRenderingContext2D_ellipse");

  OffscreenCanvasRenderingContext2DV8Internal::ellipseMethod(info);
}

static const V8DOMConfiguration::AccessorConfiguration V8OffscreenCanvasRenderingContext2DAccessors[] = {
    { "canvas", V8OffscreenCanvasRenderingContext2D::canvasAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "globalAlpha", V8OffscreenCanvasRenderingContext2D::globalAlphaAttributeGetterCallback, V8OffscreenCanvasRenderingContext2D::globalAlphaAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "globalCompositeOperation", V8OffscreenCanvasRenderingContext2D::globalCompositeOperationAttributeGetterCallback, V8OffscreenCanvasRenderingContext2D::globalCompositeOperationAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "filter", V8OffscreenCanvasRenderingContext2D::filterAttributeGetterCallback, V8OffscreenCanvasRenderingContext2D::filterAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "imageSmoothingEnabled", V8OffscreenCanvasRenderingContext2D::imageSmoothingEnabledAttributeGetterCallback, V8OffscreenCanvasRenderingContext2D::imageSmoothingEnabledAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "imageSmoothingQuality", V8OffscreenCanvasRenderingContext2D::imageSmoothingQualityAttributeGetterCallback, V8OffscreenCanvasRenderingContext2D::imageSmoothingQualityAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "strokeStyle", V8OffscreenCanvasRenderingContext2D::strokeStyleAttributeGetterCallback, V8OffscreenCanvasRenderingContext2D::strokeStyleAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "fillStyle", V8OffscreenCanvasRenderingContext2D::fillStyleAttributeGetterCallback, V8OffscreenCanvasRenderingContext2D::fillStyleAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "shadowOffsetX", V8OffscreenCanvasRenderingContext2D::shadowOffsetXAttributeGetterCallback, V8OffscreenCanvasRenderingContext2D::shadowOffsetXAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "shadowOffsetY", V8OffscreenCanvasRenderingContext2D::shadowOffsetYAttributeGetterCallback, V8OffscreenCanvasRenderingContext2D::shadowOffsetYAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "shadowBlur", V8OffscreenCanvasRenderingContext2D::shadowBlurAttributeGetterCallback, V8OffscreenCanvasRenderingContext2D::shadowBlurAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "shadowColor", V8OffscreenCanvasRenderingContext2D::shadowColorAttributeGetterCallback, V8OffscreenCanvasRenderingContext2D::shadowColorAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "lineWidth", V8OffscreenCanvasRenderingContext2D::lineWidthAttributeGetterCallback, V8OffscreenCanvasRenderingContext2D::lineWidthAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "lineCap", V8OffscreenCanvasRenderingContext2D::lineCapAttributeGetterCallback, V8OffscreenCanvasRenderingContext2D::lineCapAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "lineJoin", V8OffscreenCanvasRenderingContext2D::lineJoinAttributeGetterCallback, V8OffscreenCanvasRenderingContext2D::lineJoinAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "miterLimit", V8OffscreenCanvasRenderingContext2D::miterLimitAttributeGetterCallback, V8OffscreenCanvasRenderingContext2D::miterLimitAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "lineDashOffset", V8OffscreenCanvasRenderingContext2D::lineDashOffsetAttributeGetterCallback, V8OffscreenCanvasRenderingContext2D::lineDashOffsetAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "font", V8OffscreenCanvasRenderingContext2D::fontAttributeGetterCallback, V8OffscreenCanvasRenderingContext2D::fontAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "textAlign", V8OffscreenCanvasRenderingContext2D::textAlignAttributeGetterCallback, V8OffscreenCanvasRenderingContext2D::textAlignAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "textBaseline", V8OffscreenCanvasRenderingContext2D::textBaselineAttributeGetterCallback, V8OffscreenCanvasRenderingContext2D::textBaselineAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
};

static const V8DOMConfiguration::MethodConfiguration V8OffscreenCanvasRenderingContext2DMethods[] = {
    {"commit", V8OffscreenCanvasRenderingContext2D::commitMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"save", V8OffscreenCanvasRenderingContext2D::saveMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"restore", V8OffscreenCanvasRenderingContext2D::restoreMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"scale", V8OffscreenCanvasRenderingContext2D::scaleMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"rotate", V8OffscreenCanvasRenderingContext2D::rotateMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"translate", V8OffscreenCanvasRenderingContext2D::translateMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"transform", V8OffscreenCanvasRenderingContext2D::transformMethodCallback, 6, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setTransform", V8OffscreenCanvasRenderingContext2D::setTransformMethodCallback, 6, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"resetTransform", V8OffscreenCanvasRenderingContext2D::resetTransformMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createLinearGradient", V8OffscreenCanvasRenderingContext2D::createLinearGradientMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createRadialGradient", V8OffscreenCanvasRenderingContext2D::createRadialGradientMethodCallback, 6, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createPattern", V8OffscreenCanvasRenderingContext2D::createPatternMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"clearRect", V8OffscreenCanvasRenderingContext2D::clearRectMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"fillRect", V8OffscreenCanvasRenderingContext2D::fillRectMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"strokeRect", V8OffscreenCanvasRenderingContext2D::strokeRectMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"beginPath", V8OffscreenCanvasRenderingContext2D::beginPathMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"fill", V8OffscreenCanvasRenderingContext2D::fillMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"stroke", V8OffscreenCanvasRenderingContext2D::strokeMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"clip", V8OffscreenCanvasRenderingContext2D::clipMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isPointInPath", V8OffscreenCanvasRenderingContext2D::isPointInPathMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isPointInStroke", V8OffscreenCanvasRenderingContext2D::isPointInStrokeMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"fillText", V8OffscreenCanvasRenderingContext2D::fillTextMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"strokeText", V8OffscreenCanvasRenderingContext2D::strokeTextMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"measureText", V8OffscreenCanvasRenderingContext2D::measureTextMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"drawImage", V8OffscreenCanvasRenderingContext2D::drawImageMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getImageData", V8OffscreenCanvasRenderingContext2D::getImageDataMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"putImageData", V8OffscreenCanvasRenderingContext2D::putImageDataMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createImageData", V8OffscreenCanvasRenderingContext2D::createImageDataMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setLineDash", V8OffscreenCanvasRenderingContext2D::setLineDashMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getLineDash", V8OffscreenCanvasRenderingContext2D::getLineDashMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"closePath", V8OffscreenCanvasRenderingContext2D::closePathMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"moveTo", V8OffscreenCanvasRenderingContext2D::moveToMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"lineTo", V8OffscreenCanvasRenderingContext2D::lineToMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"quadraticCurveTo", V8OffscreenCanvasRenderingContext2D::quadraticCurveToMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"bezierCurveTo", V8OffscreenCanvasRenderingContext2D::bezierCurveToMethodCallback, 6, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"arcTo", V8OffscreenCanvasRenderingContext2D::arcToMethodCallback, 5, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"rect", V8OffscreenCanvasRenderingContext2D::rectMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"arc", V8OffscreenCanvasRenderingContext2D::arcMethodCallback, 5, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"ellipse", V8OffscreenCanvasRenderingContext2D::ellipseMethodCallback, 7, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void installV8OffscreenCanvasRenderingContext2DTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8OffscreenCanvasRenderingContext2D::wrapperTypeInfo.interface_name, v8::Local<v8::FunctionTemplate>(), V8OffscreenCanvasRenderingContext2D::internalFieldCount);

  if (!RuntimeEnabledFeatures::OffscreenCanvasEnabled()) {
    return;
  }

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8OffscreenCanvasRenderingContext2DAccessors, arraysize(V8OffscreenCanvasRenderingContext2DAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8OffscreenCanvasRenderingContext2DMethods, arraysize(V8OffscreenCanvasRenderingContext2DMethods));

  // Custom signature

  V8OffscreenCanvasRenderingContext2D::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8OffscreenCanvasRenderingContext2D::InstallRuntimeEnabledFeaturesOnTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  if (!RuntimeEnabledFeatures::OffscreenCanvasEnabled()) {
    return;
  }

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.

  if (RuntimeEnabledFeatures::OffscreenCanvasTextEnabled()) {
    static const V8DOMConfiguration::AccessorConfiguration accessor_configurations[] = {
        { "direction", V8OffscreenCanvasRenderingContext2D::directionAttributeGetterCallback, V8OffscreenCanvasRenderingContext2D::directionAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, accessor_configurations,
        arraysize(accessor_configurations));
  }

  // Custom signature
}

v8::Local<v8::FunctionTemplate> V8OffscreenCanvasRenderingContext2D::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8OffscreenCanvasRenderingContext2DTemplate);
}

bool V8OffscreenCanvasRenderingContext2D::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8OffscreenCanvasRenderingContext2D::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

OffscreenCanvasRenderingContext2D* V8OffscreenCanvasRenderingContext2D::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

OffscreenCanvasRenderingContext2D* NativeValueTraits<OffscreenCanvasRenderingContext2D>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  OffscreenCanvasRenderingContext2D* nativeValue = V8OffscreenCanvasRenderingContext2D::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "OffscreenCanvasRenderingContext2D"));
  }
  return nativeValue;
}

}  // namespace blink
