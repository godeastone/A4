// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_scroll_timeline_options.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_element.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8ScrollTimelineOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "orientation",
    "scrollSource",
    "timeRange",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8ScrollTimelineOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, ScrollTimelineOptions& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8ScrollTimelineOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> orientationValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&orientationValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (orientationValue.IsEmpty() || orientationValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> orientationCppValue = orientationValue;
    if (!orientationCppValue.Prepare(exceptionState))
      return;
    const char* validValues[] = {
        "block",
        "inline",
    };
    if (!IsValidEnum(orientationCppValue, validValues, arraysize(validValues), "ScrollDirection", exceptionState))
      return;
    impl.setOrientation(orientationCppValue);
  }

  v8::Local<v8::Value> scrollSourceValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&scrollSourceValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (scrollSourceValue.IsEmpty() || scrollSourceValue->IsUndefined()) {
    // Do nothing.
  } else {
    Element* scrollSourceCppValue = V8Element::ToImplWithTypeCheck(isolate, scrollSourceValue);
    if (!scrollSourceCppValue) {
      exceptionState.ThrowTypeError("member scrollSource is not of type Element.");
      return;
    }
    impl.setScrollSource(scrollSourceCppValue);
  }

  v8::Local<v8::Value> timeRangeValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&timeRangeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (timeRangeValue.IsEmpty() || timeRangeValue->IsUndefined()) {
    // Do nothing.
  } else {
    DoubleOrScrollTimelineAutoKeyword timeRangeCppValue;
    V8DoubleOrScrollTimelineAutoKeyword::ToImpl(isolate, timeRangeValue, timeRangeCppValue, UnionTypeConversionMode::kNotNullable, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setTimeRange(timeRangeCppValue);
  }
}

v8::Local<v8::Value> ScrollTimelineOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8ScrollTimelineOptions(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8ScrollTimelineOptions(const ScrollTimelineOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8ScrollTimelineOptionsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> orientationValue;
  bool orientationHasValueOrDefault = false;
  if (impl.hasOrientation()) {
    orientationValue = V8String(isolate, impl.orientation());
    orientationHasValueOrDefault = true;
  } else {
    orientationValue = V8String(isolate, "block");
    orientationHasValueOrDefault = true;
  }
  if (orientationHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), orientationValue))) {
    return false;
  }

  v8::Local<v8::Value> scrollSourceValue;
  bool scrollSourceHasValueOrDefault = false;
  if (impl.hasScrollSource()) {
    scrollSourceValue = ToV8(impl.scrollSource(), creationContext, isolate);
    scrollSourceHasValueOrDefault = true;
  }
  if (scrollSourceHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), scrollSourceValue))) {
    return false;
  }

  v8::Local<v8::Value> timeRangeValue;
  bool timeRangeHasValueOrDefault = false;
  if (impl.hasTimeRange()) {
    timeRangeValue = ToV8(impl.timeRange(), creationContext, isolate);
    timeRangeHasValueOrDefault = true;
  } else {
    timeRangeValue = ToV8(DoubleOrScrollTimelineAutoKeyword::FromScrollTimelineAutoKeyword("auto"), creationContext, isolate);
    timeRangeHasValueOrDefault = true;
  }
  if (timeRangeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), timeRangeValue))) {
    return false;
  }

  return true;
}

ScrollTimelineOptions NativeValueTraits<ScrollTimelineOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  ScrollTimelineOptions impl;
  V8ScrollTimelineOptions::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
