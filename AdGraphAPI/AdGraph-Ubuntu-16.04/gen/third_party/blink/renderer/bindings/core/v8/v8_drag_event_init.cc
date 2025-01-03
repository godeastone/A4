// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_drag_event_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_data_transfer.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_mouse_event_init.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8DragEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "dataTransfer",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8DragEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, DragEventInit& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8MouseEventInit::ToImpl(isolate, v8Value, impl, exceptionState);
  if (exceptionState.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8DragEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> dataTransferValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&dataTransferValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (dataTransferValue.IsEmpty() || dataTransferValue->IsUndefined()) {
    // Do nothing.
  } else if (dataTransferValue->IsNull()) {
    impl.setGetDataTransferToNull();
  } else {
    DataTransfer* dataTransferCppValue = V8DataTransfer::ToImplWithTypeCheck(isolate, dataTransferValue);
    if (!dataTransferCppValue) {
      exceptionState.ThrowTypeError("member dataTransfer is not of type DataTransfer.");
      return;
    }
    impl.setGetDataTransfer(dataTransferCppValue);
  }
}

v8::Local<v8::Value> DragEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8DragEventInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8DragEventInit(const DragEventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8MouseEventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8DragEventInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> dataTransferValue;
  bool dataTransferHasValueOrDefault = false;
  if (impl.hasGetDataTransfer()) {
    dataTransferValue = ToV8(impl.getDataTransfer(), creationContext, isolate);
    dataTransferHasValueOrDefault = true;
  } else {
    dataTransferValue = v8::Null(isolate);
    dataTransferHasValueOrDefault = true;
  }
  if (dataTransferHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), dataTransferValue))) {
    return false;
  }

  return true;
}

DragEventInit NativeValueTraits<DragEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  DragEventInit impl;
  V8DragEventInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
