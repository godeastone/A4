// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_federated_credential_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_credential_data.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8FederatedCredentialInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "iconURL",
    "name",
    "protocol",
    "provider",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8FederatedCredentialInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, FederatedCredentialInit& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    exceptionState.ThrowTypeError("Missing required member(s): provider.");
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8CredentialData::ToImpl(isolate, v8Value, impl, exceptionState);
  if (exceptionState.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8FederatedCredentialInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> iconURLValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&iconURLValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (iconURLValue.IsEmpty() || iconURLValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> iconURLCppValue = NativeValueTraits<IDLUSVString>::NativeValue(isolate, iconURLValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setIconURL(iconURLCppValue);
  }

  v8::Local<v8::Value> nameValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&nameValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (nameValue.IsEmpty() || nameValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> nameCppValue = NativeValueTraits<IDLUSVString>::NativeValue(isolate, nameValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setName(nameCppValue);
  }

  v8::Local<v8::Value> protocolValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&protocolValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (protocolValue.IsEmpty() || protocolValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> protocolCppValue = protocolValue;
    if (!protocolCppValue.Prepare(exceptionState))
      return;
    impl.setProtocol(protocolCppValue);
  }

  v8::Local<v8::Value> providerValue;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&providerValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (providerValue.IsEmpty() || providerValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member provider is undefined.");
    return;
  } else {
    V8StringResource<> providerCppValue = NativeValueTraits<IDLUSVString>::NativeValue(isolate, providerValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setProvider(providerCppValue);
  }
}

v8::Local<v8::Value> FederatedCredentialInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8FederatedCredentialInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8FederatedCredentialInit(const FederatedCredentialInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8CredentialData(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8FederatedCredentialInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> iconURLValue;
  bool iconURLHasValueOrDefault = false;
  if (impl.hasIconURL()) {
    iconURLValue = V8String(isolate, impl.iconURL());
    iconURLHasValueOrDefault = true;
  }
  if (iconURLHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), iconURLValue))) {
    return false;
  }

  v8::Local<v8::Value> nameValue;
  bool nameHasValueOrDefault = false;
  if (impl.hasName()) {
    nameValue = V8String(isolate, impl.name());
    nameHasValueOrDefault = true;
  }
  if (nameHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), nameValue))) {
    return false;
  }

  v8::Local<v8::Value> protocolValue;
  bool protocolHasValueOrDefault = false;
  if (impl.hasProtocol()) {
    protocolValue = V8String(isolate, impl.protocol());
    protocolHasValueOrDefault = true;
  }
  if (protocolHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), protocolValue))) {
    return false;
  }

  v8::Local<v8::Value> providerValue;
  bool providerHasValueOrDefault = false;
  if (impl.hasProvider()) {
    providerValue = V8String(isolate, impl.provider());
    providerHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (providerHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), providerValue))) {
    return false;
  }

  return true;
}

FederatedCredentialInit NativeValueTraits<FederatedCredentialInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  FederatedCredentialInit impl;
  V8FederatedCredentialInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
