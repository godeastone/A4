// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_subtle_crypto.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/dictionary.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_promise.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer_view.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_crypto_key.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/core/typed_arrays/array_buffer_view_helpers.h"
#include "third_party/blink/renderer/core/typed_arrays/flexible_array_buffer_view.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/wtf/get_ptr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8SubtleCrypto::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8SubtleCrypto::domTemplate,
    nullptr,
    "SubtleCrypto",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in SubtleCrypto.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& SubtleCrypto::wrapper_type_info_ = V8SubtleCrypto::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, SubtleCrypto>::value,
    "SubtleCrypto inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&SubtleCrypto::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "SubtleCrypto is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace SubtleCryptoV8Internal {

static void encryptMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "SubtleCrypto", "encrypt");
  ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8SubtleCrypto::hasInstance(info.Holder(), info.GetIsolate())) {
    exceptionState.ThrowTypeError("Illegal invocation");
    return;
  }
  SubtleCrypto* impl = V8SubtleCrypto::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 3)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  DictionaryOrString algorithm;
  CryptoKey* key;
  ArrayBufferOrArrayBufferView data;
  V8DictionaryOrString::ToImpl(info.GetIsolate(), info[0], algorithm, UnionTypeConversionMode::kNotNullable, exceptionState);
  if (exceptionState.HadException())
    return;

  key = V8CryptoKey::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!key) {
    exceptionState.ThrowTypeError("parameter 2 is not of type 'CryptoKey'.");
    return;
  }

  V8ArrayBufferOrArrayBufferView::ToImpl(info.GetIsolate(), info[2], data, UnionTypeConversionMode::kNotNullable, exceptionState);
  if (exceptionState.HadException())
    return;

  ScriptPromise result = impl->encrypt(scriptState, algorithm, key, data);
  V8SetReturnValue(info, result.V8Value());
}

static void decryptMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "SubtleCrypto", "decrypt");
  ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8SubtleCrypto::hasInstance(info.Holder(), info.GetIsolate())) {
    exceptionState.ThrowTypeError("Illegal invocation");
    return;
  }
  SubtleCrypto* impl = V8SubtleCrypto::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 3)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  DictionaryOrString algorithm;
  CryptoKey* key;
  ArrayBufferOrArrayBufferView data;
  V8DictionaryOrString::ToImpl(info.GetIsolate(), info[0], algorithm, UnionTypeConversionMode::kNotNullable, exceptionState);
  if (exceptionState.HadException())
    return;

  key = V8CryptoKey::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!key) {
    exceptionState.ThrowTypeError("parameter 2 is not of type 'CryptoKey'.");
    return;
  }

  V8ArrayBufferOrArrayBufferView::ToImpl(info.GetIsolate(), info[2], data, UnionTypeConversionMode::kNotNullable, exceptionState);
  if (exceptionState.HadException())
    return;

  ScriptPromise result = impl->decrypt(scriptState, algorithm, key, data);
  V8SetReturnValue(info, result.V8Value());
}

static void signMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "SubtleCrypto", "sign");
  ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8SubtleCrypto::hasInstance(info.Holder(), info.GetIsolate())) {
    exceptionState.ThrowTypeError("Illegal invocation");
    return;
  }
  SubtleCrypto* impl = V8SubtleCrypto::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 3)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  DictionaryOrString algorithm;
  CryptoKey* key;
  ArrayBufferOrArrayBufferView data;
  V8DictionaryOrString::ToImpl(info.GetIsolate(), info[0], algorithm, UnionTypeConversionMode::kNotNullable, exceptionState);
  if (exceptionState.HadException())
    return;

  key = V8CryptoKey::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!key) {
    exceptionState.ThrowTypeError("parameter 2 is not of type 'CryptoKey'.");
    return;
  }

  V8ArrayBufferOrArrayBufferView::ToImpl(info.GetIsolate(), info[2], data, UnionTypeConversionMode::kNotNullable, exceptionState);
  if (exceptionState.HadException())
    return;

  ScriptPromise result = impl->sign(scriptState, algorithm, key, data);
  V8SetReturnValue(info, result.V8Value());
}

