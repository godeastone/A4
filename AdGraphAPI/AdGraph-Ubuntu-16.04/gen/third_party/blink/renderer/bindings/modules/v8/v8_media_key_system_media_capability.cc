// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_key_system_media_capability.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8MediaKeySystemMediaCapabilityKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "contentType",
    "robustness",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8MediaKeySystemMediaCapability::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, MediaKeySystemMediaCapability& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8MediaKeySystemMediaCapabilityKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> contentTypeValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&contentTypeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (contentTypeValue.IsEmpty() || contentTypeValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> contentTypeCppValue = contentTypeValue;
    if (!contentTypeCppValue.Prepare(exceptionState))
      return;
    impl.setContentType(contentTypeCppValue);
  }

  v8::Local<v8::Value> robustnessValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&robustnessValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (robustnessValue.IsEmpty() || robustnessValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> robustnessCppValue = robustnessValue;
    if (!robustnessCppValue.Prepare(exceptionState))
      return;
    impl.setRobustness(robustnessCppValue);
  }
}

v8::Local<v8::Value> MediaKeySystemMediaCapability::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8MediaKeySystemMediaCapability(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8MediaKeySystemMediaCapability(const MediaKeySystemMediaCapability& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8MediaKeySystemMediaCapabilityKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> contentTypeValue;
  bool contentTypeHasValueOrDefault = false;
  if (impl.hasContentType()) {
    contentTypeValue = V8String(isolate, impl.contentType());
    contentTypeHasValueOrDefault = true;
  } else {
    contentTypeValue = V8String(isolate, WTF::g_empty_string);
    contentTypeHasValueOrDefault = true;
  }
  if (contentTypeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), contentTypeValue))) {
    return false;
  }

  v8::Local<v8::Value> robustnessValue;
  bool robustnessHasValueOrDefault = false;
  if (impl.hasRobustness()) {
    robustnessValue = V8String(isolate, impl.robustness());
    robustnessHasValueOrDefault = true;
  } else {
    robustnessValue = V8String(isolate, WTF::g_empty_string);
    robustnessHasValueOrDefault = true;
  }
  if (robustnessHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), robustnessValue))) {
    return false;
  }

  return true;
}

MediaKeySystemMediaCapability NativeValueTraits<MediaKeySystemMediaCapability>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  MediaKeySystemMediaCapability impl;
  V8MediaKeySystemMediaCapability::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
