// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_midi_message_event_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer_view.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_init.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_uint8_array.h"
#include "third_party/blink/renderer/core/typed_arrays/array_buffer_view_helpers.h"
#include "third_party/blink/renderer/core/typed_arrays/flexible_array_buffer_view.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8MIDIMessageEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "data",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8MIDIMessageEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, MIDIMessageEventInit& impl, ExceptionState& exceptionState) {
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

  const v8::Eternal<v8::Name>* keys = eternalV8MIDIMessageEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> dataValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&dataValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (dataValue.IsEmpty() || dataValue->IsUndefined()) {
    // Do nothing.
  } else if (dataValue->IsNull()) {
    impl.setDataToNull();
  } else {
    NotShared<DOMUint8Array> dataCppValue = ToNotShared<NotShared<DOMUint8Array>>(isolate, dataValue, exceptionState);
    if (exceptionState.HadException())
      return;
    if (!dataCppValue) {
      exceptionState.ThrowTypeError("member data is not of type Uint8Array.");
      return;
    }
    impl.setData(dataCppValue);
  }
}

v8::Local<v8::Value> MIDIMessageEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8MIDIMessageEventInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8MIDIMessageEventInit(const MIDIMessageEventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8MIDIMessageEventInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> dataValue;
  bool dataHasValueOrDefault = false;
  if (impl.hasData()) {
    dataValue = ToV8(impl.data(), creationContext, isolate);
    dataHasValueOrDefault = true;
  } else {
    dataValue = v8::Null(isolate);
    dataHasValueOrDefault = true;
  }
  if (dataHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), dataValue))) {
    return false;
  }

  return true;
}

MIDIMessageEventInit NativeValueTraits<MIDIMessageEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  MIDIMessageEventInit impl;
  V8MIDIMessageEventInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