static void verifyMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "SubtleCrypto", "verify");
  ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8SubtleCrypto::hasInstance(info.Holder(), info.GetIsolate())) {
    exceptionState.ThrowTypeError("Illegal invocation");
    return;
  }
  SubtleCrypto* impl = V8SubtleCrypto::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 4)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(4, info.Length()));
    return;
  }

  DictionaryOrString algorithm;
  CryptoKey* key;
  ArrayBufferOrArrayBufferView signature;
  ArrayBufferOrArrayBufferView data;
  V8DictionaryOrString::ToImpl(info.GetIsolate(), info[0], algorithm, UnionTypeConversionMode::kNotNullable, exceptionState);
  if (exceptionState.HadException())
    return;

  key = V8CryptoKey::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!key) {
    exceptionState.ThrowTypeError("parameter 2 is not of type 'CryptoKey'.");
    return;
  }

  V8ArrayBufferOrArrayBufferView::ToImpl(info.GetIsolate(), info[2], signature, UnionTypeConversionMode::kNotNullable, exceptionState);
  if (exceptionState.HadException())
    return;

  V8ArrayBufferOrArrayBufferView::ToImpl(info.GetIsolate(), info[3], data, UnionTypeConversionMode::kNotNullable, exceptionState);
  if (exceptionState.HadException())
    return;

  ScriptPromise result = impl->verifySignature(scriptState, algorithm, key, signature, data);
  V8SetReturnValue(info, result.V8Value());
}

static void digestMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "SubtleCrypto", "digest");
  ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8SubtleCrypto::hasInstance(info.Holder(), info.GetIsolate())) {
    exceptionState.ThrowTypeError("Illegal invocation");
    return;
  }
  SubtleCrypto* impl = V8SubtleCrypto::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  DictionaryOrString algorithm;
  ArrayBufferOrArrayBufferView data;
  V8DictionaryOrString::ToImpl(info.GetIsolate(), info[0], algorithm, UnionTypeConversionMode::kNotNullable, exceptionState);
  if (exceptionState.HadException())
    return;

  V8ArrayBufferOrArrayBufferView::ToImpl(info.GetIsolate(), info[1], data, UnionTypeConversionMode::kNotNullable, exceptionState);
  if (exceptionState.HadException())
    return;

  ScriptPromise result = impl->digest(scriptState, algorithm, data);
  V8SetReturnValue(info, result.V8Value());
}

static void generateKeyMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "SubtleCrypto", "generateKey");
  ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8SubtleCrypto::hasInstance(info.Holder(), info.GetIsolate())) {
    exceptionState.ThrowTypeError("Illegal invocation");
    return;
  }
  SubtleCrypto* impl = V8SubtleCrypto::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 3)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  DictionaryOrString algorithm;
  bool extractable;
  Vector<String> keyUsages;
  V8DictionaryOrString::ToImpl(info.GetIsolate(), info[0], algorithm, UnionTypeConversionMode::kNotNullable, exceptionState);
  if (exceptionState.HadException())
    return;

  extractable = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  keyUsages = NativeValueTraits<IDLSequence<IDLString>>::NativeValue(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;

  ScriptPromise result = impl->generateKey(scriptState, algorithm, extractable, keyUsages);
  V8SetReturnValue(info, result.V8Value());
}

