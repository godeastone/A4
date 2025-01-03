// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_mojo_create_shared_buffer_result.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_mojo_handle.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8MojoCreateSharedBufferResultKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "handle",
    "result",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8MojoCreateSharedBufferResult::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, MojoCreateSharedBufferResult& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    exceptionState.ThrowTypeError("Missing required member(s): result.");
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8MojoCreateSharedBufferResultKeys(isolate);
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

  v8::Local<v8::Value> resultValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&resultValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (resultValue.IsEmpty() || resultValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member result is undefined.");
    return;
  } else {
    uint32_t resultCppValue = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, resultValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setResult(resultCppValue);
  }
}

v8::Local<v8::Value> MojoCreateSharedBufferResult::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8MojoCreateSharedBufferResult(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8MojoCreateSharedBufferResult(const MojoCreateSharedBufferResult& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8MojoCreateSharedBufferResultKeys(isolate);
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

  v8::Local<v8::Value> resultValue;
  bool resultHasValueOrDefault = false;
  if (impl.hasResult()) {
    resultValue = v8::Integer::NewFromUnsigned(isolate, impl.result());
    resultHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (resultHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), resultValue))) {
    return false;
  }

  return true;
}

MojoCreateSharedBufferResult NativeValueTraits<MojoCreateSharedBufferResult>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  MojoCreateSharedBufferResult impl;
  V8MojoCreateSharedBufferResult::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
