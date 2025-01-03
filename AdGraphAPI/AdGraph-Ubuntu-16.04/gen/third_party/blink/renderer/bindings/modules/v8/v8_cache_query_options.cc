// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_cache_query_options.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8CacheQueryOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "cacheName",
    "ignoreMethod",
    "ignoreSearch",
    "ignoreVary",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8CacheQueryOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, CacheQueryOptions& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8CacheQueryOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> cacheNameValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&cacheNameValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (cacheNameValue.IsEmpty() || cacheNameValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> cacheNameCppValue = cacheNameValue;
    if (!cacheNameCppValue.Prepare(exceptionState))
      return;
    impl.setCacheName(cacheNameCppValue);
  }

  v8::Local<v8::Value> ignoreMethodValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&ignoreMethodValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (ignoreMethodValue.IsEmpty() || ignoreMethodValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool ignoreMethodCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, ignoreMethodValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setIgnoreMethod(ignoreMethodCppValue);
  }

  v8::Local<v8::Value> ignoreSearchValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&ignoreSearchValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (ignoreSearchValue.IsEmpty() || ignoreSearchValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool ignoreSearchCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, ignoreSearchValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setIgnoreSearch(ignoreSearchCppValue);
  }

  v8::Local<v8::Value> ignoreVaryValue;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&ignoreVaryValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (ignoreVaryValue.IsEmpty() || ignoreVaryValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool ignoreVaryCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, ignoreVaryValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setIgnoreVary(ignoreVaryCppValue);
  }
}

v8::Local<v8::Value> CacheQueryOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8CacheQueryOptions(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8CacheQueryOptions(const CacheQueryOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8CacheQueryOptionsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> cacheNameValue;
  bool cacheNameHasValueOrDefault = false;
  if (impl.hasCacheName()) {
    cacheNameValue = V8String(isolate, impl.cacheName());
    cacheNameHasValueOrDefault = true;
  }
  if (cacheNameHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), cacheNameValue))) {
    return false;
  }

  v8::Local<v8::Value> ignoreMethodValue;
  bool ignoreMethodHasValueOrDefault = false;
  if (impl.hasIgnoreMethod()) {
    ignoreMethodValue = v8::Boolean::New(isolate, impl.ignoreMethod());
    ignoreMethodHasValueOrDefault = true;
  } else {
    ignoreMethodValue = v8::Boolean::New(isolate, false);
    ignoreMethodHasValueOrDefault = true;
  }
  if (ignoreMethodHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), ignoreMethodValue))) {
    return false;
  }

  v8::Local<v8::Value> ignoreSearchValue;
  bool ignoreSearchHasValueOrDefault = false;
  if (impl.hasIgnoreSearch()) {
    ignoreSearchValue = v8::Boolean::New(isolate, impl.ignoreSearch());
    ignoreSearchHasValueOrDefault = true;
  } else {
    ignoreSearchValue = v8::Boolean::New(isolate, false);
    ignoreSearchHasValueOrDefault = true;
  }
  if (ignoreSearchHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), ignoreSearchValue))) {
    return false;
  }

  v8::Local<v8::Value> ignoreVaryValue;
  bool ignoreVaryHasValueOrDefault = false;
  if (impl.hasIgnoreVary()) {
    ignoreVaryValue = v8::Boolean::New(isolate, impl.ignoreVary());
    ignoreVaryHasValueOrDefault = true;
  } else {
    ignoreVaryValue = v8::Boolean::New(isolate, false);
    ignoreVaryHasValueOrDefault = true;
  }
  if (ignoreVaryHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), ignoreVaryValue))) {
    return false;
  }

  return true;
}

CacheQueryOptions NativeValueTraits<CacheQueryOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  CacheQueryOptions impl;
  V8CacheQueryOptions::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
