// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_canvas_rendering_context_2d.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer_view.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_image_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_matrix.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_matrix_2d_init.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_element.h"
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
#include "third_party/blink/renderer/bindings/modules/v8/v8_canvas_rendering_context_2d_settings.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_hit_region_options.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_path_2d.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/core/inspector/console_message.h"
#include "third_party/blink/renderer/core/typed_arrays/array_buffer_view_helpers.h"
#include "third_party/blink/renderer/core/typed_arrays/flexible_array_buffer_view.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
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
const WrapperTypeInfo V8CanvasRenderingContext2D::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8CanvasRenderingContext2D::domTemplate,
    nullptr,
    "CanvasRenderingContext2D",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in CanvasRenderingContext2D.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& CanvasRenderingContext2D::wrapper_type_info_ = V8CanvasRenderingContext2D::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, CanvasRenderingContext2D>::value,
    "CanvasRenderingContext2D inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&CanvasRenderingContext2D::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "CanvasRenderingContext2D is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace CanvasRenderingContext2DV8Internal {

static void canvasAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->canvas()), impl);
}

static void globalAlphaAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(holder);

  V8SetReturnValue(info, impl->globalAlpha());
}

static void globalAlphaAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "CanvasRenderingContext2D", "globalAlpha");

  // Prepare the value to be set.
  double cppValue = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setGlobalAlpha(cppValue);
}

static void globalCompositeOperationAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(holder);

  V8SetReturnValueString(info, impl->globalCompositeOperation(), info.GetIsolate());
}

static void globalCompositeOperationAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  impl->setGlobalCompositeOperation(cppValue);
}

static void filterAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(holder);

  V8SetReturnValueString(info, impl->filter(), info.GetIsolate());
}

static void filterAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  ExecutionContext* executionContext = ExecutionContext::ForRelevantRealm(info);

  impl->setFilter(executionContext, cppValue);
}

static void imageSmoothingEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(holder);

  V8SetReturnValueBool(info, impl->imageSmoothingEnabled());
}

static void imageSmoothingEnabledAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "CanvasRenderingContext2D", "imageSmoothingEnabled");

  // Prepare the value to be set.
  bool cppValue = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setImageSmoothingEnabled(cppValue);
}

static void imageSmoothingQualityAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(holder);

  V8SetReturnValueString(info, impl->imageSmoothingQuality(), info.GetIsolate());
}

static void imageSmoothingQualityAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "CanvasRenderingContext2D", "imageSmoothingQuality");

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

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(holder);

  StringOrCanvasGradientOrCanvasPattern result;
  impl->strokeStyle(result);

  V8SetReturnValue(info, result);
}

static void strokeStyleAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "CanvasRenderingContext2D", "strokeStyle");

  // Prepare the value to be set.
  StringOrCanvasGradientOrCanvasPattern cppValue;
  V8StringOrCanvasGradientOrCanvasPattern::ToImpl(info.GetIsolate(), v8Value, cppValue, UnionTypeConversionMode::kNotNullable, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setStrokeStyle(cppValue);
}

static void fillStyleAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(holder);

  StringOrCanvasGradientOrCanvasPattern result;
  impl->fillStyle(result);

  V8SetReturnValue(info, result);
}

static void fillStyleAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "CanvasRenderingContext2D", "fillStyle");

  // Prepare the value to be set.
  StringOrCanvasGradientOrCanvasPattern cppValue;
  V8StringOrCanvasGradientOrCanvasPattern::ToImpl(info.GetIsolate(), v8Value, cppValue, UnionTypeConversionMode::kNotNullable, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setFillStyle(cppValue);
}

static void shadowOffsetXAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(holder);

  V8SetReturnValue(info, impl->shadowOffsetX());
}

static void shadowOffsetXAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "CanvasRenderingContext2D", "shadowOffsetX");

  // Prepare the value to be set.
  double cppValue = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setShadowOffsetX(cppValue);
}

static void shadowOffsetYAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(holder);

  V8SetReturnValue(info, impl->shadowOffsetY());
}

static void shadowOffsetYAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "CanvasRenderingContext2D", "shadowOffsetY");

  // Prepare the value to be set.
  double cppValue = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setShadowOffsetY(cppValue);
}

static void shadowBlurAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(holder);

  V8SetReturnValue(info, impl->shadowBlur());
}

static void shadowBlurAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "CanvasRenderingContext2D", "shadowBlur");

  // Prepare the value to be set.
  double cppValue = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setShadowBlur(cppValue);
}

static void shadowColorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(holder);

  V8SetReturnValueString(info, impl->shadowColor(), info.GetIsolate());
}

static void shadowColorAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  impl->setShadowColor(cppValue);
}

static void lineWidthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(holder);

  V8SetReturnValue(info, impl->lineWidth());
}

static void lineWidthAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "CanvasRenderingContext2D", "lineWidth");

  // Prepare the value to be set.
  double cppValue = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setLineWidth(cppValue);
}

static void lineCapAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(holder);

  V8SetReturnValueString(info, impl->lineCap(), info.GetIsolate());
}

static void lineCapAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  impl->setLineCap(cppValue);
}

static void lineJoinAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(holder);

  V8SetReturnValueString(info, impl->lineJoin(), info.GetIsolate());
}

