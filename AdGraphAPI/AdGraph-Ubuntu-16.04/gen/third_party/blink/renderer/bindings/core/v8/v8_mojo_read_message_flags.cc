// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_mojo_read_message_flags.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8MojoReadMessageFlagsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "mayDiscard",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8MojoReadMessageFlags::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, MojoReadMessageFlags& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8MojoReadMessageFlagsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> mayDiscardValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&mayDiscardValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (mayDiscardValue.IsEmpty() || mayDiscardValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool mayDiscardCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, mayDiscardValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setMayDiscard(mayDiscardCppValue);
  }
}

v8::Local<v8::Value> MojoReadMessageFlags::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8MojoReadMessageFlags(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8MojoReadMessageFlags(const MojoReadMessageFlags& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8MojoReadMessageFlagsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> mayDiscardValue;
  bool mayDiscardHasValueOrDefault = false;
  if (impl.hasMayDiscard()) {
    mayDiscardValue = v8::Boolean::New(isolate, impl.mayDiscard());
    mayDiscardHasValueOrDefault = true;
  } else {
    mayDiscardValue = v8::Boolean::New(isolate, false);
    mayDiscardHasValueOrDefault = true;
  }
  if (mayDiscardHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), mayDiscardValue))) {
    return false;
  }

  return true;
}

MojoReadMessageFlags NativeValueTraits<MojoReadMessageFlags>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  MojoReadMessageFlags impl;
  V8MojoReadMessageFlags::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
