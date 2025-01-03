// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_mojo_create_message_pipe_result.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_mojo_handle.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8MojoCreateMessagePipeResultKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "handle0",
    "handle1",
    "result",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8MojoCreateMessagePipeResult::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, MojoCreateMessagePipeResult& impl, ExceptionState& exceptionState) {
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

  const v8::Eternal<v8::Name>* keys = eternalV8MojoCreateMessagePipeResultKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> handle0Value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&handle0Value)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (handle0Value.IsEmpty() || handle0Value->IsUndefined()) {
    // Do nothing.
  } else {
    MojoHandle* handle0CppValue = V8MojoHandle::ToImplWithTypeCheck(isolate, handle0Value);
    if (!handle0CppValue) {
      exceptionState.ThrowTypeError("member handle0 is not of type MojoHandle.");
      return;
    }
    impl.setHandle0(handle0CppValue);
  }

  v8::Local<v8::Value> handle1Value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&handle1Value)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (handle1Value.IsEmpty() || handle1Value->IsUndefined()) {
    // Do nothing.
  } else {
    MojoHandle* handle1CppValue = V8MojoHandle::ToImplWithTypeCheck(isolate, handle1Value);
    if (!handle1CppValue) {
      exceptionState.ThrowTypeError("member handle1 is not of type MojoHandle.");
      return;
    }
    impl.setHandle1(handle1CppValue);
  }

  v8::Local<v8::Value> resultValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&resultValue)) {
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

v8::Local<v8::Value> MojoCreateMessagePipeResult::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8MojoCreateMessagePipeResult(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8MojoCreateMessagePipeResult(const MojoCreateMessagePipeResult& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8MojoCreateMessagePipeResultKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> handle0Value;
  bool handle0HasValueOrDefault = false;
  if (impl.hasHandle0()) {
    handle0Value = ToV8(impl.handle0(), creationContext, isolate);
    handle0HasValueOrDefault = true;
  }
  if (handle0HasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), handle0Value))) {
    return false;
  }

  v8::Local<v8::Value> handle1Value;
  bool handle1HasValueOrDefault = false;
  if (impl.hasHandle1()) {
    handle1Value = ToV8(impl.handle1(), creationContext, isolate);
    handle1HasValueOrDefault = true;
  }
  if (handle1HasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), handle1Value))) {
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
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), resultValue))) {
    return false;
  }

  return true;
}

MojoCreateMessagePipeResult NativeValueTraits<MojoCreateMessagePipeResult>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  MojoCreateMessagePipeResult impl;
  V8MojoCreateMessagePipeResult::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
