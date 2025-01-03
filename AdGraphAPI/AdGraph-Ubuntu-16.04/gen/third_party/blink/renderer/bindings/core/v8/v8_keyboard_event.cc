// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_keyboard_event.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_keyboard_event_init.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_window.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/local_dom_window.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
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
const WrapperTypeInfo V8KeyboardEvent::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8KeyboardEvent::domTemplate,
    nullptr,
    "KeyboardEvent",
    &V8UIEvent::wrapperTypeInfo,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in KeyboardEvent.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& KeyboardEvent::wrapper_type_info_ = V8KeyboardEvent::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, KeyboardEvent>::value,
    "KeyboardEvent inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&KeyboardEvent::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "KeyboardEvent is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace KeyboardEventV8Internal {

static void keyAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  KeyboardEvent* impl = V8KeyboardEvent::ToImpl(holder);

  V8SetReturnValueString(info, impl->key(), info.GetIsolate());
}

static void codeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  KeyboardEvent* impl = V8KeyboardEvent::ToImpl(holder);

  V8SetReturnValueString(info, impl->code(), info.GetIsolate());
}

static void locationAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  KeyboardEvent* impl = V8KeyboardEvent::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->location());
}

static void ctrlKeyAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  KeyboardEvent* impl = V8KeyboardEvent::ToImpl(holder);

  V8SetReturnValueBool(info, impl->ctrlKey());
}

static void shiftKeyAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  KeyboardEvent* impl = V8KeyboardEvent::ToImpl(holder);

  V8SetReturnValueBool(info, impl->shiftKey());
}

static void altKeyAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  KeyboardEvent* impl = V8KeyboardEvent::ToImpl(holder);

  V8SetReturnValueBool(info, impl->altKey());
}

static void metaKeyAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  KeyboardEvent* impl = V8KeyboardEvent::ToImpl(holder);

  V8SetReturnValueBool(info, impl->metaKey());
}

static void repeatAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  KeyboardEvent* impl = V8KeyboardEvent::ToImpl(holder);

  V8SetReturnValueBool(info, impl->repeat());
}

static void isComposingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  KeyboardEvent* impl = V8KeyboardEvent::ToImpl(holder);

  V8SetReturnValueBool(info, impl->isComposing());
}

static void charCodeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  KeyboardEvent* impl = V8KeyboardEvent::ToImpl(holder);

  V8SetReturnValueInt(info, impl->charCode());
}

static void keyCodeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  KeyboardEvent* impl = V8KeyboardEvent::ToImpl(holder);

  V8SetReturnValueInt(info, impl->keyCode());
}

static void isTrustedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  KeyboardEvent* impl = V8KeyboardEvent::ToImpl(holder);

  V8SetReturnValueBool(info, impl->isTrusted());
}

static void getModifierStateMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  KeyboardEvent* impl = V8KeyboardEvent::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getModifierState", "KeyboardEvent", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> keyArg;
  keyArg = info[0];
  if (!keyArg.Prepare())
    return;

  V8SetReturnValueBool(info, impl->getModifierState(keyArg));
}

