// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_get_notification_options.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8GetNotificationOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "tag",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8GetNotificationOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, GetNotificationOptions& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8GetNotificationOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> tagValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&tagValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (tagValue.IsEmpty() || tagValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> tagCppValue = tagValue;
    if (!tagCppValue.Prepare(exceptionState))
      return;
    impl.setTag(tagCppValue);
  }
}

v8::Local<v8::Value> GetNotificationOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8GetNotificationOptions(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8GetNotificationOptions(const GetNotificationOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8GetNotificationOptionsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> tagValue;
  bool tagHasValueOrDefault = false;
  if (impl.hasTag()) {
    tagValue = V8String(isolate, impl.tag());
    tagHasValueOrDefault = true;
  } else {
    tagValue = V8String(isolate, WTF::g_empty_string);
    tagHasValueOrDefault = true;
  }
  if (tagHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), tagValue))) {
    return false;
  }

  return true;
}

GetNotificationOptions NativeValueTraits<GetNotificationOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  GetNotificationOptions impl;
  V8GetNotificationOptions::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
