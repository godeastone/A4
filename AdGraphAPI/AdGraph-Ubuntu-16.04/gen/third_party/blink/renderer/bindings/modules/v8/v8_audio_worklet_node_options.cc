// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_worklet_node_options.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_node_options.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8AudioWorkletNodeOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "numberOfInputs",
    "numberOfOutputs",
    "outputChannelCount",
    "parameterData",
    "processorOptions",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8AudioWorkletNodeOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, AudioWorkletNodeOptions& impl, ExceptionState& exceptionState) {
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

  const v8::Eternal<v8::Name>* keys = eternalV8AudioWorkletNodeOptionsKeys(isolate);
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

  v8::Local<v8::Value> numberOfOutputsValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&numberOfOutputsValue)) {
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

  v8::Local<v8::Value> outputChannelCountValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&outputChannelCountValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (outputChannelCountValue.IsEmpty() || outputChannelCountValue->IsUndefined()) {
    // Do nothing.
  } else {
    Vector<uint32_t> outputChannelCountCppValue = NativeValueTraits<IDLSequence<IDLUnsignedLong>>::NativeValue(isolate, outputChannelCountValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setOutputChannelCount(outputChannelCountCppValue);
  }

  v8::Local<v8::Value> parameterDataValue;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&parameterDataValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (parameterDataValue.IsEmpty() || parameterDataValue->IsUndefined()) {
    // Do nothing.
  } else {
    Vector<std::pair<String, double>> parameterDataCppValue = NativeValueTraits<IDLRecord<IDLString, IDLDouble>>::NativeValue(isolate, parameterDataValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setParameterData(parameterDataCppValue);
  }

  v8::Local<v8::Value> processorOptionsValue;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&processorOptionsValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (processorOptionsValue.IsEmpty() || processorOptionsValue->IsUndefined()) {
    // Do nothing.
  } else {
    ScriptValue processorOptionsCppValue = ScriptValue(ScriptState::Current(isolate), processorOptionsValue);
    if (!processorOptionsCppValue.IsObject()) {
      exceptionState.ThrowTypeError("member processorOptions is not an object.");
      return;
    }
    impl.setProcessorOptions(processorOptionsCppValue);
  }
}

v8::Local<v8::Value> AudioWorkletNodeOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8AudioWorkletNodeOptions(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8AudioWorkletNodeOptions(const AudioWorkletNodeOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8AudioNodeOptions(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8AudioWorkletNodeOptionsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> numberOfInputsValue;
  bool numberOfInputsHasValueOrDefault = false;
  if (impl.hasNumberOfInputs()) {
    numberOfInputsValue = v8::Integer::NewFromUnsigned(isolate, impl.numberOfInputs());
    numberOfInputsHasValueOrDefault = true;
  } else {
    numberOfInputsValue = v8::Integer::NewFromUnsigned(isolate, 1u);
    numberOfInputsHasValueOrDefault = true;
  }
  if (numberOfInputsHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), numberOfInputsValue))) {
    return false;
  }

  v8::Local<v8::Value> numberOfOutputsValue;
  bool numberOfOutputsHasValueOrDefault = false;
  if (impl.hasNumberOfOutputs()) {
    numberOfOutputsValue = v8::Integer::NewFromUnsigned(isolate, impl.numberOfOutputs());
    numberOfOutputsHasValueOrDefault = true;
  } else {
    numberOfOutputsValue = v8::Integer::NewFromUnsigned(isolate, 1u);
    numberOfOutputsHasValueOrDefault = true;
  }
  if (numberOfOutputsHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), numberOfOutputsValue))) {
    return false;
  }

  v8::Local<v8::Value> outputChannelCountValue;
  bool outputChannelCountHasValueOrDefault = false;
  if (impl.hasOutputChannelCount()) {
    outputChannelCountValue = ToV8(impl.outputChannelCount(), creationContext, isolate);
    outputChannelCountHasValueOrDefault = true;
  }
  if (outputChannelCountHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), outputChannelCountValue))) {
    return false;
  }

  v8::Local<v8::Value> parameterDataValue;
  bool parameterDataHasValueOrDefault = false;
  if (impl.hasParameterData()) {
    parameterDataValue = ToV8(impl.parameterData(), creationContext, isolate);
    parameterDataHasValueOrDefault = true;
  }
  if (parameterDataHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), parameterDataValue))) {
    return false;
  }

  v8::Local<v8::Value> processorOptionsValue;
  bool processorOptionsHasValueOrDefault = false;
  if (impl.hasProcessorOptions()) {
    DCHECK(impl.processorOptions().IsObject());
    processorOptionsValue = impl.processorOptions().V8Value();
    processorOptionsHasValueOrDefault = true;
  }
  if (processorOptionsHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[4].Get(isolate), processorOptionsValue))) {
    return false;
  }

  return true;
}

AudioWorkletNodeOptions NativeValueTraits<AudioWorkletNodeOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  AudioWorkletNodeOptions impl;
  V8AudioWorkletNodeOptions::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
