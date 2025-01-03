// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_channel_splitter_options.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_node_options.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8ChannelSplitterOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "numberOfOutputs",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8ChannelSplitterOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, ChannelSplitterOptions& impl, ExceptionState& exceptionState) {
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

  const v8::Eternal<v8::Name>* keys = eternalV8ChannelSplitterOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> numberOfOutputsValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&numberOfOutputsValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (numberOfOutputsValue.IsEmpty() || numberOfOutputsValue->IsUndefined()) {
    // Do nothing.
  } else {
    uint32_t numberOfOutputsCppValue = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, numberOfOutputsValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setNumberOfOutputs(numberOfOutputsCppValue);
  }
}

v8::Local<v8::Value> ChannelSplitterOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8ChannelSplitterOptions(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8ChannelSplitterOptions(const ChannelSplitterOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8AudioNodeOptions(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8ChannelSplitterOptionsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> numberOfOutputsValue;
  bool numberOfOutputsHasValueOrDefault = false;
  if (impl.hasNumberOfOutputs()) {
    numberOfOutputsValue = v8::Integer::NewFromUnsigned(isolate, impl.numberOfOutputs());
    numberOfOutputsHasValueOrDefault = true;
  } else {
    numberOfOutputsValue = v8::Integer::NewFromUnsigned(isolate, 6u);
    numberOfOutputsHasValueOrDefault = true;
  }
  if (numberOfOutputsHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), numberOfOutputsValue))) {
    return false;
  }

  return true;
}

ChannelSplitterOptions NativeValueTraits<ChannelSplitterOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  ChannelSplitterOptions impl;
  V8ChannelSplitterOptions::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
