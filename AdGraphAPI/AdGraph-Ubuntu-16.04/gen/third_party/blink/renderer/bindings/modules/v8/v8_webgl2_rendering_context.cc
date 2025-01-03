// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl2_rendering_context.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_promise.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer_view.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_float32_array.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_canvas_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_image_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_video_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_image_bitmap.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_image_data.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_int32_array.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_offscreen_canvas.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_uint32_array.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_active_info.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_buffer.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_context_attributes.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_framebuffer.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_program.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_query.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_renderbuffer.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_sampler.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_shader.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_shader_precision_format.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_sync.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_texture.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_transform_feedback.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_uniform_location.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_vertex_array_object.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_device.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/origin_trials/origin_trials.h"
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
const WrapperTypeInfo V8WebGL2RenderingContext::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8WebGL2RenderingContext::domTemplate,
    nullptr,
    "WebGL2RenderingContext",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in WebGL2RenderingContext.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& WebGL2RenderingContext::wrapper_type_info_ = V8WebGL2RenderingContext::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, WebGL2RenderingContext>::value,
    "WebGL2RenderingContext inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&WebGL2RenderingContext::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "WebGL2RenderingContext is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace WebGL2RenderingContextV8Internal {

static void canvasAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(holder);

  HTMLCanvasElementOrOffscreenCanvas result;
  impl->getHTMLOrOffscreenCanvas(result);

  V8SetReturnValue(info, result);
}

static void drawingBufferWidthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(holder);

  V8SetReturnValueInt(info, impl->drawingBufferWidth());
}

static void drawingBufferHeightAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(holder);

  V8SetReturnValueInt(info, impl->drawingBufferHeight());
}

static void bufferData1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "bufferData");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  MaybeShared<DOMArrayBufferView> srcData;
  uint32_t usage;
  uint32_t srcOffset;
  uint32_t length;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  srcData = ToMaybeShared<MaybeShared<DOMArrayBufferView>>(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;
  if (!srcData) {
    exceptionState.ThrowTypeError("parameter 2 is not of type 'ArrayBufferView'.");
    return;
  }

  usage = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  srcOffset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  if (!info[4]->IsUndefined()) {
    length = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    length = 0u;
  }

  impl->bufferData(target, srcData, usage, srcOffset, length);
}

static void bufferSubData1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "bufferSubData");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int64_t dstByteOffset;
  MaybeShared<DOMArrayBufferView> srcData;
  uint32_t srcOffset;
  uint32_t length;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  dstByteOffset = NativeValueTraits<IDLLongLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  srcData = ToMaybeShared<MaybeShared<DOMArrayBufferView>>(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;
  if (!srcData) {
    exceptionState.ThrowTypeError("parameter 3 is not of type 'ArrayBufferView'.");
    return;
  }

  srcOffset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  if (!info[4]->IsUndefined()) {
    length = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    length = 0u;
  }

  impl->bufferSubData(target, dstByteOffset, srcData, srcOffset, length);
}

static void copyBufferSubDataMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "copyBufferSubData");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 5)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(5, info.Length()));
    return;
  }

  uint32_t readTarget;
  uint32_t writeTarget;
  int64_t readOffset;
  int64_t writeOffset;
  int64_t size;
  readTarget = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  writeTarget = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  readOffset = NativeValueTraits<IDLLongLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  writeOffset = NativeValueTraits<IDLLongLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  size = NativeValueTraits<IDLLongLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->copyBufferSubData(readTarget, writeTarget, readOffset, writeOffset, size);
}

static void getBufferSubDataMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "getBufferSubData");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  uint32_t target;
  int64_t srcByteOffset;
  MaybeShared<DOMArrayBufferView> dstData;
  uint32_t dstOffset;
  uint32_t length;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  srcByteOffset = NativeValueTraits<IDLLongLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  dstData = ToMaybeShared<MaybeShared<DOMArrayBufferView>>(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;
  if (!dstData) {
    exceptionState.ThrowTypeError("parameter 3 is not of type 'ArrayBufferView'.");
    return;
  }

  if (!info[3]->IsUndefined()) {
    dstOffset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    dstOffset = 0u;
  }
  if (!info[4]->IsUndefined()) {
    length = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    length = 0u;
  }

  impl->getBufferSubData(target, srcByteOffset, dstData, dstOffset, length);
}

static void blitFramebufferMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "blitFramebuffer");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 10)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(10, info.Length()));
    return;
  }

  int32_t srcX0;
  int32_t srcY0;
  int32_t srcX1;
  int32_t srcY1;
  int32_t dstX0;
  int32_t dstY0;
  int32_t dstX1;
  int32_t dstY1;
  uint32_t mask;
  uint32_t filter;
  srcX0 = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  srcY0 = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  srcX1 = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  srcY1 = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  dstX0 = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  dstY0 = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  dstX1 = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[6], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  dstY1 = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[7], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  mask = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[8], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  filter = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[9], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->blitFramebuffer(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

static void framebufferTextureLayerMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "framebufferTextureLayer");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 5)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(5, info.Length()));
    return;
  }

  uint32_t target;
  uint32_t attachment;
  WebGLTexture* texture;
  int32_t level;
  int32_t layer;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  attachment = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  texture = V8WebGLTexture::ToImplWithTypeCheck(info.GetIsolate(), info[2]);
  if (!texture && !IsUndefinedOrNull(info[2])) {
    exceptionState.ThrowTypeError("parameter 3 is not of type 'WebGLTexture'.");
    return;
  }

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  layer = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->framebufferTextureLayer(target, attachment, texture, level, layer);
}

static void getInternalformatParameterMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "getInternalformatParameter");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 3)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  uint32_t target;
  uint32_t internalformat;
  uint32_t pname;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  internalformat = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  pname = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  ScriptValue result = impl->getInternalformatParameter(scriptState, target, internalformat, pname);
  V8SetReturnValue(info, result.V8Value());
}

static void invalidateFramebufferMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "invalidateFramebuffer");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  uint32_t target;
  Vector<uint32_t> attachments;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  attachments = NativeValueTraits<IDLSequence<IDLUnsignedLong>>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->invalidateFramebuffer(target, attachments);
}

static void invalidateSubFramebufferMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "invalidateSubFramebuffer");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 6)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(6, info.Length()));
    return;
  }

  uint32_t target;
  Vector<uint32_t> attachments;
  int32_t x;
  int32_t y;
  int32_t width;
  int32_t height;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  attachments = NativeValueTraits<IDLSequence<IDLUnsignedLong>>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  x = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  y = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->invalidateSubFramebuffer(target, attachments, x, y, width, height);
}

static void readBufferMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "readBuffer");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t mode;
  mode = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->readBuffer(mode);
}

static void renderbufferStorageMultisampleMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "renderbufferStorageMultisample");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 5)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(5, info.Length()));
    return;
  }

  uint32_t target;
  int32_t samples;
  uint32_t internalformat;
  int32_t width;
  int32_t height;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  samples = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  internalformat = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->renderbufferStorageMultisample(target, samples, internalformat, width, height);
}

static void texImage2D1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t internalformat;
  int32_t width;
  int32_t height;
  int32_t border;
  uint32_t format;
  uint32_t type;
  int64_t offset;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  internalformat = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  border = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[6], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[7], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  offset = NativeValueTraits<IDLLongLong>::NativeValue(info.GetIsolate(), info[8], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->texImage2D(target, level, internalformat, width, height, border, format, type, offset);
}

static void texImage2D2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t internalformat;
  int32_t width;
  int32_t height;
  int32_t border;
  uint32_t format;
  uint32_t type;
  ImageData* data;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  internalformat = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  border = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[6], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[7], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  data = V8ImageData::ToImplWithTypeCheck(info.GetIsolate(), info[8]);
  if (!data) {
    exceptionState.ThrowTypeError("parameter 9 is not of type 'ImageData'.");
    return;
  }

  impl->texImage2D(target, level, internalformat, width, height, border, format, type, data);
}

static void texImage2D3Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t internalformat;
  int32_t width;
  int32_t height;
  int32_t border;
  uint32_t format;
  uint32_t type;
  HTMLImageElement* image;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  internalformat = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  border = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[6], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[7], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  image = V8HTMLImageElement::ToImplWithTypeCheck(info.GetIsolate(), info[8]);
  if (!image) {
    exceptionState.ThrowTypeError("parameter 9 is not of type 'HTMLImageElement'.");
    return;
  }

  ExecutionContext* executionContext = ExecutionContext::ForRelevantRealm(info);
  impl->texImage2D(executionContext, target, level, internalformat, width, height, border, format, type, image, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void texImage2D4Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t internalformat;
  int32_t width;
  int32_t height;
  int32_t border;
  uint32_t format;
  uint32_t type;
  HTMLCanvasElement* canvas;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  internalformat = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  border = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[6], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[7], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  canvas = V8HTMLCanvasElement::ToImplWithTypeCheck(info.GetIsolate(), info[8]);
  if (!canvas) {
    exceptionState.ThrowTypeError("parameter 9 is not of type 'HTMLCanvasElement'.");
    return;
  }

  ExecutionContext* executionContext = ExecutionContext::ForRelevantRealm(info);
  impl->texImage2D(executionContext, target, level, internalformat, width, height, border, format, type, canvas, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void texImage2D5Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t internalformat;
  int32_t width;
  int32_t height;
  int32_t border;
  uint32_t format;
  uint32_t type;
  HTMLVideoElement* video;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  internalformat = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  border = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[6], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[7], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  video = V8HTMLVideoElement::ToImplWithTypeCheck(info.GetIsolate(), info[8]);
  if (!video) {
    exceptionState.ThrowTypeError("parameter 9 is not of type 'HTMLVideoElement'.");
    return;
  }

  ExecutionContext* executionContext = ExecutionContext::ForRelevantRealm(info);
  impl->texImage2D(executionContext, target, level, internalformat, width, height, border, format, type, video, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void texImage2D6Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t internalformat;
  int32_t width;
  int32_t height;
  int32_t border;
  uint32_t format;
  uint32_t type;
  ImageBitmap* bitmap;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  internalformat = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  border = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[6], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[7], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  bitmap = V8ImageBitmap::ToImplWithTypeCheck(info.GetIsolate(), info[8]);
  if (!bitmap) {
    exceptionState.ThrowTypeError("parameter 9 is not of type 'ImageBitmap'.");
    return;
  }

  impl->texImage2D(target, level, internalformat, width, height, border, format, type, bitmap, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void texImage2D7Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t internalformat;
  int32_t width;
  int32_t height;
  int32_t border;
  uint32_t format;
  uint32_t type;
  MaybeShared<DOMArrayBufferView> srcData;
  uint32_t srcOffset;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  internalformat = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  border = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[6], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[7], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  srcData = ToMaybeShared<MaybeShared<DOMArrayBufferView>>(info.GetIsolate(), info[8], exceptionState);
  if (exceptionState.HadException())
    return;
  if (!srcData) {
    exceptionState.ThrowTypeError("parameter 9 is not of type 'ArrayBufferView'.");
    return;
  }

  srcOffset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[9], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->texImage2D(target, level, internalformat, width, height, border, format, type, srcData, srcOffset);
}

static void texSubImage2D1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texSubImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t xoffset;
  int32_t yoffset;
  int32_t width;
  int32_t height;
  uint32_t format;
  uint32_t type;
  int64_t offset;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  xoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  yoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[6], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[7], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  offset = NativeValueTraits<IDLLongLong>::NativeValue(info.GetIsolate(), info[8], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->texSubImage2D(target, level, xoffset, yoffset, width, height, format, type, offset);
}

static void texSubImage2D2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texSubImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t xoffset;
  int32_t yoffset;
  int32_t width;
  int32_t height;
  uint32_t format;
  uint32_t type;
  ImageData* data;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  xoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  yoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[6], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[7], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  data = V8ImageData::ToImplWithTypeCheck(info.GetIsolate(), info[8]);
  if (!data) {
    exceptionState.ThrowTypeError("parameter 9 is not of type 'ImageData'.");
    return;
  }

  impl->texSubImage2D(target, level, xoffset, yoffset, width, height, format, type, data);
}

static void texSubImage2D3Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texSubImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t xoffset;
  int32_t yoffset;
  int32_t width;
  int32_t height;
  uint32_t format;
  uint32_t type;
  HTMLImageElement* image;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  xoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  yoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[6], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[7], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  image = V8HTMLImageElement::ToImplWithTypeCheck(info.GetIsolate(), info[8]);
  if (!image) {
    exceptionState.ThrowTypeError("parameter 9 is not of type 'HTMLImageElement'.");
    return;
  }

  ExecutionContext* executionContext = ExecutionContext::ForRelevantRealm(info);
  impl->texSubImage2D(executionContext, target, level, xoffset, yoffset, width, height, format, type, image, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void texSubImage2D4Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texSubImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t xoffset;
  int32_t yoffset;
  int32_t width;
  int32_t height;
  uint32_t format;
  uint32_t type;
  HTMLCanvasElement* canvas;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  xoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  yoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[6], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[7], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  canvas = V8HTMLCanvasElement::ToImplWithTypeCheck(info.GetIsolate(), info[8]);
  if (!canvas) {
    exceptionState.ThrowTypeError("parameter 9 is not of type 'HTMLCanvasElement'.");
    return;
  }

  ExecutionContext* executionContext = ExecutionContext::ForRelevantRealm(info);
  impl->texSubImage2D(executionContext, target, level, xoffset, yoffset, width, height, format, type, canvas, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void texSubImage2D5Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texSubImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t xoffset;
  int32_t yoffset;
  int32_t width;
  int32_t height;
  uint32_t format;
  uint32_t type;
  HTMLVideoElement* video;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  xoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  yoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[6], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[7], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  video = V8HTMLVideoElement::ToImplWithTypeCheck(info.GetIsolate(), info[8]);
  if (!video) {
    exceptionState.ThrowTypeError("parameter 9 is not of type 'HTMLVideoElement'.");
    return;
  }

  ExecutionContext* executionContext = ExecutionContext::ForRelevantRealm(info);
  impl->texSubImage2D(executionContext, target, level, xoffset, yoffset, width, height, format, type, video, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void texSubImage2D6Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texSubImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t xoffset;
  int32_t yoffset;
  int32_t width;
  int32_t height;
  uint32_t format;
  uint32_t type;
  ImageBitmap* bitmap;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  xoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  yoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[6], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[7], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  bitmap = V8ImageBitmap::ToImplWithTypeCheck(info.GetIsolate(), info[8]);
  if (!bitmap) {
    exceptionState.ThrowTypeError("parameter 9 is not of type 'ImageBitmap'.");
    return;
  }

  impl->texSubImage2D(target, level, xoffset, yoffset, width, height, format, type, bitmap, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void texSubImage2D7Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texSubImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t xoffset;
  int32_t yoffset;
  int32_t width;
  int32_t height;
  uint32_t format;
  uint32_t type;
  MaybeShared<DOMArrayBufferView> srcData;
  uint32_t srcOffset;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  xoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  yoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[6], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[7], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  srcData = ToMaybeShared<MaybeShared<DOMArrayBufferView>>(info.GetIsolate(), info[8], exceptionState);
  if (exceptionState.HadException())
    return;
  if (!srcData) {
    exceptionState.ThrowTypeError("parameter 9 is not of type 'ArrayBufferView'.");
    return;
  }

  srcOffset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[9], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->texSubImage2D(target, level, xoffset, yoffset, width, height, format, type, srcData, srcOffset);
}

static void texStorage2DMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texStorage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 5)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(5, info.Length()));
    return;
  }

  uint32_t target;
  int32_t levels;
  uint32_t internalformat;
  int32_t width;
  int32_t height;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  levels = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  internalformat = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->texStorage2D(target, levels, internalformat, width, height);
}

static void texStorage3DMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texStorage3D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 6)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(6, info.Length()));
    return;
  }

  uint32_t target;
  int32_t levels;
  uint32_t internalformat;
  int32_t width;
  int32_t height;
  int32_t depth;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  levels = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  internalformat = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  depth = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->texStorage3D(target, levels, internalformat, width, height, depth);
}

static void texImage3D1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texImage3D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t internalformat;
  int32_t width;
  int32_t height;
  int32_t depth;
  int32_t border;
  uint32_t format;
  uint32_t type;
  int64_t offset;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  internalformat = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  depth = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  border = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[6], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[7], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[8], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  offset = NativeValueTraits<IDLLongLong>::NativeValue(info.GetIsolate(), info[9], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->texImage3D(target, level, internalformat, width, height, depth, border, format, type, offset);
}

static void texImage3D2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texImage3D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t internalformat;
  int32_t width;
  int32_t height;
  int32_t depth;
  int32_t border;
  uint32_t format;
  uint32_t type;
  ImageData* data;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  internalformat = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  depth = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  border = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[6], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[7], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[8], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  data = V8ImageData::ToImplWithTypeCheck(info.GetIsolate(), info[9]);
  if (!data) {
    exceptionState.ThrowTypeError("parameter 10 is not of type 'ImageData'.");
    return;
  }

  impl->texImage3D(target, level, internalformat, width, height, depth, border, format, type, data);
}

static void texImage3D3Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texImage3D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t internalformat;
  int32_t width;
  int32_t height;
  int32_t depth;
  int32_t border;
  uint32_t format;
  uint32_t type;
  HTMLImageElement* image;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  internalformat = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  depth = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  border = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[6], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[7], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[8], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  image = V8HTMLImageElement::ToImplWithTypeCheck(info.GetIsolate(), info[9]);
  if (!image) {
    exceptionState.ThrowTypeError("parameter 10 is not of type 'HTMLImageElement'.");
    return;
  }

  ExecutionContext* executionContext = ExecutionContext::ForRelevantRealm(info);
  impl->texImage3D(executionContext, target, level, internalformat, width, height, depth, border, format, type, image, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void texImage3D4Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texImage3D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t internalformat;
  int32_t width;
  int32_t height;
  int32_t depth;
  int32_t border;
  uint32_t format;
  uint32_t type;
  HTMLCanvasElement* canvas;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  internalformat = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  depth = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  border = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[6], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[7], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[8], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  canvas = V8HTMLCanvasElement::ToImplWithTypeCheck(info.GetIsolate(), info[9]);
  if (!canvas) {
    exceptionState.ThrowTypeError("parameter 10 is not of type 'HTMLCanvasElement'.");
    return;
  }

  ExecutionContext* executionContext = ExecutionContext::ForRelevantRealm(info);
  impl->texImage3D(executionContext, target, level, internalformat, width, height, depth, border, format, type, canvas, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void texImage3D5Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texImage3D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t internalformat;
  int32_t width;
  int32_t height;
  int32_t depth;
  int32_t border;
  uint32_t format;
  uint32_t type;
  HTMLVideoElement* video;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  internalformat = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  depth = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  border = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[6], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[7], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[8], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  video = V8HTMLVideoElement::ToImplWithTypeCheck(info.GetIsolate(), info[9]);
  if (!video) {
    exceptionState.ThrowTypeError("parameter 10 is not of type 'HTMLVideoElement'.");
    return;
  }

  ExecutionContext* executionContext = ExecutionContext::ForRelevantRealm(info);
  impl->texImage3D(executionContext, target, level, internalformat, width, height, depth, border, format, type, video, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void texImage3D6Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texImage3D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t internalformat;
  int32_t width;
  int32_t height;
  int32_t depth;
  int32_t border;
  uint32_t format;
  uint32_t type;
  ImageBitmap* bitmap;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  internalformat = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  depth = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  border = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[6], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[7], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[8], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  bitmap = V8ImageBitmap::ToImplWithTypeCheck(info.GetIsolate(), info[9]);
  if (!bitmap) {
    exceptionState.ThrowTypeError("parameter 10 is not of type 'ImageBitmap'.");
    return;
  }

  impl->texImage3D(target, level, internalformat, width, height, depth, border, format, type, bitmap, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void texImage3D7Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texImage3D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t internalformat;
  int32_t width;
  int32_t height;
  int32_t depth;
  int32_t border;
  uint32_t format;
  uint32_t type;
  MaybeShared<DOMArrayBufferView> pixels;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  internalformat = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  depth = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  border = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[6], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[7], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[8], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  pixels = ToMaybeShared<MaybeShared<DOMArrayBufferView>>(info.GetIsolate(), info[9], exceptionState);
  if (exceptionState.HadException())
    return;
  if (!pixels && !IsUndefinedOrNull(info[9])) {
    exceptionState.ThrowTypeError("parameter 10 is not of type 'ArrayBufferView'.");
    return;
  }

  impl->texImage3D(target, level, internalformat, width, height, depth, border, format, type, pixels);
}

static void texImage3D8Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texImage3D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t internalformat;
  int32_t width;
  int32_t height;
  int32_t depth;
  int32_t border;
  uint32_t format;
  uint32_t type;
  MaybeShared<DOMArrayBufferView> pixels;
  uint32_t srcOffset;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  internalformat = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  depth = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  border = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[6], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[7], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[8], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  pixels = ToMaybeShared<MaybeShared<DOMArrayBufferView>>(info.GetIsolate(), info[9], exceptionState);
  if (exceptionState.HadException())
    return;
  if (!pixels) {
    exceptionState.ThrowTypeError("parameter 10 is not of type 'ArrayBufferView'.");
    return;
  }

  srcOffset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[10], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->texImage3D(target, level, internalformat, width, height, depth, border, format, type, pixels, srcOffset);
}

static void texImage3DMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(11, info.Length())) {
    case 10:
      if (IsUndefinedOrNull(info[9])) {
        texImage3D7Method(info);
        return;
      }
      if (V8ImageData::hasInstance(info[9], info.GetIsolate())) {
        texImage3D2Method(info);
        return;
      }
      if (V8HTMLImageElement::hasInstance(info[9], info.GetIsolate())) {
        texImage3D3Method(info);
        return;
      }
      if (V8HTMLCanvasElement::hasInstance(info[9], info.GetIsolate())) {
        texImage3D4Method(info);
        return;
      }
      if (V8HTMLVideoElement::hasInstance(info[9], info.GetIsolate())) {
        texImage3D5Method(info);
        return;
      }
      if (V8ImageBitmap::hasInstance(info[9], info.GetIsolate())) {
        texImage3D6Method(info);
        return;
      }
      if (info[9]->IsArrayBufferView()) {
        texImage3D7Method(info);
        return;
      }
      if (info[9]->IsNumber()) {
        texImage3D1Method(info);
        return;
      }
      if (true) {
        texImage3D1Method(info);
        return;
      }
      break;
    case 11:
      if (true) {
        texImage3D8Method(info);
        return;
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texImage3D");
  if (isArityError) {
    if (info.Length() < 10) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(10, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void texSubImage3D1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texSubImage3D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t xoffset;
  int32_t yoffset;
  int32_t zoffset;
  int32_t width;
  int32_t height;
  int32_t depth;
  uint32_t format;
  uint32_t type;
  int64_t offset;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  xoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  yoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  zoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[6], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  depth = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[7], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[8], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[9], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  offset = NativeValueTraits<IDLLongLong>::NativeValue(info.GetIsolate(), info[10], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->texSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, offset);
}

static void texSubImage3D2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texSubImage3D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t xoffset;
  int32_t yoffset;
  int32_t zoffset;
  int32_t width;
  int32_t height;
  int32_t depth;
  uint32_t format;
  uint32_t type;
  ImageData* data;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  xoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  yoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  zoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[6], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  depth = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[7], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[8], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[9], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  data = V8ImageData::ToImplWithTypeCheck(info.GetIsolate(), info[10]);
  if (!data) {
    exceptionState.ThrowTypeError("parameter 11 is not of type 'ImageData'.");
    return;
  }

  impl->texSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, data);
}

static void texSubImage3D3Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texSubImage3D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t xoffset;
  int32_t yoffset;
  int32_t zoffset;
  int32_t width;
  int32_t height;
  int32_t depth;
  uint32_t format;
  uint32_t type;
  HTMLImageElement* image;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  xoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  yoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  zoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[6], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  depth = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[7], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[8], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[9], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  image = V8HTMLImageElement::ToImplWithTypeCheck(info.GetIsolate(), info[10]);
  if (!image) {
    exceptionState.ThrowTypeError("parameter 11 is not of type 'HTMLImageElement'.");
    return;
  }

  ExecutionContext* executionContext = ExecutionContext::ForRelevantRealm(info);
  impl->texSubImage3D(executionContext, target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, image, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void texSubImage3D4Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texSubImage3D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t xoffset;
  int32_t yoffset;
  int32_t zoffset;
  int32_t width;
  int32_t height;
  int32_t depth;
  uint32_t format;
  uint32_t type;
  HTMLCanvasElement* canvas;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  xoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  yoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  zoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[6], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  depth = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[7], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[8], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[9], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  canvas = V8HTMLCanvasElement::ToImplWithTypeCheck(info.GetIsolate(), info[10]);
  if (!canvas) {
    exceptionState.ThrowTypeError("parameter 11 is not of type 'HTMLCanvasElement'.");
    return;
  }

  ExecutionContext* executionContext = ExecutionContext::ForRelevantRealm(info);
  impl->texSubImage3D(executionContext, target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, canvas, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void texSubImage3D5Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texSubImage3D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t xoffset;
  int32_t yoffset;
  int32_t zoffset;
  int32_t width;
  int32_t height;
  int32_t depth;
  uint32_t format;
  uint32_t type;
  HTMLVideoElement* video;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  xoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  yoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  zoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[6], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  depth = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[7], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[8], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[9], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  video = V8HTMLVideoElement::ToImplWithTypeCheck(info.GetIsolate(), info[10]);
  if (!video) {
    exceptionState.ThrowTypeError("parameter 11 is not of type 'HTMLVideoElement'.");
    return;
  }

  ExecutionContext* executionContext = ExecutionContext::ForRelevantRealm(info);
  impl->texSubImage3D(executionContext, target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, video, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void texSubImage3D6Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texSubImage3D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t xoffset;
  int32_t yoffset;
  int32_t zoffset;
  int32_t width;
  int32_t height;
  int32_t depth;
  uint32_t format;
  uint32_t type;
  ImageBitmap* bitmap;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  xoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  yoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  zoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[6], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  depth = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[7], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[8], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[9], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  bitmap = V8ImageBitmap::ToImplWithTypeCheck(info.GetIsolate(), info[10]);
  if (!bitmap) {
    exceptionState.ThrowTypeError("parameter 11 is not of type 'ImageBitmap'.");
    return;
  }

  impl->texSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, bitmap, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void texSubImage3D7Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texSubImage3D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t xoffset;
  int32_t yoffset;
  int32_t zoffset;
  int32_t width;
  int32_t height;
  int32_t depth;
  uint32_t format;
  uint32_t type;
  MaybeShared<DOMArrayBufferView> pixels;
  uint32_t srcOffset;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  xoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  yoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  zoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[6], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  depth = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[7], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[8], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[9], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  pixels = ToMaybeShared<MaybeShared<DOMArrayBufferView>>(info.GetIsolate(), info[10], exceptionState);
  if (exceptionState.HadException())
    return;
  if (!pixels) {
    exceptionState.ThrowTypeError("parameter 11 is not of type 'ArrayBufferView'.");
    return;
  }

  if (!info[11]->IsUndefined()) {
    srcOffset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[11], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcOffset = 0u;
  }

  impl->texSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels, srcOffset);
}

static void texSubImage3DMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(12, info.Length())) {
    case 11:
      if (V8ImageData::hasInstance(info[10], info.GetIsolate())) {
        texSubImage3D2Method(info);
        return;
      }
      if (V8HTMLImageElement::hasInstance(info[10], info.GetIsolate())) {
        texSubImage3D3Method(info);
        return;
      }
      if (V8HTMLCanvasElement::hasInstance(info[10], info.GetIsolate())) {
        texSubImage3D4Method(info);
        return;
      }
      if (V8HTMLVideoElement::hasInstance(info[10], info.GetIsolate())) {
        texSubImage3D5Method(info);
        return;
      }
      if (V8ImageBitmap::hasInstance(info[10], info.GetIsolate())) {
        texSubImage3D6Method(info);
        return;
      }
      if (info[10]->IsArrayBufferView()) {
        texSubImage3D7Method(info);
        return;
      }
      if (info[10]->IsNumber()) {
        texSubImage3D1Method(info);
        return;
      }
      if (true) {
        texSubImage3D1Method(info);
        return;
      }
      break;
    case 12:
      if (true) {
        texSubImage3D7Method(info);
        return;
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texSubImage3D");
  if (isArityError) {
    if (info.Length() < 11) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(11, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void copyTexSubImage3DMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "copyTexSubImage3D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 9)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(9, info.Length()));
    return;
  }

  uint32_t target;
  int32_t level;
  int32_t xoffset;
  int32_t yoffset;
  int32_t zoffset;
  int32_t x;
  int32_t y;
  int32_t width;
  int32_t height;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  xoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  yoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  zoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  x = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  y = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[6], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[7], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[8], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->copyTexSubImage3D(target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

static void compressedTexImage2D1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "compressedTexImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  uint32_t internalformat;
  int32_t width;
  int32_t height;
  int32_t border;
  MaybeShared<DOMArrayBufferView> data;
  uint32_t srcOffset;
  uint32_t srcLengthOverride;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  internalformat = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  border = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  data = ToMaybeShared<MaybeShared<DOMArrayBufferView>>(info.GetIsolate(), info[6], exceptionState);
  if (exceptionState.HadException())
    return;
  if (!data) {
    exceptionState.ThrowTypeError("parameter 7 is not of type 'ArrayBufferView'.");
    return;
  }

  srcOffset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[7], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  if (!info[8]->IsUndefined()) {
    srcLengthOverride = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[8], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcLengthOverride = 0u;
  }

  impl->compressedTexImage2D(target, level, internalformat, width, height, border, data, srcOffset, srcLengthOverride);
}

static void compressedTexSubImage2D1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "compressedTexSubImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t xoffset;
  int32_t yoffset;
  int32_t width;
  int32_t height;
  uint32_t format;
  MaybeShared<DOMArrayBufferView> data;
  uint32_t srcOffset;
  uint32_t srcLengthOverride;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  xoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  yoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[6], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  data = ToMaybeShared<MaybeShared<DOMArrayBufferView>>(info.GetIsolate(), info[7], exceptionState);
  if (exceptionState.HadException())
    return;
  if (!data) {
    exceptionState.ThrowTypeError("parameter 8 is not of type 'ArrayBufferView'.");
    return;
  }

  srcOffset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[8], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  if (!info[9]->IsUndefined()) {
    srcLengthOverride = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[9], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcLengthOverride = 0u;
  }

  impl->compressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, data, srcOffset, srcLengthOverride);
}

static void compressedTexImage3D1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "compressedTexImage3D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  uint32_t internalformat;
  int32_t width;
  int32_t height;
  int32_t depth;
  int32_t border;
  MaybeShared<DOMArrayBufferView> data;
  uint32_t srcOffset;
  uint32_t srcLengthOverride;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  internalformat = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  depth = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  border = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[6], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  data = ToMaybeShared<MaybeShared<DOMArrayBufferView>>(info.GetIsolate(), info[7], exceptionState);
  if (exceptionState.HadException())
    return;
  if (!data) {
    exceptionState.ThrowTypeError("parameter 8 is not of type 'ArrayBufferView'.");
    return;
  }

  if (!info[8]->IsUndefined()) {
    srcOffset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[8], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcOffset = 0u;
  }
  if (!info[9]->IsUndefined()) {
    srcLengthOverride = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[9], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcLengthOverride = 0u;
  }

  impl->compressedTexImage3D(target, level, internalformat, width, height, depth, border, data, srcOffset, srcLengthOverride);
}

static void compressedTexSubImage3D1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "compressedTexSubImage3D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t xoffset;
  int32_t yoffset;
  int32_t zoffset;
  int32_t width;
  int32_t height;
  int32_t depth;
  uint32_t format;
  MaybeShared<DOMArrayBufferView> data;
  uint32_t srcOffset;
  uint32_t srcLengthOverride;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  xoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  yoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  zoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[6], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  depth = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[7], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[8], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  data = ToMaybeShared<MaybeShared<DOMArrayBufferView>>(info.GetIsolate(), info[9], exceptionState);
  if (exceptionState.HadException())
    return;
  if (!data) {
    exceptionState.ThrowTypeError("parameter 10 is not of type 'ArrayBufferView'.");
    return;
  }

  if (!info[10]->IsUndefined()) {
    srcOffset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[10], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcOffset = 0u;
  }
  if (!info[11]->IsUndefined()) {
    srcLengthOverride = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[11], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcLengthOverride = 0u;
  }

  impl->compressedTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, data, srcOffset, srcLengthOverride);
}

