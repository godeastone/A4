// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_app_banner_prompt_result.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8AppBannerPromptResultKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "outcome",
    "platform",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8AppBannerPromptResult::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, AppBannerPromptResult& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    exceptionState.ThrowTypeError("Missing required member(s): outcome, platform.");
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8AppBannerPromptResultKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> outcomeValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&outcomeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (outcomeValue.IsEmpty() || outcomeValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member outcome is undefined.");
    return;
  } else {
    V8StringResource<> outcomeCppValue = outcomeValue;
    if (!outcomeCppValue.Prepare(exceptionState))
      return;
    const char* validValues[] = {
        "accepted",
        "dismissed",
    };
    if (!IsValidEnum(outcomeCppValue, validValues, arraysize(validValues), "AppBannerPromptOutcome", exceptionState))
      return;
    impl.setOutcome(outcomeCppValue);
  }

  v8::Local<v8::Value> platformValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&platformValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (platformValue.IsEmpty() || platformValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member platform is undefined.");
    return;
  } else {
    V8StringResource<> platformCppValue = platformValue;
    if (!platformCppValue.Prepare(exceptionState))
      return;
    impl.setPlatform(platformCppValue);
  }
}

v8::Local<v8::Value> AppBannerPromptResult::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8AppBannerPromptResult(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8AppBannerPromptResult(const AppBannerPromptResult& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8AppBannerPromptResultKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> outcomeValue;
  bool outcomeHasValueOrDefault = false;
  if (impl.hasOutcome()) {
    outcomeValue = V8String(isolate, impl.outcome());
    outcomeHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (outcomeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), outcomeValue))) {
    return false;
  }

  v8::Local<v8::Value> platformValue;
  bool platformHasValueOrDefault = false;
  if (impl.hasPlatform()) {
    platformValue = V8String(isolate, impl.platform());
    platformHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (platformHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), platformValue))) {
    return false;
  }

  return true;
}

AppBannerPromptResult NativeValueTraits<AppBannerPromptResult>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  AppBannerPromptResult impl;
  V8AppBannerPromptResult::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
