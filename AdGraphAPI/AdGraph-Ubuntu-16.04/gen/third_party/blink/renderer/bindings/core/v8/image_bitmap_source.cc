// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/image_bitmap_source.h"

#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_blob.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_canvas_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_image_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_video_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_image_bitmap.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_image_data.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_offscreen_canvas.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_image_element.h"

namespace blink {

HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas::HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas() : type_(SpecificType::kNone) {}

Blob* HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas::GetAsBlob() const {
  DCHECK(IsBlob());
  return blob_;
}

void HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas::SetBlob(Blob* value) {
  DCHECK(IsNull());
  blob_ = value;
  type_ = SpecificType::kBlob;
}

HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas::FromBlob(Blob* value) {
  HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas container;
  container.SetBlob(value);
  return container;
}

HTMLCanvasElement* HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas::GetAsHTMLCanvasElement() const {
  DCHECK(IsHTMLCanvasElement());
  return html_canvas_element_;
}

void HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas::SetHTMLCanvasElement(HTMLCanvasElement* value) {
  DCHECK(IsNull());
  html_canvas_element_ = value;
  type_ = SpecificType::kHTMLCanvasElement;
}

HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas::FromHTMLCanvasElement(HTMLCanvasElement* value) {
  HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas container;
  container.SetHTMLCanvasElement(value);
  return container;
}

HTMLImageElement* HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas::GetAsHTMLImageElement() const {
  DCHECK(IsHTMLImageElement());
  return html_image_element_;
}

void HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas::SetHTMLImageElement(HTMLImageElement* value) {
  DCHECK(IsNull());
  html_image_element_ = value;
  type_ = SpecificType::kHTMLImageElement;
}

HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas::FromHTMLImageElement(HTMLImageElement* value) {
  HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas container;
  container.SetHTMLImageElement(value);
  return container;
}

HTMLVideoElement* HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas::GetAsHTMLVideoElement() const {
  DCHECK(IsHTMLVideoElement());
  return html_video_element_;
}

void HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas::SetHTMLVideoElement(HTMLVideoElement* value) {
  DCHECK(IsNull());
  html_video_element_ = value;
  type_ = SpecificType::kHTMLVideoElement;
}

HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas::FromHTMLVideoElement(HTMLVideoElement* value) {
  HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas container;
  container.SetHTMLVideoElement(value);
  return container;
}

ImageBitmap* HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas::GetAsImageBitmap() const {
  DCHECK(IsImageBitmap());
  return image_bitmap_;
}

void HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas::SetImageBitmap(ImageBitmap* value) {
  DCHECK(IsNull());
  image_bitmap_ = value;
  type_ = SpecificType::kImageBitmap;
}

HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas::FromImageBitmap(ImageBitmap* value) {
  HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas container;
  container.SetImageBitmap(value);
  return container;
}

ImageData* HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas::GetAsImageData() const {
  DCHECK(IsImageData());
  return image_data_;
}

void HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas::SetImageData(ImageData* value) {
  DCHECK(IsNull());
  image_data_ = value;
  type_ = SpecificType::kImageData;
}

HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas::FromImageData(ImageData* value) {
  HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas container;
  container.SetImageData(value);
  return container;
}

OffscreenCanvas* HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas::GetAsOffscreenCanvas() const {
  DCHECK(IsOffscreenCanvas());
  return offscreen_canvas_;
}

void HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas::SetOffscreenCanvas(OffscreenCanvas* value) {
  DCHECK(IsNull());
  offscreen_canvas_ = value;
  type_ = SpecificType::kOffscreenCanvas;
}

HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas::FromOffscreenCanvas(OffscreenCanvas* value) {
  HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas container;
  container.SetOffscreenCanvas(value);
  return container;
}

SVGImageElement* HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas::GetAsSVGImageElement() const {
  DCHECK(IsSVGImageElement());
  return svg_image_element_;
}

void HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas::SetSVGImageElement(SVGImageElement* value) {
  DCHECK(IsNull());
  svg_image_element_ = value;
  type_ = SpecificType::kSVGImageElement;
}

HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas::FromSVGImageElement(SVGImageElement* value) {
  HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas container;
  container.SetSVGImageElement(value);
  return container;
}

HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas::HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas(const HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas&) = default;
HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas::~HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas() = default;
HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas& HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas::operator=(const HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas&) = default;

void HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas::Trace(blink::Visitor* visitor) {
  visitor->Trace(blob_);
  visitor->Trace(html_canvas_element_);
  visitor->Trace(html_image_element_);
  visitor->Trace(html_video_element_);
  visitor->Trace(image_bitmap_);
  visitor->Trace(image_data_);
  visitor->Trace(offscreen_canvas_);
  visitor->Trace(svg_image_element_);
}

void V8HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas& impl, UnionTypeConversionMode conversionMode, ExceptionState& exceptionState) {
  if (v8Value.IsEmpty())
    return;

  if (conversionMode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8Value))
    return;

  if (V8Blob::hasInstance(v8Value, isolate)) {
    Blob* cppValue = V8Blob::ToImpl(v8::Local<v8::Object>::Cast(v8Value));
    impl.SetBlob(cppValue);
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

  if (V8ImageData::hasInstance(v8Value, isolate)) {
    ImageData* cppValue = V8ImageData::ToImpl(v8::Local<v8::Object>::Cast(v8Value));
    impl.SetImageData(cppValue);
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

  exceptionState.ThrowTypeError("The provided value is not of type '(HTMLImageElement or SVGImageElement or HTMLVideoElement or HTMLCanvasElement or Blob or ImageData or ImageBitmap or OffscreenCanvas)'");
}

v8::Local<v8::Value> ToV8(const HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas::SpecificType::kNone:
      return v8::Null(isolate);
    case HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas::SpecificType::kBlob:
      return ToV8(impl.GetAsBlob(), creationContext, isolate);
    case HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas::SpecificType::kHTMLCanvasElement:
      return ToV8(impl.GetAsHTMLCanvasElement(), creationContext, isolate);
    case HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas::SpecificType::kHTMLImageElement:
      return ToV8(impl.GetAsHTMLImageElement(), creationContext, isolate);
    case HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas::SpecificType::kHTMLVideoElement:
      return ToV8(impl.GetAsHTMLVideoElement(), creationContext, isolate);
    case HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas::SpecificType::kImageBitmap:
      return ToV8(impl.GetAsImageBitmap(), creationContext, isolate);
    case HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas::SpecificType::kImageData:
      return ToV8(impl.GetAsImageData(), creationContext, isolate);
    case HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas::SpecificType::kOffscreenCanvas:
      return ToV8(impl.GetAsOffscreenCanvas(), creationContext, isolate);
    case HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas::SpecificType::kSVGImageElement:
      return ToV8(impl.GetAsSVGImageElement(), creationContext, isolate);
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas NativeValueTraits<HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas impl;
  V8HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exceptionState);
  return impl;
}

}  // namespace blink
