// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_bluetooth_characteristic_properties.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"
#include "third_party/blink/renderer/platform/wtf/get_ptr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8BluetoothCharacteristicProperties::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8BluetoothCharacteristicProperties::domTemplate,
    nullptr,
    "BluetoothCharacteristicProperties",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in BluetoothCharacteristicProperties.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& BluetoothCharacteristicProperties::wrapper_type_info_ = V8BluetoothCharacteristicProperties::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, BluetoothCharacteristicProperties>::value,
    "BluetoothCharacteristicProperties inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&BluetoothCharacteristicProperties::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "BluetoothCharacteristicProperties is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace BluetoothCharacteristicPropertiesV8Internal {

static void broadcastAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  BluetoothCharacteristicProperties* impl = V8BluetoothCharacteristicProperties::ToImpl(holder);

  V8SetReturnValueBool(info, impl->broadcast());
}

static void readAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  BluetoothCharacteristicProperties* impl = V8BluetoothCharacteristicProperties::ToImpl(holder);

  V8SetReturnValueBool(info, impl->read());
}

static void writeWithoutResponseAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  BluetoothCharacteristicProperties* impl = V8BluetoothCharacteristicProperties::ToImpl(holder);

  V8SetReturnValueBool(info, impl->writeWithoutResponse());
}

static void writeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  BluetoothCharacteristicProperties* impl = V8BluetoothCharacteristicProperties::ToImpl(holder);

  V8SetReturnValueBool(info, impl->write());
}

static void notifyAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  BluetoothCharacteristicProperties* impl = V8BluetoothCharacteristicProperties::ToImpl(holder);

  V8SetReturnValueBool(info, impl->notify());
}

static void indicateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  BluetoothCharacteristicProperties* impl = V8BluetoothCharacteristicProperties::ToImpl(holder);

  V8SetReturnValueBool(info, impl->indicate());
}

static void authenticatedSignedWritesAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  BluetoothCharacteristicProperties* impl = V8BluetoothCharacteristicProperties::ToImpl(holder);

  V8SetReturnValueBool(info, impl->authenticatedSignedWrites());
}

static void reliableWriteAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  BluetoothCharacteristicProperties* impl = V8BluetoothCharacteristicProperties::ToImpl(holder);

  V8SetReturnValueBool(info, impl->reliableWrite());
}

static void writableAuxiliariesAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  BluetoothCharacteristicProperties* impl = V8BluetoothCharacteristicProperties::ToImpl(holder);

  V8SetReturnValueBool(info, impl->writableAuxiliaries());
}

} // namespace BluetoothCharacteristicPropertiesV8Internal

void V8BluetoothCharacteristicProperties::broadcastAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BluetoothCharacteristicProperties_broadcast_Getter");

  BluetoothCharacteristicPropertiesV8Internal::broadcastAttributeGetter(info);
}

void V8BluetoothCharacteristicProperties::readAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BluetoothCharacteristicProperties_read_Getter");

  BluetoothCharacteristicPropertiesV8Internal::readAttributeGetter(info);
}

void V8BluetoothCharacteristicProperties::writeWithoutResponseAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BluetoothCharacteristicProperties_writeWithoutResponse_Getter");

  BluetoothCharacteristicPropertiesV8Internal::writeWithoutResponseAttributeGetter(info);
}

void V8BluetoothCharacteristicProperties::writeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BluetoothCharacteristicProperties_write_Getter");

  BluetoothCharacteristicPropertiesV8Internal::writeAttributeGetter(info);
}

void V8BluetoothCharacteristicProperties::notifyAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BluetoothCharacteristicProperties_notify_Getter");

  BluetoothCharacteristicPropertiesV8Internal::notifyAttributeGetter(info);
}

void V8BluetoothCharacteristicProperties::indicateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BluetoothCharacteristicProperties_indicate_Getter");

  BluetoothCharacteristicPropertiesV8Internal::indicateAttributeGetter(info);
}

void V8BluetoothCharacteristicProperties::authenticatedSignedWritesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BluetoothCharacteristicProperties_authenticatedSignedWrites_Getter");

  BluetoothCharacteristicPropertiesV8Internal::authenticatedSignedWritesAttributeGetter(info);
}

void V8BluetoothCharacteristicProperties::reliableWriteAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BluetoothCharacteristicProperties_reliableWrite_Getter");

  BluetoothCharacteristicPropertiesV8Internal::reliableWriteAttributeGetter(info);
}

void V8BluetoothCharacteristicProperties::writableAuxiliariesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BluetoothCharacteristicProperties_writableAuxiliaries_Getter");

  BluetoothCharacteristicPropertiesV8Internal::writableAuxiliariesAttributeGetter(info);
}

static const V8DOMConfiguration::AccessorConfiguration V8BluetoothCharacteristicPropertiesAccessors[] = {
    { "broadcast", V8BluetoothCharacteristicProperties::broadcastAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "read", V8BluetoothCharacteristicProperties::readAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "writeWithoutResponse", V8BluetoothCharacteristicProperties::writeWithoutResponseAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "write", V8BluetoothCharacteristicProperties::writeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "notify", V8BluetoothCharacteristicProperties::notifyAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "indicate", V8BluetoothCharacteristicProperties::indicateAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "authenticatedSignedWrites", V8BluetoothCharacteristicProperties::authenticatedSignedWritesAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "reliableWrite", V8BluetoothCharacteristicProperties::reliableWriteAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "writableAuxiliaries", V8BluetoothCharacteristicProperties::writableAuxiliariesAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
};

static void installV8BluetoothCharacteristicPropertiesTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8BluetoothCharacteristicProperties::wrapperTypeInfo.interface_name, v8::Local<v8::FunctionTemplate>(), V8BluetoothCharacteristicProperties::internalFieldCount);

  if (!RuntimeEnabledFeatures::WebBluetoothEnabled()) {
    return;
  }

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8BluetoothCharacteristicPropertiesAccessors, arraysize(V8BluetoothCharacteristicPropertiesAccessors));

  // Custom signature

  V8BluetoothCharacteristicProperties::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8BluetoothCharacteristicProperties::InstallRuntimeEnabledFeaturesOnTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  if (!RuntimeEnabledFeatures::WebBluetoothEnabled()) {
    return;
  }

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.

  // Custom signature
}

v8::Local<v8::FunctionTemplate> V8BluetoothCharacteristicProperties::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8BluetoothCharacteristicPropertiesTemplate);
}

bool V8BluetoothCharacteristicProperties::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8BluetoothCharacteristicProperties::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

BluetoothCharacteristicProperties* V8BluetoothCharacteristicProperties::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

BluetoothCharacteristicProperties* NativeValueTraits<BluetoothCharacteristicProperties>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  BluetoothCharacteristicProperties* nativeValue = V8BluetoothCharacteristicProperties::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "BluetoothCharacteristicProperties"));
  }
  return nativeValue;
}

}  // namespace blink
