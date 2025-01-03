// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_element_definition_options.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_style_sheet.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8ElementDefinitionOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "extends",
    "style",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8ElementDefinitionOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, ElementDefinitionOptions& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8ElementDefinitionOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> extendsValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&extendsValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (extendsValue.IsEmpty() || extendsValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<kTreatNullAndUndefinedAsNullString> extendsCppValue = extendsValue;
    if (!extendsCppValue.Prepare(exceptionState))
      return;
    impl.setExtends(extendsCppValue);
  }

  v8::Local<v8::Value> styleValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&styleValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (styleValue.IsEmpty() || styleValue->IsUndefined()) {
    // Do nothing.
  } else {
    CSSStyleSheet* styleCppValue = V8CSSStyleSheet::ToImplWithTypeCheck(isolate, styleValue);
    if (!styleCppValue) {
      exceptionState.ThrowTypeError("member style is not of type CSSStyleSheet.");
      return;
    }
    impl.setStyle(styleCppValue);
  }
}

v8::Local<v8::Value> ElementDefinitionOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8ElementDefinitionOptions(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8ElementDefinitionOptions(const ElementDefinitionOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8ElementDefinitionOptionsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> extendsValue;
  bool extendsHasValueOrDefault = false;
  if (impl.hasExtends()) {
    extendsValue = V8String(isolate, impl.extends());
    extendsHasValueOrDefault = true;
  } else {
    extendsValue = v8::Null(isolate);
    extendsHasValueOrDefault = true;
  }
  if (extendsHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), extendsValue))) {
    return false;
  }

  v8::Local<v8::Value> styleValue;
  bool styleHasValueOrDefault = false;
  if (impl.hasStyle()) {
    styleValue = ToV8(impl.style(), creationContext, isolate);
    styleHasValueOrDefault = true;
  }
  if (styleHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), styleValue))) {
    return false;
  }

  return true;
}

ElementDefinitionOptions NativeValueTraits<ElementDefinitionOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  ElementDefinitionOptions impl;
  V8ElementDefinitionOptions::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
