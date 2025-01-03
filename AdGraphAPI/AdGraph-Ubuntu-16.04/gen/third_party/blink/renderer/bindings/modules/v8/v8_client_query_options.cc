// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_client_query_options.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8ClientQueryOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "includeUncontrolled",
    "type",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8ClientQueryOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, ClientQueryOptions& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8ClientQueryOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> includeUncontrolledValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&includeUncontrolledValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (includeUncontrolledValue.IsEmpty() || includeUncontrolledValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool includeUncontrolledCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, includeUncontrolledValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setIncludeUncontrolled(includeUncontrolledCppValue);
  }

  v8::Local<v8::Value> typeValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&typeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (typeValue.IsEmpty() || typeValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> typeCppValue = typeValue;
    if (!typeCppValue.Prepare(exceptionState))
      return;
    const char* validValues[] = {
        "window",
        "worker",
        "sharedworker",
        "all",
    };
    if (!IsValidEnum(typeCppValue, validValues, arraysize(validValues), "ClientType", exceptionState))
      return;
    impl.setType(typeCppValue);
  }
}

v8::Local<v8::Value> ClientQueryOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8ClientQueryOptions(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8ClientQueryOptions(const ClientQueryOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8ClientQueryOptionsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> includeUncontrolledValue;
  bool includeUncontrolledHasValueOrDefault = false;
  if (impl.hasIncludeUncontrolled()) {
    includeUncontrolledValue = v8::Boolean::New(isolate, impl.includeUncontrolled());
    includeUncontrolledHasValueOrDefault = true;
  } else {
    includeUncontrolledValue = v8::Boolean::New(isolate, false);
    includeUncontrolledHasValueOrDefault = true;
  }
  if (includeUncontrolledHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), includeUncontrolledValue))) {
    return false;
  }

  v8::Local<v8::Value> typeValue;
  bool typeHasValueOrDefault = false;
  if (impl.hasType()) {
    typeValue = V8String(isolate, impl.type());
    typeHasValueOrDefault = true;
  } else {
    typeValue = V8String(isolate, "window");
    typeHasValueOrDefault = true;
  }
  if (typeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), typeValue))) {
    return false;
  }

  return true;
}

ClientQueryOptions NativeValueTraits<ClientQueryOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  ClientQueryOptions impl;
  V8ClientQueryOptions::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
