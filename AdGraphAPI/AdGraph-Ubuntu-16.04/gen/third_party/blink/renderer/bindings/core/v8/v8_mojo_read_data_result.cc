// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_mojo_read_data_result.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8MojoReadDataResultKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "numBytes",
    "result",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8MojoReadDataResult::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, MojoReadDataResult& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    exceptionState.ThrowTypeError("Missing required member(s): numBytes, result.");
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8MojoReadDataResultKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> numBytesValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&numBytesValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (numBytesValue.IsEmpty() || numBytesValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member numBytes is undefined.");
    return;
  } else {
    uint32_t numBytesCppValue = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, numBytesValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setNumBytes(numBytesCppValue);
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

v8::Local<v8::Value> MojoReadDataResult::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8MojoReadDataResult(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8MojoReadDataResult(const MojoReadDataResult& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8MojoReadDataResultKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> numBytesValue;
  bool numBytesHasValueOrDefault = false;
  if (impl.hasNumBytes()) {
    numBytesValue = v8::Integer::NewFromUnsigned(isolate, impl.numBytes());
    numBytesHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (numBytesHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), numBytesValue))) {
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

MojoReadDataResult NativeValueTraits<MojoReadDataResult>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  MojoReadDataResult impl;
  V8MojoReadDataResult::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
