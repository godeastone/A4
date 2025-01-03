// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_xpath_result.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_node.h"
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
const WrapperTypeInfo V8XPathResult::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8XPathResult::domTemplate,
    nullptr,
    "XPathResult",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in XPathResult.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& XPathResult::wrapper_type_info_ = V8XPathResult::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, XPathResult>::value,
    "XPathResult inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&XPathResult::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "XPathResult is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace XPathResultV8Internal {

static void resultTypeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  XPathResult* impl = V8XPathResult::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->resultType());
}

static void numberValueAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  XPathResult* impl = V8XPathResult::ToImpl(holder);

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kGetterContext, "XPathResult", "numberValue");

  double cppValue(impl->numberValue(exceptionState));

  if (UNLIKELY(exceptionState.HadException()))
    return;

  V8SetReturnValue(info, cppValue);
}

static void stringValueAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  XPathResult* impl = V8XPathResult::ToImpl(holder);

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kGetterContext, "XPathResult", "stringValue");

  String cppValue(impl->stringValue(exceptionState));

  if (UNLIKELY(exceptionState.HadException()))
    return;

  V8SetReturnValueString(info, cppValue, info.GetIsolate());
}

static void booleanValueAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  XPathResult* impl = V8XPathResult::ToImpl(holder);

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kGetterContext, "XPathResult", "booleanValue");

  bool cppValue(impl->booleanValue(exceptionState));

  if (UNLIKELY(exceptionState.HadException()))
    return;

  V8SetReturnValueBool(info, cppValue);
}

static void singleNodeValueAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  XPathResult* impl = V8XPathResult::ToImpl(holder);

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kGetterContext, "XPathResult", "singleNodeValue");

  Node* cppValue(impl->singleNodeValue(exceptionState));

  if (UNLIKELY(exceptionState.HadException()))
    return;

  V8SetReturnValueFast(info, cppValue, impl);
}

static void invalidIteratorStateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  XPathResult* impl = V8XPathResult::ToImpl(holder);

  V8SetReturnValueBool(info, impl->invalidIteratorState());
}

static void snapshotLengthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  XPathResult* impl = V8XPathResult::ToImpl(holder);

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kGetterContext, "XPathResult", "snapshotLength");

  uint32_t cppValue(impl->snapshotLength(exceptionState));

  if (UNLIKELY(exceptionState.HadException()))
    return;

  V8SetReturnValueUnsigned(info, cppValue);
}

static void iterateNextMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "XPathResult", "iterateNext");

  XPathResult* impl = V8XPathResult::ToImpl(info.Holder());

  Node* result = impl->iterateNext(exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void snapshotItemMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "XPathResult", "snapshotItem");

  XPathResult* impl = V8XPathResult::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t index;
  index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  Node* result = impl->snapshotItem(index, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

} // namespace XPathResultV8Internal

void V8XPathResult::resultTypeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XPathResult_resultType_Getter");

  XPathResultV8Internal::resultTypeAttributeGetter(info);
}

void V8XPathResult::numberValueAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XPathResult_numberValue_Getter");

  XPathResultV8Internal::numberValueAttributeGetter(info);
}

void V8XPathResult::stringValueAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XPathResult_stringValue_Getter");

  XPathResultV8Internal::stringValueAttributeGetter(info);
}

void V8XPathResult::booleanValueAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XPathResult_booleanValue_Getter");

  XPathResultV8Internal::booleanValueAttributeGetter(info);
}

void V8XPathResult::singleNodeValueAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XPathResult_singleNodeValue_Getter");

  XPathResultV8Internal::singleNodeValueAttributeGetter(info);
}

void V8XPathResult::invalidIteratorStateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XPathResult_invalidIteratorState_Getter");

  XPathResultV8Internal::invalidIteratorStateAttributeGetter(info);
}

void V8XPathResult::snapshotLengthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XPathResult_snapshotLength_Getter");

  XPathResultV8Internal::snapshotLengthAttributeGetter(info);
}