static void lineJoinAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  impl->setLineJoin(cppValue);
}

static void miterLimitAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(holder);

  V8SetReturnValue(info, impl->miterLimit());
}

static void miterLimitAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "CanvasRenderingContext2D", "miterLimit");

  // Prepare the value to be set.
  double cppValue = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setMiterLimit(cppValue);
}

static void lineDashOffsetAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(holder);

  V8SetReturnValue(info, impl->lineDashOffset());
}

static void lineDashOffsetAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "CanvasRenderingContext2D", "lineDashOffset");

  // Prepare the value to be set.
  double cppValue = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setLineDashOffset(cppValue);
}

static void fontAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(holder);

  V8SetReturnValueString(info, impl->font(), info.GetIsolate());
}

static void fontAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  impl->setFont(cppValue);
}

static void textAlignAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(holder);

  V8SetReturnValueString(info, impl->textAlign(), info.GetIsolate());
}

static void textAlignAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  impl->setTextAlign(cppValue);
}

static void textBaselineAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(holder);

  V8SetReturnValueString(info, impl->textBaseline(), info.GetIsolate());
}

static void textBaselineAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  impl->setTextBaseline(cppValue);
}

static void directionAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(holder);

  V8SetReturnValueString(info, impl->direction(), info.GetIsolate());
}

static void directionAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  impl->setDirection(cppValue);
}

static void saveMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(info.Holder());

  impl->save();
}

static void restoreMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(info.Holder());

  impl->restore();
}

static void scaleMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "CanvasRenderingContext2D", "scale");

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "CanvasRenderingContext2D", "rotate");

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "CanvasRenderingContext2D", "translate");

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "CanvasRenderingContext2D", "transform");

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(info.Holder());

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

static void setTransform1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "CanvasRenderingContext2D", "setTransform");

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(info.Holder());

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

static void setTransform2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "CanvasRenderingContext2D", "setTransform");

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(info.Holder());

  DOMMatrix2DInit transform;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exceptionState.ThrowTypeError("parameter 1 ('transform') is not an object.");
    return;
  }
  V8DOMMatrix2DInit::ToImpl(info.GetIsolate(), info[0], transform, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setTransform(transform, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void setTransformMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(6, info.Length())) {
    case 0:
      if (true) {
        setTransform2Method(info);
        return;
      }
      break;
    case 1:
      if (true) {
        setTransform2Method(info);
        return;
      }
      break;
    case 6:
      if (true) {
        setTransform1Method(info);
        return;
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "CanvasRenderingContext2D", "setTransform");
  if (isArityError) {
    if (info.Length() >= 0) {
      exceptionState.ThrowTypeError(ExceptionMessages::InvalidArity("[0, 1, 6]", info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void getTransformMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->getTransform());
}

static void resetTransformMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(info.Holder());

  impl->resetTransform();
}

static void createLinearGradientMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "CanvasRenderingContext2D", "createLinearGradient");

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "CanvasRenderingContext2D", "createRadialGradient");

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "CanvasRenderingContext2D", "createPattern");

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "CanvasRenderingContext2D", "clearRect");

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "CanvasRenderingContext2D", "fillRect");

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "CanvasRenderingContext2D", "strokeRect");

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(info.Holder());

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
  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(info.Holder());

  impl->beginPath();
}

static void fill1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "CanvasRenderingContext2D", "fill");

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "CanvasRenderingContext2D", "fill");

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(info.Holder());

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

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "CanvasRenderingContext2D", "fill");
  if (isArityError) {
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void stroke1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(info.Holder());

  impl->stroke();
}

static void stroke2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(info.Holder());

  Path2D* path;
  path = V8Path2D::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!path) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("stroke", "CanvasRenderingContext2D", "parameter 1 is not of type 'Path2D'."));
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

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "CanvasRenderingContext2D", "stroke");
  if (isArityError) {
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void drawFocusIfNeeded1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(info.Holder());

  Element* element;
  element = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!element) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("drawFocusIfNeeded", "CanvasRenderingContext2D", "parameter 1 is not of type 'Element'."));
    return;
  }

  impl->drawFocusIfNeeded(element);
}

static void drawFocusIfNeeded2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(info.Holder());

  Path2D* path;
  Element* element;
  path = V8Path2D::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!path) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("drawFocusIfNeeded", "CanvasRenderingContext2D", "parameter 1 is not of type 'Path2D'."));
    return;
  }

  element = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!element) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("drawFocusIfNeeded", "CanvasRenderingContext2D", "parameter 2 is not of type 'Element'."));
    return;
  }

  impl->drawFocusIfNeeded(path, element);
}

static void drawFocusIfNeededMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(2, info.Length())) {
    case 1:
      if (true) {
        drawFocusIfNeeded1Method(info);
        return;
      }
      break;
    case 2:
      if (true) {
        drawFocusIfNeeded2Method(info);
        return;
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "CanvasRenderingContext2D", "drawFocusIfNeeded");
  if (isArityError) {
    if (info.Length() < 1) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void scrollPathIntoViewMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(info.Holder());

  Path2D* path;
  int numArgsPassed = info.Length();
  while (numArgsPassed > 0) {
    if (!info[numArgsPassed - 1]->IsUndefined())
      break;
    --numArgsPassed;
  }
  if (UNLIKELY(numArgsPassed <= 0)) {
    impl->scrollPathIntoView();
    return;
  }
  path = V8Path2D::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!path) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("scrollPathIntoView", "CanvasRenderingContext2D", "parameter 1 is not of type 'Path2D'."));
    return;
  }

  impl->scrollPathIntoView(path);
}

