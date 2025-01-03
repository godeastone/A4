// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_public_key_credential_parameters.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8PublicKeyCredentialParametersKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "alg",
    "type",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8PublicKeyCredentialParameters::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, PublicKeyCredentialParameters& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    exceptionState.ThrowTypeError("Missing required member(s): alg, type.");
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8PublicKeyCredentialParametersKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> algValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&algValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (algValue.IsEmpty() || algValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member alg is undefined.");
    return;
  } else {
    int32_t algCppValue = NativeValueTraits<IDLLong>::NativeValue(isolate, algValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setAlg(algCppValue);
  }

  v8::Local<v8::Value> typeValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&typeValue)) {
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
        "public-key",
    };
    if (!IsValidEnum(typeCppValue, validValues, arraysize(validValues), "PublicKeyCredentialType", exceptionState))
      return;
    impl.setType(typeCppValue);
  }
}

v8::Local<v8::Value> PublicKeyCredentialParameters::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8PublicKeyCredentialParameters(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8PublicKeyCredentialParameters(const PublicKeyCredentialParameters& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8PublicKeyCredentialParametersKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> algValue;
  bool algHasValueOrDefault = false;
  if (impl.hasAlg()) {
    algValue = v8::Integer::New(isolate, impl.alg());
    algHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (algHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), algValue))) {
    return false;
  }

  v8::Local<v8::Value> typeValue;
  bool typeHasValueOrDefault = false;
  if (impl.hasType()) {
    typeValue = V8String(isolate, impl.type());
    typeHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (typeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), typeValue))) {
    return false;
  }

  return true;
}

PublicKeyCredentialParameters NativeValueTraits<PublicKeyCredentialParameters>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  PublicKeyCredentialParameters impl;
  V8PublicKeyCredentialParameters::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
