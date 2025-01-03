// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_cable_registration_data.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer_view.h"
#include "third_party/blink/renderer/core/typed_arrays/array_buffer_view_helpers.h"
#include "third_party/blink/renderer/core/typed_arrays/flexible_array_buffer_view.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8CableRegistrationDataKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "rpPublicKey",
    "version",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8CableRegistrationData::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, CableRegistrationData& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    exceptionState.ThrowTypeError("Missing required member(s): rpPublicKey, version.");
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8CableRegistrationDataKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> rpPublicKeyValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&rpPublicKeyValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (rpPublicKeyValue.IsEmpty() || rpPublicKeyValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member rpPublicKey is undefined.");
    return;
  } else {
    ArrayBufferOrArrayBufferView rpPublicKeyCppValue;
    V8ArrayBufferOrArrayBufferView::ToImpl(isolate, rpPublicKeyValue, rpPublicKeyCppValue, UnionTypeConversionMode::kNotNullable, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setRpPublicKey(rpPublicKeyCppValue);
  }

  v8::Local<v8::Value> versionValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&versionValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (versionValue.IsEmpty() || versionValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member version is undefined.");
    return;
  } else {
    int32_t versionCppValue = NativeValueTraits<IDLLong>::NativeValue(isolate, versionValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setVersion(versionCppValue);
  }
}

v8::Local<v8::Value> CableRegistrationData::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8CableRegistrationData(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8CableRegistrationData(const CableRegistrationData& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8CableRegistrationDataKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> rpPublicKeyValue;
  bool rpPublicKeyHasValueOrDefault = false;
  if (impl.hasRpPublicKey()) {
    rpPublicKeyValue = ToV8(impl.rpPublicKey(), creationContext, isolate);
    rpPublicKeyHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (rpPublicKeyHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), rpPublicKeyValue))) {
    return false;
  }

  v8::Local<v8::Value> versionValue;
  bool versionHasValueOrDefault = false;
  if (impl.hasVersion()) {
    versionValue = v8::Integer::New(isolate, impl.version());
    versionHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (versionHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), versionValue))) {
    return false;
  }

  return true;
}

CableRegistrationData NativeValueTraits<CableRegistrationData>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  CableRegistrationData impl;
  V8CableRegistrationData::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
