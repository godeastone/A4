// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_measure_options.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8PerformanceMeasureOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "detail",
    "endTime",
    "startTime",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8PerformanceMeasureOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, PerformanceMeasureOptions& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8PerformanceMeasureOptionsKeys(isolate);
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

  v8::Local<v8::Value> endTimeValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&endTimeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (endTimeValue.IsEmpty() || endTimeValue->IsUndefined()) {
    // Do nothing.
  } else if (endTimeValue->IsNull()) {
    impl.setEndTimeToNull();
  } else {
    StringOrDouble endTimeCppValue;
    V8StringOrDouble::ToImpl(isolate, endTimeValue, endTimeCppValue, UnionTypeConversionMode::kNullable, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setEndTime(endTimeCppValue);
  }

  v8::Local<v8::Value> startTimeValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&startTimeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (startTimeValue.IsEmpty() || startTimeValue->IsUndefined()) {
    // Do nothing.
  } else if (startTimeValue->IsNull()) {
    impl.setStartTimeToNull();
  } else {
    StringOrDouble startTimeCppValue;
    V8StringOrDouble::ToImpl(isolate, startTimeValue, startTimeCppValue, UnionTypeConversionMode::kNullable, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setStartTime(startTimeCppValue);
  }
}

v8::Local<v8::Value> PerformanceMeasureOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8PerformanceMeasureOptions(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8PerformanceMeasureOptions(const PerformanceMeasureOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8PerformanceMeasureOptionsKeys(isolate);
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

  v8::Local<v8::Value> endTimeValue;
  bool endTimeHasValueOrDefault = false;
  if (impl.hasEndTime()) {
    endTimeValue = ToV8(impl.endTime(), creationContext, isolate);
    endTimeHasValueOrDefault = true;
  } else {
    endTimeValue = v8::Null(isolate);
    endTimeHasValueOrDefault = true;
  }
  if (endTimeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), endTimeValue))) {
    return false;
  }

  v8::Local<v8::Value> startTimeValue;
  bool startTimeHasValueOrDefault = false;
  if (impl.hasStartTime()) {
    startTimeValue = ToV8(impl.startTime(), creationContext, isolate);
    startTimeHasValueOrDefault = true;
  } else {
    startTimeValue = v8::Null(isolate);
    startTimeHasValueOrDefault = true;
  }
  if (startTimeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), startTimeValue))) {
    return false;
  }

  return true;
}

PerformanceMeasureOptions NativeValueTraits<PerformanceMeasureOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  PerformanceMeasureOptions impl;
  V8PerformanceMeasureOptions::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
