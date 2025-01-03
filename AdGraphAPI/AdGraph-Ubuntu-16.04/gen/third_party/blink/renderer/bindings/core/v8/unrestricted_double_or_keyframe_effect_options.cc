// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/unrestricted_double_or_keyframe_effect_options.h"

#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"

namespace blink {

UnrestrictedDoubleOrKeyframeEffectOptions::UnrestrictedDoubleOrKeyframeEffectOptions() : type_(SpecificType::kNone) {}

const KeyframeEffectOptions& UnrestrictedDoubleOrKeyframeEffectOptions::GetAsKeyframeEffectOptions() const {
  DCHECK(IsKeyframeEffectOptions());
  return keyframe_effect_options_;
}

void UnrestrictedDoubleOrKeyframeEffectOptions::SetKeyframeEffectOptions(const KeyframeEffectOptions& value) {
  DCHECK(IsNull());
  keyframe_effect_options_ = value;
  type_ = SpecificType::kKeyframeEffectOptions;
}

UnrestrictedDoubleOrKeyframeEffectOptions UnrestrictedDoubleOrKeyframeEffectOptions::FromKeyframeEffectOptions(const KeyframeEffectOptions& value) {
  UnrestrictedDoubleOrKeyframeEffectOptions container;
  container.SetKeyframeEffectOptions(value);
  return container;
}

double UnrestrictedDoubleOrKeyframeEffectOptions::GetAsUnrestrictedDouble() const {
  DCHECK(IsUnrestrictedDouble());
  return unrestricted_double_;
}

void UnrestrictedDoubleOrKeyframeEffectOptions::SetUnrestrictedDouble(double value) {
  DCHECK(IsNull());
  unrestricted_double_ = value;
  type_ = SpecificType::kUnrestrictedDouble;
}

UnrestrictedDoubleOrKeyframeEffectOptions UnrestrictedDoubleOrKeyframeEffectOptions::FromUnrestrictedDouble(double value) {
  UnrestrictedDoubleOrKeyframeEffectOptions container;
  container.SetUnrestrictedDouble(value);
  return container;
}

UnrestrictedDoubleOrKeyframeEffectOptions::UnrestrictedDoubleOrKeyframeEffectOptions(const UnrestrictedDoubleOrKeyframeEffectOptions&) = default;
UnrestrictedDoubleOrKeyframeEffectOptions::~UnrestrictedDoubleOrKeyframeEffectOptions() = default;
UnrestrictedDoubleOrKeyframeEffectOptions& UnrestrictedDoubleOrKeyframeEffectOptions::operator=(const UnrestrictedDoubleOrKeyframeEffectOptions&) = default;

void UnrestrictedDoubleOrKeyframeEffectOptions::Trace(blink::Visitor* visitor) {
  visitor->Trace(keyframe_effect_options_);
}

void V8UnrestrictedDoubleOrKeyframeEffectOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, UnrestrictedDoubleOrKeyframeEffectOptions& impl, UnionTypeConversionMode conversionMode, ExceptionState& exceptionState) {
  if (v8Value.IsEmpty())
    return;

  if (conversionMode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8Value))
    return;

  if (IsUndefinedOrNull(v8Value)) {
    KeyframeEffectOptions cppValue;
    V8KeyframeEffectOptions::ToImpl(isolate, v8Value, cppValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.SetKeyframeEffectOptions(cppValue);
    return;
  }

  if (v8Value->IsObject()) {
    KeyframeEffectOptions cppValue;
    V8KeyframeEffectOptions::ToImpl(isolate, v8Value, cppValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.SetKeyframeEffectOptions(cppValue);
    return;
  }

  if (v8Value->IsNumber()) {
    double cppValue = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, v8Value, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.SetUnrestrictedDouble(cppValue);
    return;
  }

  {
    double cppValue = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, v8Value, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.SetUnrestrictedDouble(cppValue);
    return;
  }
}

v8::Local<v8::Value> ToV8(const UnrestrictedDoubleOrKeyframeEffectOptions& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case UnrestrictedDoubleOrKeyframeEffectOptions::SpecificType::kNone:
      return v8::Null(isolate);
    case UnrestrictedDoubleOrKeyframeEffectOptions::SpecificType::kKeyframeEffectOptions:
      return ToV8(impl.GetAsKeyframeEffectOptions(), creationContext, isolate);
    case UnrestrictedDoubleOrKeyframeEffectOptions::SpecificType::kUnrestrictedDouble:
      return v8::Number::New(isolate, impl.GetAsUnrestrictedDouble());
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

UnrestrictedDoubleOrKeyframeEffectOptions NativeValueTraits<UnrestrictedDoubleOrKeyframeEffectOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  UnrestrictedDoubleOrKeyframeEffectOptions impl;
  V8UnrestrictedDoubleOrKeyframeEffectOptions::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exceptionState);
  return impl;
}

}  // namespace blink
