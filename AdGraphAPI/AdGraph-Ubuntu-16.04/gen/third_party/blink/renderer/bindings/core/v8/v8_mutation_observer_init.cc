// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_mutation_observer_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8MutationObserverInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "attributeFilter",
    "attributeOldValue",
    "attributes",
    "characterData",
    "characterDataOldValue",
    "childList",
    "subtree",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8MutationObserverInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, MutationObserverInit& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8MutationObserverInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> attributeFilterValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&attributeFilterValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (attributeFilterValue.IsEmpty() || attributeFilterValue->IsUndefined()) {
    // Do nothing.
  } else {
    Vector<String> attributeFilterCppValue = NativeValueTraits<IDLSequence<IDLString>>::NativeValue(isolate, attributeFilterValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setAttributeFilter(attributeFilterCppValue);
  }

  v8::Local<v8::Value> attributeOldValueValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&attributeOldValueValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (attributeOldValueValue.IsEmpty() || attributeOldValueValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool attributeOldValueCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, attributeOldValueValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setAttributeOldValue(attributeOldValueCppValue);
  }

  v8::Local<v8::Value> attributesValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&attributesValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (attributesValue.IsEmpty() || attributesValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool attributesCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, attributesValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setAttributes(attributesCppValue);
  }

  v8::Local<v8::Value> characterDataValue;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&characterDataValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (characterDataValue.IsEmpty() || characterDataValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool characterDataCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, characterDataValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setCharacterData(characterDataCppValue);
  }

  v8::Local<v8::Value> characterDataOldValueValue;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&characterDataOldValueValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (characterDataOldValueValue.IsEmpty() || characterDataOldValueValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool characterDataOldValueCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, characterDataOldValueValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setCharacterDataOldValue(characterDataOldValueCppValue);
  }

  v8::Local<v8::Value> childListValue;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&childListValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (childListValue.IsEmpty() || childListValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool childListCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, childListValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setChildList(childListCppValue);
  }

  v8::Local<v8::Value> subtreeValue;
  if (!v8Object->Get(context, keys[6].Get(isolate)).ToLocal(&subtreeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (subtreeValue.IsEmpty() || subtreeValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool subtreeCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, subtreeValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setSubtree(subtreeCppValue);
  }
}

v8::Local<v8::Value> MutationObserverInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8MutationObserverInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8MutationObserverInit(const MutationObserverInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8MutationObserverInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> attributeFilterValue;
  bool attributeFilterHasValueOrDefault = false;
  if (impl.hasAttributeFilter()) {
    attributeFilterValue = ToV8(impl.attributeFilter(), creationContext, isolate);
    attributeFilterHasValueOrDefault = true;
  }
  if (attributeFilterHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), attributeFilterValue))) {
    return false;
  }

  v8::Local<v8::Value> attributeOldValueValue;
  bool attributeOldValueHasValueOrDefault = false;
  if (impl.hasAttributeOldValue()) {
    attributeOldValueValue = v8::Boolean::New(isolate, impl.attributeOldValue());
    attributeOldValueHasValueOrDefault = true;
  }
  if (attributeOldValueHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), attributeOldValueValue))) {
    return false;
  }

  v8::Local<v8::Value> attributesValue;
  bool attributesHasValueOrDefault = false;
  if (impl.hasAttributes()) {
    attributesValue = v8::Boolean::New(isolate, impl.attributes());
    attributesHasValueOrDefault = true;
  }
  if (attributesHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), attributesValue))) {
    return false;
  }

  v8::Local<v8::Value> characterDataValue;
  bool characterDataHasValueOrDefault = false;
  if (impl.hasCharacterData()) {
    characterDataValue = v8::Boolean::New(isolate, impl.characterData());
    characterDataHasValueOrDefault = true;
  }
  if (characterDataHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), characterDataValue))) {
    return false;
  }

  v8::Local<v8::Value> characterDataOldValueValue;
  bool characterDataOldValueHasValueOrDefault = false;
  if (impl.hasCharacterDataOldValue()) {
    characterDataOldValueValue = v8::Boolean::New(isolate, impl.characterDataOldValue());
    characterDataOldValueHasValueOrDefault = true;
  }
  if (characterDataOldValueHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[4].Get(isolate), characterDataOldValueValue))) {
    return false;
  }

  v8::Local<v8::Value> childListValue;
  bool childListHasValueOrDefault = false;
  if (impl.hasChildList()) {
    childListValue = v8::Boolean::New(isolate, impl.childList());
    childListHasValueOrDefault = true;
  } else {
    childListValue = v8::Boolean::New(isolate, false);
    childListHasValueOrDefault = true;
  }
  if (childListHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[5].Get(isolate), childListValue))) {
    return false;
  }

  v8::Local<v8::Value> subtreeValue;
  bool subtreeHasValueOrDefault = false;
  if (impl.hasSubtree()) {
    subtreeValue = v8::Boolean::New(isolate, impl.subtree());
    subtreeHasValueOrDefault = true;
  } else {
    subtreeValue = v8::Boolean::New(isolate, false);
    subtreeHasValueOrDefault = true;
  }
  if (subtreeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[6].Get(isolate), subtreeValue))) {
    return false;
  }

  return true;
}

MutationObserverInit NativeValueTraits<MutationObserverInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  MutationObserverInit impl;
  V8MutationObserverInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
