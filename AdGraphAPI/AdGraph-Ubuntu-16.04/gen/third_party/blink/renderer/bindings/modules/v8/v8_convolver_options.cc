// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_convolver_options.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_buffer.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_node_options.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8ConvolverOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "buffer",
    "disableNormalization",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8ConvolverOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, ConvolverOptions& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8AudioNodeOptions::ToImpl(isolate, v8Value, impl, exceptionState);
  if (exceptionState.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8ConvolverOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> bufferValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&bufferValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (bufferValue.IsEmpty() || bufferValue->IsUndefined()) {
    // Do nothing.
  } else if (bufferValue->IsNull()) {
    impl.setBufferToNull();
  } else {
    AudioBuffer* bufferCppValue = V8AudioBuffer::ToImplWithTypeCheck(isolate, bufferValue);
    if (!bufferCppValue) {
      exceptionState.ThrowTypeError("member buffer is not of type AudioBuffer.");
      return;
    }
    impl.setBuffer(bufferCppValue);
  }

  v8::Local<v8::Value> disableNormalizationValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&disableNormalizationValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (disableNormalizationValue.IsEmpty() || disableNormalizationValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool disableNormalizationCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, disableNormalizationValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setDisableNormalization(disableNormalizationCppValue);
  }
}

v8::Local<v8::Value> ConvolverOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8ConvolverOptions(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8ConvolverOptions(const ConvolverOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8AudioNodeOptions(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8ConvolverOptionsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> bufferValue;
  bool bufferHasValueOrDefault = false;
  if (impl.hasBuffer()) {
    bufferValue = ToV8(impl.buffer(), creationContext, isolate);
    bufferHasValueOrDefault = true;
  } else {
    bufferValue = v8::Null(isolate);
    bufferHasValueOrDefault = true;
  }
  if (bufferHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), bufferValue))) {
    return false;
  }

  v8::Local<v8::Value> disableNormalizationValue;
  bool disableNormalizationHasValueOrDefault = false;
  if (impl.hasDisableNormalization()) {
    disableNormalizationValue = v8::Boolean::New(isolate, impl.disableNormalization());
    disableNormalizationHasValueOrDefault = true;
  } else {
    disableNormalizationValue = v8::Boolean::New(isolate, false);
    disableNormalizationHasValueOrDefault = true;
  }
  if (disableNormalizationHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), disableNormalizationValue))) {
    return false;
  }

  return true;
}

ConvolverOptions NativeValueTraits<ConvolverOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  ConvolverOptions impl;
  V8ConvolverOptions::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
