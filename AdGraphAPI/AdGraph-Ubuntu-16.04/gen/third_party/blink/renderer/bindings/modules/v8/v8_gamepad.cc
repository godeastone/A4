// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_gamepad.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gamepad_button.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gamepad_haptic_actuator.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gamepad_pose.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/core/inspector/console_message.h"
#include "third_party/blink/renderer/core/origin_trials/origin_trials.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/bindings/v8_private_property.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"
#include "third_party/blink/renderer/platform/wtf/get_ptr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8Gamepad::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8Gamepad::domTemplate,
    nullptr,
    "Gamepad",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in Gamepad.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& Gamepad::wrapper_type_info_ = V8Gamepad::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, Gamepad>::value,
    "Gamepad inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&Gamepad::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "Gamepad is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace GamepadV8Internal {

static void idAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Gamepad* impl = V8Gamepad::ToImpl(holder);

  V8SetReturnValueString(info, impl->id(), info.GetIsolate());
}

static void indexAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Gamepad* impl = V8Gamepad::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->index());
}

static void connectedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Gamepad* impl = V8Gamepad::ToImpl(holder);

  V8SetReturnValueBool(info, impl->connected());
}

static void timestampAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Gamepad* impl = V8Gamepad::ToImpl(holder);

  V8SetReturnValue(info, static_cast<double>(impl->timestamp()));
}

static void mappingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Gamepad* impl = V8Gamepad::ToImpl(holder);

  V8SetReturnValueString(info, impl->mapping(), info.GetIsolate());
}

static void axesAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Gamepad* impl = V8Gamepad::ToImpl(holder);

  // [CachedAttribute]
  V8PrivateProperty::Symbol propertySymbol =
      V8PrivateProperty::GetSymbol(info.GetIsolate(),
          "Gamepad#Axes");
  if (!static_cast<const Gamepad*>(impl)->isAxisDataDirty()) {
    v8::Local<v8::Value> v8Value;
    if (propertySymbol.GetOrUndefined(holder).ToLocal(&v8Value) && !v8Value->IsUndefined()) {
      V8SetReturnValue(info, v8Value);
      return;
    }
  }

  Vector<double> cppValue(impl->axes());

  // [CachedAttribute]
  v8::Local<v8::Value> v8Value(FreezeV8Object(ToV8(cppValue, holder, info.GetIsolate()), info.GetIsolate()));
  propertySymbol.Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void buttonsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Gamepad* impl = V8Gamepad::ToImpl(holder);

  // [CachedAttribute]
  V8PrivateProperty::Symbol propertySymbol =
      V8PrivateProperty::GetSymbol(info.GetIsolate(),
          "Gamepad#Buttons");
  if (!static_cast<const Gamepad*>(impl)->isButtonDataDirty()) {
    v8::Local<v8::Value> v8Value;
    if (propertySymbol.GetOrUndefined(holder).ToLocal(&v8Value) && !v8Value->IsUndefined()) {
      V8SetReturnValue(info, v8Value);
      return;
    }
  }

  HeapVector<Member<GamepadButton>> cppValue(impl->buttons());

  // [CachedAttribute]
  v8::Local<v8::Value> v8Value(FreezeV8Object(ToV8(cppValue, holder, info.GetIsolate()), info.GetIsolate()));
  propertySymbol.Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void vibrationActuatorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Gamepad* impl = V8Gamepad::ToImpl(holder);

  GamepadHapticActuator* cppValue(WTF::GetPtr(impl->vibrationActuator()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Gamepad#vibrationActuator")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void poseAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Gamepad* impl = V8Gamepad::ToImpl(holder);

  GamepadPose* cppValue(WTF::GetPtr(impl->pose()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Gamepad#pose")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void handAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Gamepad* impl = V8Gamepad::ToImpl(holder);

  V8SetReturnValueString(info, impl->hand(), info.GetIsolate());
}

static void displayIdAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Gamepad* impl = V8Gamepad::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->displayId());
}

} // namespace GamepadV8Internal

void V8Gamepad::idAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Gamepad_id_Getter");

  GamepadV8Internal::idAttributeGetter(info);
}

void V8Gamepad::indexAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Gamepad_index_Getter");

  GamepadV8Internal::indexAttributeGetter(info);
}

void V8Gamepad::connectedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Gamepad_connected_Getter");

  GamepadV8Internal::connectedAttributeGetter(info);
}

void V8Gamepad::timestampAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Gamepad_timestamp_Getter");

  GamepadV8Internal::timestampAttributeGetter(info);
}

void V8Gamepad::mappingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Gamepad_mapping_Getter");

  GamepadV8Internal::mappingAttributeGetter(info);
}

void V8Gamepad::axesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Gamepad_axes_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kGamepadAxes);

  GamepadV8Internal::axesAttributeGetter(info);
}

void V8Gamepad::buttonsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Gamepad_buttons_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kGamepadButtons);

  GamepadV8Internal::buttonsAttributeGetter(info);
}

