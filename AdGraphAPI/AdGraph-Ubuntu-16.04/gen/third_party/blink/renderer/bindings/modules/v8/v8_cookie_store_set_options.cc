// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_cookie_store_set_options.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8CookieStoreSetOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "domain",
    "expires",
    "httpOnly",
    "name",
    "path",
    "secure",
    "value",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8CookieStoreSetOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, CookieStoreSetOptions& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8CookieStoreSetOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> domainValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&domainValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (domainValue.IsEmpty() || domainValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> domainCppValue = NativeValueTraits<IDLUSVString>::NativeValue(isolate, domainValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setDomain(domainCppValue);
  }

  v8::Local<v8::Value> expiresValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&expiresValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (expiresValue.IsEmpty() || expiresValue->IsUndefined()) {
    // Do nothing.
  } else if (expiresValue->IsNull()) {
    impl.setExpiresToNull();
  } else {
    uint64_t expiresCppValue = NativeValueTraits<IDLUnsignedLongLong>::NativeValue(isolate, expiresValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setExpires(expiresCppValue);
  }

  v8::Local<v8::Value> httpOnlyValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&httpOnlyValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (httpOnlyValue.IsEmpty() || httpOnlyValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool httpOnlyCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, httpOnlyValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setHttpOnly(httpOnlyCppValue);
  }

  v8::Local<v8::Value> nameValue;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&nameValue)) {
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

  v8::Local<v8::Value> pathValue;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&pathValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (pathValue.IsEmpty() || pathValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> pathCppValue = NativeValueTraits<IDLUSVString>::NativeValue(isolate, pathValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setPath(pathCppValue);
  }

  v8::Local<v8::Value> secureValue;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&secureValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (secureValue.IsEmpty() || secureValue->IsUndefined()) {
    // Do nothing.
  } else if (secureValue->IsNull()) {
    impl.setSecureToNull();
  } else {
    bool secureCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, secureValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setSecure(secureCppValue);
  }

  v8::Local<v8::Value> valueValue;
  if (!v8Object->Get(context, keys[6].Get(isolate)).ToLocal(&valueValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (valueValue.IsEmpty() || valueValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> valueCppValue = NativeValueTraits<IDLUSVString>::NativeValue(isolate, valueValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setValue(valueCppValue);
  }
}

v8::Local<v8::Value> CookieStoreSetOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8CookieStoreSetOptions(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8CookieStoreSetOptions(const CookieStoreSetOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8CookieStoreSetOptionsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> domainValue;
  bool domainHasValueOrDefault = false;
  if (impl.hasDomain()) {
    domainValue = V8String(isolate, impl.domain());
    domainHasValueOrDefault = true;
  }
  if (domainHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), domainValue))) {
    return false;
  }

  v8::Local<v8::Value> expiresValue;
  bool expiresHasValueOrDefault = false;
  if (impl.hasExpires()) {
    expiresValue = v8::Number::New(isolate, static_cast<double>(impl.expires()));
    expiresHasValueOrDefault = true;
  } else {
    expiresValue = v8::Null(isolate);
    expiresHasValueOrDefault = true;
  }
  if (expiresHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), expiresValue))) {
    return false;
  }

  v8::Local<v8::Value> httpOnlyValue;
  bool httpOnlyHasValueOrDefault = false;
  if (impl.hasHttpOnly()) {
    httpOnlyValue = v8::Boolean::New(isolate, impl.httpOnly());
    httpOnlyHasValueOrDefault = true;
  } else {
    httpOnlyValue = v8::Boolean::New(isolate, false);
    httpOnlyHasValueOrDefault = true;
  }
  if (httpOnlyHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), httpOnlyValue))) {
    return false;
  }

  v8::Local<v8::Value> nameValue;
  bool nameHasValueOrDefault = false;
  if (impl.hasName()) {
    nameValue = V8String(isolate, impl.name());
    nameHasValueOrDefault = true;
  }
  if (nameHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), nameValue))) {
    return false;
  }

  v8::Local<v8::Value> pathValue;
  bool pathHasValueOrDefault = false;
  if (impl.hasPath()) {
    pathValue = V8String(isolate, impl.path());
    pathHasValueOrDefault = true;
  } else {
    pathValue = V8String(isolate, "/");
    pathHasValueOrDefault = true;
  }
  if (pathHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[4].Get(isolate), pathValue))) {
    return false;
  }

  v8::Local<v8::Value> secureValue;
  bool secureHasValueOrDefault = false;
  if (impl.hasSecure()) {
    secureValue = v8::Boolean::New(isolate, impl.secure());
    secureHasValueOrDefault = true;
  } else {
    secureValue = v8::Null(isolate);
    secureHasValueOrDefault = true;
  }
  if (secureHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[5].Get(isolate), secureValue))) {
    return false;
  }

  v8::Local<v8::Value> valueValue;
  bool valueHasValueOrDefault = false;
  if (impl.hasValue()) {
    valueValue = V8String(isolate, impl.value());
    valueHasValueOrDefault = true;
  }
  if (valueHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[6].Get(isolate), valueValue))) {
    return false;
  }

  return true;
}

CookieStoreSetOptions NativeValueTraits<CookieStoreSetOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  CookieStoreSetOptions impl;
  V8CookieStoreSetOptions::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
