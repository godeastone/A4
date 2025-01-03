// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/dictionary_or_string.h"

#include "third_party/blink/renderer/bindings/core/v8/dictionary.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"

namespace blink {

DictionaryOrString::DictionaryOrString() : type_(SpecificType::kNone) {}

Dictionary DictionaryOrString::GetAsDictionary() const {
  DCHECK(IsDictionary());
  return dictionary_;
}

void DictionaryOrString::SetDictionary(Dictionary value) {
  DCHECK(IsNull());
  dictionary_ = value;
  type_ = SpecificType::kDictionary;
}

DictionaryOrString DictionaryOrString::FromDictionary(Dictionary value) {
  DictionaryOrString container;
  container.SetDictionary(value);
  return container;
}

const String& DictionaryOrString::GetAsString() const {
  DCHECK(IsString());
  return string_;
}

void DictionaryOrString::SetString(const String& value) {
  DCHECK(IsNull());
  string_ = value;
  type_ = SpecificType::kString;
}

DictionaryOrString DictionaryOrString::FromString(const String& value) {
  DictionaryOrString container;
  container.SetString(value);
  return container;
}

DictionaryOrString::DictionaryOrString(const DictionaryOrString&) = default;
DictionaryOrString::~DictionaryOrString() = default;
DictionaryOrString& DictionaryOrString::operator=(const DictionaryOrString&) = default;

void DictionaryOrString::Trace(blink::Visitor* visitor) {
}

void V8DictionaryOrString::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, DictionaryOrString& impl, UnionTypeConversionMode conversionMode, ExceptionState& exceptionState) {
  if (v8Value.IsEmpty())
    return;

  if (conversionMode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8Value))
    return;

  if (IsUndefinedOrNull(v8Value) || v8Value->IsObject()) {
    Dictionary cppValue = NativeValueTraits<Dictionary>::NativeValue(isolate, v8Value, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.SetDictionary(cppValue);
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

v8::Local<v8::Value> ToV8(const DictionaryOrString& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case DictionaryOrString::SpecificType::kNone:
      return v8::Null(isolate);
    case DictionaryOrString::SpecificType::kDictionary:
      return impl.GetAsDictionary().V8Value();
    case DictionaryOrString::SpecificType::kString:
      return V8String(isolate, impl.GetAsString());
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

DictionaryOrString NativeValueTraits<DictionaryOrString>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  DictionaryOrString impl;
  V8DictionaryOrString::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exceptionState);
  return impl;
}

}  // namespace blink
