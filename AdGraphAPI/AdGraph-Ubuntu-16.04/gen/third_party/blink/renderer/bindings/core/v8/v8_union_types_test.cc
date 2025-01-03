// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_union_types_test.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_node_list.h"
#include "third_party/blink/renderer/core/dom/name_node_list.h"
#include "third_party/blink/renderer/core/dom/node_list.h"
#include "third_party/blink/renderer/core/dom/static_node_list.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/html/forms/labels_node_list.h"
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
const WrapperTypeInfo V8UnionTypesTest::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8UnionTypesTest::domTemplate,
    nullptr,
    "UnionTypesTest",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in UnionTypesTest.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& UnionTypesTest::wrapper_type_info_ = V8UnionTypesTest::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, UnionTypesTest>::value,
    "UnionTypesTest inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&UnionTypesTest::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "UnionTypesTest is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace UnionTypesTestV8Internal {

static void doubleOrStringOrStringSequenceAttributeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  UnionTypesTest* impl = V8UnionTypesTest::ToImpl(holder);

  DoubleOrStringOrStringSequence result;
  impl->doubleOrStringOrStringSequenceAttribute(result);

  V8SetReturnValue(info, result);
}

static void doubleOrStringOrStringSequenceAttributeAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  UnionTypesTest* impl = V8UnionTypesTest::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "UnionTypesTest", "doubleOrStringOrStringSequenceAttribute");

  // Prepare the value to be set.
  DoubleOrStringOrStringSequence cppValue;
  V8DoubleOrStringOrStringSequence::ToImpl(info.GetIsolate(), v8Value, cppValue, UnionTypeConversionMode::kNotNullable, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setDoubleOrStringOrStringSequenceAttribute(cppValue);
}

static void doubleOrStringArgMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "UnionTypesTest", "doubleOrStringArg");

  UnionTypesTest* impl = V8UnionTypesTest::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  DoubleOrString arg;
  V8DoubleOrString::ToImpl(info.GetIsolate(), info[0], arg, UnionTypeConversionMode::kNotNullable, exceptionState);
  if (exceptionState.HadException())
    return;

  V8SetReturnValueString(info, impl->doubleOrStringArg(arg), info.GetIsolate());
}

static void doubleOrInternalEnumArgMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "UnionTypesTest", "doubleOrInternalEnumArg");

  UnionTypesTest* impl = V8UnionTypesTest::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  DoubleOrInternalEnum arg;
  V8DoubleOrInternalEnum::ToImpl(info.GetIsolate(), info[0], arg, UnionTypeConversionMode::kNotNullable, exceptionState);
  if (exceptionState.HadException())
    return;

  V8SetReturnValueString(info, impl->doubleOrInternalEnumArg(arg), info.GetIsolate());
}

static void doubleOrStringDefaultDoubleArgMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "UnionTypesTest", "doubleOrStringDefaultDoubleArg");

  UnionTypesTest* impl = V8UnionTypesTest::ToImpl(info.Holder());

  DoubleOrString arg;
  if (!info[0]->IsUndefined()) {
    V8DoubleOrString::ToImpl(info.GetIsolate(), info[0], arg, UnionTypeConversionMode::kNotNullable, exceptionState);
    if (exceptionState.HadException())
      return;
  } else {
    arg.SetDouble(3.14);
  }

  V8SetReturnValueString(info, impl->doubleOrStringArg(arg), info.GetIsolate());
}

static void doubleOrStringDefaultStringArgMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "UnionTypesTest", "doubleOrStringDefaultStringArg");

  UnionTypesTest* impl = V8UnionTypesTest::ToImpl(info.Holder());

  DoubleOrString arg;
  if (!info[0]->IsUndefined()) {
    V8DoubleOrString::ToImpl(info.GetIsolate(), info[0], arg, UnionTypeConversionMode::kNotNullable, exceptionState);
    if (exceptionState.HadException())
      return;
  } else {
    arg.SetString("foo");
  }

  V8SetReturnValueString(info, impl->doubleOrStringArg(arg), info.GetIsolate());
}

static void doubleOrStringDefaultNullArgMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "UnionTypesTest", "doubleOrStringDefaultNullArg");

  UnionTypesTest* impl = V8UnionTypesTest::ToImpl(info.Holder());

  DoubleOrString arg;
  if (!info[0]->IsUndefined()) {
    V8DoubleOrString::ToImpl(info.GetIsolate(), info[0], arg, UnionTypeConversionMode::kNullable, exceptionState);
    if (exceptionState.HadException())
      return;
  } else {
    /* null default value */;
  }

  V8SetReturnValueString(info, impl->doubleOrStringArg(arg), info.GetIsolate());
}

static void doubleOrStringSequenceArgMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "UnionTypesTest", "doubleOrStringSequenceArg");

  UnionTypesTest* impl = V8UnionTypesTest::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  HeapVector<DoubleOrString> arg;
  arg = NativeValueTraits<IDLSequence<DoubleOrString>>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  V8SetReturnValueString(info, impl->doubleOrStringSequenceArg(arg), info.GetIsolate());
}

static void nodeListOrElementArgMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "UnionTypesTest", "nodeListOrElementArg");

  UnionTypesTest* impl = V8UnionTypesTest::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  NodeListOrElement arg;
  V8NodeListOrElement::ToImpl(info.GetIsolate(), info[0], arg, UnionTypeConversionMode::kNotNullable, exceptionState);
  if (exceptionState.HadException())
    return;

  V8SetReturnValueString(info, impl->nodeListOrElementArg(arg), info.GetIsolate());
}

static void nodeListOrElementOrNullArgMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "UnionTypesTest", "nodeListOrElementOrNullArg");

  UnionTypesTest* impl = V8UnionTypesTest::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  NodeListOrElement arg;
  V8NodeListOrElement::ToImpl(info.GetIsolate(), info[0], arg, UnionTypeConversionMode::kNullable, exceptionState);
  if (exceptionState.HadException())
    return;

  V8SetReturnValueString(info, impl->nodeListOrElementOrNullArg(arg), info.GetIsolate());
}

static void doubleOrStringOrStringSequenceArgMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "UnionTypesTest", "doubleOrStringOrStringSequenceArg");

  UnionTypesTest* impl = V8UnionTypesTest::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  DoubleOrStringOrStringSequence arg;
  V8DoubleOrStringOrStringSequence::ToImpl(info.GetIsolate(), info[0], arg, UnionTypeConversionMode::kNotNullable, exceptionState);
  if (exceptionState.HadException())
    return;

  V8SetReturnValueString(info, impl->doubleOrStringOrStringSequenceArg(arg), info.GetIsolate());
}

static void doubleOrStringOrStringSequenceNullableArgMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "UnionTypesTest", "doubleOrStringOrStringSequenceNullableArg");

  UnionTypesTest* impl = V8UnionTypesTest::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  DoubleOrStringOrStringSequence arg;
  V8DoubleOrStringOrStringSequence::ToImpl(info.GetIsolate(), info[0], arg, UnionTypeConversionMode::kNullable, exceptionState);
  if (exceptionState.HadException())
    return;

  V8SetReturnValueString(info, impl->doubleOrStringOrStringSequenceArg(arg), info.GetIsolate());
}

} // namespace UnionTypesTestV8Internal

void V8UnionTypesTest::doubleOrStringOrStringSequenceAttributeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_UnionTypesTest_doubleOrStringOrStringSequenceAttribute_Getter");

  UnionTypesTestV8Internal::doubleOrStringOrStringSequenceAttributeAttributeGetter(info);
}

void V8UnionTypesTest::doubleOrStringOrStringSequenceAttributeAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_UnionTypesTest_doubleOrStringOrStringSequenceAttribute_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  UnionTypesTestV8Internal::doubleOrStringOrStringSequenceAttributeAttributeSetter(v8Value, info);
}

void V8UnionTypesTest::doubleOrStringArgMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_UnionTypesTest_doubleOrStringArg");

  UnionTypesTestV8Internal::doubleOrStringArgMethod(info);
}

void V8UnionTypesTest::doubleOrInternalEnumArgMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_UnionTypesTest_doubleOrInternalEnumArg");

  UnionTypesTestV8Internal::doubleOrInternalEnumArgMethod(info);
}