static void importKeyMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "SubtleCrypto", "importKey");
  ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8SubtleCrypto::hasInstance(info.Holder(), info.GetIsolate())) {
    exceptionState.ThrowTypeError("Illegal invocation");
    return;
  }
  SubtleCrypto* impl = V8SubtleCrypto::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 5)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(5, info.Length()));
    return;
  }

  V8StringResource<> format;
  ArrayBufferOrArrayBufferViewOrDictionary keyData;
  DictionaryOrString algorithm;
  bool extractable;
  Vector<String> keyUsages;
  format = info[0];
  if (!format.Prepare(exceptionState))
    return;

  V8ArrayBufferOrArrayBufferViewOrDictionary::ToImpl(info.GetIsolate(), info[1], keyData, UnionTypeConversionMode::kNotNullable, exceptionState);
  if (exceptionState.HadException())
    return;

  V8DictionaryOrString::ToImpl(info.GetIsolate(), info[2], algorithm, UnionTypeConversionMode::kNotNullable, exceptionState);
  if (exceptionState.HadException())
    return;

  extractable = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[3], exceptionState);
  if (exceptionState.HadException())
    return;

  keyUsages = NativeValueTraits<IDLSequence<IDLString>>::NativeValue(info.GetIsolate(), info[4], exceptionState);
  if (exceptionState.HadException())
    return;

  ScriptPromise result = impl->importKey(scriptState, format, keyData, algorithm, extractable, keyUsages);
  V8SetReturnValue(info, result.V8Value());
}

static void exportKeyMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "SubtleCrypto", "exportKey");
  ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8SubtleCrypto::hasInstance(info.Holder(), info.GetIsolate())) {
    exceptionState.ThrowTypeError("Illegal invocation");
    return;
  }
  SubtleCrypto* impl = V8SubtleCrypto::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  V8StringResource<> format;
  CryptoKey* key;
  format = info[0];
  if (!format.Prepare(exceptionState))
    return;

  key = V8CryptoKey::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!key) {
    exceptionState.ThrowTypeError("parameter 2 is not of type 'CryptoKey'.");
    return;
  }

  ScriptPromise result = impl->exportKey(scriptState, format, key);
  V8SetReturnValue(info, result.V8Value());
}

static void deriveBitsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "SubtleCrypto", "deriveBits");
  ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8SubtleCrypto::hasInstance(info.Holder(), info.GetIsolate())) {
    exceptionState.ThrowTypeError("Illegal invocation");
    return;
  }
  SubtleCrypto* impl = V8SubtleCrypto::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 3)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  DictionaryOrString algorithm;
  CryptoKey* baseKey;
  uint32_t length;
  V8DictionaryOrString::ToImpl(info.GetIsolate(), info[0], algorithm, UnionTypeConversionMode::kNotNullable, exceptionState);
  if (exceptionState.HadException())
    return;

  baseKey = V8CryptoKey::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!baseKey) {
    exceptionState.ThrowTypeError("parameter 2 is not of type 'CryptoKey'.");
    return;
  }

  length = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  ScriptPromise result = impl->deriveBits(scriptState, algorithm, baseKey, length);
  V8SetReturnValue(info, result.V8Value());
}

static void deriveKeyMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "SubtleCrypto", "deriveKey");
  ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8SubtleCrypto::hasInstance(info.Holder(), info.GetIsolate())) {
    exceptionState.ThrowTypeError("Illegal invocation");
    return;
  }
  SubtleCrypto* impl = V8SubtleCrypto::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 5)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(5, info.Length()));
    return;
  }

  DictionaryOrString algorithm;
  CryptoKey* baseKey;
  DictionaryOrString derivedKeyType;
  bool extractable;
  Vector<String> keyUsages;
  V8DictionaryOrString::ToImpl(info.GetIsolate(), info[0], algorithm, UnionTypeConversionMode::kNotNullable, exceptionState);
  if (exceptionState.HadException())
    return;

  baseKey = V8CryptoKey::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!baseKey) {
    exceptionState.ThrowTypeError("parameter 2 is not of type 'CryptoKey'.");
    return;
  }

  V8DictionaryOrString::ToImpl(info.GetIsolate(), info[2], derivedKeyType, UnionTypeConversionMode::kNotNullable, exceptionState);
  if (exceptionState.HadException())
    return;

  extractable = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[3], exceptionState);
  if (exceptionState.HadException())
    return;

  keyUsages = NativeValueTraits<IDLSequence<IDLString>>::NativeValue(info.GetIsolate(), info[4], exceptionState);
  if (exceptionState.HadException())
    return;

  ScriptPromise result = impl->deriveKey(scriptState, algorithm, baseKey, derivedKeyType, extractable, keyUsages);
  V8SetReturnValue(info, result.V8Value());
}

