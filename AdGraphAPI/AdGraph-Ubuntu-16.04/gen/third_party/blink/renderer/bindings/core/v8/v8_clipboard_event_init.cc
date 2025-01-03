// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_clipboard_event_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_data_transfer.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_init.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8ClipboardEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "clipboardData",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8ClipboardEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, ClipboardEventInit& impl, ExceptionState& exceptionState) {
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

  const v8::Eternal<v8::Name>* keys = eternalV8ClipboardEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> clipboardDataValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&clipboardDataValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (clipboardDataValue.IsEmpty() || clipboardDataValue->IsUndefined()) {
    // Do nothing.
  } else if (clipboardDataValue->IsNull()) {
    impl.setClipboardDataToNull();
  } else {
    DataTransfer* clipboardDataCppValue = V8DataTransfer::ToImplWithTypeCheck(isolate, clipboardDataValue);
    if (!clipboardDataCppValue) {
      exceptionState.ThrowTypeError("member clipboardData is not of type DataTransfer.");
      return;
    }
    impl.setClipboardData(clipboardDataCppValue);
  }
}

v8::Local<v8::Value> ClipboardEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8ClipboardEventInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8ClipboardEventInit(const ClipboardEventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8ClipboardEventInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> clipboardDataValue;
  bool clipboardDataHasValueOrDefault = false;
  if (impl.hasClipboardData()) {
    clipboardDataValue = ToV8(impl.clipboardData(), creationContext, isolate);
    clipboardDataHasValueOrDefault = true;
  } else {
    clipboardDataValue = v8::Null(isolate);
    clipboardDataHasValueOrDefault = true;
  }
  if (clipboardDataHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), clipboardDataValue))) {
    return false;
  }

  return true;
}

ClipboardEventInit NativeValueTraits<ClipboardEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  ClipboardEventInit impl;
  V8ClipboardEventInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