void V8XPathResult::iterateNextMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XPathResult_iterateNext");

  XPathResultV8Internal::iterateNextMethod(info);
}

void V8XPathResult::snapshotItemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XPathResult_snapshotItem");

  XPathResultV8Internal::snapshotItemMethod(info);
}

static const V8DOMConfiguration::AccessorConfiguration V8XPathResultAccessors[] = {
    { "resultType", V8XPathResult::resultTypeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "numberValue", V8XPathResult::numberValueAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "stringValue", V8XPathResult::stringValueAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "booleanValue", V8XPathResult::booleanValueAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "singleNodeValue", V8XPathResult::singleNodeValueAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "invalidIteratorState", V8XPathResult::invalidIteratorStateAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "snapshotLength", V8XPathResult::snapshotLengthAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
};

static const V8DOMConfiguration::MethodConfiguration V8XPathResultMethods[] = {
    {"iterateNext", V8XPathResult::iterateNextMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"snapshotItem", V8XPathResult::snapshotItemMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void installV8XPathResultTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8XPathResult::wrapperTypeInfo.interface_name, v8::Local<v8::FunctionTemplate>(), V8XPathResult::internalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  static constexpr V8DOMConfiguration::ConstantConfiguration V8XPathResultConstants[] = {
      {"ANY_TYPE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(0)},
      {"NUMBER_TYPE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(1)},
      {"STRING_TYPE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(2)},
      {"BOOLEAN_TYPE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(3)},
      {"UNORDERED_NODE_ITERATOR_TYPE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(4)},
      {"ORDERED_NODE_ITERATOR_TYPE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(5)},
      {"UNORDERED_NODE_SNAPSHOT_TYPE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(6)},
      {"ORDERED_NODE_SNAPSHOT_TYPE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(7)},
      {"ANY_UNORDERED_NODE_TYPE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(8)},
      {"FIRST_ORDERED_NODE_TYPE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(9)},
  };
  V8DOMConfiguration::InstallConstants(
      isolate, interfaceTemplate, prototypeTemplate,
      V8XPathResultConstants, arraysize(V8XPathResultConstants));
  static_assert(0 == XPathResult::kAnyType, "the value of XPathResult_kAnyType does not match with implementation");
  static_assert(1 == XPathResult::kNumberType, "the value of XPathResult_kNumberType does not match with implementation");
  static_assert(2 == XPathResult::kStringType, "the value of XPathResult_kStringType does not match with implementation");
  static_assert(3 == XPathResult::kBooleanType, "the value of XPathResult_kBooleanType does not match with implementation");
  static_assert(4 == XPathResult::kUnorderedNodeIteratorType, "the value of XPathResult_kUnorderedNodeIteratorType does not match with implementation");
  static_assert(5 == XPathResult::kOrderedNodeIteratorType, "the value of XPathResult_kOrderedNodeIteratorType does not match with implementation");
  static_assert(6 == XPathResult::kUnorderedNodeSnapshotType, "the value of XPathResult_kUnorderedNodeSnapshotType does not match with implementation");
  static_assert(7 == XPathResult::kOrderedNodeSnapshotType, "the value of XPathResult_kOrderedNodeSnapshotType does not match with implementation");
  static_assert(8 == XPathResult::kAnyUnorderedNodeType, "the value of XPathResult_kAnyUnorderedNodeType does not match with implementation");
  static_assert(9 == XPathResult::kFirstOrderedNodeType, "the value of XPathResult_kFirstOrderedNodeType does not match with implementation");
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8XPathResultAccessors, arraysize(V8XPathResultAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8XPathResultMethods, arraysize(V8XPathResultMethods));

  // Custom signature

  V8XPathResult::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8XPathResult::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8XPathResult::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8XPathResultTemplate);
}

bool V8XPathResult::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8XPathResult::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

XPathResult* V8XPathResult::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

XPathResult* NativeValueTraits<XPathResult>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  XPathResult* nativeValue = V8XPathResult::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "XPathResult"));
  }
  return nativeValue;
}

}  // namespace blink
