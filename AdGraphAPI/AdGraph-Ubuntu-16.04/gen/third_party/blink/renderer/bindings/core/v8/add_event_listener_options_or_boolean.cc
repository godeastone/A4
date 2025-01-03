// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/add_event_listener_options_or_boolean.h"

#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"

namespace blink {

AddEventListenerOptionsOrBoolean::AddEventListenerOptionsOrBoolean() : type_(SpecificType::kNone) {}

const AddEventListenerOptions& AddEventListenerOptionsOrBoolean::GetAsAddEventListenerOptions() const {
  DCHECK(IsAddEventListenerOptions());
  return add_event_listener_options_;
}

void AddEventListenerOptionsOrBoolean::SetAddEventListenerOptions(const AddEventListenerOptions& value) {
  DCHECK(IsNull());
  add_event_listener_options_ = value;
  type_ = SpecificType::kAddEventListenerOptions;
}

AddEventListenerOptionsOrBoolean AddEventListenerOptionsOrBoolean::FromAddEventListenerOptions(const AddEventListenerOptions& value) {
  AddEventListenerOptionsOrBoolean container;
  container.SetAddEventListenerOptions(value);
  return container;
}

bool AddEventListenerOptionsOrBoolean::GetAsBoolean() const {
  DCHECK(IsBoolean());
  return boolean_;
}

void AddEventListenerOptionsOrBoolean::SetBoolean(bool value) {
  DCHECK(IsNull());
  boolean_ = value;
  type_ = SpecificType::kBoolean;
}

AddEventListenerOptionsOrBoolean AddEventListenerOptionsOrBoolean::FromBoolean(bool value) {
  AddEventListenerOptionsOrBoolean container;
  container.SetBoolean(value);
  return container;
}

AddEventListenerOptionsOrBoolean::AddEventListenerOptionsOrBoolean(const AddEventListenerOptionsOrBoolean&) = default;
AddEventListenerOptionsOrBoolean::~AddEventListenerOptionsOrBoolean() = default;
AddEventListenerOptionsOrBoolean& AddEventListenerOptionsOrBoolean::operator=(const AddEventListenerOptionsOrBoolean&) = default;

void AddEventListenerOptionsOrBoolean::Trace(blink::Visitor* visitor) {
  visitor->Trace(add_event_listener_options_);
}

void V8AddEventListenerOptionsOrBoolean::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, AddEventListenerOptionsOrBoolean& impl, UnionTypeConversionMode conversionMode, ExceptionState& exceptionState) {
  if (v8Value.IsEmpty())
    return;

  if (conversionMode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8Value))
    return;

  if (IsUndefinedOrNull(v8Value)) {
    AddEventListenerOptions cppValue;
    V8AddEventListenerOptions::ToImpl(isolate, v8Value, cppValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.SetAddEventListenerOptions(cppValue);
    return;
  }

  if (v8Value->IsObject()) {
    AddEventListenerOptions cppValue;
    V8AddEventListenerOptions::ToImpl(isolate, v8Value, cppValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.SetAddEventListenerOptions(cppValue);
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

v8::Local<v8::Value> ToV8(const AddEventListenerOptionsOrBoolean& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case AddEventListenerOptionsOrBoolean::SpecificType::kNone:
      return v8::Null(isolate);
    case AddEventListenerOptionsOrBoolean::SpecificType::kAddEventListenerOptions:
      return ToV8(impl.GetAsAddEventListenerOptions(), creationContext, isolate);
    case AddEventListenerOptionsOrBoolean::SpecificType::kBoolean:
      return v8::Boolean::New(isolate, impl.GetAsBoolean());
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

AddEventListenerOptionsOrBoolean NativeValueTraits<AddEventListenerOptionsOrBoolean>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  AddEventListenerOptionsOrBoolean impl;
  V8AddEventListenerOptionsOrBoolean::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exceptionState);
  return impl;
}

}  // namespace blink
