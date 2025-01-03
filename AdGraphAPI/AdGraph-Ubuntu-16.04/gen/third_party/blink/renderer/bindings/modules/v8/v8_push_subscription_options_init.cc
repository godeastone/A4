// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_push_subscription_options_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer_view.h"
#include "third_party/blink/renderer/core/typed_arrays/array_buffer_view_helpers.h"
#include "third_party/blink/renderer/core/typed_arrays/flexible_array_buffer_view.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8PushSubscriptionOptionsInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "applicationServerKey",
    "userVisibleOnly",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8PushSubscriptionOptionsInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, PushSubscriptionOptionsInit& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8PushSubscriptionOptionsInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> applicationServerKeyValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&applicationServerKeyValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (applicationServerKeyValue.IsEmpty() || applicationServerKeyValue->IsUndefined()) {
    // Do nothing.
  } else if (applicationServerKeyValue->IsNull()) {
    impl.setApplicationServerKeyToNull();
  } else {
    ArrayBufferOrArrayBufferView applicationServerKeyCppValue;
    V8ArrayBufferOrArrayBufferView::ToImpl(isolate, applicationServerKeyValue, applicationServerKeyCppValue, UnionTypeConversionMode::kNullable, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setApplicationServerKey(applicationServerKeyCppValue);
  }

  v8::Local<v8::Value> userVisibleOnlyValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&userVisibleOnlyValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (userVisibleOnlyValue.IsEmpty() || userVisibleOnlyValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool userVisibleOnlyCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, userVisibleOnlyValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setUserVisibleOnly(userVisibleOnlyCppValue);
  }
}

v8::Local<v8::Value> PushSubscriptionOptionsInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8PushSubscriptionOptionsInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8PushSubscriptionOptionsInit(const PushSubscriptionOptionsInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8PushSubscriptionOptionsInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> applicationServerKeyValue;
  bool applicationServerKeyHasValueOrDefault = false;
  if (impl.hasApplicationServerKey()) {
    applicationServerKeyValue = ToV8(impl.applicationServerKey(), creationContext, isolate);
    applicationServerKeyHasValueOrDefault = true;
  } else {
    applicationServerKeyValue = v8::Null(isolate);
    applicationServerKeyHasValueOrDefault = true;
  }
  if (applicationServerKeyHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), applicationServerKeyValue))) {
    return false;
  }

  v8::Local<v8::Value> userVisibleOnlyValue;
  bool userVisibleOnlyHasValueOrDefault = false;
  if (impl.hasUserVisibleOnly()) {
    userVisibleOnlyValue = v8::Boolean::New(isolate, impl.userVisibleOnly());
    userVisibleOnlyHasValueOrDefault = true;
  } else {
    userVisibleOnlyValue = v8::Boolean::New(isolate, false);
    userVisibleOnlyHasValueOrDefault = true;
  }
  if (userVisibleOnlyHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), userVisibleOnlyValue))) {
    return false;
  }

  return true;
}

PushSubscriptionOptionsInit NativeValueTraits<PushSubscriptionOptionsInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  PushSubscriptionOptionsInit impl;
  V8PushSubscriptionOptionsInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
