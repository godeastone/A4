// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_public_key_credential_user_entity.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer_view.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_public_key_credential_entity.h"
#include "third_party/blink/renderer/core/typed_arrays/array_buffer_view_helpers.h"
#include "third_party/blink/renderer/core/typed_arrays/flexible_array_buffer_view.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8PublicKeyCredentialUserEntityKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "displayName",
    "id",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8PublicKeyCredentialUserEntity::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, PublicKeyCredentialUserEntity& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    exceptionState.ThrowTypeError("Missing required member(s): displayName, id.");
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8PublicKeyCredentialEntity::ToImpl(isolate, v8Value, impl, exceptionState);
  if (exceptionState.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8PublicKeyCredentialUserEntityKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> displayNameValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&displayNameValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (displayNameValue.IsEmpty() || displayNameValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member displayName is undefined.");
    return;
  } else {
    V8StringResource<> displayNameCppValue = displayNameValue;
    if (!displayNameCppValue.Prepare(exceptionState))
      return;
    impl.setDisplayName(displayNameCppValue);
  }

  v8::Local<v8::Value> idValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&idValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (idValue.IsEmpty() || idValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member id is undefined.");
    return;
  } else {
    ArrayBufferOrArrayBufferView idCppValue;
    V8ArrayBufferOrArrayBufferView::ToImpl(isolate, idValue, idCppValue, UnionTypeConversionMode::kNotNullable, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setId(idCppValue);
  }
}

v8::Local<v8::Value> PublicKeyCredentialUserEntity::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8PublicKeyCredentialUserEntity(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8PublicKeyCredentialUserEntity(const PublicKeyCredentialUserEntity& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8PublicKeyCredentialEntity(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8PublicKeyCredentialUserEntityKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> displayNameValue;
  bool displayNameHasValueOrDefault = false;
  if (impl.hasDisplayName()) {
    displayNameValue = V8String(isolate, impl.displayName());
    displayNameHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (displayNameHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), displayNameValue))) {
    return false;
  }

  v8::Local<v8::Value> idValue;
  bool idHasValueOrDefault = false;
  if (impl.hasId()) {
    idValue = ToV8(impl.id(), creationContext, isolate);
    idHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (idHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), idValue))) {
    return false;
  }

  return true;
}

PublicKeyCredentialUserEntity NativeValueTraits<PublicKeyCredentialUserEntity>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  PublicKeyCredentialUserEntity impl;
  V8PublicKeyCredentialUserEntity::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