void V8UnionTypesTest::doubleOrStringDefaultDoubleArgMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_UnionTypesTest_doubleOrStringDefaultDoubleArg");

  UnionTypesTestV8Internal::doubleOrStringDefaultDoubleArgMethod(info);
}

void V8UnionTypesTest::doubleOrStringDefaultStringArgMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_UnionTypesTest_doubleOrStringDefaultStringArg");

  UnionTypesTestV8Internal::doubleOrStringDefaultStringArgMethod(info);
}

void V8UnionTypesTest::doubleOrStringDefaultNullArgMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_UnionTypesTest_doubleOrStringDefaultNullArg");

  UnionTypesTestV8Internal::doubleOrStringDefaultNullArgMethod(info);
}

void V8UnionTypesTest::doubleOrStringSequenceArgMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_UnionTypesTest_doubleOrStringSequenceArg");

  UnionTypesTestV8Internal::doubleOrStringSequenceArgMethod(info);
}

void V8UnionTypesTest::nodeListOrElementArgMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_UnionTypesTest_nodeListOrElementArg");

  UnionTypesTestV8Internal::nodeListOrElementArgMethod(info);
}

void V8UnionTypesTest::nodeListOrElementOrNullArgMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_UnionTypesTest_nodeListOrElementOrNullArg");

  UnionTypesTestV8Internal::nodeListOrElementOrNullArgMethod(info);
}

void V8UnionTypesTest::doubleOrStringOrStringSequenceArgMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_UnionTypesTest_doubleOrStringOrStringSequenceArg");

  UnionTypesTestV8Internal::doubleOrStringOrStringSequenceArgMethod(info);
}

void V8UnionTypesTest::doubleOrStringOrStringSequenceNullableArgMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_UnionTypesTest_doubleOrStringOrStringSequenceNullableArg");

  UnionTypesTestV8Internal::doubleOrStringOrStringSequenceNullableArgMethod(info);
}

static const V8DOMConfiguration::AccessorConfiguration V8UnionTypesTestAccessors[] = {
    { "doubleOrStringOrStringSequenceAttribute", V8UnionTypesTest::doubleOrStringOrStringSequenceAttributeAttributeGetterCallback, V8UnionTypesTest::doubleOrStringOrStringSequenceAttributeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
};

static const V8DOMConfiguration::MethodConfiguration V8UnionTypesTestMethods[] = {
    {"doubleOrStringArg", V8UnionTypesTest::doubleOrStringArgMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"doubleOrInternalEnumArg", V8UnionTypesTest::doubleOrInternalEnumArgMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"doubleOrStringDefaultDoubleArg", V8UnionTypesTest::doubleOrStringDefaultDoubleArgMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"doubleOrStringDefaultStringArg", V8UnionTypesTest::doubleOrStringDefaultStringArgMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"doubleOrStringDefaultNullArg", V8UnionTypesTest::doubleOrStringDefaultNullArgMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"doubleOrStringSequenceArg", V8UnionTypesTest::doubleOrStringSequenceArgMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"nodeListOrElementArg", V8UnionTypesTest::nodeListOrElementArgMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"nodeListOrElementOrNullArg", V8UnionTypesTest::nodeListOrElementOrNullArgMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"doubleOrStringOrStringSequenceArg", V8UnionTypesTest::doubleOrStringOrStringSequenceArgMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"doubleOrStringOrStringSequenceNullableArg", V8UnionTypesTest::doubleOrStringOrStringSequenceNullableArgMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void installV8UnionTypesTestTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8UnionTypesTest::wrapperTypeInfo.interface_name, v8::Local<v8::FunctionTemplate>(), V8UnionTypesTest::internalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8UnionTypesTestAccessors, arraysize(V8UnionTypesTestAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8UnionTypesTestMethods, arraysize(V8UnionTypesTestMethods));

  // Custom signature

  V8UnionTypesTest::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8UnionTypesTest::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8UnionTypesTest::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8UnionTypesTestTemplate);
}

bool V8UnionTypesTest::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8UnionTypesTest::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

UnionTypesTest* V8UnionTypesTest::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

UnionTypesTest* NativeValueTraits<UnionTypesTest>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  UnionTypesTest* nativeValue = V8UnionTypesTest::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "UnionTypesTest"));
  }
  return nativeValue;
}

}  // namespace blink
