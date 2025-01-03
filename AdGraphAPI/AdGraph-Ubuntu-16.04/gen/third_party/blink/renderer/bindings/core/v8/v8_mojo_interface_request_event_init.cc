// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_mojo_interface_request_event_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_init.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_mojo_handle.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8MojoInterfaceRequestEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "handle",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8MojoInterfaceRequestEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, MojoInterfaceRequestEventInit& impl, ExceptionState& exceptionState) {
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

  const v8::Eternal<v8::Name>* keys = eternalV8MojoInterfaceRequestEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> handleValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&handleValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (handleValue.IsEmpty() || handleValue->IsUndefined()) {
    // Do nothing.
  } else {
    MojoHandle* handleCppValue = V8MojoHandle::ToImplWithTypeCheck(isolate, handleValue);
    if (!handleCppValue) {
      exceptionState.ThrowTypeError("member handle is not of type MojoHandle.");
      return;
    }
    impl.setHandle(handleCppValue);
  }
}

v8::Local<v8::Value> MojoInterfaceRequestEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8MojoInterfaceRequestEventInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8MojoInterfaceRequestEventInit(const MojoInterfaceRequestEventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8MojoInterfaceRequestEventInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> handleValue;
  bool handleHasValueOrDefault = false;
  if (impl.hasHandle()) {
    handleValue = ToV8(impl.handle(), creationContext, isolate);
    handleHasValueOrDefault = true;
  }
  if (handleHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), handleValue))) {
    return false;
  }

  return true;
}

MojoInterfaceRequestEventInit NativeValueTraits<MojoInterfaceRequestEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  MojoInterfaceRequestEventInit impl;
  V8MojoInterfaceRequestEventInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