static void clip1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "CanvasRenderingContext2D", "clip");

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(info.Holder());

  V8StringResource<> winding;
  int numArgsPassed = info.Length();
  while (numArgsPassed > 0) {
    if (!info[numArgsPassed - 1]->IsUndefined())
      break;
    --numArgsPassed;
  }
  if (UNLIKELY(numArgsPassed <= 0)) {
    impl->clip();
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

  impl->clip(winding);
}

static void clip2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "CanvasRenderingContext2D", "clip");

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(info.Holder());

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
    impl->clip(path);
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

  impl->clip(path, winding);
}

static void clipMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(2, info.Length())) {
    case 0:
      if (true) {
        clip1Method(info);
        return;
      }
      break;
    case 1:
      if (info[0]->IsUndefined()) {
        clip1Method(info);
        return;
      }
      if (V8Path2D::hasInstance(info[0], info.GetIsolate())) {
        clip2Method(info);
        return;
      }
      if (true) {
        clip1Method(info);
        return;
      }
      break;
    case 2:
      if (true) {
        clip2Method(info);
        return;
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "CanvasRenderingContext2D", "clip");
  if (isArityError) {
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void isPointInPath1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "CanvasRenderingContext2D", "isPointInPath");

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "CanvasRenderingContext2D", "isPointInPath");

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(info.Holder());

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

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "CanvasRenderingContext2D", "isPointInPath");
  if (isArityError) {
    if (info.Length() < 2) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void isPointInStroke1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "CanvasRenderingContext2D", "isPointInStroke");

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "CanvasRenderingContext2D", "isPointInStroke");

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(info.Holder());

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

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "CanvasRenderingContext2D", "isPointInStroke");
  if (isArityError) {
    if (info.Length() < 2) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void fillTextMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "CanvasRenderingContext2D", "fillText");

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "CanvasRenderingContext2D", "strokeText");

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(info.Holder());

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
  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("measureText", "CanvasRenderingContext2D", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> text;
  text = info[0];
  if (!text.Prepare())
    return;

  V8SetReturnValue(info, impl->measureText(text));
}

static void drawImage1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "CanvasRenderingContext2D", "drawImage");

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "CanvasRenderingContext2D", "drawImage");

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "CanvasRenderingContext2D", "drawImage");

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(info.Holder());

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

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "CanvasRenderingContext2D", "drawImage");
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

static void addHitRegionMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "CanvasRenderingContext2D", "addHitRegion");

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(info.Holder());

  HitRegionOptions options;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exceptionState.ThrowTypeError("parameter 1 ('options') is not an object.");
    return;
  }
  V8HitRegionOptions::ToImpl(info.GetIsolate(), info[0], options, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->addHitRegion(options, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void removeHitRegionMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("removeHitRegion", "CanvasRenderingContext2D", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> id;
  id = info[0];
  if (!id.Prepare())
    return;

  impl->removeHitRegion(id);
}

static void clearHitRegionsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(info.Holder());

  impl->clearHitRegions();
}

static void createImageData1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "CanvasRenderingContext2D", "createImageData");

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "CanvasRenderingContext2D", "createImageData");

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "CanvasRenderingContext2D", "getImageData");

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "CanvasRenderingContext2D", "putImageData");

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "CanvasRenderingContext2D", "putImageData");

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(info.Holder());

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

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "CanvasRenderingContext2D", "putImageData");
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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "CanvasRenderingContext2D", "createImageData");

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "CanvasRenderingContext2D", "createImageData");

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(info.Holder());

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

  switch (std::min(CanvasRenderingContext2DV8Internal::createImageDataMethodMaxArg(), info.Length())) {
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
        if (info[0]->IsNumber()) {
          createImageData3Method(info);
          return;
        }
      }
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

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "CanvasRenderingContext2D", "createImageData");
  if (isArityError) {
    if (info.Length() < 1) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void isContextLostMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(info.Holder());

  V8SetReturnValueBool(info, impl->isContextLost());
}

static void getContextAttributesMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(info.Holder());

  CanvasRenderingContext2DSettings result;
  impl->getContextAttributes(result);
  V8SetReturnValue(info, result);
}

static void setLineDashMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "CanvasRenderingContext2D", "setLineDash");

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(info.Holder());

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
  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(info.Holder());

  V8SetReturnValue(info, ToV8(impl->getLineDash(), info.Holder(), info.GetIsolate()));
}

static void closePathMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(info.Holder());

  impl->closePath();
}

