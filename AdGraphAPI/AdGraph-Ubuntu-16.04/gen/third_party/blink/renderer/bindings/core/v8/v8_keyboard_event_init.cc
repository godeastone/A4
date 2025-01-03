// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_keyboard_event_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_modifier_init.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8KeyboardEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "charCode",
    "code",
    "isComposing",
    "key",
    "keyCode",
    "location",
    "repeat",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8KeyboardEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, KeyboardEventInit& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8EventModifierInit::ToImpl(isolate, v8Value, impl, exceptionState);
  if (exceptionState.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8KeyboardEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> charCodeValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&charCodeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (charCodeValue.IsEmpty() || charCodeValue->IsUndefined()) {
    // Do nothing.
  } else {
    uint32_t charCodeCppValue = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, charCodeValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setCharCode(charCodeCppValue);
  }

  v8::Local<v8::Value> codeValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&codeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (codeValue.IsEmpty() || codeValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> codeCppValue = codeValue;
    if (!codeCppValue.Prepare(exceptionState))
      return;
    impl.setCode(codeCppValue);
  }

  v8::Local<v8::Value> isComposingValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&isComposingValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (isComposingValue.IsEmpty() || isComposingValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool isComposingCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, isComposingValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setIsComposing(isComposingCppValue);
  }

  v8::Local<v8::Value> keyValue;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&keyValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (keyValue.IsEmpty() || keyValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> keyCppValue = keyValue;
    if (!keyCppValue.Prepare(exceptionState))
      return;
    impl.setKey(keyCppValue);
  }

  v8::Local<v8::Value> keyCodeValue;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&keyCodeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (keyCodeValue.IsEmpty() || keyCodeValue->IsUndefined()) {
    // Do nothing.
  } else {
    uint32_t keyCodeCppValue = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, keyCodeValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setKeyCode(keyCodeCppValue);
  }

  v8::Local<v8::Value> locationValue;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&locationValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (locationValue.IsEmpty() || locationValue->IsUndefined()) {
    // Do nothing.
  } else {
    uint32_t locationCppValue = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, locationValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setLocation(locationCppValue);
  }

  v8::Local<v8::Value> repeatValue;
  if (!v8Object->Get(context, keys[6].Get(isolate)).ToLocal(&repeatValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (repeatValue.IsEmpty() || repeatValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool repeatCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, repeatValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setRepeat(repeatCppValue);
  }
}

v8::Local<v8::Value> KeyboardEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8KeyboardEventInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8KeyboardEventInit(const KeyboardEventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EventModifierInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8KeyboardEventInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> charCodeValue;
  bool charCodeHasValueOrDefault = false;
  if (impl.hasCharCode()) {
    charCodeValue = v8::Integer::NewFromUnsigned(isolate, impl.charCode());
    charCodeHasValueOrDefault = true;
  } else {
    charCodeValue = v8::Integer::NewFromUnsigned(isolate, 0u);
    charCodeHasValueOrDefault = true;
  }
  if (charCodeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), charCodeValue))) {
    return false;
  }

  v8::Local<v8::Value> codeValue;
  bool codeHasValueOrDefault = false;
  if (impl.hasCode()) {
    codeValue = V8String(isolate, impl.code());
    codeHasValueOrDefault = true;
  } else {
    codeValue = V8String(isolate, WTF::g_empty_string);
    codeHasValueOrDefault = true;
  }
  if (codeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), codeValue))) {
    return false;
  }

  v8::Local<v8::Value> isComposingValue;
  bool isComposingHasValueOrDefault = false;
  if (impl.hasIsComposing()) {
    isComposingValue = v8::Boolean::New(isolate, impl.isComposing());
    isComposingHasValueOrDefault = true;
  } else {
    isComposingValue = v8::Boolean::New(isolate, false);
    isComposingHasValueOrDefault = true;
  }
  if (isComposingHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), isComposingValue))) {
    return false;
  }

  v8::Local<v8::Value> keyValue;
  bool keyHasValueOrDefault = false;
  if (impl.hasKey()) {
    keyValue = V8String(isolate, impl.key());
    keyHasValueOrDefault = true;
  } else {
    keyValue = V8String(isolate, WTF::g_empty_string);
    keyHasValueOrDefault = true;
  }
  if (keyHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), keyValue))) {
    return false;
  }

  v8::Local<v8::Value> keyCodeValue;
  bool keyCodeHasValueOrDefault = false;
  if (impl.hasKeyCode()) {
    keyCodeValue = v8::Integer::NewFromUnsigned(isolate, impl.keyCode());
    keyCodeHasValueOrDefault = true;
  } else {
    keyCodeValue = v8::Integer::NewFromUnsigned(isolate, 0u);
    keyCodeHasValueOrDefault = true;
  }
  if (keyCodeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[4].Get(isolate), keyCodeValue))) {
    return false;
  }

  v8::Local<v8::Value> locationValue;
  bool locationHasValueOrDefault = false;
  if (impl.hasLocation()) {
    locationValue = v8::Integer::NewFromUnsigned(isolate, impl.location());
    locationHasValueOrDefault = true;
  } else {
    locationValue = v8::Integer::NewFromUnsigned(isolate, 0u);
    locationHasValueOrDefault = true;
  }
  if (locationHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[5].Get(isolate), locationValue))) {
    return false;
  }

  v8::Local<v8::Value> repeatValue;
  bool repeatHasValueOrDefault = false;
  if (impl.hasRepeat()) {
    repeatValue = v8::Boolean::New(isolate, impl.repeat());
    repeatHasValueOrDefault = true;
  } else {
    repeatValue = v8::Boolean::New(isolate, false);
    repeatHasValueOrDefault = true;
  }
  if (repeatHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[6].Get(isolate), repeatValue))) {
    return false;
  }

  return true;
}

KeyboardEventInit NativeValueTraits<KeyboardEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  KeyboardEventInit impl;
  V8KeyboardEventInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
