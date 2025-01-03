// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_param_descriptor.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8AudioParamDescriptorKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "automationRate",
    "defaultValue",
    "maxValue",
    "minValue",
    "name",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8AudioParamDescriptor::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, AudioParamDescriptor& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    exceptionState.ThrowTypeError("Missing required member(s): name.");
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8AudioParamDescriptorKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> automationRateValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&automationRateValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (automationRateValue.IsEmpty() || automationRateValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> automationRateCppValue = automationRateValue;
    if (!automationRateCppValue.Prepare(exceptionState))
      return;
    const char* validValues[] = {
        "a-rate",
        "k-rate",
    };
    if (!IsValidEnum(automationRateCppValue, validValues, arraysize(validValues), "AutomationRate", exceptionState))
      return;
    impl.setAutomationRate(automationRateCppValue);
  }

  v8::Local<v8::Value> defaultValueValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&defaultValueValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (defaultValueValue.IsEmpty() || defaultValueValue->IsUndefined()) {
    // Do nothing.
  } else {
    float defaultValueCppValue = NativeValueTraits<IDLFloat>::NativeValue(isolate, defaultValueValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setDefaultValue(defaultValueCppValue);
  }

  v8::Local<v8::Value> maxValueValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&maxValueValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (maxValueValue.IsEmpty() || maxValueValue->IsUndefined()) {
    // Do nothing.
  } else {
    float maxValueCppValue = NativeValueTraits<IDLFloat>::NativeValue(isolate, maxValueValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setMaxValue(maxValueCppValue);
  }

  v8::Local<v8::Value> minValueValue;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&minValueValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (minValueValue.IsEmpty() || minValueValue->IsUndefined()) {
    // Do nothing.
  } else {
    float minValueCppValue = NativeValueTraits<IDLFloat>::NativeValue(isolate, minValueValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setMinValue(minValueCppValue);
  }

  v8::Local<v8::Value> nameValue;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&nameValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (nameValue.IsEmpty() || nameValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member name is undefined.");
    return;
  } else {
    V8StringResource<> nameCppValue = nameValue;
    if (!nameCppValue.Prepare(exceptionState))
      return;
    impl.setName(nameCppValue);
  }
}

v8::Local<v8::Value> AudioParamDescriptor::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8AudioParamDescriptor(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8AudioParamDescriptor(const AudioParamDescriptor& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8AudioParamDescriptorKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> automationRateValue;
  bool automationRateHasValueOrDefault = false;
  if (impl.hasAutomationRate()) {
    automationRateValue = V8String(isolate, impl.automationRate());
    automationRateHasValueOrDefault = true;
  } else {
    automationRateValue = V8String(isolate, "a-rate");
    automationRateHasValueOrDefault = true;
  }
  if (automationRateHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), automationRateValue))) {
    return false;
  }

  v8::Local<v8::Value> defaultValueValue;
  bool defaultValueHasValueOrDefault = false;
  if (impl.hasDefaultValue()) {
    defaultValueValue = v8::Number::New(isolate, impl.defaultValue());
    defaultValueHasValueOrDefault = true;
  } else {
    defaultValueValue = v8::Number::New(isolate, 0);
    defaultValueHasValueOrDefault = true;
  }
  if (defaultValueHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), defaultValueValue))) {
    return false;
  }

  v8::Local<v8::Value> maxValueValue;
  bool maxValueHasValueOrDefault = false;
  if (impl.hasMaxValue()) {
    maxValueValue = v8::Number::New(isolate, impl.maxValue());
    maxValueHasValueOrDefault = true;
  } else {
    maxValueValue = v8::Number::New(isolate, 3.40282e+38);
    maxValueHasValueOrDefault = true;
  }
  if (maxValueHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), maxValueValue))) {
    return false;
  }

  v8::Local<v8::Value> minValueValue;
  bool minValueHasValueOrDefault = false;
  if (impl.hasMinValue()) {
    minValueValue = v8::Number::New(isolate, impl.minValue());
    minValueHasValueOrDefault = true;
  } else {
    minValueValue = v8::Number::New(isolate, -3.40282e+38);
    minValueHasValueOrDefault = true;
  }
  if (minValueHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), minValueValue))) {
    return false;
  }

  v8::Local<v8::Value> nameValue;
  bool nameHasValueOrDefault = false;
  if (impl.hasName()) {
    nameValue = V8String(isolate, impl.name());
    nameHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (nameHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[4].Get(isolate), nameValue))) {
    return false;
  }

  return true;
}

AudioParamDescriptor NativeValueTraits<AudioParamDescriptor>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  AudioParamDescriptor impl;
  V8AudioParamDescriptor::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
