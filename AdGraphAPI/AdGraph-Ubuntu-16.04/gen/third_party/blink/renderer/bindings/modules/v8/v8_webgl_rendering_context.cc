// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_rendering_context.h"

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
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_active_info.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_buffer.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_context_attributes.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_framebuffer.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_program.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_renderbuffer.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_shader.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_shader_precision_format.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_texture.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_uniform_location.h"
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
const WrapperTypeInfo V8WebGLRenderingContext::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8WebGLRenderingContext::domTemplate,
    nullptr,
    "WebGLRenderingContext",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in WebGLRenderingContext.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& WebGLRenderingContext::wrapper_type_info_ = V8WebGLRenderingContext::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, WebGLRenderingContext>::value,
    "WebGLRenderingContext inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&WebGLRenderingContext::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "WebGLRenderingContext is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace WebGLRenderingContextV8Internal {

static void canvasAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(holder);

  HTMLCanvasElementOrOffscreenCanvas result;
  impl->getHTMLOrOffscreenCanvas(result);

  V8SetReturnValue(info, result);
}

static void drawingBufferWidthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(holder);

  V8SetReturnValueInt(info, impl->drawingBufferWidth());
}

static void drawingBufferHeightAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(holder);

  V8SetReturnValueInt(info, impl->drawingBufferHeight());
}

static void activeTextureMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "activeTexture");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("attachShader", "WebGLRenderingContext", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  WebGLProgram* program;
  WebGLShader* shader;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("attachShader", "WebGLRenderingContext", "parameter 1 is not of type 'WebGLProgram'."));
    return;
  }

  shader = V8WebGLShader::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!shader) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("attachShader", "WebGLRenderingContext", "parameter 2 is not of type 'WebGLShader'."));
    return;
  }

  impl->attachShader(program, shader);
}

static void bindAttribLocationMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "bindAttribLocation");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "bindBuffer");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "bindFramebuffer");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "bindRenderbuffer");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "bindTexture");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "blendColor");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "blendEquation");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "blendEquationSeparate");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "blendFunc");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "blendFuncSeparate");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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

static void bufferData1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "bufferData");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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

static void bufferData2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "bufferData");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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

static void bufferData3Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "bufferData");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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

  switch (std::min(3, info.Length())) {
    case 3:
      if (IsUndefinedOrNull(info[1])) {
        bufferData3Method(info);
        return;
      }
      if (info[1]->IsArrayBufferView()) {
        bufferData2Method(info);
        return;
      }
      if (info[1]->IsArrayBuffer()) {
        bufferData3Method(info);
        return;
      }
      if (info[1]->IsNumber()) {
        bufferData1Method(info);
        return;
      }
      if (true) {
        bufferData1Method(info);
        return;
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "bufferData");
  if (isArityError) {
    if (info.Length() < 3) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void bufferSubData1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "bufferSubData");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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

static void bufferSubData2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "bufferSubData");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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

  switch (std::min(3, info.Length())) {
    case 3:
      if (info[2]->IsArrayBufferView()) {
        bufferSubData1Method(info);
        return;
      }
      if (info[2]->IsArrayBuffer()) {
        bufferSubData2Method(info);
        return;
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "bufferSubData");
  if (isArityError) {
    if (info.Length() < 3) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void checkFramebufferStatusMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "checkFramebufferStatus");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "clear");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "clearColor");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "clearDepth");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "clearStencil");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "colorMask");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("compileShader", "WebGLRenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLShader* shader;
  shader = V8WebGLShader::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!shader) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("compileShader", "WebGLRenderingContext", "parameter 1 is not of type 'WebGLShader'."));
    return;
  }

  impl->compileShader(shader);
}

static void compressedTexImage2DMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "compressedTexImage2D");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 7)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(7, info.Length()));
    return;
  }

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

static void compressedTexSubImage2DMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "compressedTexSubImage2D");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 8)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(8, info.Length()));
    return;
  }

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

static void copyTexImage2DMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "copyTexImage2D");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "copyTexSubImage2D");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->createBuffer());
}

static void createFramebufferMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->createFramebuffer());
}

static void createProgramMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->createProgram());
}

static void createRenderbufferMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->createRenderbuffer());
}

static void createShaderMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "createShader");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->createTexture());
}

static void cullFaceMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "cullFace");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteBuffer", "WebGLRenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLBuffer* buffer;
  buffer = V8WebGLBuffer::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!buffer && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteBuffer", "WebGLRenderingContext", "parameter 1 is not of type 'WebGLBuffer'."));
    return;
  }

  impl->deleteBuffer(buffer);
}

static void deleteFramebufferMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteFramebuffer", "WebGLRenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLFramebuffer* framebuffer;
  framebuffer = V8WebGLFramebuffer::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!framebuffer && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteFramebuffer", "WebGLRenderingContext", "parameter 1 is not of type 'WebGLFramebuffer'."));
    return;
  }

  impl->deleteFramebuffer(framebuffer);
}

static void deleteProgramMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteProgram", "WebGLRenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLProgram* program;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteProgram", "WebGLRenderingContext", "parameter 1 is not of type 'WebGLProgram'."));
    return;
  }

  impl->deleteProgram(program);
}

static void deleteRenderbufferMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteRenderbuffer", "WebGLRenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLRenderbuffer* renderbuffer;
  renderbuffer = V8WebGLRenderbuffer::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!renderbuffer && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteRenderbuffer", "WebGLRenderingContext", "parameter 1 is not of type 'WebGLRenderbuffer'."));
    return;
  }

  impl->deleteRenderbuffer(renderbuffer);
}

static void deleteShaderMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteShader", "WebGLRenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLShader* shader;
  shader = V8WebGLShader::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!shader && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteShader", "WebGLRenderingContext", "parameter 1 is not of type 'WebGLShader'."));
    return;
  }

  impl->deleteShader(shader);
}

static void deleteTextureMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteTexture", "WebGLRenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLTexture* texture;
  texture = V8WebGLTexture::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!texture && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteTexture", "WebGLRenderingContext", "parameter 1 is not of type 'WebGLTexture'."));
    return;
  }

  impl->deleteTexture(texture);
}

static void depthFuncMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "depthFunc");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "depthMask");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "depthRange");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("detachShader", "WebGLRenderingContext", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  WebGLProgram* program;
  WebGLShader* shader;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("detachShader", "WebGLRenderingContext", "parameter 1 is not of type 'WebGLProgram'."));
    return;
  }

  shader = V8WebGLShader::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!shader) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("detachShader", "WebGLRenderingContext", "parameter 2 is not of type 'WebGLShader'."));
    return;
  }

  impl->detachShader(program, shader);
}

static void disableMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "disable");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "disableVertexAttribArray");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "drawArrays");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "drawElements");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "enable");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "enableVertexAttribArray");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  impl->finish();
}

static void flushMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  impl->flush();
}

static void framebufferRenderbufferMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "framebufferRenderbuffer");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "framebufferTexture2D");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "frontFace");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "generateMipmap");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "getActiveAttrib");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "getActiveUniform");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getAttachedShaders", "WebGLRenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLProgram* program;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getAttachedShaders", "WebGLRenderingContext", "parameter 1 is not of type 'WebGLProgram'."));
    return;
  }

  base::Optional<HeapVector<Member<WebGLShader>>> result = impl->getAttachedShaders(program);
  if (!result)
    V8SetReturnValueNull(info);
  else
    V8SetReturnValue(info, ToV8(result.value(), info.Holder(), info.GetIsolate()));
}