static void compressedTexImage2D2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "compressedTexImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  uint32_t internalformat;
  int32_t width;
  int32_t height;
  int32_t border;
  int32_t imageSize;
  int64_t offset;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  internalformat = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  border = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  imageSize = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[6], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  offset = NativeValueTraits<IDLLongLong>::NativeValue(info.GetIsolate(), info[7], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->compressedTexImage2D(target, level, internalformat, width, height, border, imageSize, offset);
}

static void compressedTexSubImage2D2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "compressedTexSubImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t xoffset;
  int32_t yoffset;
  int32_t width;
  int32_t height;
  uint32_t format;
  int32_t imageSize;
  int64_t offset;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  xoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  yoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[6], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  imageSize = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[7], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  offset = NativeValueTraits<IDLLongLong>::NativeValue(info.GetIsolate(), info[8], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->compressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, offset);
}

static void compressedTexImage3D2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "compressedTexImage3D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  uint32_t internalformat;
  int32_t width;
  int32_t height;
  int32_t depth;
  int32_t border;
  int32_t imageSize;
  int64_t offset;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  internalformat = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  depth = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  border = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[6], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  imageSize = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[7], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  offset = NativeValueTraits<IDLLongLong>::NativeValue(info.GetIsolate(), info[8], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->compressedTexImage3D(target, level, internalformat, width, height, depth, border, imageSize, offset);
}

static void compressedTexImage3DMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(10, info.Length())) {
    case 8:
      if (true) {
        compressedTexImage3D1Method(info);
        return;
      }
      break;
    case 9:
      if (info[7]->IsArrayBufferView()) {
        compressedTexImage3D1Method(info);
        return;
      }
      if (info[7]->IsNumber()) {
        compressedTexImage3D2Method(info);
        return;
      }
      if (true) {
        compressedTexImage3D2Method(info);
        return;
      }
      break;
    case 10:
      if (true) {
        compressedTexImage3D1Method(info);
        return;
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "compressedTexImage3D");
  if (isArityError) {
    if (info.Length() < 8) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(8, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void compressedTexSubImage3D2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "compressedTexSubImage3D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t xoffset;
  int32_t yoffset;
  int32_t zoffset;
  int32_t width;
  int32_t height;
  int32_t depth;
  uint32_t format;
  int32_t imageSize;
  int64_t offset;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  xoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  yoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  zoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[6], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  depth = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[7], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[8], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  imageSize = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[9], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  offset = NativeValueTraits<IDLLongLong>::NativeValue(info.GetIsolate(), info[10], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->compressedTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, offset);
}

static void compressedTexSubImage3DMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(12, info.Length())) {
    case 10:
      if (true) {
        compressedTexSubImage3D1Method(info);
        return;
      }
      break;
    case 11:
      if (info[9]->IsArrayBufferView()) {
        compressedTexSubImage3D1Method(info);
        return;
      }
      if (info[9]->IsNumber()) {
        compressedTexSubImage3D2Method(info);
        return;
      }
      if (true) {
        compressedTexSubImage3D2Method(info);
        return;
      }
      break;
    case 12:
      if (true) {
        compressedTexSubImage3D1Method(info);
        return;
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "compressedTexSubImage3D");
  if (isArityError) {
    if (info.Length() < 10) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(10, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void getFragDataLocationMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getFragDataLocation", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  WebGLProgram* program;
  V8StringResource<> name;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getFragDataLocation", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLProgram'."));
    return;
  }

  name = info[1];
  if (!name.Prepare())
    return;

  V8SetReturnValueInt(info, impl->getFragDataLocation(program, name));
}

static void uniform1uiMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform1ui");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  WebGLUniformLocation* location;
  uint32_t v0;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  v0 = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->uniform1ui(location, v0);
}

static void uniform2uiMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform2ui");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  WebGLUniformLocation* location;
  uint32_t v0;
  uint32_t v1;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  v0 = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  v1 = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->uniform2ui(location, v0, v1);
}

static void uniform3uiMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform3ui");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 4)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(4, info.Length()));
    return;
  }

  WebGLUniformLocation* location;
  uint32_t v0;
  uint32_t v1;
  uint32_t v2;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  v0 = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  v1 = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  v2 = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->uniform3ui(location, v0, v1, v2);
}

static void uniform4uiMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform4ui");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 5)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(5, info.Length()));
    return;
  }

  WebGLUniformLocation* location;
  uint32_t v0;
  uint32_t v1;
  uint32_t v2;
  uint32_t v3;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  v0 = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  v1 = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  v2 = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  v3 = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->uniform4ui(location, v0, v1, v2, v3);
}

static void uniform1fv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform1fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  FlexibleFloat32ArrayView v;
  uint32_t srcOffset;
  uint32_t srcLength;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  ToFlexibleArrayBufferView(info.GetIsolate(), info[1], v, allocateFlexibleArrayBufferViewStorage(info[1]));
  if (!v) {
    exceptionState.ThrowTypeError("parameter 2 is not of type 'Float32Array'.");
    return;
  }

  srcOffset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  if (!info[3]->IsUndefined()) {
    srcLength = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcLength = 0u;
  }

  impl->uniform1fv(location, v, srcOffset, srcLength);
}

static void uniform1fv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform1fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  Vector<float> v;
  uint32_t srcOffset;
  uint32_t srcLength;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  v = NativeValueTraits<IDLSequence<IDLUnrestrictedFloat>>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  srcOffset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  if (!info[3]->IsUndefined()) {
    srcLength = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcLength = 0u;
  }

  impl->uniform1fv(location, v, srcOffset, srcLength);
}

static void uniform2fv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform2fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  FlexibleFloat32ArrayView v;
  uint32_t srcOffset;
  uint32_t srcLength;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  ToFlexibleArrayBufferView(info.GetIsolate(), info[1], v, allocateFlexibleArrayBufferViewStorage(info[1]));
  if (!v) {
    exceptionState.ThrowTypeError("parameter 2 is not of type 'Float32Array'.");
    return;
  }

  srcOffset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  if (!info[3]->IsUndefined()) {
    srcLength = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcLength = 0u;
  }

  impl->uniform2fv(location, v, srcOffset, srcLength);
}

static void uniform2fv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform2fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  Vector<float> v;
  uint32_t srcOffset;
  uint32_t srcLength;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  v = NativeValueTraits<IDLSequence<IDLUnrestrictedFloat>>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  srcOffset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  if (!info[3]->IsUndefined()) {
    srcLength = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcLength = 0u;
  }

  impl->uniform2fv(location, v, srcOffset, srcLength);
}

static void uniform3fv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform3fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  FlexibleFloat32ArrayView v;
  uint32_t srcOffset;
  uint32_t srcLength;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  ToFlexibleArrayBufferView(info.GetIsolate(), info[1], v, allocateFlexibleArrayBufferViewStorage(info[1]));
  if (!v) {
    exceptionState.ThrowTypeError("parameter 2 is not of type 'Float32Array'.");
    return;
  }

  srcOffset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  if (!info[3]->IsUndefined()) {
    srcLength = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcLength = 0u;
  }

  impl->uniform3fv(location, v, srcOffset, srcLength);
}

static void uniform3fv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform3fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  Vector<float> v;
  uint32_t srcOffset;
  uint32_t srcLength;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  v = NativeValueTraits<IDLSequence<IDLUnrestrictedFloat>>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  srcOffset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  if (!info[3]->IsUndefined()) {
    srcLength = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcLength = 0u;
  }

  impl->uniform3fv(location, v, srcOffset, srcLength);
}

static void uniform4fv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform4fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  FlexibleFloat32ArrayView v;
  uint32_t srcOffset;
  uint32_t srcLength;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  ToFlexibleArrayBufferView(info.GetIsolate(), info[1], v, allocateFlexibleArrayBufferViewStorage(info[1]));
  if (!v) {
    exceptionState.ThrowTypeError("parameter 2 is not of type 'Float32Array'.");
    return;
  }

  srcOffset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  if (!info[3]->IsUndefined()) {
    srcLength = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcLength = 0u;
  }

  impl->uniform4fv(location, v, srcOffset, srcLength);
}

static void uniform4fv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform4fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  Vector<float> v;
  uint32_t srcOffset;
  uint32_t srcLength;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  v = NativeValueTraits<IDLSequence<IDLUnrestrictedFloat>>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  srcOffset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  if (!info[3]->IsUndefined()) {
    srcLength = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcLength = 0u;
  }

  impl->uniform4fv(location, v, srcOffset, srcLength);
}

static void uniform1iv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform1iv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  FlexibleInt32ArrayView v;
  uint32_t srcOffset;
  uint32_t srcLength;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  ToFlexibleArrayBufferView(info.GetIsolate(), info[1], v, allocateFlexibleArrayBufferViewStorage(info[1]));
  if (!v) {
    exceptionState.ThrowTypeError("parameter 2 is not of type 'Int32Array'.");
    return;
  }

  srcOffset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  if (!info[3]->IsUndefined()) {
    srcLength = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcLength = 0u;
  }

  impl->uniform1iv(location, v, srcOffset, srcLength);
}

static void uniform1iv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform1iv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  Vector<int32_t> v;
  uint32_t srcOffset;
  uint32_t srcLength;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  v = NativeValueTraits<IDLSequence<IDLLong>>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  srcOffset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  if (!info[3]->IsUndefined()) {
    srcLength = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcLength = 0u;
  }

  impl->uniform1iv(location, v, srcOffset, srcLength);
}

static void uniform2iv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform2iv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  FlexibleInt32ArrayView v;
  uint32_t srcOffset;
  uint32_t srcLength;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  ToFlexibleArrayBufferView(info.GetIsolate(), info[1], v, allocateFlexibleArrayBufferViewStorage(info[1]));
  if (!v) {
    exceptionState.ThrowTypeError("parameter 2 is not of type 'Int32Array'.");
    return;
  }

  srcOffset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  if (!info[3]->IsUndefined()) {
    srcLength = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcLength = 0u;
  }

  impl->uniform2iv(location, v, srcOffset, srcLength);
}

static void uniform2iv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform2iv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  Vector<int32_t> v;
  uint32_t srcOffset;
  uint32_t srcLength;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  v = NativeValueTraits<IDLSequence<IDLLong>>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  srcOffset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  if (!info[3]->IsUndefined()) {
    srcLength = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcLength = 0u;
  }

  impl->uniform2iv(location, v, srcOffset, srcLength);
}

static void uniform3iv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform3iv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  FlexibleInt32ArrayView v;
  uint32_t srcOffset;
  uint32_t srcLength;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  ToFlexibleArrayBufferView(info.GetIsolate(), info[1], v, allocateFlexibleArrayBufferViewStorage(info[1]));
  if (!v) {
    exceptionState.ThrowTypeError("parameter 2 is not of type 'Int32Array'.");
    return;
  }

  srcOffset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  if (!info[3]->IsUndefined()) {
    srcLength = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcLength = 0u;
  }

  impl->uniform3iv(location, v, srcOffset, srcLength);
}

static void uniform3iv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform3iv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  Vector<int32_t> v;
  uint32_t srcOffset;
  uint32_t srcLength;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  v = NativeValueTraits<IDLSequence<IDLLong>>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  srcOffset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  if (!info[3]->IsUndefined()) {
    srcLength = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcLength = 0u;
  }

  impl->uniform3iv(location, v, srcOffset, srcLength);
}

static void uniform4iv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform4iv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  FlexibleInt32ArrayView v;
  uint32_t srcOffset;
  uint32_t srcLength;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  ToFlexibleArrayBufferView(info.GetIsolate(), info[1], v, allocateFlexibleArrayBufferViewStorage(info[1]));
  if (!v) {
    exceptionState.ThrowTypeError("parameter 2 is not of type 'Int32Array'.");
    return;
  }

  srcOffset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  if (!info[3]->IsUndefined()) {
    srcLength = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcLength = 0u;
  }

  impl->uniform4iv(location, v, srcOffset, srcLength);
}

static void uniform4iv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform4iv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  Vector<int32_t> v;
  uint32_t srcOffset;
  uint32_t srcLength;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  v = NativeValueTraits<IDLSequence<IDLLong>>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  srcOffset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  if (!info[3]->IsUndefined()) {
    srcLength = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcLength = 0u;
  }

  impl->uniform4iv(location, v, srcOffset, srcLength);
}

static void uniform1uiv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform1uiv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  FlexibleUint32ArrayView v;
  uint32_t srcOffset;
  uint32_t srcLength;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  ToFlexibleArrayBufferView(info.GetIsolate(), info[1], v, allocateFlexibleArrayBufferViewStorage(info[1]));
  if (!v) {
    exceptionState.ThrowTypeError("parameter 2 is not of type 'Uint32Array'.");
    return;
  }

  if (!info[2]->IsUndefined()) {
    srcOffset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcOffset = 0u;
  }
  if (!info[3]->IsUndefined()) {
    srcLength = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcLength = 0u;
  }

  impl->uniform1uiv(location, v, srcOffset, srcLength);
}

static void uniform1uiv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform1uiv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  Vector<uint32_t> v;
  uint32_t srcOffset;
  uint32_t srcLength;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  v = NativeValueTraits<IDLSequence<IDLUnsignedLong>>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  if (!info[2]->IsUndefined()) {
    srcOffset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcOffset = 0u;
  }
  if (!info[3]->IsUndefined()) {
    srcLength = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcLength = 0u;
  }

  impl->uniform1uiv(location, v, srcOffset, srcLength);
}

static void uniform1uivMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(4, info.Length())) {
    case 2:
      if (info[1]->IsUint32Array()) {
        uniform1uiv1Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        uniform1uiv2Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniform1uiv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exceptionState)) {
          uniform1uiv2Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    case 3:
      if (info[1]->IsUint32Array()) {
        uniform1uiv1Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        uniform1uiv2Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniform1uiv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exceptionState)) {
          uniform1uiv2Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    case 4:
      if (info[1]->IsUint32Array()) {
        uniform1uiv1Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        uniform1uiv2Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniform1uiv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exceptionState)) {
          uniform1uiv2Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform1uiv");
  if (isArityError) {
    if (info.Length() < 2) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void uniform2uiv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform2uiv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  FlexibleUint32ArrayView v;
  uint32_t srcOffset;
  uint32_t srcLength;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  ToFlexibleArrayBufferView(info.GetIsolate(), info[1], v, allocateFlexibleArrayBufferViewStorage(info[1]));
  if (!v) {
    exceptionState.ThrowTypeError("parameter 2 is not of type 'Uint32Array'.");
    return;
  }

  if (!info[2]->IsUndefined()) {
    srcOffset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcOffset = 0u;
  }
  if (!info[3]->IsUndefined()) {
    srcLength = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcLength = 0u;
  }

  impl->uniform2uiv(location, v, srcOffset, srcLength);
}

static void uniform2uiv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform2uiv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  Vector<uint32_t> v;
  uint32_t srcOffset;
  uint32_t srcLength;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  v = NativeValueTraits<IDLSequence<IDLUnsignedLong>>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  if (!info[2]->IsUndefined()) {
    srcOffset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcOffset = 0u;
  }
  if (!info[3]->IsUndefined()) {
    srcLength = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcLength = 0u;
  }

  impl->uniform2uiv(location, v, srcOffset, srcLength);
}

static void uniform2uivMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(4, info.Length())) {
    case 2:
      if (info[1]->IsUint32Array()) {
        uniform2uiv1Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        uniform2uiv2Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniform2uiv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exceptionState)) {
          uniform2uiv2Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    case 3:
      if (info[1]->IsUint32Array()) {
        uniform2uiv1Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        uniform2uiv2Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniform2uiv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exceptionState)) {
          uniform2uiv2Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    case 4:
      if (info[1]->IsUint32Array()) {
        uniform2uiv1Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        uniform2uiv2Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniform2uiv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exceptionState)) {
          uniform2uiv2Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform2uiv");
  if (isArityError) {
    if (info.Length() < 2) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void uniform3uiv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform3uiv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  FlexibleUint32ArrayView v;
  uint32_t srcOffset;
  uint32_t srcLength;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  ToFlexibleArrayBufferView(info.GetIsolate(), info[1], v, allocateFlexibleArrayBufferViewStorage(info[1]));
  if (!v) {
    exceptionState.ThrowTypeError("parameter 2 is not of type 'Uint32Array'.");
    return;
  }

  if (!info[2]->IsUndefined()) {
    srcOffset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcOffset = 0u;
  }
  if (!info[3]->IsUndefined()) {
    srcLength = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcLength = 0u;
  }

  impl->uniform3uiv(location, v, srcOffset, srcLength);
}

static void uniform3uiv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform3uiv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  Vector<uint32_t> v;
  uint32_t srcOffset;
  uint32_t srcLength;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  v = NativeValueTraits<IDLSequence<IDLUnsignedLong>>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  if (!info[2]->IsUndefined()) {
    srcOffset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcOffset = 0u;
  }
  if (!info[3]->IsUndefined()) {
    srcLength = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcLength = 0u;
  }

  impl->uniform3uiv(location, v, srcOffset, srcLength);
}

static void uniform3uivMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(4, info.Length())) {
    case 2:
      if (info[1]->IsUint32Array()) {
        uniform3uiv1Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        uniform3uiv2Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniform3uiv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exceptionState)) {
          uniform3uiv2Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    case 3:
      if (info[1]->IsUint32Array()) {
        uniform3uiv1Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        uniform3uiv2Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniform3uiv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exceptionState)) {
          uniform3uiv2Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    case 4:
      if (info[1]->IsUint32Array()) {
        uniform3uiv1Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        uniform3uiv2Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniform3uiv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exceptionState)) {
          uniform3uiv2Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform3uiv");
  if (isArityError) {
    if (info.Length() < 2) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void uniform4uiv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform4uiv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  FlexibleUint32ArrayView v;
  uint32_t srcOffset;
  uint32_t srcLength;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  ToFlexibleArrayBufferView(info.GetIsolate(), info[1], v, allocateFlexibleArrayBufferViewStorage(info[1]));
  if (!v) {
    exceptionState.ThrowTypeError("parameter 2 is not of type 'Uint32Array'.");
    return;
  }

  if (!info[2]->IsUndefined()) {
    srcOffset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcOffset = 0u;
  }
  if (!info[3]->IsUndefined()) {
    srcLength = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcLength = 0u;
  }

  impl->uniform4uiv(location, v, srcOffset, srcLength);
}

static void uniform4uiv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform4uiv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  Vector<uint32_t> v;
  uint32_t srcOffset;
  uint32_t srcLength;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  v = NativeValueTraits<IDLSequence<IDLUnsignedLong>>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  if (!info[2]->IsUndefined()) {
    srcOffset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcOffset = 0u;
  }
  if (!info[3]->IsUndefined()) {
    srcLength = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcLength = 0u;
  }

  impl->uniform4uiv(location, v, srcOffset, srcLength);
}

static void uniform4uivMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(4, info.Length())) {
    case 2:
      if (info[1]->IsUint32Array()) {
        uniform4uiv1Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        uniform4uiv2Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniform4uiv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exceptionState)) {
          uniform4uiv2Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    case 3:
      if (info[1]->IsUint32Array()) {
        uniform4uiv1Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        uniform4uiv2Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniform4uiv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exceptionState)) {
          uniform4uiv2Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    case 4:
      if (info[1]->IsUint32Array()) {
        uniform4uiv1Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        uniform4uiv2Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniform4uiv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exceptionState)) {
          uniform4uiv2Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform4uiv");
  if (isArityError) {
    if (info.Length() < 2) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void uniformMatrix2fv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniformMatrix2fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  bool transpose;
  MaybeShared<DOMFloat32Array> array;
  uint32_t srcOffset;
  uint32_t srcLength;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  transpose = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  array = ToMaybeShared<MaybeShared<DOMFloat32Array>>(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;
  if (!array) {
    exceptionState.ThrowTypeError("parameter 3 is not of type 'Float32Array'.");
    return;
  }

  srcOffset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  if (!info[4]->IsUndefined()) {
    srcLength = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcLength = 0u;
  }

  impl->uniformMatrix2fv(location, transpose, array, srcOffset, srcLength);
}

static void uniformMatrix2fv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniformMatrix2fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  bool transpose;
  Vector<float> array;
  uint32_t srcOffset;
  uint32_t srcLength;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  transpose = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  array = NativeValueTraits<IDLSequence<IDLUnrestrictedFloat>>::NativeValue(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;

  srcOffset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  if (!info[4]->IsUndefined()) {
    srcLength = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcLength = 0u;
  }

  impl->uniformMatrix2fv(location, transpose, array, srcOffset, srcLength);
}

static void uniformMatrix3fv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniformMatrix3fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  bool transpose;
  MaybeShared<DOMFloat32Array> array;
  uint32_t srcOffset;
  uint32_t srcLength;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  transpose = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  array = ToMaybeShared<MaybeShared<DOMFloat32Array>>(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;
  if (!array) {
    exceptionState.ThrowTypeError("parameter 3 is not of type 'Float32Array'.");
    return;
  }

  srcOffset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  if (!info[4]->IsUndefined()) {
    srcLength = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcLength = 0u;
  }

  impl->uniformMatrix3fv(location, transpose, array, srcOffset, srcLength);
}

static void uniformMatrix3fv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniformMatrix3fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  bool transpose;
  Vector<float> array;
  uint32_t srcOffset;
  uint32_t srcLength;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  transpose = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  array = NativeValueTraits<IDLSequence<IDLUnrestrictedFloat>>::NativeValue(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;

  srcOffset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  if (!info[4]->IsUndefined()) {
    srcLength = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcLength = 0u;
  }

  impl->uniformMatrix3fv(location, transpose, array, srcOffset, srcLength);
}

static void uniformMatrix4fv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniformMatrix4fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  bool transpose;
  MaybeShared<DOMFloat32Array> array;
  uint32_t srcOffset;
  uint32_t srcLength;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  transpose = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  array = ToMaybeShared<MaybeShared<DOMFloat32Array>>(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;
  if (!array) {
    exceptionState.ThrowTypeError("parameter 3 is not of type 'Float32Array'.");
    return;
  }

  srcOffset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  if (!info[4]->IsUndefined()) {
    srcLength = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcLength = 0u;
  }

  impl->uniformMatrix4fv(location, transpose, array, srcOffset, srcLength);
}

static void uniformMatrix4fv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniformMatrix4fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  bool transpose;
  Vector<float> array;
  uint32_t srcOffset;
  uint32_t srcLength;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  transpose = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  array = NativeValueTraits<IDLSequence<IDLUnrestrictedFloat>>::NativeValue(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;

  srcOffset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  if (!info[4]->IsUndefined()) {
    srcLength = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcLength = 0u;
  }

  impl->uniformMatrix4fv(location, transpose, array, srcOffset, srcLength);
}

static void uniformMatrix2x3fv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniformMatrix2x3fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  bool transpose;
  MaybeShared<DOMFloat32Array> value;
  uint32_t srcOffset;
  uint32_t srcLength;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  transpose = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  value = ToMaybeShared<MaybeShared<DOMFloat32Array>>(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;
  if (!value) {
    exceptionState.ThrowTypeError("parameter 3 is not of type 'Float32Array'.");
    return;
  }

  if (!info[3]->IsUndefined()) {
    srcOffset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcOffset = 0u;
  }
  if (!info[4]->IsUndefined()) {
    srcLength = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcLength = 0u;
  }

  impl->uniformMatrix2x3fv(location, transpose, value, srcOffset, srcLength);
}

static void uniformMatrix2x3fv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniformMatrix2x3fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  bool transpose;
  Vector<float> value;
  uint32_t srcOffset;
  uint32_t srcLength;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  transpose = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  value = NativeValueTraits<IDLSequence<IDLUnrestrictedFloat>>::NativeValue(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;

  if (!info[3]->IsUndefined()) {
    srcOffset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcOffset = 0u;
  }
  if (!info[4]->IsUndefined()) {
    srcLength = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcLength = 0u;
  }

  impl->uniformMatrix2x3fv(location, transpose, value, srcOffset, srcLength);
}

static void uniformMatrix2x3fvMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(5, info.Length())) {
    case 3:
      if (info[2]->IsFloat32Array()) {
        uniformMatrix2x3fv1Method(info);
        return;
      }
      if (info[2]->IsArray()) {
        uniformMatrix2x3fv2Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniformMatrix2x3fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[2], exceptionState)) {
          uniformMatrix2x3fv2Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    case 4:
      if (info[2]->IsFloat32Array()) {
        uniformMatrix2x3fv1Method(info);
        return;
      }
      if (info[2]->IsArray()) {
        uniformMatrix2x3fv2Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniformMatrix2x3fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[2], exceptionState)) {
          uniformMatrix2x3fv2Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    case 5:
      if (info[2]->IsFloat32Array()) {
        uniformMatrix2x3fv1Method(info);
        return;
      }
      if (info[2]->IsArray()) {
        uniformMatrix2x3fv2Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniformMatrix2x3fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[2], exceptionState)) {
          uniformMatrix2x3fv2Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniformMatrix2x3fv");
  if (isArityError) {
    if (info.Length() < 3) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void uniformMatrix3x2fv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniformMatrix3x2fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  bool transpose;
  MaybeShared<DOMFloat32Array> value;
  uint32_t srcOffset;
  uint32_t srcLength;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  transpose = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  value = ToMaybeShared<MaybeShared<DOMFloat32Array>>(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;
  if (!value) {
    exceptionState.ThrowTypeError("parameter 3 is not of type 'Float32Array'.");
    return;
  }

  if (!info[3]->IsUndefined()) {
    srcOffset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcOffset = 0u;
  }
  if (!info[4]->IsUndefined()) {
    srcLength = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcLength = 0u;
  }

  impl->uniformMatrix3x2fv(location, transpose, value, srcOffset, srcLength);
}

static void uniformMatrix3x2fv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniformMatrix3x2fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  bool transpose;
  Vector<float> value;
  uint32_t srcOffset;
  uint32_t srcLength;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  transpose = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  value = NativeValueTraits<IDLSequence<IDLUnrestrictedFloat>>::NativeValue(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;

  if (!info[3]->IsUndefined()) {
    srcOffset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcOffset = 0u;
  }
  if (!info[4]->IsUndefined()) {
    srcLength = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcLength = 0u;
  }

  impl->uniformMatrix3x2fv(location, transpose, value, srcOffset, srcLength);
}

static void uniformMatrix3x2fvMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(5, info.Length())) {
    case 3:
      if (info[2]->IsFloat32Array()) {
        uniformMatrix3x2fv1Method(info);
        return;
      }
      if (info[2]->IsArray()) {
        uniformMatrix3x2fv2Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniformMatrix3x2fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[2], exceptionState)) {
          uniformMatrix3x2fv2Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    case 4:
      if (info[2]->IsFloat32Array()) {
        uniformMatrix3x2fv1Method(info);
        return;
      }
      if (info[2]->IsArray()) {
        uniformMatrix3x2fv2Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniformMatrix3x2fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[2], exceptionState)) {
          uniformMatrix3x2fv2Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    case 5:
      if (info[2]->IsFloat32Array()) {
        uniformMatrix3x2fv1Method(info);
        return;
      }
      if (info[2]->IsArray()) {
        uniformMatrix3x2fv2Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniformMatrix3x2fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[2], exceptionState)) {
          uniformMatrix3x2fv2Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniformMatrix3x2fv");
  if (isArityError) {
    if (info.Length() < 3) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void uniformMatrix2x4fv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniformMatrix2x4fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  bool transpose;
  MaybeShared<DOMFloat32Array> value;
  uint32_t srcOffset;
  uint32_t srcLength;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  transpose = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  value = ToMaybeShared<MaybeShared<DOMFloat32Array>>(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;
  if (!value) {
    exceptionState.ThrowTypeError("parameter 3 is not of type 'Float32Array'.");
    return;
  }

  if (!info[3]->IsUndefined()) {
    srcOffset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcOffset = 0u;
  }
  if (!info[4]->IsUndefined()) {
    srcLength = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcLength = 0u;
  }

  impl->uniformMatrix2x4fv(location, transpose, value, srcOffset, srcLength);
}

static void uniformMatrix2x4fv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniformMatrix2x4fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  bool transpose;
  Vector<float> value;
  uint32_t srcOffset;
  uint32_t srcLength;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  transpose = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  value = NativeValueTraits<IDLSequence<IDLUnrestrictedFloat>>::NativeValue(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;

  if (!info[3]->IsUndefined()) {
    srcOffset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcOffset = 0u;
  }
  if (!info[4]->IsUndefined()) {
    srcLength = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcLength = 0u;
  }

  impl->uniformMatrix2x4fv(location, transpose, value, srcOffset, srcLength);
}

static void uniformMatrix2x4fvMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(5, info.Length())) {
    case 3:
      if (info[2]->IsFloat32Array()) {
        uniformMatrix2x4fv1Method(info);
        return;
      }
      if (info[2]->IsArray()) {
        uniformMatrix2x4fv2Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniformMatrix2x4fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[2], exceptionState)) {
          uniformMatrix2x4fv2Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    case 4:
      if (info[2]->IsFloat32Array()) {
        uniformMatrix2x4fv1Method(info);
        return;
      }
      if (info[2]->IsArray()) {
        uniformMatrix2x4fv2Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniformMatrix2x4fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[2], exceptionState)) {
          uniformMatrix2x4fv2Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    case 5:
      if (info[2]->IsFloat32Array()) {
        uniformMatrix2x4fv1Method(info);
        return;
      }
      if (info[2]->IsArray()) {
        uniformMatrix2x4fv2Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniformMatrix2x4fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[2], exceptionState)) {
          uniformMatrix2x4fv2Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniformMatrix2x4fv");
  if (isArityError) {
    if (info.Length() < 3) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void uniformMatrix4x2fv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniformMatrix4x2fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  bool transpose;
  MaybeShared<DOMFloat32Array> value;
  uint32_t srcOffset;
  uint32_t srcLength;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  transpose = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  value = ToMaybeShared<MaybeShared<DOMFloat32Array>>(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;
  if (!value) {
    exceptionState.ThrowTypeError("parameter 3 is not of type 'Float32Array'.");
    return;
  }

  if (!info[3]->IsUndefined()) {
    srcOffset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcOffset = 0u;
  }
  if (!info[4]->IsUndefined()) {
    srcLength = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcLength = 0u;
  }

  impl->uniformMatrix4x2fv(location, transpose, value, srcOffset, srcLength);
}

static void uniformMatrix4x2fv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniformMatrix4x2fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  bool transpose;
  Vector<float> value;
  uint32_t srcOffset;
  uint32_t srcLength;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  transpose = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  value = NativeValueTraits<IDLSequence<IDLUnrestrictedFloat>>::NativeValue(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;

  if (!info[3]->IsUndefined()) {
    srcOffset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcOffset = 0u;
  }
  if (!info[4]->IsUndefined()) {
    srcLength = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcLength = 0u;
  }

  impl->uniformMatrix4x2fv(location, transpose, value, srcOffset, srcLength);
}

static void uniformMatrix4x2fvMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(5, info.Length())) {
    case 3:
      if (info[2]->IsFloat32Array()) {
        uniformMatrix4x2fv1Method(info);
        return;
      }
      if (info[2]->IsArray()) {
        uniformMatrix4x2fv2Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniformMatrix4x2fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[2], exceptionState)) {
          uniformMatrix4x2fv2Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    case 4:
      if (info[2]->IsFloat32Array()) {
        uniformMatrix4x2fv1Method(info);
        return;
      }
      if (info[2]->IsArray()) {
        uniformMatrix4x2fv2Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniformMatrix4x2fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[2], exceptionState)) {
          uniformMatrix4x2fv2Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    case 5:
      if (info[2]->IsFloat32Array()) {
        uniformMatrix4x2fv1Method(info);
        return;
      }
      if (info[2]->IsArray()) {
        uniformMatrix4x2fv2Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniformMatrix4x2fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[2], exceptionState)) {
          uniformMatrix4x2fv2Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniformMatrix4x2fv");
  if (isArityError) {
    if (info.Length() < 3) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void uniformMatrix3x4fv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniformMatrix3x4fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  bool transpose;
  MaybeShared<DOMFloat32Array> value;
  uint32_t srcOffset;
  uint32_t srcLength;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  transpose = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  value = ToMaybeShared<MaybeShared<DOMFloat32Array>>(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;
  if (!value) {
    exceptionState.ThrowTypeError("parameter 3 is not of type 'Float32Array'.");
    return;
  }

  if (!info[3]->IsUndefined()) {
    srcOffset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcOffset = 0u;
  }
  if (!info[4]->IsUndefined()) {
    srcLength = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcLength = 0u;
  }

  impl->uniformMatrix3x4fv(location, transpose, value, srcOffset, srcLength);
}

static void uniformMatrix3x4fv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniformMatrix3x4fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  bool transpose;
  Vector<float> value;
  uint32_t srcOffset;
  uint32_t srcLength;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  transpose = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  value = NativeValueTraits<IDLSequence<IDLUnrestrictedFloat>>::NativeValue(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;

  if (!info[3]->IsUndefined()) {
    srcOffset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcOffset = 0u;
  }
  if (!info[4]->IsUndefined()) {
    srcLength = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcLength = 0u;
  }

  impl->uniformMatrix3x4fv(location, transpose, value, srcOffset, srcLength);
}

static void uniformMatrix3x4fvMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(5, info.Length())) {
    case 3:
      if (info[2]->IsFloat32Array()) {
        uniformMatrix3x4fv1Method(info);
        return;
      }
      if (info[2]->IsArray()) {
        uniformMatrix3x4fv2Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniformMatrix3x4fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[2], exceptionState)) {
          uniformMatrix3x4fv2Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    case 4:
      if (info[2]->IsFloat32Array()) {
        uniformMatrix3x4fv1Method(info);
        return;
      }
      if (info[2]->IsArray()) {
        uniformMatrix3x4fv2Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniformMatrix3x4fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[2], exceptionState)) {
          uniformMatrix3x4fv2Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    case 5:
      if (info[2]->IsFloat32Array()) {
        uniformMatrix3x4fv1Method(info);
        return;
      }
      if (info[2]->IsArray()) {
        uniformMatrix3x4fv2Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniformMatrix3x4fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[2], exceptionState)) {
          uniformMatrix3x4fv2Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniformMatrix3x4fv");
  if (isArityError) {
    if (info.Length() < 3) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void uniformMatrix4x3fv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniformMatrix4x3fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  bool transpose;
  MaybeShared<DOMFloat32Array> value;
  uint32_t srcOffset;
  uint32_t srcLength;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  transpose = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  value = ToMaybeShared<MaybeShared<DOMFloat32Array>>(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;
  if (!value) {
    exceptionState.ThrowTypeError("parameter 3 is not of type 'Float32Array'.");
    return;
  }

  if (!info[3]->IsUndefined()) {
    srcOffset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcOffset = 0u;
  }
  if (!info[4]->IsUndefined()) {
    srcLength = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcLength = 0u;
  }

  impl->uniformMatrix4x3fv(location, transpose, value, srcOffset, srcLength);
}

static void uniformMatrix4x3fv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniformMatrix4x3fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  bool transpose;
  Vector<float> value;
  uint32_t srcOffset;
  uint32_t srcLength;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  transpose = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  value = NativeValueTraits<IDLSequence<IDLUnrestrictedFloat>>::NativeValue(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;

  if (!info[3]->IsUndefined()) {
    srcOffset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcOffset = 0u;
  }
  if (!info[4]->IsUndefined()) {
    srcLength = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcLength = 0u;
  }

  impl->uniformMatrix4x3fv(location, transpose, value, srcOffset, srcLength);
}

static void uniformMatrix4x3fvMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(5, info.Length())) {
    case 3:
      if (info[2]->IsFloat32Array()) {
        uniformMatrix4x3fv1Method(info);
        return;
      }
      if (info[2]->IsArray()) {
        uniformMatrix4x3fv2Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniformMatrix4x3fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[2], exceptionState)) {
          uniformMatrix4x3fv2Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    case 4:
      if (info[2]->IsFloat32Array()) {
        uniformMatrix4x3fv1Method(info);
        return;
      }
      if (info[2]->IsArray()) {
        uniformMatrix4x3fv2Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniformMatrix4x3fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[2], exceptionState)) {
          uniformMatrix4x3fv2Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    case 5:
      if (info[2]->IsFloat32Array()) {
        uniformMatrix4x3fv1Method(info);
        return;
      }
      if (info[2]->IsArray()) {
        uniformMatrix4x3fv2Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniformMatrix4x3fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[2], exceptionState)) {
          uniformMatrix4x3fv2Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniformMatrix4x3fv");
  if (isArityError) {
    if (info.Length() < 3) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void vertexAttribI4iMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "vertexAttribI4i");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 5)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(5, info.Length()));
    return;
  }

  uint32_t index;
  int32_t x;
  int32_t y;
  int32_t z;
  int32_t w;
  index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  x = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  y = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  z = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  w = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->vertexAttribI4i(index, x, y, z, w);
}

static void vertexAttribI4iv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "vertexAttribI4iv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t index;
  MaybeShared<DOMInt32Array> v;
  index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  v = ToMaybeShared<MaybeShared<DOMInt32Array>>(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;
  if (!v) {
    exceptionState.ThrowTypeError("parameter 2 is not of type 'Int32Array'.");
    return;
  }

  impl->vertexAttribI4iv(index, v);
}

static void vertexAttribI4iv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "vertexAttribI4iv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t index;
  Vector<int32_t> v;
  index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  v = NativeValueTraits<IDLSequence<IDLLong>>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->vertexAttribI4iv(index, v);
}

static void vertexAttribI4ivMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(2, info.Length())) {
    case 2:
      if (info[1]->IsInt32Array()) {
        vertexAttribI4iv1Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        vertexAttribI4iv2Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "vertexAttribI4iv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exceptionState)) {
          vertexAttribI4iv2Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "vertexAttribI4iv");
  if (isArityError) {
    if (info.Length() < 2) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void vertexAttribI4uiMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "vertexAttribI4ui");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 5)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(5, info.Length()));
    return;
  }

  uint32_t index;
  uint32_t x;
  uint32_t y;
  uint32_t z;
  uint32_t w;
  index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  x = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  y = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  z = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  w = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->vertexAttribI4ui(index, x, y, z, w);
}

