// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/float_or_string_element_record.h"

#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_element.h"
#include "third_party/blink/renderer/core/animation/element_animation.h"
#include "third_party/blink/renderer/core/css/cssom/element_computed_style_map.h"
#include "third_party/blink/renderer/core/dom/child_node.h"
#include "third_party/blink/renderer/core/dom/non_document_type_child_node.h"
#include "third_party/blink/renderer/core/dom/parent_node.h"
#include "third_party/blink/renderer/core/fullscreen/element_fullscreen.h"

namespace blink {

FloatOrStringElementRecord::FloatOrStringElementRecord() : type_(SpecificType::kNone) {}

float FloatOrStringElementRecord::GetAsFloat() const {
  DCHECK(IsFloat());
  return float_;
}

void FloatOrStringElementRecord::SetFloat(float value) {
  DCHECK(IsNull());
  float_ = value;
  type_ = SpecificType::kFloat;
}

FloatOrStringElementRecord FloatOrStringElementRecord::FromFloat(float value) {
  FloatOrStringElementRecord container;
  container.SetFloat(value);
  return container;
}

const HeapVector<std::pair<String, Member<Element>>>& FloatOrStringElementRecord::GetAsStringElementRecord() const {
  DCHECK(IsStringElementRecord());
  return string_element_record_;
}

void FloatOrStringElementRecord::SetStringElementRecord(const HeapVector<std::pair<String, Member<Element>>>& value) {
  DCHECK(IsNull());
  string_element_record_ = value;
  type_ = SpecificType::kStringElementRecord;
}

FloatOrStringElementRecord FloatOrStringElementRecord::FromStringElementRecord(const HeapVector<std::pair<String, Member<Element>>>& value) {
  FloatOrStringElementRecord container;
  container.SetStringElementRecord(value);
  return container;
}

FloatOrStringElementRecord::FloatOrStringElementRecord(const FloatOrStringElementRecord&) = default;
FloatOrStringElementRecord::~FloatOrStringElementRecord() = default;
FloatOrStringElementRecord& FloatOrStringElementRecord::operator=(const FloatOrStringElementRecord&) = default;

void FloatOrStringElementRecord::Trace(blink::Visitor* visitor) {
  visitor->Trace(string_element_record_);
}

void V8FloatOrStringElementRecord::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, FloatOrStringElementRecord& impl, UnionTypeConversionMode conversionMode, ExceptionState& exceptionState) {
  if (v8Value.IsEmpty())
    return;

  if (conversionMode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8Value))
    return;

  if (v8Value->IsObject()) {
    HeapVector<std::pair<String, Member<Element>>> cppValue = NativeValueTraits<IDLRecord<IDLString, Element>>::NativeValue(isolate, v8Value, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.SetStringElementRecord(cppValue);
    return;
  }

  if (v8Value->IsNumber()) {
    float cppValue = NativeValueTraits<IDLFloat>::NativeValue(isolate, v8Value, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.SetFloat(cppValue);
    return;
  }

  {
    float cppValue = NativeValueTraits<IDLFloat>::NativeValue(isolate, v8Value, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.SetFloat(cppValue);
    return;
  }
}

v8::Local<v8::Value> ToV8(const FloatOrStringElementRecord& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case FloatOrStringElementRecord::SpecificType::kNone:
      return v8::Null(isolate);
    case FloatOrStringElementRecord::SpecificType::kFloat:
      return v8::Number::New(isolate, impl.GetAsFloat());
    case FloatOrStringElementRecord::SpecificType::kStringElementRecord:
      return ToV8(impl.GetAsStringElementRecord(), creationContext, isolate);
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

FloatOrStringElementRecord NativeValueTraits<FloatOrStringElementRecord>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  FloatOrStringElementRecord impl;
  V8FloatOrStringElementRecord::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exceptionState);
  return impl;
}

}  // namespace blink
