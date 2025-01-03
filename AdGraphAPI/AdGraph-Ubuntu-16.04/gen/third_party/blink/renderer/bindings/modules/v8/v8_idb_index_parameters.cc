// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_index_parameters.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8IDBIndexParametersKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "multiEntry",
    "unique",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8IDBIndexParameters::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, IDBIndexParameters& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8IDBIndexParametersKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> multiEntryValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&multiEntryValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (multiEntryValue.IsEmpty() || multiEntryValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool multiEntryCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, multiEntryValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setMultiEntry(multiEntryCppValue);
  }

  v8::Local<v8::Value> uniqueValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&uniqueValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (uniqueValue.IsEmpty() || uniqueValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool uniqueCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, uniqueValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setUnique(uniqueCppValue);
  }
}

v8::Local<v8::Value> IDBIndexParameters::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8IDBIndexParameters(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8IDBIndexParameters(const IDBIndexParameters& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8IDBIndexParametersKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> multiEntryValue;
  bool multiEntryHasValueOrDefault = false;
  if (impl.hasMultiEntry()) {
    multiEntryValue = v8::Boolean::New(isolate, impl.multiEntry());
    multiEntryHasValueOrDefault = true;
  } else {
    multiEntryValue = v8::Boolean::New(isolate, false);
    multiEntryHasValueOrDefault = true;
  }
  if (multiEntryHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), multiEntryValue))) {
    return false;
  }

  v8::Local<v8::Value> uniqueValue;
  bool uniqueHasValueOrDefault = false;
  if (impl.hasUnique()) {
    uniqueValue = v8::Boolean::New(isolate, impl.unique());
    uniqueHasValueOrDefault = true;
  } else {
    uniqueValue = v8::Boolean::New(isolate, false);
    uniqueHasValueOrDefault = true;
  }
  if (uniqueHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), uniqueValue))) {
    return false;
  }

  return true;
}

IDBIndexParameters NativeValueTraits<IDBIndexParameters>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  IDBIndexParameters impl;
  V8IDBIndexParameters::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
