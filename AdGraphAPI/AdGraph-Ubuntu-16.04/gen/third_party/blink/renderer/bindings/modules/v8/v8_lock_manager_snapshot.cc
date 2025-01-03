// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_lock_manager_snapshot.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_lock_info.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8LockManagerSnapshotKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "held",
    "pending",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8LockManagerSnapshot::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, LockManagerSnapshot& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8LockManagerSnapshotKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> heldValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&heldValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (heldValue.IsEmpty() || heldValue->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<LockInfo> heldCppValue = NativeValueTraits<IDLSequence<LockInfo>>::NativeValue(isolate, heldValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setHeld(heldCppValue);
  }

  v8::Local<v8::Value> pendingValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&pendingValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (pendingValue.IsEmpty() || pendingValue->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<LockInfo> pendingCppValue = NativeValueTraits<IDLSequence<LockInfo>>::NativeValue(isolate, pendingValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setPending(pendingCppValue);
  }
}

v8::Local<v8::Value> LockManagerSnapshot::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8LockManagerSnapshot(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8LockManagerSnapshot(const LockManagerSnapshot& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8LockManagerSnapshotKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> heldValue;
  bool heldHasValueOrDefault = false;
  if (impl.hasHeld()) {
    heldValue = ToV8(impl.held(), creationContext, isolate);
    heldHasValueOrDefault = true;
  }
  if (heldHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), heldValue))) {
    return false;
  }

  v8::Local<v8::Value> pendingValue;
  bool pendingHasValueOrDefault = false;
  if (impl.hasPending()) {
    pendingValue = ToV8(impl.pending(), creationContext, isolate);
    pendingHasValueOrDefault = true;
  }
  if (pendingHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), pendingValue))) {
    return false;
  }

  return true;
}

LockManagerSnapshot NativeValueTraits<LockManagerSnapshot>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  LockManagerSnapshot impl;
  V8LockManagerSnapshot::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