static void moveToMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "CanvasRenderingContext2D", "moveTo");

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "CanvasRenderingContext2D", "lineTo");

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "CanvasRenderingContext2D", "quadraticCurveTo");

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "CanvasRenderingContext2D", "bezierCurveTo");

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "CanvasRenderingContext2D", "arcTo");

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "CanvasRenderingContext2D", "rect");

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "CanvasRenderingContext2D", "arc");

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "CanvasRenderingContext2D", "ellipse");

  CanvasRenderingContext2D* impl = V8CanvasRenderingContext2D::ToImpl(info.Holder());

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

} // namespace CanvasRenderingContext2DV8Internal

void V8CanvasRenderingContext2D::canvasAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_canvas_Getter");

  CanvasRenderingContext2DV8Internal::canvasAttributeGetter(info);
}

void V8CanvasRenderingContext2D::globalAlphaAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_globalAlpha_Getter");

  CanvasRenderingContext2DV8Internal::globalAlphaAttributeGetter(info);
}

void V8CanvasRenderingContext2D::globalAlphaAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_globalAlpha_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  CanvasRenderingContext2DV8Internal::globalAlphaAttributeSetter(v8Value, info);
}

void V8CanvasRenderingContext2D::globalCompositeOperationAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_globalCompositeOperation_Getter");

  CanvasRenderingContext2DV8Internal::globalCompositeOperationAttributeGetter(info);
}

void V8CanvasRenderingContext2D::globalCompositeOperationAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_globalCompositeOperation_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  CanvasRenderingContext2DV8Internal::globalCompositeOperationAttributeSetter(v8Value, info);
}

void V8CanvasRenderingContext2D::filterAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_filter_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kCanvas2DFilter);

  CanvasRenderingContext2DV8Internal::filterAttributeGetter(info);
}

void V8CanvasRenderingContext2D::filterAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_filter_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kCanvas2DFilter);

  CanvasRenderingContext2DV8Internal::filterAttributeSetter(v8Value, info);
}

void V8CanvasRenderingContext2D::imageSmoothingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_imageSmoothingEnabled_Getter");

  CanvasRenderingContext2DV8Internal::imageSmoothingEnabledAttributeGetter(info);
}

void V8CanvasRenderingContext2D::imageSmoothingEnabledAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_imageSmoothingEnabled_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  CanvasRenderingContext2DV8Internal::imageSmoothingEnabledAttributeSetter(v8Value, info);
}

void V8CanvasRenderingContext2D::imageSmoothingQualityAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_imageSmoothingQuality_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kCanvas2DImageSmoothingQuality);

  CanvasRenderingContext2DV8Internal::imageSmoothingQualityAttributeGetter(info);
}

void V8CanvasRenderingContext2D::imageSmoothingQualityAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_imageSmoothingQuality_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kCanvas2DImageSmoothingQuality);

  CanvasRenderingContext2DV8Internal::imageSmoothingQualityAttributeSetter(v8Value, info);
}

void V8CanvasRenderingContext2D::strokeStyleAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_strokeStyle_Getter");

  CanvasRenderingContext2DV8Internal::strokeStyleAttributeGetter(info);
}

void V8CanvasRenderingContext2D::strokeStyleAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_strokeStyle_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  CanvasRenderingContext2DV8Internal::strokeStyleAttributeSetter(v8Value, info);
}

void V8CanvasRenderingContext2D::fillStyleAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_fillStyle_Getter");

  CanvasRenderingContext2DV8Internal::fillStyleAttributeGetter(info);
}

void V8CanvasRenderingContext2D::fillStyleAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_fillStyle_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  CanvasRenderingContext2DV8Internal::fillStyleAttributeSetter(v8Value, info);
}

void V8CanvasRenderingContext2D::shadowOffsetXAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_shadowOffsetX_Getter");

  CanvasRenderingContext2DV8Internal::shadowOffsetXAttributeGetter(info);
}

void V8CanvasRenderingContext2D::shadowOffsetXAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_shadowOffsetX_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  CanvasRenderingContext2DV8Internal::shadowOffsetXAttributeSetter(v8Value, info);
}

void V8CanvasRenderingContext2D::shadowOffsetYAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_shadowOffsetY_Getter");

  CanvasRenderingContext2DV8Internal::shadowOffsetYAttributeGetter(info);
}

void V8CanvasRenderingContext2D::shadowOffsetYAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_shadowOffsetY_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  CanvasRenderingContext2DV8Internal::shadowOffsetYAttributeSetter(v8Value, info);
}

void V8CanvasRenderingContext2D::shadowBlurAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_shadowBlur_Getter");

  CanvasRenderingContext2DV8Internal::shadowBlurAttributeGetter(info);
}

void V8CanvasRenderingContext2D::shadowBlurAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_shadowBlur_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  CanvasRenderingContext2DV8Internal::shadowBlurAttributeSetter(v8Value, info);
}

void V8CanvasRenderingContext2D::shadowColorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_shadowColor_Getter");

  CanvasRenderingContext2DV8Internal::shadowColorAttributeGetter(info);
}

void V8CanvasRenderingContext2D::shadowColorAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_shadowColor_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  CanvasRenderingContext2DV8Internal::shadowColorAttributeSetter(v8Value, info);
}

void V8CanvasRenderingContext2D::lineWidthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_lineWidth_Getter");

  CanvasRenderingContext2DV8Internal::lineWidthAttributeGetter(info);
}

