// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_nfc_watch_options.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8NFCWatchOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "mediaType",
    "mode",
    "recordType",
    "url",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8NFCWatchOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, NFCWatchOptions& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8NFCWatchOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> mediaTypeValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&mediaTypeValue)) {
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

  v8::Local<v8::Value> modeValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&modeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (modeValue.IsEmpty() || modeValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> modeCppValue = modeValue;
    if (!modeCppValue.Prepare(exceptionState))
      return;
    const char* validValues[] = {
        "web-nfc-only",
        "any",
    };
    if (!IsValidEnum(modeCppValue, validValues, arraysize(validValues), "NFCWatchMode", exceptionState))
      return;
    impl.setMode(modeCppValue);
  }

  v8::Local<v8::Value> recordTypeValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&recordTypeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (recordTypeValue.IsEmpty() || recordTypeValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<kTreatNullAndUndefinedAsNullString> recordTypeCppValue = recordTypeValue;
    if (!recordTypeCppValue.Prepare(exceptionState))
      return;
    const char* validValues[] = {
        nullptr,
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

  v8::Local<v8::Value> urlValue;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&urlValue)) {
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

v8::Local<v8::Value> NFCWatchOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8NFCWatchOptions(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8NFCWatchOptions(const NFCWatchOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8NFCWatchOptionsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> mediaTypeValue;
  bool mediaTypeHasValueOrDefault = false;
  if (impl.hasMediaType()) {
    mediaTypeValue = V8String(isolate, impl.mediaType());
    mediaTypeHasValueOrDefault = true;
  } else {
    mediaTypeValue = V8String(isolate, WTF::g_empty_string);
    mediaTypeHasValueOrDefault = true;
  }
  if (mediaTypeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), mediaTypeValue))) {
    return false;
  }

  v8::Local<v8::Value> modeValue;
  bool modeHasValueOrDefault = false;
  if (impl.hasMode()) {
    modeValue = V8String(isolate, impl.mode());
    modeHasValueOrDefault = true;
  } else {
    modeValue = V8String(isolate, "web-nfc-only");
    modeHasValueOrDefault = true;
  }
  if (modeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), modeValue))) {
    return false;
  }

  v8::Local<v8::Value> recordTypeValue;
  bool recordTypeHasValueOrDefault = false;
  if (impl.hasRecordType()) {
    recordTypeValue = V8String(isolate, impl.recordType());
    recordTypeHasValueOrDefault = true;
  } else {
    recordTypeValue = v8::Null(isolate);
    recordTypeHasValueOrDefault = true;
  }
  if (recordTypeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), recordTypeValue))) {
    return false;
  }

  v8::Local<v8::Value> urlValue;
  bool urlHasValueOrDefault = false;
  if (impl.hasURL()) {
    urlValue = V8String(isolate, impl.url());
    urlHasValueOrDefault = true;
  } else {
    urlValue = V8String(isolate, WTF::g_empty_string);
    urlHasValueOrDefault = true;
  }
  if (urlHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), urlValue))) {
    return false;
  }

  return true;
}

NFCWatchOptions NativeValueTraits<NFCWatchOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  NFCWatchOptions impl;
  V8NFCWatchOptions::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