static void vertexAttribI4uiv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "vertexAttribI4uiv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t index;
  MaybeShared<DOMUint32Array> v;
  index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  v = ToMaybeShared<MaybeShared<DOMUint32Array>>(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;
  if (!v) {
    exceptionState.ThrowTypeError("parameter 2 is not of type 'Uint32Array'.");
    return;
  }

  impl->vertexAttribI4uiv(index, v);
}

static void vertexAttribI4uiv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "vertexAttribI4uiv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t index;
  Vector<uint32_t> v;
  index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  v = NativeValueTraits<IDLSequence<IDLUnsignedLong>>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->vertexAttribI4uiv(index, v);
}

static void vertexAttribI4uivMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(2, info.Length())) {
    case 2:
      if (info[1]->IsUint32Array()) {
        vertexAttribI4uiv1Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        vertexAttribI4uiv2Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "vertexAttribI4uiv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exceptionState)) {
          vertexAttribI4uiv2Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "vertexAttribI4uiv");
  if (isArityError) {
    if (info.Length() < 2) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void vertexAttribIPointerMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "vertexAttribIPointer");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 5)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(5, info.Length()));
    return;
  }

  uint32_t index;
  int32_t size;
  uint32_t type;
  int32_t stride;
  int64_t offset;
  index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  size = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  stride = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  offset = NativeValueTraits<IDLLongLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->vertexAttribIPointer(index, size, type, stride, offset);
}

static void vertexAttribDivisorMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "vertexAttribDivisor");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  uint32_t index;
  uint32_t divisor;
  index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  divisor = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->vertexAttribDivisor(index, divisor);
}

static void drawArraysInstancedMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "drawArraysInstanced");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 4)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(4, info.Length()));
    return;
  }

  uint32_t mode;
  int32_t first;
  int32_t count;
  int32_t instanceCount;
  mode = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  first = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  count = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  instanceCount = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->drawArraysInstanced(mode, first, count, instanceCount);
}

static void drawElementsInstancedMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "drawElementsInstanced");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 5)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(5, info.Length()));
    return;
  }

  uint32_t mode;
  int32_t count;
  uint32_t type;
  int64_t offset;
  int32_t instanceCount;
  mode = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  count = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  offset = NativeValueTraits<IDLLongLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  instanceCount = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->drawElementsInstanced(mode, count, type, offset, instanceCount);
}

static void drawRangeElementsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "drawRangeElements");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 6)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(6, info.Length()));
    return;
  }

  uint32_t mode;
  uint32_t start;
  uint32_t end;
  int32_t count;
  uint32_t type;
  int64_t offset;
  mode = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  start = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  end = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  count = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  offset = NativeValueTraits<IDLLongLong>::NativeValue(info.GetIsolate(), info[5], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->drawRangeElements(mode, start, end, count, type, offset);
}

static void drawBuffersMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "drawBuffers");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Vector<uint32_t> buffers;
  buffers = NativeValueTraits<IDLSequence<IDLUnsignedLong>>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->drawBuffers(buffers);
}

static void clearBufferiv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "clearBufferiv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t buffer;
  int32_t drawbuffer;
  MaybeShared<DOMInt32Array> value;
  uint32_t srcOffset;
  buffer = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  drawbuffer = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  value = ToMaybeShared<MaybeShared<DOMInt32Array>>(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;
  if (!value) {
    exceptionState.ThrowTypeError("parameter 3 is not of type 'Int32Array'.");
    return;
  }

  if (!info[3]->IsUndefined()) {
    srcOffset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcOffset = 0u;
  }

  impl->clearBufferiv(buffer, drawbuffer, value, srcOffset);
}

static void clearBufferiv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "clearBufferiv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t buffer;
  int32_t drawbuffer;
  Vector<int32_t> value;
  uint32_t srcOffset;
  buffer = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  drawbuffer = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  value = NativeValueTraits<IDLSequence<IDLLong>>::NativeValue(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;

  if (!info[3]->IsUndefined()) {
    srcOffset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcOffset = 0u;
  }

  impl->clearBufferiv(buffer, drawbuffer, value, srcOffset);
}

static void clearBufferivMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(4, info.Length())) {
    case 3:
      if (info[2]->IsInt32Array()) {
        clearBufferiv1Method(info);
        return;
      }
      if (info[2]->IsArray()) {
        clearBufferiv2Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "clearBufferiv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[2], exceptionState)) {
          clearBufferiv2Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    case 4:
      if (info[2]->IsInt32Array()) {
        clearBufferiv1Method(info);
        return;
      }
      if (info[2]->IsArray()) {
        clearBufferiv2Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "clearBufferiv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[2], exceptionState)) {
          clearBufferiv2Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "clearBufferiv");
  if (isArityError) {
    if (info.Length() < 3) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void clearBufferuiv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "clearBufferuiv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t buffer;
  int32_t drawbuffer;
  MaybeShared<DOMUint32Array> value;
  uint32_t srcOffset;
  buffer = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  drawbuffer = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  value = ToMaybeShared<MaybeShared<DOMUint32Array>>(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;
  if (!value) {
    exceptionState.ThrowTypeError("parameter 3 is not of type 'Uint32Array'.");
    return;
  }

  if (!info[3]->IsUndefined()) {
    srcOffset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcOffset = 0u;
  }

  impl->clearBufferuiv(buffer, drawbuffer, value, srcOffset);
}

static void clearBufferuiv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "clearBufferuiv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t buffer;
  int32_t drawbuffer;
  Vector<uint32_t> value;
  uint32_t srcOffset;
  buffer = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  drawbuffer = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  value = NativeValueTraits<IDLSequence<IDLUnsignedLong>>::NativeValue(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;

  if (!info[3]->IsUndefined()) {
    srcOffset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcOffset = 0u;
  }

  impl->clearBufferuiv(buffer, drawbuffer, value, srcOffset);
}

static void clearBufferuivMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(4, info.Length())) {
    case 3:
      if (info[2]->IsUint32Array()) {
        clearBufferuiv1Method(info);
        return;
      }
      if (info[2]->IsArray()) {
        clearBufferuiv2Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "clearBufferuiv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[2], exceptionState)) {
          clearBufferuiv2Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    case 4:
      if (info[2]->IsUint32Array()) {
        clearBufferuiv1Method(info);
        return;
      }
      if (info[2]->IsArray()) {
        clearBufferuiv2Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "clearBufferuiv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[2], exceptionState)) {
          clearBufferuiv2Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "clearBufferuiv");
  if (isArityError) {
    if (info.Length() < 3) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void clearBufferfv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "clearBufferfv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t buffer;
  int32_t drawbuffer;
  MaybeShared<DOMFloat32Array> value;
  uint32_t srcOffset;
  buffer = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  drawbuffer = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  value = ToMaybeShared<MaybeShared<DOMFloat32Array>>(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;
  if (!value) {
    exceptionState.ThrowTypeError("parameter 3 is not of type 'Float32Array'.");
    return;
  }

  if (!info[3]->IsUndefined()) {
    srcOffset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcOffset = 0u;
  }

  impl->clearBufferfv(buffer, drawbuffer, value, srcOffset);
}

static void clearBufferfv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "clearBufferfv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t buffer;
  int32_t drawbuffer;
  Vector<float> value;
  uint32_t srcOffset;
  buffer = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  drawbuffer = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  value = NativeValueTraits<IDLSequence<IDLUnrestrictedFloat>>::NativeValue(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;

  if (!info[3]->IsUndefined()) {
    srcOffset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    srcOffset = 0u;
  }

  impl->clearBufferfv(buffer, drawbuffer, value, srcOffset);
}

static void clearBufferfvMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(4, info.Length())) {
    case 3:
      if (info[2]->IsFloat32Array()) {
        clearBufferfv1Method(info);
        return;
      }
      if (info[2]->IsArray()) {
        clearBufferfv2Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "clearBufferfv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[2], exceptionState)) {
          clearBufferfv2Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    case 4:
      if (info[2]->IsFloat32Array()) {
        clearBufferfv1Method(info);
        return;
      }
      if (info[2]->IsArray()) {
        clearBufferfv2Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "clearBufferfv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[2], exceptionState)) {
          clearBufferfv2Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "clearBufferfv");
  if (isArityError) {
    if (info.Length() < 3) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void clearBufferfiMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "clearBufferfi");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 4)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(4, info.Length()));
    return;
  }

  uint32_t buffer;
  int32_t drawbuffer;
  float depth;
  int32_t stencil;
  buffer = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  drawbuffer = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  depth = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;

  stencil = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->clearBufferfi(buffer, drawbuffer, depth, stencil);
}

static void createQueryMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->createQuery());
}

static void deleteQueryMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteQuery", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLQuery* query;
  query = V8WebGLQuery::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!query && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteQuery", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLQuery'."));
    return;
  }

  impl->deleteQuery(query);
}

static void isQueryMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isQuery", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLQuery* query;
  query = V8WebGLQuery::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!query && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isQuery", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLQuery'."));
    return;
  }

  V8SetReturnValueBool(info, impl->isQuery(query));
}

static void beginQueryMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "beginQuery");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  uint32_t target;
  WebGLQuery* query;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  query = V8WebGLQuery::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!query) {
    exceptionState.ThrowTypeError("parameter 2 is not of type 'WebGLQuery'.");
    return;
  }

  impl->beginQuery(target, query);
}

static void endQueryMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "endQuery");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t target;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->endQuery(target);
}

static void getQueryMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "getQuery");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  uint32_t target;
  uint32_t pname;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  pname = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  ScriptValue result = impl->getQuery(scriptState, target, pname);
  V8SetReturnValue(info, result.V8Value());
}

static void getQueryParameterMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "getQueryParameter");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  WebGLQuery* query;
  uint32_t pname;
  query = V8WebGLQuery::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!query) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLQuery'.");
    return;
  }

  pname = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  ScriptValue result = impl->getQueryParameter(scriptState, query, pname);
  V8SetReturnValue(info, result.V8Value());
}

static void createSamplerMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->createSampler());
}

static void deleteSamplerMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteSampler", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLSampler* sampler;
  sampler = V8WebGLSampler::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!sampler && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteSampler", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLSampler'."));
    return;
  }

  impl->deleteSampler(sampler);
}

static void isSamplerMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isSampler", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLSampler* sampler;
  sampler = V8WebGLSampler::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!sampler && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isSampler", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLSampler'."));
    return;
  }

  V8SetReturnValueBool(info, impl->isSampler(sampler));
}

static void bindSamplerMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "bindSampler");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  uint32_t unit;
  WebGLSampler* sampler;
  unit = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  sampler = V8WebGLSampler::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!sampler && !IsUndefinedOrNull(info[1])) {
    exceptionState.ThrowTypeError("parameter 2 is not of type 'WebGLSampler'.");
    return;
  }

  impl->bindSampler(unit, sampler);
}

static void samplerParameteriMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "samplerParameteri");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  WebGLSampler* sampler;
  uint32_t pname;
  int32_t param;
  sampler = V8WebGLSampler::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!sampler) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLSampler'.");
    return;
  }

  pname = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  param = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->samplerParameteri(sampler, pname, param);
}

static void samplerParameterfMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "samplerParameterf");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  WebGLSampler* sampler;
  uint32_t pname;
  float param;
  sampler = V8WebGLSampler::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!sampler) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLSampler'.");
    return;
  }

  pname = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  param = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->samplerParameterf(sampler, pname, param);
}

static void getSamplerParameterMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "getSamplerParameter");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  WebGLSampler* sampler;
  uint32_t pname;
  sampler = V8WebGLSampler::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!sampler) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLSampler'.");
    return;
  }

  pname = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  ScriptValue result = impl->getSamplerParameter(scriptState, sampler, pname);
  V8SetReturnValue(info, result.V8Value());
}

static void fenceSyncMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "fenceSync");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  uint32_t condition;
  uint32_t flags;
  condition = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  flags = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  V8SetReturnValue(info, impl->fenceSync(condition, flags));
}

static void isSyncMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isSync", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLSync* sync;
  sync = V8WebGLSync::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!sync && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isSync", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLSync'."));
    return;
  }

  V8SetReturnValueBool(info, impl->isSync(sync));
}

static void deleteSyncMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteSync", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLSync* sync;
  sync = V8WebGLSync::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!sync && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteSync", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLSync'."));
    return;
  }

  impl->deleteSync(sync);
}

static void clientWaitSyncMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "clientWaitSync");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  WebGLSync* sync;
  uint32_t flags;
  uint64_t timeout;
  sync = V8WebGLSync::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!sync) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLSync'.");
    return;
  }

  flags = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  timeout = NativeValueTraits<IDLUnsignedLongLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  V8SetReturnValueUnsigned(info, impl->clientWaitSync(sync, flags, timeout));
}

static void waitSyncMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "waitSync");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  WebGLSync* sync;
  uint32_t flags;
  int64_t timeout;
  sync = V8WebGLSync::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!sync) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLSync'.");
    return;
  }

  flags = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  timeout = NativeValueTraits<IDLLongLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->waitSync(sync, flags, timeout);
}

static void getSyncParameterMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "getSyncParameter");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  WebGLSync* sync;
  uint32_t pname;
  sync = V8WebGLSync::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!sync) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLSync'.");
    return;
  }

  pname = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  ScriptValue result = impl->getSyncParameter(scriptState, sync, pname);
  V8SetReturnValue(info, result.V8Value());
}

static void createTransformFeedbackMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->createTransformFeedback());
}

static void deleteTransformFeedbackMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteTransformFeedback", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLTransformFeedback* feedback;
  feedback = V8WebGLTransformFeedback::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!feedback && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteTransformFeedback", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLTransformFeedback'."));
    return;
  }

  impl->deleteTransformFeedback(feedback);
}

static void isTransformFeedbackMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isTransformFeedback", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLTransformFeedback* feedback;
  feedback = V8WebGLTransformFeedback::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!feedback && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isTransformFeedback", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLTransformFeedback'."));
    return;
  }

  V8SetReturnValueBool(info, impl->isTransformFeedback(feedback));
}

static void bindTransformFeedbackMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "bindTransformFeedback");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  uint32_t target;
  WebGLTransformFeedback* feedback;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  feedback = V8WebGLTransformFeedback::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!feedback && !IsUndefinedOrNull(info[1])) {
    exceptionState.ThrowTypeError("parameter 2 is not of type 'WebGLTransformFeedback'.");
    return;
  }

  impl->bindTransformFeedback(target, feedback);
}

static void beginTransformFeedbackMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "beginTransformFeedback");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t primitiveMode;
  primitiveMode = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->beginTransformFeedback(primitiveMode);
}

static void endTransformFeedbackMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  impl->endTransformFeedback();
}

static void transformFeedbackVaryingsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "transformFeedbackVaryings");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  WebGLProgram* program;
  Vector<String> varyings;
  uint32_t bufferMode;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLProgram'.");
    return;
  }

  varyings = NativeValueTraits<IDLSequence<IDLString>>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  bufferMode = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->transformFeedbackVaryings(program, varyings, bufferMode);
}

static void getTransformFeedbackVaryingMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "getTransformFeedbackVarying");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  WebGLProgram* program;
  uint32_t index;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLProgram'.");
    return;
  }

  index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  V8SetReturnValue(info, impl->getTransformFeedbackVarying(program, index));
}

static void pauseTransformFeedbackMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  impl->pauseTransformFeedback();
}

static void resumeTransformFeedbackMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  impl->resumeTransformFeedback();
}

static void bindBufferBaseMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "bindBufferBase");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  uint32_t target;
  uint32_t index;
  WebGLBuffer* buffer;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  buffer = V8WebGLBuffer::ToImplWithTypeCheck(info.GetIsolate(), info[2]);
  if (!buffer && !IsUndefinedOrNull(info[2])) {
    exceptionState.ThrowTypeError("parameter 3 is not of type 'WebGLBuffer'.");
    return;
  }

  impl->bindBufferBase(target, index, buffer);
}

static void bindBufferRangeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "bindBufferRange");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 5)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(5, info.Length()));
    return;
  }

  uint32_t target;
  uint32_t index;
  WebGLBuffer* buffer;
  int64_t offset;
  int64_t size;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  buffer = V8WebGLBuffer::ToImplWithTypeCheck(info.GetIsolate(), info[2]);
  if (!buffer && !IsUndefinedOrNull(info[2])) {
    exceptionState.ThrowTypeError("parameter 3 is not of type 'WebGLBuffer'.");
    return;
  }

  offset = NativeValueTraits<IDLLongLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  size = NativeValueTraits<IDLLongLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->bindBufferRange(target, index, buffer, offset, size);
}

static void getIndexedParameterMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "getIndexedParameter");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  uint32_t target;
  uint32_t index;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  ScriptValue result = impl->getIndexedParameter(scriptState, target, index);
  V8SetReturnValue(info, result.V8Value());
}

static void getUniformIndicesMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "getUniformIndices");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  WebGLProgram* program;
  Vector<String> uniformNames;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLProgram'.");
    return;
  }

  uniformNames = NativeValueTraits<IDLSequence<IDLString>>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  base::Optional<Vector<uint32_t>> result = impl->getUniformIndices(program, uniformNames);
  if (!result)
    V8SetReturnValueNull(info);
  else
    V8SetReturnValue(info, ToV8(result.value(), info.Holder(), info.GetIsolate()));
}

static void getActiveUniformsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "getActiveUniforms");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 3)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  WebGLProgram* program;
  Vector<uint32_t> uniformIndices;
  uint32_t pname;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLProgram'.");
    return;
  }

  uniformIndices = NativeValueTraits<IDLSequence<IDLUnsignedLong>>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  pname = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  ScriptValue result = impl->getActiveUniforms(scriptState, program, uniformIndices, pname);
  V8SetReturnValue(info, result.V8Value());
}

static void getUniformBlockIndexMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getUniformBlockIndex", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  WebGLProgram* program;
  V8StringResource<> uniformBlockName;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getUniformBlockIndex", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLProgram'."));
    return;
  }

  uniformBlockName = info[1];
  if (!uniformBlockName.Prepare())
    return;

  V8SetReturnValueUnsigned(info, impl->getUniformBlockIndex(program, uniformBlockName));
}

static void getActiveUniformBlockParameterMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "getActiveUniformBlockParameter");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 3)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  WebGLProgram* program;
  uint32_t uniformBlockIndex;
  uint32_t pname;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLProgram'.");
    return;
  }

  uniformBlockIndex = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  pname = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  ScriptValue result = impl->getActiveUniformBlockParameter(scriptState, program, uniformBlockIndex, pname);
  V8SetReturnValue(info, result.V8Value());
}

static void getActiveUniformBlockNameMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "getActiveUniformBlockName");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  WebGLProgram* program;
  uint32_t uniformBlockIndex;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLProgram'.");
    return;
  }

  uniformBlockIndex = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  V8SetReturnValueStringOrNull(info, impl->getActiveUniformBlockName(program, uniformBlockIndex), info.GetIsolate());
}

static void uniformBlockBindingMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniformBlockBinding");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  WebGLProgram* program;
  uint32_t uniformBlockIndex;
  uint32_t uniformBlockBinding;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLProgram'.");
    return;
  }

  uniformBlockIndex = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  uniformBlockBinding = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->uniformBlockBinding(program, uniformBlockIndex, uniformBlockBinding);
}

static void createVertexArrayMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->createVertexArray());
}

static void deleteVertexArrayMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteVertexArray", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLVertexArrayObject* vertexArray;
  vertexArray = V8WebGLVertexArrayObject::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!vertexArray && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteVertexArray", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLVertexArrayObject'."));
    return;
  }

  impl->deleteVertexArray(vertexArray);
}

static void isVertexArrayMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isVertexArray", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLVertexArrayObject* vertexArray;
  vertexArray = V8WebGLVertexArrayObject::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!vertexArray && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isVertexArray", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLVertexArrayObject'."));
    return;
  }

  V8SetReturnValueBool(info, impl->isVertexArray(vertexArray));
}

static void bindVertexArrayMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("bindVertexArray", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLVertexArrayObject* vertexArray;
  vertexArray = V8WebGLVertexArrayObject::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!vertexArray && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("bindVertexArray", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLVertexArrayObject'."));
    return;
  }

  impl->bindVertexArray(vertexArray);
}

static void readPixels1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "readPixels");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  int32_t x;
  int32_t y;
  int32_t width;
  int32_t height;
  uint32_t format;
  uint32_t type;
  MaybeShared<DOMArrayBufferView> dstData;
  int64_t offset;
  x = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  y = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[5], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  dstData = ToMaybeShared<MaybeShared<DOMArrayBufferView>>(info.GetIsolate(), info[6], exceptionState);
  if (exceptionState.HadException())
    return;
  if (!dstData) {
    exceptionState.ThrowTypeError("parameter 7 is not of type 'ArrayBufferView'.");
    return;
  }

  offset = NativeValueTraits<IDLLongLong>::NativeValue(info.GetIsolate(), info[7], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->readPixels(x, y, width, height, format, type, dstData, offset);
}

static void readPixels2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "readPixels");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  int32_t x;
  int32_t y;
  int32_t width;
  int32_t height;
  uint32_t format;
  uint32_t type;
  int64_t offset;
  x = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  y = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[5], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  offset = NativeValueTraits<IDLLongLong>::NativeValue(info.GetIsolate(), info[6], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->readPixels(x, y, width, height, format, type, offset);
}

