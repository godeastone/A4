// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_callback_function_test.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_div_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_test_callback.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_test_enum_callback.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_test_interface_callback.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_test_receiver_object_callback.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_test_sequence_callback.h"
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
const WrapperTypeInfo V8CallbackFunctionTest::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8CallbackFunctionTest::domTemplate,
    nullptr,
    "CallbackFunctionTest",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in CallbackFunctionTest.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& CallbackFunctionTest::wrapper_type_info_ = V8CallbackFunctionTest::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, CallbackFunctionTest>::value,
    "CallbackFunctionTest inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&CallbackFunctionTest::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "CallbackFunctionTest is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace CallbackFunctionTestV8Internal {

static void testCallbackMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "CallbackFunctionTest", "testCallback");

  CallbackFunctionTest* impl = V8CallbackFunctionTest::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  V8TestCallback* callback;
  V8StringResource<> message1;
  V8StringResource<> message2;
  if (info[0]->IsFunction()) {
    callback = V8TestCallback::Create(info[0].As<v8::Function>());
  } else {
    exceptionState.ThrowTypeError("The callback provided as parameter 1 is not a function.");
    return;
  }

  message1 = info[1];
  if (!message1.Prepare())
    return;

  message2 = info[2];
  if (!message2.Prepare())
    return;

  String result = impl->testCallback(callback, message1, message2, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValueString(info, result, info.GetIsolate());
}

static void testNullableCallbackMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "CallbackFunctionTest", "testNullableCallback");

  CallbackFunctionTest* impl = V8CallbackFunctionTest::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  V8TestCallback* callback;
  V8StringResource<> message1;
  V8StringResource<> message2;
  if (info[0]->IsFunction()) {
    callback = V8TestCallback::Create(info[0].As<v8::Function>());
  } else if (info[0]->IsNullOrUndefined()) {
    callback = nullptr;
  } else {
    exceptionState.ThrowTypeError("The callback provided as parameter 1 is not a function.");
    return;
  }

  message1 = info[1];
  if (!message1.Prepare())
    return;

  message2 = info[2];
  if (!message2.Prepare())
    return;

  String result = impl->testNullableCallback(callback, message1, message2, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValueString(info, result, info.GetIsolate());
}

static void testInterfaceCallbackMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "CallbackFunctionTest", "testInterfaceCallback");

  CallbackFunctionTest* impl = V8CallbackFunctionTest::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  V8TestInterfaceCallback* callback;
  HTMLDivElement* divElement;
  if (info[0]->IsFunction()) {
    callback = V8TestInterfaceCallback::Create(info[0].As<v8::Function>());
  } else {
    exceptionState.ThrowTypeError("The callback provided as parameter 1 is not a function.");
    return;
  }

  divElement = V8HTMLDivElement::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!divElement) {
    exceptionState.ThrowTypeError("parameter 2 is not of type 'HTMLDivElement'.");
    return;
  }

  impl->testInterfaceCallback(callback, divElement, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void testReceiverObjectCallbackMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "CallbackFunctionTest", "testReceiverObjectCallback");

  CallbackFunctionTest* impl = V8CallbackFunctionTest::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8TestReceiverObjectCallback* callback;
  if (info[0]->IsFunction()) {
    callback = V8TestReceiverObjectCallback::Create(info[0].As<v8::Function>());
  } else {
    exceptionState.ThrowTypeError("The callback provided as parameter 1 is not a function.");
    return;
  }

  impl->testReceiverObjectCallback(callback, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void testSequenceCallbackMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "CallbackFunctionTest", "testSequenceCallback");

  CallbackFunctionTest* impl = V8CallbackFunctionTest::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  V8TestSequenceCallback* callback;
  Vector<int32_t> numbers;
  if (info[0]->IsFunction()) {
    callback = V8TestSequenceCallback::Create(info[0].As<v8::Function>());
  } else {
    exceptionState.ThrowTypeError("The callback provided as parameter 1 is not a function.");
    return;
  }

  numbers = NativeValueTraits<IDLSequence<IDLLong>>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  Vector<String> result = impl->testSequenceCallback(callback, numbers, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, ToV8(result, info.Holder(), info.GetIsolate()));
}

