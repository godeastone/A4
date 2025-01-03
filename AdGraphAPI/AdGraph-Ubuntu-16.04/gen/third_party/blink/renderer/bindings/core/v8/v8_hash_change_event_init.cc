// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_hash_change_event_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_init.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8HashChangeEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "newURL",
    "oldURL",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8HashChangeEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, HashChangeEventInit& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8EventInit::ToImpl(isolate, v8Value, impl, exceptionState);
  if (exceptionState.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8HashChangeEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> newURLValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&newURLValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (newURLValue.IsEmpty() || newURLValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> newURLCppValue = newURLValue;
    if (!newURLCppValue.Prepare(exceptionState))
      return;
    impl.setNewURL(newURLCppValue);
  }

  v8::Local<v8::Value> oldURLValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&oldURLValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (oldURLValue.IsEmpty() || oldURLValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> oldURLCppValue = oldURLValue;
    if (!oldURLCppValue.Prepare(exceptionState))
      return;
    impl.setOldURL(oldURLCppValue);
  }
}

v8::Local<v8::Value> HashChangeEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8HashChangeEventInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8HashChangeEventInit(const HashChangeEventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8HashChangeEventInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> newURLValue;
  bool newURLHasValueOrDefault = false;
  if (impl.hasNewURL()) {
    newURLValue = V8String(isolate, impl.newURL());
    newURLHasValueOrDefault = true;
  }
  if (newURLHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), newURLValue))) {
    return false;
  }

  v8::Local<v8::Value> oldURLValue;
  bool oldURLHasValueOrDefault = false;
  if (impl.hasOldURL()) {
    oldURLValue = V8String(isolate, impl.oldURL());
    oldURLHasValueOrDefault = true;
  }
  if (oldURLHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), oldURLValue))) {
    return false;
  }

  return true;
}

HashChangeEventInit NativeValueTraits<HashChangeEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  HashChangeEventInit impl;
  V8HashChangeEventInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
