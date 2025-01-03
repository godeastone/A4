// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_node_options.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8AudioNodeOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "channelCount",
    "channelCountMode",
    "channelInterpretation",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8AudioNodeOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, AudioNodeOptions& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8AudioNodeOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> channelCountValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&channelCountValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (channelCountValue.IsEmpty() || channelCountValue->IsUndefined()) {
    // Do nothing.
  } else {
    uint32_t channelCountCppValue = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, channelCountValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setChannelCount(channelCountCppValue);
  }

  v8::Local<v8::Value> channelCountModeValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&channelCountModeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (channelCountModeValue.IsEmpty() || channelCountModeValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> channelCountModeCppValue = channelCountModeValue;
    if (!channelCountModeCppValue.Prepare(exceptionState))
      return;
    const char* validValues[] = {
        "max",
        "clamped-max",
        "explicit",
    };
    if (!IsValidEnum(channelCountModeCppValue, validValues, arraysize(validValues), "ChannelCountMode", exceptionState))
      return;
    impl.setChannelCountMode(channelCountModeCppValue);
  }

  v8::Local<v8::Value> channelInterpretationValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&channelInterpretationValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (channelInterpretationValue.IsEmpty() || channelInterpretationValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> channelInterpretationCppValue = channelInterpretationValue;
    if (!channelInterpretationCppValue.Prepare(exceptionState))
      return;
    const char* validValues[] = {
        "speakers",
        "discrete",
    };
    if (!IsValidEnum(channelInterpretationCppValue, validValues, arraysize(validValues), "ChannelInterpretation", exceptionState))
      return;
    impl.setChannelInterpretation(channelInterpretationCppValue);
  }
}

v8::Local<v8::Value> AudioNodeOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8AudioNodeOptions(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8AudioNodeOptions(const AudioNodeOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8AudioNodeOptionsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> channelCountValue;
  bool channelCountHasValueOrDefault = false;
  if (impl.hasChannelCount()) {
    channelCountValue = v8::Integer::NewFromUnsigned(isolate, impl.channelCount());
    channelCountHasValueOrDefault = true;
  }
  if (channelCountHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), channelCountValue))) {
    return false;
  }

  v8::Local<v8::Value> channelCountModeValue;
  bool channelCountModeHasValueOrDefault = false;
  if (impl.hasChannelCountMode()) {
    channelCountModeValue = V8String(isolate, impl.channelCountMode());
    channelCountModeHasValueOrDefault = true;
  }
  if (channelCountModeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), channelCountModeValue))) {
    return false;
  }

  v8::Local<v8::Value> channelInterpretationValue;
  bool channelInterpretationHasValueOrDefault = false;
  if (impl.hasChannelInterpretation()) {
    channelInterpretationValue = V8String(isolate, impl.channelInterpretation());
    channelInterpretationHasValueOrDefault = true;
  }
  if (channelInterpretationHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), channelInterpretationValue))) {
    return false;
  }

  return true;
}

AudioNodeOptions NativeValueTraits<AudioNodeOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  AudioNodeOptions impl;
  V8AudioNodeOptions::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
