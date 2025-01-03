// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_nfc_record.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8NFCRecordKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "data",
    "mediaType",
    "recordType",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8NFCRecord::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, NFCRecord& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8NFCRecordKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> dataValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&dataValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (dataValue.IsEmpty() || dataValue->IsUndefined()) {
    // Do nothing.
  } else {
    ScriptValue dataCppValue = ScriptValue(ScriptState::Current(isolate), dataValue);
    impl.setData(dataCppValue);
  }

  v8::Local<v8::Value> mediaTypeValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&mediaTypeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (mediaTypeValue.IsEmpty() || mediaTypeValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> mediaTypeCppValue = NativeValueTraits<IDLUSVString>::NativeValue(isolate, mediaTypeValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setMediaType(mediaTypeCppValue);
  }

  v8::Local<v8::Value> recordTypeValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&recordTypeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (recordTypeValue.IsEmpty() || recordTypeValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> recordTypeCppValue = recordTypeValue;
    if (!recordTypeCppValue.Prepare(exceptionState))
      return;
    const char* validValues[] = {
        "empty",
        "text",
        "url",
        "json",
        "opaque",
    };
    if (!IsValidEnum(recordTypeCppValue, validValues, arraysize(validValues), "NFCRecordType", exceptionState))
      return;
    impl.setRecordType(recordTypeCppValue);
  }
}

v8::Local<v8::Value> NFCRecord::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8NFCRecord(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8NFCRecord(const NFCRecord& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8NFCRecordKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> dataValue;
  bool dataHasValueOrDefault = false;
  if (impl.hasData()) {
    dataValue = impl.data().V8Value();
    dataHasValueOrDefault = true;
  }
  if (dataHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), dataValue))) {
    return false;
  }

  v8::Local<v8::Value> mediaTypeValue;
  bool mediaTypeHasValueOrDefault = false;
  if (impl.hasMediaType()) {
    mediaTypeValue = V8String(isolate, impl.mediaType());
    mediaTypeHasValueOrDefault = true;
  }
  if (mediaTypeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), mediaTypeValue))) {
    return false;
  }

  v8::Local<v8::Value> recordTypeValue;
  bool recordTypeHasValueOrDefault = false;
  if (impl.hasRecordType()) {
    recordTypeValue = V8String(isolate, impl.recordType());
    recordTypeHasValueOrDefault = true;
  }
  if (recordTypeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), recordTypeValue))) {
    return false;
  }

  return true;
}

NFCRecord NativeValueTraits<NFCRecord>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  NFCRecord impl;
  V8NFCRecord::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
