// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_security_policy_violation_event_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_init.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8SecurityPolicyViolationEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "blockedURI",
    "columnNumber",
    "disposition",
    "documentURI",
    "effectiveDirective",
    "lineNumber",
    "originalPolicy",
    "referrer",
    "sample",
    "sourceFile",
    "statusCode",
    "violatedDirective",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8SecurityPolicyViolationEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, SecurityPolicyViolationEventInit& impl, ExceptionState& exceptionState) {
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

  const v8::Eternal<v8::Name>* keys = eternalV8SecurityPolicyViolationEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> blockedURIValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&blockedURIValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (blockedURIValue.IsEmpty() || blockedURIValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> blockedURICppValue = blockedURIValue;
    if (!blockedURICppValue.Prepare(exceptionState))
      return;
    impl.setBlockedURI(blockedURICppValue);
  }

  v8::Local<v8::Value> columnNumberValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&columnNumberValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (columnNumberValue.IsEmpty() || columnNumberValue->IsUndefined()) {
    // Do nothing.
  } else {
    int32_t columnNumberCppValue = NativeValueTraits<IDLLong>::NativeValue(isolate, columnNumberValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setColumnNumber(columnNumberCppValue);
  }

  v8::Local<v8::Value> dispositionValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&dispositionValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (dispositionValue.IsEmpty() || dispositionValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> dispositionCppValue = dispositionValue;
    if (!dispositionCppValue.Prepare(exceptionState))
      return;
    const char* validValues[] = {
        "enforce",
        "report",
    };
    if (!IsValidEnum(dispositionCppValue, validValues, arraysize(validValues), "SecurityPolicyViolationEventDisposition", exceptionState))
      return;
    impl.setDisposition(dispositionCppValue);
  }

  v8::Local<v8::Value> documentURIValue;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&documentURIValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (documentURIValue.IsEmpty() || documentURIValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> documentURICppValue = documentURIValue;
    if (!documentURICppValue.Prepare(exceptionState))
      return;
    impl.setDocumentURI(documentURICppValue);
  }

  v8::Local<v8::Value> effectiveDirectiveValue;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&effectiveDirectiveValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (effectiveDirectiveValue.IsEmpty() || effectiveDirectiveValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> effectiveDirectiveCppValue = effectiveDirectiveValue;
    if (!effectiveDirectiveCppValue.Prepare(exceptionState))
      return;
    impl.setEffectiveDirective(effectiveDirectiveCppValue);
  }

  v8::Local<v8::Value> lineNumberValue;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&lineNumberValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (lineNumberValue.IsEmpty() || lineNumberValue->IsUndefined()) {
    // Do nothing.
  } else {
    int32_t lineNumberCppValue = NativeValueTraits<IDLLong>::NativeValue(isolate, lineNumberValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setLineNumber(lineNumberCppValue);
  }

  v8::Local<v8::Value> originalPolicyValue;
  if (!v8Object->Get(context, keys[6].Get(isolate)).ToLocal(&originalPolicyValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (originalPolicyValue.IsEmpty() || originalPolicyValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> originalPolicyCppValue = originalPolicyValue;
    if (!originalPolicyCppValue.Prepare(exceptionState))
      return;
    impl.setOriginalPolicy(originalPolicyCppValue);
  }

  v8::Local<v8::Value> referrerValue;
  if (!v8Object->Get(context, keys[7].Get(isolate)).ToLocal(&referrerValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (referrerValue.IsEmpty() || referrerValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> referrerCppValue = referrerValue;
    if (!referrerCppValue.Prepare(exceptionState))
      return;
    impl.setReferrer(referrerCppValue);
  }

  v8::Local<v8::Value> sampleValue;
  if (!v8Object->Get(context, keys[8].Get(isolate)).ToLocal(&sampleValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (sampleValue.IsEmpty() || sampleValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> sampleCppValue = sampleValue;
    if (!sampleCppValue.Prepare(exceptionState))
      return;
    impl.setSample(sampleCppValue);
  }

  v8::Local<v8::Value> sourceFileValue;
  if (!v8Object->Get(context, keys[9].Get(isolate)).ToLocal(&sourceFileValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (sourceFileValue.IsEmpty() || sourceFileValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> sourceFileCppValue = sourceFileValue;
    if (!sourceFileCppValue.Prepare(exceptionState))
      return;
    impl.setSourceFile(sourceFileCppValue);
  }

  v8::Local<v8::Value> statusCodeValue;
  if (!v8Object->Get(context, keys[10].Get(isolate)).ToLocal(&statusCodeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (statusCodeValue.IsEmpty() || statusCodeValue->IsUndefined()) {
    // Do nothing.
  } else {
    uint16_t statusCodeCppValue = NativeValueTraits<IDLUnsignedShort>::NativeValue(isolate, statusCodeValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setStatusCode(statusCodeCppValue);
  }

  v8::Local<v8::Value> violatedDirectiveValue;
  if (!v8Object->Get(context, keys[11].Get(isolate)).ToLocal(&violatedDirectiveValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (violatedDirectiveValue.IsEmpty() || violatedDirectiveValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> violatedDirectiveCppValue = violatedDirectiveValue;
    if (!violatedDirectiveCppValue.Prepare(exceptionState))
      return;
    impl.setViolatedDirective(violatedDirectiveCppValue);
  }
}

v8::Local<v8::Value> SecurityPolicyViolationEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8SecurityPolicyViolationEventInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8SecurityPolicyViolationEventInit(const SecurityPolicyViolationEventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8SecurityPolicyViolationEventInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> blockedURIValue;
  bool blockedURIHasValueOrDefault = false;
  if (impl.hasBlockedURI()) {
    blockedURIValue = V8String(isolate, impl.blockedURI());
    blockedURIHasValueOrDefault = true;
  }
  if (blockedURIHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), blockedURIValue))) {
    return false;
  }

  v8::Local<v8::Value> columnNumberValue;
  bool columnNumberHasValueOrDefault = false;
  if (impl.hasColumnNumber()) {
    columnNumberValue = v8::Integer::New(isolate, impl.columnNumber());
    columnNumberHasValueOrDefault = true;
  }
  if (columnNumberHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), columnNumberValue))) {
    return false;
  }

  v8::Local<v8::Value> dispositionValue;
  bool dispositionHasValueOrDefault = false;
  if (impl.hasDisposition()) {
    dispositionValue = V8String(isolate, impl.disposition());
    dispositionHasValueOrDefault = true;
  }
  if (dispositionHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), dispositionValue))) {
    return false;
  }

  v8::Local<v8::Value> documentURIValue;
  bool documentURIHasValueOrDefault = false;
  if (impl.hasDocumentURI()) {
    documentURIValue = V8String(isolate, impl.documentURI());
    documentURIHasValueOrDefault = true;
  }
  if (documentURIHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), documentURIValue))) {
    return false;
  }

  v8::Local<v8::Value> effectiveDirectiveValue;
  bool effectiveDirectiveHasValueOrDefault = false;
  if (impl.hasEffectiveDirective()) {
    effectiveDirectiveValue = V8String(isolate, impl.effectiveDirective());
    effectiveDirectiveHasValueOrDefault = true;
  }
  if (effectiveDirectiveHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[4].Get(isolate), effectiveDirectiveValue))) {
    return false;
  }

  v8::Local<v8::Value> lineNumberValue;
  bool lineNumberHasValueOrDefault = false;
  if (impl.hasLineNumber()) {
    lineNumberValue = v8::Integer::New(isolate, impl.lineNumber());
    lineNumberHasValueOrDefault = true;
  }
  if (lineNumberHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[5].Get(isolate), lineNumberValue))) {
    return false;
  }

  v8::Local<v8::Value> originalPolicyValue;
  bool originalPolicyHasValueOrDefault = false;
  if (impl.hasOriginalPolicy()) {
    originalPolicyValue = V8String(isolate, impl.originalPolicy());
    originalPolicyHasValueOrDefault = true;
  }
  if (originalPolicyHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[6].Get(isolate), originalPolicyValue))) {
    return false;
  }

  v8::Local<v8::Value> referrerValue;
  bool referrerHasValueOrDefault = false;
  if (impl.hasReferrer()) {
    referrerValue = V8String(isolate, impl.referrer());
    referrerHasValueOrDefault = true;
  }
  if (referrerHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[7].Get(isolate), referrerValue))) {
    return false;
  }

  v8::Local<v8::Value> sampleValue;
  bool sampleHasValueOrDefault = false;
  if (impl.hasSample()) {
    sampleValue = V8String(isolate, impl.sample());
    sampleHasValueOrDefault = true;
  }
  if (sampleHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[8].Get(isolate), sampleValue))) {
    return false;
  }

  v8::Local<v8::Value> sourceFileValue;
  bool sourceFileHasValueOrDefault = false;
  if (impl.hasSourceFile()) {
    sourceFileValue = V8String(isolate, impl.sourceFile());
    sourceFileHasValueOrDefault = true;
  }
  if (sourceFileHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[9].Get(isolate), sourceFileValue))) {
    return false;
  }

  v8::Local<v8::Value> statusCodeValue;
  bool statusCodeHasValueOrDefault = false;
  if (impl.hasStatusCode()) {
    statusCodeValue = v8::Integer::NewFromUnsigned(isolate, impl.statusCode());
    statusCodeHasValueOrDefault = true;
  }
  if (statusCodeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[10].Get(isolate), statusCodeValue))) {
    return false;
  }

  v8::Local<v8::Value> violatedDirectiveValue;
  bool violatedDirectiveHasValueOrDefault = false;
  if (impl.hasViolatedDirective()) {
    violatedDirectiveValue = V8String(isolate, impl.violatedDirective());
    violatedDirectiveHasValueOrDefault = true;
  }
  if (violatedDirectiveHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[11].Get(isolate), violatedDirectiveValue))) {
    return false;
  }

  return true;
}

SecurityPolicyViolationEventInit NativeValueTraits<SecurityPolicyViolationEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  SecurityPolicyViolationEventInit impl;
  V8SecurityPolicyViolationEventInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
