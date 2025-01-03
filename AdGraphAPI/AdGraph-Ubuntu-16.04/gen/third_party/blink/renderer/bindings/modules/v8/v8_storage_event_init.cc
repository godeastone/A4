// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_storage_event_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_init.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_storage.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8StorageEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "key",
    "newValue",
    "oldValue",
    "storageArea",
    "url",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8StorageEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, StorageEventInit& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
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

  const v8::Eternal<v8::Name>* keys = eternalV8StorageEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> keyValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&keyValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (keyValue.IsEmpty() || keyValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<kTreatNullAndUndefinedAsNullString> keyCppValue = keyValue;
    if (!keyCppValue.Prepare(exceptionState))
      return;
    impl.setKey(keyCppValue);
  }

  v8::Local<v8::Value> newValueValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&newValueValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (newValueValue.IsEmpty() || newValueValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<kTreatNullAndUndefinedAsNullString> newValueCppValue = newValueValue;
    if (!newValueCppValue.Prepare(exceptionState))
      return;
    impl.setNewValue(newValueCppValue);
  }

  v8::Local<v8::Value> oldValueValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&oldValueValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (oldValueValue.IsEmpty() || oldValueValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<kTreatNullAndUndefinedAsNullString> oldValueCppValue = oldValueValue;
    if (!oldValueCppValue.Prepare(exceptionState))
      return;
    impl.setOldValue(oldValueCppValue);
  }

  v8::Local<v8::Value> storageAreaValue;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&storageAreaValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (storageAreaValue.IsEmpty() || storageAreaValue->IsUndefined()) {
    // Do nothing.
  } else if (storageAreaValue->IsNull()) {
    impl.setStorageAreaToNull();
  } else {
    Storage* storageAreaCppValue = V8Storage::ToImplWithTypeCheck(isolate, storageAreaValue);
    if (!storageAreaCppValue) {
      exceptionState.ThrowTypeError("member storageArea is not of type Storage.");
      return;
    }
    impl.setStorageArea(storageAreaCppValue);
  }

  v8::Local<v8::Value> urlValue;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&urlValue)) {
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

v8::Local<v8::Value> StorageEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8StorageEventInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8StorageEventInit(const StorageEventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8StorageEventInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> keyValue;
  bool keyHasValueOrDefault = false;
  if (impl.hasKey()) {
    keyValue = V8String(isolate, impl.key());
    keyHasValueOrDefault = true;
  } else {
    keyValue = v8::Null(isolate);
    keyHasValueOrDefault = true;
  }
  if (keyHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), keyValue))) {
    return false;
  }

  v8::Local<v8::Value> newValueValue;
  bool newValueHasValueOrDefault = false;
  if (impl.hasNewValue()) {
    newValueValue = V8String(isolate, impl.newValue());
    newValueHasValueOrDefault = true;
  } else {
    newValueValue = v8::Null(isolate);
    newValueHasValueOrDefault = true;
  }
  if (newValueHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), newValueValue))) {
    return false;
  }

  v8::Local<v8::Value> oldValueValue;
  bool oldValueHasValueOrDefault = false;
  if (impl.hasOldValue()) {
    oldValueValue = V8String(isolate, impl.oldValue());
    oldValueHasValueOrDefault = true;
  } else {
    oldValueValue = v8::Null(isolate);
    oldValueHasValueOrDefault = true;
  }
  if (oldValueHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), oldValueValue))) {
    return false;
  }

  v8::Local<v8::Value> storageAreaValue;
  bool storageAreaHasValueOrDefault = false;
  if (impl.hasStorageArea()) {
    storageAreaValue = ToV8(impl.storageArea(), creationContext, isolate);
    storageAreaHasValueOrDefault = true;
  } else {
    storageAreaValue = v8::Null(isolate);
    storageAreaHasValueOrDefault = true;
  }
  if (storageAreaHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), storageAreaValue))) {
    return false;
  }

  v8::Local<v8::Value> urlValue;
  bool urlHasValueOrDefault = false;
  if (impl.hasURL()) {
    urlValue = V8String(isolate, impl.url());
    urlHasValueOrDefault = true;
  }
  if (urlHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[4].Get(isolate), urlValue))) {
    return false;
  }

  return true;
}

StorageEventInit NativeValueTraits<StorageEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  StorageEventInit impl;
  V8StorageEventInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
