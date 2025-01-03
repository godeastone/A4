// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_control_transfer_parameters.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8USBControlTransferParametersKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "index",
    "recipient",
    "request",
    "requestType",
    "value",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8USBControlTransferParameters::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, USBControlTransferParameters& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    exceptionState.ThrowTypeError("Missing required member(s): index, recipient, request, requestType, value.");
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8USBControlTransferParametersKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> indexValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&indexValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (indexValue.IsEmpty() || indexValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member index is undefined.");
    return;
  } else {
    uint16_t indexCppValue = NativeValueTraits<IDLUnsignedShort>::NativeValue(isolate, indexValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setIndex(indexCppValue);
  }

  v8::Local<v8::Value> recipientValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&recipientValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (recipientValue.IsEmpty() || recipientValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member recipient is undefined.");
    return;
  } else {
    V8StringResource<> recipientCppValue = recipientValue;
    if (!recipientCppValue.Prepare(exceptionState))
      return;
    const char* validValues[] = {
        "device",
        "interface",
        "endpoint",
        "other",
    };
    if (!IsValidEnum(recipientCppValue, validValues, arraysize(validValues), "USBRecipient", exceptionState))
      return;
    impl.setRecipient(recipientCppValue);
  }

  v8::Local<v8::Value> requestValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&requestValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (requestValue.IsEmpty() || requestValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member request is undefined.");
    return;
  } else {
    uint8_t requestCppValue = NativeValueTraits<IDLOctet>::NativeValue(isolate, requestValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setRequest(requestCppValue);
  }

  v8::Local<v8::Value> requestTypeValue;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&requestTypeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (requestTypeValue.IsEmpty() || requestTypeValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member requestType is undefined.");
    return;
  } else {
    V8StringResource<> requestTypeCppValue = requestTypeValue;
    if (!requestTypeCppValue.Prepare(exceptionState))
      return;
    const char* validValues[] = {
        "standard",
        "class",
        "vendor",
    };
    if (!IsValidEnum(requestTypeCppValue, validValues, arraysize(validValues), "USBRequestType", exceptionState))
      return;
    impl.setRequestType(requestTypeCppValue);
  }

  v8::Local<v8::Value> valueValue;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&valueValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (valueValue.IsEmpty() || valueValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member value is undefined.");
    return;
  } else {
    uint16_t valueCppValue = NativeValueTraits<IDLUnsignedShort>::NativeValue(isolate, valueValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setValue(valueCppValue);
  }
}

v8::Local<v8::Value> USBControlTransferParameters::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8USBControlTransferParameters(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8USBControlTransferParameters(const USBControlTransferParameters& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8USBControlTransferParametersKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> indexValue;
  bool indexHasValueOrDefault = false;
  if (impl.hasIndex()) {
    indexValue = v8::Integer::NewFromUnsigned(isolate, impl.index());
    indexHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (indexHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), indexValue))) {
    return false;
  }

  v8::Local<v8::Value> recipientValue;
  bool recipientHasValueOrDefault = false;
  if (impl.hasRecipient()) {
    recipientValue = V8String(isolate, impl.recipient());
    recipientHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (recipientHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), recipientValue))) {
    return false;
  }

  v8::Local<v8::Value> requestValue;
  bool requestHasValueOrDefault = false;
  if (impl.hasRequest()) {
    requestValue = v8::Integer::NewFromUnsigned(isolate, impl.request());
    requestHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (requestHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), requestValue))) {
    return false;
  }

  v8::Local<v8::Value> requestTypeValue;
  bool requestTypeHasValueOrDefault = false;
  if (impl.hasRequestType()) {
    requestTypeValue = V8String(isolate, impl.requestType());
    requestTypeHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (requestTypeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), requestTypeValue))) {
    return false;
  }

  v8::Local<v8::Value> valueValue;
  bool valueHasValueOrDefault = false;
  if (impl.hasValue()) {
    valueValue = v8::Integer::NewFromUnsigned(isolate, impl.value());
    valueHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (valueHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[4].Get(isolate), valueValue))) {
    return false;
  }

  return true;
}

USBControlTransferParameters NativeValueTraits<USBControlTransferParameters>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  USBControlTransferParameters impl;
  V8USBControlTransferParameters::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
