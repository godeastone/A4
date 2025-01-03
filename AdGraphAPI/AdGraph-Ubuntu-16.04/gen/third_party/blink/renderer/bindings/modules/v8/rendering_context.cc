// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/rendering_context.h"

#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_canvas_rendering_context_2d.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_image_bitmap_rendering_context.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl2_rendering_context.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_rendering_context.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_presentation_context.h"

namespace blink {

CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContextOrXRPresentationContext::CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContextOrXRPresentationContext() : type_(SpecificType::kNone) {}

CanvasRenderingContext2D* CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContextOrXRPresentationContext::GetAsCanvasRenderingContext2D() const {
  DCHECK(IsCanvasRenderingContext2D());
  return canvas_rendering_context_2d_;
}

void CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContextOrXRPresentationContext::SetCanvasRenderingContext2D(CanvasRenderingContext2D* value) {
  DCHECK(IsNull());
  canvas_rendering_context_2d_ = value;
  type_ = SpecificType::kCanvasRenderingContext2D;
}

CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContextOrXRPresentationContext CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContextOrXRPresentationContext::FromCanvasRenderingContext2D(CanvasRenderingContext2D* value) {
  CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContextOrXRPresentationContext container;
  container.SetCanvasRenderingContext2D(value);
  return container;
}

ImageBitmapRenderingContext* CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContextOrXRPresentationContext::GetAsImageBitmapRenderingContext() const {
  DCHECK(IsImageBitmapRenderingContext());
  return image_bitmap_rendering_context_;
}

void CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContextOrXRPresentationContext::SetImageBitmapRenderingContext(ImageBitmapRenderingContext* value) {
  DCHECK(IsNull());
  image_bitmap_rendering_context_ = value;
  type_ = SpecificType::kImageBitmapRenderingContext;
}

CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContextOrXRPresentationContext CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContextOrXRPresentationContext::FromImageBitmapRenderingContext(ImageBitmapRenderingContext* value) {
  CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContextOrXRPresentationContext container;
  container.SetImageBitmapRenderingContext(value);
  return container;
}

WebGL2RenderingContext* CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContextOrXRPresentationContext::GetAsWebGL2RenderingContext() const {
  DCHECK(IsWebGL2RenderingContext());
  return webgl2_rendering_context_;
}

void CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContextOrXRPresentationContext::SetWebGL2RenderingContext(WebGL2RenderingContext* value) {
  DCHECK(IsNull());
  webgl2_rendering_context_ = value;
  type_ = SpecificType::kWebGL2RenderingContext;
}

CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContextOrXRPresentationContext CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContextOrXRPresentationContext::FromWebGL2RenderingContext(WebGL2RenderingContext* value) {
  CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContextOrXRPresentationContext container;
  container.SetWebGL2RenderingContext(value);
  return container;
}

WebGLRenderingContext* CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContextOrXRPresentationContext::GetAsWebGLRenderingContext() const {
  DCHECK(IsWebGLRenderingContext());
  return webgl_rendering_context_;
}

void CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContextOrXRPresentationContext::SetWebGLRenderingContext(WebGLRenderingContext* value) {
  DCHECK(IsNull());
  webgl_rendering_context_ = value;
  type_ = SpecificType::kWebGLRenderingContext;
}

CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContextOrXRPresentationContext CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContextOrXRPresentationContext::FromWebGLRenderingContext(WebGLRenderingContext* value) {
  CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContextOrXRPresentationContext container;
  container.SetWebGLRenderingContext(value);
  return container;
}

XRPresentationContext* CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContextOrXRPresentationContext::GetAsXRPresentationContext() const {
  DCHECK(IsXRPresentationContext());
  return xr_presentation_context_;
}

void CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContextOrXRPresentationContext::SetXRPresentationContext(XRPresentationContext* value) {
  DCHECK(IsNull());
  xr_presentation_context_ = value;
  type_ = SpecificType::kXRPresentationContext;
}

CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContextOrXRPresentationContext CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContextOrXRPresentationContext::FromXRPresentationContext(XRPresentationContext* value) {
  CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContextOrXRPresentationContext container;
  container.SetXRPresentationContext(value);
  return container;
}

CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContextOrXRPresentationContext::CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContextOrXRPresentationContext(const CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContextOrXRPresentationContext&) = default;
CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContextOrXRPresentationContext::~CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContextOrXRPresentationContext() = default;
CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContextOrXRPresentationContext& CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContextOrXRPresentationContext::operator=(const CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContextOrXRPresentationContext&) = default;

void CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContextOrXRPresentationContext::Trace(blink::Visitor* visitor) {
  visitor->Trace(canvas_rendering_context_2d_);
  visitor->Trace(image_bitmap_rendering_context_);
  visitor->Trace(webgl2_rendering_context_);
  visitor->Trace(webgl_rendering_context_);
  visitor->Trace(xr_presentation_context_);
}

void V8CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContextOrXRPresentationContext::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContextOrXRPresentationContext& impl, UnionTypeConversionMode conversionMode, ExceptionState& exceptionState) {
  if (v8Value.IsEmpty())
    return;

  if (conversionMode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8Value))
    return;

  if (V8CanvasRenderingContext2D::hasInstance(v8Value, isolate)) {
    CanvasRenderingContext2D* cppValue = V8CanvasRenderingContext2D::ToImpl(v8::Local<v8::Object>::Cast(v8Value));
    impl.SetCanvasRenderingContext2D(cppValue);
    return;
  }

  if (V8ImageBitmapRenderingContext::hasInstance(v8Value, isolate)) {
    ImageBitmapRenderingContext* cppValue = V8ImageBitmapRenderingContext::ToImpl(v8::Local<v8::Object>::Cast(v8Value));
    impl.SetImageBitmapRenderingContext(cppValue);
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

  if (V8XRPresentationContext::hasInstance(v8Value, isolate)) {
    XRPresentationContext* cppValue = V8XRPresentationContext::ToImpl(v8::Local<v8::Object>::Cast(v8Value));
    impl.SetXRPresentationContext(cppValue);
    return;
  }

  exceptionState.ThrowTypeError("The provided value is not of type '(CanvasRenderingContext2D or WebGLRenderingContext or WebGL2RenderingContext or ImageBitmapRenderingContext or XRPresentationContext)'");
}

v8::Local<v8::Value> ToV8(const CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContextOrXRPresentationContext& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContextOrXRPresentationContext::SpecificType::kNone:
      return v8::Null(isolate);
    case CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContextOrXRPresentationContext::SpecificType::kCanvasRenderingContext2D:
      return ToV8(impl.GetAsCanvasRenderingContext2D(), creationContext, isolate);
    case CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContextOrXRPresentationContext::SpecificType::kImageBitmapRenderingContext:
      return ToV8(impl.GetAsImageBitmapRenderingContext(), creationContext, isolate);
    case CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContextOrXRPresentationContext::SpecificType::kWebGL2RenderingContext:
      return ToV8(impl.GetAsWebGL2RenderingContext(), creationContext, isolate);
    case CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContextOrXRPresentationContext::SpecificType::kWebGLRenderingContext:
      return ToV8(impl.GetAsWebGLRenderingContext(), creationContext, isolate);
    case CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContextOrXRPresentationContext::SpecificType::kXRPresentationContext:
      return ToV8(impl.GetAsXRPresentationContext(), creationContext, isolate);
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContextOrXRPresentationContext NativeValueTraits<CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContextOrXRPresentationContext>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContextOrXRPresentationContext impl;
  V8CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContextOrXRPresentationContext::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exceptionState);
  return impl;
}

}  // namespace blink