static void getAttribLocationMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getAttribLocation", "WebGLRenderingContext", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  WebGLProgram* program;
  V8StringResource<> name;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getAttribLocation", "WebGLRenderingContext", "parameter 1 is not of type 'WebGLProgram'."));
    return;
  }

  name = info[1];
  if (!name.Prepare())
    return;

  V8SetReturnValueInt(info, impl->getAttribLocation(program, name));
}

static void getBufferParameterMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "getBufferParameter");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  base::Optional<WebGLContextAttributes> result;
  impl->getContextAttributes(result);
  if (!result)
    V8SetReturnValueNull(info);
  else
    V8SetReturnValue(info, result.value());
}

static void getErrorMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  V8SetReturnValueUnsigned(info, impl->getError());
}

static void getExtensionMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getExtension", "WebGLRenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "getFramebufferAttachmentParameter");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "getParameter");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "getProgramParameter");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getProgramInfoLog", "WebGLRenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLProgram* program;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getProgramInfoLog", "WebGLRenderingContext", "parameter 1 is not of type 'WebGLProgram'."));
    return;
  }

  V8SetReturnValueStringOrNull(info, impl->getProgramInfoLog(program), info.GetIsolate());
}

static void getRenderbufferParameterMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "getRenderbufferParameter");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "getShaderParameter");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getShaderInfoLog", "WebGLRenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLShader* shader;
  shader = V8WebGLShader::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!shader) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getShaderInfoLog", "WebGLRenderingContext", "parameter 1 is not of type 'WebGLShader'."));
    return;
  }

  V8SetReturnValueStringOrNull(info, impl->getShaderInfoLog(shader), info.GetIsolate());
}

static void getShaderPrecisionFormatMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "getShaderPrecisionFormat");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getShaderSource", "WebGLRenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLShader* shader;
  shader = V8WebGLShader::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!shader) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getShaderSource", "WebGLRenderingContext", "parameter 1 is not of type 'WebGLShader'."));
    return;
  }

  V8SetReturnValueStringOrNull(info, impl->getShaderSource(shader), info.GetIsolate());
}

static void getSupportedExtensionsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  base::Optional<Vector<String>> result = impl->getSupportedExtensions();
  if (!result)
    V8SetReturnValueNull(info);
  else
    V8SetReturnValue(info, ToV8(result.value(), info.Holder(), info.GetIsolate()));
}

static void getTexParameterMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "getTexParameter");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getUniform", "WebGLRenderingContext", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  WebGLProgram* program;
  WebGLUniformLocation* location;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getUniform", "WebGLRenderingContext", "parameter 1 is not of type 'WebGLProgram'."));
    return;
  }

  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!location) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getUniform", "WebGLRenderingContext", "parameter 2 is not of type 'WebGLUniformLocation'."));
    return;
  }

  ScriptValue result = impl->getUniform(scriptState, program, location);
  V8SetReturnValue(info, result.V8Value());
}

static void getUniformLocationMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getUniformLocation", "WebGLRenderingContext", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  WebGLProgram* program;
  V8StringResource<> name;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getUniformLocation", "WebGLRenderingContext", "parameter 1 is not of type 'WebGLProgram'."));
    return;
  }

  name = info[1];
  if (!name.Prepare())
    return;

  V8SetReturnValue(info, impl->getUniformLocation(program, name));
}

static void getVertexAttribMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "getVertexAttrib");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "getVertexAttribOffset");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "hint");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isBuffer", "WebGLRenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLBuffer* buffer;
  buffer = V8WebGLBuffer::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!buffer && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isBuffer", "WebGLRenderingContext", "parameter 1 is not of type 'WebGLBuffer'."));
    return;
  }

  V8SetReturnValueBool(info, impl->isBuffer(buffer));
}

static void isContextLostMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  V8SetReturnValueBool(info, impl->isContextLost());
}

static void isEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "isEnabled");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isFramebuffer", "WebGLRenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLFramebuffer* framebuffer;
  framebuffer = V8WebGLFramebuffer::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!framebuffer && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isFramebuffer", "WebGLRenderingContext", "parameter 1 is not of type 'WebGLFramebuffer'."));
    return;
  }

  V8SetReturnValueBool(info, impl->isFramebuffer(framebuffer));
}

static void isProgramMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isProgram", "WebGLRenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLProgram* program;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isProgram", "WebGLRenderingContext", "parameter 1 is not of type 'WebGLProgram'."));
    return;
  }

  V8SetReturnValueBool(info, impl->isProgram(program));
}

static void isRenderbufferMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isRenderbuffer", "WebGLRenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLRenderbuffer* renderbuffer;
  renderbuffer = V8WebGLRenderbuffer::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!renderbuffer && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isRenderbuffer", "WebGLRenderingContext", "parameter 1 is not of type 'WebGLRenderbuffer'."));
    return;
  }

  V8SetReturnValueBool(info, impl->isRenderbuffer(renderbuffer));
}

static void isShaderMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isShader", "WebGLRenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLShader* shader;
  shader = V8WebGLShader::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!shader && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isShader", "WebGLRenderingContext", "parameter 1 is not of type 'WebGLShader'."));
    return;
  }

  V8SetReturnValueBool(info, impl->isShader(shader));
}

static void isTextureMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isTexture", "WebGLRenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLTexture* texture;
  texture = V8WebGLTexture::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!texture && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isTexture", "WebGLRenderingContext", "parameter 1 is not of type 'WebGLTexture'."));
    return;
  }

  V8SetReturnValueBool(info, impl->isTexture(texture));
}

static void lineWidthMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "lineWidth");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("linkProgram", "WebGLRenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLProgram* program;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("linkProgram", "WebGLRenderingContext", "parameter 1 is not of type 'WebGLProgram'."));
    return;
  }

  impl->linkProgram(program);
}

static void pixelStoreiMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "pixelStorei");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "polygonOffset");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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

static void readPixelsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "readPixels");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 7)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(7, info.Length()));
    return;
  }

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

static void renderbufferStorageMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "renderbufferStorage");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "sampleCoverage");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "scissor");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("shaderSource", "WebGLRenderingContext", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  WebGLShader* shader;
  V8StringResource<> string;
  shader = V8WebGLShader::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!shader) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("shaderSource", "WebGLRenderingContext", "parameter 1 is not of type 'WebGLShader'."));
    return;
  }

  string = info[1];
  if (!string.Prepare())
    return;

  impl->shaderSource(shader, string);
}

static void stencilFuncMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "stencilFunc");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "stencilFuncSeparate");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "stencilMask");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "stencilMaskSeparate");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "stencilOp");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "stencilOpSeparate");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "texParameterf");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "texParameteri");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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

static void texImage2D1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "texImage2D");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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

static void texImage2D2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "texImage2D");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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

static void texImage2D3Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "texImage2D");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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

static void texImage2D4Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "texImage2D");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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

static void texImage2D5Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "texImage2D");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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

