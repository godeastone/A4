// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_record_test.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_element.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/wtf/get_ptr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8RecordTest::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8RecordTest::domTemplate,
    nullptr,
    "RecordTest",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in RecordTest.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& RecordTest::wrapper_type_info_ = V8RecordTest::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, RecordTest>::value,
    "RecordTest inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&RecordTest::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "RecordTest is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace RecordTestV8Internal {

static void setStringLongRecordMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "RecordTest", "setStringLongRecord");

  RecordTest* impl = V8RecordTest::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Vector<std::pair<String, int32_t>> arg;
  arg = NativeValueTraits<IDLRecord<IDLString, IDLLong>>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setStringLongRecord(arg);
}

static void getStringLongRecordMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RecordTest* impl = V8RecordTest::ToImpl(info.Holder());

  V8SetReturnValue(info, ToV8(impl->getStringLongRecord(), info.Holder(), info.GetIsolate()));
}

static void setNullableStringLongRecordMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "RecordTest", "setNullableStringLongRecord");

  RecordTest* impl = V8RecordTest::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  base::Optional<Vector<std::pair<String, int32_t>>> arg;
  if (!info[0]->IsNullOrUndefined()) {
    arg = NativeValueTraits<IDLRecord<IDLString, IDLLong>>::NativeValue(info.GetIsolate(), info[0], exceptionState);
    if (exceptionState.HadException())
      return;
  }

  impl->setNullableStringLongRecord(arg);
}

static void getNullableStringLongRecordMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RecordTest* impl = V8RecordTest::ToImpl(info.Holder());

  base::Optional<Vector<std::pair<String, int32_t>>> result = impl->getNullableStringLongRecord();
  if (!result)
    V8SetReturnValueNull(info);
  else
    V8SetReturnValue(info, ToV8(result.value(), info.Holder(), info.GetIsolate()));
}

static void setByteStringByteStringRecordMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "RecordTest", "setByteStringByteStringRecord");

  RecordTest* impl = V8RecordTest::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Vector<std::pair<String, String>> arg;
  arg = NativeValueTraits<IDLRecord<IDLByteString, IDLByteString>>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setByteStringByteStringRecord(arg);
}

static void setStringElementRecordMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "RecordTest", "setStringElementRecord");

  RecordTest* impl = V8RecordTest::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  HeapVector<std::pair<String, Member<Element>>> arg;
  arg = NativeValueTraits<IDLRecord<IDLString, Element>>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setStringElementRecord(arg);
}

static void getStringElementRecordMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RecordTest* impl = V8RecordTest::ToImpl(info.Holder());

  V8SetReturnValue(info, ToV8(impl->getStringElementRecord(), info.Holder(), info.GetIsolate()));
}

static void setUSVStringUSVStringBooleanRecordRecordMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "RecordTest", "setUSVStringUSVStringBooleanRecordRecord");

  RecordTest* impl = V8RecordTest::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Vector<std::pair<String, Vector<std::pair<String, bool>>>> arg;
  arg = NativeValueTraits<IDLRecord<IDLUSVString, IDLRecord<IDLUSVString, IDLBoolean>>>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setUSVStringUSVStringBooleanRecordRecord(arg);
}

static void getUSVStringUSVStringBooleanRecordRecordMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RecordTest* impl = V8RecordTest::ToImpl(info.Holder());

  V8SetReturnValue(info, ToV8(impl->getUSVStringUSVStringBooleanRecordRecord(), info.Holder(), info.GetIsolate()));
}

static void returnStringByteStringSequenceRecordMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RecordTest* impl = V8RecordTest::ToImpl(info.Holder());

  V8SetReturnValue(info, ToV8(impl->returnStringByteStringSequenceRecord(), info.Holder(), info.GetIsolate()));
}

static void unionReceivedARecordMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "RecordTest", "unionReceivedARecord");

  RecordTest* impl = V8RecordTest::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  BooleanOrByteStringByteStringRecord arg;
  V8BooleanOrByteStringByteStringRecord::ToImpl(info.GetIsolate(), info[0], arg, UnionTypeConversionMode::kNotNullable, exceptionState);
  if (exceptionState.HadException())
    return;

  V8SetReturnValueBool(info, impl->unionReceivedARecord(arg));
}

static void setFloatOrStringElementRecordMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "RecordTest", "setFloatOrStringElementRecord");

  RecordTest* impl = V8RecordTest::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  FloatOrStringElementRecord arg;
  V8FloatOrStringElementRecord::ToImpl(info.GetIsolate(), info[0], arg, UnionTypeConversionMode::kNotNullable, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setFloatOrStringElementRecord(arg);
}

} // namespace RecordTestV8Internal

void V8RecordTest::setStringLongRecordMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RecordTest_setStringLongRecord");

  RecordTestV8Internal::setStringLongRecordMethod(info);
}

void V8RecordTest::getStringLongRecordMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RecordTest_getStringLongRecord");

  RecordTestV8Internal::getStringLongRecordMethod(info);
}

void V8RecordTest::setNullableStringLongRecordMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RecordTest_setNullableStringLongRecord");

  RecordTestV8Internal::setNullableStringLongRecordMethod(info);
}

void V8RecordTest::getNullableStringLongRecordMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RecordTest_getNullableStringLongRecord");

  RecordTestV8Internal::getNullableStringLongRecordMethod(info);
}

void V8RecordTest::setByteStringByteStringRecordMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RecordTest_setByteStringByteStringRecord");

  RecordTestV8Internal::setByteStringByteStringRecordMethod(info);
}

void V8RecordTest::setStringElementRecordMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RecordTest_setStringElementRecord");

  RecordTestV8Internal::setStringElementRecordMethod(info);
}

void V8RecordTest::getStringElementRecordMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RecordTest_getStringElementRecord");

  RecordTestV8Internal::getStringElementRecordMethod(info);
}

void V8RecordTest::setUSVStringUSVStringBooleanRecordRecordMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RecordTest_setUSVStringUSVStringBooleanRecordRecord");

  RecordTestV8Internal::setUSVStringUSVStringBooleanRecordRecordMethod(info);
}

void V8RecordTest::getUSVStringUSVStringBooleanRecordRecordMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RecordTest_getUSVStringUSVStringBooleanRecordRecord");

  RecordTestV8Internal::getUSVStringUSVStringBooleanRecordRecordMethod(info);
}

void V8RecordTest::returnStringByteStringSequenceRecordMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RecordTest_returnStringByteStringSequenceRecord");

  RecordTestV8Internal::returnStringByteStringSequenceRecordMethod(info);
}

void V8RecordTest::unionReceivedARecordMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RecordTest_unionReceivedARecord");

  RecordTestV8Internal::unionReceivedARecordMethod(info);
}

void V8RecordTest::setFloatOrStringElementRecordMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RecordTest_setFloatOrStringElementRecord");

  RecordTestV8Internal::setFloatOrStringElementRecordMethod(info);
}

static const V8DOMConfiguration::MethodConfiguration V8RecordTestMethods[] = {
    {"setStringLongRecord", V8RecordTest::setStringLongRecordMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getStringLongRecord", V8RecordTest::getStringLongRecordMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setNullableStringLongRecord", V8RecordTest::setNullableStringLongRecordMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getNullableStringLongRecord", V8RecordTest::getNullableStringLongRecordMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setByteStringByteStringRecord", V8RecordTest::setByteStringByteStringRecordMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setStringElementRecord", V8RecordTest::setStringElementRecordMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getStringElementRecord", V8RecordTest::getStringElementRecordMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setUSVStringUSVStringBooleanRecordRecord", V8RecordTest::setUSVStringUSVStringBooleanRecordRecordMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getUSVStringUSVStringBooleanRecordRecord", V8RecordTest::getUSVStringUSVStringBooleanRecordRecordMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"returnStringByteStringSequenceRecord", V8RecordTest::returnStringByteStringSequenceRecordMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"unionReceivedARecord", V8RecordTest::unionReceivedARecordMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setFloatOrStringElementRecord", V8RecordTest::setFloatOrStringElementRecordMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void installV8RecordTestTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8RecordTest::wrapperTypeInfo.interface_name, v8::Local<v8::FunctionTemplate>(), V8RecordTest::internalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallMethods(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8RecordTestMethods, arraysize(V8RecordTestMethods));

  // Custom signature

  V8RecordTest::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8RecordTest::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8RecordTest::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8RecordTestTemplate);
}

bool V8RecordTest::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8RecordTest::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

RecordTest* V8RecordTest::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

RecordTest* NativeValueTraits<RecordTest>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  RecordTest* nativeValue = V8RecordTest::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "RecordTest"));
  }
  return nativeValue;
}

}  // namespace blink
