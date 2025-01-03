// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_payment_instrument.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_image_object.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8PaymentInstrumentKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "capabilities",
    "icons",
    "method",
    "name",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8PaymentInstrument::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, PaymentInstrument& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    exceptionState.ThrowTypeError("Missing required member(s): name.");
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8PaymentInstrumentKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> capabilitiesValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&capabilitiesValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (capabilitiesValue.IsEmpty() || capabilitiesValue->IsUndefined()) {
    // Do nothing.
  } else {
    ScriptValue capabilitiesCppValue = ScriptValue(ScriptState::Current(isolate), capabilitiesValue);
    if (!capabilitiesCppValue.IsObject()) {
      exceptionState.ThrowTypeError("member capabilities is not an object.");
      return;
    }
    impl.setCapabilities(capabilitiesCppValue);
  }

  v8::Local<v8::Value> iconsValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&iconsValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (iconsValue.IsEmpty() || iconsValue->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<ImageObject> iconsCppValue = NativeValueTraits<IDLSequence<ImageObject>>::NativeValue(isolate, iconsValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setIcons(iconsCppValue);
  }

  v8::Local<v8::Value> methodValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&methodValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (methodValue.IsEmpty() || methodValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> methodCppValue = methodValue;
    if (!methodCppValue.Prepare(exceptionState))
      return;
    impl.setMethod(methodCppValue);
  }

  v8::Local<v8::Value> nameValue;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&nameValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (nameValue.IsEmpty() || nameValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member name is undefined.");
    return;
  } else {
    V8StringResource<> nameCppValue = nameValue;
    if (!nameCppValue.Prepare(exceptionState))
      return;
    impl.setName(nameCppValue);
  }
}

v8::Local<v8::Value> PaymentInstrument::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8PaymentInstrument(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8PaymentInstrument(const PaymentInstrument& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8PaymentInstrumentKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> capabilitiesValue;
  bool capabilitiesHasValueOrDefault = false;
  if (impl.hasCapabilities()) {
    DCHECK(impl.capabilities().IsObject());
    capabilitiesValue = impl.capabilities().V8Value();
    capabilitiesHasValueOrDefault = true;
  }
  if (capabilitiesHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), capabilitiesValue))) {
    return false;
  }

  v8::Local<v8::Value> iconsValue;
  bool iconsHasValueOrDefault = false;
  if (impl.hasIcons()) {
    iconsValue = ToV8(impl.icons(), creationContext, isolate);
    iconsHasValueOrDefault = true;
  }
  if (iconsHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), iconsValue))) {
    return false;
  }

  v8::Local<v8::Value> methodValue;
  bool methodHasValueOrDefault = false;
  if (impl.hasMethod()) {
    methodValue = V8String(isolate, impl.method());
    methodHasValueOrDefault = true;
  }
  if (methodHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), methodValue))) {
    return false;
  }

  v8::Local<v8::Value> nameValue;
  bool nameHasValueOrDefault = false;
  if (impl.hasName()) {
    nameValue = V8String(isolate, impl.name());
    nameHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (nameHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), nameValue))) {
    return false;
  }

  return true;
}

PaymentInstrument NativeValueTraits<PaymentInstrument>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  PaymentInstrument impl;
  V8PaymentInstrument::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
