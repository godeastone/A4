// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_background_fetch_fail_event_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_background_fetch_event_init.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_background_fetch_settled_fetch.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8BackgroundFetchFailEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "fetches",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8BackgroundFetchFailEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, BackgroundFetchFailEventInit& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    exceptionState.ThrowTypeError("Missing required member(s): fetches.");
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8BackgroundFetchEventInit::ToImpl(isolate, v8Value, impl, exceptionState);
  if (exceptionState.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8BackgroundFetchFailEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> fetchesValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&fetchesValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (fetchesValue.IsEmpty() || fetchesValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member fetches is undefined.");
    return;
  } else {
    HeapVector<Member<BackgroundFetchSettledFetch>> fetchesCppValue = NativeValueTraits<IDLSequence<BackgroundFetchSettledFetch>>::NativeValue(isolate, fetchesValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setFetches(fetchesCppValue);
  }
}

v8::Local<v8::Value> BackgroundFetchFailEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8BackgroundFetchFailEventInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8BackgroundFetchFailEventInit(const BackgroundFetchFailEventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8BackgroundFetchEventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8BackgroundFetchFailEventInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> fetchesValue;
  bool fetchesHasValueOrDefault = false;
  if (impl.hasFetches()) {
    fetchesValue = ToV8(impl.fetches(), creationContext, isolate);
    fetchesHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (fetchesHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), fetchesValue))) {
    return false;
  }

  return true;
}

BackgroundFetchFailEventInit NativeValueTraits<BackgroundFetchFailEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  BackgroundFetchFailEventInit impl;
  V8BackgroundFetchFailEventInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
