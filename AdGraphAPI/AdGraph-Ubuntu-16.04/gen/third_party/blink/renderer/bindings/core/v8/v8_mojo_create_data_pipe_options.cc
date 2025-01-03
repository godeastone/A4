// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_mojo_create_data_pipe_options.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8MojoCreateDataPipeOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "capacityNumBytes",
    "elementNumBytes",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8MojoCreateDataPipeOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, MojoCreateDataPipeOptions& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8MojoCreateDataPipeOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> capacityNumBytesValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&capacityNumBytesValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (capacityNumBytesValue.IsEmpty() || capacityNumBytesValue->IsUndefined()) {
    // Do nothing.
  } else {
    uint32_t capacityNumBytesCppValue = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, capacityNumBytesValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setCapacityNumBytes(capacityNumBytesCppValue);
  }

  v8::Local<v8::Value> elementNumBytesValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&elementNumBytesValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (elementNumBytesValue.IsEmpty() || elementNumBytesValue->IsUndefined()) {
    // Do nothing.
  } else {
    uint32_t elementNumBytesCppValue = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, elementNumBytesValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setElementNumBytes(elementNumBytesCppValue);
  }
}

v8::Local<v8::Value> MojoCreateDataPipeOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8MojoCreateDataPipeOptions(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8MojoCreateDataPipeOptions(const MojoCreateDataPipeOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8MojoCreateDataPipeOptionsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> capacityNumBytesValue;
  bool capacityNumBytesHasValueOrDefault = false;
  if (impl.hasCapacityNumBytes()) {
    capacityNumBytesValue = v8::Integer::NewFromUnsigned(isolate, impl.capacityNumBytes());
    capacityNumBytesHasValueOrDefault = true;
  }
  if (capacityNumBytesHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), capacityNumBytesValue))) {
    return false;
  }

  v8::Local<v8::Value> elementNumBytesValue;
  bool elementNumBytesHasValueOrDefault = false;
  if (impl.hasElementNumBytes()) {
    elementNumBytesValue = v8::Integer::NewFromUnsigned(isolate, impl.elementNumBytes());
    elementNumBytesHasValueOrDefault = true;
  }
  if (elementNumBytesHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), elementNumBytesValue))) {
    return false;
  }

  return true;
}

MojoCreateDataPipeOptions NativeValueTraits<MojoCreateDataPipeOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  MojoCreateDataPipeOptions impl;
  V8MojoCreateDataPipeOptions::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
