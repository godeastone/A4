// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_background_fetch_options.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_icon_definition.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8BackgroundFetchOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "downloadTotal",
    "icons",
    "title",
    "totalDownloadSize",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8BackgroundFetchOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, BackgroundFetchOptions& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8BackgroundFetchOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> downloadTotalValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&downloadTotalValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (downloadTotalValue.IsEmpty() || downloadTotalValue->IsUndefined()) {
    // Do nothing.
  } else {
    uint64_t downloadTotalCppValue = NativeValueTraits<IDLUnsignedLongLong>::NativeValue(isolate, downloadTotalValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setDownloadTotal(downloadTotalCppValue);
  }

  v8::Local<v8::Value> iconsValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&iconsValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (iconsValue.IsEmpty() || iconsValue->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<IconDefinition> iconsCppValue = NativeValueTraits<IDLSequence<IconDefinition>>::NativeValue(isolate, iconsValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setIcons(iconsCppValue);
  }

  v8::Local<v8::Value> titleValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&titleValue)) {
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

  v8::Local<v8::Value> totalDownloadSizeValue;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&totalDownloadSizeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (totalDownloadSizeValue.IsEmpty() || totalDownloadSizeValue->IsUndefined()) {
    // Do nothing.
  } else {
    uint64_t totalDownloadSizeCppValue = NativeValueTraits<IDLUnsignedLongLong>::NativeValue(isolate, totalDownloadSizeValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setDownloadTotal(totalDownloadSizeCppValue);
  }
}

v8::Local<v8::Value> BackgroundFetchOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8BackgroundFetchOptions(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8BackgroundFetchOptions(const BackgroundFetchOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8BackgroundFetchOptionsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> downloadTotalValue;
  bool downloadTotalHasValueOrDefault = false;
  if (impl.hasDownloadTotal()) {
    downloadTotalValue = v8::Number::New(isolate, static_cast<double>(impl.downloadTotal()));
    downloadTotalHasValueOrDefault = true;
  } else {
    downloadTotalValue = v8::Number::New(isolate, static_cast<double>(0));
    downloadTotalHasValueOrDefault = true;
  }
  if (downloadTotalHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), downloadTotalValue))) {
    return false;
  }

  v8::Local<v8::Value> iconsValue;
  bool iconsHasValueOrDefault = false;
  if (impl.hasIcons()) {
    iconsValue = ToV8(impl.icons(), creationContext, isolate);
    iconsHasValueOrDefault = true;
  } else {
    iconsValue = ToV8(HeapVector<IconDefinition>(), creationContext, isolate);
    iconsHasValueOrDefault = true;
  }
  if (iconsHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), iconsValue))) {
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
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), titleValue))) {
    return false;
  }

  v8::Local<v8::Value> totalDownloadSizeValue;
  bool totalDownloadSizeHasValueOrDefault = false;
  if (impl.hasDownloadTotal()) {
    totalDownloadSizeValue = v8::Number::New(isolate, static_cast<double>(impl.downloadTotal()));
    totalDownloadSizeHasValueOrDefault = true;
  } else {
    totalDownloadSizeValue = v8::Number::New(isolate, static_cast<double>(0));
    totalDownloadSizeHasValueOrDefault = true;
  }
  if (totalDownloadSizeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), totalDownloadSizeValue))) {
    return false;
  }

  return true;
}

BackgroundFetchOptions NativeValueTraits<BackgroundFetchOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  BackgroundFetchOptions impl;
  V8BackgroundFetchOptions::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