static void wrapKeyMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "SubtleCrypto", "wrapKey");
  ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8SubtleCrypto::hasInstance(info.Holder(), info.GetIsolate())) {
    exceptionState.ThrowTypeError("Illegal invocation");
    return;
  }
  SubtleCrypto* impl = V8SubtleCrypto::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 4)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(4, info.Length()));
    return;
  }

  V8StringResource<> format;
  CryptoKey* key;
  CryptoKey* wrappingKey;
  DictionaryOrString wrapAlgorithm;
  format = info[0];
  if (!format.Prepare(exceptionState))
    return;

  key = V8CryptoKey::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!key) {
    exceptionState.ThrowTypeError("parameter 2 is not of type 'CryptoKey'.");
    return;
  }

  wrappingKey = V8CryptoKey::ToImplWithTypeCheck(info.GetIsolate(), info[2]);
  if (!wrappingKey) {
    exceptionState.ThrowTypeError("parameter 3 is not of type 'CryptoKey'.");
    return;
  }

  V8DictionaryOrString::ToImpl(info.GetIsolate(), info[3], wrapAlgorithm, UnionTypeConversionMode::kNotNullable, exceptionState);
  if (exceptionState.HadException())
    return;

  ScriptPromise result = impl->wrapKey(scriptState, format, key, wrappingKey, wrapAlgorithm);
  V8SetReturnValue(info, result.V8Value());
}

static void unwrapKeyMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "SubtleCrypto", "unwrapKey");
  ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8SubtleCrypto::hasInstance(info.Holder(), info.GetIsolate())) {
    exceptionState.ThrowTypeError("Illegal invocation");
    return;
  }
  SubtleCrypto* impl = V8SubtleCrypto::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 7)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(7, info.Length()));
    return;
  }

  V8StringResource<> format;
  ArrayBufferOrArrayBufferView wrappedKey;
  CryptoKey* unwrappingKey;
  DictionaryOrString unwrapAlgorithm;
  DictionaryOrString unwrappedKeyAlgorithm;
  bool extractable;
  Vector<String> keyUsages;
  format = info[0];
  if (!format.Prepare(exceptionState))
    return;

  V8ArrayBufferOrArrayBufferView::ToImpl(info.GetIsolate(), info[1], wrappedKey, UnionTypeConversionMode::kNotNullable, exceptionState);
  if (exceptionState.HadException())
    return;

  unwrappingKey = V8CryptoKey::ToImplWithTypeCheck(info.GetIsolate(), info[2]);
  if (!unwrappingKey) {
    exceptionState.ThrowTypeError("parameter 3 is not of type 'CryptoKey'.");
    return;
  }

  V8DictionaryOrString::ToImpl(info.GetIsolate(), info[3], unwrapAlgorithm, UnionTypeConversionMode::kNotNullable, exceptionState);
  if (exceptionState.HadException())
    return;

  V8DictionaryOrString::ToImpl(info.GetIsolate(), info[4], unwrappedKeyAlgorithm, UnionTypeConversionMode::kNotNullable, exceptionState);
  if (exceptionState.HadException())
    return;

  extractable = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[5], exceptionState);
  if (exceptionState.HadException())
    return;

  keyUsages = NativeValueTraits<IDLSequence<IDLString>>::NativeValue(info.GetIsolate(), info[6], exceptionState);
  if (exceptionState.HadException())
    return;

  ScriptPromise result = impl->unwrapKey(scriptState, format, wrappedKey, unwrappingKey, unwrapAlgorithm, unwrappedKeyAlgorithm, extractable, keyUsages);
  V8SetReturnValue(info, result.V8Value());
}

} // namespace SubtleCryptoV8Internal

