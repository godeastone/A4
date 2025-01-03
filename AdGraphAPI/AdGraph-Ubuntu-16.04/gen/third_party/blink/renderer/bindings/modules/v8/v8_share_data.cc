// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_share_data.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8ShareDataKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "text",
    "title",
    "url",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8ShareData::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, ShareData& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8ShareDataKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> textValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&textValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (textValue.IsEmpty() || textValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> textCppValue = NativeValueTraits<IDLUSVString>::NativeValue(isolate, textValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setText(textCppValue);
  }

  v8::Local<v8::Value> titleValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&titleValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (titleValue.IsEmpty() || titleValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> titleCppValue = NativeValueTraits<IDLUSVString>::NativeValue(isolate, titleValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setTitle(titleCppValue);
  }

  v8::Local<v8::Value> urlValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&urlValue)) {
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

v8::Local<v8::Value> ShareData::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8ShareData(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8ShareData(const ShareData& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8ShareDataKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> textValue;
  bool textHasValueOrDefault = false;
  if (impl.hasText()) {
    textValue = V8String(isolate, impl.text());
    textHasValueOrDefault = true;
  }
  if (textHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), textValue))) {
    return false;
  }

  v8::Local<v8::Value> titleValue;
  bool titleHasValueOrDefault = false;
  if (impl.hasTitle()) {
    titleValue = V8String(isolate, impl.title());
    titleHasValueOrDefault = true;
  }
  if (titleHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), titleValue))) {
    return false;
  }

  v8::Local<v8::Value> urlValue;
  bool urlHasValueOrDefault = false;
  if (impl.hasURL()) {
    urlValue = V8String(isolate, impl.url());
    urlHasValueOrDefault = true;
  }
  if (urlHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), urlValue))) {
    return false;
  }

  return true;
}

ShareData NativeValueTraits<ShareData>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  ShareData impl;
  V8ShareData::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
