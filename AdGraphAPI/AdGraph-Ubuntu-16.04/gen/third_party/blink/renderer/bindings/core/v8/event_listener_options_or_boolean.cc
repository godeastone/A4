// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/event_listener_options_or_boolean.h"

#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"

namespace blink {

EventListenerOptionsOrBoolean::EventListenerOptionsOrBoolean() : type_(SpecificType::kNone) {}

bool EventListenerOptionsOrBoolean::GetAsBoolean() const {
  DCHECK(IsBoolean());
  return boolean_;
}

void EventListenerOptionsOrBoolean::SetBoolean(bool value) {
  DCHECK(IsNull());
  boolean_ = value;
  type_ = SpecificType::kBoolean;
}

EventListenerOptionsOrBoolean EventListenerOptionsOrBoolean::FromBoolean(bool value) {
  EventListenerOptionsOrBoolean container;
  container.SetBoolean(value);
  return container;
}

const EventListenerOptions& EventListenerOptionsOrBoolean::GetAsEventListenerOptions() const {
  DCHECK(IsEventListenerOptions());
  return event_listener_options_;
}

void EventListenerOptionsOrBoolean::SetEventListenerOptions(const EventListenerOptions& value) {
  DCHECK(IsNull());
  event_listener_options_ = value;
  type_ = SpecificType::kEventListenerOptions;
}

EventListenerOptionsOrBoolean EventListenerOptionsOrBoolean::FromEventListenerOptions(const EventListenerOptions& value) {
  EventListenerOptionsOrBoolean container;
  container.SetEventListenerOptions(value);
  return container;
}

EventListenerOptionsOrBoolean::EventListenerOptionsOrBoolean(const EventListenerOptionsOrBoolean&) = default;
EventListenerOptionsOrBoolean::~EventListenerOptionsOrBoolean() = default;
EventListenerOptionsOrBoolean& EventListenerOptionsOrBoolean::operator=(const EventListenerOptionsOrBoolean&) = default;

void EventListenerOptionsOrBoolean::Trace(blink::Visitor* visitor) {
  visitor->Trace(event_listener_options_);
}

void V8EventListenerOptionsOrBoolean::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, EventListenerOptionsOrBoolean& impl, UnionTypeConversionMode conversionMode, ExceptionState& exceptionState) {
  if (v8Value.IsEmpty())
    return;

  if (conversionMode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8Value))
    return;

  if (IsUndefinedOrNull(v8Value)) {
    EventListenerOptions cppValue;
    V8EventListenerOptions::ToImpl(isolate, v8Value, cppValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.SetEventListenerOptions(cppValue);
    return;
  }

  if (v8Value->IsObject()) {
    EventListenerOptions cppValue;
    V8EventListenerOptions::ToImpl(isolate, v8Value, cppValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.SetEventListenerOptions(cppValue);
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

v8::Local<v8::Value> ToV8(const EventListenerOptionsOrBoolean& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case EventListenerOptionsOrBoolean::SpecificType::kNone:
      return v8::Null(isolate);
    case EventListenerOptionsOrBoolean::SpecificType::kBoolean:
      return v8::Boolean::New(isolate, impl.GetAsBoolean());
    case EventListenerOptionsOrBoolean::SpecificType::kEventListenerOptions:
      return ToV8(impl.GetAsEventListenerOptions(), creationContext, isolate);
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

EventListenerOptionsOrBoolean NativeValueTraits<EventListenerOptionsOrBoolean>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  EventListenerOptionsOrBoolean impl;
  V8EventListenerOptionsOrBoolean::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exceptionState);
  return impl;
}

}  // namespace blink