static void texImage2D6Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "texImage2D");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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

  switch (std::min(9, info.Length())) {
    case 6:
      if (V8ImageData::hasInstance(info[5], info.GetIsolate())) {
        texImage2D2Method(info);
        return;
      }
      if (V8HTMLImageElement::hasInstance(info[5], info.GetIsolate())) {
        texImage2D3Method(info);
        return;
      }
      if (V8HTMLCanvasElement::hasInstance(info[5], info.GetIsolate())) {
        texImage2D4Method(info);
        return;
      }
      if (V8HTMLVideoElement::hasInstance(info[5], info.GetIsolate())) {
        texImage2D5Method(info);
        return;
      }
      if (V8ImageBitmap::hasInstance(info[5], info.GetIsolate())) {
        texImage2D6Method(info);
        return;
      }
      break;
    case 9:
      if (true) {
        texImage2D1Method(info);
        return;
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "texImage2D");
  if (isArityError) {
    if (info.Length() < 6) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(6, info.Length()));
      return;
    }
    if (info.Length() >= 6) {
      exceptionState.ThrowTypeError(ExceptionMessages::InvalidArity("[6, 9]", info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void texSubImage2D1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "texSubImage2D");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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

static void texSubImage2D2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "texSubImage2D");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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

static void texSubImage2D3Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "texSubImage2D");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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

static void texSubImage2D4Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "texSubImage2D");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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

static void texSubImage2D5Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "texSubImage2D");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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

static void texSubImage2D6Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "texSubImage2D");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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

  switch (std::min(9, info.Length())) {
    case 7:
      if (V8ImageData::hasInstance(info[6], info.GetIsolate())) {
        texSubImage2D2Method(info);
        return;
      }
      if (V8HTMLImageElement::hasInstance(info[6], info.GetIsolate())) {
        texSubImage2D3Method(info);
        return;
      }
      if (V8HTMLCanvasElement::hasInstance(info[6], info.GetIsolate())) {
        texSubImage2D4Method(info);
        return;
      }
      if (V8HTMLVideoElement::hasInstance(info[6], info.GetIsolate())) {
        texSubImage2D5Method(info);
        return;
      }
      if (V8ImageBitmap::hasInstance(info[6], info.GetIsolate())) {
        texSubImage2D6Method(info);
        return;
      }
      break;
    case 9:
      if (true) {
        texSubImage2D1Method(info);
        return;
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "texSubImage2D");
  if (isArityError) {
    if (info.Length() < 7) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(7, info.Length()));
      return;
    }
    if (info.Length() >= 7) {
      exceptionState.ThrowTypeError(ExceptionMessages::InvalidArity("[7, 9]", info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void uniform1fMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniform1f");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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

static void uniform1fv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniform1fv");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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

static void uniform1fv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniform1fv");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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

  switch (std::min(2, info.Length())) {
    case 2:
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
                                      "WebGLRenderingContext", "uniform1fv");
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

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniform1fv");
  if (isArityError) {
    if (info.Length() < 2) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void uniform1iMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniform1i");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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

static void uniform1iv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniform1iv");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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

static void uniform1iv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniform1iv");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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

  switch (std::min(2, info.Length())) {
    case 2:
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
                                      "WebGLRenderingContext", "uniform1iv");
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

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniform1iv");
  if (isArityError) {
    if (info.Length() < 2) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void uniform2fMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniform2f");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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

static void uniform2fv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniform2fv");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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

static void uniform2fv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniform2fv");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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

  switch (std::min(2, info.Length())) {
    case 2:
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
                                      "WebGLRenderingContext", "uniform2fv");
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

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniform2fv");
  if (isArityError) {
    if (info.Length() < 2) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void uniform2iMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniform2i");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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

static void uniform2iv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniform2iv");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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

static void uniform2iv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniform2iv");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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

  switch (std::min(2, info.Length())) {
    case 2:
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
                                      "WebGLRenderingContext", "uniform2iv");
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

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniform2iv");
  if (isArityError) {
    if (info.Length() < 2) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void uniform3fMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniform3f");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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

static void uniform3fv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniform3fv");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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

static void uniform3fv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniform3fv");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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

  switch (std::min(2, info.Length())) {
    case 2:
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
                                      "WebGLRenderingContext", "uniform3fv");
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

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniform3fv");
  if (isArityError) {
    if (info.Length() < 2) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void uniform3iMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniform3i");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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

static void uniform3iv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniform3iv");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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

static void uniform3iv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniform3iv");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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

  switch (std::min(2, info.Length())) {
    case 2:
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
                                      "WebGLRenderingContext", "uniform3iv");
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

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniform3iv");
  if (isArityError) {
    if (info.Length() < 2) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void uniform4fMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniform4f");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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

static void uniform4fv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniform4fv");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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

static void uniform4fv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniform4fv");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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

  switch (std::min(2, info.Length())) {
    case 2:
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
                                      "WebGLRenderingContext", "uniform4fv");
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

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniform4fv");
  if (isArityError) {
    if (info.Length() < 2) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void uniform4iMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniform4i");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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

static void uniform4iv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniform4iv");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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

static void uniform4iv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniform4iv");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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

  switch (std::min(2, info.Length())) {
    case 2:
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
                                      "WebGLRenderingContext", "uniform4iv");
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

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniform4iv");
  if (isArityError) {
    if (info.Length() < 2) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void uniformMatrix2fv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniformMatrix2fv");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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

static void uniformMatrix2fv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniformMatrix2fv");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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

  switch (std::min(3, info.Length())) {
    case 3:
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
                                      "WebGLRenderingContext", "uniformMatrix2fv");
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

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniformMatrix2fv");
  if (isArityError) {
    if (info.Length() < 3) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void uniformMatrix3fv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniformMatrix3fv");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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

static void uniformMatrix3fv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniformMatrix3fv");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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

  switch (std::min(3, info.Length())) {
    case 3:
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
                                      "WebGLRenderingContext", "uniformMatrix3fv");
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

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniformMatrix3fv");
  if (isArityError) {
    if (info.Length() < 3) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void uniformMatrix4fv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniformMatrix4fv");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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

static void uniformMatrix4fv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniformMatrix4fv");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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

  switch (std::min(3, info.Length())) {
    case 3:
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
                                      "WebGLRenderingContext", "uniformMatrix4fv");
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

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniformMatrix4fv");
  if (isArityError) {
    if (info.Length() < 3) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void useProgramMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("useProgram", "WebGLRenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLProgram* program;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("useProgram", "WebGLRenderingContext", "parameter 1 is not of type 'WebGLProgram'."));
    return;
  }

  impl->useProgram(program);
}

static void validateProgramMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("validateProgram", "WebGLRenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLProgram* program;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("validateProgram", "WebGLRenderingContext", "parameter 1 is not of type 'WebGLProgram'."));
    return;
  }

  impl->validateProgram(program);
}

static void vertexAttrib1fMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "vertexAttrib1f");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "vertexAttrib1fv");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "vertexAttrib1fv");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
                                      "WebGLRenderingContext", "vertexAttrib1fv");
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

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "vertexAttrib1fv");
  if (isArityError) {
    if (info.Length() < 2) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void vertexAttrib2fMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "vertexAttrib2f");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "vertexAttrib2fv");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "vertexAttrib2fv");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
                                      "WebGLRenderingContext", "vertexAttrib2fv");
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

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "vertexAttrib2fv");
  if (isArityError) {
    if (info.Length() < 2) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void vertexAttrib3fMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "vertexAttrib3f");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "vertexAttrib3fv");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "vertexAttrib3fv");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
                                      "WebGLRenderingContext", "vertexAttrib3fv");
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

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "vertexAttrib3fv");
  if (isArityError) {
    if (info.Length() < 2) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void vertexAttrib4fMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "vertexAttrib4f");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "vertexAttrib4fv");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "vertexAttrib4fv");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
                                      "WebGLRenderingContext", "vertexAttrib4fv");
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

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "vertexAttrib4fv");
  if (isArityError) {
    if (info.Length() < 2) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void vertexAttribPointerMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "vertexAttribPointer");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "viewport");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  impl->commit();
}

static void setCompatibleXRDeviceMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "setCompatibleXRDevice");
  ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8WebGLRenderingContext::hasInstance(info.Holder(), info.GetIsolate())) {
    exceptionState.ThrowTypeError("Illegal invocation");
    return;
  }
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

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

} // namespace WebGLRenderingContextV8Internal

void V8WebGLRenderingContext::canvasAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_canvas_Getter");

  WebGLRenderingContextV8Internal::canvasAttributeGetter(info);
}

void V8WebGLRenderingContext::drawingBufferWidthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_drawingBufferWidth_Getter");

  WebGLRenderingContextV8Internal::drawingBufferWidthAttributeGetter(info);
}

void V8WebGLRenderingContext::drawingBufferHeightAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_drawingBufferHeight_Getter");

  WebGLRenderingContextV8Internal::drawingBufferHeightAttributeGetter(info);
}

void V8WebGLRenderingContext::activeTextureMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_activeTexture");

  WebGLRenderingContextV8Internal::activeTextureMethod(info);
}

void V8WebGLRenderingContext::attachShaderMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_attachShader");

  WebGLRenderingContextV8Internal::attachShaderMethod(info);
}

void V8WebGLRenderingContext::bindAttribLocationMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_bindAttribLocation");

  WebGLRenderingContextV8Internal::bindAttribLocationMethod(info);
}

void V8WebGLRenderingContext::bindBufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_bindBuffer");

  WebGLRenderingContextV8Internal::bindBufferMethod(info);
}

void V8WebGLRenderingContext::bindFramebufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_bindFramebuffer");

  WebGLRenderingContextV8Internal::bindFramebufferMethod(info);
}

void V8WebGLRenderingContext::bindRenderbufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_bindRenderbuffer");

  WebGLRenderingContextV8Internal::bindRenderbufferMethod(info);
}

void V8WebGLRenderingContext::bindTextureMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_bindTexture");

  WebGLRenderingContextV8Internal::bindTextureMethod(info);
}

void V8WebGLRenderingContext::blendColorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_blendColor");

  WebGLRenderingContextV8Internal::blendColorMethod(info);
}

void V8WebGLRenderingContext::blendEquationMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_blendEquation");

  WebGLRenderingContextV8Internal::blendEquationMethod(info);
}

void V8WebGLRenderingContext::blendEquationSeparateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_blendEquationSeparate");

  WebGLRenderingContextV8Internal::blendEquationSeparateMethod(info);
}

void V8WebGLRenderingContext::blendFuncMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_blendFunc");

  WebGLRenderingContextV8Internal::blendFuncMethod(info);
}

void V8WebGLRenderingContext::blendFuncSeparateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_blendFuncSeparate");

  WebGLRenderingContextV8Internal::blendFuncSeparateMethod(info);
}

void V8WebGLRenderingContext::bufferDataMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_bufferData");

  WebGLRenderingContextV8Internal::bufferDataMethod(info);
}

void V8WebGLRenderingContext::bufferSubDataMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_bufferSubData");

  WebGLRenderingContextV8Internal::bufferSubDataMethod(info);
}

void V8WebGLRenderingContext::checkFramebufferStatusMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_checkFramebufferStatus");

  WebGLRenderingContextV8Internal::checkFramebufferStatusMethod(info);
}

void V8WebGLRenderingContext::clearMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_clear");

  WebGLRenderingContextV8Internal::clearMethod(info);
}

void V8WebGLRenderingContext::clearColorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_clearColor");

  WebGLRenderingContextV8Internal::clearColorMethod(info);
}

void V8WebGLRenderingContext::clearDepthMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_clearDepth");

  WebGLRenderingContextV8Internal::clearDepthMethod(info);
}

void V8WebGLRenderingContext::clearStencilMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_clearStencil");

  WebGLRenderingContextV8Internal::clearStencilMethod(info);
}

void V8WebGLRenderingContext::colorMaskMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_colorMask");

  WebGLRenderingContextV8Internal::colorMaskMethod(info);
}

void V8WebGLRenderingContext::compileShaderMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_compileShader");

  WebGLRenderingContextV8Internal::compileShaderMethod(info);
}

void V8WebGLRenderingContext::compressedTexImage2DMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_compressedTexImage2D");

  WebGLRenderingContextV8Internal::compressedTexImage2DMethod(info);
}

void V8WebGLRenderingContext::compressedTexSubImage2DMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_compressedTexSubImage2D");

  WebGLRenderingContextV8Internal::compressedTexSubImage2DMethod(info);
}

void V8WebGLRenderingContext::copyTexImage2DMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_copyTexImage2D");

  WebGLRenderingContextV8Internal::copyTexImage2DMethod(info);
}

void V8WebGLRenderingContext::copyTexSubImage2DMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_copyTexSubImage2D");

  WebGLRenderingContextV8Internal::copyTexSubImage2DMethod(info);
}

void V8WebGLRenderingContext::createBufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_createBuffer");

  WebGLRenderingContextV8Internal::createBufferMethod(info);
}

void V8WebGLRenderingContext::createFramebufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_createFramebuffer");

  WebGLRenderingContextV8Internal::createFramebufferMethod(info);
}

void V8WebGLRenderingContext::createProgramMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_createProgram");

  WebGLRenderingContextV8Internal::createProgramMethod(info);
}

void V8WebGLRenderingContext::createRenderbufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_createRenderbuffer");

  WebGLRenderingContextV8Internal::createRenderbufferMethod(info);
}

void V8WebGLRenderingContext::createShaderMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_createShader");

  WebGLRenderingContextV8Internal::createShaderMethod(info);
}

void V8WebGLRenderingContext::createTextureMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_createTexture");

  WebGLRenderingContextV8Internal::createTextureMethod(info);
}

void V8WebGLRenderingContext::cullFaceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_cullFace");

  WebGLRenderingContextV8Internal::cullFaceMethod(info);
}

void V8WebGLRenderingContext::deleteBufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_deleteBuffer");

  WebGLRenderingContextV8Internal::deleteBufferMethod(info);
}

void V8WebGLRenderingContext::deleteFramebufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_deleteFramebuffer");

  WebGLRenderingContextV8Internal::deleteFramebufferMethod(info);
}

void V8WebGLRenderingContext::deleteProgramMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_deleteProgram");

  WebGLRenderingContextV8Internal::deleteProgramMethod(info);
}

void V8WebGLRenderingContext::deleteRenderbufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_deleteRenderbuffer");

  WebGLRenderingContextV8Internal::deleteRenderbufferMethod(info);
}

void V8WebGLRenderingContext::deleteShaderMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_deleteShader");

  WebGLRenderingContextV8Internal::deleteShaderMethod(info);
}

void V8WebGLRenderingContext::deleteTextureMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_deleteTexture");

  WebGLRenderingContextV8Internal::deleteTextureMethod(info);
}

void V8WebGLRenderingContext::depthFuncMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_depthFunc");

  WebGLRenderingContextV8Internal::depthFuncMethod(info);
}

