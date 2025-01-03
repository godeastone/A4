// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_document_timeline_options.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8DocumentTimelineOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "originTime",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8DocumentTimelineOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, DocumentTimelineOptions& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8DocumentTimelineOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> originTimeValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&originTimeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (originTimeValue.IsEmpty() || originTimeValue->IsUndefined()) {
    // Do nothing.
  } else {
    double originTimeCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, originTimeValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setOriginTime(originTimeCppValue);
  }
}

v8::Local<v8::Value> DocumentTimelineOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8DocumentTimelineOptions(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8DocumentTimelineOptions(const DocumentTimelineOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8DocumentTimelineOptionsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> originTimeValue;
  bool originTimeHasValueOrDefault = false;
  if (impl.hasOriginTime()) {
    originTimeValue = v8::Number::New(isolate, impl.originTime());
    originTimeHasValueOrDefault = true;
  } else {
    originTimeValue = v8::Number::New(isolate, 0);
    originTimeHasValueOrDefault = true;
  }
  if (originTimeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), originTimeValue))) {
    return false;
  }

  return true;
}

DocumentTimelineOptions NativeValueTraits<DocumentTimelineOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  DocumentTimelineOptions impl;
  V8DocumentTimelineOptions::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
