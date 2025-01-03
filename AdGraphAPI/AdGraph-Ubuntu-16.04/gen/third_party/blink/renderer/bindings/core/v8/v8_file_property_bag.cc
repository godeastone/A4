// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_file_property_bag.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_blob_property_bag.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8FilePropertyBagKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "lastModified",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8FilePropertyBag::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, FilePropertyBag& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8BlobPropertyBag::ToImpl(isolate, v8Value, impl, exceptionState);
  if (exceptionState.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8FilePropertyBagKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> lastModifiedValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&lastModifiedValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (lastModifiedValue.IsEmpty() || lastModifiedValue->IsUndefined()) {
    // Do nothing.
  } else {
    int64_t lastModifiedCppValue = NativeValueTraits<IDLLongLong>::NativeValue(isolate, lastModifiedValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setLastModified(lastModifiedCppValue);
  }
}

v8::Local<v8::Value> FilePropertyBag::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8FilePropertyBag(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8FilePropertyBag(const FilePropertyBag& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8BlobPropertyBag(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8FilePropertyBagKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> lastModifiedValue;
  bool lastModifiedHasValueOrDefault = false;
  if (impl.hasLastModified()) {
    lastModifiedValue = v8::Number::New(isolate, static_cast<double>(impl.lastModified()));
    lastModifiedHasValueOrDefault = true;
  }
  if (lastModifiedHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), lastModifiedValue))) {
    return false;
  }

  return true;
}

FilePropertyBag NativeValueTraits<FilePropertyBag>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  FilePropertyBag impl;
  V8FilePropertyBag::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