void V8SubtleCrypto::encryptMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SubtleCrypto_encrypt");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSubtleCryptoEncrypt);
  SubtleCryptoV8Internal::encryptMethod(info);
}

void V8SubtleCrypto::decryptMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SubtleCrypto_decrypt");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSubtleCryptoDecrypt);
  SubtleCryptoV8Internal::decryptMethod(info);
}

void V8SubtleCrypto::signMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SubtleCrypto_sign");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSubtleCryptoSign);
  SubtleCryptoV8Internal::signMethod(info);
}

void V8SubtleCrypto::verifyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SubtleCrypto_verify");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSubtleCryptoVerify);
  SubtleCryptoV8Internal::verifyMethod(info);
}

void V8SubtleCrypto::digestMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SubtleCrypto_digest");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSubtleCryptoDigest);
  SubtleCryptoV8Internal::digestMethod(info);
}

void V8SubtleCrypto::generateKeyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SubtleCrypto_generateKey");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSubtleCryptoGenerateKey);
  SubtleCryptoV8Internal::generateKeyMethod(info);
}

void V8SubtleCrypto::importKeyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SubtleCrypto_importKey");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSubtleCryptoImportKey);
  SubtleCryptoV8Internal::importKeyMethod(info);
}

void V8SubtleCrypto::exportKeyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SubtleCrypto_exportKey");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSubtleCryptoExportKey);
  SubtleCryptoV8Internal::exportKeyMethod(info);
}

void V8SubtleCrypto::deriveBitsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SubtleCrypto_deriveBits");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSubtleCryptoDeriveBits);
  SubtleCryptoV8Internal::deriveBitsMethod(info);
}

void V8SubtleCrypto::deriveKeyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SubtleCrypto_deriveKey");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSubtleCryptoDeriveKey);
  SubtleCryptoV8Internal::deriveKeyMethod(info);
}

void V8SubtleCrypto::wrapKeyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SubtleCrypto_wrapKey");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSubtleCryptoWrapKey);
  SubtleCryptoV8Internal::wrapKeyMethod(info);
}

void V8SubtleCrypto::unwrapKeyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SubtleCrypto_unwrapKey");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSubtleCryptoUnwrapKey);
  SubtleCryptoV8Internal::unwrapKeyMethod(info);
}

static const V8DOMConfiguration::MethodConfiguration V8SubtleCryptoMethods[] = {
    {"encrypt", V8SubtleCrypto::encryptMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"decrypt", V8SubtleCrypto::decryptMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"sign", V8SubtleCrypto::signMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"verify", V8SubtleCrypto::verifyMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"digest", V8SubtleCrypto::digestMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"generateKey", V8SubtleCrypto::generateKeyMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"importKey", V8SubtleCrypto::importKeyMethodCallback, 5, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"exportKey", V8SubtleCrypto::exportKeyMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"deriveBits", V8SubtleCrypto::deriveBitsMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"deriveKey", V8SubtleCrypto::deriveKeyMethodCallback, 5, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"wrapKey", V8SubtleCrypto::wrapKeyMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"unwrapKey", V8SubtleCrypto::unwrapKeyMethodCallback, 7, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void installV8SubtleCryptoTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8SubtleCrypto::wrapperTypeInfo.interface_name, v8::Local<v8::FunctionTemplate>(), V8SubtleCrypto::internalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallMethods(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8SubtleCryptoMethods, arraysize(V8SubtleCryptoMethods));

  // Custom signature

  V8SubtleCrypto::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8SubtleCrypto::InstallRuntimeEnabledFeaturesOnTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.

  // Custom signature
}

v8::Local<v8::FunctionTemplate> V8SubtleCrypto::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8SubtleCryptoTemplate);
}

bool V8SubtleCrypto::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8SubtleCrypto::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

SubtleCrypto* V8SubtleCrypto::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

SubtleCrypto* NativeValueTraits<SubtleCrypto>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  SubtleCrypto* nativeValue = V8SubtleCrypto::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "SubtleCrypto"));
  }
  return nativeValue;
}

}  // namespace blink