static void initKeyboardEventMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "KeyboardEvent", "initKeyboardEvent");

  KeyboardEvent* impl = V8KeyboardEvent::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> type;
  bool bubbles;
  bool cancelable;
  DOMWindow* view;
  V8StringResource<> keyIdentifier;
  uint32_t location;
  bool ctrlKey;
  bool altKey;
  bool shiftKey;
  bool metaKey;
  type = info[0];
  if (!type.Prepare())
    return;

  if (!info[1]->IsUndefined()) {
    bubbles = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exceptionState);
    if (exceptionState.HadException())
      return;
  } else {
    bubbles = false;
  }
  if (!info[2]->IsUndefined()) {
    cancelable = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[2], exceptionState);
    if (exceptionState.HadException())
      return;
  } else {
    cancelable = false;
  }
  if (!info[3]->IsUndefined()) {
    view = ToDOMWindow(info.GetIsolate(), info[3]);
    if (!view && !IsUndefinedOrNull(info[3])) {
      exceptionState.ThrowTypeError("parameter 4 is not of type 'Window'.");
      return;
    }
  } else {
    view = nullptr;
  }
  if (!info[4]->IsUndefined()) {
    keyIdentifier = info[4];
    if (!keyIdentifier.Prepare())
      return;
  } else {
    keyIdentifier = WTF::g_empty_string;
  }
  if (!info[5]->IsUndefined()) {
    location = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[5], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    location = 0u;
  }
  if (!info[6]->IsUndefined()) {
    ctrlKey = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[6], exceptionState);
    if (exceptionState.HadException())
      return;
  } else {
    ctrlKey = false;
  }
  if (!info[7]->IsUndefined()) {
    altKey = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[7], exceptionState);
    if (exceptionState.HadException())
      return;
  } else {
    altKey = false;
  }
  if (!info[8]->IsUndefined()) {
    shiftKey = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[8], exceptionState);
    if (exceptionState.HadException())
      return;
  } else {
    shiftKey = false;
  }
  if (!info[9]->IsUndefined()) {
    metaKey = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[9], exceptionState);
    if (exceptionState.HadException())
      return;
  } else {
    metaKey = false;
  }

  impl->initKeyboardEvent(scriptState, type, bubbles, cancelable, view, keyIdentifier, location, ctrlKey, altKey, shiftKey, metaKey);
}

static void constructor(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_KeyboardEvent_ConstructorCallback");

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kConstructionContext, "KeyboardEvent");
  ScriptState* scriptState = ScriptState::From(
      info.NewTarget().As<v8::Object>()->CreationContext());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> type;
  KeyboardEventInit eventInitDict;
  type = info[0];
  if (!type.Prepare())
    return;

  if (!info[1]->IsNullOrUndefined() && !info[1]->IsObject()) {
    exceptionState.ThrowTypeError("parameter 2 ('eventInitDict') is not an object.");
    return;
  }
  V8KeyboardEventInit::ToImpl(info.GetIsolate(), info[1], eventInitDict, exceptionState);
  if (exceptionState.HadException())
    return;

  KeyboardEvent* impl = KeyboardEvent::Create(scriptState, type, eventInitDict);
  v8::Local<v8::Object> wrapper = info.Holder();
  wrapper = impl->AssociateWithWrapper(info.GetIsolate(), &V8KeyboardEvent::wrapperTypeInfo, wrapper);
  V8SetReturnValue(info, wrapper);
}

} // namespace KeyboardEventV8Internal

void V8KeyboardEvent::keyAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_KeyboardEvent_key_Getter");

  KeyboardEventV8Internal::keyAttributeGetter(info);
}

void V8KeyboardEvent::codeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_KeyboardEvent_code_Getter");

  KeyboardEventV8Internal::codeAttributeGetter(info);
}

void V8KeyboardEvent::locationAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_KeyboardEvent_location_Getter");

  KeyboardEventV8Internal::locationAttributeGetter(info);
}

void V8KeyboardEvent::ctrlKeyAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_KeyboardEvent_ctrlKey_Getter");

  KeyboardEventV8Internal::ctrlKeyAttributeGetter(info);
}

void V8KeyboardEvent::shiftKeyAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_KeyboardEvent_shiftKey_Getter");

  KeyboardEventV8Internal::shiftKeyAttributeGetter(info);
}

void V8KeyboardEvent::altKeyAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_KeyboardEvent_altKey_Getter");

  KeyboardEventV8Internal::altKeyAttributeGetter(info);
}

void V8KeyboardEvent::metaKeyAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_KeyboardEvent_metaKey_Getter");

  KeyboardEventV8Internal::metaKeyAttributeGetter(info);
}

void V8KeyboardEvent::repeatAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_KeyboardEvent_repeat_Getter");

  KeyboardEventV8Internal::repeatAttributeGetter(info);
}

void V8KeyboardEvent::isComposingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_KeyboardEvent_isComposing_Getter");

  KeyboardEventV8Internal::isComposingAttributeGetter(info);
}

void V8KeyboardEvent::charCodeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_KeyboardEvent_charCode_Getter");

  KeyboardEventV8Internal::charCodeAttributeGetter(info);
}

void V8KeyboardEvent::keyCodeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_KeyboardEvent_keyCode_Getter");

  KeyboardEventV8Internal::keyCodeAttributeGetter(info);
}

