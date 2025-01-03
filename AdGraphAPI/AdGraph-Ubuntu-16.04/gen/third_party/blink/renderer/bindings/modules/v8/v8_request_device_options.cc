// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_request_device_options.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_bluetooth_le_scan_filter_init.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8RequestDeviceOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "acceptAllDevices",
    "filters",
    "optionalServices",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8RequestDeviceOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, RequestDeviceOptions& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8RequestDeviceOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> acceptAllDevicesValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&acceptAllDevicesValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (acceptAllDevicesValue.IsEmpty() || acceptAllDevicesValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool acceptAllDevicesCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, acceptAllDevicesValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setAcceptAllDevices(acceptAllDevicesCppValue);
  }

  v8::Local<v8::Value> filtersValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&filtersValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (filtersValue.IsEmpty() || filtersValue->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<BluetoothLEScanFilterInit> filtersCppValue = NativeValueTraits<IDLSequence<BluetoothLEScanFilterInit>>::NativeValue(isolate, filtersValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setFilters(filtersCppValue);
  }

  v8::Local<v8::Value> optionalServicesValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&optionalServicesValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (optionalServicesValue.IsEmpty() || optionalServicesValue->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<StringOrUnsignedLong> optionalServicesCppValue = NativeValueTraits<IDLSequence<StringOrUnsignedLong>>::NativeValue(isolate, optionalServicesValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setOptionalServices(optionalServicesCppValue);
  }
}

v8::Local<v8::Value> RequestDeviceOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8RequestDeviceOptions(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8RequestDeviceOptions(const RequestDeviceOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8RequestDeviceOptionsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> acceptAllDevicesValue;
  bool acceptAllDevicesHasValueOrDefault = false;
  if (impl.hasAcceptAllDevices()) {
    acceptAllDevicesValue = v8::Boolean::New(isolate, impl.acceptAllDevices());
    acceptAllDevicesHasValueOrDefault = true;
  } else {
    acceptAllDevicesValue = v8::Boolean::New(isolate, false);
    acceptAllDevicesHasValueOrDefault = true;
  }
  if (acceptAllDevicesHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), acceptAllDevicesValue))) {
    return false;
  }

  v8::Local<v8::Value> filtersValue;
  bool filtersHasValueOrDefault = false;
  if (impl.hasFilters()) {
    filtersValue = ToV8(impl.filters(), creationContext, isolate);
    filtersHasValueOrDefault = true;
  }
  if (filtersHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), filtersValue))) {
    return false;
  }

  v8::Local<v8::Value> optionalServicesValue;
  bool optionalServicesHasValueOrDefault = false;
  if (impl.hasOptionalServices()) {
    optionalServicesValue = ToV8(impl.optionalServices(), creationContext, isolate);
    optionalServicesHasValueOrDefault = true;
  } else {
    optionalServicesValue = ToV8(HeapVector<StringOrUnsignedLong>(), creationContext, isolate);
    optionalServicesHasValueOrDefault = true;
  }
  if (optionalServicesHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), optionalServicesValue))) {
    return false;
  }

  return true;
}

RequestDeviceOptions NativeValueTraits<RequestDeviceOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  RequestDeviceOptions impl;
  V8RequestDeviceOptions::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
