// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_mark_options.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8PerformanceMarkOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "detail",
    "startTime",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8PerformanceMarkOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, PerformanceMarkOptions& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8PerformanceMarkOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> detailValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&detailValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (detailValue.IsEmpty() || detailValue->IsUndefined()) {
    // Do nothing.
  } else {
    ScriptValue detailCppValue = ScriptValue(ScriptState::Current(isolate), detailValue);
    impl.setDetail(detailCppValue);
  }

  v8::Local<v8::Value> startTimeValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&startTimeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (startTimeValue.IsEmpty() || startTimeValue->IsUndefined()) {
    // Do nothing.
  } else {
    double startTimeCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, startTimeValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setStartTime(startTimeCppValue);
  }
}

v8::Local<v8::Value> PerformanceMarkOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8PerformanceMarkOptions(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8PerformanceMarkOptions(const PerformanceMarkOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8PerformanceMarkOptionsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> detailValue;
  bool detailHasValueOrDefault = false;
  if (impl.hasDetail()) {
    detailValue = impl.detail().V8Value();
    detailHasValueOrDefault = true;
  } else {
    detailValue = v8::Null(isolate);
    detailHasValueOrDefault = true;
  }
  if (detailHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), detailValue))) {
    return false;
  }

  v8::Local<v8::Value> startTimeValue;
  bool startTimeHasValueOrDefault = false;
  if (impl.hasStartTime()) {
    startTimeValue = v8::Number::New(isolate, impl.startTime());
    startTimeHasValueOrDefault = true;
  }
  if (startTimeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), startTimeValue))) {
    return false;
  }

  return true;
}

PerformanceMarkOptions NativeValueTraits<PerformanceMarkOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  PerformanceMarkOptions impl;
  V8PerformanceMarkOptions::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
