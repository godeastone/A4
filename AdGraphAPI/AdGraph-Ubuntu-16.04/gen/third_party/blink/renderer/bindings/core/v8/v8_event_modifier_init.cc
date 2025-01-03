// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_event_modifier_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_ui_event_init.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8EventModifierInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "altKey",
    "ctrlKey",
    "metaKey",
    "modifierAltGraph",
    "modifierCapsLock",
    "modifierFn",
    "modifierNumLock",
    "modifierScrollLock",
    "modifierSymbol",
    "shiftKey",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8EventModifierInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, EventModifierInit& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8UIEventInit::ToImpl(isolate, v8Value, impl, exceptionState);
  if (exceptionState.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8EventModifierInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> altKeyValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&altKeyValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (altKeyValue.IsEmpty() || altKeyValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool altKeyCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, altKeyValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setAltKey(altKeyCppValue);
  }

  v8::Local<v8::Value> ctrlKeyValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&ctrlKeyValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (ctrlKeyValue.IsEmpty() || ctrlKeyValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool ctrlKeyCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, ctrlKeyValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setCtrlKey(ctrlKeyCppValue);
  }

  v8::Local<v8::Value> metaKeyValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&metaKeyValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (metaKeyValue.IsEmpty() || metaKeyValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool metaKeyCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, metaKeyValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setMetaKey(metaKeyCppValue);
  }

  v8::Local<v8::Value> modifierAltGraphValue;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&modifierAltGraphValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (modifierAltGraphValue.IsEmpty() || modifierAltGraphValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool modifierAltGraphCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, modifierAltGraphValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setModifierAltGraph(modifierAltGraphCppValue);
  }

  v8::Local<v8::Value> modifierCapsLockValue;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&modifierCapsLockValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (modifierCapsLockValue.IsEmpty() || modifierCapsLockValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool modifierCapsLockCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, modifierCapsLockValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setModifierCapsLock(modifierCapsLockCppValue);
  }

  v8::Local<v8::Value> modifierFnValue;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&modifierFnValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (modifierFnValue.IsEmpty() || modifierFnValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool modifierFnCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, modifierFnValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setModifierFn(modifierFnCppValue);
  }

  v8::Local<v8::Value> modifierNumLockValue;
  if (!v8Object->Get(context, keys[6].Get(isolate)).ToLocal(&modifierNumLockValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (modifierNumLockValue.IsEmpty() || modifierNumLockValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool modifierNumLockCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, modifierNumLockValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setModifierNumLock(modifierNumLockCppValue);
  }

  v8::Local<v8::Value> modifierScrollLockValue;
  if (!v8Object->Get(context, keys[7].Get(isolate)).ToLocal(&modifierScrollLockValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (modifierScrollLockValue.IsEmpty() || modifierScrollLockValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool modifierScrollLockCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, modifierScrollLockValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setModifierScrollLock(modifierScrollLockCppValue);
  }

  v8::Local<v8::Value> modifierSymbolValue;
  if (!v8Object->Get(context, keys[8].Get(isolate)).ToLocal(&modifierSymbolValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (modifierSymbolValue.IsEmpty() || modifierSymbolValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool modifierSymbolCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, modifierSymbolValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setModifierSymbol(modifierSymbolCppValue);
  }

  v8::Local<v8::Value> shiftKeyValue;
  if (!v8Object->Get(context, keys[9].Get(isolate)).ToLocal(&shiftKeyValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (shiftKeyValue.IsEmpty() || shiftKeyValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool shiftKeyCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, shiftKeyValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setShiftKey(shiftKeyCppValue);
  }
}

v8::Local<v8::Value> EventModifierInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8EventModifierInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8EventModifierInit(const EventModifierInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8UIEventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8EventModifierInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> altKeyValue;
  bool altKeyHasValueOrDefault = false;
  if (impl.hasAltKey()) {
    altKeyValue = v8::Boolean::New(isolate, impl.altKey());
    altKeyHasValueOrDefault = true;
  } else {
    altKeyValue = v8::Boolean::New(isolate, false);
    altKeyHasValueOrDefault = true;
  }
  if (altKeyHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), altKeyValue))) {
    return false;
  }

  v8::Local<v8::Value> ctrlKeyValue;
  bool ctrlKeyHasValueOrDefault = false;
  if (impl.hasCtrlKey()) {
    ctrlKeyValue = v8::Boolean::New(isolate, impl.ctrlKey());
    ctrlKeyHasValueOrDefault = true;
  } else {
    ctrlKeyValue = v8::Boolean::New(isolate, false);
    ctrlKeyHasValueOrDefault = true;
  }
  if (ctrlKeyHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), ctrlKeyValue))) {
    return false;
  }

  v8::Local<v8::Value> metaKeyValue;
  bool metaKeyHasValueOrDefault = false;
  if (impl.hasMetaKey()) {
    metaKeyValue = v8::Boolean::New(isolate, impl.metaKey());
    metaKeyHasValueOrDefault = true;
  } else {
    metaKeyValue = v8::Boolean::New(isolate, false);
    metaKeyHasValueOrDefault = true;
  }
  if (metaKeyHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), metaKeyValue))) {
    return false;
  }

  v8::Local<v8::Value> modifierAltGraphValue;
  bool modifierAltGraphHasValueOrDefault = false;
  if (impl.hasModifierAltGraph()) {
    modifierAltGraphValue = v8::Boolean::New(isolate, impl.modifierAltGraph());
    modifierAltGraphHasValueOrDefault = true;
  } else {
    modifierAltGraphValue = v8::Boolean::New(isolate, false);
    modifierAltGraphHasValueOrDefault = true;
  }
  if (modifierAltGraphHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), modifierAltGraphValue))) {
    return false;
  }

  v8::Local<v8::Value> modifierCapsLockValue;
  bool modifierCapsLockHasValueOrDefault = false;
  if (impl.hasModifierCapsLock()) {
    modifierCapsLockValue = v8::Boolean::New(isolate, impl.modifierCapsLock());
    modifierCapsLockHasValueOrDefault = true;
  } else {
    modifierCapsLockValue = v8::Boolean::New(isolate, false);
    modifierCapsLockHasValueOrDefault = true;
  }
  if (modifierCapsLockHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[4].Get(isolate), modifierCapsLockValue))) {
    return false;
  }

  v8::Local<v8::Value> modifierFnValue;
  bool modifierFnHasValueOrDefault = false;
  if (impl.hasModifierFn()) {
    modifierFnValue = v8::Boolean::New(isolate, impl.modifierFn());
    modifierFnHasValueOrDefault = true;
  } else {
    modifierFnValue = v8::Boolean::New(isolate, false);
    modifierFnHasValueOrDefault = true;
  }
  if (modifierFnHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[5].Get(isolate), modifierFnValue))) {
    return false;
  }

  v8::Local<v8::Value> modifierNumLockValue;
  bool modifierNumLockHasValueOrDefault = false;
  if (impl.hasModifierNumLock()) {
    modifierNumLockValue = v8::Boolean::New(isolate, impl.modifierNumLock());
    modifierNumLockHasValueOrDefault = true;
  } else {
    modifierNumLockValue = v8::Boolean::New(isolate, false);
    modifierNumLockHasValueOrDefault = true;
  }
  if (modifierNumLockHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[6].Get(isolate), modifierNumLockValue))) {
    return false;
  }

  v8::Local<v8::Value> modifierScrollLockValue;
  bool modifierScrollLockHasValueOrDefault = false;
  if (impl.hasModifierScrollLock()) {
    modifierScrollLockValue = v8::Boolean::New(isolate, impl.modifierScrollLock());
    modifierScrollLockHasValueOrDefault = true;
  } else {
    modifierScrollLockValue = v8::Boolean::New(isolate, false);
    modifierScrollLockHasValueOrDefault = true;
  }
  if (modifierScrollLockHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[7].Get(isolate), modifierScrollLockValue))) {
    return false;
  }

  v8::Local<v8::Value> modifierSymbolValue;
  bool modifierSymbolHasValueOrDefault = false;
  if (impl.hasModifierSymbol()) {
    modifierSymbolValue = v8::Boolean::New(isolate, impl.modifierSymbol());
    modifierSymbolHasValueOrDefault = true;
  } else {
    modifierSymbolValue = v8::Boolean::New(isolate, false);
    modifierSymbolHasValueOrDefault = true;
  }
  if (modifierSymbolHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[8].Get(isolate), modifierSymbolValue))) {
    return false;
  }

  v8::Local<v8::Value> shiftKeyValue;
  bool shiftKeyHasValueOrDefault = false;
  if (impl.hasShiftKey()) {
    shiftKeyValue = v8::Boolean::New(isolate, impl.shiftKey());
    shiftKeyHasValueOrDefault = true;
  } else {
    shiftKeyValue = v8::Boolean::New(isolate, false);
    shiftKeyHasValueOrDefault = true;
  }
  if (shiftKeyHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[9].Get(isolate), shiftKeyValue))) {
    return false;
  }

  return true;
}

EventModifierInit NativeValueTraits<EventModifierInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  EventModifierInit impl;
  V8EventModifierInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
