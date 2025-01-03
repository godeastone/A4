// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/webgl_rendering_context_or_webgl2_rendering_context.h"

#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl2_rendering_context.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_rendering_context.h"

namespace blink {

WebGLRenderingContextOrWebGL2RenderingContext::WebGLRenderingContextOrWebGL2RenderingContext() : type_(SpecificType::kNone) {}

WebGL2RenderingContext* WebGLRenderingContextOrWebGL2RenderingContext::GetAsWebGL2RenderingContext() const {
  DCHECK(IsWebGL2RenderingContext());
  return webgl2_rendering_context_;
}

void WebGLRenderingContextOrWebGL2RenderingContext::SetWebGL2RenderingContext(WebGL2RenderingContext* value) {
  DCHECK(IsNull());
  webgl2_rendering_context_ = value;
  type_ = SpecificType::kWebGL2RenderingContext;
}

WebGLRenderingContextOrWebGL2RenderingContext WebGLRenderingContextOrWebGL2RenderingContext::FromWebGL2RenderingContext(WebGL2RenderingContext* value) {
  WebGLRenderingContextOrWebGL2RenderingContext container;
  container.SetWebGL2RenderingContext(value);
  return container;
}

WebGLRenderingContext* WebGLRenderingContextOrWebGL2RenderingContext::GetAsWebGLRenderingContext() const {
  DCHECK(IsWebGLRenderingContext());
  return webgl_rendering_context_;
}

void WebGLRenderingContextOrWebGL2RenderingContext::SetWebGLRenderingContext(WebGLRenderingContext* value) {
  DCHECK(IsNull());
  webgl_rendering_context_ = value;
  type_ = SpecificType::kWebGLRenderingContext;
}

WebGLRenderingContextOrWebGL2RenderingContext WebGLRenderingContextOrWebGL2RenderingContext::FromWebGLRenderingContext(WebGLRenderingContext* value) {
  WebGLRenderingContextOrWebGL2RenderingContext container;
  container.SetWebGLRenderingContext(value);
  return container;
}

WebGLRenderingContextOrWebGL2RenderingContext::WebGLRenderingContextOrWebGL2RenderingContext(const WebGLRenderingContextOrWebGL2RenderingContext&) = default;
WebGLRenderingContextOrWebGL2RenderingContext::~WebGLRenderingContextOrWebGL2RenderingContext() = default;
WebGLRenderingContextOrWebGL2RenderingContext& WebGLRenderingContextOrWebGL2RenderingContext::operator=(const WebGLRenderingContextOrWebGL2RenderingContext&) = default;

void WebGLRenderingContextOrWebGL2RenderingContext::Trace(blink::Visitor* visitor) {
  visitor->Trace(webgl2_rendering_context_);
  visitor->Trace(webgl_rendering_context_);
}

void V8WebGLRenderingContextOrWebGL2RenderingContext::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, WebGLRenderingContextOrWebGL2RenderingContext& impl, UnionTypeConversionMode conversionMode, ExceptionState& exceptionState) {
  if (v8Value.IsEmpty())
    return;

  if (conversionMode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8Value))
    return;

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

  exceptionState.ThrowTypeError("The provided value is not of type '(WebGLRenderingContext or WebGL2RenderingContext)'");
}

v8::Local<v8::Value> ToV8(const WebGLRenderingContextOrWebGL2RenderingContext& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case WebGLRenderingContextOrWebGL2RenderingContext::SpecificType::kNone:
      return v8::Null(isolate);
    case WebGLRenderingContextOrWebGL2RenderingContext::SpecificType::kWebGL2RenderingContext:
      return ToV8(impl.GetAsWebGL2RenderingContext(), creationContext, isolate);
    case WebGLRenderingContextOrWebGL2RenderingContext::SpecificType::kWebGLRenderingContext:
      return ToV8(impl.GetAsWebGLRenderingContext(), creationContext, isolate);
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

WebGLRenderingContextOrWebGL2RenderingContext NativeValueTraits<WebGLRenderingContextOrWebGL2RenderingContext>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  WebGLRenderingContextOrWebGL2RenderingContext impl;
  V8WebGLRenderingContextOrWebGL2RenderingContext::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exceptionState);
  return impl;
}

}  // namespace blink
