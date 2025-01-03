// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_channel_merger_options.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_node_options.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8ChannelMergerOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "numberOfInputs",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8ChannelMergerOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, ChannelMergerOptions& impl, ExceptionState& exceptionState) {
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

  const v8::Eternal<v8::Name>* keys = eternalV8ChannelMergerOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> numberOfInputsValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&numberOfInputsValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (numberOfInputsValue.IsEmpty() || numberOfInputsValue->IsUndefined()) {
    // Do nothing.
  } else {
    uint32_t numberOfInputsCppValue = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, numberOfInputsValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setNumberOfInputs(numberOfInputsCppValue);
  }
}

v8::Local<v8::Value> ChannelMergerOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8ChannelMergerOptions(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8ChannelMergerOptions(const ChannelMergerOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8AudioNodeOptions(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8ChannelMergerOptionsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> numberOfInputsValue;
  bool numberOfInputsHasValueOrDefault = false;
  if (impl.hasNumberOfInputs()) {
    numberOfInputsValue = v8::Integer::NewFromUnsigned(isolate, impl.numberOfInputs());
    numberOfInputsHasValueOrDefault = true;
  } else {
    numberOfInputsValue = v8::Integer::NewFromUnsigned(isolate, 6u);
    numberOfInputsHasValueOrDefault = true;
  }
  if (numberOfInputsHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), numberOfInputsValue))) {
    return false;
  }

  return true;
}

ChannelMergerOptions NativeValueTraits<ChannelMergerOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  ChannelMergerOptions impl;
  V8ChannelMergerOptions::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
