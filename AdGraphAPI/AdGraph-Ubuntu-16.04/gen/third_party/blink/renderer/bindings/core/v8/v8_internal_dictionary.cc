// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_internal_dictionary.h"

#include "third_party/blink/renderer/bindings/core/v8/dictionary.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_target.h"
#include "third_party/blink/renderer/core/frame/deprecation.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8InternalDictionaryKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "anyMember",
    "booleanMember",
    "byteStringMember",
    "deprecateLongMember",
    "dictionaryMember",
    "doubleMember",
    "doubleOrStringMember",
    "doubleOrStringSequenceMember",
    "elementMember",
    "elementOrNullMember",
    "enumMember",
    "enumMemberWithDefault",
    "enumOrNullMember",
    "eventTargetOrNullMember",
    "internalEnumOrInternalEnumSequenceMember",
    "longMember",
    "longMemberWithClamp",
    "longMemberWithDefault",
    "longMemberWithEnforceRange",
    "longOrNullMember",
    "longOrNullMemberWithDefault",
    "objectMember",
    "objectOrNullMemberWithDefault",
    "stringMember",
    "stringMemberWithDefault",
    "stringSequenceMember",
    "stringSequenceMemberWithDefault",
    "stringSequenceOrNullMember",
    "unrestrictedDoubleMember",
    "usvStringMember",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8InternalDictionary::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, InternalDictionary& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8InternalDictionaryKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> anyMemberValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&anyMemberValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (anyMemberValue.IsEmpty() || anyMemberValue->IsUndefined()) {
    // Do nothing.
  } else {
    ScriptValue anyMemberCppValue = ScriptValue(ScriptState::Current(isolate), anyMemberValue);
    impl.setAnyMember(anyMemberCppValue);
  }

  v8::Local<v8::Value> booleanMemberValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&booleanMemberValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (booleanMemberValue.IsEmpty() || booleanMemberValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool booleanMemberCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, booleanMemberValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setBooleanMember(booleanMemberCppValue);
  }

  v8::Local<v8::Value> byteStringMemberValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&byteStringMemberValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (byteStringMemberValue.IsEmpty() || byteStringMemberValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> byteStringMemberCppValue = NativeValueTraits<IDLByteString>::NativeValue(isolate, byteStringMemberValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setByteStringMember(byteStringMemberCppValue);
  }

  v8::Local<v8::Value> deprecateLongMemberValue;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&deprecateLongMemberValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (deprecateLongMemberValue.IsEmpty() || deprecateLongMemberValue->IsUndefined()) {
    // Do nothing.
  } else {
    Deprecation::CountDeprecation(CurrentExecutionContext(isolate), WebFeature::kPrefixedStorageInfo);
    int32_t deprecateLongMemberCppValue = NativeValueTraits<IDLLong>::NativeValue(isolate, deprecateLongMemberValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setLongMember(deprecateLongMemberCppValue);
  }

  v8::Local<v8::Value> dictionaryMemberValue;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&dictionaryMemberValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (dictionaryMemberValue.IsEmpty() || dictionaryMemberValue->IsUndefined()) {
    // Do nothing.
  } else {
    Dictionary dictionaryMemberCppValue = NativeValueTraits<Dictionary>::NativeValue(isolate, dictionaryMemberValue, exceptionState);
    if (exceptionState.HadException())
      return;
    if (!dictionaryMemberCppValue.IsObject()) {
      exceptionState.ThrowTypeError("member dictionaryMember is not an object.");
      return;
    }
    impl.setDictionaryMember(dictionaryMemberCppValue);
  }

  v8::Local<v8::Value> doubleMemberValue;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&doubleMemberValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (doubleMemberValue.IsEmpty() || doubleMemberValue->IsUndefined()) {
    // Do nothing.
  } else {
    double doubleMemberCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, doubleMemberValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setDoubleMember(doubleMemberCppValue);
  }

  v8::Local<v8::Value> doubleOrStringMemberValue;
  if (!v8Object->Get(context, keys[6].Get(isolate)).ToLocal(&doubleOrStringMemberValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (doubleOrStringMemberValue.IsEmpty() || doubleOrStringMemberValue->IsUndefined()) {
    // Do nothing.
  } else {
    DoubleOrString doubleOrStringMemberCppValue;
    V8DoubleOrString::ToImpl(isolate, doubleOrStringMemberValue, doubleOrStringMemberCppValue, UnionTypeConversionMode::kNotNullable, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setDoubleOrStringMember(doubleOrStringMemberCppValue);
  }

  v8::Local<v8::Value> doubleOrStringSequenceMemberValue;
  if (!v8Object->Get(context, keys[7].Get(isolate)).ToLocal(&doubleOrStringSequenceMemberValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (doubleOrStringSequenceMemberValue.IsEmpty() || doubleOrStringSequenceMemberValue->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<DoubleOrString> doubleOrStringSequenceMemberCppValue = NativeValueTraits<IDLSequence<DoubleOrString>>::NativeValue(isolate, doubleOrStringSequenceMemberValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setDoubleOrStringSequenceMember(doubleOrStringSequenceMemberCppValue);
  }

  v8::Local<v8::Value> elementMemberValue;
  if (!v8Object->Get(context, keys[8].Get(isolate)).ToLocal(&elementMemberValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (elementMemberValue.IsEmpty() || elementMemberValue->IsUndefined()) {
    // Do nothing.
  } else {
    Element* elementMemberCppValue = V8Element::ToImplWithTypeCheck(isolate, elementMemberValue);
    if (!elementMemberCppValue) {
      exceptionState.ThrowTypeError("member elementMember is not of type Element.");
      return;
    }
    impl.setElementMember(elementMemberCppValue);
  }

  v8::Local<v8::Value> elementOrNullMemberValue;
  if (!v8Object->Get(context, keys[9].Get(isolate)).ToLocal(&elementOrNullMemberValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (elementOrNullMemberValue.IsEmpty() || elementOrNullMemberValue->IsUndefined()) {
    // Do nothing.
  } else if (elementOrNullMemberValue->IsNull()) {
    impl.setElementOrNullMemberToNull();
  } else {
    Element* elementOrNullMemberCppValue = V8Element::ToImplWithTypeCheck(isolate, elementOrNullMemberValue);
    if (!elementOrNullMemberCppValue) {
      exceptionState.ThrowTypeError("member elementOrNullMember is not of type Element.");
      return;
    }
    impl.setElementOrNullMember(elementOrNullMemberCppValue);
  }

  v8::Local<v8::Value> enumMemberValue;
  if (!v8Object->Get(context, keys[10].Get(isolate)).ToLocal(&enumMemberValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (enumMemberValue.IsEmpty() || enumMemberValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> enumMemberCppValue = enumMemberValue;
    if (!enumMemberCppValue.Prepare(exceptionState))
      return;
    const char* validValues[] = {
        "foo",
        "bar",
        "baz",
    };
    if (!IsValidEnum(enumMemberCppValue, validValues, arraysize(validValues), "InternalEnum", exceptionState))
      return;
    impl.setEnumMember(enumMemberCppValue);
  }

  v8::Local<v8::Value> enumMemberWithDefaultValue;
  if (!v8Object->Get(context, keys[11].Get(isolate)).ToLocal(&enumMemberWithDefaultValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (enumMemberWithDefaultValue.IsEmpty() || enumMemberWithDefaultValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> enumMemberWithDefaultCppValue = enumMemberWithDefaultValue;
    if (!enumMemberWithDefaultCppValue.Prepare(exceptionState))
      return;
    const char* validValues[] = {
        "foo",
        "bar",
        "baz",
    };
    if (!IsValidEnum(enumMemberWithDefaultCppValue, validValues, arraysize(validValues), "InternalEnum", exceptionState))
      return;
    impl.setEnumMemberWithDefault(enumMemberWithDefaultCppValue);
  }

  v8::Local<v8::Value> enumOrNullMemberValue;
  if (!v8Object->Get(context, keys[12].Get(isolate)).ToLocal(&enumOrNullMemberValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (enumOrNullMemberValue.IsEmpty() || enumOrNullMemberValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<kTreatNullAndUndefinedAsNullString> enumOrNullMemberCppValue = enumOrNullMemberValue;
    if (!enumOrNullMemberCppValue.Prepare(exceptionState))
      return;
    const char* validValues[] = {
        nullptr,
        "foo",
        "bar",
        "baz",
    };
    if (!IsValidEnum(enumOrNullMemberCppValue, validValues, arraysize(validValues), "InternalEnum", exceptionState))
      return;
    impl.setEnumOrNullMember(enumOrNullMemberCppValue);
  }

  v8::Local<v8::Value> eventTargetOrNullMemberValue;
  if (!v8Object->Get(context, keys[13].Get(isolate)).ToLocal(&eventTargetOrNullMemberValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (eventTargetOrNullMemberValue.IsEmpty() || eventTargetOrNullMemberValue->IsUndefined()) {
    // Do nothing.
  } else if (eventTargetOrNullMemberValue->IsNull()) {
    impl.setEventTargetOrNullMemberToNull();
  } else {
    EventTarget* eventTargetOrNullMemberCppValue = V8EventTarget::ToImplWithTypeCheck(isolate, eventTargetOrNullMemberValue);
    if (!eventTargetOrNullMemberCppValue) {
      exceptionState.ThrowTypeError("member eventTargetOrNullMember is not of type EventTarget.");
      return;
    }
    impl.setEventTargetOrNullMember(eventTargetOrNullMemberCppValue);
  }

  v8::Local<v8::Value> internalEnumOrInternalEnumSequenceMemberValue;
  if (!v8Object->Get(context, keys[14].Get(isolate)).ToLocal(&internalEnumOrInternalEnumSequenceMemberValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (internalEnumOrInternalEnumSequenceMemberValue.IsEmpty() || internalEnumOrInternalEnumSequenceMemberValue->IsUndefined()) {
    // Do nothing.
  } else {
    InternalEnumOrInternalEnumSequence internalEnumOrInternalEnumSequenceMemberCppValue;
    V8InternalEnumOrInternalEnumSequence::ToImpl(isolate, internalEnumOrInternalEnumSequenceMemberValue, internalEnumOrInternalEnumSequenceMemberCppValue, UnionTypeConversionMode::kNotNullable, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setInternalEnumOrInternalEnumSequenceMember(internalEnumOrInternalEnumSequenceMemberCppValue);
  }

  v8::Local<v8::Value> longMemberValue;
  if (!v8Object->Get(context, keys[15].Get(isolate)).ToLocal(&longMemberValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (longMemberValue.IsEmpty() || longMemberValue->IsUndefined()) {
    // Do nothing.
  } else {
    int32_t longMemberCppValue = NativeValueTraits<IDLLong>::NativeValue(isolate, longMemberValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setLongMember(longMemberCppValue);
  }

  v8::Local<v8::Value> longMemberWithClampValue;
  if (!v8Object->Get(context, keys[16].Get(isolate)).ToLocal(&longMemberWithClampValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (longMemberWithClampValue.IsEmpty() || longMemberWithClampValue->IsUndefined()) {
    // Do nothing.
  } else {
    int32_t longMemberWithClampCppValue = NativeValueTraits<IDLLong>::NativeValue(isolate, longMemberWithClampValue, exceptionState, kClamp);
    if (exceptionState.HadException())
      return;
    impl.setLongMemberWithClamp(longMemberWithClampCppValue);
  }

  v8::Local<v8::Value> longMemberWithDefaultValue;
  if (!v8Object->Get(context, keys[17].Get(isolate)).ToLocal(&longMemberWithDefaultValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (longMemberWithDefaultValue.IsEmpty() || longMemberWithDefaultValue->IsUndefined()) {
    // Do nothing.
  } else {
    int32_t longMemberWithDefaultCppValue = NativeValueTraits<IDLLong>::NativeValue(isolate, longMemberWithDefaultValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setLongMemberWithDefault(longMemberWithDefaultCppValue);
  }

  v8::Local<v8::Value> longMemberWithEnforceRangeValue;
  if (!v8Object->Get(context, keys[18].Get(isolate)).ToLocal(&longMemberWithEnforceRangeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (longMemberWithEnforceRangeValue.IsEmpty() || longMemberWithEnforceRangeValue->IsUndefined()) {
    // Do nothing.
  } else {
    int32_t longMemberWithEnforceRangeCppValue = NativeValueTraits<IDLLong>::NativeValue(isolate, longMemberWithEnforceRangeValue, exceptionState, kEnforceRange);
    if (exceptionState.HadException())
      return;
    impl.setLongMemberWithEnforceRange(longMemberWithEnforceRangeCppValue);
  }

  v8::Local<v8::Value> longOrNullMemberValue;
  if (!v8Object->Get(context, keys[19].Get(isolate)).ToLocal(&longOrNullMemberValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (longOrNullMemberValue.IsEmpty() || longOrNullMemberValue->IsUndefined()) {
    // Do nothing.
  } else if (longOrNullMemberValue->IsNull()) {
    impl.setLongOrNullMemberToNull();
  } else {
    int32_t longOrNullMemberCppValue = NativeValueTraits<IDLLong>::NativeValue(isolate, longOrNullMemberValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setLongOrNullMember(longOrNullMemberCppValue);
  }

  v8::Local<v8::Value> longOrNullMemberWithDefaultValue;
  if (!v8Object->Get(context, keys[20].Get(isolate)).ToLocal(&longOrNullMemberWithDefaultValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (longOrNullMemberWithDefaultValue.IsEmpty() || longOrNullMemberWithDefaultValue->IsUndefined()) {
    // Do nothing.
  } else if (longOrNullMemberWithDefaultValue->IsNull()) {
    impl.setLongOrNullMemberWithDefaultToNull();
  } else {
    int32_t longOrNullMemberWithDefaultCppValue = NativeValueTraits<IDLLong>::NativeValue(isolate, longOrNullMemberWithDefaultValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setLongOrNullMemberWithDefault(longOrNullMemberWithDefaultCppValue);
  }

  v8::Local<v8::Value> objectMemberValue;
  if (!v8Object->Get(context, keys[21].Get(isolate)).ToLocal(&objectMemberValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (objectMemberValue.IsEmpty() || objectMemberValue->IsUndefined()) {
    // Do nothing.
  } else {
    ScriptValue objectMemberCppValue = ScriptValue(ScriptState::Current(isolate), objectMemberValue);
    if (!objectMemberCppValue.IsObject()) {
      exceptionState.ThrowTypeError("member objectMember is not an object.");
      return;
    }
    impl.setObjectMember(objectMemberCppValue);
  }

  v8::Local<v8::Value> objectOrNullMemberWithDefaultValue;
  if (!v8Object->Get(context, keys[22].Get(isolate)).ToLocal(&objectOrNullMemberWithDefaultValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (objectOrNullMemberWithDefaultValue.IsEmpty() || objectOrNullMemberWithDefaultValue->IsUndefined()) {
    // Do nothing.
  } else if (objectOrNullMemberWithDefaultValue->IsNull()) {
    impl.setObjectOrNullMemberWithDefaultToNull();
  } else {
    ScriptValue objectOrNullMemberWithDefaultCppValue = ScriptValue(ScriptState::Current(isolate), objectOrNullMemberWithDefaultValue);
    if (!objectOrNullMemberWithDefaultCppValue.IsObject()) {
      exceptionState.ThrowTypeError("member objectOrNullMemberWithDefault is not an object.");
      return;
    }
    impl.setObjectOrNullMemberWithDefault(objectOrNullMemberWithDefaultCppValue);
  }

  v8::Local<v8::Value> stringMemberValue;
  if (!v8Object->Get(context, keys[23].Get(isolate)).ToLocal(&stringMemberValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (stringMemberValue.IsEmpty() || stringMemberValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> stringMemberCppValue = stringMemberValue;
    if (!stringMemberCppValue.Prepare(exceptionState))
      return;
    impl.setStringMember(stringMemberCppValue);
  }

  v8::Local<v8::Value> stringMemberWithDefaultValue;
  if (!v8Object->Get(context, keys[24].Get(isolate)).ToLocal(&stringMemberWithDefaultValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (stringMemberWithDefaultValue.IsEmpty() || stringMemberWithDefaultValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> stringMemberWithDefaultCppValue = stringMemberWithDefaultValue;
    if (!stringMemberWithDefaultCppValue.Prepare(exceptionState))
      return;
    impl.setStringMemberWithDefault(stringMemberWithDefaultCppValue);
  }

  v8::Local<v8::Value> stringSequenceMemberValue;
  if (!v8Object->Get(context, keys[25].Get(isolate)).ToLocal(&stringSequenceMemberValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (stringSequenceMemberValue.IsEmpty() || stringSequenceMemberValue->IsUndefined()) {
    // Do nothing.
  } else {
    Vector<String> stringSequenceMemberCppValue = NativeValueTraits<IDLSequence<IDLString>>::NativeValue(isolate, stringSequenceMemberValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setStringSequenceMember(stringSequenceMemberCppValue);
  }

  v8::Local<v8::Value> stringSequenceMemberWithDefaultValue;
  if (!v8Object->Get(context, keys[26].Get(isolate)).ToLocal(&stringSequenceMemberWithDefaultValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (stringSequenceMemberWithDefaultValue.IsEmpty() || stringSequenceMemberWithDefaultValue->IsUndefined()) {
    // Do nothing.
  } else {
    Vector<String> stringSequenceMemberWithDefaultCppValue = NativeValueTraits<IDLSequence<IDLString>>::NativeValue(isolate, stringSequenceMemberWithDefaultValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setStringSequenceMemberWithDefault(stringSequenceMemberWithDefaultCppValue);
  }

  v8::Local<v8::Value> stringSequenceOrNullMemberValue;
  if (!v8Object->Get(context, keys[27].Get(isolate)).ToLocal(&stringSequenceOrNullMemberValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (stringSequenceOrNullMemberValue.IsEmpty() || stringSequenceOrNullMemberValue->IsUndefined()) {
    // Do nothing.
  } else if (stringSequenceOrNullMemberValue->IsNull()) {
    impl.setStringSequenceOrNullMemberToNull();
  } else {
    Vector<String> stringSequenceOrNullMemberCppValue = NativeValueTraits<IDLSequence<IDLString>>::NativeValue(isolate, stringSequenceOrNullMemberValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setStringSequenceOrNullMember(stringSequenceOrNullMemberCppValue);
  }

  v8::Local<v8::Value> unrestrictedDoubleMemberValue;
  if (!v8Object->Get(context, keys[28].Get(isolate)).ToLocal(&unrestrictedDoubleMemberValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (unrestrictedDoubleMemberValue.IsEmpty() || unrestrictedDoubleMemberValue->IsUndefined()) {
    // Do nothing.
  } else {
    double unrestrictedDoubleMemberCppValue = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, unrestrictedDoubleMemberValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setUnrestrictedDoubleMember(unrestrictedDoubleMemberCppValue);
  }

  v8::Local<v8::Value> usvStringMemberValue;
  if (!v8Object->Get(context, keys[29].Get(isolate)).ToLocal(&usvStringMemberValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (usvStringMemberValue.IsEmpty() || usvStringMemberValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> usvStringMemberCppValue = NativeValueTraits<IDLUSVString>::NativeValue(isolate, usvStringMemberValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setUsvStringMember(usvStringMemberCppValue);
  }
}

v8::Local<v8::Value> InternalDictionary::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8InternalDictionary(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8InternalDictionary(const InternalDictionary& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8InternalDictionaryKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> anyMemberValue;
  bool anyMemberHasValueOrDefault = false;
  if (impl.hasAnyMember()) {
    anyMemberValue = impl.anyMember().V8Value();
    anyMemberHasValueOrDefault = true;
  }
  if (anyMemberHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), anyMemberValue))) {
    return false;
  }

  v8::Local<v8::Value> booleanMemberValue;
  bool booleanMemberHasValueOrDefault = false;
  if (impl.hasBooleanMember()) {
    booleanMemberValue = v8::Boolean::New(isolate, impl.booleanMember());
    booleanMemberHasValueOrDefault = true;
  }
  if (booleanMemberHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), booleanMemberValue))) {
    return false;
  }

  v8::Local<v8::Value> byteStringMemberValue;
  bool byteStringMemberHasValueOrDefault = false;
  if (impl.hasByteStringMember()) {
    byteStringMemberValue = V8String(isolate, impl.byteStringMember());
    byteStringMemberHasValueOrDefault = true;
  }
  if (byteStringMemberHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), byteStringMemberValue))) {
    return false;
  }

  v8::Local<v8::Value> deprecateLongMemberValue;
  bool deprecateLongMemberHasValueOrDefault = false;
  if (impl.hasLongMember()) {
    deprecateLongMemberValue = v8::Integer::New(isolate, impl.longMember());
    deprecateLongMemberHasValueOrDefault = true;
  }
  if (deprecateLongMemberHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), deprecateLongMemberValue))) {
    return false;
  }

  v8::Local<v8::Value> dictionaryMemberValue;
  bool dictionaryMemberHasValueOrDefault = false;
  if (impl.hasDictionaryMember()) {
    DCHECK(impl.dictionaryMember().IsObject());
    dictionaryMemberValue = impl.dictionaryMember().V8Value();
    dictionaryMemberHasValueOrDefault = true;
  }
  if (dictionaryMemberHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[4].Get(isolate), dictionaryMemberValue))) {
    return false;
  }

  v8::Local<v8::Value> doubleMemberValue;
  bool doubleMemberHasValueOrDefault = false;
  if (impl.hasDoubleMember()) {
    doubleMemberValue = v8::Number::New(isolate, impl.doubleMember());
    doubleMemberHasValueOrDefault = true;
  }
  if (doubleMemberHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[5].Get(isolate), doubleMemberValue))) {
    return false;
  }

  v8::Local<v8::Value> doubleOrStringMemberValue;
  bool doubleOrStringMemberHasValueOrDefault = false;
  if (impl.hasDoubleOrStringMember()) {
    doubleOrStringMemberValue = ToV8(impl.doubleOrStringMember(), creationContext, isolate);
    doubleOrStringMemberHasValueOrDefault = true;
  }
  if (doubleOrStringMemberHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[6].Get(isolate), doubleOrStringMemberValue))) {
    return false;
  }

  v8::Local<v8::Value> doubleOrStringSequenceMemberValue;
  bool doubleOrStringSequenceMemberHasValueOrDefault = false;
  if (impl.hasDoubleOrStringSequenceMember()) {
    doubleOrStringSequenceMemberValue = ToV8(impl.doubleOrStringSequenceMember(), creationContext, isolate);
    doubleOrStringSequenceMemberHasValueOrDefault = true;
  }
  if (doubleOrStringSequenceMemberHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[7].Get(isolate), doubleOrStringSequenceMemberValue))) {
    return false;
  }

  v8::Local<v8::Value> elementMemberValue;
  bool elementMemberHasValueOrDefault = false;
  if (impl.hasElementMember()) {
    elementMemberValue = ToV8(impl.elementMember(), creationContext, isolate);
    elementMemberHasValueOrDefault = true;
  }
  if (elementMemberHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[8].Get(isolate), elementMemberValue))) {
    return false;
  }

  v8::Local<v8::Value> elementOrNullMemberValue;
  bool elementOrNullMemberHasValueOrDefault = false;
  if (impl.hasElementOrNullMember()) {
    elementOrNullMemberValue = ToV8(impl.elementOrNullMember(), creationContext, isolate);
    elementOrNullMemberHasValueOrDefault = true;
  } else {
    elementOrNullMemberValue = v8::Null(isolate);
    elementOrNullMemberHasValueOrDefault = true;
  }
  if (elementOrNullMemberHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[9].Get(isolate), elementOrNullMemberValue))) {
    return false;
  }

  v8::Local<v8::Value> enumMemberValue;
  bool enumMemberHasValueOrDefault = false;
  if (impl.hasEnumMember()) {
    enumMemberValue = V8String(isolate, impl.enumMember());
    enumMemberHasValueOrDefault = true;
  }
  if (enumMemberHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[10].Get(isolate), enumMemberValue))) {
    return false;
  }

  v8::Local<v8::Value> enumMemberWithDefaultValue;
  bool enumMemberWithDefaultHasValueOrDefault = false;
  if (impl.hasEnumMemberWithDefault()) {
    enumMemberWithDefaultValue = V8String(isolate, impl.enumMemberWithDefault());
    enumMemberWithDefaultHasValueOrDefault = true;
  } else {
    enumMemberWithDefaultValue = V8String(isolate, "foo");
    enumMemberWithDefaultHasValueOrDefault = true;
  }
  if (enumMemberWithDefaultHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[11].Get(isolate), enumMemberWithDefaultValue))) {
    return false;
  }

  v8::Local<v8::Value> enumOrNullMemberValue;
  bool enumOrNullMemberHasValueOrDefault = false;
  if (impl.hasEnumOrNullMember()) {
    enumOrNullMemberValue = V8String(isolate, impl.enumOrNullMember());
    enumOrNullMemberHasValueOrDefault = true;
  } else {
    enumOrNullMemberValue = v8::Null(isolate);
    enumOrNullMemberHasValueOrDefault = true;
  }
  if (enumOrNullMemberHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[12].Get(isolate), enumOrNullMemberValue))) {
    return false;
  }

  v8::Local<v8::Value> eventTargetOrNullMemberValue;
  bool eventTargetOrNullMemberHasValueOrDefault = false;
  if (impl.hasEventTargetOrNullMember()) {
    eventTargetOrNullMemberValue = ToV8(impl.eventTargetOrNullMember(), creationContext, isolate);
    eventTargetOrNullMemberHasValueOrDefault = true;
  } else {
    eventTargetOrNullMemberValue = v8::Null(isolate);
    eventTargetOrNullMemberHasValueOrDefault = true;
  }
  if (eventTargetOrNullMemberHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[13].Get(isolate), eventTargetOrNullMemberValue))) {
    return false;
  }

  v8::Local<v8::Value> internalEnumOrInternalEnumSequenceMemberValue;
  bool internalEnumOrInternalEnumSequenceMemberHasValueOrDefault = false;
  if (impl.hasInternalEnumOrInternalEnumSequenceMember()) {
    internalEnumOrInternalEnumSequenceMemberValue = ToV8(impl.internalEnumOrInternalEnumSequenceMember(), creationContext, isolate);
    internalEnumOrInternalEnumSequenceMemberHasValueOrDefault = true;
  }
  if (internalEnumOrInternalEnumSequenceMemberHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[14].Get(isolate), internalEnumOrInternalEnumSequenceMemberValue))) {
    return false;
  }

  v8::Local<v8::Value> longMemberValue;
  bool longMemberHasValueOrDefault = false;
  if (impl.hasLongMember()) {
    longMemberValue = v8::Integer::New(isolate, impl.longMember());
    longMemberHasValueOrDefault = true;
  }
  if (longMemberHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[15].Get(isolate), longMemberValue))) {
    return false;
  }

  v8::Local<v8::Value> longMemberWithClampValue;
  bool longMemberWithClampHasValueOrDefault = false;
  if (impl.hasLongMemberWithClamp()) {
    longMemberWithClampValue = v8::Integer::New(isolate, impl.longMemberWithClamp());
    longMemberWithClampHasValueOrDefault = true;
  }
  if (longMemberWithClampHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[16].Get(isolate), longMemberWithClampValue))) {
    return false;
  }

  v8::Local<v8::Value> longMemberWithDefaultValue;
  bool longMemberWithDefaultHasValueOrDefault = false;
  if (impl.hasLongMemberWithDefault()) {
    longMemberWithDefaultValue = v8::Integer::New(isolate, impl.longMemberWithDefault());
    longMemberWithDefaultHasValueOrDefault = true;
  } else {
    longMemberWithDefaultValue = v8::Integer::New(isolate, 42);
    longMemberWithDefaultHasValueOrDefault = true;
  }
  if (longMemberWithDefaultHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[17].Get(isolate), longMemberWithDefaultValue))) {
    return false;
  }

  v8::Local<v8::Value> longMemberWithEnforceRangeValue;
  bool longMemberWithEnforceRangeHasValueOrDefault = false;
  if (impl.hasLongMemberWithEnforceRange()) {
    longMemberWithEnforceRangeValue = v8::Integer::New(isolate, impl.longMemberWithEnforceRange());
    longMemberWithEnforceRangeHasValueOrDefault = true;
  }
  if (longMemberWithEnforceRangeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[18].Get(isolate), longMemberWithEnforceRangeValue))) {
    return false;
  }

  v8::Local<v8::Value> longOrNullMemberValue;
  bool longOrNullMemberHasValueOrDefault = false;
  if (impl.hasLongOrNullMember()) {
    longOrNullMemberValue = v8::Integer::New(isolate, impl.longOrNullMember());
    longOrNullMemberHasValueOrDefault = true;
  } else {
    longOrNullMemberValue = v8::Null(isolate);
    longOrNullMemberHasValueOrDefault = true;
  }
  if (longOrNullMemberHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[19].Get(isolate), longOrNullMemberValue))) {
    return false;
  }

  v8::Local<v8::Value> longOrNullMemberWithDefaultValue;
  bool longOrNullMemberWithDefaultHasValueOrDefault = false;
  if (impl.hasLongOrNullMemberWithDefault()) {
    longOrNullMemberWithDefaultValue = v8::Integer::New(isolate, impl.longOrNullMemberWithDefault());
    longOrNullMemberWithDefaultHasValueOrDefault = true;
  } else {
    longOrNullMemberWithDefaultValue = v8::Null(isolate);
    longOrNullMemberWithDefaultHasValueOrDefault = true;
  }
  if (longOrNullMemberWithDefaultHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[20].Get(isolate), longOrNullMemberWithDefaultValue))) {
    return false;
  }

  v8::Local<v8::Value> objectMemberValue;
  bool objectMemberHasValueOrDefault = false;
  if (impl.hasObjectMember()) {
    DCHECK(impl.objectMember().IsObject());
    objectMemberValue = impl.objectMember().V8Value();
    objectMemberHasValueOrDefault = true;
  }
  if (objectMemberHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[21].Get(isolate), objectMemberValue))) {
    return false;
  }

  v8::Local<v8::Value> objectOrNullMemberWithDefaultValue;
  bool objectOrNullMemberWithDefaultHasValueOrDefault = false;
  if (impl.hasObjectOrNullMemberWithDefault()) {
    DCHECK(impl.objectOrNullMemberWithDefault().IsObject());
    objectOrNullMemberWithDefaultValue = impl.objectOrNullMemberWithDefault().V8Value();
    objectOrNullMemberWithDefaultHasValueOrDefault = true;
  } else {
    objectOrNullMemberWithDefaultValue = v8::Null(isolate);
    objectOrNullMemberWithDefaultHasValueOrDefault = true;
  }
  if (objectOrNullMemberWithDefaultHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[22].Get(isolate), objectOrNullMemberWithDefaultValue))) {
    return false;
  }

  v8::Local<v8::Value> stringMemberValue;
  bool stringMemberHasValueOrDefault = false;
  if (impl.hasStringMember()) {
    stringMemberValue = V8String(isolate, impl.stringMember());
    stringMemberHasValueOrDefault = true;
  }
  if (stringMemberHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[23].Get(isolate), stringMemberValue))) {
    return false;
  }

  v8::Local<v8::Value> stringMemberWithDefaultValue;
  bool stringMemberWithDefaultHasValueOrDefault = false;
  if (impl.hasStringMemberWithDefault()) {
    stringMemberWithDefaultValue = V8String(isolate, impl.stringMemberWithDefault());
    stringMemberWithDefaultHasValueOrDefault = true;
  } else {
    stringMemberWithDefaultValue = V8String(isolate, "defaultStringValue");
    stringMemberWithDefaultHasValueOrDefault = true;
  }
  if (stringMemberWithDefaultHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[24].Get(isolate), stringMemberWithDefaultValue))) {
    return false;
  }

  v8::Local<v8::Value> stringSequenceMemberValue;
  bool stringSequenceMemberHasValueOrDefault = false;
  if (impl.hasStringSequenceMember()) {
    stringSequenceMemberValue = ToV8(impl.stringSequenceMember(), creationContext, isolate);
    stringSequenceMemberHasValueOrDefault = true;
  }
  if (stringSequenceMemberHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[25].Get(isolate), stringSequenceMemberValue))) {
    return false;
  }

  v8::Local<v8::Value> stringSequenceMemberWithDefaultValue;
  bool stringSequenceMemberWithDefaultHasValueOrDefault = false;
  if (impl.hasStringSequenceMemberWithDefault()) {
    stringSequenceMemberWithDefaultValue = ToV8(impl.stringSequenceMemberWithDefault(), creationContext, isolate);
    stringSequenceMemberWithDefaultHasValueOrDefault = true;
  } else {
    stringSequenceMemberWithDefaultValue = ToV8(Vector<String>(), creationContext, isolate);
    stringSequenceMemberWithDefaultHasValueOrDefault = true;
  }
  if (stringSequenceMemberWithDefaultHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[26].Get(isolate), stringSequenceMemberWithDefaultValue))) {
    return false;
  }

  v8::Local<v8::Value> stringSequenceOrNullMemberValue;
  bool stringSequenceOrNullMemberHasValueOrDefault = false;
  if (impl.hasStringSequenceOrNullMember()) {
    stringSequenceOrNullMemberValue = ToV8(impl.stringSequenceOrNullMember(), creationContext, isolate);
    stringSequenceOrNullMemberHasValueOrDefault = true;
  } else {
    stringSequenceOrNullMemberValue = v8::Null(isolate);
    stringSequenceOrNullMemberHasValueOrDefault = true;
  }
  if (stringSequenceOrNullMemberHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[27].Get(isolate), stringSequenceOrNullMemberValue))) {
    return false;
  }

  v8::Local<v8::Value> unrestrictedDoubleMemberValue;
  bool unrestrictedDoubleMemberHasValueOrDefault = false;
  if (impl.hasUnrestrictedDoubleMember()) {
    unrestrictedDoubleMemberValue = v8::Number::New(isolate, impl.unrestrictedDoubleMember());
    unrestrictedDoubleMemberHasValueOrDefault = true;
  }
  if (unrestrictedDoubleMemberHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[28].Get(isolate), unrestrictedDoubleMemberValue))) {
    return false;
  }

  v8::Local<v8::Value> usvStringMemberValue;
  bool usvStringMemberHasValueOrDefault = false;
  if (impl.hasUsvStringMember()) {
    usvStringMemberValue = V8String(isolate, impl.usvStringMember());
    usvStringMemberHasValueOrDefault = true;
  }
  if (usvStringMemberHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[29].Get(isolate), usvStringMemberValue))) {
    return false;
  }

  return true;
}

InternalDictionary NativeValueTraits<InternalDictionary>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  InternalDictionary impl;
  V8InternalDictionary::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
