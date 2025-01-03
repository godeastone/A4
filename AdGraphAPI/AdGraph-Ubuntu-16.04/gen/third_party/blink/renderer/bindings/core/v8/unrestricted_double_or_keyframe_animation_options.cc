// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/unrestricted_double_or_keyframe_animation_options.h"

#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"

namespace blink {

UnrestrictedDoubleOrKeyframeAnimationOptions::UnrestrictedDoubleOrKeyframeAnimationOptions() : type_(SpecificType::kNone) {}

const KeyframeAnimationOptions& UnrestrictedDoubleOrKeyframeAnimationOptions::GetAsKeyframeAnimationOptions() const {
  DCHECK(IsKeyframeAnimationOptions());
  return keyframe_animation_options_;
}

void UnrestrictedDoubleOrKeyframeAnimationOptions::SetKeyframeAnimationOptions(const KeyframeAnimationOptions& value) {
  DCHECK(IsNull());
  keyframe_animation_options_ = value;
  type_ = SpecificType::kKeyframeAnimationOptions;
}

UnrestrictedDoubleOrKeyframeAnimationOptions UnrestrictedDoubleOrKeyframeAnimationOptions::FromKeyframeAnimationOptions(const KeyframeAnimationOptions& value) {
  UnrestrictedDoubleOrKeyframeAnimationOptions container;
  container.SetKeyframeAnimationOptions(value);
  return container;
}

double UnrestrictedDoubleOrKeyframeAnimationOptions::GetAsUnrestrictedDouble() const {
  DCHECK(IsUnrestrictedDouble());
  return unrestricted_double_;
}

void UnrestrictedDoubleOrKeyframeAnimationOptions::SetUnrestrictedDouble(double value) {
  DCHECK(IsNull());
  unrestricted_double_ = value;
  type_ = SpecificType::kUnrestrictedDouble;
}

UnrestrictedDoubleOrKeyframeAnimationOptions UnrestrictedDoubleOrKeyframeAnimationOptions::FromUnrestrictedDouble(double value) {
  UnrestrictedDoubleOrKeyframeAnimationOptions container;
  container.SetUnrestrictedDouble(value);
  return container;
}

UnrestrictedDoubleOrKeyframeAnimationOptions::UnrestrictedDoubleOrKeyframeAnimationOptions(const UnrestrictedDoubleOrKeyframeAnimationOptions&) = default;
UnrestrictedDoubleOrKeyframeAnimationOptions::~UnrestrictedDoubleOrKeyframeAnimationOptions() = default;
UnrestrictedDoubleOrKeyframeAnimationOptions& UnrestrictedDoubleOrKeyframeAnimationOptions::operator=(const UnrestrictedDoubleOrKeyframeAnimationOptions&) = default;

void UnrestrictedDoubleOrKeyframeAnimationOptions::Trace(blink::Visitor* visitor) {
  visitor->Trace(keyframe_animation_options_);
}

void V8UnrestrictedDoubleOrKeyframeAnimationOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, UnrestrictedDoubleOrKeyframeAnimationOptions& impl, UnionTypeConversionMode conversionMode, ExceptionState& exceptionState) {
  if (v8Value.IsEmpty())
    return;

  if (conversionMode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8Value))
    return;

  if (IsUndefinedOrNull(v8Value)) {
    KeyframeAnimationOptions cppValue;
    V8KeyframeAnimationOptions::ToImpl(isolate, v8Value, cppValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.SetKeyframeAnimationOptions(cppValue);
    return;
  }

  if (v8Value->IsObject()) {
    KeyframeAnimationOptions cppValue;
    V8KeyframeAnimationOptions::ToImpl(isolate, v8Value, cppValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.SetKeyframeAnimationOptions(cppValue);
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

v8::Local<v8::Value> ToV8(const UnrestrictedDoubleOrKeyframeAnimationOptions& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case UnrestrictedDoubleOrKeyframeAnimationOptions::SpecificType::kNone:
      return v8::Null(isolate);
    case UnrestrictedDoubleOrKeyframeAnimationOptions::SpecificType::kKeyframeAnimationOptions:
      return ToV8(impl.GetAsKeyframeAnimationOptions(), creationContext, isolate);
    case UnrestrictedDoubleOrKeyframeAnimationOptions::SpecificType::kUnrestrictedDouble:
      return v8::Number::New(isolate, impl.GetAsUnrestrictedDouble());
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

UnrestrictedDoubleOrKeyframeAnimationOptions NativeValueTraits<UnrestrictedDoubleOrKeyframeAnimationOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  UnrestrictedDoubleOrKeyframeAnimationOptions impl;
  V8UnrestrictedDoubleOrKeyframeAnimationOptions::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exceptionState);
  return impl;
}

}  // namespace blink
