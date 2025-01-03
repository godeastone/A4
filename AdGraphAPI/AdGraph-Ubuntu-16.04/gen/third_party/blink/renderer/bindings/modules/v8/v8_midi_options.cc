// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_midi_options.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8MIDIOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "sysex",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8MIDIOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, MIDIOptions& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8MIDIOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> sysexValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&sysexValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (sysexValue.IsEmpty() || sysexValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool sysexCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, sysexValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setSysex(sysexCppValue);
  }
}

v8::Local<v8::Value> MIDIOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8MIDIOptions(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8MIDIOptions(const MIDIOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8MIDIOptionsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> sysexValue;
  bool sysexHasValueOrDefault = false;
  if (impl.hasSysex()) {
    sysexValue = v8::Boolean::New(isolate, impl.sysex());
    sysexHasValueOrDefault = true;
  }
  if (sysexHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), sysexValue))) {
    return false;
  }

  return true;
}

MIDIOptions NativeValueTraits<MIDIOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  MIDIOptions impl;
  V8MIDIOptions::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
