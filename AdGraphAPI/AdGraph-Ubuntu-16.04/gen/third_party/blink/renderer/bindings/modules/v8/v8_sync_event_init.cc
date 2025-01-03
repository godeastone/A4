// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_sync_event_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_extendable_event_init.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8SyncEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "lastChance",
    "tag",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8SyncEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, SyncEventInit& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    exceptionState.ThrowTypeError("Missing required member(s): tag.");
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8ExtendableEventInit::ToImpl(isolate, v8Value, impl, exceptionState);
  if (exceptionState.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8SyncEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> lastChanceValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&lastChanceValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (lastChanceValue.IsEmpty() || lastChanceValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool lastChanceCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, lastChanceValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setLastChance(lastChanceCppValue);
  }

  v8::Local<v8::Value> tagValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&tagValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (tagValue.IsEmpty() || tagValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member tag is undefined.");
    return;
  } else {
    V8StringResource<> tagCppValue = tagValue;
    if (!tagCppValue.Prepare(exceptionState))
      return;
    impl.setTag(tagCppValue);
  }
}

v8::Local<v8::Value> SyncEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8SyncEventInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8SyncEventInit(const SyncEventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8ExtendableEventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8SyncEventInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> lastChanceValue;
  bool lastChanceHasValueOrDefault = false;
  if (impl.hasLastChance()) {
    lastChanceValue = v8::Boolean::New(isolate, impl.lastChance());
    lastChanceHasValueOrDefault = true;
  } else {
    lastChanceValue = v8::Boolean::New(isolate, false);
    lastChanceHasValueOrDefault = true;
  }
  if (lastChanceHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), lastChanceValue))) {
    return false;
  }

  v8::Local<v8::Value> tagValue;
  bool tagHasValueOrDefault = false;
  if (impl.hasTag()) {
    tagValue = V8String(isolate, impl.tag());
    tagHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (tagHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), tagValue))) {
    return false;
  }

  return true;
}

SyncEventInit NativeValueTraits<SyncEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  SyncEventInit impl;
  V8SyncEventInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
