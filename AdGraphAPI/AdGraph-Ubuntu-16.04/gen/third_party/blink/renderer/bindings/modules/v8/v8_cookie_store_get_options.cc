// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_cookie_store_get_options.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8CookieStoreGetOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "matchType",
    "name",
    "url",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8CookieStoreGetOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, CookieStoreGetOptions& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8CookieStoreGetOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> matchTypeValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&matchTypeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (matchTypeValue.IsEmpty() || matchTypeValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> matchTypeCppValue = matchTypeValue;
    if (!matchTypeCppValue.Prepare(exceptionState))
      return;
    const char* validValues[] = {
        "equals",
        "startsWith",
    };
    if (!IsValidEnum(matchTypeCppValue, validValues, arraysize(validValues), "CookieMatchType", exceptionState))
      return;
    impl.setMatchType(matchTypeCppValue);
  }

  v8::Local<v8::Value> nameValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&nameValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (nameValue.IsEmpty() || nameValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> nameCppValue = NativeValueTraits<IDLUSVString>::NativeValue(isolate, nameValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setName(nameCppValue);
  }

  v8::Local<v8::Value> urlValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&urlValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (urlValue.IsEmpty() || urlValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> urlCppValue = NativeValueTraits<IDLUSVString>::NativeValue(isolate, urlValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setURL(urlCppValue);
  }
}

v8::Local<v8::Value> CookieStoreGetOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8CookieStoreGetOptions(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8CookieStoreGetOptions(const CookieStoreGetOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8CookieStoreGetOptionsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> matchTypeValue;
  bool matchTypeHasValueOrDefault = false;
  if (impl.hasMatchType()) {
    matchTypeValue = V8String(isolate, impl.matchType());
    matchTypeHasValueOrDefault = true;
  } else {
    matchTypeValue = V8String(isolate, "equals");
    matchTypeHasValueOrDefault = true;
  }
  if (matchTypeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), matchTypeValue))) {
    return false;
  }

  v8::Local<v8::Value> nameValue;
  bool nameHasValueOrDefault = false;
  if (impl.hasName()) {
    nameValue = V8String(isolate, impl.name());
    nameHasValueOrDefault = true;
  }
  if (nameHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), nameValue))) {
    return false;
  }

  v8::Local<v8::Value> urlValue;
  bool urlHasValueOrDefault = false;
  if (impl.hasURL()) {
    urlValue = V8String(isolate, impl.url());
    urlHasValueOrDefault = true;
  }
  if (urlHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), urlValue))) {
    return false;
  }

  return true;
}

CookieStoreGetOptions NativeValueTraits<CookieStoreGetOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  CookieStoreGetOptions impl;
  V8CookieStoreGetOptions::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
