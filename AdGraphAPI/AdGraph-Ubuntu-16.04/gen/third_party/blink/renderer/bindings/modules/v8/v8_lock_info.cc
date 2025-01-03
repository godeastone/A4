// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_lock_info.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8LockInfoKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "clientId",
    "mode",
    "name",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8LockInfo::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, LockInfo& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8LockInfoKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> clientIdValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&clientIdValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (clientIdValue.IsEmpty() || clientIdValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> clientIdCppValue = clientIdValue;
    if (!clientIdCppValue.Prepare(exceptionState))
      return;
    impl.setClientId(clientIdCppValue);
  }

  v8::Local<v8::Value> modeValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&modeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (modeValue.IsEmpty() || modeValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> modeCppValue = modeValue;
    if (!modeCppValue.Prepare(exceptionState))
      return;
    const char* validValues[] = {
        "shared",
        "exclusive",
    };
    if (!IsValidEnum(modeCppValue, validValues, arraysize(validValues), "LockMode", exceptionState))
      return;
    impl.setMode(modeCppValue);
  }

  v8::Local<v8::Value> nameValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&nameValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (nameValue.IsEmpty() || nameValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> nameCppValue = nameValue;
    if (!nameCppValue.Prepare(exceptionState))
      return;
    impl.setName(nameCppValue);
  }
}

v8::Local<v8::Value> LockInfo::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8LockInfo(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8LockInfo(const LockInfo& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8LockInfoKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> clientIdValue;
  bool clientIdHasValueOrDefault = false;
  if (impl.hasClientId()) {
    clientIdValue = V8String(isolate, impl.clientId());
    clientIdHasValueOrDefault = true;
  }
  if (clientIdHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), clientIdValue))) {
    return false;
  }

  v8::Local<v8::Value> modeValue;
  bool modeHasValueOrDefault = false;
  if (impl.hasMode()) {
    modeValue = V8String(isolate, impl.mode());
    modeHasValueOrDefault = true;
  }
  if (modeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), modeValue))) {
    return false;
  }

  v8::Local<v8::Value> nameValue;
  bool nameHasValueOrDefault = false;
  if (impl.hasName()) {
    nameValue = V8String(isolate, impl.name());
    nameHasValueOrDefault = true;
  }
  if (nameHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), nameValue))) {
    return false;
  }

  return true;
}

LockInfo NativeValueTraits<LockInfo>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  LockInfo impl;
  V8LockInfo::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
