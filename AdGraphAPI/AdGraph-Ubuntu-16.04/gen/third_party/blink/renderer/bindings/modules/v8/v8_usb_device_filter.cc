// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_device_filter.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8USBDeviceFilterKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "classCode",
    "productId",
    "protocolCode",
    "serialNumber",
    "subclassCode",
    "vendorId",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8USBDeviceFilter::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, USBDeviceFilter& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8USBDeviceFilterKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> classCodeValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&classCodeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (classCodeValue.IsEmpty() || classCodeValue->IsUndefined()) {
    // Do nothing.
  } else {
    uint8_t classCodeCppValue = NativeValueTraits<IDLOctet>::NativeValue(isolate, classCodeValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setClassCode(classCodeCppValue);
  }

  v8::Local<v8::Value> productIdValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&productIdValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (productIdValue.IsEmpty() || productIdValue->IsUndefined()) {
    // Do nothing.
  } else {
    uint16_t productIdCppValue = NativeValueTraits<IDLUnsignedShort>::NativeValue(isolate, productIdValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setProductId(productIdCppValue);
  }

  v8::Local<v8::Value> protocolCodeValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&protocolCodeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (protocolCodeValue.IsEmpty() || protocolCodeValue->IsUndefined()) {
    // Do nothing.
  } else {
    uint8_t protocolCodeCppValue = NativeValueTraits<IDLOctet>::NativeValue(isolate, protocolCodeValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setProtocolCode(protocolCodeCppValue);
  }

  v8::Local<v8::Value> serialNumberValue;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&serialNumberValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (serialNumberValue.IsEmpty() || serialNumberValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> serialNumberCppValue = serialNumberValue;
    if (!serialNumberCppValue.Prepare(exceptionState))
      return;
    impl.setSerialNumber(serialNumberCppValue);
  }

  v8::Local<v8::Value> subclassCodeValue;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&subclassCodeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (subclassCodeValue.IsEmpty() || subclassCodeValue->IsUndefined()) {
    // Do nothing.
  } else {
    uint8_t subclassCodeCppValue = NativeValueTraits<IDLOctet>::NativeValue(isolate, subclassCodeValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setSubclassCode(subclassCodeCppValue);
  }

  v8::Local<v8::Value> vendorIdValue;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&vendorIdValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (vendorIdValue.IsEmpty() || vendorIdValue->IsUndefined()) {
    // Do nothing.
  } else {
    uint16_t vendorIdCppValue = NativeValueTraits<IDLUnsignedShort>::NativeValue(isolate, vendorIdValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setVendorId(vendorIdCppValue);
  }
}

v8::Local<v8::Value> USBDeviceFilter::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8USBDeviceFilter(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8USBDeviceFilter(const USBDeviceFilter& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8USBDeviceFilterKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> classCodeValue;
  bool classCodeHasValueOrDefault = false;
  if (impl.hasClassCode()) {
    classCodeValue = v8::Integer::NewFromUnsigned(isolate, impl.classCode());
    classCodeHasValueOrDefault = true;
  }
  if (classCodeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), classCodeValue))) {
    return false;
  }

  v8::Local<v8::Value> productIdValue;
  bool productIdHasValueOrDefault = false;
  if (impl.hasProductId()) {
    productIdValue = v8::Integer::NewFromUnsigned(isolate, impl.productId());
    productIdHasValueOrDefault = true;
  }
  if (productIdHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), productIdValue))) {
    return false;
  }

  v8::Local<v8::Value> protocolCodeValue;
  bool protocolCodeHasValueOrDefault = false;
  if (impl.hasProtocolCode()) {
    protocolCodeValue = v8::Integer::NewFromUnsigned(isolate, impl.protocolCode());
    protocolCodeHasValueOrDefault = true;
  }
  if (protocolCodeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), protocolCodeValue))) {
    return false;
  }

  v8::Local<v8::Value> serialNumberValue;
  bool serialNumberHasValueOrDefault = false;
  if (impl.hasSerialNumber()) {
    serialNumberValue = V8String(isolate, impl.serialNumber());
    serialNumberHasValueOrDefault = true;
  }
  if (serialNumberHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), serialNumberValue))) {
    return false;
  }

  v8::Local<v8::Value> subclassCodeValue;
  bool subclassCodeHasValueOrDefault = false;
  if (impl.hasSubclassCode()) {
    subclassCodeValue = v8::Integer::NewFromUnsigned(isolate, impl.subclassCode());
    subclassCodeHasValueOrDefault = true;
  }
  if (subclassCodeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[4].Get(isolate), subclassCodeValue))) {
    return false;
  }

  v8::Local<v8::Value> vendorIdValue;
  bool vendorIdHasValueOrDefault = false;
  if (impl.hasVendorId()) {
    vendorIdValue = v8::Integer::NewFromUnsigned(isolate, impl.vendorId());
    vendorIdHasValueOrDefault = true;
  }
  if (vendorIdHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[5].Get(isolate), vendorIdValue))) {
    return false;
  }

  return true;
}

USBDeviceFilter NativeValueTraits<USBDeviceFilter>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  USBDeviceFilter impl;
  V8USBDeviceFilter::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
