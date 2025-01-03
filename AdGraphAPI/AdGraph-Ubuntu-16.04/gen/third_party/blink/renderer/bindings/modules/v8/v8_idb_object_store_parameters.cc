// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_object_store_parameters.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8IDBObjectStoreParametersKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "autoIncrement",
    "keyPath",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8IDBObjectStoreParameters::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, IDBObjectStoreParameters& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8IDBObjectStoreParametersKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> autoIncrementValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&autoIncrementValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (autoIncrementValue.IsEmpty() || autoIncrementValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool autoIncrementCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, autoIncrementValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setAutoIncrement(autoIncrementCppValue);
  }

  v8::Local<v8::Value> keyPathValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&keyPathValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (keyPathValue.IsEmpty() || keyPathValue->IsUndefined()) {
    // Do nothing.
  } else if (keyPathValue->IsNull()) {
    impl.setKeyPathToNull();
  } else {
    StringOrStringSequence keyPathCppValue;
    V8StringOrStringSequence::ToImpl(isolate, keyPathValue, keyPathCppValue, UnionTypeConversionMode::kNullable, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setKeyPath(keyPathCppValue);
  }
}

v8::Local<v8::Value> IDBObjectStoreParameters::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8IDBObjectStoreParameters(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8IDBObjectStoreParameters(const IDBObjectStoreParameters& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8IDBObjectStoreParametersKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> autoIncrementValue;
  bool autoIncrementHasValueOrDefault = false;
  if (impl.hasAutoIncrement()) {
    autoIncrementValue = v8::Boolean::New(isolate, impl.autoIncrement());
    autoIncrementHasValueOrDefault = true;
  } else {
    autoIncrementValue = v8::Boolean::New(isolate, false);
    autoIncrementHasValueOrDefault = true;
  }
  if (autoIncrementHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), autoIncrementValue))) {
    return false;
  }

  v8::Local<v8::Value> keyPathValue;
  bool keyPathHasValueOrDefault = false;
  if (impl.hasKeyPath()) {
    keyPathValue = ToV8(impl.keyPath(), creationContext, isolate);
    keyPathHasValueOrDefault = true;
  } else {
    keyPathValue = v8::Null(isolate);
    keyPathHasValueOrDefault = true;
  }
  if (keyPathHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), keyPathValue))) {
    return false;
  }

  return true;
}

IDBObjectStoreParameters NativeValueTraits<IDBObjectStoreParameters>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  IDBObjectStoreParameters impl;
  V8IDBObjectStoreParameters::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