static void activeTextureMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "activeTexture");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t texture;
  texture = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->activeTexture(texture);
}

static void attachShaderMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("attachShader", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  WebGLProgram* program;
  WebGLShader* shader;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("attachShader", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLProgram'."));
    return;
  }

  shader = V8WebGLShader::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!shader) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("attachShader", "WebGL2RenderingContext", "parameter 2 is not of type 'WebGLShader'."));
    return;
  }

  impl->attachShader(program, shader);
}

static void bindAttribLocationMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "bindAttribLocation");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  WebGLProgram* program;
  uint32_t index;
  V8StringResource<> name;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLProgram'.");
    return;
  }

  index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  name = info[2];
  if (!name.Prepare())
    return;

  impl->bindAttribLocation(program, index, name);
}

static void bindBufferMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "bindBuffer");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  uint32_t target;
  WebGLBuffer* buffer;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  buffer = V8WebGLBuffer::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!buffer && !IsUndefinedOrNull(info[1])) {
    exceptionState.ThrowTypeError("parameter 2 is not of type 'WebGLBuffer'.");
    return;
  }

  impl->bindBuffer(target, buffer);
}

static void bindFramebufferMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "bindFramebuffer");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  uint32_t target;
  WebGLFramebuffer* framebuffer;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  framebuffer = V8WebGLFramebuffer::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!framebuffer && !IsUndefinedOrNull(info[1])) {
    exceptionState.ThrowTypeError("parameter 2 is not of type 'WebGLFramebuffer'.");
    return;
  }

  impl->bindFramebuffer(target, framebuffer);
}

static void bindRenderbufferMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "bindRenderbuffer");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  uint32_t target;
  WebGLRenderbuffer* renderbuffer;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  renderbuffer = V8WebGLRenderbuffer::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!renderbuffer && !IsUndefinedOrNull(info[1])) {
    exceptionState.ThrowTypeError("parameter 2 is not of type 'WebGLRenderbuffer'.");
    return;
  }

  impl->bindRenderbuffer(target, renderbuffer);
}

static void bindTextureMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "bindTexture");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  uint32_t target;
  WebGLTexture* texture;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  texture = V8WebGLTexture::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!texture && !IsUndefinedOrNull(info[1])) {
    exceptionState.ThrowTypeError("parameter 2 is not of type 'WebGLTexture'.");
    return;
  }

  impl->bindTexture(target, texture);
}

static void blendColorMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "blendColor");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 4)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(4, info.Length()));
    return;
  }

  float red;
  float green;
  float blue;
  float alpha;
  red = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  green = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  blue = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;

  alpha = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[3], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->blendColor(red, green, blue, alpha);
}

static void blendEquationMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "blendEquation");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t mode;
  mode = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->blendEquation(mode);
}

static void blendEquationSeparateMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "blendEquationSeparate");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  uint32_t modeRGB;
  uint32_t modeAlpha;
  modeRGB = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  modeAlpha = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->blendEquationSeparate(modeRGB, modeAlpha);
}

static void blendFuncMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "blendFunc");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  uint32_t sfactor;
  uint32_t dfactor;
  sfactor = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  dfactor = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->blendFunc(sfactor, dfactor);
}

static void blendFuncSeparateMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "blendFuncSeparate");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 4)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(4, info.Length()));
    return;
  }

  uint32_t srcRGB;
  uint32_t dstRGB;
  uint32_t srcAlpha;
  uint32_t dstAlpha;
  srcRGB = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  dstRGB = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  srcAlpha = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  dstAlpha = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->blendFuncSeparate(srcRGB, dstRGB, srcAlpha, dstAlpha);
}

static void bufferData2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "bufferData");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int64_t size;
  uint32_t usage;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  size = NativeValueTraits<IDLLongLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  usage = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->bufferData(target, size, usage);
}

static void bufferData3Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "bufferData");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  MaybeShared<DOMArrayBufferView> data;
  uint32_t usage;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  data = ToMaybeShared<MaybeShared<DOMArrayBufferView>>(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;
  if (!data) {
    exceptionState.ThrowTypeError("parameter 2 is not of type 'ArrayBufferView'.");
    return;
  }

  usage = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->bufferData(target, data, usage);
}

static void bufferData4Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "bufferData");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  DOMArrayBuffer* data;
  uint32_t usage;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  data = V8ArrayBuffer::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!data && !IsUndefinedOrNull(info[1])) {
    exceptionState.ThrowTypeError("parameter 2 is not of type 'ArrayBuffer'.");
    return;
  }

  usage = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->bufferData(target, data, usage);
}

static void bufferDataMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(5, info.Length())) {
    case 3:
      if (IsUndefinedOrNull(info[1])) {
        bufferData4Method(info);
        return;
      }
      if (info[1]->IsArrayBufferView()) {
        bufferData3Method(info);
        return;
      }
      if (info[1]->IsArrayBuffer()) {
        bufferData4Method(info);
        return;
      }
      if (info[1]->IsNumber()) {
        bufferData2Method(info);
        return;
      }
      if (true) {
        bufferData2Method(info);
        return;
      }
      break;
    case 4:
      if (true) {
        bufferData1Method(info);
        return;
      }
      break;
    case 5:
      if (true) {
        bufferData1Method(info);
        return;
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "bufferData");
  if (isArityError) {
    if (info.Length() < 3) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void bufferSubData2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "bufferSubData");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int64_t offset;
  FlexibleArrayBufferView data;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  offset = NativeValueTraits<IDLLongLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  ToFlexibleArrayBufferView(info.GetIsolate(), info[2], data, allocateFlexibleArrayBufferViewStorage(info[2]));
  if (!data) {
    exceptionState.ThrowTypeError("parameter 3 is not of type 'ArrayBufferView'.");
    return;
  }

  impl->bufferSubData(target, offset, data);
}

static void bufferSubData3Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "bufferSubData");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int64_t offset;
  DOMArrayBuffer* data;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  offset = NativeValueTraits<IDLLongLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  data = info[2]->IsArrayBuffer() ? V8ArrayBuffer::ToImpl(v8::Local<v8::ArrayBuffer>::Cast(info[2])) : 0;
  if (!data) {
    exceptionState.ThrowTypeError("parameter 3 is not of type 'ArrayBuffer'.");
    return;
  }

  impl->bufferSubData(target, offset, data);
}

static void bufferSubDataMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(5, info.Length())) {
    case 3:
      if (info[2]->IsArrayBufferView()) {
        bufferSubData2Method(info);
        return;
      }
      if (info[2]->IsArrayBuffer()) {
        bufferSubData3Method(info);
        return;
      }
      break;
    case 4:
      if (true) {
        bufferSubData1Method(info);
        return;
      }
      break;
    case 5:
      if (true) {
        bufferSubData1Method(info);
        return;
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "bufferSubData");
  if (isArityError) {
    if (info.Length() < 3) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void checkFramebufferStatusMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "checkFramebufferStatus");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t target;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  V8SetReturnValueUnsigned(info, impl->checkFramebufferStatus(target));
}

static void clearMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "clear");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t mask;
  mask = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->clear(mask);
}

static void clearColorMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "clearColor");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 4)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(4, info.Length()));
    return;
  }

  float red;
  float green;
  float blue;
  float alpha;
  red = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  green = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  blue = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;

  alpha = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[3], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->clearColor(red, green, blue, alpha);
}

static void clearDepthMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "clearDepth");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  float depth;
  depth = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->clearDepth(depth);
}

static void clearStencilMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "clearStencil");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  int32_t s;
  s = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->clearStencil(s);
}

static void colorMaskMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "colorMask");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 4)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(4, info.Length()));
    return;
  }

  bool red;
  bool green;
  bool blue;
  bool alpha;
  red = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  green = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  blue = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;

  alpha = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[3], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->colorMask(red, green, blue, alpha);
}

static void compileShaderMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("compileShader", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLShader* shader;
  shader = V8WebGLShader::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!shader) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("compileShader", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLShader'."));
    return;
  }

  impl->compileShader(shader);
}

static void compressedTexImage2D3Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "compressedTexImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  uint32_t internalformat;
  int32_t width;
  int32_t height;
  int32_t border;
  MaybeShared<DOMArrayBufferView> data;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  internalformat = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  border = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  data = ToMaybeShared<MaybeShared<DOMArrayBufferView>>(info.GetIsolate(), info[6], exceptionState);
  if (exceptionState.HadException())
    return;
  if (!data) {
    exceptionState.ThrowTypeError("parameter 7 is not of type 'ArrayBufferView'.");
    return;
  }

  impl->compressedTexImage2D(target, level, internalformat, width, height, border, data);
}

static void compressedTexImage2DMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(9, info.Length())) {
    case 7:
      if (true) {
        compressedTexImage2D3Method(info);
        return;
      }
      break;
    case 8:
      if (info[6]->IsArrayBufferView()) {
        compressedTexImage2D1Method(info);
        return;
      }
      if (info[6]->IsNumber()) {
        compressedTexImage2D2Method(info);
        return;
      }
      if (true) {
        compressedTexImage2D2Method(info);
        return;
      }
      break;
    case 9:
      if (true) {
        compressedTexImage2D1Method(info);
        return;
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "compressedTexImage2D");
  if (isArityError) {
    if (info.Length() < 7) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(7, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void compressedTexSubImage2D3Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "compressedTexSubImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t xoffset;
  int32_t yoffset;
  int32_t width;
  int32_t height;
  uint32_t format;
  MaybeShared<DOMArrayBufferView> data;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  xoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  yoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[6], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  data = ToMaybeShared<MaybeShared<DOMArrayBufferView>>(info.GetIsolate(), info[7], exceptionState);
  if (exceptionState.HadException())
    return;
  if (!data) {
    exceptionState.ThrowTypeError("parameter 8 is not of type 'ArrayBufferView'.");
    return;
  }

  impl->compressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, data);
}

static void compressedTexSubImage2DMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(10, info.Length())) {
    case 8:
      if (true) {
        compressedTexSubImage2D3Method(info);
        return;
      }
      break;
    case 9:
      if (info[7]->IsArrayBufferView()) {
        compressedTexSubImage2D1Method(info);
        return;
      }
      if (info[7]->IsNumber()) {
        compressedTexSubImage2D2Method(info);
        return;
      }
      if (true) {
        compressedTexSubImage2D2Method(info);
        return;
      }
      break;
    case 10:
      if (true) {
        compressedTexSubImage2D1Method(info);
        return;
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "compressedTexSubImage2D");
  if (isArityError) {
    if (info.Length() < 8) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(8, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void copyTexImage2DMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "copyTexImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 8)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(8, info.Length()));
    return;
  }

  uint32_t target;
  int32_t level;
  uint32_t internalformat;
  int32_t x;
  int32_t y;
  int32_t width;
  int32_t height;
  int32_t border;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  internalformat = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  x = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  y = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[6], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  border = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[7], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->copyTexImage2D(target, level, internalformat, x, y, width, height, border);
}

static void copyTexSubImage2DMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "copyTexSubImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 8)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(8, info.Length()));
    return;
  }

  uint32_t target;
  int32_t level;
  int32_t xoffset;
  int32_t yoffset;
  int32_t x;
  int32_t y;
  int32_t width;
  int32_t height;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  xoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  yoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  x = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  y = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[6], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[7], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->copyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
}

static void createBufferMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->createBuffer());
}

static void createFramebufferMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->createFramebuffer());
}

static void createProgramMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->createProgram());
}

static void createRenderbufferMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->createRenderbuffer());
}

static void createShaderMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "createShader");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t type;
  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  V8SetReturnValue(info, impl->createShader(type));
}

static void createTextureMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->createTexture());
}

static void cullFaceMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "cullFace");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t mode;
  mode = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->cullFace(mode);
}

static void deleteBufferMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteBuffer", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLBuffer* buffer;
  buffer = V8WebGLBuffer::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!buffer && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteBuffer", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLBuffer'."));
    return;
  }

  impl->deleteBuffer(buffer);
}

static void deleteFramebufferMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteFramebuffer", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLFramebuffer* framebuffer;
  framebuffer = V8WebGLFramebuffer::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!framebuffer && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteFramebuffer", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLFramebuffer'."));
    return;
  }

  impl->deleteFramebuffer(framebuffer);
}

static void deleteProgramMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteProgram", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLProgram* program;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteProgram", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLProgram'."));
    return;
  }

  impl->deleteProgram(program);
}

static void deleteRenderbufferMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteRenderbuffer", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLRenderbuffer* renderbuffer;
  renderbuffer = V8WebGLRenderbuffer::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!renderbuffer && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteRenderbuffer", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLRenderbuffer'."));
    return;
  }

  impl->deleteRenderbuffer(renderbuffer);
}

static void deleteShaderMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteShader", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLShader* shader;
  shader = V8WebGLShader::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!shader && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteShader", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLShader'."));
    return;
  }

  impl->deleteShader(shader);
}

static void deleteTextureMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteTexture", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLTexture* texture;
  texture = V8WebGLTexture::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!texture && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteTexture", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLTexture'."));
    return;
  }

  impl->deleteTexture(texture);
}

static void depthFuncMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "depthFunc");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t func;
  func = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->depthFunc(func);
}

static void depthMaskMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "depthMask");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool flag;
  flag = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->depthMask(flag);
}

static void depthRangeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "depthRange");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  float zNear;
  float zFar;
  zNear = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  zFar = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->depthRange(zNear, zFar);
}

static void detachShaderMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("detachShader", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  WebGLProgram* program;
  WebGLShader* shader;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("detachShader", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLProgram'."));
    return;
  }

  shader = V8WebGLShader::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!shader) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("detachShader", "WebGL2RenderingContext", "parameter 2 is not of type 'WebGLShader'."));
    return;
  }

  impl->detachShader(program, shader);
}

static void disableMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "disable");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t cap;
  cap = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->disable(cap);
}

static void disableVertexAttribArrayMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "disableVertexAttribArray");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t index;
  index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->disableVertexAttribArray(index);
}

static void drawArraysMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "drawArrays");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  uint32_t mode;
  int32_t first;
  int32_t count;
  mode = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  first = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  count = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->drawArrays(mode, first, count);
}

static void drawElementsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "drawElements");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 4)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(4, info.Length()));
    return;
  }

  uint32_t mode;
  int32_t count;
  uint32_t type;
  int64_t offset;
  mode = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  count = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  offset = NativeValueTraits<IDLLongLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->drawElements(mode, count, type, offset);
}

static void enableMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "enable");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t cap;
  cap = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->enable(cap);
}

static void enableVertexAttribArrayMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "enableVertexAttribArray");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t index;
  index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->enableVertexAttribArray(index);
}

static void finishMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  impl->finish();
}

static void flushMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  impl->flush();
}

static void framebufferRenderbufferMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "framebufferRenderbuffer");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 4)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(4, info.Length()));
    return;
  }

  uint32_t target;
  uint32_t attachment;
  uint32_t renderbuffertarget;
  WebGLRenderbuffer* renderbuffer;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  attachment = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  renderbuffertarget = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  renderbuffer = V8WebGLRenderbuffer::ToImplWithTypeCheck(info.GetIsolate(), info[3]);
  if (!renderbuffer && !IsUndefinedOrNull(info[3])) {
    exceptionState.ThrowTypeError("parameter 4 is not of type 'WebGLRenderbuffer'.");
    return;
  }

  impl->framebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer);
}

static void framebufferTexture2DMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "framebufferTexture2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 5)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(5, info.Length()));
    return;
  }

  uint32_t target;
  uint32_t attachment;
  uint32_t textarget;
  WebGLTexture* texture;
  int32_t level;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  attachment = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  textarget = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  texture = V8WebGLTexture::ToImplWithTypeCheck(info.GetIsolate(), info[3]);
  if (!texture && !IsUndefinedOrNull(info[3])) {
    exceptionState.ThrowTypeError("parameter 4 is not of type 'WebGLTexture'.");
    return;
  }

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->framebufferTexture2D(target, attachment, textarget, texture, level);
}

static void frontFaceMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "frontFace");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t mode;
  mode = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->frontFace(mode);
}

static void generateMipmapMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "generateMipmap");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t target;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->generateMipmap(target);
}

static void getActiveAttribMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "getActiveAttrib");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  WebGLProgram* program;
  uint32_t index;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLProgram'.");
    return;
  }

  index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  V8SetReturnValue(info, impl->getActiveAttrib(program, index));
}

static void getActiveUniformMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "getActiveUniform");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  WebGLProgram* program;
  uint32_t index;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLProgram'.");
    return;
  }

  index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  V8SetReturnValue(info, impl->getActiveUniform(program, index));
}

static void getAttachedShadersMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getAttachedShaders", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLProgram* program;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getAttachedShaders", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLProgram'."));
    return;
  }

  base::Optional<HeapVector<Member<WebGLShader>>> result = impl->getAttachedShaders(program);
  if (!result)
    V8SetReturnValueNull(info);
  else
    V8SetReturnValue(info, ToV8(result.value(), info.Holder(), info.GetIsolate()));
}

static void getAttribLocationMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getAttribLocation", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  WebGLProgram* program;
  V8StringResource<> name;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getAttribLocation", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLProgram'."));
    return;
  }

  name = info[1];
  if (!name.Prepare())
    return;

  V8SetReturnValueInt(info, impl->getAttribLocation(program, name));
}

static void getBufferParameterMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "getBufferParameter");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  uint32_t target;
  uint32_t pname;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  pname = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  ScriptValue result = impl->getBufferParameter(scriptState, target, pname);
  V8SetReturnValue(info, result.V8Value());
}

static void getContextAttributesMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  base::Optional<WebGLContextAttributes> result;
  impl->getContextAttributes(result);
  if (!result)
    V8SetReturnValueNull(info);
  else
    V8SetReturnValue(info, result.value());
}

static void getErrorMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  V8SetReturnValueUnsigned(info, impl->getError());
}

static void getExtensionMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getExtension", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> name;
  name = info[0];
  if (!name.Prepare())
    return;

  ScriptValue result = impl->getExtension(scriptState, name);
  V8SetReturnValue(info, result.V8Value());
}

static void getFramebufferAttachmentParameterMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "getFramebufferAttachmentParameter");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 3)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  uint32_t target;
  uint32_t attachment;
  uint32_t pname;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  attachment = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  pname = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  ScriptValue result = impl->getFramebufferAttachmentParameter(scriptState, target, attachment, pname);
  V8SetReturnValue(info, result.V8Value());
}

static void getParameterMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "getParameter");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t pname;
  pname = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  ScriptValue result = impl->getParameter(scriptState, pname);
  V8SetReturnValue(info, result.V8Value());
}

static void getProgramParameterMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "getProgramParameter");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  WebGLProgram* program;
  uint32_t pname;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLProgram'.");
    return;
  }

  pname = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  ScriptValue result = impl->getProgramParameter(scriptState, program, pname);
  V8SetReturnValue(info, result.V8Value());
}

static void getProgramInfoLogMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getProgramInfoLog", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLProgram* program;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getProgramInfoLog", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLProgram'."));
    return;
  }

  V8SetReturnValueStringOrNull(info, impl->getProgramInfoLog(program), info.GetIsolate());
}

static void getRenderbufferParameterMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "getRenderbufferParameter");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  uint32_t target;
  uint32_t pname;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  pname = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  ScriptValue result = impl->getRenderbufferParameter(scriptState, target, pname);
  V8SetReturnValue(info, result.V8Value());
}

static void getShaderParameterMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "getShaderParameter");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  WebGLShader* shader;
  uint32_t pname;
  shader = V8WebGLShader::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!shader) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLShader'.");
    return;
  }

  pname = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  ScriptValue result = impl->getShaderParameter(scriptState, shader, pname);
  V8SetReturnValue(info, result.V8Value());
}

static void getShaderInfoLogMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getShaderInfoLog", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLShader* shader;
  shader = V8WebGLShader::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!shader) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getShaderInfoLog", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLShader'."));
    return;
  }

  V8SetReturnValueStringOrNull(info, impl->getShaderInfoLog(shader), info.GetIsolate());
}

static void getShaderPrecisionFormatMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "getShaderPrecisionFormat");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  uint32_t shadertype;
  uint32_t precisiontype;
  shadertype = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  precisiontype = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  V8SetReturnValue(info, impl->getShaderPrecisionFormat(shadertype, precisiontype));
}

static void getShaderSourceMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getShaderSource", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLShader* shader;
  shader = V8WebGLShader::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!shader) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getShaderSource", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLShader'."));
    return;
  }

  V8SetReturnValueStringOrNull(info, impl->getShaderSource(shader), info.GetIsolate());
}

static void getSupportedExtensionsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  base::Optional<Vector<String>> result = impl->getSupportedExtensions();
  if (!result)
    V8SetReturnValueNull(info);
  else
    V8SetReturnValue(info, ToV8(result.value(), info.Holder(), info.GetIsolate()));
}

static void getTexParameterMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "getTexParameter");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  uint32_t target;
  uint32_t pname;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  pname = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  ScriptValue result = impl->getTexParameter(scriptState, target, pname);
  V8SetReturnValue(info, result.V8Value());
}

static void getUniformMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getUniform", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  WebGLProgram* program;
  WebGLUniformLocation* location;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getUniform", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLProgram'."));
    return;
  }

  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!location) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getUniform", "WebGL2RenderingContext", "parameter 2 is not of type 'WebGLUniformLocation'."));
    return;
  }

  ScriptValue result = impl->getUniform(scriptState, program, location);
  V8SetReturnValue(info, result.V8Value());
}

static void getUniformLocationMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getUniformLocation", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  WebGLProgram* program;
  V8StringResource<> name;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getUniformLocation", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLProgram'."));
    return;
  }

  name = info[1];
  if (!name.Prepare())
    return;

  V8SetReturnValue(info, impl->getUniformLocation(program, name));
}

static void getVertexAttribMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "getVertexAttrib");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  uint32_t index;
  uint32_t pname;
  index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  pname = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  ScriptValue result = impl->getVertexAttrib(scriptState, index, pname);
  V8SetReturnValue(info, result.V8Value());
}

static void getVertexAttribOffsetMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "getVertexAttribOffset");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  uint32_t index;
  uint32_t pname;
  index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  pname = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  V8SetReturnValue(info, static_cast<double>(impl->getVertexAttribOffset(index, pname)));
}

static void hintMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "hint");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  uint32_t target;
  uint32_t mode;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  mode = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->hint(target, mode);
}

static void isBufferMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isBuffer", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLBuffer* buffer;
  buffer = V8WebGLBuffer::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!buffer && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isBuffer", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLBuffer'."));
    return;
  }

  V8SetReturnValueBool(info, impl->isBuffer(buffer));
}

static void isContextLostMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  V8SetReturnValueBool(info, impl->isContextLost());
}

static void isEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "isEnabled");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t cap;
  cap = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  V8SetReturnValueBool(info, impl->isEnabled(cap));
}

static void isFramebufferMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isFramebuffer", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLFramebuffer* framebuffer;
  framebuffer = V8WebGLFramebuffer::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!framebuffer && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isFramebuffer", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLFramebuffer'."));
    return;
  }

  V8SetReturnValueBool(info, impl->isFramebuffer(framebuffer));
}

static void isProgramMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isProgram", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLProgram* program;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isProgram", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLProgram'."));
    return;
  }

  V8SetReturnValueBool(info, impl->isProgram(program));
}

static void isRenderbufferMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isRenderbuffer", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLRenderbuffer* renderbuffer;
  renderbuffer = V8WebGLRenderbuffer::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!renderbuffer && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isRenderbuffer", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLRenderbuffer'."));
    return;
  }

  V8SetReturnValueBool(info, impl->isRenderbuffer(renderbuffer));
}

static void isShaderMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isShader", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLShader* shader;
  shader = V8WebGLShader::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!shader && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isShader", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLShader'."));
    return;
  }

  V8SetReturnValueBool(info, impl->isShader(shader));
}

static void isTextureMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isTexture", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLTexture* texture;
  texture = V8WebGLTexture::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!texture && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isTexture", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLTexture'."));
    return;
  }

  V8SetReturnValueBool(info, impl->isTexture(texture));
}

static void lineWidthMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "lineWidth");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  float width;
  width = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->lineWidth(width);
}

static void linkProgramMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("linkProgram", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLProgram* program;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("linkProgram", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLProgram'."));
    return;
  }

  impl->linkProgram(program);
}

static void pixelStoreiMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "pixelStorei");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  uint32_t pname;
  int32_t param;
  pname = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  param = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->pixelStorei(pname, param);
}

static void polygonOffsetMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "polygonOffset");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  float factor;
  float units;
  factor = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  units = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->polygonOffset(factor, units);
}

static void readPixels3Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "readPixels");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  int32_t x;
  int32_t y;
  int32_t width;
  int32_t height;
  uint32_t format;
  uint32_t type;
  MaybeShared<DOMArrayBufferView> pixels;
  x = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  y = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[5], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  pixels = ToMaybeShared<MaybeShared<DOMArrayBufferView>>(info.GetIsolate(), info[6], exceptionState);
  if (exceptionState.HadException())
    return;
  if (!pixels && !IsUndefinedOrNull(info[6])) {
    exceptionState.ThrowTypeError("parameter 7 is not of type 'ArrayBufferView'.");
    return;
  }

  impl->readPixels(x, y, width, height, format, type, pixels);
}

static void readPixelsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(8, info.Length())) {
    case 7:
      if (IsUndefinedOrNull(info[6])) {
        readPixels3Method(info);
        return;
      }
      if (info[6]->IsArrayBufferView()) {
        readPixels3Method(info);
        return;
      }
      if (info[6]->IsNumber()) {
        readPixels2Method(info);
        return;
      }
      if (true) {
        readPixels2Method(info);
        return;
      }
      break;
    case 8:
      if (true) {
        readPixels1Method(info);
        return;
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "readPixels");
  if (isArityError) {
    if (info.Length() < 7) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(7, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void renderbufferStorageMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "renderbufferStorage");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 4)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(4, info.Length()));
    return;
  }

  uint32_t target;
  uint32_t internalformat;
  int32_t width;
  int32_t height;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  internalformat = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->renderbufferStorage(target, internalformat, width, height);
}

static void sampleCoverageMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "sampleCoverage");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  float value;
  bool invert;
  value = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  invert = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->sampleCoverage(value, invert);
}

static void scissorMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "scissor");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 4)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(4, info.Length()));
    return;
  }

  int32_t x;
  int32_t y;
  int32_t width;
  int32_t height;
  x = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  y = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->scissor(x, y, width, height);
}

static void shaderSourceMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("shaderSource", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  WebGLShader* shader;
  V8StringResource<> string;
  shader = V8WebGLShader::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!shader) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("shaderSource", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLShader'."));
    return;
  }

  string = info[1];
  if (!string.Prepare())
    return;

  impl->shaderSource(shader, string);
}

static void stencilFuncMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "stencilFunc");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  uint32_t func;
  int32_t ref;
  uint32_t mask;
  func = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  ref = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  mask = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->stencilFunc(func, ref, mask);
}

static void stencilFuncSeparateMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "stencilFuncSeparate");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 4)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(4, info.Length()));
    return;
  }

  uint32_t face;
  uint32_t func;
  int32_t ref;
  uint32_t mask;
  face = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  func = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  ref = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  mask = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->stencilFuncSeparate(face, func, ref, mask);
}

static void stencilMaskMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "stencilMask");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t mask;
  mask = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->stencilMask(mask);
}

static void stencilMaskSeparateMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "stencilMaskSeparate");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  uint32_t face;
  uint32_t mask;
  face = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  mask = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->stencilMaskSeparate(face, mask);
}

static void stencilOpMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "stencilOp");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  uint32_t fail;
  uint32_t zfail;
  uint32_t zpass;
  fail = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  zfail = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  zpass = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->stencilOp(fail, zfail, zpass);
}

static void stencilOpSeparateMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "stencilOpSeparate");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 4)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(4, info.Length()));
    return;
  }

  uint32_t face;
  uint32_t fail;
  uint32_t zfail;
  uint32_t zpass;
  face = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  fail = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  zfail = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  zpass = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->stencilOpSeparate(face, fail, zfail, zpass);
}

static void texParameterfMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texParameterf");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  uint32_t target;
  uint32_t pname;
  float param;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  pname = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  param = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->texParameterf(target, pname, param);
}

static void texParameteriMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texParameteri");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  uint32_t target;
  uint32_t pname;
  int32_t param;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  pname = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  param = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->texParameteri(target, pname, param);
}

static void texImage2D8Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t internalformat;
  int32_t width;
  int32_t height;
  int32_t border;
  uint32_t format;
  uint32_t type;
  MaybeShared<DOMArrayBufferView> pixels;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  internalformat = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  border = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[6], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[7], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  pixels = ToMaybeShared<MaybeShared<DOMArrayBufferView>>(info.GetIsolate(), info[8], exceptionState);
  if (exceptionState.HadException())
    return;
  if (!pixels && !IsUndefinedOrNull(info[8])) {
    exceptionState.ThrowTypeError("parameter 9 is not of type 'ArrayBufferView'.");
    return;
  }

  impl->texImage2D(target, level, internalformat, width, height, border, format, type, pixels);
}

static void texImage2D9Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t internalformat;
  uint32_t format;
  uint32_t type;
  ImageData* pixels;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  internalformat = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  pixels = V8ImageData::ToImplWithTypeCheck(info.GetIsolate(), info[5]);
  if (!pixels) {
    exceptionState.ThrowTypeError("parameter 6 is not of type 'ImageData'.");
    return;
  }

  impl->texImage2D(target, level, internalformat, format, type, pixels);
}