void V8Gamepad::vibrationActuatorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Gamepad_vibrationActuator_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kGamepadVibrationActuator);

  GamepadV8Internal::vibrationActuatorAttributeGetter(info);
}

void V8Gamepad::poseAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Gamepad_pose_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kGamepadPose);

  GamepadV8Internal::poseAttributeGetter(info);
}

void V8Gamepad::handAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Gamepad_hand_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kGamepadHand);

  GamepadV8Internal::handAttributeGetter(info);
}

void V8Gamepad::displayIdAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Gamepad_displayId_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kGamepadDisplayId);

  GamepadV8Internal::displayIdAttributeGetter(info);
}

static const V8DOMConfiguration::AccessorConfiguration V8GamepadAccessors[] = {
    { "id", V8Gamepad::idAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "index", V8Gamepad::indexAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "connected", V8Gamepad::connectedAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "timestamp", V8Gamepad::timestampAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "mapping", V8Gamepad::mappingAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "axes", V8Gamepad::axesAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "buttons", V8Gamepad::buttonsAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
};

static void installV8GamepadTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8Gamepad::wrapperTypeInfo.interface_name, v8::Local<v8::FunctionTemplate>(), V8Gamepad::internalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8GamepadAccessors, arraysize(V8GamepadAccessors));

  // Custom signature

  V8Gamepad::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8Gamepad::InstallRuntimeEnabledFeaturesOnTemplate(
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

  if (RuntimeEnabledFeatures::GamepadVibrationEnabled()) {
    static const V8DOMConfiguration::AccessorConfiguration accessor_configurations[] = {
        { "vibrationActuator", V8Gamepad::vibrationActuatorAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, accessor_configurations,
        arraysize(accessor_configurations));
  }

  // Custom signature
}

void V8Gamepad::installWebXRGamepadSupport(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Object> instance, v8::Local<v8::Object> prototype, v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interfaceTemplate = V8Gamepad::wrapperTypeInfo.domTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  static const V8DOMConfiguration::AccessorConfiguration accessordisplayIdConfiguration[] = {
    { "displayId", V8Gamepad::displayIdAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& accessorConfig : accessordisplayIdConfiguration)
    V8DOMConfiguration::InstallAccessor(isolate, world, instance, prototype, interface, signature, accessorConfig);
  static const V8DOMConfiguration::AccessorConfiguration accessorhandConfiguration[] = {
    { "hand", V8Gamepad::handAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& accessorConfig : accessorhandConfiguration)
    V8DOMConfiguration::InstallAccessor(isolate, world, instance, prototype, interface, signature, accessorConfig);
}

void V8Gamepad::installWebXRGamepadSupport(ScriptState* scriptState, v8::Local<v8::Object> instance) {
  V8PerContextData* perContextData = scriptState->PerContextData();
  v8::Local<v8::Object> prototype = perContextData->PrototypeForType(&V8Gamepad::wrapperTypeInfo);
  v8::Local<v8::Function> interface = perContextData->ConstructorForType(&V8Gamepad::wrapperTypeInfo);
  ALLOW_UNUSED_LOCAL(interface);
  installWebXRGamepadSupport(scriptState->GetIsolate(), scriptState->World(), instance, prototype, interface);
}

void V8Gamepad::installWebXRGamepadSupport(ScriptState* scriptState) {
  installWebXRGamepadSupport(scriptState, v8::Local<v8::Object>());
}

void V8Gamepad::installGamepadExtensions(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Object> instance, v8::Local<v8::Object> prototype, v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interfaceTemplate = V8Gamepad::wrapperTypeInfo.domTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  static const V8DOMConfiguration::AccessorConfiguration accessorposeConfiguration[] = {
    { "pose", V8Gamepad::poseAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& accessorConfig : accessorposeConfiguration)
    V8DOMConfiguration::InstallAccessor(isolate, world, instance, prototype, interface, signature, accessorConfig);
}

void V8Gamepad::installGamepadExtensions(ScriptState* scriptState, v8::Local<v8::Object> instance) {
  V8PerContextData* perContextData = scriptState->PerContextData();
  v8::Local<v8::Object> prototype = perContextData->PrototypeForType(&V8Gamepad::wrapperTypeInfo);
  v8::Local<v8::Function> interface = perContextData->ConstructorForType(&V8Gamepad::wrapperTypeInfo);
  ALLOW_UNUSED_LOCAL(interface);
  installGamepadExtensions(scriptState->GetIsolate(), scriptState->World(), instance, prototype, interface);
}

void V8Gamepad::installGamepadExtensions(ScriptState* scriptState) {
  installGamepadExtensions(scriptState, v8::Local<v8::Object>());
}

v8::Local<v8::FunctionTemplate> V8Gamepad::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8GamepadTemplate);
}

bool V8Gamepad::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8Gamepad::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

Gamepad* V8Gamepad::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

Gamepad* NativeValueTraits<Gamepad>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  Gamepad* nativeValue = V8Gamepad::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "Gamepad"));
  }
  return nativeValue;
}

}  // namespace blink
