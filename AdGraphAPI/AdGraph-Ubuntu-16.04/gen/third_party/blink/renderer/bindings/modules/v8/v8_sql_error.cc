// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_sql_error.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
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
const WrapperTypeInfo V8SQLError::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8SQLError::domTemplate,
    nullptr,
    "SQLError",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in SQLError.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& SQLError::wrapper_type_info_ = V8SQLError::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, SQLError>::value,
    "SQLError inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&SQLError::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "SQLError is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace SQLErrorV8Internal {

static void codeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SQLError* impl = V8SQLError::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->code());
}

static void messageAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SQLError* impl = V8SQLError::ToImpl(holder);

  V8SetReturnValueString(info, impl->message(), info.GetIsolate());
}

} // namespace SQLErrorV8Internal

void V8SQLError::codeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SQLError_code_Getter");

  SQLErrorV8Internal::codeAttributeGetter(info);
}

void V8SQLError::messageAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SQLError_message_Getter");

  SQLErrorV8Internal::messageAttributeGetter(info);
}

static const V8DOMConfiguration::AccessorConfiguration V8SQLErrorAccessors[] = {
    { "code", V8SQLError::codeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "message", V8SQLError::messageAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
};

static void installV8SQLErrorTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8SQLError::wrapperTypeInfo.interface_name, v8::Local<v8::FunctionTemplate>(), V8SQLError::internalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  static constexpr V8DOMConfiguration::ConstantConfiguration V8SQLErrorConstants[] = {
      {"UNKNOWN_ERR", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(0)},
      {"DATABASE_ERR", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(1)},
      {"VERSION_ERR", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(2)},
      {"TOO_LARGE_ERR", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(3)},
      {"QUOTA_ERR", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(4)},
      {"SYNTAX_ERR", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(5)},
      {"CONSTRAINT_ERR", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(6)},
      {"TIMEOUT_ERR", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(7)},
  };
  V8DOMConfiguration::InstallConstants(
      isolate, interfaceTemplate, prototypeTemplate,
      V8SQLErrorConstants, arraysize(V8SQLErrorConstants));
  static_assert(0 == SQLError::kUnknownErr, "the value of SQLError_kUnknownErr does not match with implementation");
  static_assert(1 == SQLError::kDatabaseErr, "the value of SQLError_kDatabaseErr does not match with implementation");
  static_assert(2 == SQLError::kVersionErr, "the value of SQLError_kVersionErr does not match with implementation");
  static_assert(3 == SQLError::kTooLargeErr, "the value of SQLError_kTooLargeErr does not match with implementation");
  static_assert(4 == SQLError::kQuotaErr, "the value of SQLError_kQuotaErr does not match with implementation");
  static_assert(5 == SQLError::kSyntaxErr, "the value of SQLError_kSyntaxErr does not match with implementation");
  static_assert(6 == SQLError::kConstraintErr, "the value of SQLError_kConstraintErr does not match with implementation");
  static_assert(7 == SQLError::kTimeoutErr, "the value of SQLError_kTimeoutErr does not match with implementation");
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8SQLErrorAccessors, arraysize(V8SQLErrorAccessors));

  // Custom signature

  V8SQLError::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8SQLError::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8SQLError::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8SQLErrorTemplate);
}

bool V8SQLError::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8SQLError::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

SQLError* V8SQLError::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

SQLError* NativeValueTraits<SQLError>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  SQLError* nativeValue = V8SQLError::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "SQLError"));
  }
  return nativeValue;
}

}  // namespace blink
