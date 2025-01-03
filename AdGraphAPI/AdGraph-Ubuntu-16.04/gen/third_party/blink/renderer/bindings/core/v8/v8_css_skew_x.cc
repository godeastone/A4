// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_css_skew_x.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_numeric_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/local_dom_window.h"
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
const WrapperTypeInfo V8CSSSkewX::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8CSSSkewX::domTemplate,
    nullptr,
    "CSSSkewX",
    &V8CSSTransformComponent::wrapperTypeInfo,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in CSSSkewX.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& CSSSkewX::wrapper_type_info_ = V8CSSSkewX::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, CSSSkewX>::value,
    "CSSSkewX inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&CSSSkewX::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "CSSSkewX is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace CSSSkewXV8Internal {

static void axAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  CSSSkewX* impl = V8CSSSkewX::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->ax()), impl);
}

static void axAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  CSSSkewX* impl = V8CSSSkewX::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "CSSSkewX", "ax");

  // Prepare the value to be set.
  CSSNumericValue* cppValue = V8CSSNumericValue::ToImplWithTypeCheck(info.GetIsolate(), v8Value);

  // Type check per: http://heycam.github.io/webidl/#es-interface
  if (!cppValue) {
    exceptionState.ThrowTypeError("The provided value is not of type 'CSSNumericValue'.");
    return;
  }

  impl->setAx(cppValue, exceptionState);
}

static void constructor(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSSkewX_ConstructorCallback");

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kConstructionContext, "CSSSkewX");

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  CSSNumericValue* ax;
  ax = V8CSSNumericValue::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!ax) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'CSSNumericValue'.");
    return;
  }

  CSSSkewX* impl = CSSSkewX::Create(ax, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  v8::Local<v8::Object> wrapper = info.Holder();
  wrapper = impl->AssociateWithWrapper(info.GetIsolate(), &V8CSSSkewX::wrapperTypeInfo, wrapper);
  V8SetReturnValue(info, wrapper);
}

} // namespace CSSSkewXV8Internal

void V8CSSSkewX::axAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSSkewX_ax_Getter");

  CSSSkewXV8Internal::axAttributeGetter(info);
}

void V8CSSSkewX::axAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSSkewX_ax_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  CSSSkewXV8Internal::axAttributeSetter(v8Value, info);
}

static const V8DOMConfiguration::AccessorConfiguration V8CSSSkewXAccessors[] = {
    { "ax", V8CSSSkewX::axAttributeGetterCallback, V8CSSSkewX::axAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
};

void V8CSSSkewX::constructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSSkewX_Constructor");

  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::ConstructorNotCallableAsFunction("CSSSkewX"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  CSSSkewXV8Internal::constructor(info);
}

static void installV8CSSSkewXTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8CSSSkewX::wrapperTypeInfo.interface_name, V8CSSTransformComponent::domTemplate(isolate, world), V8CSSSkewX::internalFieldCount);
  interfaceTemplate->SetCallHandler(V8CSSSkewX::constructorCallback);
  interfaceTemplate->SetLength(1);

  if (!RuntimeEnabledFeatures::CSSTypedOMEnabled()) {
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
      signature, V8CSSSkewXAccessors, arraysize(V8CSSSkewXAccessors));

  // Custom signature

  V8CSSSkewX::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8CSSSkewX::InstallRuntimeEnabledFeaturesOnTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  if (!RuntimeEnabledFeatures::CSSTypedOMEnabled()) {
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

v8::Local<v8::FunctionTemplate> V8CSSSkewX::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8CSSSkewXTemplate);
}

bool V8CSSSkewX::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8CSSSkewX::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

CSSSkewX* V8CSSSkewX::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

CSSSkewX* NativeValueTraits<CSSSkewX>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  CSSSkewX* nativeValue = V8CSSSkewX::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "CSSSkewX"));
  }
  return nativeValue;
}

}  // namespace blink
