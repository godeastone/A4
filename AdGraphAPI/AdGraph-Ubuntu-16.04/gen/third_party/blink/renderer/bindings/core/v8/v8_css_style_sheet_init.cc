// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_css_style_sheet_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_media_list.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8CSSStyleSheetInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "alternate",
    "disabled",
    "media",
    "title",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8CSSStyleSheetInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, CSSStyleSheetInit& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8CSSStyleSheetInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> alternateValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&alternateValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (alternateValue.IsEmpty() || alternateValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool alternateCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, alternateValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setAlternate(alternateCppValue);
  }

  v8::Local<v8::Value> disabledValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&disabledValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (disabledValue.IsEmpty() || disabledValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool disabledCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, disabledValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setDisabled(disabledCppValue);
  }

  v8::Local<v8::Value> mediaValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&mediaValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (mediaValue.IsEmpty() || mediaValue->IsUndefined()) {
    // Do nothing.
  } else {
    MediaListOrString mediaCppValue;
    V8MediaListOrString::ToImpl(isolate, mediaValue, mediaCppValue, UnionTypeConversionMode::kNotNullable, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setMedia(mediaCppValue);
  }

  v8::Local<v8::Value> titleValue;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&titleValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (titleValue.IsEmpty() || titleValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> titleCppValue = titleValue;
    if (!titleCppValue.Prepare(exceptionState))
      return;
    impl.setTitle(titleCppValue);
  }
}

v8::Local<v8::Value> CSSStyleSheetInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8CSSStyleSheetInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8CSSStyleSheetInit(const CSSStyleSheetInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8CSSStyleSheetInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> alternateValue;
  bool alternateHasValueOrDefault = false;
  if (impl.hasAlternate()) {
    alternateValue = v8::Boolean::New(isolate, impl.alternate());
    alternateHasValueOrDefault = true;
  } else {
    alternateValue = v8::Boolean::New(isolate, false);
    alternateHasValueOrDefault = true;
  }
  if (alternateHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), alternateValue))) {
    return false;
  }

  v8::Local<v8::Value> disabledValue;
  bool disabledHasValueOrDefault = false;
  if (impl.hasDisabled()) {
    disabledValue = v8::Boolean::New(isolate, impl.disabled());
    disabledHasValueOrDefault = true;
  } else {
    disabledValue = v8::Boolean::New(isolate, false);
    disabledHasValueOrDefault = true;
  }
  if (disabledHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), disabledValue))) {
    return false;
  }

  v8::Local<v8::Value> mediaValue;
  bool mediaHasValueOrDefault = false;
  if (impl.hasMedia()) {
    mediaValue = ToV8(impl.media(), creationContext, isolate);
    mediaHasValueOrDefault = true;
  } else {
    mediaValue = ToV8(MediaListOrString::FromString(WTF::g_empty_string), creationContext, isolate);
    mediaHasValueOrDefault = true;
  }
  if (mediaHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), mediaValue))) {
    return false;
  }

  v8::Local<v8::Value> titleValue;
  bool titleHasValueOrDefault = false;
  if (impl.hasTitle()) {
    titleValue = V8String(isolate, impl.title());
    titleHasValueOrDefault = true;
  } else {
    titleValue = V8String(isolate, WTF::g_empty_string);
    titleHasValueOrDefault = true;
  }
  if (titleHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), titleValue))) {
    return false;
  }

  return true;
}

CSSStyleSheetInit NativeValueTraits<CSSStyleSheetInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  CSSStyleSheetInit impl;
  V8CSSStyleSheetInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
