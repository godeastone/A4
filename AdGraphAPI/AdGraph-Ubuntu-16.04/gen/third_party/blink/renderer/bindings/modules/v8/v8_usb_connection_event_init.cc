// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_connection_event_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_init.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_device.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8USBConnectionEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "device",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8USBConnectionEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, USBConnectionEventInit& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    exceptionState.ThrowTypeError("Missing required member(s): device.");
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8EventInit::ToImpl(isolate, v8Value, impl, exceptionState);
  if (exceptionState.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8USBConnectionEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> deviceValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&deviceValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (deviceValue.IsEmpty() || deviceValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member device is undefined.");
    return;
  } else {
    USBDevice* deviceCppValue = V8USBDevice::ToImplWithTypeCheck(isolate, deviceValue);
    if (!deviceCppValue) {
      exceptionState.ThrowTypeError("member device is not of type USBDevice.");
      return;
    }
    impl.setDevice(deviceCppValue);
  }
}

v8::Local<v8::Value> USBConnectionEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8USBConnectionEventInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8USBConnectionEventInit(const USBConnectionEventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8USBConnectionEventInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> deviceValue;
  bool deviceHasValueOrDefault = false;
  if (impl.hasDevice()) {
    deviceValue = ToV8(impl.device(), creationContext, isolate);
    deviceHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (deviceHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), deviceValue))) {
    return false;
  }

  return true;
}

USBConnectionEventInit NativeValueTraits<USBConnectionEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  USBConnectionEventInit impl;
  V8USBConnectionEventInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
