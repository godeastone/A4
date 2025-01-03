// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_shadow_root_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8ShadowRootInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "delegatesFocus",
    "mode",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8ShadowRootInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, ShadowRootInit& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    exceptionState.ThrowTypeError("Missing required member(s): mode.");
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8ShadowRootInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> delegatesFocusValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&delegatesFocusValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (delegatesFocusValue.IsEmpty() || delegatesFocusValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool delegatesFocusCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, delegatesFocusValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setDelegatesFocus(delegatesFocusCppValue);
  }

  v8::Local<v8::Value> modeValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&modeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (modeValue.IsEmpty() || modeValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member mode is undefined.");
    return;
  } else {
    V8StringResource<> modeCppValue = modeValue;
    if (!modeCppValue.Prepare(exceptionState))
      return;
    const char* validValues[] = {
        "open",
        "closed",
    };
    if (!IsValidEnum(modeCppValue, validValues, arraysize(validValues), "ShadowRootMode", exceptionState))
      return;
    impl.setMode(modeCppValue);
  }
}

v8::Local<v8::Value> ShadowRootInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8ShadowRootInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8ShadowRootInit(const ShadowRootInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8ShadowRootInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> delegatesFocusValue;
  bool delegatesFocusHasValueOrDefault = false;
  if (impl.hasDelegatesFocus()) {
    delegatesFocusValue = v8::Boolean::New(isolate, impl.delegatesFocus());
    delegatesFocusHasValueOrDefault = true;
  }
  if (delegatesFocusHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), delegatesFocusValue))) {
    return false;
  }

  v8::Local<v8::Value> modeValue;
  bool modeHasValueOrDefault = false;
  if (impl.hasMode()) {
    modeValue = V8String(isolate, impl.mode());
    modeHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (modeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), modeValue))) {
    return false;
  }

  return true;
}

ShadowRootInit NativeValueTraits<ShadowRootInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  ShadowRootInit impl;
  V8ShadowRootInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
