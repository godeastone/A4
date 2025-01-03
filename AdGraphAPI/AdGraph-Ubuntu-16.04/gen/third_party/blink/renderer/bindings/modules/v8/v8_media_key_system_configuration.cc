// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_key_system_configuration.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_key_system_media_capability.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8MediaKeySystemConfigurationKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "audioCapabilities",
    "distinctiveIdentifier",
    "initDataTypes",
    "label",
    "persistentState",
    "sessionTypes",
    "videoCapabilities",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8MediaKeySystemConfiguration::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, MediaKeySystemConfiguration& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8MediaKeySystemConfigurationKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> audioCapabilitiesValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&audioCapabilitiesValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (audioCapabilitiesValue.IsEmpty() || audioCapabilitiesValue->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<MediaKeySystemMediaCapability> audioCapabilitiesCppValue = NativeValueTraits<IDLSequence<MediaKeySystemMediaCapability>>::NativeValue(isolate, audioCapabilitiesValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setAudioCapabilities(audioCapabilitiesCppValue);
  }

  v8::Local<v8::Value> distinctiveIdentifierValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&distinctiveIdentifierValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (distinctiveIdentifierValue.IsEmpty() || distinctiveIdentifierValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> distinctiveIdentifierCppValue = distinctiveIdentifierValue;
    if (!distinctiveIdentifierCppValue.Prepare(exceptionState))
      return;
    const char* validValues[] = {
        "required",
        "optional",
        "not-allowed",
    };
    if (!IsValidEnum(distinctiveIdentifierCppValue, validValues, arraysize(validValues), "MediaKeysRequirement", exceptionState))
      return;
    impl.setDistinctiveIdentifier(distinctiveIdentifierCppValue);
  }

  v8::Local<v8::Value> initDataTypesValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&initDataTypesValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (initDataTypesValue.IsEmpty() || initDataTypesValue->IsUndefined()) {
    // Do nothing.
  } else {
    Vector<String> initDataTypesCppValue = NativeValueTraits<IDLSequence<IDLString>>::NativeValue(isolate, initDataTypesValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setInitDataTypes(initDataTypesCppValue);
  }

  v8::Local<v8::Value> labelValue;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&labelValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (labelValue.IsEmpty() || labelValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> labelCppValue = labelValue;
    if (!labelCppValue.Prepare(exceptionState))
      return;
    impl.setLabel(labelCppValue);
  }

  v8::Local<v8::Value> persistentStateValue;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&persistentStateValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (persistentStateValue.IsEmpty() || persistentStateValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> persistentStateCppValue = persistentStateValue;
    if (!persistentStateCppValue.Prepare(exceptionState))
      return;
    const char* validValues[] = {
        "required",
        "optional",
        "not-allowed",
    };
    if (!IsValidEnum(persistentStateCppValue, validValues, arraysize(validValues), "MediaKeysRequirement", exceptionState))
      return;
    impl.setPersistentState(persistentStateCppValue);
  }

  v8::Local<v8::Value> sessionTypesValue;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&sessionTypesValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (sessionTypesValue.IsEmpty() || sessionTypesValue->IsUndefined()) {
    // Do nothing.
  } else {
    Vector<String> sessionTypesCppValue = NativeValueTraits<IDLSequence<IDLString>>::NativeValue(isolate, sessionTypesValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setSessionTypes(sessionTypesCppValue);
  }

  v8::Local<v8::Value> videoCapabilitiesValue;
  if (!v8Object->Get(context, keys[6].Get(isolate)).ToLocal(&videoCapabilitiesValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (videoCapabilitiesValue.IsEmpty() || videoCapabilitiesValue->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<MediaKeySystemMediaCapability> videoCapabilitiesCppValue = NativeValueTraits<IDLSequence<MediaKeySystemMediaCapability>>::NativeValue(isolate, videoCapabilitiesValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setVideoCapabilities(videoCapabilitiesCppValue);
  }
}

v8::Local<v8::Value> MediaKeySystemConfiguration::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8MediaKeySystemConfiguration(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8MediaKeySystemConfiguration(const MediaKeySystemConfiguration& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8MediaKeySystemConfigurationKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> audioCapabilitiesValue;
  bool audioCapabilitiesHasValueOrDefault = false;
  if (impl.hasAudioCapabilities()) {
    audioCapabilitiesValue = ToV8(impl.audioCapabilities(), creationContext, isolate);
    audioCapabilitiesHasValueOrDefault = true;
  } else {
    audioCapabilitiesValue = ToV8(HeapVector<MediaKeySystemMediaCapability>(), creationContext, isolate);
    audioCapabilitiesHasValueOrDefault = true;
  }
  if (audioCapabilitiesHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), audioCapabilitiesValue))) {
    return false;
  }

  v8::Local<v8::Value> distinctiveIdentifierValue;
  bool distinctiveIdentifierHasValueOrDefault = false;
  if (impl.hasDistinctiveIdentifier()) {
    distinctiveIdentifierValue = V8String(isolate, impl.distinctiveIdentifier());
    distinctiveIdentifierHasValueOrDefault = true;
  } else {
    distinctiveIdentifierValue = V8String(isolate, "optional");
    distinctiveIdentifierHasValueOrDefault = true;
  }
  if (distinctiveIdentifierHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), distinctiveIdentifierValue))) {
    return false;
  }

  v8::Local<v8::Value> initDataTypesValue;
  bool initDataTypesHasValueOrDefault = false;
  if (impl.hasInitDataTypes()) {
    initDataTypesValue = ToV8(impl.initDataTypes(), creationContext, isolate);
    initDataTypesHasValueOrDefault = true;
  } else {
    initDataTypesValue = ToV8(Vector<String>(), creationContext, isolate);
    initDataTypesHasValueOrDefault = true;
  }
  if (initDataTypesHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), initDataTypesValue))) {
    return false;
  }

  v8::Local<v8::Value> labelValue;
  bool labelHasValueOrDefault = false;
  if (impl.hasLabel()) {
    labelValue = V8String(isolate, impl.label());
    labelHasValueOrDefault = true;
  } else {
    labelValue = V8String(isolate, WTF::g_empty_string);
    labelHasValueOrDefault = true;
  }
  if (labelHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), labelValue))) {
    return false;
  }

  v8::Local<v8::Value> persistentStateValue;
  bool persistentStateHasValueOrDefault = false;
  if (impl.hasPersistentState()) {
    persistentStateValue = V8String(isolate, impl.persistentState());
    persistentStateHasValueOrDefault = true;
  } else {
    persistentStateValue = V8String(isolate, "optional");
    persistentStateHasValueOrDefault = true;
  }
  if (persistentStateHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[4].Get(isolate), persistentStateValue))) {
    return false;
  }

  v8::Local<v8::Value> sessionTypesValue;
  bool sessionTypesHasValueOrDefault = false;
  if (impl.hasSessionTypes()) {
    sessionTypesValue = ToV8(impl.sessionTypes(), creationContext, isolate);
    sessionTypesHasValueOrDefault = true;
  }
  if (sessionTypesHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[5].Get(isolate), sessionTypesValue))) {
    return false;
  }

  v8::Local<v8::Value> videoCapabilitiesValue;
  bool videoCapabilitiesHasValueOrDefault = false;
  if (impl.hasVideoCapabilities()) {
    videoCapabilitiesValue = ToV8(impl.videoCapabilities(), creationContext, isolate);
    videoCapabilitiesHasValueOrDefault = true;
  } else {
    videoCapabilitiesValue = ToV8(HeapVector<MediaKeySystemMediaCapability>(), creationContext, isolate);
    videoCapabilitiesHasValueOrDefault = true;
  }
  if (videoCapabilitiesHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[6].Get(isolate), videoCapabilitiesValue))) {
    return false;
  }

  return true;
}

MediaKeySystemConfiguration NativeValueTraits<MediaKeySystemConfiguration>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  MediaKeySystemConfiguration impl;
  V8MediaKeySystemConfiguration::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
