// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_dictionary_test.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/dictionary.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_internal_dictionary.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_internal_dictionary_derived.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_internal_dictionary_derived_derived.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
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
const WrapperTypeInfo V8DictionaryTest::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8DictionaryTest::domTemplate,
    nullptr,
    "DictionaryTest",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in DictionaryTest.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& DictionaryTest::wrapper_type_info_ = V8DictionaryTest::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, DictionaryTest>::value,
    "DictionaryTest inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&DictionaryTest::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "DictionaryTest is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace DictionaryTestV8Internal {

static void setMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "DictionaryTest", "set");

  DictionaryTest* impl = V8DictionaryTest::ToImpl(info.Holder());

  InternalDictionary testingDictionary;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exceptionState.ThrowTypeError("parameter 1 ('testingDictionary') is not an object.");
    return;
  }
  V8InternalDictionary::ToImpl(info.GetIsolate(), info[0], testingDictionary, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->set(testingDictionary);
}

static void getMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  DictionaryTest* impl = V8DictionaryTest::ToImpl(info.Holder());

  InternalDictionary result;
  impl->get(result);
  V8SetReturnValue(info, result);
}

static void getDictionaryMemberPropertiesMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  DictionaryTest* impl = V8DictionaryTest::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  ScriptValue result = impl->getDictionaryMemberProperties(scriptState);
  V8SetReturnValue(info, result.V8Value());
}

static void setDerivedMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "DictionaryTest", "setDerived");

  DictionaryTest* impl = V8DictionaryTest::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  InternalDictionaryDerived derived;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exceptionState.ThrowTypeError("parameter 1 ('derived') is not an object.");
    return;
  }
  V8InternalDictionaryDerived::ToImpl(info.GetIsolate(), info[0], derived, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setDerived(derived);
}

static void getDerivedMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  DictionaryTest* impl = V8DictionaryTest::ToImpl(info.Holder());

  InternalDictionaryDerived result;
  impl->getDerived(result);
  V8SetReturnValue(info, result);
}

static void setDerivedDerivedMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "DictionaryTest", "setDerivedDerived");

  DictionaryTest* impl = V8DictionaryTest::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  InternalDictionaryDerivedDerived derived;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exceptionState.ThrowTypeError("parameter 1 ('derived') is not an object.");
    return;
  }
  V8InternalDictionaryDerivedDerived::ToImpl(info.GetIsolate(), info[0], derived, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setDerivedDerived(derived);
}

static void getDerivedDerivedMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  DictionaryTest* impl = V8DictionaryTest::ToImpl(info.Holder());

  InternalDictionaryDerivedDerived result;
  impl->getDerivedDerived(result);
  V8SetReturnValue(info, result);
}

static void stringFromIterableMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "DictionaryTest", "stringFromIterable");

  DictionaryTest* impl = V8DictionaryTest::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Dictionary iterableDictionary;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exceptionState.ThrowTypeError("parameter 1 ('iterableDictionary') is not an object.");
    return;
  }
  iterableDictionary = NativeValueTraits<Dictionary>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  String result = impl->stringFromIterable(scriptState, iterableDictionary, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValueString(info, result, info.GetIsolate());
}

} // namespace DictionaryTestV8Internal

void V8DictionaryTest::setMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DictionaryTest_set");

  DictionaryTestV8Internal::setMethod(info);
}

void V8DictionaryTest::getMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DictionaryTest_get");

  DictionaryTestV8Internal::getMethod(info);
}

void V8DictionaryTest::getDictionaryMemberPropertiesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DictionaryTest_getDictionaryMemberProperties");

  DictionaryTestV8Internal::getDictionaryMemberPropertiesMethod(info);
}

void V8DictionaryTest::setDerivedMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DictionaryTest_setDerived");

  DictionaryTestV8Internal::setDerivedMethod(info);
}

void V8DictionaryTest::getDerivedMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DictionaryTest_getDerived");

  DictionaryTestV8Internal::getDerivedMethod(info);
}

void V8DictionaryTest::setDerivedDerivedMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DictionaryTest_setDerivedDerived");

  DictionaryTestV8Internal::setDerivedDerivedMethod(info);
}

void V8DictionaryTest::getDerivedDerivedMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DictionaryTest_getDerivedDerived");

  DictionaryTestV8Internal::getDerivedDerivedMethod(info);
}

void V8DictionaryTest::stringFromIterableMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DictionaryTest_stringFromIterable");

  DictionaryTestV8Internal::stringFromIterableMethod(info);
}

static const V8DOMConfiguration::MethodConfiguration V8DictionaryTestMethods[] = {
    {"set", V8DictionaryTest::setMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"get", V8DictionaryTest::getMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getDictionaryMemberProperties", V8DictionaryTest::getDictionaryMemberPropertiesMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setDerived", V8DictionaryTest::setDerivedMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getDerived", V8DictionaryTest::getDerivedMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setDerivedDerived", V8DictionaryTest::setDerivedDerivedMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getDerivedDerived", V8DictionaryTest::getDerivedDerivedMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"stringFromIterable", V8DictionaryTest::stringFromIterableMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void installV8DictionaryTestTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8DictionaryTest::wrapperTypeInfo.interface_name, v8::Local<v8::FunctionTemplate>(), V8DictionaryTest::internalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallMethods(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8DictionaryTestMethods, arraysize(V8DictionaryTestMethods));

  // Custom signature

  V8DictionaryTest::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8DictionaryTest::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8DictionaryTest::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8DictionaryTestTemplate);
}

bool V8DictionaryTest::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8DictionaryTest::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

DictionaryTest* V8DictionaryTest::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

DictionaryTest* NativeValueTraits<DictionaryTest>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  DictionaryTest* nativeValue = V8DictionaryTest::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "DictionaryTest"));
  }
  return nativeValue;
}

}  // namespace blink
