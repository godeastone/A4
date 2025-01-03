// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_bluetooth_le_scan_filter_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8BluetoothLEScanFilterInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "name",
    "namePrefix",
    "services",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8BluetoothLEScanFilterInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, BluetoothLEScanFilterInit& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8BluetoothLEScanFilterInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> nameValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&nameValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (nameValue.IsEmpty() || nameValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> nameCppValue = nameValue;
    if (!nameCppValue.Prepare(exceptionState))
      return;
    impl.setName(nameCppValue);
  }

  v8::Local<v8::Value> namePrefixValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&namePrefixValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (namePrefixValue.IsEmpty() || namePrefixValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> namePrefixCppValue = namePrefixValue;
    if (!namePrefixCppValue.Prepare(exceptionState))
      return;
    impl.setNamePrefix(namePrefixCppValue);
  }

  v8::Local<v8::Value> servicesValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&servicesValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (servicesValue.IsEmpty() || servicesValue->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<StringOrUnsignedLong> servicesCppValue = NativeValueTraits<IDLSequence<StringOrUnsignedLong>>::NativeValue(isolate, servicesValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setServices(servicesCppValue);
  }
}

v8::Local<v8::Value> BluetoothLEScanFilterInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8BluetoothLEScanFilterInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8BluetoothLEScanFilterInit(const BluetoothLEScanFilterInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8BluetoothLEScanFilterInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> nameValue;
  bool nameHasValueOrDefault = false;
  if (impl.hasName()) {
    nameValue = V8String(isolate, impl.name());
    nameHasValueOrDefault = true;
  }
  if (nameHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), nameValue))) {
    return false;
  }

  v8::Local<v8::Value> namePrefixValue;
  bool namePrefixHasValueOrDefault = false;
  if (impl.hasNamePrefix()) {
    namePrefixValue = V8String(isolate, impl.namePrefix());
    namePrefixHasValueOrDefault = true;
  }
  if (namePrefixHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), namePrefixValue))) {
    return false;
  }

  v8::Local<v8::Value> servicesValue;
  bool servicesHasValueOrDefault = false;
  if (impl.hasServices()) {
    servicesValue = ToV8(impl.services(), creationContext, isolate);
    servicesHasValueOrDefault = true;
  }
  if (servicesHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), servicesValue))) {
    return false;
  }

  return true;
}

BluetoothLEScanFilterInit NativeValueTraits<BluetoothLEScanFilterInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  BluetoothLEScanFilterInit impl;
  V8BluetoothLEScanFilterInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