void V8CanvasRenderingContext2D::lineWidthAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_lineWidth_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  CanvasRenderingContext2DV8Internal::lineWidthAttributeSetter(v8Value, info);
}

void V8CanvasRenderingContext2D::lineCapAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_lineCap_Getter");

  CanvasRenderingContext2DV8Internal::lineCapAttributeGetter(info);
}

void V8CanvasRenderingContext2D::lineCapAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_lineCap_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  CanvasRenderingContext2DV8Internal::lineCapAttributeSetter(v8Value, info);
}

void V8CanvasRenderingContext2D::lineJoinAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_lineJoin_Getter");

  CanvasRenderingContext2DV8Internal::lineJoinAttributeGetter(info);
}

void V8CanvasRenderingContext2D::lineJoinAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_lineJoin_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  CanvasRenderingContext2DV8Internal::lineJoinAttributeSetter(v8Value, info);
}

void V8CanvasRenderingContext2D::miterLimitAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_miterLimit_Getter");

  CanvasRenderingContext2DV8Internal::miterLimitAttributeGetter(info);
}

void V8CanvasRenderingContext2D::miterLimitAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_miterLimit_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  CanvasRenderingContext2DV8Internal::miterLimitAttributeSetter(v8Value, info);
}

void V8CanvasRenderingContext2D::lineDashOffsetAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_lineDashOffset_Getter");

  CanvasRenderingContext2DV8Internal::lineDashOffsetAttributeGetter(info);
}

void V8CanvasRenderingContext2D::lineDashOffsetAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_lineDashOffset_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  CanvasRenderingContext2DV8Internal::lineDashOffsetAttributeSetter(v8Value, info);
}

void V8CanvasRenderingContext2D::fontAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_font_Getter");

  CanvasRenderingContext2DV8Internal::fontAttributeGetter(info);
}

void V8CanvasRenderingContext2D::fontAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_font_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  CanvasRenderingContext2DV8Internal::fontAttributeSetter(v8Value, info);
}

void V8CanvasRenderingContext2D::textAlignAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_textAlign_Getter");

  CanvasRenderingContext2DV8Internal::textAlignAttributeGetter(info);
}

void V8CanvasRenderingContext2D::textAlignAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_textAlign_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  CanvasRenderingContext2DV8Internal::textAlignAttributeSetter(v8Value, info);
}

void V8CanvasRenderingContext2D::textBaselineAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_textBaseline_Getter");

  CanvasRenderingContext2DV8Internal::textBaselineAttributeGetter(info);
}

void V8CanvasRenderingContext2D::textBaselineAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_textBaseline_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  CanvasRenderingContext2DV8Internal::textBaselineAttributeSetter(v8Value, info);
}

void V8CanvasRenderingContext2D::directionAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_direction_Getter");

  CanvasRenderingContext2DV8Internal::directionAttributeGetter(info);
}

void V8CanvasRenderingContext2D::directionAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_direction_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  CanvasRenderingContext2DV8Internal::directionAttributeSetter(v8Value, info);
}

void V8CanvasRenderingContext2D::saveMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_save");

  CanvasRenderingContext2DV8Internal::saveMethod(info);
}

void V8CanvasRenderingContext2D::restoreMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_restore");

  CanvasRenderingContext2DV8Internal::restoreMethod(info);
}

void V8CanvasRenderingContext2D::scaleMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_scale");

  CanvasRenderingContext2DV8Internal::scaleMethod(info);
}

void V8CanvasRenderingContext2D::rotateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_rotate");

  CanvasRenderingContext2DV8Internal::rotateMethod(info);
}

void V8CanvasRenderingContext2D::translateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_translate");

  CanvasRenderingContext2DV8Internal::translateMethod(info);
}

void V8CanvasRenderingContext2D::transformMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_transform");

  CanvasRenderingContext2DV8Internal::transformMethod(info);
}

void V8CanvasRenderingContext2D::setTransformMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_setTransform");

  CanvasRenderingContext2DV8Internal::setTransformMethod(info);
}

void V8CanvasRenderingContext2D::getTransformMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_getTransform");

  CanvasRenderingContext2DV8Internal::getTransformMethod(info);
}

void V8CanvasRenderingContext2D::resetTransformMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_resetTransform");

  CanvasRenderingContext2DV8Internal::resetTransformMethod(info);
}

void V8CanvasRenderingContext2D::createLinearGradientMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_createLinearGradient");

  CanvasRenderingContext2DV8Internal::createLinearGradientMethod(info);
}

void V8CanvasRenderingContext2D::createRadialGradientMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_createRadialGradient");

  CanvasRenderingContext2DV8Internal::createRadialGradientMethod(info);
}

void V8CanvasRenderingContext2D::createPatternMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_createPattern");

  CanvasRenderingContext2DV8Internal::createPatternMethod(info);
}

void V8CanvasRenderingContext2D::clearRectMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_clearRect");

  CanvasRenderingContext2DV8Internal::clearRectMethod(info);
}

void V8CanvasRenderingContext2D::fillRectMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_fillRect");

  CanvasRenderingContext2DV8Internal::fillRectMethod(info);
}

void V8CanvasRenderingContext2D::strokeRectMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_strokeRect");

  CanvasRenderingContext2DV8Internal::strokeRectMethod(info);
}

