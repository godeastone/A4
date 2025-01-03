// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_mojo_map_buffer_result.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8MojoMapBufferResultKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "buffer",
    "result",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8MojoMapBufferResult::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, MojoMapBufferResult& impl, ExceptionState& exceptionState) {
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

  const v8::Eternal<v8::Name>* keys = eternalV8MojoMapBufferResultKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> bufferValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&bufferValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (bufferValue.IsEmpty() || bufferValue->IsUndefined()) {
    // Do nothing.
  } else {
    DOMArrayBuffer* bufferCppValue = bufferValue->IsArrayBuffer() ? V8ArrayBuffer::ToImpl(v8::Local<v8::ArrayBuffer>::Cast(bufferValue)) : 0;
    if (!bufferCppValue) {
      exceptionState.ThrowTypeError("member buffer is not of type ArrayBuffer.");
      return;
    }
    impl.setBuffer(bufferCppValue);
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

v8::Local<v8::Value> MojoMapBufferResult::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8MojoMapBufferResult(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8MojoMapBufferResult(const MojoMapBufferResult& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8MojoMapBufferResultKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> bufferValue;
  bool bufferHasValueOrDefault = false;
  if (impl.hasBuffer()) {
    bufferValue = ToV8(impl.buffer(), creationContext, isolate);
    bufferHasValueOrDefault = true;
  }
  if (bufferHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), bufferValue))) {
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

MojoMapBufferResult NativeValueTraits<MojoMapBufferResult>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  MojoMapBufferResult impl;
  V8MojoMapBufferResult::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