void V8WebGLRenderingContext::depthMaskMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_depthMask");

  WebGLRenderingContextV8Internal::depthMaskMethod(info);
}

void V8WebGLRenderingContext::depthRangeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_depthRange");

  WebGLRenderingContextV8Internal::depthRangeMethod(info);
}

void V8WebGLRenderingContext::detachShaderMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_detachShader");

  WebGLRenderingContextV8Internal::detachShaderMethod(info);
}

void V8WebGLRenderingContext::disableMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_disable");

  WebGLRenderingContextV8Internal::disableMethod(info);
}

void V8WebGLRenderingContext::disableVertexAttribArrayMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_disableVertexAttribArray");

  WebGLRenderingContextV8Internal::disableVertexAttribArrayMethod(info);
}

void V8WebGLRenderingContext::drawArraysMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_drawArrays");

  WebGLRenderingContextV8Internal::drawArraysMethod(info);
}

void V8WebGLRenderingContext::drawElementsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_drawElements");

  WebGLRenderingContextV8Internal::drawElementsMethod(info);
}

void V8WebGLRenderingContext::enableMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_enable");

  WebGLRenderingContextV8Internal::enableMethod(info);
}

void V8WebGLRenderingContext::enableVertexAttribArrayMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_enableVertexAttribArray");

  WebGLRenderingContextV8Internal::enableVertexAttribArrayMethod(info);
}

void V8WebGLRenderingContext::finishMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_finish");

  WebGLRenderingContextV8Internal::finishMethod(info);
}

void V8WebGLRenderingContext::flushMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_flush");

  WebGLRenderingContextV8Internal::flushMethod(info);
}

void V8WebGLRenderingContext::framebufferRenderbufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_framebufferRenderbuffer");

  WebGLRenderingContextV8Internal::framebufferRenderbufferMethod(info);
}

void V8WebGLRenderingContext::framebufferTexture2DMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_framebufferTexture2D");

  WebGLRenderingContextV8Internal::framebufferTexture2DMethod(info);
}

void V8WebGLRenderingContext::frontFaceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_frontFace");

  WebGLRenderingContextV8Internal::frontFaceMethod(info);
}

void V8WebGLRenderingContext::generateMipmapMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_generateMipmap");

  WebGLRenderingContextV8Internal::generateMipmapMethod(info);
}

void V8WebGLRenderingContext::getActiveAttribMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_getActiveAttrib");

  WebGLRenderingContextV8Internal::getActiveAttribMethod(info);
}

void V8WebGLRenderingContext::getActiveUniformMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_getActiveUniform");

  WebGLRenderingContextV8Internal::getActiveUniformMethod(info);
}

void V8WebGLRenderingContext::getAttachedShadersMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_getAttachedShaders");

  WebGLRenderingContextV8Internal::getAttachedShadersMethod(info);
}

void V8WebGLRenderingContext::getAttribLocationMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_getAttribLocation");

  WebGLRenderingContextV8Internal::getAttribLocationMethod(info);
}

void V8WebGLRenderingContext::getBufferParameterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_getBufferParameter");

  WebGLRenderingContextV8Internal::getBufferParameterMethod(info);
}

void V8WebGLRenderingContext::getContextAttributesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_getContextAttributes");

  WebGLRenderingContextV8Internal::getContextAttributesMethod(info);
}

void V8WebGLRenderingContext::getErrorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_getError");

  WebGLRenderingContextV8Internal::getErrorMethod(info);
}

void V8WebGLRenderingContext::getExtensionMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_getExtension");

  WebGLRenderingContextV8Internal::getExtensionMethod(info);
}

void V8WebGLRenderingContext::getFramebufferAttachmentParameterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_getFramebufferAttachmentParameter");

  WebGLRenderingContextV8Internal::getFramebufferAttachmentParameterMethod(info);
}

void V8WebGLRenderingContext::getParameterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_getParameter");

  WebGLRenderingContextV8Internal::getParameterMethod(info);
}

void V8WebGLRenderingContext::getProgramParameterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_getProgramParameter");

  WebGLRenderingContextV8Internal::getProgramParameterMethod(info);
}

void V8WebGLRenderingContext::getProgramInfoLogMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_getProgramInfoLog");

  WebGLRenderingContextV8Internal::getProgramInfoLogMethod(info);
}

void V8WebGLRenderingContext::getRenderbufferParameterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_getRenderbufferParameter");

  WebGLRenderingContextV8Internal::getRenderbufferParameterMethod(info);
}

void V8WebGLRenderingContext::getShaderParameterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_getShaderParameter");

  WebGLRenderingContextV8Internal::getShaderParameterMethod(info);
}

void V8WebGLRenderingContext::getShaderInfoLogMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_getShaderInfoLog");

  WebGLRenderingContextV8Internal::getShaderInfoLogMethod(info);
}

void V8WebGLRenderingContext::getShaderPrecisionFormatMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_getShaderPrecisionFormat");

  WebGLRenderingContextV8Internal::getShaderPrecisionFormatMethod(info);
}

void V8WebGLRenderingContext::getShaderSourceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_getShaderSource");

  WebGLRenderingContextV8Internal::getShaderSourceMethod(info);
}

void V8WebGLRenderingContext::getSupportedExtensionsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_getSupportedExtensions");

  WebGLRenderingContextV8Internal::getSupportedExtensionsMethod(info);
}

void V8WebGLRenderingContext::getTexParameterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_getTexParameter");

  WebGLRenderingContextV8Internal::getTexParameterMethod(info);
}

void V8WebGLRenderingContext::getUniformMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_getUniform");

  WebGLRenderingContextV8Internal::getUniformMethod(info);
}

void V8WebGLRenderingContext::getUniformLocationMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_getUniformLocation");

  WebGLRenderingContextV8Internal::getUniformLocationMethod(info);
}

void V8WebGLRenderingContext::getVertexAttribMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_getVertexAttrib");

  WebGLRenderingContextV8Internal::getVertexAttribMethod(info);
}

void V8WebGLRenderingContext::getVertexAttribOffsetMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_getVertexAttribOffset");

  WebGLRenderingContextV8Internal::getVertexAttribOffsetMethod(info);
}

void V8WebGLRenderingContext::hintMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_hint");

  WebGLRenderingContextV8Internal::hintMethod(info);
}

void V8WebGLRenderingContext::isBufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_isBuffer");

  WebGLRenderingContextV8Internal::isBufferMethod(info);
}

void V8WebGLRenderingContext::isContextLostMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_isContextLost");

  WebGLRenderingContextV8Internal::isContextLostMethod(info);
}

void V8WebGLRenderingContext::isEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_isEnabled");

  WebGLRenderingContextV8Internal::isEnabledMethod(info);
}

void V8WebGLRenderingContext::isFramebufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_isFramebuffer");

  WebGLRenderingContextV8Internal::isFramebufferMethod(info);
}

void V8WebGLRenderingContext::isProgramMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_isProgram");

  WebGLRenderingContextV8Internal::isProgramMethod(info);
}

void V8WebGLRenderingContext::isRenderbufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_isRenderbuffer");

  WebGLRenderingContextV8Internal::isRenderbufferMethod(info);
}

void V8WebGLRenderingContext::isShaderMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_isShader");

  WebGLRenderingContextV8Internal::isShaderMethod(info);
}

void V8WebGLRenderingContext::isTextureMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_isTexture");

  WebGLRenderingContextV8Internal::isTextureMethod(info);
}

