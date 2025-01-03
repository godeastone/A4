// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_version_change_event_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_init.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8IDBVersionChangeEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "dataLoss",
    "newVersion",
    "oldVersion",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8IDBVersionChangeEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, IDBVersionChangeEventInit& impl, ExceptionState& exceptionState) {
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

  const v8::Eternal<v8::Name>* keys = eternalV8IDBVersionChangeEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> dataLossValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&dataLossValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (dataLossValue.IsEmpty() || dataLossValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> dataLossCppValue = dataLossValue;
    if (!dataLossCppValue.Prepare(exceptionState))
      return;
    const char* validValues[] = {
        "none",
        "total",
    };
    if (!IsValidEnum(dataLossCppValue, validValues, arraysize(validValues), "IDBDataLossAmount", exceptionState))
      return;
    impl.setDataLoss(dataLossCppValue);
  }

  v8::Local<v8::Value> newVersionValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&newVersionValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (newVersionValue.IsEmpty() || newVersionValue->IsUndefined()) {
    // Do nothing.
  } else if (newVersionValue->IsNull()) {
    impl.setNewVersionToNull();
  } else {
    uint64_t newVersionCppValue = NativeValueTraits<IDLUnsignedLongLong>::NativeValue(isolate, newVersionValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setNewVersion(newVersionCppValue);
  }

  v8::Local<v8::Value> oldVersionValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&oldVersionValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (oldVersionValue.IsEmpty() || oldVersionValue->IsUndefined()) {
    // Do nothing.
  } else {
    uint64_t oldVersionCppValue = NativeValueTraits<IDLUnsignedLongLong>::NativeValue(isolate, oldVersionValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setOldVersion(oldVersionCppValue);
  }
}

v8::Local<v8::Value> IDBVersionChangeEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8IDBVersionChangeEventInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8IDBVersionChangeEventInit(const IDBVersionChangeEventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8IDBVersionChangeEventInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> dataLossValue;
  bool dataLossHasValueOrDefault = false;
  if (impl.hasDataLoss()) {
    dataLossValue = V8String(isolate, impl.dataLoss());
    dataLossHasValueOrDefault = true;
  } else {
    dataLossValue = V8String(isolate, "none");
    dataLossHasValueOrDefault = true;
  }
  if (dataLossHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), dataLossValue))) {
    return false;
  }

  v8::Local<v8::Value> newVersionValue;
  bool newVersionHasValueOrDefault = false;
  if (impl.hasNewVersion()) {
    newVersionValue = v8::Number::New(isolate, static_cast<double>(impl.newVersion()));
    newVersionHasValueOrDefault = true;
  } else {
    newVersionValue = v8::Null(isolate);
    newVersionHasValueOrDefault = true;
  }
  if (newVersionHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), newVersionValue))) {
    return false;
  }

  v8::Local<v8::Value> oldVersionValue;
  bool oldVersionHasValueOrDefault = false;
  if (impl.hasOldVersion()) {
    oldVersionValue = v8::Number::New(isolate, static_cast<double>(impl.oldVersion()));
    oldVersionHasValueOrDefault = true;
  } else {
    oldVersionValue = v8::Number::New(isolate, static_cast<double>(0));
    oldVersionHasValueOrDefault = true;
  }
  if (oldVersionHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), oldVersionValue))) {
    return false;
  }

  return true;
}

IDBVersionChangeEventInit NativeValueTraits<IDBVersionChangeEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  IDBVersionChangeEventInit impl;
  V8IDBVersionChangeEventInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
