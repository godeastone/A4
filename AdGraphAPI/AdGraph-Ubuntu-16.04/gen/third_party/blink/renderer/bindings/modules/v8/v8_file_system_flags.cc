// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_file_system_flags.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8FileSystemFlagsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "create",
    "exclusive",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8FileSystemFlags::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, FileSystemFlags& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8FileSystemFlagsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> createValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&createValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (createValue.IsEmpty() || createValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool createCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, createValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setCreateFlag(createCppValue);
  }

  v8::Local<v8::Value> exclusiveValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&exclusiveValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (exclusiveValue.IsEmpty() || exclusiveValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool exclusiveCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, exclusiveValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setExclusive(exclusiveCppValue);
  }
}

v8::Local<v8::Value> FileSystemFlags::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8FileSystemFlags(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8FileSystemFlags(const FileSystemFlags& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8FileSystemFlagsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> createValue;
  bool createHasValueOrDefault = false;
  if (impl.hasCreateFlag()) {
    createValue = v8::Boolean::New(isolate, impl.createFlag());
    createHasValueOrDefault = true;
  } else {
    createValue = v8::Boolean::New(isolate, false);
    createHasValueOrDefault = true;
  }
  if (createHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), createValue))) {
    return false;
  }

  v8::Local<v8::Value> exclusiveValue;
  bool exclusiveHasValueOrDefault = false;
  if (impl.hasExclusive()) {
    exclusiveValue = v8::Boolean::New(isolate, impl.exclusive());
    exclusiveHasValueOrDefault = true;
  } else {
    exclusiveValue = v8::Boolean::New(isolate, false);
    exclusiveHasValueOrDefault = true;
  }
  if (exclusiveHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), exclusiveValue))) {
    return false;
  }

  return true;
}

FileSystemFlags NativeValueTraits<FileSystemFlags>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  FileSystemFlags impl;
  V8FileSystemFlags::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