void V8WebGLRenderingContext::lineWidthMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_lineWidth");

  WebGLRenderingContextV8Internal::lineWidthMethod(info);
}

void V8WebGLRenderingContext::linkProgramMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_linkProgram");

  WebGLRenderingContextV8Internal::linkProgramMethod(info);
}

void V8WebGLRenderingContext::pixelStoreiMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_pixelStorei");

  WebGLRenderingContextV8Internal::pixelStoreiMethod(info);
}

void V8WebGLRenderingContext::polygonOffsetMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_polygonOffset");

  WebGLRenderingContextV8Internal::polygonOffsetMethod(info);
}

void V8WebGLRenderingContext::readPixelsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_readPixels");

  WebGLRenderingContextV8Internal::readPixelsMethod(info);
}

void V8WebGLRenderingContext::renderbufferStorageMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_renderbufferStorage");

  WebGLRenderingContextV8Internal::renderbufferStorageMethod(info);
}

void V8WebGLRenderingContext::sampleCoverageMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_sampleCoverage");

  WebGLRenderingContextV8Internal::sampleCoverageMethod(info);
}

void V8WebGLRenderingContext::scissorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_scissor");

  WebGLRenderingContextV8Internal::scissorMethod(info);
}

void V8WebGLRenderingContext::shaderSourceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_shaderSource");

  WebGLRenderingContextV8Internal::shaderSourceMethod(info);
}

void V8WebGLRenderingContext::stencilFuncMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_stencilFunc");

  WebGLRenderingContextV8Internal::stencilFuncMethod(info);
}

void V8WebGLRenderingContext::stencilFuncSeparateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_stencilFuncSeparate");

  WebGLRenderingContextV8Internal::stencilFuncSeparateMethod(info);
}

void V8WebGLRenderingContext::stencilMaskMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_stencilMask");

  WebGLRenderingContextV8Internal::stencilMaskMethod(info);
}

void V8WebGLRenderingContext::stencilMaskSeparateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_stencilMaskSeparate");

  WebGLRenderingContextV8Internal::stencilMaskSeparateMethod(info);
}

void V8WebGLRenderingContext::stencilOpMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_stencilOp");

  WebGLRenderingContextV8Internal::stencilOpMethod(info);
}

void V8WebGLRenderingContext::stencilOpSeparateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_stencilOpSeparate");

  WebGLRenderingContextV8Internal::stencilOpSeparateMethod(info);
}

void V8WebGLRenderingContext::texParameterfMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_texParameterf");

  WebGLRenderingContextV8Internal::texParameterfMethod(info);
}

void V8WebGLRenderingContext::texParameteriMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_texParameteri");

  WebGLRenderingContextV8Internal::texParameteriMethod(info);
}

void V8WebGLRenderingContext::texImage2DMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_texImage2D");

  WebGLRenderingContextV8Internal::texImage2DMethod(info);
}

void V8WebGLRenderingContext::texSubImage2DMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_texSubImage2D");

  WebGLRenderingContextV8Internal::texSubImage2DMethod(info);
}

void V8WebGLRenderingContext::uniform1fMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_uniform1f");

  WebGLRenderingContextV8Internal::uniform1fMethod(info);
}

void V8WebGLRenderingContext::uniform1fvMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_uniform1fv");

  WebGLRenderingContextV8Internal::uniform1fvMethod(info);
}

void V8WebGLRenderingContext::uniform1iMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_uniform1i");

  WebGLRenderingContextV8Internal::uniform1iMethod(info);
}

void V8WebGLRenderingContext::uniform1ivMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_uniform1iv");

  WebGLRenderingContextV8Internal::uniform1ivMethod(info);
}

void V8WebGLRenderingContext::uniform2fMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_uniform2f");

  WebGLRenderingContextV8Internal::uniform2fMethod(info);
}

void V8WebGLRenderingContext::uniform2fvMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_uniform2fv");

  WebGLRenderingContextV8Internal::uniform2fvMethod(info);
}

void V8WebGLRenderingContext::uniform2iMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_uniform2i");

  WebGLRenderingContextV8Internal::uniform2iMethod(info);
}

void V8WebGLRenderingContext::uniform2ivMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_uniform2iv");

  WebGLRenderingContextV8Internal::uniform2ivMethod(info);
}

void V8WebGLRenderingContext::uniform3fMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_uniform3f");

  WebGLRenderingContextV8Internal::uniform3fMethod(info);
}

void V8WebGLRenderingContext::uniform3fvMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_uniform3fv");

  WebGLRenderingContextV8Internal::uniform3fvMethod(info);
}

void V8WebGLRenderingContext::uniform3iMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_uniform3i");

  WebGLRenderingContextV8Internal::uniform3iMethod(info);
}

void V8WebGLRenderingContext::uniform3ivMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_uniform3iv");

  WebGLRenderingContextV8Internal::uniform3ivMethod(info);
}

void V8WebGLRenderingContext::uniform4fMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_uniform4f");

  WebGLRenderingContextV8Internal::uniform4fMethod(info);
}

void V8WebGLRenderingContext::uniform4fvMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_uniform4fv");

  WebGLRenderingContextV8Internal::uniform4fvMethod(info);
}

void V8WebGLRenderingContext::uniform4iMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_uniform4i");

  WebGLRenderingContextV8Internal::uniform4iMethod(info);
}

void V8WebGLRenderingContext::uniform4ivMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_uniform4iv");

  WebGLRenderingContextV8Internal::uniform4ivMethod(info);
}

void V8WebGLRenderingContext::uniformMatrix2fvMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_uniformMatrix2fv");

  WebGLRenderingContextV8Internal::uniformMatrix2fvMethod(info);
}

void V8WebGLRenderingContext::uniformMatrix3fvMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_uniformMatrix3fv");

  WebGLRenderingContextV8Internal::uniformMatrix3fvMethod(info);
}

void V8WebGLRenderingContext::uniformMatrix4fvMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_uniformMatrix4fv");

  WebGLRenderingContextV8Internal::uniformMatrix4fvMethod(info);
}

void V8WebGLRenderingContext::useProgramMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_useProgram");

  WebGLRenderingContextV8Internal::useProgramMethod(info);
}

void V8WebGLRenderingContext::validateProgramMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_validateProgram");

  WebGLRenderingContextV8Internal::validateProgramMethod(info);
}

void V8WebGLRenderingContext::vertexAttrib1fMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_vertexAttrib1f");

  WebGLRenderingContextV8Internal::vertexAttrib1fMethod(info);
}

void V8WebGLRenderingContext::vertexAttrib1fvMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_vertexAttrib1fv");

  WebGLRenderingContextV8Internal::vertexAttrib1fvMethod(info);
}

void V8WebGLRenderingContext::vertexAttrib2fMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_vertexAttrib2f");

  WebGLRenderingContextV8Internal::vertexAttrib2fMethod(info);
}

void V8WebGLRenderingContext::vertexAttrib2fvMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_vertexAttrib2fv");

  WebGLRenderingContextV8Internal::vertexAttrib2fvMethod(info);
}

void V8WebGLRenderingContext::vertexAttrib3fMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_vertexAttrib3f");

  WebGLRenderingContextV8Internal::vertexAttrib3fMethod(info);
}

void V8WebGLRenderingContext::vertexAttrib3fvMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_vertexAttrib3fv");

  WebGLRenderingContextV8Internal::vertexAttrib3fvMethod(info);
}