static void texImage2D10Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t internalformat;
  uint32_t format;
  uint32_t type;
  HTMLImageElement* image;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  internalformat = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  image = V8HTMLImageElement::ToImplWithTypeCheck(info.GetIsolate(), info[5]);
  if (!image) {
    exceptionState.ThrowTypeError("parameter 6 is not of type 'HTMLImageElement'.");
    return;
  }

  ExecutionContext* executionContext = ExecutionContext::ForRelevantRealm(info);
  impl->texImage2D(executionContext, target, level, internalformat, format, type, image, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void texImage2D11Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t internalformat;
  uint32_t format;
  uint32_t type;
  HTMLCanvasElement* canvas;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  internalformat = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  canvas = V8HTMLCanvasElement::ToImplWithTypeCheck(info.GetIsolate(), info[5]);
  if (!canvas) {
    exceptionState.ThrowTypeError("parameter 6 is not of type 'HTMLCanvasElement'.");
    return;
  }

  ExecutionContext* executionContext = ExecutionContext::ForRelevantRealm(info);
  impl->texImage2D(executionContext, target, level, internalformat, format, type, canvas, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void texImage2D12Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t internalformat;
  uint32_t format;
  uint32_t type;
  HTMLVideoElement* video;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  internalformat = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  video = V8HTMLVideoElement::ToImplWithTypeCheck(info.GetIsolate(), info[5]);
  if (!video) {
    exceptionState.ThrowTypeError("parameter 6 is not of type 'HTMLVideoElement'.");
    return;
  }

  ExecutionContext* executionContext = ExecutionContext::ForRelevantRealm(info);
  impl->texImage2D(executionContext, target, level, internalformat, format, type, video, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void texImage2D13Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t internalformat;
  uint32_t format;
  uint32_t type;
  ImageBitmap* bitmap;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  internalformat = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  bitmap = V8ImageBitmap::ToImplWithTypeCheck(info.GetIsolate(), info[5]);
  if (!bitmap) {
    exceptionState.ThrowTypeError("parameter 6 is not of type 'ImageBitmap'.");
    return;
  }

  impl->texImage2D(target, level, internalformat, format, type, bitmap, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void texImage2DMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(10, info.Length())) {
    case 6:
      if (V8ImageData::hasInstance(info[5], info.GetIsolate())) {
        texImage2D9Method(info);
        return;
      }
      if (V8HTMLImageElement::hasInstance(info[5], info.GetIsolate())) {
        texImage2D10Method(info);
        return;
      }
      if (V8HTMLCanvasElement::hasInstance(info[5], info.GetIsolate())) {
        texImage2D11Method(info);
        return;
      }
      if (V8HTMLVideoElement::hasInstance(info[5], info.GetIsolate())) {
        texImage2D12Method(info);
        return;
      }
      if (V8ImageBitmap::hasInstance(info[5], info.GetIsolate())) {
        texImage2D13Method(info);
        return;
      }
      break;
    case 9:
      if (IsUndefinedOrNull(info[8])) {
        texImage2D8Method(info);
        return;
      }
      if (V8ImageData::hasInstance(info[8], info.GetIsolate())) {
        texImage2D2Method(info);
        return;
      }
      if (V8HTMLImageElement::hasInstance(info[8], info.GetIsolate())) {
        texImage2D3Method(info);
        return;
      }
      if (V8HTMLCanvasElement::hasInstance(info[8], info.GetIsolate())) {
        texImage2D4Method(info);
        return;
      }
      if (V8HTMLVideoElement::hasInstance(info[8], info.GetIsolate())) {
        texImage2D5Method(info);
        return;
      }
      if (V8ImageBitmap::hasInstance(info[8], info.GetIsolate())) {
        texImage2D6Method(info);
        return;
      }
      if (info[8]->IsArrayBufferView()) {
        texImage2D8Method(info);
        return;
      }
      if (info[8]->IsNumber()) {
        texImage2D1Method(info);
        return;
      }
      if (true) {
        texImage2D1Method(info);
        return;
      }
      break;
    case 10:
      if (true) {
        texImage2D7Method(info);
        return;
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texImage2D");
  if (isArityError) {
    if (info.Length() < 6) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(6, info.Length()));
      return;
    }
    if (info.Length() >= 6) {
      exceptionState.ThrowTypeError(ExceptionMessages::InvalidArity("[6, 9, 10]", info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void texSubImage2D8Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texSubImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t xoffset;
  int32_t yoffset;
  int32_t width;
  int32_t height;
  uint32_t format;
  uint32_t type;
  MaybeShared<DOMArrayBufferView> pixels;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  xoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  yoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[6], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[7], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  pixels = ToMaybeShared<MaybeShared<DOMArrayBufferView>>(info.GetIsolate(), info[8], exceptionState);
  if (exceptionState.HadException())
    return;
  if (!pixels && !IsUndefinedOrNull(info[8])) {
    exceptionState.ThrowTypeError("parameter 9 is not of type 'ArrayBufferView'.");
    return;
  }

  impl->texSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels);
}

static void texSubImage2D9Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texSubImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t xoffset;
  int32_t yoffset;
  uint32_t format;
  uint32_t type;
  ImageData* pixels;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  xoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  yoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[5], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  pixels = V8ImageData::ToImplWithTypeCheck(info.GetIsolate(), info[6]);
  if (!pixels) {
    exceptionState.ThrowTypeError("parameter 7 is not of type 'ImageData'.");
    return;
  }

  impl->texSubImage2D(target, level, xoffset, yoffset, format, type, pixels);
}

static void texSubImage2D10Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texSubImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t xoffset;
  int32_t yoffset;
  uint32_t format;
  uint32_t type;
  HTMLImageElement* image;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  xoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  yoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[5], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  image = V8HTMLImageElement::ToImplWithTypeCheck(info.GetIsolate(), info[6]);
  if (!image) {
    exceptionState.ThrowTypeError("parameter 7 is not of type 'HTMLImageElement'.");
    return;
  }

  ExecutionContext* executionContext = ExecutionContext::ForRelevantRealm(info);
  impl->texSubImage2D(executionContext, target, level, xoffset, yoffset, format, type, image, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void texSubImage2D11Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texSubImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t xoffset;
  int32_t yoffset;
  uint32_t format;
  uint32_t type;
  HTMLCanvasElement* canvas;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  xoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  yoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[5], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  canvas = V8HTMLCanvasElement::ToImplWithTypeCheck(info.GetIsolate(), info[6]);
  if (!canvas) {
    exceptionState.ThrowTypeError("parameter 7 is not of type 'HTMLCanvasElement'.");
    return;
  }

  ExecutionContext* executionContext = ExecutionContext::ForRelevantRealm(info);
  impl->texSubImage2D(executionContext, target, level, xoffset, yoffset, format, type, canvas, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void texSubImage2D12Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texSubImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t xoffset;
  int32_t yoffset;
  uint32_t format;
  uint32_t type;
  HTMLVideoElement* video;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  xoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  yoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[5], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  video = V8HTMLVideoElement::ToImplWithTypeCheck(info.GetIsolate(), info[6]);
  if (!video) {
    exceptionState.ThrowTypeError("parameter 7 is not of type 'HTMLVideoElement'.");
    return;
  }

  ExecutionContext* executionContext = ExecutionContext::ForRelevantRealm(info);
  impl->texSubImage2D(executionContext, target, level, xoffset, yoffset, format, type, video, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void texSubImage2D13Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texSubImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t xoffset;
  int32_t yoffset;
  uint32_t format;
  uint32_t type;
  ImageBitmap* bitmap;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  xoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  yoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[5], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  bitmap = V8ImageBitmap::ToImplWithTypeCheck(info.GetIsolate(), info[6]);
  if (!bitmap) {
    exceptionState.ThrowTypeError("parameter 7 is not of type 'ImageBitmap'.");
    return;
  }

  impl->texSubImage2D(target, level, xoffset, yoffset, format, type, bitmap, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void texSubImage2DMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(10, info.Length())) {
    case 7:
      if (V8ImageData::hasInstance(info[6], info.GetIsolate())) {
        texSubImage2D9Method(info);
        return;
      }
      if (V8HTMLImageElement::hasInstance(info[6], info.GetIsolate())) {
        texSubImage2D10Method(info);
        return;
      }
      if (V8HTMLCanvasElement::hasInstance(info[6], info.GetIsolate())) {
        texSubImage2D11Method(info);
        return;
      }
      if (V8HTMLVideoElement::hasInstance(info[6], info.GetIsolate())) {
        texSubImage2D12Method(info);
        return;
      }
      if (V8ImageBitmap::hasInstance(info[6], info.GetIsolate())) {
        texSubImage2D13Method(info);
        return;
      }
      break;
    case 9:
      if (IsUndefinedOrNull(info[8])) {
        texSubImage2D8Method(info);
        return;
      }
      if (V8ImageData::hasInstance(info[8], info.GetIsolate())) {
        texSubImage2D2Method(info);
        return;
      }
      if (V8HTMLImageElement::hasInstance(info[8], info.GetIsolate())) {
        texSubImage2D3Method(info);
        return;
      }
      if (V8HTMLCanvasElement::hasInstance(info[8], info.GetIsolate())) {
        texSubImage2D4Method(info);
        return;
      }
      if (V8HTMLVideoElement::hasInstance(info[8], info.GetIsolate())) {
        texSubImage2D5Method(info);
        return;
      }
      if (V8ImageBitmap::hasInstance(info[8], info.GetIsolate())) {
        texSubImage2D6Method(info);
        return;
      }
      if (info[8]->IsArrayBufferView()) {
        texSubImage2D8Method(info);
        return;
      }
      if (info[8]->IsNumber()) {
        texSubImage2D1Method(info);
        return;
      }
      if (true) {
        texSubImage2D1Method(info);
        return;
      }
      break;
    case 10:
      if (true) {
        texSubImage2D7Method(info);
        return;
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texSubImage2D");
  if (isArityError) {
    if (info.Length() < 7) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(7, info.Length()));
      return;
    }
    if (info.Length() >= 7) {
      exceptionState.ThrowTypeError(ExceptionMessages::InvalidArity("[7, 9, 10]", info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void uniform1fMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform1f");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  WebGLUniformLocation* location;
  float x;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  x = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->uniform1f(location, x);
}

static void uniform1fv3Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform1fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  FlexibleFloat32ArrayView v;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  ToFlexibleArrayBufferView(info.GetIsolate(), info[1], v, allocateFlexibleArrayBufferViewStorage(info[1]));
  if (!v) {
    exceptionState.ThrowTypeError("parameter 2 is not of type 'Float32Array'.");
    return;
  }

  impl->uniform1fv(location, v);
}

static void uniform1fv4Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform1fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  Vector<float> v;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  v = NativeValueTraits<IDLSequence<IDLUnrestrictedFloat>>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->uniform1fv(location, v);
}

static void uniform1fvMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(4, info.Length())) {
    case 2:
      if (info[1]->IsFloat32Array()) {
        uniform1fv3Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        uniform1fv4Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniform1fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exceptionState)) {
          uniform1fv4Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    case 3:
      if (info[1]->IsFloat32Array()) {
        uniform1fv1Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        uniform1fv2Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniform1fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exceptionState)) {
          uniform1fv2Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    case 4:
      if (info[1]->IsFloat32Array()) {
        uniform1fv1Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        uniform1fv2Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniform1fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exceptionState)) {
          uniform1fv2Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform1fv");
  if (isArityError) {
    if (info.Length() < 2) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void uniform1iMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform1i");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  WebGLUniformLocation* location;
  int32_t x;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  x = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->uniform1i(location, x);
}

static void uniform1iv3Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform1iv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  FlexibleInt32ArrayView v;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  ToFlexibleArrayBufferView(info.GetIsolate(), info[1], v, allocateFlexibleArrayBufferViewStorage(info[1]));
  if (!v) {
    exceptionState.ThrowTypeError("parameter 2 is not of type 'Int32Array'.");
    return;
  }

  impl->uniform1iv(location, v);
}

static void uniform1iv4Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform1iv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  Vector<int32_t> v;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  v = NativeValueTraits<IDLSequence<IDLLong>>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->uniform1iv(location, v);
}

static void uniform1ivMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(4, info.Length())) {
    case 2:
      if (info[1]->IsInt32Array()) {
        uniform1iv3Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        uniform1iv4Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniform1iv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exceptionState)) {
          uniform1iv4Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    case 3:
      if (info[1]->IsInt32Array()) {
        uniform1iv1Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        uniform1iv2Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniform1iv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exceptionState)) {
          uniform1iv2Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    case 4:
      if (info[1]->IsInt32Array()) {
        uniform1iv1Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        uniform1iv2Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniform1iv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exceptionState)) {
          uniform1iv2Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform1iv");
  if (isArityError) {
    if (info.Length() < 2) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void uniform2fMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform2f");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  WebGLUniformLocation* location;
  float x;
  float y;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  x = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  y = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->uniform2f(location, x, y);
}

static void uniform2fv3Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform2fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  FlexibleFloat32ArrayView v;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  ToFlexibleArrayBufferView(info.GetIsolate(), info[1], v, allocateFlexibleArrayBufferViewStorage(info[1]));
  if (!v) {
    exceptionState.ThrowTypeError("parameter 2 is not of type 'Float32Array'.");
    return;
  }

  impl->uniform2fv(location, v);
}

static void uniform2fv4Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform2fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  Vector<float> v;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  v = NativeValueTraits<IDLSequence<IDLUnrestrictedFloat>>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->uniform2fv(location, v);
}

static void uniform2fvMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(4, info.Length())) {
    case 2:
      if (info[1]->IsFloat32Array()) {
        uniform2fv3Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        uniform2fv4Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniform2fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exceptionState)) {
          uniform2fv4Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    case 3:
      if (info[1]->IsFloat32Array()) {
        uniform2fv1Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        uniform2fv2Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniform2fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exceptionState)) {
          uniform2fv2Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    case 4:
      if (info[1]->IsFloat32Array()) {
        uniform2fv1Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        uniform2fv2Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniform2fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exceptionState)) {
          uniform2fv2Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform2fv");
  if (isArityError) {
    if (info.Length() < 2) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void uniform2iMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform2i");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  WebGLUniformLocation* location;
  int32_t x;
  int32_t y;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  x = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  y = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->uniform2i(location, x, y);
}

static void uniform2iv3Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform2iv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  FlexibleInt32ArrayView v;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  ToFlexibleArrayBufferView(info.GetIsolate(), info[1], v, allocateFlexibleArrayBufferViewStorage(info[1]));
  if (!v) {
    exceptionState.ThrowTypeError("parameter 2 is not of type 'Int32Array'.");
    return;
  }

  impl->uniform2iv(location, v);
}

static void uniform2iv4Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform2iv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  Vector<int32_t> v;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  v = NativeValueTraits<IDLSequence<IDLLong>>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->uniform2iv(location, v);
}

static void uniform2ivMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(4, info.Length())) {
    case 2:
      if (info[1]->IsInt32Array()) {
        uniform2iv3Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        uniform2iv4Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniform2iv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exceptionState)) {
          uniform2iv4Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    case 3:
      if (info[1]->IsInt32Array()) {
        uniform2iv1Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        uniform2iv2Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniform2iv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exceptionState)) {
          uniform2iv2Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    case 4:
      if (info[1]->IsInt32Array()) {
        uniform2iv1Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        uniform2iv2Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniform2iv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exceptionState)) {
          uniform2iv2Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform2iv");
  if (isArityError) {
    if (info.Length() < 2) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void uniform3fMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform3f");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 4)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(4, info.Length()));
    return;
  }

  WebGLUniformLocation* location;
  float x;
  float y;
  float z;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  x = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  y = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;

  z = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[3], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->uniform3f(location, x, y, z);
}

static void uniform3fv3Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform3fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  FlexibleFloat32ArrayView v;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  ToFlexibleArrayBufferView(info.GetIsolate(), info[1], v, allocateFlexibleArrayBufferViewStorage(info[1]));
  if (!v) {
    exceptionState.ThrowTypeError("parameter 2 is not of type 'Float32Array'.");
    return;
  }

  impl->uniform3fv(location, v);
}

static void uniform3fv4Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform3fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  Vector<float> v;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  v = NativeValueTraits<IDLSequence<IDLUnrestrictedFloat>>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->uniform3fv(location, v);
}

static void uniform3fvMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(4, info.Length())) {
    case 2:
      if (info[1]->IsFloat32Array()) {
        uniform3fv3Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        uniform3fv4Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniform3fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exceptionState)) {
          uniform3fv4Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    case 3:
      if (info[1]->IsFloat32Array()) {
        uniform3fv1Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        uniform3fv2Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniform3fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exceptionState)) {
          uniform3fv2Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    case 4:
      if (info[1]->IsFloat32Array()) {
        uniform3fv1Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        uniform3fv2Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniform3fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exceptionState)) {
          uniform3fv2Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform3fv");
  if (isArityError) {
    if (info.Length() < 2) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void uniform3iMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform3i");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 4)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(4, info.Length()));
    return;
  }

  WebGLUniformLocation* location;
  int32_t x;
  int32_t y;
  int32_t z;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  x = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  y = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  z = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->uniform3i(location, x, y, z);
}

static void uniform3iv3Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform3iv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  FlexibleInt32ArrayView v;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  ToFlexibleArrayBufferView(info.GetIsolate(), info[1], v, allocateFlexibleArrayBufferViewStorage(info[1]));
  if (!v) {
    exceptionState.ThrowTypeError("parameter 2 is not of type 'Int32Array'.");
    return;
  }

  impl->uniform3iv(location, v);
}

static void uniform3iv4Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform3iv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  Vector<int32_t> v;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  v = NativeValueTraits<IDLSequence<IDLLong>>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->uniform3iv(location, v);
}

static void uniform3ivMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(4, info.Length())) {
    case 2:
      if (info[1]->IsInt32Array()) {
        uniform3iv3Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        uniform3iv4Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniform3iv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exceptionState)) {
          uniform3iv4Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    case 3:
      if (info[1]->IsInt32Array()) {
        uniform3iv1Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        uniform3iv2Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniform3iv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exceptionState)) {
          uniform3iv2Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    case 4:
      if (info[1]->IsInt32Array()) {
        uniform3iv1Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        uniform3iv2Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniform3iv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exceptionState)) {
          uniform3iv2Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform3iv");
  if (isArityError) {
    if (info.Length() < 2) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void uniform4fMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform4f");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 5)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(5, info.Length()));
    return;
  }

  WebGLUniformLocation* location;
  float x;
  float y;
  float z;
  float w;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  x = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  y = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;

  z = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[3], exceptionState);
  if (exceptionState.HadException())
    return;

  w = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[4], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->uniform4f(location, x, y, z, w);
}

static void uniform4fv3Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform4fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  FlexibleFloat32ArrayView v;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  ToFlexibleArrayBufferView(info.GetIsolate(), info[1], v, allocateFlexibleArrayBufferViewStorage(info[1]));
  if (!v) {
    exceptionState.ThrowTypeError("parameter 2 is not of type 'Float32Array'.");
    return;
  }

  impl->uniform4fv(location, v);
}

static void uniform4fv4Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform4fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  Vector<float> v;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  v = NativeValueTraits<IDLSequence<IDLUnrestrictedFloat>>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->uniform4fv(location, v);
}

static void uniform4fvMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(4, info.Length())) {
    case 2:
      if (info[1]->IsFloat32Array()) {
        uniform4fv3Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        uniform4fv4Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniform4fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exceptionState)) {
          uniform4fv4Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    case 3:
      if (info[1]->IsFloat32Array()) {
        uniform4fv1Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        uniform4fv2Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniform4fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exceptionState)) {
          uniform4fv2Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    case 4:
      if (info[1]->IsFloat32Array()) {
        uniform4fv1Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        uniform4fv2Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniform4fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exceptionState)) {
          uniform4fv2Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform4fv");
  if (isArityError) {
    if (info.Length() < 2) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void uniform4iMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform4i");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 5)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(5, info.Length()));
    return;
  }

  WebGLUniformLocation* location;
  int32_t x;
  int32_t y;
  int32_t z;
  int32_t w;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  x = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  y = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  z = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  w = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->uniform4i(location, x, y, z, w);
}

static void uniform4iv3Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform4iv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  FlexibleInt32ArrayView v;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  ToFlexibleArrayBufferView(info.GetIsolate(), info[1], v, allocateFlexibleArrayBufferViewStorage(info[1]));
  if (!v) {
    exceptionState.ThrowTypeError("parameter 2 is not of type 'Int32Array'.");
    return;
  }

  impl->uniform4iv(location, v);
}

static void uniform4iv4Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform4iv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  Vector<int32_t> v;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  v = NativeValueTraits<IDLSequence<IDLLong>>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->uniform4iv(location, v);
}

static void uniform4ivMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(4, info.Length())) {
    case 2:
      if (info[1]->IsInt32Array()) {
        uniform4iv3Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        uniform4iv4Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniform4iv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exceptionState)) {
          uniform4iv4Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    case 3:
      if (info[1]->IsInt32Array()) {
        uniform4iv1Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        uniform4iv2Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniform4iv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exceptionState)) {
          uniform4iv2Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    case 4:
      if (info[1]->IsInt32Array()) {
        uniform4iv1Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        uniform4iv2Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniform4iv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exceptionState)) {
          uniform4iv2Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform4iv");
  if (isArityError) {
    if (info.Length() < 2) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void uniformMatrix2fv3Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniformMatrix2fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  bool transpose;
  MaybeShared<DOMFloat32Array> array;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  transpose = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  array = ToMaybeShared<MaybeShared<DOMFloat32Array>>(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;
  if (!array) {
    exceptionState.ThrowTypeError("parameter 3 is not of type 'Float32Array'.");
    return;
  }

  impl->uniformMatrix2fv(location, transpose, array);
}

static void uniformMatrix2fv4Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniformMatrix2fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  bool transpose;
  Vector<float> array;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  transpose = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  array = NativeValueTraits<IDLSequence<IDLUnrestrictedFloat>>::NativeValue(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->uniformMatrix2fv(location, transpose, array);
}

static void uniformMatrix2fvMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(5, info.Length())) {
    case 3:
      if (info[2]->IsFloat32Array()) {
        uniformMatrix2fv3Method(info);
        return;
      }
      if (info[2]->IsArray()) {
        uniformMatrix2fv4Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniformMatrix2fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[2], exceptionState)) {
          uniformMatrix2fv4Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    case 4:
      if (info[2]->IsFloat32Array()) {
        uniformMatrix2fv1Method(info);
        return;
      }
      if (info[2]->IsArray()) {
        uniformMatrix2fv2Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniformMatrix2fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[2], exceptionState)) {
          uniformMatrix2fv2Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    case 5:
      if (info[2]->IsFloat32Array()) {
        uniformMatrix2fv1Method(info);
        return;
      }
      if (info[2]->IsArray()) {
        uniformMatrix2fv2Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniformMatrix2fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[2], exceptionState)) {
          uniformMatrix2fv2Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniformMatrix2fv");
  if (isArityError) {
    if (info.Length() < 3) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void uniformMatrix3fv3Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniformMatrix3fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  bool transpose;
  MaybeShared<DOMFloat32Array> array;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  transpose = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  array = ToMaybeShared<MaybeShared<DOMFloat32Array>>(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;
  if (!array) {
    exceptionState.ThrowTypeError("parameter 3 is not of type 'Float32Array'.");
    return;
  }

  impl->uniformMatrix3fv(location, transpose, array);
}

static void uniformMatrix3fv4Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniformMatrix3fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  bool transpose;
  Vector<float> array;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  transpose = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  array = NativeValueTraits<IDLSequence<IDLUnrestrictedFloat>>::NativeValue(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->uniformMatrix3fv(location, transpose, array);
}

static void uniformMatrix3fvMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(5, info.Length())) {
    case 3:
      if (info[2]->IsFloat32Array()) {
        uniformMatrix3fv3Method(info);
        return;
      }
      if (info[2]->IsArray()) {
        uniformMatrix3fv4Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniformMatrix3fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[2], exceptionState)) {
          uniformMatrix3fv4Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    case 4:
      if (info[2]->IsFloat32Array()) {
        uniformMatrix3fv1Method(info);
        return;
      }
      if (info[2]->IsArray()) {
        uniformMatrix3fv2Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniformMatrix3fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[2], exceptionState)) {
          uniformMatrix3fv2Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    case 5:
      if (info[2]->IsFloat32Array()) {
        uniformMatrix3fv1Method(info);
        return;
      }
      if (info[2]->IsArray()) {
        uniformMatrix3fv2Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniformMatrix3fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[2], exceptionState)) {
          uniformMatrix3fv2Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniformMatrix3fv");
  if (isArityError) {
    if (info.Length() < 3) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void uniformMatrix4fv3Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniformMatrix4fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  bool transpose;
  MaybeShared<DOMFloat32Array> array;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  transpose = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  array = ToMaybeShared<MaybeShared<DOMFloat32Array>>(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;
  if (!array) {
    exceptionState.ThrowTypeError("parameter 3 is not of type 'Float32Array'.");
    return;
  }

  impl->uniformMatrix4fv(location, transpose, array);
}

static void uniformMatrix4fv4Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniformMatrix4fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  bool transpose;
  Vector<float> array;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  transpose = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  array = NativeValueTraits<IDLSequence<IDLUnrestrictedFloat>>::NativeValue(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->uniformMatrix4fv(location, transpose, array);
}

static void uniformMatrix4fvMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(5, info.Length())) {
    case 3:
      if (info[2]->IsFloat32Array()) {
        uniformMatrix4fv3Method(info);
        return;
      }
      if (info[2]->IsArray()) {
        uniformMatrix4fv4Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniformMatrix4fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[2], exceptionState)) {
          uniformMatrix4fv4Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    case 4:
      if (info[2]->IsFloat32Array()) {
        uniformMatrix4fv1Method(info);
        return;
      }
      if (info[2]->IsArray()) {
        uniformMatrix4fv2Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniformMatrix4fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[2], exceptionState)) {
          uniformMatrix4fv2Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    case 5:
      if (info[2]->IsFloat32Array()) {
        uniformMatrix4fv1Method(info);
        return;
      }
      if (info[2]->IsArray()) {
        uniformMatrix4fv2Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniformMatrix4fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[2], exceptionState)) {
          uniformMatrix4fv2Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniformMatrix4fv");
  if (isArityError) {
    if (info.Length() < 3) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void useProgramMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("useProgram", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLProgram* program;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("useProgram", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLProgram'."));
    return;
  }

  impl->useProgram(program);
}

static void validateProgramMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("validateProgram", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLProgram* program;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("validateProgram", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLProgram'."));
    return;
  }

  impl->validateProgram(program);
}

static void vertexAttrib1fMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "vertexAttrib1f");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  uint32_t indx;
  float x;
  indx = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  x = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->vertexAttrib1f(indx, x);
}

static void vertexAttrib1fv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "vertexAttrib1fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t indx;
  MaybeShared<DOMFloat32Array> values;
  indx = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  values = ToMaybeShared<MaybeShared<DOMFloat32Array>>(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;
  if (!values) {
    exceptionState.ThrowTypeError("parameter 2 is not of type 'Float32Array'.");
    return;
  }

  impl->vertexAttrib1fv(indx, values);
}

static void vertexAttrib1fv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "vertexAttrib1fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t indx;
  Vector<float> values;
  indx = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  values = NativeValueTraits<IDLSequence<IDLUnrestrictedFloat>>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->vertexAttrib1fv(indx, values);
}

static void vertexAttrib1fvMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(2, info.Length())) {
    case 2:
      if (info[1]->IsFloat32Array()) {
        vertexAttrib1fv1Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        vertexAttrib1fv2Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "vertexAttrib1fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exceptionState)) {
          vertexAttrib1fv2Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "vertexAttrib1fv");
  if (isArityError) {
    if (info.Length() < 2) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void vertexAttrib2fMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "vertexAttrib2f");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  uint32_t indx;
  float x;
  float y;
  indx = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  x = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  y = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->vertexAttrib2f(indx, x, y);
}

static void vertexAttrib2fv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "vertexAttrib2fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t indx;
  MaybeShared<DOMFloat32Array> values;
  indx = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  values = ToMaybeShared<MaybeShared<DOMFloat32Array>>(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;
  if (!values) {
    exceptionState.ThrowTypeError("parameter 2 is not of type 'Float32Array'.");
    return;
  }

  impl->vertexAttrib2fv(indx, values);
}

static void vertexAttrib2fv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "vertexAttrib2fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t indx;
  Vector<float> values;
  indx = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  values = NativeValueTraits<IDLSequence<IDLUnrestrictedFloat>>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->vertexAttrib2fv(indx, values);
}

static void vertexAttrib2fvMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(2, info.Length())) {
    case 2:
      if (info[1]->IsFloat32Array()) {
        vertexAttrib2fv1Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        vertexAttrib2fv2Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "vertexAttrib2fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exceptionState)) {
          vertexAttrib2fv2Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "vertexAttrib2fv");
  if (isArityError) {
    if (info.Length() < 2) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void vertexAttrib3fMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "vertexAttrib3f");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 4)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(4, info.Length()));
    return;
  }

  uint32_t indx;
  float x;
  float y;
  float z;
  indx = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  x = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  y = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;

  z = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[3], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->vertexAttrib3f(indx, x, y, z);
}

static void vertexAttrib3fv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "vertexAttrib3fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t indx;
  MaybeShared<DOMFloat32Array> values;
  indx = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  values = ToMaybeShared<MaybeShared<DOMFloat32Array>>(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;
  if (!values) {
    exceptionState.ThrowTypeError("parameter 2 is not of type 'Float32Array'.");
    return;
  }

  impl->vertexAttrib3fv(indx, values);
}

static void vertexAttrib3fv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "vertexAttrib3fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t indx;
  Vector<float> values;
  indx = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  values = NativeValueTraits<IDLSequence<IDLUnrestrictedFloat>>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->vertexAttrib3fv(indx, values);
}

static void vertexAttrib3fvMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(2, info.Length())) {
    case 2:
      if (info[1]->IsFloat32Array()) {
        vertexAttrib3fv1Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        vertexAttrib3fv2Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "vertexAttrib3fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exceptionState)) {
          vertexAttrib3fv2Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "vertexAttrib3fv");
  if (isArityError) {
    if (info.Length() < 2) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void vertexAttrib4fMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "vertexAttrib4f");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 5)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(5, info.Length()));
    return;
  }

  uint32_t indx;
  float x;
  float y;
  float z;
  float w;
  indx = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  x = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  y = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;

  z = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[3], exceptionState);
  if (exceptionState.HadException())
    return;

  w = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[4], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->vertexAttrib4f(indx, x, y, z, w);
}

static void vertexAttrib4fv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "vertexAttrib4fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t indx;
  MaybeShared<DOMFloat32Array> values;
  indx = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  values = ToMaybeShared<MaybeShared<DOMFloat32Array>>(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;
  if (!values) {
    exceptionState.ThrowTypeError("parameter 2 is not of type 'Float32Array'.");
    return;
  }

  impl->vertexAttrib4fv(indx, values);
}

static void vertexAttrib4fv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "vertexAttrib4fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t indx;
  Vector<float> values;
  indx = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  values = NativeValueTraits<IDLSequence<IDLUnrestrictedFloat>>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->vertexAttrib4fv(indx, values);
}

static void vertexAttrib4fvMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(2, info.Length())) {
    case 2:
      if (info[1]->IsFloat32Array()) {
        vertexAttrib4fv1Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        vertexAttrib4fv2Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "vertexAttrib4fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exceptionState)) {
          vertexAttrib4fv2Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "vertexAttrib4fv");
  if (isArityError) {
    if (info.Length() < 2) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void vertexAttribPointerMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "vertexAttribPointer");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 6)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(6, info.Length()));
    return;
  }

  uint32_t indx;
  int32_t size;
  uint32_t type;
  bool normalized;
  int32_t stride;
  int64_t offset;
  indx = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  size = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  normalized = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[3], exceptionState);
  if (exceptionState.HadException())
    return;

  stride = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  offset = NativeValueTraits<IDLLongLong>::NativeValue(info.GetIsolate(), info[5], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->vertexAttribPointer(indx, size, type, normalized, stride, offset);
}

