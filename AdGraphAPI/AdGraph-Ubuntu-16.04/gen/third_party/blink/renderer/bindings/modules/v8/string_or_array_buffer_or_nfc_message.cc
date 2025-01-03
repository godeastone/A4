// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/string_or_array_buffer_or_nfc_message.h"

#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer.h"

namespace blink {

StringOrArrayBufferOrNFCMessage::StringOrArrayBufferOrNFCMessage() : type_(SpecificType::kNone) {}

DOMArrayBuffer* StringOrArrayBufferOrNFCMessage::GetAsArrayBuffer() const {
  DCHECK(IsArrayBuffer());
  return array_buffer_;
}

void StringOrArrayBufferOrNFCMessage::SetArrayBuffer(DOMArrayBuffer* value) {
  DCHECK(IsNull());
  array_buffer_ = value;
  type_ = SpecificType::kArrayBuffer;
}

StringOrArrayBufferOrNFCMessage StringOrArrayBufferOrNFCMessage::FromArrayBuffer(DOMArrayBuffer* value) {
  StringOrArrayBufferOrNFCMessage container;
  container.SetArrayBuffer(value);
  return container;
}

const NFCMessage& StringOrArrayBufferOrNFCMessage::GetAsNFCMessage() const {
  DCHECK(IsNFCMessage());
  return nfc_message_;
}

void StringOrArrayBufferOrNFCMessage::SetNFCMessage(const NFCMessage& value) {
  DCHECK(IsNull());
  nfc_message_ = value;
  type_ = SpecificType::kNFCMessage;
}

StringOrArrayBufferOrNFCMessage StringOrArrayBufferOrNFCMessage::FromNFCMessage(const NFCMessage& value) {
  StringOrArrayBufferOrNFCMessage container;
  container.SetNFCMessage(value);
  return container;
}

const String& StringOrArrayBufferOrNFCMessage::GetAsString() const {
  DCHECK(IsString());
  return string_;
}

void StringOrArrayBufferOrNFCMessage::SetString(const String& value) {
  DCHECK(IsNull());
  string_ = value;
  type_ = SpecificType::kString;
}

StringOrArrayBufferOrNFCMessage StringOrArrayBufferOrNFCMessage::FromString(const String& value) {
  StringOrArrayBufferOrNFCMessage container;
  container.SetString(value);
  return container;
}

StringOrArrayBufferOrNFCMessage::StringOrArrayBufferOrNFCMessage(const StringOrArrayBufferOrNFCMessage&) = default;
StringOrArrayBufferOrNFCMessage::~StringOrArrayBufferOrNFCMessage() = default;
StringOrArrayBufferOrNFCMessage& StringOrArrayBufferOrNFCMessage::operator=(const StringOrArrayBufferOrNFCMessage&) = default;

void StringOrArrayBufferOrNFCMessage::Trace(blink::Visitor* visitor) {
  visitor->Trace(array_buffer_);
  visitor->Trace(nfc_message_);
}

void V8StringOrArrayBufferOrNFCMessage::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, StringOrArrayBufferOrNFCMessage& impl, UnionTypeConversionMode conversionMode, ExceptionState& exceptionState) {
  if (v8Value.IsEmpty())
    return;

  if (conversionMode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8Value))
    return;

  if (IsUndefinedOrNull(v8Value)) {
    NFCMessage cppValue;
    V8NFCMessage::ToImpl(isolate, v8Value, cppValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.SetNFCMessage(cppValue);
    return;
  }

  if (v8Value->IsArrayBuffer()) {
    DOMArrayBuffer* cppValue = V8ArrayBuffer::ToImpl(v8::Local<v8::Object>::Cast(v8Value));
    impl.SetArrayBuffer(cppValue);
    return;
  }

  if (v8Value->IsObject()) {
    NFCMessage cppValue;
    V8NFCMessage::ToImpl(isolate, v8Value, cppValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.SetNFCMessage(cppValue);
    return;
  }

  {
    V8StringResource<> cppValue = v8Value;
    if (!cppValue.Prepare(exceptionState))
      return;
    impl.SetString(cppValue);
    return;
  }
}

v8::Local<v8::Value> ToV8(const StringOrArrayBufferOrNFCMessage& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case StringOrArrayBufferOrNFCMessage::SpecificType::kNone:
      return v8::Null(isolate);
    case StringOrArrayBufferOrNFCMessage::SpecificType::kArrayBuffer:
      return ToV8(impl.GetAsArrayBuffer(), creationContext, isolate);
    case StringOrArrayBufferOrNFCMessage::SpecificType::kNFCMessage:
      return ToV8(impl.GetAsNFCMessage(), creationContext, isolate);
    case StringOrArrayBufferOrNFCMessage::SpecificType::kString:
      return V8String(isolate, impl.GetAsString());
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

StringOrArrayBufferOrNFCMessage NativeValueTraits<StringOrArrayBufferOrNFCMessage>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  StringOrArrayBufferOrNFCMessage impl;
  V8StringOrArrayBufferOrNFCMessage::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exceptionState);
  return impl;
}

}  // namespace blink
