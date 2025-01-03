// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_observer_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8IDBObserverInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "noRecords",
    "operationTypes",
    "transaction",
    "values",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8IDBObserverInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, IDBObserverInit& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8IDBObserverInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> noRecordsValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&noRecordsValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (noRecordsValue.IsEmpty() || noRecordsValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool noRecordsCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, noRecordsValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setNoRecords(noRecordsCppValue);
  }

  v8::Local<v8::Value> operationTypesValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&operationTypesValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (operationTypesValue.IsEmpty() || operationTypesValue->IsUndefined()) {
    // Do nothing.
  } else {
    Vector<String> operationTypesCppValue = NativeValueTraits<IDLSequence<IDLString>>::NativeValue(isolate, operationTypesValue, exceptionState);
    if (exceptionState.HadException())
      return;
    const char* validValues[] = {
        "add",
        "put",
        "delete",
        "clear",
    };
    if (!IsValidEnum(operationTypesCppValue, validValues, arraysize(validValues), "IDBObservationType", exceptionState))
      return;
    impl.setOperationTypes(operationTypesCppValue);
  }

  v8::Local<v8::Value> transactionValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&transactionValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (transactionValue.IsEmpty() || transactionValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool transactionCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, transactionValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setTransaction(transactionCppValue);
  }

  v8::Local<v8::Value> valuesValue;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&valuesValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (valuesValue.IsEmpty() || valuesValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool valuesCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, valuesValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setValues(valuesCppValue);
  }
}

v8::Local<v8::Value> IDBObserverInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8IDBObserverInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8IDBObserverInit(const IDBObserverInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8IDBObserverInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> noRecordsValue;
  bool noRecordsHasValueOrDefault = false;
  if (impl.hasNoRecords()) {
    noRecordsValue = v8::Boolean::New(isolate, impl.noRecords());
    noRecordsHasValueOrDefault = true;
  } else {
    noRecordsValue = v8::Boolean::New(isolate, false);
    noRecordsHasValueOrDefault = true;
  }
  if (noRecordsHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), noRecordsValue))) {
    return false;
  }

  v8::Local<v8::Value> operationTypesValue;
  bool operationTypesHasValueOrDefault = false;
  if (impl.hasOperationTypes()) {
    operationTypesValue = ToV8(impl.operationTypes(), creationContext, isolate);
    operationTypesHasValueOrDefault = true;
  } else {
    operationTypesValue = ToV8(Vector<String>(), creationContext, isolate);
    operationTypesHasValueOrDefault = true;
  }
  if (operationTypesHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), operationTypesValue))) {
    return false;
  }

  v8::Local<v8::Value> transactionValue;
  bool transactionHasValueOrDefault = false;
  if (impl.hasTransaction()) {
    transactionValue = v8::Boolean::New(isolate, impl.transaction());
    transactionHasValueOrDefault = true;
  } else {
    transactionValue = v8::Boolean::New(isolate, false);
    transactionHasValueOrDefault = true;
  }
  if (transactionHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), transactionValue))) {
    return false;
  }

  v8::Local<v8::Value> valuesValue;
  bool valuesHasValueOrDefault = false;
  if (impl.hasValues()) {
    valuesValue = v8::Boolean::New(isolate, impl.values());
    valuesHasValueOrDefault = true;
  } else {
    valuesValue = v8::Boolean::New(isolate, false);
    valuesHasValueOrDefault = true;
  }
  if (valuesHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), valuesValue))) {
    return false;
  }

  return true;
}

IDBObserverInit NativeValueTraits<IDBObserverInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  IDBObserverInit impl;
  V8IDBObserverInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
