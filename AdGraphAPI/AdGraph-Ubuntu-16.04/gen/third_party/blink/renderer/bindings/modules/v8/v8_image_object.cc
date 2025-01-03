// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_image_object.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8ImageObjectKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "sizes",
    "src",
    "type",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8ImageObject::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, ImageObject& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    exceptionState.ThrowTypeError("Missing required member(s): src.");
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8ImageObjectKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> sizesValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&sizesValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (sizesValue.IsEmpty() || sizesValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> sizesCppValue = sizesValue;
    if (!sizesCppValue.Prepare(exceptionState))
      return;
    impl.setSizes(sizesCppValue);
  }

  v8::Local<v8::Value> srcValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&srcValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (srcValue.IsEmpty() || srcValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member src is undefined.");
    return;
  } else {
    V8StringResource<> srcCppValue = NativeValueTraits<IDLUSVString>::NativeValue(isolate, srcValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setSrc(srcCppValue);
  }

  v8::Local<v8::Value> typeValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&typeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (typeValue.IsEmpty() || typeValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> typeCppValue = typeValue;
    if (!typeCppValue.Prepare(exceptionState))
      return;
    impl.setType(typeCppValue);
  }
}

v8::Local<v8::Value> ImageObject::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8ImageObject(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8ImageObject(const ImageObject& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8ImageObjectKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> sizesValue;
  bool sizesHasValueOrDefault = false;
  if (impl.hasSizes()) {
    sizesValue = V8String(isolate, impl.sizes());
    sizesHasValueOrDefault = true;
  }
  if (sizesHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), sizesValue))) {
    return false;
  }

  v8::Local<v8::Value> srcValue;
  bool srcHasValueOrDefault = false;
  if (impl.hasSrc()) {
    srcValue = V8String(isolate, impl.src());
    srcHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (srcHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), srcValue))) {
    return false;
  }

  v8::Local<v8::Value> typeValue;
  bool typeHasValueOrDefault = false;
  if (impl.hasType()) {
    typeValue = V8String(isolate, impl.type());
    typeHasValueOrDefault = true;
  }
  if (typeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), typeValue))) {
    return false;
  }

  return true;
}

ImageObject NativeValueTraits<ImageObject>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  ImageObject impl;
  V8ImageObject::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
