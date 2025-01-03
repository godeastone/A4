// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/array_buffer_or_array_buffer_view_or_blob_or_usv_string.h"

#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_blob.h"

namespace blink {

ArrayBufferOrArrayBufferViewOrBlobOrUSVString::ArrayBufferOrArrayBufferViewOrBlobOrUSVString() : type_(SpecificType::kNone) {}

DOMArrayBuffer* ArrayBufferOrArrayBufferViewOrBlobOrUSVString::GetAsArrayBuffer() const {
  DCHECK(IsArrayBuffer());
  return array_buffer_;
}

void ArrayBufferOrArrayBufferViewOrBlobOrUSVString::SetArrayBuffer(DOMArrayBuffer* value) {
  DCHECK(IsNull());
  array_buffer_ = value;
  type_ = SpecificType::kArrayBuffer;
}

ArrayBufferOrArrayBufferViewOrBlobOrUSVString ArrayBufferOrArrayBufferViewOrBlobOrUSVString::FromArrayBuffer(DOMArrayBuffer* value) {
  ArrayBufferOrArrayBufferViewOrBlobOrUSVString container;
  container.SetArrayBuffer(value);
  return container;
}

NotShared<DOMArrayBufferView> ArrayBufferOrArrayBufferViewOrBlobOrUSVString::GetAsArrayBufferView() const {
  DCHECK(IsArrayBufferView());
  return array_buffer_view_;
}

void ArrayBufferOrArrayBufferViewOrBlobOrUSVString::SetArrayBufferView(NotShared<DOMArrayBufferView> value) {
  DCHECK(IsNull());
  array_buffer_view_ = Member<DOMArrayBufferView>(value.View());
  type_ = SpecificType::kArrayBufferView;
}

ArrayBufferOrArrayBufferViewOrBlobOrUSVString ArrayBufferOrArrayBufferViewOrBlobOrUSVString::FromArrayBufferView(NotShared<DOMArrayBufferView> value) {
  ArrayBufferOrArrayBufferViewOrBlobOrUSVString container;
  container.SetArrayBufferView(value);
  return container;
}

Blob* ArrayBufferOrArrayBufferViewOrBlobOrUSVString::GetAsBlob() const {
  DCHECK(IsBlob());
  return blob_;
}

void ArrayBufferOrArrayBufferViewOrBlobOrUSVString::SetBlob(Blob* value) {
  DCHECK(IsNull());
  blob_ = value;
  type_ = SpecificType::kBlob;
}

ArrayBufferOrArrayBufferViewOrBlobOrUSVString ArrayBufferOrArrayBufferViewOrBlobOrUSVString::FromBlob(Blob* value) {
  ArrayBufferOrArrayBufferViewOrBlobOrUSVString container;
  container.SetBlob(value);
  return container;
}

const String& ArrayBufferOrArrayBufferViewOrBlobOrUSVString::GetAsUSVString() const {
  DCHECK(IsUSVString());
  return usv_string_;
}

void ArrayBufferOrArrayBufferViewOrBlobOrUSVString::SetUSVString(const String& value) {
  DCHECK(IsNull());
  usv_string_ = value;
  type_ = SpecificType::kUSVString;
}

ArrayBufferOrArrayBufferViewOrBlobOrUSVString ArrayBufferOrArrayBufferViewOrBlobOrUSVString::FromUSVString(const String& value) {
  ArrayBufferOrArrayBufferViewOrBlobOrUSVString container;
  container.SetUSVString(value);
  return container;
}

ArrayBufferOrArrayBufferViewOrBlobOrUSVString::ArrayBufferOrArrayBufferViewOrBlobOrUSVString(const ArrayBufferOrArrayBufferViewOrBlobOrUSVString&) = default;
ArrayBufferOrArrayBufferViewOrBlobOrUSVString::~ArrayBufferOrArrayBufferViewOrBlobOrUSVString() = default;
ArrayBufferOrArrayBufferViewOrBlobOrUSVString& ArrayBufferOrArrayBufferViewOrBlobOrUSVString::operator=(const ArrayBufferOrArrayBufferViewOrBlobOrUSVString&) = default;

void ArrayBufferOrArrayBufferViewOrBlobOrUSVString::Trace(blink::Visitor* visitor) {
  visitor->Trace(array_buffer_);
  visitor->Trace(array_buffer_view_);
  visitor->Trace(blob_);
}

void V8ArrayBufferOrArrayBufferViewOrBlobOrUSVString::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, ArrayBufferOrArrayBufferViewOrBlobOrUSVString& impl, UnionTypeConversionMode conversionMode, ExceptionState& exceptionState) {
  if (v8Value.IsEmpty())
    return;

  if (conversionMode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8Value))
    return;

  if (V8Blob::hasInstance(v8Value, isolate)) {
    Blob* cppValue = V8Blob::ToImpl(v8::Local<v8::Object>::Cast(v8Value));
    impl.SetBlob(cppValue);
    return;
  }

  if (v8Value->IsArrayBuffer()) {
    DOMArrayBuffer* cppValue = V8ArrayBuffer::ToImpl(v8::Local<v8::Object>::Cast(v8Value));
    impl.SetArrayBuffer(cppValue);
    return;
  }

  if (v8Value->IsArrayBufferView()) {
    NotShared<DOMArrayBufferView> cppValue = ToNotShared<NotShared<DOMArrayBufferView>>(isolate, v8Value, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.SetArrayBufferView(cppValue);
    return;
  }

  {
    V8StringResource<> cppValue = NativeValueTraits<IDLUSVString>::NativeValue(isolate, v8Value, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.SetUSVString(cppValue);
    return;
  }
}

v8::Local<v8::Value> ToV8(const ArrayBufferOrArrayBufferViewOrBlobOrUSVString& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case ArrayBufferOrArrayBufferViewOrBlobOrUSVString::SpecificType::kNone:
      return v8::Null(isolate);
    case ArrayBufferOrArrayBufferViewOrBlobOrUSVString::SpecificType::kArrayBuffer:
      return ToV8(impl.GetAsArrayBuffer(), creationContext, isolate);
    case ArrayBufferOrArrayBufferViewOrBlobOrUSVString::SpecificType::kArrayBufferView:
      return ToV8(impl.GetAsArrayBufferView(), creationContext, isolate);
    case ArrayBufferOrArrayBufferViewOrBlobOrUSVString::SpecificType::kBlob:
      return ToV8(impl.GetAsBlob(), creationContext, isolate);
    case ArrayBufferOrArrayBufferViewOrBlobOrUSVString::SpecificType::kUSVString:
      return V8String(isolate, impl.GetAsUSVString());
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

ArrayBufferOrArrayBufferViewOrBlobOrUSVString NativeValueTraits<ArrayBufferOrArrayBufferViewOrBlobOrUSVString>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  ArrayBufferOrArrayBufferViewOrBlobOrUSVString impl;
  V8ArrayBufferOrArrayBufferViewOrBlobOrUSVString::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exceptionState);
  return impl;
}

}  // namespace blink
