// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/offscreen_rendering_context.h"

#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_offscreen_canvas_rendering_context_2d.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl2_rendering_context.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_rendering_context.h"

namespace blink {

OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContext::OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContext() : type_(SpecificType::kNone) {}

OffscreenCanvasRenderingContext2D* OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContext::GetAsOffscreenCanvasRenderingContext2D() const {
  DCHECK(IsOffscreenCanvasRenderingContext2D());
  return offscreen_canvas_rendering_context_2d_;
}

void OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContext::SetOffscreenCanvasRenderingContext2D(OffscreenCanvasRenderingContext2D* value) {
  DCHECK(IsNull());
  offscreen_canvas_rendering_context_2d_ = value;
  type_ = SpecificType::kOffscreenCanvasRenderingContext2D;
}

OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContext OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContext::FromOffscreenCanvasRenderingContext2D(OffscreenCanvasRenderingContext2D* value) {
  OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContext container;
  container.SetOffscreenCanvasRenderingContext2D(value);
  return container;
}

WebGL2RenderingContext* OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContext::GetAsWebGL2RenderingContext() const {
  DCHECK(IsWebGL2RenderingContext());
  return webgl2_rendering_context_;
}

void OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContext::SetWebGL2RenderingContext(WebGL2RenderingContext* value) {
  DCHECK(IsNull());
  webgl2_rendering_context_ = value;
  type_ = SpecificType::kWebGL2RenderingContext;
}

OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContext OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContext::FromWebGL2RenderingContext(WebGL2RenderingContext* value) {
  OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContext container;
  container.SetWebGL2RenderingContext(value);
  return container;
}

WebGLRenderingContext* OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContext::GetAsWebGLRenderingContext() const {
  DCHECK(IsWebGLRenderingContext());
  return webgl_rendering_context_;
}

void OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContext::SetWebGLRenderingContext(WebGLRenderingContext* value) {
  DCHECK(IsNull());
  webgl_rendering_context_ = value;
  type_ = SpecificType::kWebGLRenderingContext;
}

OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContext OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContext::FromWebGLRenderingContext(WebGLRenderingContext* value) {
  OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContext container;
  container.SetWebGLRenderingContext(value);
  return container;
}

OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContext::OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContext(const OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContext&) = default;
OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContext::~OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContext() = default;
OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContext& OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContext::operator=(const OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContext&) = default;

void OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContext::Trace(blink::Visitor* visitor) {
  visitor->Trace(offscreen_canvas_rendering_context_2d_);
  visitor->Trace(webgl2_rendering_context_);
  visitor->Trace(webgl_rendering_context_);
}

void V8OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContext::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContext& impl, UnionTypeConversionMode conversionMode, ExceptionState& exceptionState) {
  if (v8Value.IsEmpty())
    return;

  if (conversionMode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8Value))
    return;

  if (V8OffscreenCanvasRenderingContext2D::hasInstance(v8Value, isolate)) {
    OffscreenCanvasRenderingContext2D* cppValue = V8OffscreenCanvasRenderingContext2D::ToImpl(v8::Local<v8::Object>::Cast(v8Value));
    impl.SetOffscreenCanvasRenderingContext2D(cppValue);
    return;
  }

  if (V8WebGL2RenderingContext::hasInstance(v8Value, isolate)) {
    WebGL2RenderingContext* cppValue = V8WebGL2RenderingContext::ToImpl(v8::Local<v8::Object>::Cast(v8Value));
    impl.SetWebGL2RenderingContext(cppValue);
    return;
  }

  if (V8WebGLRenderingContext::hasInstance(v8Value, isolate)) {
    WebGLRenderingContext* cppValue = V8WebGLRenderingContext::ToImpl(v8::Local<v8::Object>::Cast(v8Value));
    impl.SetWebGLRenderingContext(cppValue);
    return;
  }

  exceptionState.ThrowTypeError("The provided value is not of type '(OffscreenCanvasRenderingContext2D or WebGLRenderingContext or WebGL2RenderingContext)'");
}

v8::Local<v8::Value> ToV8(const OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContext& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContext::SpecificType::kNone:
      return v8::Null(isolate);
    case OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContext::SpecificType::kOffscreenCanvasRenderingContext2D:
      return ToV8(impl.GetAsOffscreenCanvasRenderingContext2D(), creationContext, isolate);
    case OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContext::SpecificType::kWebGL2RenderingContext:
      return ToV8(impl.GetAsWebGL2RenderingContext(), creationContext, isolate);
    case OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContext::SpecificType::kWebGLRenderingContext:
      return ToV8(impl.GetAsWebGLRenderingContext(), creationContext, isolate);
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContext NativeValueTraits<OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContext>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContext impl;
  V8OffscreenCanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContext::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exceptionState);
  return impl;
}

}  // namespace blink
