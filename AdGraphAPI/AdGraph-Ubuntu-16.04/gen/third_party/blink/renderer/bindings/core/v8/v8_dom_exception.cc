// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_exception.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/local_dom_window.h"
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
const WrapperTypeInfo V8DOMException::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8DOMException::domTemplate,
    nullptr,
    "DOMException",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in DOMException.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& DOMException::wrapper_type_info_ = V8DOMException::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, DOMException>::value,
    "DOMException inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&DOMException::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "DOMException is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace DOMExceptionV8Internal {

static void codeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMException* impl = V8DOMException::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->code());
}

static void nameAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMException* impl = V8DOMException::ToImpl(holder);

  V8SetReturnValueString(info, impl->name(), info.GetIsolate());
}

static void messageAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMException* impl = V8DOMException::ToImpl(holder);

  V8SetReturnValueString(info, impl->message(), info.GetIsolate());
}

static void constructor(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMException_ConstructorCallback");

  V8StringResource<> message;
  V8StringResource<> name;
  if (!info[0]->IsUndefined()) {
    message = info[0];
    if (!message.Prepare())
      return;
  } else {
    message = WTF::g_empty_string;
  }
  if (!info[1]->IsUndefined()) {
    name = info[1];
    if (!name.Prepare())
      return;
  } else {
    name = "Error";
  }

  DOMException* impl = DOMException::Create(message, name);
  v8::Local<v8::Object> wrapper = info.Holder();
  wrapper = impl->AssociateWithWrapper(info.GetIsolate(), &V8DOMException::wrapperTypeInfo, wrapper);
  V8SetReturnValue(info, wrapper);
}

} // namespace DOMExceptionV8Internal

void V8DOMException::codeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMException_code_Getter");

  DOMExceptionV8Internal::codeAttributeGetter(info);
}

void V8DOMException::nameAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMException_name_Getter");

  DOMExceptionV8Internal::nameAttributeGetter(info);
}

void V8DOMException::messageAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMException_message_Getter");

  DOMExceptionV8Internal::messageAttributeGetter(info);
}

static const V8DOMConfiguration::AccessorConfiguration V8DOMExceptionAccessors[] = {
    { "code", V8DOMException::codeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "name", V8DOMException::nameAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "message", V8DOMException::messageAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
};

void V8DOMException::constructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMException_Constructor");

  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::ConstructorNotCallableAsFunction("DOMException"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  DOMExceptionV8Internal::constructor(info);
}

static void installV8DOMExceptionTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8DOMException::wrapperTypeInfo.interface_name, v8::Local<v8::FunctionTemplate>(), V8DOMException::internalFieldCount);
  interfaceTemplate->SetCallHandler(V8DOMException::constructorCallback);
  interfaceTemplate->SetLength(0);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  static constexpr V8DOMConfiguration::ConstantConfiguration V8DOMExceptionConstants[] = {
      {"INDEX_SIZE_ERR", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(1)},
      {"DOMSTRING_SIZE_ERR", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(2)},
      {"HIERARCHY_REQUEST_ERR", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(3)},
      {"WRONG_DOCUMENT_ERR", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(4)},
      {"INVALID_CHARACTER_ERR", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(5)},
      {"NO_DATA_ALLOWED_ERR", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(6)},
      {"NO_MODIFICATION_ALLOWED_ERR", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(7)},
      {"NOT_FOUND_ERR", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(8)},
      {"NOT_SUPPORTED_ERR", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(9)},
      {"INUSE_ATTRIBUTE_ERR", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(10)},
      {"INVALID_STATE_ERR", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(11)},
      {"SYNTAX_ERR", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(12)},
      {"INVALID_MODIFICATION_ERR", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(13)},
      {"NAMESPACE_ERR", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(14)},
      {"INVALID_ACCESS_ERR", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(15)},
      {"VALIDATION_ERR", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(16)},
      {"TYPE_MISMATCH_ERR", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(17)},
      {"SECURITY_ERR", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(18)},
      {"NETWORK_ERR", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(19)},
      {"ABORT_ERR", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(20)},
      {"URL_MISMATCH_ERR", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(21)},
      {"QUOTA_EXCEEDED_ERR", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(22)},
      {"TIMEOUT_ERR", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(23)},
      {"INVALID_NODE_TYPE_ERR", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(24)},
      {"DATA_CLONE_ERR", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(25)},
  };
  V8DOMConfiguration::InstallConstants(
      isolate, interfaceTemplate, prototypeTemplate,
      V8DOMExceptionConstants, arraysize(V8DOMExceptionConstants));
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8DOMExceptionAccessors, arraysize(V8DOMExceptionAccessors));

  // The WebIDL spec states that DOMException objects have a few peculiarities.
  // One of them is similar to what it mandates for Iterator objects when it
  // comes to the inheritance chain. Instead of
  //     DOMException -> prototype -> %ObjectPrototype%
  // we have
  //     DOMException -> prototype -> %ErrorPrototype% -> %ObjectPrototype%
  // so that DOMException objects "inherit" toString() and a few properties
  // from %ErrorPrototype%.
  // See https://heycam.github.io/webidl/#es-DOMException-specialness.
  //
  // We achieve this with the same hack we use for Iterators: create a new
  // function template with no prototype, set its "prototype" property to
  // %ErrorPrototype% and make |interfaceTemplate| inherit from it. When
  // |interfaceTemplate| is instantiated, its prototype.__proto__ will point to
  // |intrinsicErrorPrototypeInterfaceTemplate|'s "prototype" property.
  v8::Local<v8::FunctionTemplate> intrinsicErrorPrototypeInterfaceTemplate =
      v8::FunctionTemplate::New(isolate);
  intrinsicErrorPrototypeInterfaceTemplate->RemovePrototype();
  intrinsicErrorPrototypeInterfaceTemplate->SetIntrinsicDataProperty(
      V8AtomicString(isolate, "prototype"), v8::kErrorPrototype);
  interfaceTemplate->Inherit(intrinsicErrorPrototypeInterfaceTemplate);

  // Custom signature

  V8DOMException::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8DOMException::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8DOMException::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8DOMExceptionTemplate);
}

bool V8DOMException::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8DOMException::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

DOMException* V8DOMException::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

DOMException* NativeValueTraits<DOMException>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  DOMException* nativeValue = V8DOMException::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "DOMException"));
  }
  return nativeValue;
}

}  // namespace blink