void V8WebGLRenderingContext::vertexAttrib4fMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_vertexAttrib4f");

  WebGLRenderingContextV8Internal::vertexAttrib4fMethod(info);
}

void V8WebGLRenderingContext::vertexAttrib4fvMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_vertexAttrib4fv");

  WebGLRenderingContextV8Internal::vertexAttrib4fvMethod(info);
}

void V8WebGLRenderingContext::vertexAttribPointerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_vertexAttribPointer");

  WebGLRenderingContextV8Internal::vertexAttribPointerMethod(info);
}

void V8WebGLRenderingContext::viewportMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_viewport");

  WebGLRenderingContextV8Internal::viewportMethod(info);
}

void V8WebGLRenderingContext::commitMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_commit");

  WebGLRenderingContextV8Internal::commitMethod(info);
}

void V8WebGLRenderingContext::setCompatibleXRDeviceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_setCompatibleXRDevice");

  WebGLRenderingContextV8Internal::setCompatibleXRDeviceMethod(info);
}

static const V8DOMConfiguration::AccessorConfiguration V8WebGLRenderingContextAccessors[] = {
    { "canvas", V8WebGLRenderingContext::canvasAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "drawingBufferWidth", V8WebGLRenderingContext::drawingBufferWidthAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "drawingBufferHeight", V8WebGLRenderingContext::drawingBufferHeightAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
};

static const V8DOMConfiguration::MethodConfiguration V8WebGLRenderingContextMethods[] = {
    {"activeTexture", V8WebGLRenderingContext::activeTextureMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"attachShader", V8WebGLRenderingContext::attachShaderMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"bindAttribLocation", V8WebGLRenderingContext::bindAttribLocationMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"bindBuffer", V8WebGLRenderingContext::bindBufferMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"bindFramebuffer", V8WebGLRenderingContext::bindFramebufferMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"bindRenderbuffer", V8WebGLRenderingContext::bindRenderbufferMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"bindTexture", V8WebGLRenderingContext::bindTextureMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"blendColor", V8WebGLRenderingContext::blendColorMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"blendEquation", V8WebGLRenderingContext::blendEquationMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"blendEquationSeparate", V8WebGLRenderingContext::blendEquationSeparateMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"blendFunc", V8WebGLRenderingContext::blendFuncMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"blendFuncSeparate", V8WebGLRenderingContext::blendFuncSeparateMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"bufferData", V8WebGLRenderingContext::bufferDataMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"bufferSubData", V8WebGLRenderingContext::bufferSubDataMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"checkFramebufferStatus", V8WebGLRenderingContext::checkFramebufferStatusMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"clear", V8WebGLRenderingContext::clearMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"clearColor", V8WebGLRenderingContext::clearColorMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"clearDepth", V8WebGLRenderingContext::clearDepthMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"clearStencil", V8WebGLRenderingContext::clearStencilMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"colorMask", V8WebGLRenderingContext::colorMaskMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"compileShader", V8WebGLRenderingContext::compileShaderMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"compressedTexImage2D", V8WebGLRenderingContext::compressedTexImage2DMethodCallback, 7, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"compressedTexSubImage2D", V8WebGLRenderingContext::compressedTexSubImage2DMethodCallback, 8, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"copyTexImage2D", V8WebGLRenderingContext::copyTexImage2DMethodCallback, 8, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"copyTexSubImage2D", V8WebGLRenderingContext::copyTexSubImage2DMethodCallback, 8, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createBuffer", V8WebGLRenderingContext::createBufferMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createFramebuffer", V8WebGLRenderingContext::createFramebufferMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createProgram", V8WebGLRenderingContext::createProgramMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createRenderbuffer", V8WebGLRenderingContext::createRenderbufferMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createShader", V8WebGLRenderingContext::createShaderMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createTexture", V8WebGLRenderingContext::createTextureMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"cullFace", V8WebGLRenderingContext::cullFaceMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"deleteBuffer", V8WebGLRenderingContext::deleteBufferMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"deleteFramebuffer", V8WebGLRenderingContext::deleteFramebufferMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"deleteProgram", V8WebGLRenderingContext::deleteProgramMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"deleteRenderbuffer", V8WebGLRenderingContext::deleteRenderbufferMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"deleteShader", V8WebGLRenderingContext::deleteShaderMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"deleteTexture", V8WebGLRenderingContext::deleteTextureMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"depthFunc", V8WebGLRenderingContext::depthFuncMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"depthMask", V8WebGLRenderingContext::depthMaskMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"depthRange", V8WebGLRenderingContext::depthRangeMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"detachShader", V8WebGLRenderingContext::detachShaderMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"disable", V8WebGLRenderingContext::disableMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"disableVertexAttribArray", V8WebGLRenderingContext::disableVertexAttribArrayMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"drawArrays", V8WebGLRenderingContext::drawArraysMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"drawElements", V8WebGLRenderingContext::drawElementsMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"enable", V8WebGLRenderingContext::enableMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"enableVertexAttribArray", V8WebGLRenderingContext::enableVertexAttribArrayMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"finish", V8WebGLRenderingContext::finishMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"flush", V8WebGLRenderingContext::flushMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"framebufferRenderbuffer", V8WebGLRenderingContext::framebufferRenderbufferMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"framebufferTexture2D", V8WebGLRenderingContext::framebufferTexture2DMethodCallback, 5, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"frontFace", V8WebGLRenderingContext::frontFaceMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"generateMipmap", V8WebGLRenderingContext::generateMipmapMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getActiveAttrib", V8WebGLRenderingContext::getActiveAttribMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getActiveUniform", V8WebGLRenderingContext::getActiveUniformMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getAttachedShaders", V8WebGLRenderingContext::getAttachedShadersMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getAttribLocation", V8WebGLRenderingContext::getAttribLocationMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getBufferParameter", V8WebGLRenderingContext::getBufferParameterMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getContextAttributes", V8WebGLRenderingContext::getContextAttributesMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getError", V8WebGLRenderingContext::getErrorMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getExtension", V8WebGLRenderingContext::getExtensionMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getFramebufferAttachmentParameter", V8WebGLRenderingContext::getFramebufferAttachmentParameterMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getParameter", V8WebGLRenderingContext::getParameterMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getProgramParameter", V8WebGLRenderingContext::getProgramParameterMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getProgramInfoLog", V8WebGLRenderingContext::getProgramInfoLogMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getRenderbufferParameter", V8WebGLRenderingContext::getRenderbufferParameterMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getShaderParameter", V8WebGLRenderingContext::getShaderParameterMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getShaderInfoLog", V8WebGLRenderingContext::getShaderInfoLogMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getShaderPrecisionFormat", V8WebGLRenderingContext::getShaderPrecisionFormatMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getShaderSource", V8WebGLRenderingContext::getShaderSourceMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getSupportedExtensions", V8WebGLRenderingContext::getSupportedExtensionsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getTexParameter", V8WebGLRenderingContext::getTexParameterMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getUniform", V8WebGLRenderingContext::getUniformMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getUniformLocation", V8WebGLRenderingContext::getUniformLocationMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getVertexAttrib", V8WebGLRenderingContext::getVertexAttribMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getVertexAttribOffset", V8WebGLRenderingContext::getVertexAttribOffsetMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"hint", V8WebGLRenderingContext::hintMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isBuffer", V8WebGLRenderingContext::isBufferMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isContextLost", V8WebGLRenderingContext::isContextLostMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isEnabled", V8WebGLRenderingContext::isEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isFramebuffer", V8WebGLRenderingContext::isFramebufferMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isProgram", V8WebGLRenderingContext::isProgramMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isRenderbuffer", V8WebGLRenderingContext::isRenderbufferMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isShader", V8WebGLRenderingContext::isShaderMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isTexture", V8WebGLRenderingContext::isTextureMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"lineWidth", V8WebGLRenderingContext::lineWidthMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"linkProgram", V8WebGLRenderingContext::linkProgramMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"pixelStorei", V8WebGLRenderingContext::pixelStoreiMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"polygonOffset", V8WebGLRenderingContext::polygonOffsetMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"readPixels", V8WebGLRenderingContext::readPixelsMethodCallback, 7, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"renderbufferStorage", V8WebGLRenderingContext::renderbufferStorageMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"sampleCoverage", V8WebGLRenderingContext::sampleCoverageMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"scissor", V8WebGLRenderingContext::scissorMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"shaderSource", V8WebGLRenderingContext::shaderSourceMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"stencilFunc", V8WebGLRenderingContext::stencilFuncMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"stencilFuncSeparate", V8WebGLRenderingContext::stencilFuncSeparateMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"stencilMask", V8WebGLRenderingContext::stencilMaskMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"stencilMaskSeparate", V8WebGLRenderingContext::stencilMaskSeparateMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"stencilOp", V8WebGLRenderingContext::stencilOpMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"stencilOpSeparate", V8WebGLRenderingContext::stencilOpSeparateMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"texParameterf", V8WebGLRenderingContext::texParameterfMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"texParameteri", V8WebGLRenderingContext::texParameteriMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"texImage2D", V8WebGLRenderingContext::texImage2DMethodCallback, 6, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"texSubImage2D", V8WebGLRenderingContext::texSubImage2DMethodCallback, 7, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform1f", V8WebGLRenderingContext::uniform1fMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform1fv", V8WebGLRenderingContext::uniform1fvMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform1i", V8WebGLRenderingContext::uniform1iMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform1iv", V8WebGLRenderingContext::uniform1ivMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform2f", V8WebGLRenderingContext::uniform2fMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform2fv", V8WebGLRenderingContext::uniform2fvMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform2i", V8WebGLRenderingContext::uniform2iMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform2iv", V8WebGLRenderingContext::uniform2ivMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform3f", V8WebGLRenderingContext::uniform3fMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform3fv", V8WebGLRenderingContext::uniform3fvMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform3i", V8WebGLRenderingContext::uniform3iMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform3iv", V8WebGLRenderingContext::uniform3ivMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform4f", V8WebGLRenderingContext::uniform4fMethodCallback, 5, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform4fv", V8WebGLRenderingContext::uniform4fvMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform4i", V8WebGLRenderingContext::uniform4iMethodCallback, 5, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform4iv", V8WebGLRenderingContext::uniform4ivMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniformMatrix2fv", V8WebGLRenderingContext::uniformMatrix2fvMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniformMatrix3fv", V8WebGLRenderingContext::uniformMatrix3fvMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniformMatrix4fv", V8WebGLRenderingContext::uniformMatrix4fvMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"useProgram", V8WebGLRenderingContext::useProgramMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"validateProgram", V8WebGLRenderingContext::validateProgramMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"vertexAttrib1f", V8WebGLRenderingContext::vertexAttrib1fMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"vertexAttrib1fv", V8WebGLRenderingContext::vertexAttrib1fvMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"vertexAttrib2f", V8WebGLRenderingContext::vertexAttrib2fMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"vertexAttrib2fv", V8WebGLRenderingContext::vertexAttrib2fvMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"vertexAttrib3f", V8WebGLRenderingContext::vertexAttrib3fMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"vertexAttrib3fv", V8WebGLRenderingContext::vertexAttrib3fvMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"vertexAttrib4f", V8WebGLRenderingContext::vertexAttrib4fMethodCallback, 5, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"vertexAttrib4fv", V8WebGLRenderingContext::vertexAttrib4fvMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"vertexAttribPointer", V8WebGLRenderingContext::vertexAttribPointerMethodCallback, 6, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"viewport", V8WebGLRenderingContext::viewportMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void installV8WebGLRenderingContextTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8WebGLRenderingContext::wrapperTypeInfo.interface_name, v8::Local<v8::FunctionTemplate>(), V8WebGLRenderingContext::internalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  static constexpr V8DOMConfiguration::ConstantConfiguration V8WebGLRenderingContextConstants[] = {
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
      V8WebGLRenderingContextConstants, arraysize(V8WebGLRenderingContextConstants));
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8WebGLRenderingContextAccessors, arraysize(V8WebGLRenderingContextAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8WebGLRenderingContextMethods, arraysize(V8WebGLRenderingContextMethods));

  // Custom signature

  V8WebGLRenderingContext::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8WebGLRenderingContext::InstallRuntimeEnabledFeaturesOnTemplate(
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
      {"commit", V8WebGLRenderingContext::commitMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
    };
    for (const auto& methodConfig : commitMethodConfiguration)
      V8DOMConfiguration::InstallMethod(isolate, world, instance_template, prototype_template, interface_template, signature, methodConfig);
  }
}

void V8WebGLRenderingContext::installWebXR(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Object> instance, v8::Local<v8::Object> prototype, v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interfaceTemplate = V8WebGLRenderingContext::wrapperTypeInfo.domTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  ExecutionContext* executionContext = ToExecutionContext(isolate->GetCurrentContext());
  bool isSecureContext = (executionContext && executionContext->IsSecureContext());
  if (isSecureContext) {
    static const V8DOMConfiguration::MethodConfiguration methodSetcompatiblexrdeviceConfiguration[] = {
      {"setCompatibleXRDevice", V8WebGLRenderingContext::setCompatibleXRDeviceMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
    };
    for (const auto& methodConfig : methodSetcompatiblexrdeviceConfiguration)
      V8DOMConfiguration::InstallMethod(isolate, world, instance, prototype, interface, signature, methodConfig);
  }
}

void V8WebGLRenderingContext::installWebXR(ScriptState* scriptState, v8::Local<v8::Object> instance) {
  V8PerContextData* perContextData = scriptState->PerContextData();
  v8::Local<v8::Object> prototype = perContextData->PrototypeForType(&V8WebGLRenderingContext::wrapperTypeInfo);
  v8::Local<v8::Function> interface = perContextData->ConstructorForType(&V8WebGLRenderingContext::wrapperTypeInfo);
  ALLOW_UNUSED_LOCAL(interface);
  installWebXR(scriptState->GetIsolate(), scriptState->World(), instance, prototype, interface);
}

void V8WebGLRenderingContext::installWebXR(ScriptState* scriptState) {
  installWebXR(scriptState, v8::Local<v8::Object>());
}

v8::Local<v8::FunctionTemplate> V8WebGLRenderingContext::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8WebGLRenderingContextTemplate);
}

bool V8WebGLRenderingContext::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8WebGLRenderingContext::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

WebGLRenderingContext* V8WebGLRenderingContext::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

WebGLRenderingContext* NativeValueTraits<WebGLRenderingContext>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  WebGLRenderingContext* nativeValue = V8WebGLRenderingContext::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "WebGLRenderingContext"));
  }
  return nativeValue;
}

}  // namespace blink
