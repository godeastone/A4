// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_device_request_options.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_device_filter.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8USBDeviceRequestOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "filters",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8USBDeviceRequestOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, USBDeviceRequestOptions& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    exceptionState.ThrowTypeError("Missing required member(s): filters.");
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8USBDeviceRequestOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> filtersValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&filtersValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (filtersValue.IsEmpty() || filtersValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member filters is undefined.");
    return;
  } else {
    HeapVector<USBDeviceFilter> filtersCppValue = NativeValueTraits<IDLSequence<USBDeviceFilter>>::NativeValue(isolate, filtersValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setFilters(filtersCppValue);
  }
}

v8::Local<v8::Value> USBDeviceRequestOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8USBDeviceRequestOptions(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8USBDeviceRequestOptions(const USBDeviceRequestOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8USBDeviceRequestOptionsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> filtersValue;
  bool filtersHasValueOrDefault = false;
  if (impl.hasFilters()) {
    filtersValue = ToV8(impl.filters(), creationContext, isolate);
    filtersHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (filtersHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), filtersValue))) {
    return false;
  }

  return true;
}

USBDeviceRequestOptions NativeValueTraits<USBDeviceRequestOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  USBDeviceRequestOptions impl;
  V8USBDeviceRequestOptions::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
