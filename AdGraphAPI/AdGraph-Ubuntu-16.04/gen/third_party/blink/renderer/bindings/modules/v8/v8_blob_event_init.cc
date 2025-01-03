// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_blob_event_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_blob.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_init.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8BlobEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "data",
    "timecode",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8BlobEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, BlobEventInit& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    exceptionState.ThrowTypeError("Missing required member(s): data.");
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

  const v8::Eternal<v8::Name>* keys = eternalV8BlobEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> dataValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&dataValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (dataValue.IsEmpty() || dataValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member data is undefined.");
    return;
  } else {
    Blob* dataCppValue = V8Blob::ToImplWithTypeCheck(isolate, dataValue);
    if (!dataCppValue) {
      exceptionState.ThrowTypeError("member data is not of type Blob.");
      return;
    }
    impl.setData(dataCppValue);
  }

  v8::Local<v8::Value> timecodeValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&timecodeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (timecodeValue.IsEmpty() || timecodeValue->IsUndefined()) {
    // Do nothing.
  } else {
    double timecodeCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, timecodeValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setTimecode(timecodeCppValue);
  }
}

v8::Local<v8::Value> BlobEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8BlobEventInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8BlobEventInit(const BlobEventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8BlobEventInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> dataValue;
  bool dataHasValueOrDefault = false;
  if (impl.hasData()) {
    dataValue = ToV8(impl.data(), creationContext, isolate);
    dataHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (dataHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), dataValue))) {
    return false;
  }

  v8::Local<v8::Value> timecodeValue;
  bool timecodeHasValueOrDefault = false;
  if (impl.hasTimecode()) {
    timecodeValue = v8::Number::New(isolate, impl.timecode());
    timecodeHasValueOrDefault = true;
  }
  if (timecodeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), timecodeValue))) {
    return false;
  }

  return true;
}

BlobEventInit NativeValueTraits<BlobEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  BlobEventInit impl;
  V8BlobEventInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
