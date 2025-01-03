// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_mojo_duplicate_buffer_handle_options.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8MojoDuplicateBufferHandleOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "readOnly",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8MojoDuplicateBufferHandleOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, MojoDuplicateBufferHandleOptions& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8MojoDuplicateBufferHandleOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> readOnlyValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&readOnlyValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (readOnlyValue.IsEmpty() || readOnlyValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool readOnlyCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, readOnlyValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setReadOnly(readOnlyCppValue);
  }
}

v8::Local<v8::Value> MojoDuplicateBufferHandleOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8MojoDuplicateBufferHandleOptions(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8MojoDuplicateBufferHandleOptions(const MojoDuplicateBufferHandleOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8MojoDuplicateBufferHandleOptionsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> readOnlyValue;
  bool readOnlyHasValueOrDefault = false;
  if (impl.hasReadOnly()) {
    readOnlyValue = v8::Boolean::New(isolate, impl.readOnly());
    readOnlyHasValueOrDefault = true;
  } else {
    readOnlyValue = v8::Boolean::New(isolate, false);
    readOnlyHasValueOrDefault = true;
  }
  if (readOnlyHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), readOnlyValue))) {
    return false;
  }

  return true;
}

MojoDuplicateBufferHandleOptions NativeValueTraits<MojoDuplicateBufferHandleOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  MojoDuplicateBufferHandleOptions impl;
  V8MojoDuplicateBufferHandleOptions::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