static void viewportMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "viewport");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 4)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(4, info.Length()));
    return;
  }

  int32_t x;
  int32_t y;
  int32_t width;
  int32_t height;
  x = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  y = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->viewport(x, y, width, height);
}

static void commitMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  impl->commit();
}

static void setCompatibleXRDeviceMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "setCompatibleXRDevice");
  ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8WebGL2RenderingContext::hasInstance(info.Holder(), info.GetIsolate())) {
    exceptionState.ThrowTypeError("Illegal invocation");
    return;
  }
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  XRDevice* device;
  device = V8XRDevice::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!device) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'XRDevice'.");
    return;
  }

  ScriptPromise result = impl->setCompatibleXRDevice(scriptState, device);
  V8SetReturnValue(info, result.V8Value());
}

} // namespace WebGL2RenderingContextV8Internal

void V8WebGL2RenderingContext::canvasAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_canvas_Getter");

  WebGL2RenderingContextV8Internal::canvasAttributeGetter(info);
}

void V8WebGL2RenderingContext::drawingBufferWidthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_drawingBufferWidth_Getter");

  WebGL2RenderingContextV8Internal::drawingBufferWidthAttributeGetter(info);
}

void V8WebGL2RenderingContext::drawingBufferHeightAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_drawingBufferHeight_Getter");

  WebGL2RenderingContextV8Internal::drawingBufferHeightAttributeGetter(info);
}

void V8WebGL2RenderingContext::copyBufferSubDataMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_copyBufferSubData");

  WebGL2RenderingContextV8Internal::copyBufferSubDataMethod(info);
}

void V8WebGL2RenderingContext::getBufferSubDataMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getBufferSubData");

  WebGL2RenderingContextV8Internal::getBufferSubDataMethod(info);
}

void V8WebGL2RenderingContext::blitFramebufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_blitFramebuffer");

  WebGL2RenderingContextV8Internal::blitFramebufferMethod(info);
}

void V8WebGL2RenderingContext::framebufferTextureLayerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_framebufferTextureLayer");

  WebGL2RenderingContextV8Internal::framebufferTextureLayerMethod(info);
}

void V8WebGL2RenderingContext::getInternalformatParameterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getInternalformatParameter");

  WebGL2RenderingContextV8Internal::getInternalformatParameterMethod(info);
}

void V8WebGL2RenderingContext::invalidateFramebufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_invalidateFramebuffer");

  WebGL2RenderingContextV8Internal::invalidateFramebufferMethod(info);
}

void V8WebGL2RenderingContext::invalidateSubFramebufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_invalidateSubFramebuffer");

  WebGL2RenderingContextV8Internal::invalidateSubFramebufferMethod(info);
}

void V8WebGL2RenderingContext::readBufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_readBuffer");

  WebGL2RenderingContextV8Internal::readBufferMethod(info);
}

void V8WebGL2RenderingContext::renderbufferStorageMultisampleMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_renderbufferStorageMultisample");

  WebGL2RenderingContextV8Internal::renderbufferStorageMultisampleMethod(info);
}

void V8WebGL2RenderingContext::texStorage2DMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_texStorage2D");

  WebGL2RenderingContextV8Internal::texStorage2DMethod(info);
}

void V8WebGL2RenderingContext::texStorage3DMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_texStorage3D");

  WebGL2RenderingContextV8Internal::texStorage3DMethod(info);
}

void V8WebGL2RenderingContext::texImage3DMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_texImage3D");

  WebGL2RenderingContextV8Internal::texImage3DMethod(info);
}

void V8WebGL2RenderingContext::texSubImage3DMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_texSubImage3D");

  WebGL2RenderingContextV8Internal::texSubImage3DMethod(info);
}

void V8WebGL2RenderingContext::copyTexSubImage3DMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_copyTexSubImage3D");

  WebGL2RenderingContextV8Internal::copyTexSubImage3DMethod(info);
}

void V8WebGL2RenderingContext::compressedTexImage3DMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_compressedTexImage3D");

  WebGL2RenderingContextV8Internal::compressedTexImage3DMethod(info);
}

void V8WebGL2RenderingContext::compressedTexSubImage3DMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_compressedTexSubImage3D");

  WebGL2RenderingContextV8Internal::compressedTexSubImage3DMethod(info);
}

void V8WebGL2RenderingContext::getFragDataLocationMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getFragDataLocation");

  WebGL2RenderingContextV8Internal::getFragDataLocationMethod(info);
}

void V8WebGL2RenderingContext::uniform1uiMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_uniform1ui");

  WebGL2RenderingContextV8Internal::uniform1uiMethod(info);
}

void V8WebGL2RenderingContext::uniform2uiMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_uniform2ui");

  WebGL2RenderingContextV8Internal::uniform2uiMethod(info);
}

void V8WebGL2RenderingContext::uniform3uiMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_uniform3ui");

  WebGL2RenderingContextV8Internal::uniform3uiMethod(info);
}

void V8WebGL2RenderingContext::uniform4uiMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_uniform4ui");

  WebGL2RenderingContextV8Internal::uniform4uiMethod(info);
}

void V8WebGL2RenderingContext::uniform1uivMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_uniform1uiv");

  WebGL2RenderingContextV8Internal::uniform1uivMethod(info);
}

void V8WebGL2RenderingContext::uniform2uivMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_uniform2uiv");

  WebGL2RenderingContextV8Internal::uniform2uivMethod(info);
}

void V8WebGL2RenderingContext::uniform3uivMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_uniform3uiv");

  WebGL2RenderingContextV8Internal::uniform3uivMethod(info);
}

void V8WebGL2RenderingContext::uniform4uivMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_uniform4uiv");

  WebGL2RenderingContextV8Internal::uniform4uivMethod(info);
}

void V8WebGL2RenderingContext::uniformMatrix2x3fvMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_uniformMatrix2x3fv");

  WebGL2RenderingContextV8Internal::uniformMatrix2x3fvMethod(info);
}

void V8WebGL2RenderingContext::uniformMatrix3x2fvMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_uniformMatrix3x2fv");

  WebGL2RenderingContextV8Internal::uniformMatrix3x2fvMethod(info);
}

void V8WebGL2RenderingContext::uniformMatrix2x4fvMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_uniformMatrix2x4fv");

  WebGL2RenderingContextV8Internal::uniformMatrix2x4fvMethod(info);
}

void V8WebGL2RenderingContext::uniformMatrix4x2fvMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_uniformMatrix4x2fv");

  WebGL2RenderingContextV8Internal::uniformMatrix4x2fvMethod(info);
}

void V8WebGL2RenderingContext::uniformMatrix3x4fvMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_uniformMatrix3x4fv");

  WebGL2RenderingContextV8Internal::uniformMatrix3x4fvMethod(info);
}

void V8WebGL2RenderingContext::uniformMatrix4x3fvMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_uniformMatrix4x3fv");

  WebGL2RenderingContextV8Internal::uniformMatrix4x3fvMethod(info);
}

void V8WebGL2RenderingContext::vertexAttribI4iMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_vertexAttribI4i");

  WebGL2RenderingContextV8Internal::vertexAttribI4iMethod(info);
}

void V8WebGL2RenderingContext::vertexAttribI4ivMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_vertexAttribI4iv");

  WebGL2RenderingContextV8Internal::vertexAttribI4ivMethod(info);
}

void V8WebGL2RenderingContext::vertexAttribI4uiMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_vertexAttribI4ui");

  WebGL2RenderingContextV8Internal::vertexAttribI4uiMethod(info);
}

void V8WebGL2RenderingContext::vertexAttribI4uivMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_vertexAttribI4uiv");

  WebGL2RenderingContextV8Internal::vertexAttribI4uivMethod(info);
}

void V8WebGL2RenderingContext::vertexAttribIPointerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_vertexAttribIPointer");

  WebGL2RenderingContextV8Internal::vertexAttribIPointerMethod(info);
}

void V8WebGL2RenderingContext::vertexAttribDivisorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_vertexAttribDivisor");

  WebGL2RenderingContextV8Internal::vertexAttribDivisorMethod(info);
}

void V8WebGL2RenderingContext::drawArraysInstancedMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_drawArraysInstanced");

  WebGL2RenderingContextV8Internal::drawArraysInstancedMethod(info);
}

void V8WebGL2RenderingContext::drawElementsInstancedMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_drawElementsInstanced");

  WebGL2RenderingContextV8Internal::drawElementsInstancedMethod(info);
}

void V8WebGL2RenderingContext::drawRangeElementsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_drawRangeElements");

  WebGL2RenderingContextV8Internal::drawRangeElementsMethod(info);
}

void V8WebGL2RenderingContext::drawBuffersMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_drawBuffers");

  WebGL2RenderingContextV8Internal::drawBuffersMethod(info);
}

void V8WebGL2RenderingContext::clearBufferivMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_clearBufferiv");

  WebGL2RenderingContextV8Internal::clearBufferivMethod(info);
}

void V8WebGL2RenderingContext::clearBufferuivMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_clearBufferuiv");

  WebGL2RenderingContextV8Internal::clearBufferuivMethod(info);
}

void V8WebGL2RenderingContext::clearBufferfvMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_clearBufferfv");

  WebGL2RenderingContextV8Internal::clearBufferfvMethod(info);
}

void V8WebGL2RenderingContext::clearBufferfiMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_clearBufferfi");

  WebGL2RenderingContextV8Internal::clearBufferfiMethod(info);
}

void V8WebGL2RenderingContext::createQueryMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_createQuery");

  WebGL2RenderingContextV8Internal::createQueryMethod(info);
}

void V8WebGL2RenderingContext::deleteQueryMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_deleteQuery");

  WebGL2RenderingContextV8Internal::deleteQueryMethod(info);
}

void V8WebGL2RenderingContext::isQueryMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_isQuery");

  WebGL2RenderingContextV8Internal::isQueryMethod(info);
}

void V8WebGL2RenderingContext::beginQueryMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_beginQuery");

  WebGL2RenderingContextV8Internal::beginQueryMethod(info);
}

void V8WebGL2RenderingContext::endQueryMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_endQuery");

  WebGL2RenderingContextV8Internal::endQueryMethod(info);
}

void V8WebGL2RenderingContext::getQueryMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getQuery");

  WebGL2RenderingContextV8Internal::getQueryMethod(info);
}

void V8WebGL2RenderingContext::getQueryParameterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getQueryParameter");

  WebGL2RenderingContextV8Internal::getQueryParameterMethod(info);
}

void V8WebGL2RenderingContext::createSamplerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_createSampler");

  WebGL2RenderingContextV8Internal::createSamplerMethod(info);
}

void V8WebGL2RenderingContext::deleteSamplerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_deleteSampler");

  WebGL2RenderingContextV8Internal::deleteSamplerMethod(info);
}

void V8WebGL2RenderingContext::isSamplerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_isSampler");

  WebGL2RenderingContextV8Internal::isSamplerMethod(info);
}

void V8WebGL2RenderingContext::bindSamplerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_bindSampler");

  WebGL2RenderingContextV8Internal::bindSamplerMethod(info);
}

void V8WebGL2RenderingContext::samplerParameteriMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_samplerParameteri");

  WebGL2RenderingContextV8Internal::samplerParameteriMethod(info);
}

void V8WebGL2RenderingContext::samplerParameterfMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_samplerParameterf");

  WebGL2RenderingContextV8Internal::samplerParameterfMethod(info);
}

void V8WebGL2RenderingContext::getSamplerParameterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getSamplerParameter");

  WebGL2RenderingContextV8Internal::getSamplerParameterMethod(info);
}

void V8WebGL2RenderingContext::fenceSyncMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_fenceSync");

  WebGL2RenderingContextV8Internal::fenceSyncMethod(info);
}

void V8WebGL2RenderingContext::isSyncMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_isSync");

  WebGL2RenderingContextV8Internal::isSyncMethod(info);
}

void V8WebGL2RenderingContext::deleteSyncMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_deleteSync");

  WebGL2RenderingContextV8Internal::deleteSyncMethod(info);
}

void V8WebGL2RenderingContext::clientWaitSyncMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_clientWaitSync");

  WebGL2RenderingContextV8Internal::clientWaitSyncMethod(info);
}

void V8WebGL2RenderingContext::waitSyncMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_waitSync");

  WebGL2RenderingContextV8Internal::waitSyncMethod(info);
}

void V8WebGL2RenderingContext::getSyncParameterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getSyncParameter");

  WebGL2RenderingContextV8Internal::getSyncParameterMethod(info);
}

void V8WebGL2RenderingContext::createTransformFeedbackMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_createTransformFeedback");

  WebGL2RenderingContextV8Internal::createTransformFeedbackMethod(info);
}

void V8WebGL2RenderingContext::deleteTransformFeedbackMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_deleteTransformFeedback");

  WebGL2RenderingContextV8Internal::deleteTransformFeedbackMethod(info);
}

void V8WebGL2RenderingContext::isTransformFeedbackMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_isTransformFeedback");

  WebGL2RenderingContextV8Internal::isTransformFeedbackMethod(info);
}

void V8WebGL2RenderingContext::bindTransformFeedbackMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_bindTransformFeedback");

  WebGL2RenderingContextV8Internal::bindTransformFeedbackMethod(info);
}

void V8WebGL2RenderingContext::beginTransformFeedbackMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_beginTransformFeedback");

  WebGL2RenderingContextV8Internal::beginTransformFeedbackMethod(info);
}

void V8WebGL2RenderingContext::endTransformFeedbackMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_endTransformFeedback");

  WebGL2RenderingContextV8Internal::endTransformFeedbackMethod(info);
}

void V8WebGL2RenderingContext::transformFeedbackVaryingsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_transformFeedbackVaryings");

  WebGL2RenderingContextV8Internal::transformFeedbackVaryingsMethod(info);
}

void V8WebGL2RenderingContext::getTransformFeedbackVaryingMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getTransformFeedbackVarying");

  WebGL2RenderingContextV8Internal::getTransformFeedbackVaryingMethod(info);
}

void V8WebGL2RenderingContext::pauseTransformFeedbackMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_pauseTransformFeedback");

  WebGL2RenderingContextV8Internal::pauseTransformFeedbackMethod(info);
}

void V8WebGL2RenderingContext::resumeTransformFeedbackMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_resumeTransformFeedback");

  WebGL2RenderingContextV8Internal::resumeTransformFeedbackMethod(info);
}

void V8WebGL2RenderingContext::bindBufferBaseMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_bindBufferBase");

  WebGL2RenderingContextV8Internal::bindBufferBaseMethod(info);
}

void V8WebGL2RenderingContext::bindBufferRangeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_bindBufferRange");

  WebGL2RenderingContextV8Internal::bindBufferRangeMethod(info);
}

void V8WebGL2RenderingContext::getIndexedParameterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getIndexedParameter");

  WebGL2RenderingContextV8Internal::getIndexedParameterMethod(info);
}

void V8WebGL2RenderingContext::getUniformIndicesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getUniformIndices");

  WebGL2RenderingContextV8Internal::getUniformIndicesMethod(info);
}

void V8WebGL2RenderingContext::getActiveUniformsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getActiveUniforms");

  WebGL2RenderingContextV8Internal::getActiveUniformsMethod(info);
}

void V8WebGL2RenderingContext::getUniformBlockIndexMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getUniformBlockIndex");

  WebGL2RenderingContextV8Internal::getUniformBlockIndexMethod(info);
}

void V8WebGL2RenderingContext::getActiveUniformBlockParameterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getActiveUniformBlockParameter");

  WebGL2RenderingContextV8Internal::getActiveUniformBlockParameterMethod(info);
}

void V8WebGL2RenderingContext::getActiveUniformBlockNameMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getActiveUniformBlockName");

  WebGL2RenderingContextV8Internal::getActiveUniformBlockNameMethod(info);
}

void V8WebGL2RenderingContext::uniformBlockBindingMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_uniformBlockBinding");

  WebGL2RenderingContextV8Internal::uniformBlockBindingMethod(info);
}

void V8WebGL2RenderingContext::createVertexArrayMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_createVertexArray");

  WebGL2RenderingContextV8Internal::createVertexArrayMethod(info);
}

void V8WebGL2RenderingContext::deleteVertexArrayMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_deleteVertexArray");

  WebGL2RenderingContextV8Internal::deleteVertexArrayMethod(info);
}

void V8WebGL2RenderingContext::isVertexArrayMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_isVertexArray");

  WebGL2RenderingContextV8Internal::isVertexArrayMethod(info);
}

void V8WebGL2RenderingContext::bindVertexArrayMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_bindVertexArray");

  WebGL2RenderingContextV8Internal::bindVertexArrayMethod(info);
}

void V8WebGL2RenderingContext::activeTextureMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_activeTexture");

  WebGL2RenderingContextV8Internal::activeTextureMethod(info);
}

void V8WebGL2RenderingContext::attachShaderMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_attachShader");

  WebGL2RenderingContextV8Internal::attachShaderMethod(info);
}

void V8WebGL2RenderingContext::bindAttribLocationMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_bindAttribLocation");

  WebGL2RenderingContextV8Internal::bindAttribLocationMethod(info);
}

void V8WebGL2RenderingContext::bindBufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_bindBuffer");

  WebGL2RenderingContextV8Internal::bindBufferMethod(info);
}

void V8WebGL2RenderingContext::bindFramebufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_bindFramebuffer");

  WebGL2RenderingContextV8Internal::bindFramebufferMethod(info);
}

void V8WebGL2RenderingContext::bindRenderbufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_bindRenderbuffer");

  WebGL2RenderingContextV8Internal::bindRenderbufferMethod(info);
}

void V8WebGL2RenderingContext::bindTextureMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_bindTexture");

  WebGL2RenderingContextV8Internal::bindTextureMethod(info);
}

void V8WebGL2RenderingContext::blendColorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_blendColor");

  WebGL2RenderingContextV8Internal::blendColorMethod(info);
}

void V8WebGL2RenderingContext::blendEquationMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_blendEquation");

  WebGL2RenderingContextV8Internal::blendEquationMethod(info);
}

void V8WebGL2RenderingContext::blendEquationSeparateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_blendEquationSeparate");

  WebGL2RenderingContextV8Internal::blendEquationSeparateMethod(info);
}

void V8WebGL2RenderingContext::blendFuncMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_blendFunc");

  WebGL2RenderingContextV8Internal::blendFuncMethod(info);
}

void V8WebGL2RenderingContext::blendFuncSeparateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_blendFuncSeparate");

  WebGL2RenderingContextV8Internal::blendFuncSeparateMethod(info);
}

void V8WebGL2RenderingContext::bufferDataMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_bufferData");

  WebGL2RenderingContextV8Internal::bufferDataMethod(info);
}

void V8WebGL2RenderingContext::bufferSubDataMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_bufferSubData");

  WebGL2RenderingContextV8Internal::bufferSubDataMethod(info);
}

void V8WebGL2RenderingContext::checkFramebufferStatusMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_checkFramebufferStatus");

  WebGL2RenderingContextV8Internal::checkFramebufferStatusMethod(info);
}

void V8WebGL2RenderingContext::clearMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_clear");

  WebGL2RenderingContextV8Internal::clearMethod(info);
}

void V8WebGL2RenderingContext::clearColorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_clearColor");

  WebGL2RenderingContextV8Internal::clearColorMethod(info);
}

void V8WebGL2RenderingContext::clearDepthMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_clearDepth");

  WebGL2RenderingContextV8Internal::clearDepthMethod(info);
}

void V8WebGL2RenderingContext::clearStencilMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_clearStencil");

  WebGL2RenderingContextV8Internal::clearStencilMethod(info);
}

void V8WebGL2RenderingContext::colorMaskMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_colorMask");

  WebGL2RenderingContextV8Internal::colorMaskMethod(info);
}

void V8WebGL2RenderingContext::compileShaderMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_compileShader");

  WebGL2RenderingContextV8Internal::compileShaderMethod(info);
}

void V8WebGL2RenderingContext::compressedTexImage2DMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_compressedTexImage2D");

  WebGL2RenderingContextV8Internal::compressedTexImage2DMethod(info);
}

void V8WebGL2RenderingContext::compressedTexSubImage2DMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_compressedTexSubImage2D");

  WebGL2RenderingContextV8Internal::compressedTexSubImage2DMethod(info);
}

void V8WebGL2RenderingContext::copyTexImage2DMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_copyTexImage2D");

  WebGL2RenderingContextV8Internal::copyTexImage2DMethod(info);
}

void V8WebGL2RenderingContext::copyTexSubImage2DMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_copyTexSubImage2D");

  WebGL2RenderingContextV8Internal::copyTexSubImage2DMethod(info);
}

void V8WebGL2RenderingContext::createBufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_createBuffer");

  WebGL2RenderingContextV8Internal::createBufferMethod(info);
}

void V8WebGL2RenderingContext::createFramebufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_createFramebuffer");

  WebGL2RenderingContextV8Internal::createFramebufferMethod(info);
}

void V8WebGL2RenderingContext::createProgramMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_createProgram");

  WebGL2RenderingContextV8Internal::createProgramMethod(info);
}

void V8WebGL2RenderingContext::createRenderbufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_createRenderbuffer");

  WebGL2RenderingContextV8Internal::createRenderbufferMethod(info);
}

void V8WebGL2RenderingContext::createShaderMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_createShader");

  WebGL2RenderingContextV8Internal::createShaderMethod(info);
}

void V8WebGL2RenderingContext::createTextureMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_createTexture");

  WebGL2RenderingContextV8Internal::createTextureMethod(info);
}

void V8WebGL2RenderingContext::cullFaceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_cullFace");

  WebGL2RenderingContextV8Internal::cullFaceMethod(info);
}

void V8WebGL2RenderingContext::deleteBufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_deleteBuffer");

  WebGL2RenderingContextV8Internal::deleteBufferMethod(info);
}

void V8WebGL2RenderingContext::deleteFramebufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_deleteFramebuffer");

  WebGL2RenderingContextV8Internal::deleteFramebufferMethod(info);
}

void V8WebGL2RenderingContext::deleteProgramMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_deleteProgram");

  WebGL2RenderingContextV8Internal::deleteProgramMethod(info);
}

void V8WebGL2RenderingContext::deleteRenderbufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_deleteRenderbuffer");

  WebGL2RenderingContextV8Internal::deleteRenderbufferMethod(info);
}

void V8WebGL2RenderingContext::deleteShaderMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_deleteShader");

  WebGL2RenderingContextV8Internal::deleteShaderMethod(info);
}

void V8WebGL2RenderingContext::deleteTextureMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_deleteTexture");

  WebGL2RenderingContextV8Internal::deleteTextureMethod(info);
}

void V8WebGL2RenderingContext::depthFuncMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_depthFunc");

  WebGL2RenderingContextV8Internal::depthFuncMethod(info);
}

void V8WebGL2RenderingContext::depthMaskMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_depthMask");

  WebGL2RenderingContextV8Internal::depthMaskMethod(info);
}

void V8WebGL2RenderingContext::depthRangeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_depthRange");

  WebGL2RenderingContextV8Internal::depthRangeMethod(info);
}

void V8WebGL2RenderingContext::detachShaderMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_detachShader");

  WebGL2RenderingContextV8Internal::detachShaderMethod(info);
}

void V8WebGL2RenderingContext::disableMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_disable");

  WebGL2RenderingContextV8Internal::disableMethod(info);
}

void V8WebGL2RenderingContext::disableVertexAttribArrayMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_disableVertexAttribArray");

  WebGL2RenderingContextV8Internal::disableVertexAttribArrayMethod(info);
}

void V8WebGL2RenderingContext::drawArraysMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_drawArrays");

  WebGL2RenderingContextV8Internal::drawArraysMethod(info);
}

void V8WebGL2RenderingContext::drawElementsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_drawElements");

  WebGL2RenderingContextV8Internal::drawElementsMethod(info);
}

void V8WebGL2RenderingContext::enableMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_enable");

  WebGL2RenderingContextV8Internal::enableMethod(info);
}

void V8WebGL2RenderingContext::enableVertexAttribArrayMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_enableVertexAttribArray");

  WebGL2RenderingContextV8Internal::enableVertexAttribArrayMethod(info);
}

void V8WebGL2RenderingContext::finishMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_finish");

  WebGL2RenderingContextV8Internal::finishMethod(info);
}

void V8WebGL2RenderingContext::flushMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_flush");

  WebGL2RenderingContextV8Internal::flushMethod(info);
}

void V8WebGL2RenderingContext::framebufferRenderbufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_framebufferRenderbuffer");

  WebGL2RenderingContextV8Internal::framebufferRenderbufferMethod(info);
}

void V8WebGL2RenderingContext::framebufferTexture2DMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_framebufferTexture2D");

  WebGL2RenderingContextV8Internal::framebufferTexture2DMethod(info);
}

void V8WebGL2RenderingContext::frontFaceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_frontFace");

  WebGL2RenderingContextV8Internal::frontFaceMethod(info);
}

void V8WebGL2RenderingContext::generateMipmapMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_generateMipmap");

  WebGL2RenderingContextV8Internal::generateMipmapMethod(info);
}

void V8WebGL2RenderingContext::getActiveAttribMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getActiveAttrib");

  WebGL2RenderingContextV8Internal::getActiveAttribMethod(info);
}

void V8WebGL2RenderingContext::getActiveUniformMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getActiveUniform");

  WebGL2RenderingContextV8Internal::getActiveUniformMethod(info);
}

void V8WebGL2RenderingContext::getAttachedShadersMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getAttachedShaders");

  WebGL2RenderingContextV8Internal::getAttachedShadersMethod(info);
}

void V8WebGL2RenderingContext::getAttribLocationMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getAttribLocation");

  WebGL2RenderingContextV8Internal::getAttribLocationMethod(info);
}

void V8WebGL2RenderingContext::getBufferParameterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getBufferParameter");

  WebGL2RenderingContextV8Internal::getBufferParameterMethod(info);
}

void V8WebGL2RenderingContext::getContextAttributesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getContextAttributes");

  WebGL2RenderingContextV8Internal::getContextAttributesMethod(info);
}

void V8WebGL2RenderingContext::getErrorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getError");

  WebGL2RenderingContextV8Internal::getErrorMethod(info);
}

void V8WebGL2RenderingContext::getExtensionMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getExtension");

  WebGL2RenderingContextV8Internal::getExtensionMethod(info);
}

void V8WebGL2RenderingContext::getFramebufferAttachmentParameterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getFramebufferAttachmentParameter");

  WebGL2RenderingContextV8Internal::getFramebufferAttachmentParameterMethod(info);
}

void V8WebGL2RenderingContext::getParameterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getParameter");

  WebGL2RenderingContextV8Internal::getParameterMethod(info);
}

void V8WebGL2RenderingContext::getProgramParameterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getProgramParameter");

  WebGL2RenderingContextV8Internal::getProgramParameterMethod(info);
}

void V8WebGL2RenderingContext::getProgramInfoLogMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getProgramInfoLog");

  WebGL2RenderingContextV8Internal::getProgramInfoLogMethod(info);
}

void V8WebGL2RenderingContext::getRenderbufferParameterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getRenderbufferParameter");

  WebGL2RenderingContextV8Internal::getRenderbufferParameterMethod(info);
}

void V8WebGL2RenderingContext::getShaderParameterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getShaderParameter");

  WebGL2RenderingContextV8Internal::getShaderParameterMethod(info);
}

void V8WebGL2RenderingContext::getShaderInfoLogMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getShaderInfoLog");

  WebGL2RenderingContextV8Internal::getShaderInfoLogMethod(info);
}

void V8WebGL2RenderingContext::getShaderPrecisionFormatMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getShaderPrecisionFormat");

  WebGL2RenderingContextV8Internal::getShaderPrecisionFormatMethod(info);
}

void V8WebGL2RenderingContext::getShaderSourceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getShaderSource");

  WebGL2RenderingContextV8Internal::getShaderSourceMethod(info);
}

void V8WebGL2RenderingContext::getSupportedExtensionsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getSupportedExtensions");

  WebGL2RenderingContextV8Internal::getSupportedExtensionsMethod(info);
}

void V8WebGL2RenderingContext::getTexParameterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getTexParameter");

  WebGL2RenderingContextV8Internal::getTexParameterMethod(info);
}

void V8WebGL2RenderingContext::getUniformMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getUniform");

  WebGL2RenderingContextV8Internal::getUniformMethod(info);
}

void V8WebGL2RenderingContext::getUniformLocationMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getUniformLocation");

  WebGL2RenderingContextV8Internal::getUniformLocationMethod(info);
}

void V8WebGL2RenderingContext::getVertexAttribMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getVertexAttrib");

  WebGL2RenderingContextV8Internal::getVertexAttribMethod(info);
}

void V8WebGL2RenderingContext::getVertexAttribOffsetMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getVertexAttribOffset");

  WebGL2RenderingContextV8Internal::getVertexAttribOffsetMethod(info);
}

void V8WebGL2RenderingContext::hintMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_hint");

  WebGL2RenderingContextV8Internal::hintMethod(info);
}

void V8WebGL2RenderingContext::isBufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_isBuffer");

  WebGL2RenderingContextV8Internal::isBufferMethod(info);
}

void V8WebGL2RenderingContext::isContextLostMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_isContextLost");

  WebGL2RenderingContextV8Internal::isContextLostMethod(info);
}

void V8WebGL2RenderingContext::isEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_isEnabled");

  WebGL2RenderingContextV8Internal::isEnabledMethod(info);
}

void V8WebGL2RenderingContext::isFramebufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_isFramebuffer");

  WebGL2RenderingContextV8Internal::isFramebufferMethod(info);
}

void V8WebGL2RenderingContext::isProgramMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_isProgram");

  WebGL2RenderingContextV8Internal::isProgramMethod(info);
}

void V8WebGL2RenderingContext::isRenderbufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_isRenderbuffer");

  WebGL2RenderingContextV8Internal::isRenderbufferMethod(info);
}

void V8WebGL2RenderingContext::isShaderMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_isShader");

  WebGL2RenderingContextV8Internal::isShaderMethod(info);
}

void V8WebGL2RenderingContext::isTextureMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_isTexture");

  WebGL2RenderingContextV8Internal::isTextureMethod(info);
}

void V8WebGL2RenderingContext::lineWidthMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_lineWidth");

  WebGL2RenderingContextV8Internal::lineWidthMethod(info);
}

