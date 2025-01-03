// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_keyframe_effect.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_keyframe_effect.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_keyframe_effect_options.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/local_dom_window.h"
#include "third_party/blink/renderer/core/inspector/console_message.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
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
const WrapperTypeInfo V8KeyframeEffect::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8KeyframeEffect::domTemplate,
    nullptr,
    "KeyframeEffect",
    &V8AnimationEffect::wrapperTypeInfo,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in KeyframeEffect.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& KeyframeEffect::wrapper_type_info_ = V8KeyframeEffect::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, KeyframeEffect>::value,
    "KeyframeEffect inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&KeyframeEffect::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "KeyframeEffect is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace KeyframeEffectV8Internal {

static void targetAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  KeyframeEffect* impl = V8KeyframeEffect::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->target()), impl);
}

static void compositeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  KeyframeEffect* impl = V8KeyframeEffect::ToImpl(holder);

  V8SetReturnValueString(info, impl->composite(), info.GetIsolate());
}

static void compositeAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  KeyframeEffect* impl = V8KeyframeEffect::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "KeyframeEffect", "composite");

  // Prepare the value to be set.
  V8StringResource<> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  // Type check per: http://heycam.github.io/webidl/#dfn-attribute-setter
  // Returns undefined without setting the value if the value is invalid.
  DummyExceptionStateForTesting dummyExceptionState;
  const char* validValues[] = {
      "replace",
      "add",
      "accumulate",
  };
  if (!IsValidEnum(cppValue, validValues, arraysize(validValues), "CompositeOperation", dummyExceptionState)) {
    ExecutionContext::ForCurrentRealm(info)->AddConsoleMessage(
        ConsoleMessage::Create(kJSMessageSource, kWarningMessageLevel,
                               dummyExceptionState.Message()));
    return;
  }

  impl->setComposite(cppValue);
}

static void getKeyframesMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  KeyframeEffect* impl = V8KeyframeEffect::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  Vector<ScriptValue> result = impl->getKeyframes(scriptState);
  V8SetReturnValue(info, ToV8(result, info.Holder(), info.GetIsolate()));
}

static void setKeyframesMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "KeyframeEffect", "setKeyframes");

  KeyframeEffect* impl = V8KeyframeEffect::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  ScriptValue keyframes;
  keyframes = ScriptValue(ScriptState::Current(info.GetIsolate()), info[0]);

  impl->setKeyframes(scriptState, keyframes, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void constructor1(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_KeyframeEffect_ConstructorCallback");

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kConstructionContext, "KeyframeEffect");
  ScriptState* scriptState = ScriptState::From(
      info.NewTarget().As<v8::Object>()->CreationContext());

  Element* target;
  ScriptValue keyframes;
  UnrestrictedDoubleOrKeyframeEffectOptions options;
  int numArgsPassed = info.Length();
  while (numArgsPassed > 0) {
    if (!info[numArgsPassed - 1]->IsUndefined())
      break;
    --numArgsPassed;
  }
  target = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!target && !IsUndefinedOrNull(info[0])) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Element'.");
    return;
  }

  keyframes = ScriptValue(ScriptState::Current(info.GetIsolate()), info[1]);

  if (UNLIKELY(numArgsPassed <= 2)) {
    KeyframeEffect* impl = KeyframeEffect::Create(scriptState, target, keyframes, exceptionState);
    if (exceptionState.HadException()) {
      return;
    }
    v8::Local<v8::Object> wrapper = info.Holder();
    wrapper = impl->AssociateWithWrapper(info.GetIsolate(), &V8KeyframeEffect::wrapperTypeInfo, wrapper);
    V8SetReturnValue(info, wrapper);
    return;
  }
  V8UnrestrictedDoubleOrKeyframeEffectOptions::ToImpl(info.GetIsolate(), info[2], options, UnionTypeConversionMode::kNotNullable, exceptionState);
  if (exceptionState.HadException())
    return;

  KeyframeEffect* impl = KeyframeEffect::Create(scriptState, target, keyframes, options, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  v8::Local<v8::Object> wrapper = info.Holder();
  wrapper = impl->AssociateWithWrapper(info.GetIsolate(), &V8KeyframeEffect::wrapperTypeInfo, wrapper);
  V8SetReturnValue(info, wrapper);
}

