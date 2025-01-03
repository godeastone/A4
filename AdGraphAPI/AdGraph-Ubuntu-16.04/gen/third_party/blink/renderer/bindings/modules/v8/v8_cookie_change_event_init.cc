// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_cookie_change_event_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_init.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_cookie_list_item.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8CookieChangeEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "changed",
    "deleted",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8CookieChangeEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, CookieChangeEventInit& impl, ExceptionState& exceptionState) {
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

  const v8::Eternal<v8::Name>* keys = eternalV8CookieChangeEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> changedValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&changedValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (changedValue.IsEmpty() || changedValue->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<CookieListItem> changedCppValue = NativeValueTraits<IDLSequence<CookieListItem>>::NativeValue(isolate, changedValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setChanged(changedCppValue);
  }

  v8::Local<v8::Value> deletedValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&deletedValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (deletedValue.IsEmpty() || deletedValue->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<CookieListItem> deletedCppValue = NativeValueTraits<IDLSequence<CookieListItem>>::NativeValue(isolate, deletedValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setDeleted(deletedCppValue);
  }
}

v8::Local<v8::Value> CookieChangeEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8CookieChangeEventInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8CookieChangeEventInit(const CookieChangeEventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8CookieChangeEventInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> changedValue;
  bool changedHasValueOrDefault = false;
  if (impl.hasChanged()) {
    changedValue = ToV8(impl.changed(), creationContext, isolate);
    changedHasValueOrDefault = true;
  }
  if (changedHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), changedValue))) {
    return false;
  }

  v8::Local<v8::Value> deletedValue;
  bool deletedHasValueOrDefault = false;
  if (impl.hasDeleted()) {
    deletedValue = ToV8(impl.deleted(), creationContext, isolate);
    deletedHasValueOrDefault = true;
  }
  if (deletedHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), deletedValue))) {
    return false;
  }

  return true;
}

CookieChangeEventInit NativeValueTraits<CookieChangeEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  CookieChangeEventInit impl;
  V8CookieChangeEventInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
