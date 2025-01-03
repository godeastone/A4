// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/scroll_into_view_options_or_boolean.h"

#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"

namespace blink {

ScrollIntoViewOptionsOrBoolean::ScrollIntoViewOptionsOrBoolean() : type_(SpecificType::kNone) {}

bool ScrollIntoViewOptionsOrBoolean::GetAsBoolean() const {
  DCHECK(IsBoolean());
  return boolean_;
}

void ScrollIntoViewOptionsOrBoolean::SetBoolean(bool value) {
  DCHECK(IsNull());
  boolean_ = value;
  type_ = SpecificType::kBoolean;
}

ScrollIntoViewOptionsOrBoolean ScrollIntoViewOptionsOrBoolean::FromBoolean(bool value) {
  ScrollIntoViewOptionsOrBoolean container;
  container.SetBoolean(value);
  return container;
}

const ScrollIntoViewOptions& ScrollIntoViewOptionsOrBoolean::GetAsScrollIntoViewOptions() const {
  DCHECK(IsScrollIntoViewOptions());
  return scroll_into_view_options_;
}

void ScrollIntoViewOptionsOrBoolean::SetScrollIntoViewOptions(const ScrollIntoViewOptions& value) {
  DCHECK(IsNull());
  scroll_into_view_options_ = value;
  type_ = SpecificType::kScrollIntoViewOptions;
}

ScrollIntoViewOptionsOrBoolean ScrollIntoViewOptionsOrBoolean::FromScrollIntoViewOptions(const ScrollIntoViewOptions& value) {
  ScrollIntoViewOptionsOrBoolean container;
  container.SetScrollIntoViewOptions(value);
  return container;
}

ScrollIntoViewOptionsOrBoolean::ScrollIntoViewOptionsOrBoolean(const ScrollIntoViewOptionsOrBoolean&) = default;
ScrollIntoViewOptionsOrBoolean::~ScrollIntoViewOptionsOrBoolean() = default;
ScrollIntoViewOptionsOrBoolean& ScrollIntoViewOptionsOrBoolean::operator=(const ScrollIntoViewOptionsOrBoolean&) = default;

void ScrollIntoViewOptionsOrBoolean::Trace(blink::Visitor* visitor) {
  visitor->Trace(scroll_into_view_options_);
}

void V8ScrollIntoViewOptionsOrBoolean::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, ScrollIntoViewOptionsOrBoolean& impl, UnionTypeConversionMode conversionMode, ExceptionState& exceptionState) {
  if (v8Value.IsEmpty())
    return;

  if (conversionMode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8Value))
    return;

  if (IsUndefinedOrNull(v8Value)) {
    ScrollIntoViewOptions cppValue;
    V8ScrollIntoViewOptions::ToImpl(isolate, v8Value, cppValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.SetScrollIntoViewOptions(cppValue);
    return;
  }

  if (v8Value->IsObject()) {
    ScrollIntoViewOptions cppValue;
    V8ScrollIntoViewOptions::ToImpl(isolate, v8Value, cppValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.SetScrollIntoViewOptions(cppValue);
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

v8::Local<v8::Value> ToV8(const ScrollIntoViewOptionsOrBoolean& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case ScrollIntoViewOptionsOrBoolean::SpecificType::kNone:
      return v8::Null(isolate);
    case ScrollIntoViewOptionsOrBoolean::SpecificType::kBoolean:
      return v8::Boolean::New(isolate, impl.GetAsBoolean());
    case ScrollIntoViewOptionsOrBoolean::SpecificType::kScrollIntoViewOptions:
      return ToV8(impl.GetAsScrollIntoViewOptions(), creationContext, isolate);
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

ScrollIntoViewOptionsOrBoolean NativeValueTraits<ScrollIntoViewOptionsOrBoolean>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  ScrollIntoViewOptionsOrBoolean impl;
  V8ScrollIntoViewOptionsOrBoolean::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exceptionState);
  return impl;
}

}  // namespace blink
