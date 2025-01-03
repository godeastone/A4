// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/canvas_image_source.h"

#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_image_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_canvas_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_image_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_video_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_image_bitmap.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_offscreen_canvas.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_image_element.h"

namespace blink {

CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas::CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas() : type_(SpecificType::kNone) {}

CSSStyleImageValue* CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas::GetAsCSSImageValue() const {
  DCHECK(IsCSSImageValue());
  return css_image_value_;
}

void CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas::SetCSSImageValue(CSSStyleImageValue* value) {
  DCHECK(IsNull());
  css_image_value_ = value;
  type_ = SpecificType::kCSSImageValue;
}

CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas::FromCSSImageValue(CSSStyleImageValue* value) {
  CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas container;
  container.SetCSSImageValue(value);
  return container;
}

HTMLCanvasElement* CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas::GetAsHTMLCanvasElement() const {
  DCHECK(IsHTMLCanvasElement());
  return html_canvas_element_;
}

void CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas::SetHTMLCanvasElement(HTMLCanvasElement* value) {
  DCHECK(IsNull());
  html_canvas_element_ = value;
  type_ = SpecificType::kHTMLCanvasElement;
}

CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas::FromHTMLCanvasElement(HTMLCanvasElement* value) {
  CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas container;
  container.SetHTMLCanvasElement(value);
  return container;
}

HTMLImageElement* CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas::GetAsHTMLImageElement() const {
  DCHECK(IsHTMLImageElement());
  return html_image_element_;
}

void CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas::SetHTMLImageElement(HTMLImageElement* value) {
  DCHECK(IsNull());
  html_image_element_ = value;
  type_ = SpecificType::kHTMLImageElement;
}

CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas::FromHTMLImageElement(HTMLImageElement* value) {
  CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas container;
  container.SetHTMLImageElement(value);
  return container;
}

HTMLVideoElement* CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas::GetAsHTMLVideoElement() const {
  DCHECK(IsHTMLVideoElement());
  return html_video_element_;
}

void CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas::SetHTMLVideoElement(HTMLVideoElement* value) {
  DCHECK(IsNull());
  html_video_element_ = value;
  type_ = SpecificType::kHTMLVideoElement;
}

CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas::FromHTMLVideoElement(HTMLVideoElement* value) {
  CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas container;
  container.SetHTMLVideoElement(value);
  return container;
}

ImageBitmap* CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas::GetAsImageBitmap() const {
  DCHECK(IsImageBitmap());
  return image_bitmap_;
}

void CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas::SetImageBitmap(ImageBitmap* value) {
  DCHECK(IsNull());
  image_bitmap_ = value;
  type_ = SpecificType::kImageBitmap;
}

CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas::FromImageBitmap(ImageBitmap* value) {
  CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas container;
  container.SetImageBitmap(value);
  return container;
}

OffscreenCanvas* CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas::GetAsOffscreenCanvas() const {
  DCHECK(IsOffscreenCanvas());
  return offscreen_canvas_;
}

void CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas::SetOffscreenCanvas(OffscreenCanvas* value) {
  DCHECK(IsNull());
  offscreen_canvas_ = value;
  type_ = SpecificType::kOffscreenCanvas;
}

CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas::FromOffscreenCanvas(OffscreenCanvas* value) {
  CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas container;
  container.SetOffscreenCanvas(value);
  return container;
}

SVGImageElement* CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas::GetAsSVGImageElement() const {
  DCHECK(IsSVGImageElement());
  return svg_image_element_;
}

void CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas::SetSVGImageElement(SVGImageElement* value) {
  DCHECK(IsNull());
  svg_image_element_ = value;
  type_ = SpecificType::kSVGImageElement;
}

CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas::FromSVGImageElement(SVGImageElement* value) {
  CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas container;
  container.SetSVGImageElement(value);
  return container;
}

CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas::CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas(const CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas&) = default;
CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas::~CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas() = default;
CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas& CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas::operator=(const CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas&) = default;

void CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas::Trace(blink::Visitor* visitor) {
  visitor->Trace(css_image_value_);
  visitor->Trace(html_canvas_element_);
  visitor->Trace(html_image_element_);
  visitor->Trace(html_video_element_);
  visitor->Trace(image_bitmap_);
  visitor->Trace(offscreen_canvas_);
  visitor->Trace(svg_image_element_);
}

void V8CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas& impl, UnionTypeConversionMode conversionMode, ExceptionState& exceptionState) {
  if (v8Value.IsEmpty())
    return;

  if (conversionMode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8Value))
    return;

  if (V8CSSImageValue::hasInstance(v8Value, isolate)) {
    CSSStyleImageValue* cppValue = V8CSSImageValue::ToImpl(v8::Local<v8::Object>::Cast(v8Value));
    impl.SetCSSImageValue(cppValue);
    return;
  }

  if (V8HTMLCanvasElement::hasInstance(v8Value, isolate)) {
    HTMLCanvasElement* cppValue = V8HTMLCanvasElement::ToImpl(v8::Local<v8::Object>::Cast(v8Value));
    impl.SetHTMLCanvasElement(cppValue);
    return;
  }

  if (V8HTMLImageElement::hasInstance(v8Value, isolate)) {
    HTMLImageElement* cppValue = V8HTMLImageElement::ToImpl(v8::Local<v8::Object>::Cast(v8Value));
    impl.SetHTMLImageElement(cppValue);
    return;
  }

  if (V8HTMLVideoElement::hasInstance(v8Value, isolate)) {
    HTMLVideoElement* cppValue = V8HTMLVideoElement::ToImpl(v8::Local<v8::Object>::Cast(v8Value));
    impl.SetHTMLVideoElement(cppValue);
    return;
  }

  if (V8ImageBitmap::hasInstance(v8Value, isolate)) {
    ImageBitmap* cppValue = V8ImageBitmap::ToImpl(v8::Local<v8::Object>::Cast(v8Value));
    impl.SetImageBitmap(cppValue);
    return;
  }

  if (V8OffscreenCanvas::hasInstance(v8Value, isolate)) {
    OffscreenCanvas* cppValue = V8OffscreenCanvas::ToImpl(v8::Local<v8::Object>::Cast(v8Value));
    impl.SetOffscreenCanvas(cppValue);
    return;
  }

  if (V8SVGImageElement::hasInstance(v8Value, isolate)) {
    SVGImageElement* cppValue = V8SVGImageElement::ToImpl(v8::Local<v8::Object>::Cast(v8Value));
    impl.SetSVGImageElement(cppValue);
    return;
  }

  exceptionState.ThrowTypeError("The provided value is not of type '(CSSImageValue or HTMLImageElement or SVGImageElement or HTMLVideoElement or HTMLCanvasElement or ImageBitmap or OffscreenCanvas)'");
}

v8::Local<v8::Value> ToV8(const CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas::SpecificType::kNone:
      return v8::Null(isolate);
    case CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas::SpecificType::kCSSImageValue:
      return ToV8(impl.GetAsCSSImageValue(), creationContext, isolate);
    case CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas::SpecificType::kHTMLCanvasElement:
      return ToV8(impl.GetAsHTMLCanvasElement(), creationContext, isolate);
    case CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas::SpecificType::kHTMLImageElement:
      return ToV8(impl.GetAsHTMLImageElement(), creationContext, isolate);
    case CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas::SpecificType::kHTMLVideoElement:
      return ToV8(impl.GetAsHTMLVideoElement(), creationContext, isolate);
    case CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas::SpecificType::kImageBitmap:
      return ToV8(impl.GetAsImageBitmap(), creationContext, isolate);
    case CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas::SpecificType::kOffscreenCanvas:
      return ToV8(impl.GetAsOffscreenCanvas(), creationContext, isolate);
    case CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas::SpecificType::kSVGImageElement:
      return ToV8(impl.GetAsSVGImageElement(), creationContext, isolate);
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas NativeValueTraits<CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas impl;
  V8CSSImageValueOrHTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exceptionState);
  return impl;
}

}  // namespace blink