static void testEnumCallbackMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "CallbackFunctionTest", "testEnumCallback");

  CallbackFunctionTest* impl = V8CallbackFunctionTest::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  V8TestEnumCallback* callback;
  V8StringResource<> enum_value;
  if (info[0]->IsFunction()) {
    callback = V8TestEnumCallback::Create(info[0].As<v8::Function>());
  } else {
    exceptionState.ThrowTypeError("The callback provided as parameter 1 is not a function.");
    return;
  }

  enum_value = info[1];
  if (!enum_value.Prepare())
    return;
  const char* validEnum_valueValues[] = {
      "foo",
      "bar",
      "baz",
  };
  if (!IsValidEnum(enum_value, validEnum_valueValues, arraysize(validEnum_valueValues), "InternalEnum", exceptionState)) {
    return;
  }

  impl->testEnumCallback(callback, enum_value, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

} // namespace CallbackFunctionTestV8Internal

void V8CallbackFunctionTest::testCallbackMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CallbackFunctionTest_testCallback");

  CallbackFunctionTestV8Internal::testCallbackMethod(info);
}

void V8CallbackFunctionTest::testNullableCallbackMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CallbackFunctionTest_testNullableCallback");

  CallbackFunctionTestV8Internal::testNullableCallbackMethod(info);
}

void V8CallbackFunctionTest::testInterfaceCallbackMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CallbackFunctionTest_testInterfaceCallback");

  CallbackFunctionTestV8Internal::testInterfaceCallbackMethod(info);
}

void V8CallbackFunctionTest::testReceiverObjectCallbackMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CallbackFunctionTest_testReceiverObjectCallback");

  CallbackFunctionTestV8Internal::testReceiverObjectCallbackMethod(info);
}

void V8CallbackFunctionTest::testSequenceCallbackMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CallbackFunctionTest_testSequenceCallback");

  CallbackFunctionTestV8Internal::testSequenceCallbackMethod(info);
}

void V8CallbackFunctionTest::testEnumCallbackMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CallbackFunctionTest_testEnumCallback");

  CallbackFunctionTestV8Internal::testEnumCallbackMethod(info);
}

static const V8DOMConfiguration::MethodConfiguration V8CallbackFunctionTestMethods[] = {
    {"testCallback", V8CallbackFunctionTest::testCallbackMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"testNullableCallback", V8CallbackFunctionTest::testNullableCallbackMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"testInterfaceCallback", V8CallbackFunctionTest::testInterfaceCallbackMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"testReceiverObjectCallback", V8CallbackFunctionTest::testReceiverObjectCallbackMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"testSequenceCallback", V8CallbackFunctionTest::testSequenceCallbackMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"testEnumCallback", V8CallbackFunctionTest::testEnumCallbackMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void installV8CallbackFunctionTestTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8CallbackFunctionTest::wrapperTypeInfo.interface_name, v8::Local<v8::FunctionTemplate>(), V8CallbackFunctionTest::internalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallMethods(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8CallbackFunctionTestMethods, arraysize(V8CallbackFunctionTestMethods));

  // Custom signature

  V8CallbackFunctionTest::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8CallbackFunctionTest::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8CallbackFunctionTest::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8CallbackFunctionTestTemplate);
}

bool V8CallbackFunctionTest::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8CallbackFunctionTest::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

CallbackFunctionTest* V8CallbackFunctionTest::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

CallbackFunctionTest* NativeValueTraits<CallbackFunctionTest>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  CallbackFunctionTest* nativeValue = V8CallbackFunctionTest::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "CallbackFunctionTest"));
  }
  return nativeValue;
}

}  // namespace blink