void V8CanvasRenderingContext2D::beginPathMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_beginPath");

  CanvasRenderingContext2DV8Internal::beginPathMethod(info);
}

void V8CanvasRenderingContext2D::fillMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_fill");

  CanvasRenderingContext2DV8Internal::fillMethod(info);
}

void V8CanvasRenderingContext2D::strokeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_stroke");

  CanvasRenderingContext2DV8Internal::strokeMethod(info);
}

void V8CanvasRenderingContext2D::drawFocusIfNeededMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_drawFocusIfNeeded");

  CanvasRenderingContext2DV8Internal::drawFocusIfNeededMethod(info);
}

void V8CanvasRenderingContext2D::scrollPathIntoViewMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_scrollPathIntoView");

  CanvasRenderingContext2DV8Internal::scrollPathIntoViewMethod(info);
}

void V8CanvasRenderingContext2D::clipMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_clip");

  CanvasRenderingContext2DV8Internal::clipMethod(info);
}

void V8CanvasRenderingContext2D::isPointInPathMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_isPointInPath");

  CanvasRenderingContext2DV8Internal::isPointInPathMethod(info);
}

void V8CanvasRenderingContext2D::isPointInStrokeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_isPointInStroke");

  CanvasRenderingContext2DV8Internal::isPointInStrokeMethod(info);
}

void V8CanvasRenderingContext2D::fillTextMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_fillText");

  CanvasRenderingContext2DV8Internal::fillTextMethod(info);
}

void V8CanvasRenderingContext2D::strokeTextMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_strokeText");

  CanvasRenderingContext2DV8Internal::strokeTextMethod(info);
}

void V8CanvasRenderingContext2D::measureTextMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_measureText");

  CanvasRenderingContext2DV8Internal::measureTextMethod(info);
}

void V8CanvasRenderingContext2D::drawImageMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_drawImage");

  CanvasRenderingContext2DV8Internal::drawImageMethod(info);
}

void V8CanvasRenderingContext2D::addHitRegionMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_addHitRegion");

  CanvasRenderingContext2DV8Internal::addHitRegionMethod(info);
}

void V8CanvasRenderingContext2D::removeHitRegionMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_removeHitRegion");

  CanvasRenderingContext2DV8Internal::removeHitRegionMethod(info);
}

void V8CanvasRenderingContext2D::clearHitRegionsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_clearHitRegions");

  CanvasRenderingContext2DV8Internal::clearHitRegionsMethod(info);
}

void V8CanvasRenderingContext2D::getImageDataMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_getImageData");

  CanvasRenderingContext2DV8Internal::getImageDataMethod(info);
}

void V8CanvasRenderingContext2D::putImageDataMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_putImageData");

  CanvasRenderingContext2DV8Internal::putImageDataMethod(info);
}

void V8CanvasRenderingContext2D::createImageDataMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_createImageData");

  CanvasRenderingContext2DV8Internal::createImageDataMethod(info);
}

void V8CanvasRenderingContext2D::isContextLostMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_isContextLost");

  CanvasRenderingContext2DV8Internal::isContextLostMethod(info);
}

void V8CanvasRenderingContext2D::getContextAttributesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_getContextAttributes");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kGetCanvas2DContextAttributes);
  CanvasRenderingContext2DV8Internal::getContextAttributesMethod(info);
}

void V8CanvasRenderingContext2D::setLineDashMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_setLineDash");

  CanvasRenderingContext2DV8Internal::setLineDashMethod(info);
}

void V8CanvasRenderingContext2D::getLineDashMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_getLineDash");

  CanvasRenderingContext2DV8Internal::getLineDashMethod(info);
}

void V8CanvasRenderingContext2D::closePathMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_closePath");

  CanvasRenderingContext2DV8Internal::closePathMethod(info);
}

void V8CanvasRenderingContext2D::moveToMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_moveTo");

  CanvasRenderingContext2DV8Internal::moveToMethod(info);
}

void V8CanvasRenderingContext2D::lineToMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_lineTo");

  CanvasRenderingContext2DV8Internal::lineToMethod(info);
}

void V8CanvasRenderingContext2D::quadraticCurveToMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_quadraticCurveTo");

  CanvasRenderingContext2DV8Internal::quadraticCurveToMethod(info);
}

void V8CanvasRenderingContext2D::bezierCurveToMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_bezierCurveTo");

  CanvasRenderingContext2DV8Internal::bezierCurveToMethod(info);
}

void V8CanvasRenderingContext2D::arcToMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_arcTo");

  CanvasRenderingContext2DV8Internal::arcToMethod(info);
}

void V8CanvasRenderingContext2D::rectMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_rect");

  CanvasRenderingContext2DV8Internal::rectMethod(info);
}

void V8CanvasRenderingContext2D::arcMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_arc");

  CanvasRenderingContext2DV8Internal::arcMethod(info);
}

void V8CanvasRenderingContext2D::ellipseMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasRenderingContext2D_ellipse");

  CanvasRenderingContext2DV8Internal::ellipseMethod(info);
}

