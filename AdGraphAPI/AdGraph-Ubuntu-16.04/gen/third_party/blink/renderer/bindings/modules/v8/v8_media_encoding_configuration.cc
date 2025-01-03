// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_encoding_configuration.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_configuration.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8MediaEncodingConfigurationKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "type",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8MediaEncodingConfiguration::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, MediaEncodingConfiguration& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    exceptionState.ThrowTypeError("Missing required member(s): type.");
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8MediaConfiguration::ToImpl(isolate, v8Value, impl, exceptionState);
  if (exceptionState.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8MediaEncodingConfigurationKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> typeValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&typeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (typeValue.IsEmpty() || typeValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member type is undefined.");
    return;
  } else {
    V8StringResource<> typeCppValue = typeValue;
    if (!typeCppValue.Prepare(exceptionState))
      return;
    const char* validValues[] = {
        "record",
    };
    if (!IsValidEnum(typeCppValue, validValues, arraysize(validValues), "MediaEncodingType", exceptionState))
      return;
    impl.setType(typeCppValue);
  }
}

v8::Local<v8::Value> MediaEncodingConfiguration::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8MediaEncodingConfiguration(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8MediaEncodingConfiguration(const MediaEncodingConfiguration& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8MediaConfiguration(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8MediaEncodingConfigurationKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> typeValue;
  bool typeHasValueOrDefault = false;
  if (impl.hasType()) {
    typeValue = V8String(isolate, impl.type());
    typeHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (typeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), typeValue))) {
    return false;
  }

  return true;
}

MediaEncodingConfiguration NativeValueTraits<MediaEncodingConfiguration>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  MediaEncodingConfiguration impl;
  V8MediaEncodingConfiguration::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