void V8KeyboardEvent::isTrustedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_KeyboardEvent_isTrusted_Getter");

  KeyboardEventV8Internal::isTrustedAttributeGetter(info);
}

void V8KeyboardEvent::getModifierStateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_KeyboardEvent_getModifierState");

  KeyboardEventV8Internal::getModifierStateMethod(info);
}

void V8KeyboardEvent::initKeyboardEventMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_KeyboardEvent_initKeyboardEvent");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8KeyboardEvent_InitKeyboardEvent_Method);
  KeyboardEventV8Internal::initKeyboardEventMethod(info);
}

static const V8DOMConfiguration::AccessorConfiguration V8KeyboardEventAccessors[] = {
    { "key", V8KeyboardEvent::keyAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "code", V8KeyboardEvent::codeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "location", V8KeyboardEvent::locationAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "ctrlKey", V8KeyboardEvent::ctrlKeyAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "shiftKey", V8KeyboardEvent::shiftKeyAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "altKey", V8KeyboardEvent::altKeyAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "metaKey", V8KeyboardEvent::metaKeyAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "repeat", V8KeyboardEvent::repeatAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "isComposing", V8KeyboardEvent::isComposingAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "charCode", V8KeyboardEvent::charCodeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "keyCode", V8KeyboardEvent::keyCodeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "isTrusted", V8KeyboardEvent::isTrustedAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::DontDelete | v8::ReadOnly), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
};

static const V8DOMConfiguration::MethodConfiguration V8KeyboardEventMethods[] = {
    {"getModifierState", V8KeyboardEvent::getModifierStateMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"initKeyboardEvent", V8KeyboardEvent::initKeyboardEventMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

void V8KeyboardEvent::constructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_KeyboardEvent_Constructor");

  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::ConstructorNotCallableAsFunction("KeyboardEvent"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  KeyboardEventV8Internal::constructor(info);
}

static void installV8KeyboardEventTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8KeyboardEvent::wrapperTypeInfo.interface_name, V8UIEvent::domTemplate(isolate, world), V8KeyboardEvent::internalFieldCount);
  interfaceTemplate->SetCallHandler(V8KeyboardEvent::constructorCallback);
  interfaceTemplate->SetLength(1);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  static constexpr V8DOMConfiguration::ConstantConfiguration V8KeyboardEventConstants[] = {
      {"DOM_KEY_LOCATION_STANDARD", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x00)},
      {"DOM_KEY_LOCATION_LEFT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x01)},
      {"DOM_KEY_LOCATION_RIGHT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x02)},
      {"DOM_KEY_LOCATION_NUMPAD", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x03)},
  };
  V8DOMConfiguration::InstallConstants(
      isolate, interfaceTemplate, prototypeTemplate,
      V8KeyboardEventConstants, arraysize(V8KeyboardEventConstants));
  static_assert(0x00 == KeyboardEvent::kDomKeyLocationStandard, "the value of KeyboardEvent_kDomKeyLocationStandard does not match with implementation");
  static_assert(0x01 == KeyboardEvent::kDomKeyLocationLeft, "the value of KeyboardEvent_kDomKeyLocationLeft does not match with implementation");
  static_assert(0x02 == KeyboardEvent::kDomKeyLocationRight, "the value of KeyboardEvent_kDomKeyLocationRight does not match with implementation");
  static_assert(0x03 == KeyboardEvent::kDomKeyLocationNumpad, "the value of KeyboardEvent_kDomKeyLocationNumpad does not match with implementation");
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8KeyboardEventAccessors, arraysize(V8KeyboardEventAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8KeyboardEventMethods, arraysize(V8KeyboardEventMethods));

  // Custom signature

  V8KeyboardEvent::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8KeyboardEvent::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8KeyboardEvent::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8KeyboardEventTemplate);
}

bool V8KeyboardEvent::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8KeyboardEvent::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

KeyboardEvent* V8KeyboardEvent::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

KeyboardEvent* NativeValueTraits<KeyboardEvent>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  KeyboardEvent* nativeValue = V8KeyboardEvent::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "KeyboardEvent"));
  }
  return nativeValue;
}

}  // namespace blink