void V8WebGL2RenderingContext::linkProgramMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_linkProgram");

  WebGL2RenderingContextV8Internal::linkProgramMethod(info);
}

void V8WebGL2RenderingContext::pixelStoreiMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_pixelStorei");

  WebGL2RenderingContextV8Internal::pixelStoreiMethod(info);
}

void V8WebGL2RenderingContext::polygonOffsetMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_polygonOffset");

  WebGL2RenderingContextV8Internal::polygonOffsetMethod(info);
}

void V8WebGL2RenderingContext::readPixelsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_readPixels");

  WebGL2RenderingContextV8Internal::readPixelsMethod(info);
}

void V8WebGL2RenderingContext::renderbufferStorageMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_renderbufferStorage");

  WebGL2RenderingContextV8Internal::renderbufferStorageMethod(info);
}

void V8WebGL2RenderingContext::sampleCoverageMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_sampleCoverage");

  WebGL2RenderingContextV8Internal::sampleCoverageMethod(info);
}

void V8WebGL2RenderingContext::scissorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_scissor");

  WebGL2RenderingContextV8Internal::scissorMethod(info);
}

void V8WebGL2RenderingContext::shaderSourceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_shaderSource");

  WebGL2RenderingContextV8Internal::shaderSourceMethod(info);
}

void V8WebGL2RenderingContext::stencilFuncMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_stencilFunc");

  WebGL2RenderingContextV8Internal::stencilFuncMethod(info);
}

void V8WebGL2RenderingContext::stencilFuncSeparateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_stencilFuncSeparate");

  WebGL2RenderingContextV8Internal::stencilFuncSeparateMethod(info);
}

void V8WebGL2RenderingContext::stencilMaskMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_stencilMask");

  WebGL2RenderingContextV8Internal::stencilMaskMethod(info);
}

void V8WebGL2RenderingContext::stencilMaskSeparateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_stencilMaskSeparate");

  WebGL2RenderingContextV8Internal::stencilMaskSeparateMethod(info);
}

void V8WebGL2RenderingContext::stencilOpMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_stencilOp");

  WebGL2RenderingContextV8Internal::stencilOpMethod(info);
}

void V8WebGL2RenderingContext::stencilOpSeparateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_stencilOpSeparate");

  WebGL2RenderingContextV8Internal::stencilOpSeparateMethod(info);
}

void V8WebGL2RenderingContext::texParameterfMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_texParameterf");

  WebGL2RenderingContextV8Internal::texParameterfMethod(info);
}

void V8WebGL2RenderingContext::texParameteriMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_texParameteri");

  WebGL2RenderingContextV8Internal::texParameteriMethod(info);
}

void V8WebGL2RenderingContext::texImage2DMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_texImage2D");

  WebGL2RenderingContextV8Internal::texImage2DMethod(info);
}

void V8WebGL2RenderingContext::texSubImage2DMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_texSubImage2D");

  WebGL2RenderingContextV8Internal::texSubImage2DMethod(info);
}

void V8WebGL2RenderingContext::uniform1fMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_uniform1f");

  WebGL2RenderingContextV8Internal::uniform1fMethod(info);
}

void V8WebGL2RenderingContext::uniform1fvMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_uniform1fv");

  WebGL2RenderingContextV8Internal::uniform1fvMethod(info);
}

void V8WebGL2RenderingContext::uniform1iMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_uniform1i");

  WebGL2RenderingContextV8Internal::uniform1iMethod(info);
}

void V8WebGL2RenderingContext::uniform1ivMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_uniform1iv");

  WebGL2RenderingContextV8Internal::uniform1ivMethod(info);
}

void V8WebGL2RenderingContext::uniform2fMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_uniform2f");

  WebGL2RenderingContextV8Internal::uniform2fMethod(info);
}

void V8WebGL2RenderingContext::uniform2fvMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_uniform2fv");

  WebGL2RenderingContextV8Internal::uniform2fvMethod(info);
}

void V8WebGL2RenderingContext::uniform2iMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_uniform2i");

  WebGL2RenderingContextV8Internal::uniform2iMethod(info);
}

void V8WebGL2RenderingContext::uniform2ivMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_uniform2iv");

  WebGL2RenderingContextV8Internal::uniform2ivMethod(info);
}

void V8WebGL2RenderingContext::uniform3fMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_uniform3f");

  WebGL2RenderingContextV8Internal::uniform3fMethod(info);
}

void V8WebGL2RenderingContext::uniform3fvMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_uniform3fv");

  WebGL2RenderingContextV8Internal::uniform3fvMethod(info);
}

void V8WebGL2RenderingContext::uniform3iMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_uniform3i");

  WebGL2RenderingContextV8Internal::uniform3iMethod(info);
}

void V8WebGL2RenderingContext::uniform3ivMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_uniform3iv");

  WebGL2RenderingContextV8Internal::uniform3ivMethod(info);
}

void V8WebGL2RenderingContext::uniform4fMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_uniform4f");

  WebGL2RenderingContextV8Internal::uniform4fMethod(info);
}

void V8WebGL2RenderingContext::uniform4fvMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_uniform4fv");

  WebGL2RenderingContextV8Internal::uniform4fvMethod(info);
}

void V8WebGL2RenderingContext::uniform4iMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_uniform4i");

  WebGL2RenderingContextV8Internal::uniform4iMethod(info);
}

void V8WebGL2RenderingContext::uniform4ivMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_uniform4iv");

  WebGL2RenderingContextV8Internal::uniform4ivMethod(info);
}

void V8WebGL2RenderingContext::uniformMatrix2fvMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_uniformMatrix2fv");

  WebGL2RenderingContextV8Internal::uniformMatrix2fvMethod(info);
}

void V8WebGL2RenderingContext::uniformMatrix3fvMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_uniformMatrix3fv");

  WebGL2RenderingContextV8Internal::uniformMatrix3fvMethod(info);
}

void V8WebGL2RenderingContext::uniformMatrix4fvMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_uniformMatrix4fv");

  WebGL2RenderingContextV8Internal::uniformMatrix4fvMethod(info);
}

void V8WebGL2RenderingContext::useProgramMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_useProgram");

  WebGL2RenderingContextV8Internal::useProgramMethod(info);
}

void V8WebGL2RenderingContext::validateProgramMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_validateProgram");

  WebGL2RenderingContextV8Internal::validateProgramMethod(info);
}

void V8WebGL2RenderingContext::vertexAttrib1fMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_vertexAttrib1f");

  WebGL2RenderingContextV8Internal::vertexAttrib1fMethod(info);
}

void V8WebGL2RenderingContext::vertexAttrib1fvMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_vertexAttrib1fv");

  WebGL2RenderingContextV8Internal::vertexAttrib1fvMethod(info);
}

void V8WebGL2RenderingContext::vertexAttrib2fMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_vertexAttrib2f");

  WebGL2RenderingContextV8Internal::vertexAttrib2fMethod(info);
}

void V8WebGL2RenderingContext::vertexAttrib2fvMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_vertexAttrib2fv");

  WebGL2RenderingContextV8Internal::vertexAttrib2fvMethod(info);
}

void V8WebGL2RenderingContext::vertexAttrib3fMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_vertexAttrib3f");

  WebGL2RenderingContextV8Internal::vertexAttrib3fMethod(info);
}

void V8WebGL2RenderingContext::vertexAttrib3fvMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_vertexAttrib3fv");

  WebGL2RenderingContextV8Internal::vertexAttrib3fvMethod(info);
}

void V8WebGL2RenderingContext::vertexAttrib4fMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_vertexAttrib4f");

  WebGL2RenderingContextV8Internal::vertexAttrib4fMethod(info);
}

void V8WebGL2RenderingContext::vertexAttrib4fvMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_vertexAttrib4fv");

  WebGL2RenderingContextV8Internal::vertexAttrib4fvMethod(info);
}

void V8WebGL2RenderingContext::vertexAttribPointerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_vertexAttribPointer");

  WebGL2RenderingContextV8Internal::vertexAttribPointerMethod(info);
}

void V8WebGL2RenderingContext::viewportMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_viewport");

  WebGL2RenderingContextV8Internal::viewportMethod(info);
}

void V8WebGL2RenderingContext::commitMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_commit");

  WebGL2RenderingContextV8Internal::commitMethod(info);
}

void V8WebGL2RenderingContext::setCompatibleXRDeviceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_setCompatibleXRDevice");

  WebGL2RenderingContextV8Internal::setCompatibleXRDeviceMethod(info);
}

