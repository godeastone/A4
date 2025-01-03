// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_public_key_credential_descriptor.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer_view.h"
#include "third_party/blink/renderer/core/typed_arrays/array_buffer_view_helpers.h"
#include "third_party/blink/renderer/core/typed_arrays/flexible_array_buffer_view.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8PublicKeyCredentialDescriptorKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "id",
    "transports",
    "type",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8PublicKeyCredentialDescriptor::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, PublicKeyCredentialDescriptor& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    exceptionState.ThrowTypeError("Missing required member(s): id, type.");
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8PublicKeyCredentialDescriptorKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> idValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&idValue)) {
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

  v8::Local<v8::Value> transportsValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&transportsValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (transportsValue.IsEmpty() || transportsValue->IsUndefined()) {
    // Do nothing.
  } else {
    Vector<String> transportsCppValue = NativeValueTraits<IDLSequence<IDLString>>::NativeValue(isolate, transportsValue, exceptionState);
    if (exceptionState.HadException())
      return;
    const char* validValues[] = {
        "usb",
        "nfc",
        "ble",
    };
    if (!IsValidEnum(transportsCppValue, validValues, arraysize(validValues), "AuthenticatorTransport", exceptionState))
      return;
    impl.setTransports(transportsCppValue);
  }

  v8::Local<v8::Value> typeValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&typeValue)) {
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

v8::Local<v8::Value> PublicKeyCredentialDescriptor::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8PublicKeyCredentialDescriptor(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8PublicKeyCredentialDescriptor(const PublicKeyCredentialDescriptor& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8PublicKeyCredentialDescriptorKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> idValue;
  bool idHasValueOrDefault = false;
  if (impl.hasId()) {
    idValue = ToV8(impl.id(), creationContext, isolate);
    idHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (idHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), idValue))) {
    return false;
  }

  v8::Local<v8::Value> transportsValue;
  bool transportsHasValueOrDefault = false;
  if (impl.hasTransports()) {
    transportsValue = ToV8(impl.transports(), creationContext, isolate);
    transportsHasValueOrDefault = true;
  }
  if (transportsHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), transportsValue))) {
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
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), typeValue))) {
    return false;
  }

  return true;
}

PublicKeyCredentialDescriptor NativeValueTraits<PublicKeyCredentialDescriptor>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  PublicKeyCredentialDescriptor impl;
  V8PublicKeyCredentialDescriptor::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
