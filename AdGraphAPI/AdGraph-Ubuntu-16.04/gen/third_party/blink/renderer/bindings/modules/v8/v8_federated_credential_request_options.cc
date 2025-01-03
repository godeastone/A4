// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_federated_credential_request_options.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8FederatedCredentialRequestOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "protocols",
    "providers",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8FederatedCredentialRequestOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, FederatedCredentialRequestOptions& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8FederatedCredentialRequestOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> protocolsValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&protocolsValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (protocolsValue.IsEmpty() || protocolsValue->IsUndefined()) {
    // Do nothing.
  } else {
    Vector<String> protocolsCppValue = NativeValueTraits<IDLSequence<IDLString>>::NativeValue(isolate, protocolsValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setProtocols(protocolsCppValue);
  }

  v8::Local<v8::Value> providersValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&providersValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (providersValue.IsEmpty() || providersValue->IsUndefined()) {
    // Do nothing.
  } else {
    Vector<String> providersCppValue = NativeValueTraits<IDLSequence<IDLString>>::NativeValue(isolate, providersValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setProviders(providersCppValue);
  }
}

v8::Local<v8::Value> FederatedCredentialRequestOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8FederatedCredentialRequestOptions(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8FederatedCredentialRequestOptions(const FederatedCredentialRequestOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8FederatedCredentialRequestOptionsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> protocolsValue;
  bool protocolsHasValueOrDefault = false;
  if (impl.hasProtocols()) {
    protocolsValue = ToV8(impl.protocols(), creationContext, isolate);
    protocolsHasValueOrDefault = true;
  }
  if (protocolsHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), protocolsValue))) {
    return false;
  }

  v8::Local<v8::Value> providersValue;
  bool providersHasValueOrDefault = false;
  if (impl.hasProviders()) {
    providersValue = ToV8(impl.providers(), creationContext, isolate);
    providersHasValueOrDefault = true;
  }
  if (providersHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), providersValue))) {
    return false;
  }

  return true;
}

FederatedCredentialRequestOptions NativeValueTraits<FederatedCredentialRequestOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  FederatedCredentialRequestOptions impl;
  V8FederatedCredentialRequestOptions::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