static const V8DOMConfiguration::AccessorConfiguration V8WebGL2RenderingContextAccessors[] = {
    { "canvas", V8WebGL2RenderingContext::canvasAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "drawingBufferWidth", V8WebGL2RenderingContext::drawingBufferWidthAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "drawingBufferHeight", V8WebGL2RenderingContext::drawingBufferHeightAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
};

static const V8DOMConfiguration::MethodConfiguration V8WebGL2RenderingContextMethods[] = {
    {"copyBufferSubData", V8WebGL2RenderingContext::copyBufferSubDataMethodCallback, 5, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getBufferSubData", V8WebGL2RenderingContext::getBufferSubDataMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"blitFramebuffer", V8WebGL2RenderingContext::blitFramebufferMethodCallback, 10, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"framebufferTextureLayer", V8WebGL2RenderingContext::framebufferTextureLayerMethodCallback, 5, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getInternalformatParameter", V8WebGL2RenderingContext::getInternalformatParameterMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"invalidateFramebuffer", V8WebGL2RenderingContext::invalidateFramebufferMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"invalidateSubFramebuffer", V8WebGL2RenderingContext::invalidateSubFramebufferMethodCallback, 6, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"readBuffer", V8WebGL2RenderingContext::readBufferMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"renderbufferStorageMultisample", V8WebGL2RenderingContext::renderbufferStorageMultisampleMethodCallback, 5, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"texStorage2D", V8WebGL2RenderingContext::texStorage2DMethodCallback, 5, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"texStorage3D", V8WebGL2RenderingContext::texStorage3DMethodCallback, 6, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"texImage3D", V8WebGL2RenderingContext::texImage3DMethodCallback, 10, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"texSubImage3D", V8WebGL2RenderingContext::texSubImage3DMethodCallback, 11, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"copyTexSubImage3D", V8WebGL2RenderingContext::copyTexSubImage3DMethodCallback, 9, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"compressedTexImage3D", V8WebGL2RenderingContext::compressedTexImage3DMethodCallback, 8, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"compressedTexSubImage3D", V8WebGL2RenderingContext::compressedTexSubImage3DMethodCallback, 10, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getFragDataLocation", V8WebGL2RenderingContext::getFragDataLocationMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform1ui", V8WebGL2RenderingContext::uniform1uiMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform2ui", V8WebGL2RenderingContext::uniform2uiMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform3ui", V8WebGL2RenderingContext::uniform3uiMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform4ui", V8WebGL2RenderingContext::uniform4uiMethodCallback, 5, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform1uiv", V8WebGL2RenderingContext::uniform1uivMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform2uiv", V8WebGL2RenderingContext::uniform2uivMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform3uiv", V8WebGL2RenderingContext::uniform3uivMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform4uiv", V8WebGL2RenderingContext::uniform4uivMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniformMatrix2x3fv", V8WebGL2RenderingContext::uniformMatrix2x3fvMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniformMatrix3x2fv", V8WebGL2RenderingContext::uniformMatrix3x2fvMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniformMatrix2x4fv", V8WebGL2RenderingContext::uniformMatrix2x4fvMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniformMatrix4x2fv", V8WebGL2RenderingContext::uniformMatrix4x2fvMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniformMatrix3x4fv", V8WebGL2RenderingContext::uniformMatrix3x4fvMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniformMatrix4x3fv", V8WebGL2RenderingContext::uniformMatrix4x3fvMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"vertexAttribI4i", V8WebGL2RenderingContext::vertexAttribI4iMethodCallback, 5, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"vertexAttribI4iv", V8WebGL2RenderingContext::vertexAttribI4ivMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"vertexAttribI4ui", V8WebGL2RenderingContext::vertexAttribI4uiMethodCallback, 5, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"vertexAttribI4uiv", V8WebGL2RenderingContext::vertexAttribI4uivMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"vertexAttribIPointer", V8WebGL2RenderingContext::vertexAttribIPointerMethodCallback, 5, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"vertexAttribDivisor", V8WebGL2RenderingContext::vertexAttribDivisorMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"drawArraysInstanced", V8WebGL2RenderingContext::drawArraysInstancedMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"drawElementsInstanced", V8WebGL2RenderingContext::drawElementsInstancedMethodCallback, 5, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"drawRangeElements", V8WebGL2RenderingContext::drawRangeElementsMethodCallback, 6, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"drawBuffers", V8WebGL2RenderingContext::drawBuffersMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"clearBufferiv", V8WebGL2RenderingContext::clearBufferivMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"clearBufferuiv", V8WebGL2RenderingContext::clearBufferuivMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"clearBufferfv", V8WebGL2RenderingContext::clearBufferfvMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"clearBufferfi", V8WebGL2RenderingContext::clearBufferfiMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createQuery", V8WebGL2RenderingContext::createQueryMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"deleteQuery", V8WebGL2RenderingContext::deleteQueryMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isQuery", V8WebGL2RenderingContext::isQueryMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"beginQuery", V8WebGL2RenderingContext::beginQueryMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"endQuery", V8WebGL2RenderingContext::endQueryMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getQuery", V8WebGL2RenderingContext::getQueryMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getQueryParameter", V8WebGL2RenderingContext::getQueryParameterMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createSampler", V8WebGL2RenderingContext::createSamplerMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"deleteSampler", V8WebGL2RenderingContext::deleteSamplerMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isSampler", V8WebGL2RenderingContext::isSamplerMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"bindSampler", V8WebGL2RenderingContext::bindSamplerMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"samplerParameteri", V8WebGL2RenderingContext::samplerParameteriMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"samplerParameterf", V8WebGL2RenderingContext::samplerParameterfMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getSamplerParameter", V8WebGL2RenderingContext::getSamplerParameterMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"fenceSync", V8WebGL2RenderingContext::fenceSyncMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isSync", V8WebGL2RenderingContext::isSyncMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"deleteSync", V8WebGL2RenderingContext::deleteSyncMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"clientWaitSync", V8WebGL2RenderingContext::clientWaitSyncMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"waitSync", V8WebGL2RenderingContext::waitSyncMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getSyncParameter", V8WebGL2RenderingContext::getSyncParameterMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createTransformFeedback", V8WebGL2RenderingContext::createTransformFeedbackMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"deleteTransformFeedback", V8WebGL2RenderingContext::deleteTransformFeedbackMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isTransformFeedback", V8WebGL2RenderingContext::isTransformFeedbackMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"bindTransformFeedback", V8WebGL2RenderingContext::bindTransformFeedbackMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"beginTransformFeedback", V8WebGL2RenderingContext::beginTransformFeedbackMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"endTransformFeedback", V8WebGL2RenderingContext::endTransformFeedbackMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"transformFeedbackVaryings", V8WebGL2RenderingContext::transformFeedbackVaryingsMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getTransformFeedbackVarying", V8WebGL2RenderingContext::getTransformFeedbackVaryingMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"pauseTransformFeedback", V8WebGL2RenderingContext::pauseTransformFeedbackMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"resumeTransformFeedback", V8WebGL2RenderingContext::resumeTransformFeedbackMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"bindBufferBase", V8WebGL2RenderingContext::bindBufferBaseMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"bindBufferRange", V8WebGL2RenderingContext::bindBufferRangeMethodCallback, 5, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getIndexedParameter", V8WebGL2RenderingContext::getIndexedParameterMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getUniformIndices", V8WebGL2RenderingContext::getUniformIndicesMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getActiveUniforms", V8WebGL2RenderingContext::getActiveUniformsMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getUniformBlockIndex", V8WebGL2RenderingContext::getUniformBlockIndexMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getActiveUniformBlockParameter", V8WebGL2RenderingContext::getActiveUniformBlockParameterMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getActiveUniformBlockName", V8WebGL2RenderingContext::getActiveUniformBlockNameMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniformBlockBinding", V8WebGL2RenderingContext::uniformBlockBindingMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createVertexArray", V8WebGL2RenderingContext::createVertexArrayMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"deleteVertexArray", V8WebGL2RenderingContext::deleteVertexArrayMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isVertexArray", V8WebGL2RenderingContext::isVertexArrayMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"bindVertexArray", V8WebGL2RenderingContext::bindVertexArrayMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"activeTexture", V8WebGL2RenderingContext::activeTextureMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"attachShader", V8WebGL2RenderingContext::attachShaderMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"bindAttribLocation", V8WebGL2RenderingContext::bindAttribLocationMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"bindBuffer", V8WebGL2RenderingContext::bindBufferMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"bindFramebuffer", V8WebGL2RenderingContext::bindFramebufferMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"bindRenderbuffer", V8WebGL2RenderingContext::bindRenderbufferMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"bindTexture", V8WebGL2RenderingContext::bindTextureMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"blendColor", V8WebGL2RenderingContext::blendColorMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"blendEquation", V8WebGL2RenderingContext::blendEquationMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"blendEquationSeparate", V8WebGL2RenderingContext::blendEquationSeparateMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"blendFunc", V8WebGL2RenderingContext::blendFuncMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"blendFuncSeparate", V8WebGL2RenderingContext::blendFuncSeparateMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"bufferData", V8WebGL2RenderingContext::bufferDataMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"bufferSubData", V8WebGL2RenderingContext::bufferSubDataMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"checkFramebufferStatus", V8WebGL2RenderingContext::checkFramebufferStatusMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"clear", V8WebGL2RenderingContext::clearMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"clearColor", V8WebGL2RenderingContext::clearColorMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"clearDepth", V8WebGL2RenderingContext::clearDepthMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"clearStencil", V8WebGL2RenderingContext::clearStencilMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"colorMask", V8WebGL2RenderingContext::colorMaskMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"compileShader", V8WebGL2RenderingContext::compileShaderMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"compressedTexImage2D", V8WebGL2RenderingContext::compressedTexImage2DMethodCallback, 7, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"compressedTexSubImage2D", V8WebGL2RenderingContext::compressedTexSubImage2DMethodCallback, 8, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"copyTexImage2D", V8WebGL2RenderingContext::copyTexImage2DMethodCallback, 8, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"copyTexSubImage2D", V8WebGL2RenderingContext::copyTexSubImage2DMethodCallback, 8, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createBuffer", V8WebGL2RenderingContext::createBufferMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createFramebuffer", V8WebGL2RenderingContext::createFramebufferMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createProgram", V8WebGL2RenderingContext::createProgramMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createRenderbuffer", V8WebGL2RenderingContext::createRenderbufferMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createShader", V8WebGL2RenderingContext::createShaderMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createTexture", V8WebGL2RenderingContext::createTextureMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"cullFace", V8WebGL2RenderingContext::cullFaceMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"deleteBuffer", V8WebGL2RenderingContext::deleteBufferMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"deleteFramebuffer", V8WebGL2RenderingContext::deleteFramebufferMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"deleteProgram", V8WebGL2RenderingContext::deleteProgramMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"deleteRenderbuffer", V8WebGL2RenderingContext::deleteRenderbufferMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"deleteShader", V8WebGL2RenderingContext::deleteShaderMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"deleteTexture", V8WebGL2RenderingContext::deleteTextureMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"depthFunc", V8WebGL2RenderingContext::depthFuncMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"depthMask", V8WebGL2RenderingContext::depthMaskMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"depthRange", V8WebGL2RenderingContext::depthRangeMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"detachShader", V8WebGL2RenderingContext::detachShaderMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"disable", V8WebGL2RenderingContext::disableMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"disableVertexAttribArray", V8WebGL2RenderingContext::disableVertexAttribArrayMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"drawArrays", V8WebGL2RenderingContext::drawArraysMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"drawElements", V8WebGL2RenderingContext::drawElementsMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"enable", V8WebGL2RenderingContext::enableMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"enableVertexAttribArray", V8WebGL2RenderingContext::enableVertexAttribArrayMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"finish", V8WebGL2RenderingContext::finishMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"flush", V8WebGL2RenderingContext::flushMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"framebufferRenderbuffer", V8WebGL2RenderingContext::framebufferRenderbufferMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"framebufferTexture2D", V8WebGL2RenderingContext::framebufferTexture2DMethodCallback, 5, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"frontFace", V8WebGL2RenderingContext::frontFaceMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"generateMipmap", V8WebGL2RenderingContext::generateMipmapMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getActiveAttrib", V8WebGL2RenderingContext::getActiveAttribMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getActiveUniform", V8WebGL2RenderingContext::getActiveUniformMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getAttachedShaders", V8WebGL2RenderingContext::getAttachedShadersMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getAttribLocation", V8WebGL2RenderingContext::getAttribLocationMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getBufferParameter", V8WebGL2RenderingContext::getBufferParameterMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getContextAttributes", V8WebGL2RenderingContext::getContextAttributesMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getError", V8WebGL2RenderingContext::getErrorMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getExtension", V8WebGL2RenderingContext::getExtensionMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getFramebufferAttachmentParameter", V8WebGL2RenderingContext::getFramebufferAttachmentParameterMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getParameter", V8WebGL2RenderingContext::getParameterMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getProgramParameter", V8WebGL2RenderingContext::getProgramParameterMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getProgramInfoLog", V8WebGL2RenderingContext::getProgramInfoLogMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getRenderbufferParameter", V8WebGL2RenderingContext::getRenderbufferParameterMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getShaderParameter", V8WebGL2RenderingContext::getShaderParameterMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getShaderInfoLog", V8WebGL2RenderingContext::getShaderInfoLogMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getShaderPrecisionFormat", V8WebGL2RenderingContext::getShaderPrecisionFormatMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getShaderSource", V8WebGL2RenderingContext::getShaderSourceMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getSupportedExtensions", V8WebGL2RenderingContext::getSupportedExtensionsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getTexParameter", V8WebGL2RenderingContext::getTexParameterMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getUniform", V8WebGL2RenderingContext::getUniformMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getUniformLocation", V8WebGL2RenderingContext::getUniformLocationMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getVertexAttrib", V8WebGL2RenderingContext::getVertexAttribMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getVertexAttribOffset", V8WebGL2RenderingContext::getVertexAttribOffsetMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"hint", V8WebGL2RenderingContext::hintMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isBuffer", V8WebGL2RenderingContext::isBufferMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isContextLost", V8WebGL2RenderingContext::isContextLostMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isEnabled", V8WebGL2RenderingContext::isEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isFramebuffer", V8WebGL2RenderingContext::isFramebufferMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isProgram", V8WebGL2RenderingContext::isProgramMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isRenderbuffer", V8WebGL2RenderingContext::isRenderbufferMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isShader", V8WebGL2RenderingContext::isShaderMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isTexture", V8WebGL2RenderingContext::isTextureMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"lineWidth", V8WebGL2RenderingContext::lineWidthMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"linkProgram", V8WebGL2RenderingContext::linkProgramMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"pixelStorei", V8WebGL2RenderingContext::pixelStoreiMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"polygonOffset", V8WebGL2RenderingContext::polygonOffsetMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"readPixels", V8WebGL2RenderingContext::readPixelsMethodCallback, 7, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"renderbufferStorage", V8WebGL2RenderingContext::renderbufferStorageMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"sampleCoverage", V8WebGL2RenderingContext::sampleCoverageMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"scissor", V8WebGL2RenderingContext::scissorMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"shaderSource", V8WebGL2RenderingContext::shaderSourceMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"stencilFunc", V8WebGL2RenderingContext::stencilFuncMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"stencilFuncSeparate", V8WebGL2RenderingContext::stencilFuncSeparateMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"stencilMask", V8WebGL2RenderingContext::stencilMaskMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"stencilMaskSeparate", V8WebGL2RenderingContext::stencilMaskSeparateMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"stencilOp", V8WebGL2RenderingContext::stencilOpMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"stencilOpSeparate", V8WebGL2RenderingContext::stencilOpSeparateMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"texParameterf", V8WebGL2RenderingContext::texParameterfMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"texParameteri", V8WebGL2RenderingContext::texParameteriMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"texImage2D", V8WebGL2RenderingContext::texImage2DMethodCallback, 6, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"texSubImage2D", V8WebGL2RenderingContext::texSubImage2DMethodCallback, 7, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform1f", V8WebGL2RenderingContext::uniform1fMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform1fv", V8WebGL2RenderingContext::uniform1fvMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform1i", V8WebGL2RenderingContext::uniform1iMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform1iv", V8WebGL2RenderingContext::uniform1ivMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform2f", V8WebGL2RenderingContext::uniform2fMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform2fv", V8WebGL2RenderingContext::uniform2fvMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform2i", V8WebGL2RenderingContext::uniform2iMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform2iv", V8WebGL2RenderingContext::uniform2ivMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform3f", V8WebGL2RenderingContext::uniform3fMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform3fv", V8WebGL2RenderingContext::uniform3fvMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform3i", V8WebGL2RenderingContext::uniform3iMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform3iv", V8WebGL2RenderingContext::uniform3ivMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform4f", V8WebGL2RenderingContext::uniform4fMethodCallback, 5, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform4fv", V8WebGL2RenderingContext::uniform4fvMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform4i", V8WebGL2RenderingContext::uniform4iMethodCallback, 5, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform4iv", V8WebGL2RenderingContext::uniform4ivMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniformMatrix2fv", V8WebGL2RenderingContext::uniformMatrix2fvMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniformMatrix3fv", V8WebGL2RenderingContext::uniformMatrix3fvMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniformMatrix4fv", V8WebGL2RenderingContext::uniformMatrix4fvMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"useProgram", V8WebGL2RenderingContext::useProgramMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"validateProgram", V8WebGL2RenderingContext::validateProgramMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"vertexAttrib1f", V8WebGL2RenderingContext::vertexAttrib1fMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"vertexAttrib1fv", V8WebGL2RenderingContext::vertexAttrib1fvMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"vertexAttrib2f", V8WebGL2RenderingContext::vertexAttrib2fMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"vertexAttrib2fv", V8WebGL2RenderingContext::vertexAttrib2fvMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"vertexAttrib3f", V8WebGL2RenderingContext::vertexAttrib3fMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"vertexAttrib3fv", V8WebGL2RenderingContext::vertexAttrib3fvMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"vertexAttrib4f", V8WebGL2RenderingContext::vertexAttrib4fMethodCallback, 5, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"vertexAttrib4fv", V8WebGL2RenderingContext::vertexAttrib4fvMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"vertexAttribPointer", V8WebGL2RenderingContext::vertexAttribPointerMethodCallback, 6, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"viewport", V8WebGL2RenderingContext::viewportMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void installV8WebGL2RenderingContextTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8WebGL2RenderingContext::wrapperTypeInfo.interface_name, v8::Local<v8::FunctionTemplate>(), V8WebGL2RenderingContext::internalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  static constexpr V8DOMConfiguration::ConstantConfiguration V8WebGL2RenderingContextConstants[] = {
      {"READ_BUFFER", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0C02)},
      {"UNPACK_ROW_LENGTH", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0CF2)},
      {"UNPACK_SKIP_ROWS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0CF3)},
      {"UNPACK_SKIP_PIXELS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0CF4)},
      {"PACK_ROW_LENGTH", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0D02)},
      {"PACK_SKIP_ROWS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0D03)},
      {"PACK_SKIP_PIXELS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0D04)},
      {"COLOR", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x1800)},
      {"DEPTH", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x1801)},
      {"STENCIL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x1802)},
      {"RED", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x1903)},
      {"RGB8", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8051)},
      {"RGBA8", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8058)},
      {"RGB10_A2", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8059)},
      {"TEXTURE_BINDING_3D", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x806A)},
      {"UNPACK_SKIP_IMAGES", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x806D)},
      {"UNPACK_IMAGE_HEIGHT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x806E)},
      {"TEXTURE_3D", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x806F)},
      {"TEXTURE_WRAP_R", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8072)},
      {"MAX_3D_TEXTURE_SIZE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8073)},
      {"UNSIGNED_INT_2_10_10_10_REV", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8368)},
      {"MAX_ELEMENTS_VERTICES", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x80E8)},
      {"MAX_ELEMENTS_INDICES", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x80E9)},
      {"TEXTURE_MIN_LOD", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x813A)},
      {"TEXTURE_MAX_LOD", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x813B)},
      {"TEXTURE_BASE_LEVEL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x813C)},
      {"TEXTURE_MAX_LEVEL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x813D)},
      {"MIN", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8007)},
      {"MAX", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8008)},
      {"DEPTH_COMPONENT24", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x81A6)},
      {"MAX_TEXTURE_LOD_BIAS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84FD)},
      {"TEXTURE_COMPARE_MODE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x884C)},
      {"TEXTURE_COMPARE_FUNC", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x884D)},
      {"CURRENT_QUERY", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8865)},
      {"QUERY_RESULT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8866)},
      {"QUERY_RESULT_AVAILABLE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8867)},
      {"STREAM_READ", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x88E1)},
      {"STREAM_COPY", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x88E2)},
      {"STATIC_READ", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x88E5)},
      {"STATIC_COPY", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x88E6)},
      {"DYNAMIC_READ", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x88E9)},
      {"DYNAMIC_COPY", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x88EA)},
      {"MAX_DRAW_BUFFERS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8824)},
      {"DRAW_BUFFER0", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8825)},
      {"DRAW_BUFFER1", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8826)},
      {"DRAW_BUFFER2", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8827)},
      {"DRAW_BUFFER3", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8828)},
      {"DRAW_BUFFER4", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8829)},
      {"DRAW_BUFFER5", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x882A)},
      {"DRAW_BUFFER6", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x882B)},
      {"DRAW_BUFFER7", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x882C)},
      {"DRAW_BUFFER8", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x882D)},
      {"DRAW_BUFFER9", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x882E)},
      {"DRAW_BUFFER10", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x882F)},
      {"DRAW_BUFFER11", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8830)},
      {"DRAW_BUFFER12", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8831)},
      {"DRAW_BUFFER13", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8832)},
      {"DRAW_BUFFER14", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8833)},
      {"DRAW_BUFFER15", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8834)},
      {"MAX_FRAGMENT_UNIFORM_COMPONENTS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B49)},
      {"MAX_VERTEX_UNIFORM_COMPONENTS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B4A)},
      {"SAMPLER_3D", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B5F)},
      {"SAMPLER_2D_SHADOW", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B62)},
      {"FRAGMENT_SHADER_DERIVATIVE_HINT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B8B)},
      {"PIXEL_PACK_BUFFER", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x88EB)},
      {"PIXEL_UNPACK_BUFFER", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x88EC)},
      {"PIXEL_PACK_BUFFER_BINDING", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x88ED)},
      {"PIXEL_UNPACK_BUFFER_BINDING", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x88EF)},
      {"FLOAT_MAT2x3", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B65)},
      {"FLOAT_MAT2x4", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B66)},
      {"FLOAT_MAT3x2", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B67)},
      {"FLOAT_MAT3x4", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B68)},
      {"FLOAT_MAT4x2", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B69)},
      {"FLOAT_MAT4x3", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B6A)},
      {"SRGB", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8C40)},
      {"SRGB8", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8C41)},
      {"SRGB8_ALPHA8", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8C43)},
      {"COMPARE_REF_TO_TEXTURE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x884E)},
      {"RGBA32F", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8814)},
      {"RGB32F", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8815)},
      {"RGBA16F", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x881A)},
      {"RGB16F", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x881B)},
      {"VERTEX_ATTRIB_ARRAY_INTEGER", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x88FD)},
      {"MAX_ARRAY_TEXTURE_LAYERS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x88FF)},
      {"MIN_PROGRAM_TEXEL_OFFSET", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8904)},
      {"MAX_PROGRAM_TEXEL_OFFSET", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8905)},
      {"MAX_VARYING_COMPONENTS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B4B)},
      {"TEXTURE_2D_ARRAY", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8C1A)},
      {"TEXTURE_BINDING_2D_ARRAY", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8C1D)},
      {"R11F_G11F_B10F", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8C3A)},
      {"UNSIGNED_INT_10F_11F_11F_REV", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8C3B)},
      {"RGB9_E5", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8C3D)},
      {"UNSIGNED_INT_5_9_9_9_REV", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8C3E)},
      {"TRANSFORM_FEEDBACK_BUFFER_MODE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8C7F)},
      {"MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8C80)},
      {"TRANSFORM_FEEDBACK_VARYINGS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8C83)},
      {"TRANSFORM_FEEDBACK_BUFFER_START", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8C84)},
      {"TRANSFORM_FEEDBACK_BUFFER_SIZE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8C85)},
      {"TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8C88)},
      {"RASTERIZER_DISCARD", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8C89)},
      {"MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8C8A)},
      {"MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8C8B)},
      {"INTERLEAVED_ATTRIBS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8C8C)},
      {"SEPARATE_ATTRIBS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8C8D)},
      {"TRANSFORM_FEEDBACK_BUFFER", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8C8E)},
      {"TRANSFORM_FEEDBACK_BUFFER_BINDING", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8C8F)},
      {"RGBA32UI", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D70)},
      {"RGB32UI", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D71)},
      {"RGBA16UI", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D76)},
      {"RGB16UI", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D77)},
      {"RGBA8UI", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D7C)},
      {"RGB8UI", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D7D)},
      {"RGBA32I", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D82)},
      {"RGB32I", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D83)},
      {"RGBA16I", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D88)},
      {"RGB16I", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D89)},
      {"RGBA8I", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D8E)},
      {"RGB8I", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D8F)},
      {"RED_INTEGER", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D94)},
      {"RGB_INTEGER", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D98)},
      {"RGBA_INTEGER", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D99)},
      {"SAMPLER_2D_ARRAY", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8DC1)},
      {"SAMPLER_2D_ARRAY_SHADOW", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8DC4)},
      {"SAMPLER_CUBE_SHADOW", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8DC5)},
      {"UNSIGNED_INT_VEC2", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8DC6)},
      {"UNSIGNED_INT_VEC3", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8DC7)},
      {"UNSIGNED_INT_VEC4", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8DC8)},
      {"INT_SAMPLER_2D", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8DCA)},
      {"INT_SAMPLER_3D", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8DCB)},
      {"INT_SAMPLER_CUBE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8DCC)},
      {"INT_SAMPLER_2D_ARRAY", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8DCF)},
      {"UNSIGNED_INT_SAMPLER_2D", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8DD2)},
      {"UNSIGNED_INT_SAMPLER_3D", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8DD3)},
      {"UNSIGNED_INT_SAMPLER_CUBE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8DD4)},
      {"UNSIGNED_INT_SAMPLER_2D_ARRAY", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8DD7)},
      {"DEPTH_COMPONENT32F", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CAC)},
      {"DEPTH32F_STENCIL8", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CAD)},
      {"FLOAT_32_UNSIGNED_INT_24_8_REV", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8DAD)},
      {"FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8210)},
      {"FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8211)},
      {"FRAMEBUFFER_ATTACHMENT_RED_SIZE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8212)},
      {"FRAMEBUFFER_ATTACHMENT_GREEN_SIZE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8213)},
      {"FRAMEBUFFER_ATTACHMENT_BLUE_SIZE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8214)},
      {"FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8215)},
      {"FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8216)},
      {"FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8217)},
      {"FRAMEBUFFER_DEFAULT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8218)},
      {"UNSIGNED_INT_24_8", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84FA)},
      {"DEPTH24_STENCIL8", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x88F0)},
      {"UNSIGNED_NORMALIZED", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8C17)},
      {"DRAW_FRAMEBUFFER_BINDING", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CA6)},
      {"READ_FRAMEBUFFER", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CA8)},
      {"DRAW_FRAMEBUFFER", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CA9)},
      {"READ_FRAMEBUFFER_BINDING", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CAA)},
      {"RENDERBUFFER_SAMPLES", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CAB)},
      {"FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CD4)},
      {"MAX_COLOR_ATTACHMENTS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CDF)},
      {"COLOR_ATTACHMENT1", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CE1)},
      {"COLOR_ATTACHMENT2", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CE2)},
      {"COLOR_ATTACHMENT3", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CE3)},
      {"COLOR_ATTACHMENT4", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CE4)},
      {"COLOR_ATTACHMENT5", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CE5)},
      {"COLOR_ATTACHMENT6", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CE6)},
      {"COLOR_ATTACHMENT7", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CE7)},
      {"COLOR_ATTACHMENT8", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CE8)},
      {"COLOR_ATTACHMENT9", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CE9)},
      {"COLOR_ATTACHMENT10", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CEA)},
      {"COLOR_ATTACHMENT11", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CEB)},
      {"COLOR_ATTACHMENT12", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CEC)},
      {"COLOR_ATTACHMENT13", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CED)},
      {"COLOR_ATTACHMENT14", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CEE)},
      {"COLOR_ATTACHMENT15", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CEF)},
      {"FRAMEBUFFER_INCOMPLETE_MULTISAMPLE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D56)},
      {"MAX_SAMPLES", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D57)},
      {"HALF_FLOAT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x140B)},
      {"RG", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8227)},
      {"RG_INTEGER", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8228)},
      {"R8", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8229)},
      {"RG8", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x822B)},
      {"R16F", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x822D)},
      {"R32F", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x822E)},
      {"RG16F", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x822F)},
      {"RG32F", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8230)},
      {"R8I", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8231)},
      {"R8UI", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8232)},
      {"R16I", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8233)},
      {"R16UI", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8234)},
      {"R32I", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8235)},
      {"R32UI", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8236)},
      {"RG8I", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8237)},
      {"RG8UI", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8238)},
      {"RG16I", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8239)},
      {"RG16UI", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x823A)},
      {"RG32I", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x823B)},
      {"RG32UI", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x823C)},
      {"VERTEX_ARRAY_BINDING", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x85B5)},
      {"R8_SNORM", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8F94)},
      {"RG8_SNORM", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8F95)},
      {"RGB8_SNORM", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8F96)},
      {"RGBA8_SNORM", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8F97)},
      {"SIGNED_NORMALIZED", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8F9C)},
      {"COPY_READ_BUFFER", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8F36)},
      {"COPY_WRITE_BUFFER", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8F37)},
      {"COPY_READ_BUFFER_BINDING", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8F36)},
      {"COPY_WRITE_BUFFER_BINDING", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8F37)},
      {"UNIFORM_BUFFER", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8A11)},
      {"UNIFORM_BUFFER_BINDING", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8A28)},
      {"UNIFORM_BUFFER_START", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8A29)},
      {"UNIFORM_BUFFER_SIZE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8A2A)},
      {"MAX_VERTEX_UNIFORM_BLOCKS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8A2B)},
      {"MAX_FRAGMENT_UNIFORM_BLOCKS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8A2D)},
      {"MAX_COMBINED_UNIFORM_BLOCKS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8A2E)},
      {"MAX_UNIFORM_BUFFER_BINDINGS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8A2F)},
      {"MAX_UNIFORM_BLOCK_SIZE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8A30)},
      {"MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8A31)},
      {"MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8A33)},
      {"UNIFORM_BUFFER_OFFSET_ALIGNMENT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8A34)},
      {"ACTIVE_UNIFORM_BLOCKS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8A36)},
      {"UNIFORM_TYPE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8A37)},
      {"UNIFORM_SIZE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8A38)},
      {"UNIFORM_BLOCK_INDEX", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8A3A)},
      {"UNIFORM_OFFSET", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8A3B)},
      {"UNIFORM_ARRAY_STRIDE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8A3C)},
      {"UNIFORM_MATRIX_STRIDE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8A3D)},
      {"UNIFORM_IS_ROW_MAJOR", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8A3E)},
      {"UNIFORM_BLOCK_BINDING", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8A3F)},
      {"UNIFORM_BLOCK_DATA_SIZE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8A40)},
      {"UNIFORM_BLOCK_ACTIVE_UNIFORMS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8A42)},
      {"UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8A43)},
      {"UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8A44)},
      {"UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8A46)},
      {"INVALID_INDEX", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0xFFFFFFFF)},
      {"MAX_VERTEX_OUTPUT_COMPONENTS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x9122)},
      {"MAX_FRAGMENT_INPUT_COMPONENTS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x9125)},
      {"MAX_SERVER_WAIT_TIMEOUT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x9111)},
      {"OBJECT_TYPE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x9112)},
      {"SYNC_CONDITION", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x9113)},
      {"SYNC_STATUS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x9114)},
      {"SYNC_FLAGS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x9115)},
      {"SYNC_FENCE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x9116)},
      {"SYNC_GPU_COMMANDS_COMPLETE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x9117)},
      {"UNSIGNALED", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x9118)},
      {"SIGNALED", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x9119)},
      {"ALREADY_SIGNALED", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x911A)},
      {"TIMEOUT_EXPIRED", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x911B)},
      {"CONDITION_SATISFIED", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x911C)},
      {"WAIT_FAILED", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x911D)},
      {"SYNC_FLUSH_COMMANDS_BIT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x00000001)},
      {"VERTEX_ATTRIB_ARRAY_DIVISOR", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x88FE)},
      {"ANY_SAMPLES_PASSED", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8C2F)},
      {"ANY_SAMPLES_PASSED_CONSERVATIVE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D6A)},
      {"SAMPLER_BINDING", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8919)},
      {"RGB10_A2UI", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x906F)},
      {"INT_2_10_10_10_REV", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D9F)},
      {"TRANSFORM_FEEDBACK", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8E22)},
      {"TRANSFORM_FEEDBACK_PAUSED", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8E23)},
      {"TRANSFORM_FEEDBACK_ACTIVE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8E24)},
      {"TRANSFORM_FEEDBACK_BINDING", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8E25)},
      {"TEXTURE_IMMUTABLE_FORMAT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x912F)},
      {"MAX_ELEMENT_INDEX", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D6B)},
      {"TEXTURE_IMMUTABLE_LEVELS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x82DF)},
      {"TIMEOUT_IGNORED", V8DOMConfiguration::kConstantTypeLong, static_cast<int>(-1)},
      {"MAX_CLIENT_WAIT_TIMEOUT_WEBGL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x9247)},
      {"DEPTH_BUFFER_BIT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x00000100)},
      {"STENCIL_BUFFER_BIT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x00000400)},
      {"COLOR_BUFFER_BIT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x00004000)},
      {"POINTS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0000)},
      {"LINES", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0001)},
      {"LINE_LOOP", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0002)},
      {"LINE_STRIP", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0003)},
      {"TRIANGLES", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0004)},
      {"TRIANGLE_STRIP", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0005)},
      {"TRIANGLE_FAN", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0006)},
      {"ZERO", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0)},
      {"ONE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(1)},
      {"SRC_COLOR", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0300)},
      {"ONE_MINUS_SRC_COLOR", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0301)},
      {"SRC_ALPHA", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0302)},
      {"ONE_MINUS_SRC_ALPHA", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0303)},
      {"DST_ALPHA", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0304)},
      {"ONE_MINUS_DST_ALPHA", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0305)},
      {"DST_COLOR", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0306)},
      {"ONE_MINUS_DST_COLOR", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0307)},
      {"SRC_ALPHA_SATURATE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0308)},
      {"FUNC_ADD", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8006)},
      {"BLEND_EQUATION", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8009)},
      {"BLEND_EQUATION_RGB", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8009)},
      {"BLEND_EQUATION_ALPHA", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x883D)},
      {"FUNC_SUBTRACT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x800A)},
      {"FUNC_REVERSE_SUBTRACT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x800B)},
      {"BLEND_DST_RGB", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x80C8)},
      {"BLEND_SRC_RGB", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x80C9)},
      {"BLEND_DST_ALPHA", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x80CA)},
      {"BLEND_SRC_ALPHA", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x80CB)},
      {"CONSTANT_COLOR", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8001)},
      {"ONE_MINUS_CONSTANT_COLOR", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8002)},
      {"CONSTANT_ALPHA", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8003)},
      {"ONE_MINUS_CONSTANT_ALPHA", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8004)},
      {"BLEND_COLOR", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8005)},
      {"ARRAY_BUFFER", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8892)},
      {"ELEMENT_ARRAY_BUFFER", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8893)},
      {"ARRAY_BUFFER_BINDING", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8894)},
      {"ELEMENT_ARRAY_BUFFER_BINDING", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8895)},
      {"STREAM_DRAW", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x88E0)},
      {"STATIC_DRAW", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x88E4)},
      {"DYNAMIC_DRAW", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x88E8)},
      {"BUFFER_SIZE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8764)},
      {"BUFFER_USAGE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8765)},
      {"CURRENT_VERTEX_ATTRIB", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8626)},
      {"FRONT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0404)},
      {"BACK", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0405)},
      {"FRONT_AND_BACK", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0408)},
      {"TEXTURE_2D", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0DE1)},
      {"CULL_FACE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0B44)},
      {"BLEND", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0BE2)},
      {"DITHER", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0BD0)},
      {"STENCIL_TEST", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0B90)},
      {"DEPTH_TEST", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0B71)},
      {"SCISSOR_TEST", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0C11)},
      {"POLYGON_OFFSET_FILL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8037)},
      {"SAMPLE_ALPHA_TO_COVERAGE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x809E)},
      {"SAMPLE_COVERAGE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x80A0)},
      {"NO_ERROR", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0)},
      {"INVALID_ENUM", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0500)},
      {"INVALID_VALUE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0501)},
      {"INVALID_OPERATION", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0502)},
      {"OUT_OF_MEMORY", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0505)},
      {"CW", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0900)},
      {"CCW", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0901)},
      {"LINE_WIDTH", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0B21)},
      {"ALIASED_POINT_SIZE_RANGE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x846D)},
      {"ALIASED_LINE_WIDTH_RANGE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x846E)},
      {"CULL_FACE_MODE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0B45)},
      {"FRONT_FACE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0B46)},
      {"DEPTH_RANGE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0B70)},
      {"DEPTH_WRITEMASK", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0B72)},
      {"DEPTH_CLEAR_VALUE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0B73)},
      {"DEPTH_FUNC", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0B74)},
      {"STENCIL_CLEAR_VALUE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0B91)},
      {"STENCIL_FUNC", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0B92)},
      {"STENCIL_FAIL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0B94)},
      {"STENCIL_PASS_DEPTH_FAIL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0B95)},
      {"STENCIL_PASS_DEPTH_PASS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0B96)},
      {"STENCIL_REF", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0B97)},
      {"STENCIL_VALUE_MASK", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0B93)},
      {"STENCIL_WRITEMASK", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0B98)},
      {"STENCIL_BACK_FUNC", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8800)},
      {"STENCIL_BACK_FAIL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8801)},
      {"STENCIL_BACK_PASS_DEPTH_FAIL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8802)},
      {"STENCIL_BACK_PASS_DEPTH_PASS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8803)},
      {"STENCIL_BACK_REF", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CA3)},
      {"STENCIL_BACK_VALUE_MASK", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CA4)},
      {"STENCIL_BACK_WRITEMASK", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CA5)},
      {"VIEWPORT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0BA2)},
      {"SCISSOR_BOX", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0C10)},
      {"COLOR_CLEAR_VALUE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0C22)},
      {"COLOR_WRITEMASK", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0C23)},
      {"UNPACK_ALIGNMENT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0CF5)},
      {"PACK_ALIGNMENT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0D05)},
      {"MAX_TEXTURE_SIZE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0D33)},
      {"MAX_VIEWPORT_DIMS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0D3A)},
      {"SUBPIXEL_BITS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0D50)},
      {"RED_BITS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0D52)},
      {"GREEN_BITS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0D53)},
      {"BLUE_BITS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0D54)},
      {"ALPHA_BITS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0D55)},
      {"DEPTH_BITS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0D56)},
      {"STENCIL_BITS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0D57)},
      {"POLYGON_OFFSET_UNITS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x2A00)},
      {"POLYGON_OFFSET_FACTOR", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8038)},
      {"TEXTURE_BINDING_2D", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8069)},
      {"SAMPLE_BUFFERS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x80A8)},
      {"SAMPLES", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x80A9)},
      {"SAMPLE_COVERAGE_VALUE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x80AA)},
      {"SAMPLE_COVERAGE_INVERT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x80AB)},
      {"COMPRESSED_TEXTURE_FORMATS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x86A3)},
      {"DONT_CARE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x1100)},
      {"FASTEST", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x1101)},
      {"NICEST", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x1102)},
      {"GENERATE_MIPMAP_HINT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8192)},
      {"BYTE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x1400)},
      {"UNSIGNED_BYTE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x1401)},
      {"SHORT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x1402)},
      {"UNSIGNED_SHORT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x1403)},
      {"INT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x1404)},
      {"UNSIGNED_INT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x1405)},
      {"FLOAT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x1406)},
      {"DEPTH_COMPONENT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x1902)},
      {"ALPHA", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x1906)},
      {"RGB", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x1907)},
      {"RGBA", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x1908)},
      {"LUMINANCE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x1909)},
      {"LUMINANCE_ALPHA", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x190A)},
      {"UNSIGNED_SHORT_4_4_4_4", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8033)},
      {"UNSIGNED_SHORT_5_5_5_1", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8034)},
      {"UNSIGNED_SHORT_5_6_5", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8363)},
      {"FRAGMENT_SHADER", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B30)},
      {"VERTEX_SHADER", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B31)},
      {"MAX_VERTEX_ATTRIBS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8869)},
      {"MAX_VERTEX_UNIFORM_VECTORS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8DFB)},
      {"MAX_VARYING_VECTORS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8DFC)},
      {"MAX_COMBINED_TEXTURE_IMAGE_UNITS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B4D)},
      {"MAX_VERTEX_TEXTURE_IMAGE_UNITS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B4C)},
      {"MAX_TEXTURE_IMAGE_UNITS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8872)},
      {"MAX_FRAGMENT_UNIFORM_VECTORS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8DFD)},
      {"SHADER_TYPE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B4F)},
      {"DELETE_STATUS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B80)},
      {"LINK_STATUS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B82)},
      {"VALIDATE_STATUS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B83)},
      {"ATTACHED_SHADERS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B85)},
      {"ACTIVE_UNIFORMS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B86)},
      {"ACTIVE_ATTRIBUTES", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B89)},
      {"SHADING_LANGUAGE_VERSION", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B8C)},
      {"CURRENT_PROGRAM", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B8D)},
      {"NEVER", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0200)},
      {"LESS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0201)},
      {"EQUAL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0202)},
      {"LEQUAL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0203)},
      {"GREATER", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0204)},
      {"NOTEQUAL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0205)},
      {"GEQUAL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0206)},
      {"ALWAYS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0207)},
      {"KEEP", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x1E00)},
      {"REPLACE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x1E01)},
      {"INCR", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x1E02)},
      {"DECR", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x1E03)},
      {"INVERT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x150A)},
      {"INCR_WRAP", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8507)},
      {"DECR_WRAP", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8508)},
      {"VENDOR", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x1F00)},
      {"RENDERER", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x1F01)},
      {"VERSION", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x1F02)},
      {"NEAREST", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x2600)},
      {"LINEAR", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x2601)},
      {"NEAREST_MIPMAP_NEAREST", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x2700)},
      {"LINEAR_MIPMAP_NEAREST", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x2701)},
      {"NEAREST_MIPMAP_LINEAR", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x2702)},
      {"LINEAR_MIPMAP_LINEAR", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x2703)},
      {"TEXTURE_MAG_FILTER", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x2800)},
      {"TEXTURE_MIN_FILTER", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x2801)},
      {"TEXTURE_WRAP_S", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x2802)},
      {"TEXTURE_WRAP_T", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x2803)},
      {"TEXTURE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x1702)},
      {"TEXTURE_CUBE_MAP", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8513)},
      {"TEXTURE_BINDING_CUBE_MAP", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8514)},
      {"TEXTURE_CUBE_MAP_POSITIVE_X", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8515)},
      {"TEXTURE_CUBE_MAP_NEGATIVE_X", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8516)},
      {"TEXTURE_CUBE_MAP_POSITIVE_Y", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8517)},
      {"TEXTURE_CUBE_MAP_NEGATIVE_Y", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8518)},
      {"TEXTURE_CUBE_MAP_POSITIVE_Z", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8519)},
      {"TEXTURE_CUBE_MAP_NEGATIVE_Z", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x851A)},
      {"MAX_CUBE_MAP_TEXTURE_SIZE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x851C)},
      {"TEXTURE0", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84C0)},
      {"TEXTURE1", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84C1)},
      {"TEXTURE2", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84C2)},
      {"TEXTURE3", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84C3)},
      {"TEXTURE4", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84C4)},
      {"TEXTURE5", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84C5)},
      {"TEXTURE6", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84C6)},
      {"TEXTURE7", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84C7)},
      {"TEXTURE8", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84C8)},
      {"TEXTURE9", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84C9)},
      {"TEXTURE10", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84CA)},
      {"TEXTURE11", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84CB)},
      {"TEXTURE12", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84CC)},
      {"TEXTURE13", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84CD)},
      {"TEXTURE14", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84CE)},
      {"TEXTURE15", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84CF)},
      {"TEXTURE16", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84D0)},
      {"TEXTURE17", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84D1)},
      {"TEXTURE18", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84D2)},
      {"TEXTURE19", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84D3)},
      {"TEXTURE20", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84D4)},
      {"TEXTURE21", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84D5)},
      {"TEXTURE22", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84D6)},
      {"TEXTURE23", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84D7)},
      {"TEXTURE24", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84D8)},
      {"TEXTURE25", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84D9)},
      {"TEXTURE26", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84DA)},
      {"TEXTURE27", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84DB)},
      {"TEXTURE28", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84DC)},
      {"TEXTURE29", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84DD)},
      {"TEXTURE30", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84DE)},
      {"TEXTURE31", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84DF)},
      {"ACTIVE_TEXTURE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84E0)},
      {"REPEAT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x2901)},
      {"CLAMP_TO_EDGE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x812F)},
      {"MIRRORED_REPEAT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8370)},
      {"FLOAT_VEC2", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B50)},
      {"FLOAT_VEC3", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B51)},
      {"FLOAT_VEC4", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B52)},
      {"INT_VEC2", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B53)},
      {"INT_VEC3", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B54)},
      {"INT_VEC4", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B55)},
      {"BOOL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B56)},
      {"BOOL_VEC2", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B57)},
      {"BOOL_VEC3", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B58)},
      {"BOOL_VEC4", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B59)},
      {"FLOAT_MAT2", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B5A)},
      {"FLOAT_MAT3", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B5B)},
      {"FLOAT_MAT4", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B5C)},
      {"SAMPLER_2D", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B5E)},
      {"SAMPLER_CUBE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B60)},
      {"VERTEX_ATTRIB_ARRAY_ENABLED", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8622)},
      {"VERTEX_ATTRIB_ARRAY_SIZE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8623)},
      {"VERTEX_ATTRIB_ARRAY_STRIDE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8624)},
      {"VERTEX_ATTRIB_ARRAY_TYPE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8625)},
      {"VERTEX_ATTRIB_ARRAY_NORMALIZED", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x886A)},
      {"VERTEX_ATTRIB_ARRAY_POINTER", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8645)},
      {"VERTEX_ATTRIB_ARRAY_BUFFER_BINDING", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x889F)},
      {"IMPLEMENTATION_COLOR_READ_TYPE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B9A)},
      {"IMPLEMENTATION_COLOR_READ_FORMAT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B9B)},
      {"COMPILE_STATUS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B81)},
      {"LOW_FLOAT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8DF0)},
      {"MEDIUM_FLOAT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8DF1)},
      {"HIGH_FLOAT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8DF2)},
      {"LOW_INT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8DF3)},
      {"MEDIUM_INT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8DF4)},
      {"HIGH_INT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8DF5)},
      {"FRAMEBUFFER", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D40)},
      {"RENDERBUFFER", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D41)},
      {"RGBA4", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8056)},
      {"RGB5_A1", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8057)},
      {"RGB565", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D62)},
      {"DEPTH_COMPONENT16", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x81A5)},
      {"STENCIL_INDEX8", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D48)},
      {"DEPTH_STENCIL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84F9)},
      {"RENDERBUFFER_WIDTH", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D42)},
      {"RENDERBUFFER_HEIGHT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D43)},
      {"RENDERBUFFER_INTERNAL_FORMAT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D44)},
      {"RENDERBUFFER_RED_SIZE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D50)},
      {"RENDERBUFFER_GREEN_SIZE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D51)},
      {"RENDERBUFFER_BLUE_SIZE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D52)},
      {"RENDERBUFFER_ALPHA_SIZE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D53)},
      {"RENDERBUFFER_DEPTH_SIZE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D54)},
      {"RENDERBUFFER_STENCIL_SIZE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D55)},
      {"FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CD0)},
      {"FRAMEBUFFER_ATTACHMENT_OBJECT_NAME", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CD1)},
      {"FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CD2)},
      {"FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CD3)},
      {"COLOR_ATTACHMENT0", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CE0)},
      {"DEPTH_ATTACHMENT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D00)},
      {"STENCIL_ATTACHMENT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D20)},
      {"DEPTH_STENCIL_ATTACHMENT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x821A)},
      {"NONE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0)},
      {"FRAMEBUFFER_COMPLETE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CD5)},
      {"FRAMEBUFFER_INCOMPLETE_ATTACHMENT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CD6)},
      {"FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CD7)},
      {"FRAMEBUFFER_INCOMPLETE_DIMENSIONS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CD9)},
      {"FRAMEBUFFER_UNSUPPORTED", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CDD)},
      {"FRAMEBUFFER_BINDING", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CA6)},
      {"RENDERBUFFER_BINDING", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CA7)},
      {"MAX_RENDERBUFFER_SIZE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84E8)},
      {"INVALID_FRAMEBUFFER_OPERATION", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0506)},
      {"UNPACK_FLIP_Y_WEBGL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x9240)},
      {"UNPACK_PREMULTIPLY_ALPHA_WEBGL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x9241)},
      {"CONTEXT_LOST_WEBGL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x9242)},
      {"UNPACK_COLORSPACE_CONVERSION_WEBGL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x9243)},
      {"BROWSER_DEFAULT_WEBGL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x9244)},
  };
  V8DOMConfiguration::InstallConstants(
      isolate, interfaceTemplate, prototypeTemplate,
      V8WebGL2RenderingContextConstants, arraysize(V8WebGL2RenderingContextConstants));
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8WebGL2RenderingContextAccessors, arraysize(V8WebGL2RenderingContextAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8WebGL2RenderingContextMethods, arraysize(V8WebGL2RenderingContextMethods));

  // Custom signature

  V8WebGL2RenderingContext::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8WebGL2RenderingContext::InstallRuntimeEnabledFeaturesOnTemplate(
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
  if (RuntimeEnabledFeatures::OffscreenCanvasEnabled()) {
    const V8DOMConfiguration::MethodConfiguration commitMethodConfiguration[] = {
      {"commit", V8WebGL2RenderingContext::commitMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
    };
    for (const auto& methodConfig : commitMethodConfiguration)
      V8DOMConfiguration::InstallMethod(isolate, world, instance_template, prototype_template, interface_template, signature, methodConfig);
  }
}

void V8WebGL2RenderingContext::installWebXR(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Object> instance, v8::Local<v8::Object> prototype, v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interfaceTemplate = V8WebGL2RenderingContext::wrapperTypeInfo.domTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  ExecutionContext* executionContext = ToExecutionContext(isolate->GetCurrentContext());
  bool isSecureContext = (executionContext && executionContext->IsSecureContext());
  if (isSecureContext) {
    static const V8DOMConfiguration::MethodConfiguration methodSetcompatiblexrdeviceConfiguration[] = {
      {"setCompatibleXRDevice", V8WebGL2RenderingContext::setCompatibleXRDeviceMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
    };
    for (const auto& methodConfig : methodSetcompatiblexrdeviceConfiguration)
      V8DOMConfiguration::InstallMethod(isolate, world, instance, prototype, interface, signature, methodConfig);
  }
}

void V8WebGL2RenderingContext::installWebXR(ScriptState* scriptState, v8::Local<v8::Object> instance) {
  V8PerContextData* perContextData = scriptState->PerContextData();
  v8::Local<v8::Object> prototype = perContextData->PrototypeForType(&V8WebGL2RenderingContext::wrapperTypeInfo);
  v8::Local<v8::Function> interface = perContextData->ConstructorForType(&V8WebGL2RenderingContext::wrapperTypeInfo);
  ALLOW_UNUSED_LOCAL(interface);
  installWebXR(scriptState->GetIsolate(), scriptState->World(), instance, prototype, interface);
}

void V8WebGL2RenderingContext::installWebXR(ScriptState* scriptState) {
  installWebXR(scriptState, v8::Local<v8::Object>());
}

v8::Local<v8::FunctionTemplate> V8WebGL2RenderingContext::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8WebGL2RenderingContextTemplate);
}

bool V8WebGL2RenderingContext::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8WebGL2RenderingContext::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

WebGL2RenderingContext* V8WebGL2RenderingContext::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

WebGL2RenderingContext* NativeValueTraits<WebGL2RenderingContext>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  WebGL2RenderingContext* nativeValue = V8WebGL2RenderingContext::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "WebGL2RenderingContext"));
  }
  return nativeValue;
}

}  // namespace blink
