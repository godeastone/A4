// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_application_cache_error_event_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_init.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8ApplicationCacheErrorEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "message",
    "reason",
    "status",
    "url",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8ApplicationCacheErrorEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, ApplicationCacheErrorEventInit& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8EventInit::ToImpl(isolate, v8Value, impl, exceptionState);
  if (exceptionState.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8ApplicationCacheErrorEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> messageValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&messageValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (messageValue.IsEmpty() || messageValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> messageCppValue = messageValue;
    if (!messageCppValue.Prepare(exceptionState))
      return;
    impl.setMessage(messageCppValue);
  }

  v8::Local<v8::Value> reasonValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&reasonValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (reasonValue.IsEmpty() || reasonValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> reasonCppValue = reasonValue;
    if (!reasonCppValue.Prepare(exceptionState))
      return;
    impl.setReason(reasonCppValue);
  }

  v8::Local<v8::Value> statusValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&statusValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (statusValue.IsEmpty() || statusValue->IsUndefined()) {
    // Do nothing.
  } else {
    uint16_t statusCppValue = NativeValueTraits<IDLUnsignedShort>::NativeValue(isolate, statusValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setStatus(statusCppValue);
  }

  v8::Local<v8::Value> urlValue;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&urlValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (urlValue.IsEmpty() || urlValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> urlCppValue = urlValue;
    if (!urlCppValue.Prepare(exceptionState))
      return;
    impl.setURL(urlCppValue);
  }
}

v8::Local<v8::Value> ApplicationCacheErrorEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8ApplicationCacheErrorEventInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8ApplicationCacheErrorEventInit(const ApplicationCacheErrorEventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8ApplicationCacheErrorEventInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> messageValue;
  bool messageHasValueOrDefault = false;
  if (impl.hasMessage()) {
    messageValue = V8String(isolate, impl.message());
    messageHasValueOrDefault = true;
  }
  if (messageHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), messageValue))) {
    return false;
  }

  v8::Local<v8::Value> reasonValue;
  bool reasonHasValueOrDefault = false;
  if (impl.hasReason()) {
    reasonValue = V8String(isolate, impl.reason());
    reasonHasValueOrDefault = true;
  }
  if (reasonHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), reasonValue))) {
    return false;
  }

  v8::Local<v8::Value> statusValue;
  bool statusHasValueOrDefault = false;
  if (impl.hasStatus()) {
    statusValue = v8::Integer::NewFromUnsigned(isolate, impl.status());
    statusHasValueOrDefault = true;
  }
  if (statusHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), statusValue))) {
    return false;
  }

  v8::Local<v8::Value> urlValue;
  bool urlHasValueOrDefault = false;
  if (impl.hasURL()) {
    urlValue = V8String(isolate, impl.url());
    urlHasValueOrDefault = true;
  }
  if (urlHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), urlValue))) {
    return false;
  }

  return true;
}

ApplicationCacheErrorEventInit NativeValueTraits<ApplicationCacheErrorEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  ApplicationCacheErrorEventInit impl;
  V8ApplicationCacheErrorEventInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
