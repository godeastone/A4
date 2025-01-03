// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/boolean_or_media_track_constraints.h"

#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"

namespace blink {

BooleanOrMediaTrackConstraints::BooleanOrMediaTrackConstraints() : type_(SpecificType::kNone) {}

bool BooleanOrMediaTrackConstraints::GetAsBoolean() const {
  DCHECK(IsBoolean());
  return boolean_;
}

void BooleanOrMediaTrackConstraints::SetBoolean(bool value) {
  DCHECK(IsNull());
  boolean_ = value;
  type_ = SpecificType::kBoolean;
}

BooleanOrMediaTrackConstraints BooleanOrMediaTrackConstraints::FromBoolean(bool value) {
  BooleanOrMediaTrackConstraints container;
  container.SetBoolean(value);
  return container;
}

const MediaTrackConstraints& BooleanOrMediaTrackConstraints::GetAsMediaTrackConstraints() const {
  DCHECK(IsMediaTrackConstraints());
  return media_track_constraints_;
}

void BooleanOrMediaTrackConstraints::SetMediaTrackConstraints(const MediaTrackConstraints& value) {
  DCHECK(IsNull());
  media_track_constraints_ = value;
  type_ = SpecificType::kMediaTrackConstraints;
}

BooleanOrMediaTrackConstraints BooleanOrMediaTrackConstraints::FromMediaTrackConstraints(const MediaTrackConstraints& value) {
  BooleanOrMediaTrackConstraints container;
  container.SetMediaTrackConstraints(value);
  return container;
}

BooleanOrMediaTrackConstraints::BooleanOrMediaTrackConstraints(const BooleanOrMediaTrackConstraints&) = default;
BooleanOrMediaTrackConstraints::~BooleanOrMediaTrackConstraints() = default;
BooleanOrMediaTrackConstraints& BooleanOrMediaTrackConstraints::operator=(const BooleanOrMediaTrackConstraints&) = default;

void BooleanOrMediaTrackConstraints::Trace(blink::Visitor* visitor) {
  visitor->Trace(media_track_constraints_);
}

void V8BooleanOrMediaTrackConstraints::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, BooleanOrMediaTrackConstraints& impl, UnionTypeConversionMode conversionMode, ExceptionState& exceptionState) {
  if (v8Value.IsEmpty())
    return;

  if (conversionMode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8Value))
    return;

  if (IsUndefinedOrNull(v8Value)) {
    MediaTrackConstraints cppValue;
    V8MediaTrackConstraints::ToImpl(isolate, v8Value, cppValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.SetMediaTrackConstraints(cppValue);
    return;
  }

  if (v8Value->IsObject()) {
    MediaTrackConstraints cppValue;
    V8MediaTrackConstraints::ToImpl(isolate, v8Value, cppValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.SetMediaTrackConstraints(cppValue);
    return;
  }

  if (v8Value->IsBoolean()) {
    impl.SetBoolean(v8Value.As<v8::Boolean>()->Value());
    return;
  }

  {
    impl.SetBoolean(v8Value->BooleanValue());
    return;
  }
}

v8::Local<v8::Value> ToV8(const BooleanOrMediaTrackConstraints& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case BooleanOrMediaTrackConstraints::SpecificType::kNone:
      return v8::Null(isolate);
    case BooleanOrMediaTrackConstraints::SpecificType::kBoolean:
      return v8::Boolean::New(isolate, impl.GetAsBoolean());
    case BooleanOrMediaTrackConstraints::SpecificType::kMediaTrackConstraints:
      return ToV8(impl.GetAsMediaTrackConstraints(), creationContext, isolate);
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

BooleanOrMediaTrackConstraints NativeValueTraits<BooleanOrMediaTrackConstraints>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  BooleanOrMediaTrackConstraints impl;
  V8BooleanOrMediaTrackConstraints::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exceptionState);
  return impl;
}

}  // namespace blink