static void constructor2(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_KeyframeEffect_ConstructorCallback");

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kConstructionContext, "KeyframeEffect");
  ScriptState* scriptState = ScriptState::From(
      info.NewTarget().As<v8::Object>()->CreationContext());

  KeyframeEffect* source;
  source = V8KeyframeEffect::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!source) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'KeyframeEffect'.");
    return;
  }

  KeyframeEffect* impl = KeyframeEffect::Create(scriptState, source, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  v8::Local<v8::Object> wrapper = info.Holder();
  wrapper = impl->AssociateWithWrapper(info.GetIsolate(), &V8KeyframeEffect::wrapperTypeInfo, wrapper);
  V8SetReturnValue(info, wrapper);
}

static void constructor(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kConstructionContext, "KeyframeEffect");
  switch (std::min(3, info.Length())) {
    case 1:
      if (true) {
        KeyframeEffectV8Internal::constructor2(info);
        return;
      }
      break;
    case 2:
      if (true) {
        KeyframeEffectV8Internal::constructor1(info);
        return;
      }
      break;
    case 3:
      if (true) {
        KeyframeEffectV8Internal::constructor1(info);
        return;
      }
      break;
    default:
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
      return;
  }
  exceptionState.ThrowTypeError("No matching constructor signature.");
}

} // namespace KeyframeEffectV8Internal

void V8KeyframeEffect::targetAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_KeyframeEffect_target_Getter");

  KeyframeEffectV8Internal::targetAttributeGetter(info);
}

void V8KeyframeEffect::compositeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_KeyframeEffect_composite_Getter");

  KeyframeEffectV8Internal::compositeAttributeGetter(info);
}

void V8KeyframeEffect::compositeAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_KeyframeEffect_composite_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  KeyframeEffectV8Internal::compositeAttributeSetter(v8Value, info);
}

void V8KeyframeEffect::getKeyframesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_KeyframeEffect_getKeyframes");

  KeyframeEffectV8Internal::getKeyframesMethod(info);
}

void V8KeyframeEffect::setKeyframesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_KeyframeEffect_setKeyframes");

  KeyframeEffectV8Internal::setKeyframesMethod(info);
}

static const V8DOMConfiguration::AccessorConfiguration V8KeyframeEffectAccessors[] = {
    { "target", V8KeyframeEffect::targetAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "composite", V8KeyframeEffect::compositeAttributeGetterCallback, V8KeyframeEffect::compositeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
};

static const V8DOMConfiguration::MethodConfiguration V8KeyframeEffectMethods[] = {
    {"getKeyframes", V8KeyframeEffect::getKeyframesMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setKeyframes", V8KeyframeEffect::setKeyframesMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

void V8KeyframeEffect::constructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_KeyframeEffect_Constructor");

  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::ConstructorNotCallableAsFunction("KeyframeEffect"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  KeyframeEffectV8Internal::constructor(info);
}

static void installV8KeyframeEffectTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8KeyframeEffect::wrapperTypeInfo.interface_name, V8AnimationEffect::domTemplate(isolate, world), V8KeyframeEffect::internalFieldCount);
  interfaceTemplate->SetCallHandler(V8KeyframeEffect::constructorCallback);
  interfaceTemplate->SetLength(1);

  if (!RuntimeEnabledFeatures::WebAnimationsAPIEnabled()) {
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
      signature, V8KeyframeEffectAccessors, arraysize(V8KeyframeEffectAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8KeyframeEffectMethods, arraysize(V8KeyframeEffectMethods));

  // Custom signature

  V8KeyframeEffect::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8KeyframeEffect::InstallRuntimeEnabledFeaturesOnTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  if (!RuntimeEnabledFeatures::WebAnimationsAPIEnabled()) {
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

v8::Local<v8::FunctionTemplate> V8KeyframeEffect::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8KeyframeEffectTemplate);
}

bool V8KeyframeEffect::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8KeyframeEffect::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

KeyframeEffect* V8KeyframeEffect::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

KeyframeEffect* NativeValueTraits<KeyframeEffect>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  KeyframeEffect* nativeValue = V8KeyframeEffect::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "KeyframeEffect"));
  }
  return nativeValue;
}

}  // namespace blink