static const V8DOMConfiguration::AccessorConfiguration V8CanvasRenderingContext2DAccessors[] = {
    { "canvas", V8CanvasRenderingContext2D::canvasAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "globalAlpha", V8CanvasRenderingContext2D::globalAlphaAttributeGetterCallback, V8CanvasRenderingContext2D::globalAlphaAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "globalCompositeOperation", V8CanvasRenderingContext2D::globalCompositeOperationAttributeGetterCallback, V8CanvasRenderingContext2D::globalCompositeOperationAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "filter", V8CanvasRenderingContext2D::filterAttributeGetterCallback, V8CanvasRenderingContext2D::filterAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "imageSmoothingEnabled", V8CanvasRenderingContext2D::imageSmoothingEnabledAttributeGetterCallback, V8CanvasRenderingContext2D::imageSmoothingEnabledAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "imageSmoothingQuality", V8CanvasRenderingContext2D::imageSmoothingQualityAttributeGetterCallback, V8CanvasRenderingContext2D::imageSmoothingQualityAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "strokeStyle", V8CanvasRenderingContext2D::strokeStyleAttributeGetterCallback, V8CanvasRenderingContext2D::strokeStyleAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "fillStyle", V8CanvasRenderingContext2D::fillStyleAttributeGetterCallback, V8CanvasRenderingContext2D::fillStyleAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "shadowOffsetX", V8CanvasRenderingContext2D::shadowOffsetXAttributeGetterCallback, V8CanvasRenderingContext2D::shadowOffsetXAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "shadowOffsetY", V8CanvasRenderingContext2D::shadowOffsetYAttributeGetterCallback, V8CanvasRenderingContext2D::shadowOffsetYAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "shadowBlur", V8CanvasRenderingContext2D::shadowBlurAttributeGetterCallback, V8CanvasRenderingContext2D::shadowBlurAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "shadowColor", V8CanvasRenderingContext2D::shadowColorAttributeGetterCallback, V8CanvasRenderingContext2D::shadowColorAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "lineWidth", V8CanvasRenderingContext2D::lineWidthAttributeGetterCallback, V8CanvasRenderingContext2D::lineWidthAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "lineCap", V8CanvasRenderingContext2D::lineCapAttributeGetterCallback, V8CanvasRenderingContext2D::lineCapAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "lineJoin", V8CanvasRenderingContext2D::lineJoinAttributeGetterCallback, V8CanvasRenderingContext2D::lineJoinAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "miterLimit", V8CanvasRenderingContext2D::miterLimitAttributeGetterCallback, V8CanvasRenderingContext2D::miterLimitAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "lineDashOffset", V8CanvasRenderingContext2D::lineDashOffsetAttributeGetterCallback, V8CanvasRenderingContext2D::lineDashOffsetAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "font", V8CanvasRenderingContext2D::fontAttributeGetterCallback, V8CanvasRenderingContext2D::fontAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "textAlign", V8CanvasRenderingContext2D::textAlignAttributeGetterCallback, V8CanvasRenderingContext2D::textAlignAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "textBaseline", V8CanvasRenderingContext2D::textBaselineAttributeGetterCallback, V8CanvasRenderingContext2D::textBaselineAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
};

static const V8DOMConfiguration::MethodConfiguration V8CanvasRenderingContext2DMethods[] = {
    {"save", V8CanvasRenderingContext2D::saveMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"restore", V8CanvasRenderingContext2D::restoreMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"scale", V8CanvasRenderingContext2D::scaleMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"rotate", V8CanvasRenderingContext2D::rotateMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"translate", V8CanvasRenderingContext2D::translateMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"transform", V8CanvasRenderingContext2D::transformMethodCallback, 6, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setTransform", V8CanvasRenderingContext2D::setTransformMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getTransform", V8CanvasRenderingContext2D::getTransformMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"resetTransform", V8CanvasRenderingContext2D::resetTransformMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createLinearGradient", V8CanvasRenderingContext2D::createLinearGradientMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createRadialGradient", V8CanvasRenderingContext2D::createRadialGradientMethodCallback, 6, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createPattern", V8CanvasRenderingContext2D::createPatternMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"clearRect", V8CanvasRenderingContext2D::clearRectMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"fillRect", V8CanvasRenderingContext2D::fillRectMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"strokeRect", V8CanvasRenderingContext2D::strokeRectMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"beginPath", V8CanvasRenderingContext2D::beginPathMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"fill", V8CanvasRenderingContext2D::fillMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"stroke", V8CanvasRenderingContext2D::strokeMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"drawFocusIfNeeded", V8CanvasRenderingContext2D::drawFocusIfNeededMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"clip", V8CanvasRenderingContext2D::clipMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isPointInPath", V8CanvasRenderingContext2D::isPointInPathMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isPointInStroke", V8CanvasRenderingContext2D::isPointInStrokeMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"fillText", V8CanvasRenderingContext2D::fillTextMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"strokeText", V8CanvasRenderingContext2D::strokeTextMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"measureText", V8CanvasRenderingContext2D::measureTextMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"drawImage", V8CanvasRenderingContext2D::drawImageMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getImageData", V8CanvasRenderingContext2D::getImageDataMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"putImageData", V8CanvasRenderingContext2D::putImageDataMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createImageData", V8CanvasRenderingContext2D::createImageDataMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setLineDash", V8CanvasRenderingContext2D::setLineDashMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getLineDash", V8CanvasRenderingContext2D::getLineDashMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"closePath", V8CanvasRenderingContext2D::closePathMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"moveTo", V8CanvasRenderingContext2D::moveToMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"lineTo", V8CanvasRenderingContext2D::lineToMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"quadraticCurveTo", V8CanvasRenderingContext2D::quadraticCurveToMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"bezierCurveTo", V8CanvasRenderingContext2D::bezierCurveToMethodCallback, 6, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"arcTo", V8CanvasRenderingContext2D::arcToMethodCallback, 5, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"rect", V8CanvasRenderingContext2D::rectMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"arc", V8CanvasRenderingContext2D::arcMethodCallback, 5, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"ellipse", V8CanvasRenderingContext2D::ellipseMethodCallback, 7, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void installV8CanvasRenderingContext2DTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8CanvasRenderingContext2D::wrapperTypeInfo.interface_name, v8::Local<v8::FunctionTemplate>(), V8CanvasRenderingContext2D::internalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8CanvasRenderingContext2DAccessors, arraysize(V8CanvasRenderingContext2DAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8CanvasRenderingContext2DMethods, arraysize(V8CanvasRenderingContext2DMethods));

  // Custom signature

  V8CanvasRenderingContext2D::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8CanvasRenderingContext2D::InstallRuntimeEnabledFeaturesOnTemplate(
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
        { "direction", V8CanvasRenderingContext2D::directionAttributeGetterCallback, V8CanvasRenderingContext2D::directionAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, accessor_configurations,
        arraysize(accessor_configurations));
  }

  // Custom signature
  if (RuntimeEnabledFeatures::Canvas2dScrollPathIntoViewEnabled()) {
    const V8DOMConfiguration::MethodConfiguration scrollPathIntoViewMethodConfiguration[] = {
      {"scrollPathIntoView", V8CanvasRenderingContext2D::scrollPathIntoViewMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
    };
    for (const auto& methodConfig : scrollPathIntoViewMethodConfiguration)
      V8DOMConfiguration::InstallMethod(isolate, world, instance_template, prototype_template, interface_template, signature, methodConfig);
  }
  if (RuntimeEnabledFeatures::CanvasHitRegionEnabled()) {
    const V8DOMConfiguration::MethodConfiguration addHitRegionMethodConfiguration[] = {
      {"addHitRegion", V8CanvasRenderingContext2D::addHitRegionMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
    };
    for (const auto& methodConfig : addHitRegionMethodConfiguration)
      V8DOMConfiguration::InstallMethod(isolate, world, instance_template, prototype_template, interface_template, signature, methodConfig);
  }
  if (RuntimeEnabledFeatures::CanvasHitRegionEnabled()) {
    const V8DOMConfiguration::MethodConfiguration removeHitRegionMethodConfiguration[] = {
      {"removeHitRegion", V8CanvasRenderingContext2D::removeHitRegionMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
    };
    for (const auto& methodConfig : removeHitRegionMethodConfiguration)
      V8DOMConfiguration::InstallMethod(isolate, world, instance_template, prototype_template, interface_template, signature, methodConfig);
  }
  if (RuntimeEnabledFeatures::CanvasHitRegionEnabled()) {
    const V8DOMConfiguration::MethodConfiguration clearHitRegionsMethodConfiguration[] = {
      {"clearHitRegions", V8CanvasRenderingContext2D::clearHitRegionsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
    };
    for (const auto& methodConfig : clearHitRegionsMethodConfiguration)
      V8DOMConfiguration::InstallMethod(isolate, world, instance_template, prototype_template, interface_template, signature, methodConfig);
  }
  if (RuntimeEnabledFeatures::Canvas2dContextLostRestoredEnabled()) {
    const V8DOMConfiguration::MethodConfiguration isContextLostMethodConfiguration[] = {
      {"isContextLost", V8CanvasRenderingContext2D::isContextLostMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
    };
    for (const auto& methodConfig : isContextLostMethodConfiguration)
      V8DOMConfiguration::InstallMethod(isolate, world, instance_template, prototype_template, interface_template, signature, methodConfig);
  }
  if (RuntimeEnabledFeatures::CanvasColorManagementEnabled()) {
    const V8DOMConfiguration::MethodConfiguration getContextAttributesMethodConfiguration[] = {
      {"getContextAttributes", V8CanvasRenderingContext2D::getContextAttributesMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
    };
    for (const auto& methodConfig : getContextAttributesMethodConfiguration)
      V8DOMConfiguration::InstallMethod(isolate, world, instance_template, prototype_template, interface_template, signature, methodConfig);
  }
}

v8::Local<v8::FunctionTemplate> V8CanvasRenderingContext2D::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8CanvasRenderingContext2DTemplate);
}

bool V8CanvasRenderingContext2D::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8CanvasRenderingContext2D::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

CanvasRenderingContext2D* V8CanvasRenderingContext2D::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

CanvasRenderingContext2D* NativeValueTraits<CanvasRenderingContext2D>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  CanvasRenderingContext2D* nativeValue = V8CanvasRenderingContext2D::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "CanvasRenderingContext2D"));
  }
  return nativeValue;
}

}  // namespace blink
