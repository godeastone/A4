// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/usv_string_sequence_sequence_or_usv_string_usv_string_record_or_usv_string.h"

#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"

namespace blink {

USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString::USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString() : type_(SpecificType::kNone) {}

const String& USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString::GetAsUSVString() const {
  DCHECK(IsUSVString());
  return usv_string_;
}

void USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString::SetUSVString(const String& value) {
  DCHECK(IsNull());
  usv_string_ = value;
  type_ = SpecificType::kUSVString;
}

USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString::FromUSVString(const String& value) {
  USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString container;
  container.SetUSVString(value);
  return container;
}

const Vector<Vector<String>>& USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString::GetAsUSVStringSequenceSequence() const {
  DCHECK(IsUSVStringSequenceSequence());
  return usv_string_sequence_sequence_;
}

void USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString::SetUSVStringSequenceSequence(const Vector<Vector<String>>& value) {
  DCHECK(IsNull());
  usv_string_sequence_sequence_ = value;
  type_ = SpecificType::kUSVStringSequenceSequence;
}

USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString::FromUSVStringSequenceSequence(const Vector<Vector<String>>& value) {
  USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString container;
  container.SetUSVStringSequenceSequence(value);
  return container;
}

const Vector<std::pair<String, String>>& USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString::GetAsUSVStringUSVStringRecord() const {
  DCHECK(IsUSVStringUSVStringRecord());
  return usv_string_usv_string_record_;
}

void USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString::SetUSVStringUSVStringRecord(const Vector<std::pair<String, String>>& value) {
  DCHECK(IsNull());
  usv_string_usv_string_record_ = value;
  type_ = SpecificType::kUSVStringUSVStringRecord;
}

USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString::FromUSVStringUSVStringRecord(const Vector<std::pair<String, String>>& value) {
  USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString container;
  container.SetUSVStringUSVStringRecord(value);
  return container;
}

USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString::USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString(const USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString&) = default;
USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString::~USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString() = default;
USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString& USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString::operator=(const USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString&) = default;

void USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString::Trace(blink::Visitor* visitor) {
}

void V8USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString& impl, UnionTypeConversionMode conversionMode, ExceptionState& exceptionState) {
  if (v8Value.IsEmpty())
    return;

  if (conversionMode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8Value))
    return;

  if (HasCallableIteratorSymbol(isolate, v8Value, exceptionState)) {
    Vector<Vector<String>> cppValue = NativeValueTraits<IDLSequence<IDLSequence<IDLUSVString>>>::NativeValue(isolate, v8Value, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.SetUSVStringSequenceSequence(cppValue);
    return;
  }

  if (v8Value->IsObject()) {
    Vector<std::pair<String, String>> cppValue = NativeValueTraits<IDLRecord<IDLUSVString, IDLUSVString>>::NativeValue(isolate, v8Value, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.SetUSVStringUSVStringRecord(cppValue);
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

v8::Local<v8::Value> ToV8(const USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString::SpecificType::kNone:
      return v8::Null(isolate);
    case USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString::SpecificType::kUSVString:
      return V8String(isolate, impl.GetAsUSVString());
    case USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString::SpecificType::kUSVStringSequenceSequence:
      return ToV8(impl.GetAsUSVStringSequenceSequence(), creationContext, isolate);
    case USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString::SpecificType::kUSVStringUSVStringRecord:
      return ToV8(impl.GetAsUSVStringUSVStringRecord(), creationContext, isolate);
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString NativeValueTraits<USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString impl;
  V8USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exceptionState);
  return impl;
}

}  // namespace blink
