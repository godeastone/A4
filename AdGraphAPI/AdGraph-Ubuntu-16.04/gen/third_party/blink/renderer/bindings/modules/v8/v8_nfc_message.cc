// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_nfc_message.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_nfc_record.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8NFCMessageKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "records",
    "url",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8NFCMessage::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, NFCMessage& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8NFCMessageKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> recordsValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&recordsValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (recordsValue.IsEmpty() || recordsValue->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<NFCRecord> recordsCppValue = NativeValueTraits<IDLSequence<NFCRecord>>::NativeValue(isolate, recordsValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setRecords(recordsCppValue);
  }

  v8::Local<v8::Value> urlValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&urlValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (urlValue.IsEmpty() || urlValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> urlCppValue = NativeValueTraits<IDLUSVString>::NativeValue(isolate, urlValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setURL(urlCppValue);
  }
}

v8::Local<v8::Value> NFCMessage::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8NFCMessage(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8NFCMessage(const NFCMessage& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8NFCMessageKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> recordsValue;
  bool recordsHasValueOrDefault = false;
  if (impl.hasRecords()) {
    recordsValue = ToV8(impl.records(), creationContext, isolate);
    recordsHasValueOrDefault = true;
  }
  if (recordsHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), recordsValue))) {
    return false;
  }

  v8::Local<v8::Value> urlValue;
  bool urlHasValueOrDefault = false;
  if (impl.hasURL()) {
    urlValue = V8String(isolate, impl.url());
    urlHasValueOrDefault = true;
  }
  if (urlHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), urlValue))) {
    return false;
  }

  return true;
}

NFCMessage NativeValueTraits<NFCMessage>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  NFCMessage impl;
  V8NFCMessage::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
