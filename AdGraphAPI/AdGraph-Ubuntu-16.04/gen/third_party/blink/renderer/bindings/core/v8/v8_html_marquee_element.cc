// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_html_marquee_element.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_constructor.h"
#include "third_party/blink/renderer/core/animation/element_animation.h"
#include "third_party/blink/renderer/core/css/cssom/element_computed_style_map.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/fullscreen/element_fullscreen.h"
#include "third_party/blink/renderer/core/html/custom/v0_custom_element_processing_stack.h"
#include "third_party/blink/renderer/core/html_names.h"
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
const WrapperTypeInfo V8HTMLMarqueeElement::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8HTMLMarqueeElement::domTemplate,
    nullptr,
    "HTMLMarqueeElement",
    &V8HTMLElement::wrapperTypeInfo,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kNodeClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in HTMLMarqueeElement.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& HTMLMarqueeElement::wrapper_type_info_ = V8HTMLMarqueeElement::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, HTMLMarqueeElement>::value,
    "HTMLMarqueeElement inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&HTMLMarqueeElement::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "HTMLMarqueeElement is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace HTMLMarqueeElementV8Internal {

static void behaviorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMarqueeElement* impl = V8HTMLMarqueeElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(HTMLNames::behaviorAttr), info.GetIsolate());
}

static void behaviorAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLMarqueeElement* impl = V8HTMLMarqueeElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;

  // Prepare the value to be set.
  V8StringResource<> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  impl->setAttribute(HTMLNames::behaviorAttr, cppValue);
}

static void bgColorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMarqueeElement* impl = V8HTMLMarqueeElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(HTMLNames::bgcolorAttr), info.GetIsolate());
}

static void bgColorAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLMarqueeElement* impl = V8HTMLMarqueeElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;

  // Prepare the value to be set.
  V8StringResource<> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  impl->setAttribute(HTMLNames::bgcolorAttr, cppValue);
}

static void directionAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMarqueeElement* impl = V8HTMLMarqueeElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(HTMLNames::directionAttr), info.GetIsolate());
}

static void directionAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLMarqueeElement* impl = V8HTMLMarqueeElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;

  // Prepare the value to be set.
  V8StringResource<> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  impl->setAttribute(HTMLNames::directionAttr, cppValue);
}

static void heightAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMarqueeElement* impl = V8HTMLMarqueeElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(HTMLNames::heightAttr), info.GetIsolate());
}

static void heightAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLMarqueeElement* impl = V8HTMLMarqueeElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;

  // Prepare the value to be set.
  V8StringResource<> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  impl->setAttribute(HTMLNames::heightAttr, cppValue);
}

static void hspaceAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMarqueeElement* impl = V8HTMLMarqueeElement::ToImpl(holder);

  V8SetReturnValueUnsigned(info, std::max(0, static_cast<int>(impl->GetIntegralAttribute(HTMLNames::hspaceAttr))));
}

static void hspaceAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLMarqueeElement* impl = V8HTMLMarqueeElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "HTMLMarqueeElement", "hspace");

  // Prepare the value to be set.
  uint32_t cppValue = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), v8Value, exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->SetUnsignedIntegralAttribute(HTMLNames::hspaceAttr, cppValue);
}

static void loopAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMarqueeElement* impl = V8HTMLMarqueeElement::ToImpl(holder);

  V8SetReturnValueInt(info, impl->loop());
}

static void loopAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLMarqueeElement* impl = V8HTMLMarqueeElement::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "HTMLMarqueeElement", "loop");

  // Prepare the value to be set.
  int32_t cppValue = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), v8Value, exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->setLoop(cppValue, exceptionState);
}

static void scrollAmountAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMarqueeElement* impl = V8HTMLMarqueeElement::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->scrollAmount());
}

static void scrollAmountAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLMarqueeElement* impl = V8HTMLMarqueeElement::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "HTMLMarqueeElement", "scrollAmount");

  // Prepare the value to be set.
  uint32_t cppValue = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), v8Value, exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->setScrollAmount(cppValue);
}

static void scrollDelayAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMarqueeElement* impl = V8HTMLMarqueeElement::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->scrollDelay());
}

static void scrollDelayAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLMarqueeElement* impl = V8HTMLMarqueeElement::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "HTMLMarqueeElement", "scrollDelay");

  // Prepare the value to be set.
  uint32_t cppValue = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), v8Value, exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->setScrollDelay(cppValue);
}

static void trueSpeedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMarqueeElement* impl = V8HTMLMarqueeElement::ToImpl(holder);

  V8SetReturnValueBool(info, impl->FastHasAttribute(HTMLNames::truespeedAttr));
}

static void trueSpeedAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLMarqueeElement* impl = V8HTMLMarqueeElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "HTMLMarqueeElement", "trueSpeed");

  // Prepare the value to be set.
  bool cppValue = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->SetBooleanAttribute(HTMLNames::truespeedAttr, cppValue);
}

static void vspaceAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMarqueeElement* impl = V8HTMLMarqueeElement::ToImpl(holder);

  V8SetReturnValueUnsigned(info, std::max(0, static_cast<int>(impl->GetIntegralAttribute(HTMLNames::vspaceAttr))));
}

static void vspaceAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLMarqueeElement* impl = V8HTMLMarqueeElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "HTMLMarqueeElement", "vspace");

  // Prepare the value to be set.
  uint32_t cppValue = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), v8Value, exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->SetUnsignedIntegralAttribute(HTMLNames::vspaceAttr, cppValue);
}

static void widthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMarqueeElement* impl = V8HTMLMarqueeElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(HTMLNames::widthAttr), info.GetIsolate());
}

static void widthAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLMarqueeElement* impl = V8HTMLMarqueeElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;

  // Prepare the value to be set.
  V8StringResource<> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  impl->setAttribute(HTMLNames::widthAttr, cppValue);
}

static void startMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  HTMLMarqueeElement* impl = V8HTMLMarqueeElement::ToImpl(info.Holder());

  impl->start();
}

static void stopMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  HTMLMarqueeElement* impl = V8HTMLMarqueeElement::ToImpl(info.Holder());

  impl->stop();
}

} // namespace HTMLMarqueeElementV8Internal

void V8HTMLMarqueeElement::behaviorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMarqueeElement_behavior_Getter");

  HTMLMarqueeElementV8Internal::behaviorAttributeGetter(info);
}

void V8HTMLMarqueeElement::behaviorAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMarqueeElement_behavior_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  HTMLMarqueeElementV8Internal::behaviorAttributeSetter(v8Value, info);
}

void V8HTMLMarqueeElement::bgColorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMarqueeElement_bgColor_Getter");

  HTMLMarqueeElementV8Internal::bgColorAttributeGetter(info);
}

void V8HTMLMarqueeElement::bgColorAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMarqueeElement_bgColor_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  HTMLMarqueeElementV8Internal::bgColorAttributeSetter(v8Value, info);
}

void V8HTMLMarqueeElement::directionAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMarqueeElement_direction_Getter");

  HTMLMarqueeElementV8Internal::directionAttributeGetter(info);
}

void V8HTMLMarqueeElement::directionAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMarqueeElement_direction_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  HTMLMarqueeElementV8Internal::directionAttributeSetter(v8Value, info);
}

void V8HTMLMarqueeElement::heightAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMarqueeElement_height_Getter");

  HTMLMarqueeElementV8Internal::heightAttributeGetter(info);
}

void V8HTMLMarqueeElement::heightAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMarqueeElement_height_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  HTMLMarqueeElementV8Internal::heightAttributeSetter(v8Value, info);
}

void V8HTMLMarqueeElement::hspaceAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMarqueeElement_hspace_Getter");

  HTMLMarqueeElementV8Internal::hspaceAttributeGetter(info);
}

void V8HTMLMarqueeElement::hspaceAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMarqueeElement_hspace_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  HTMLMarqueeElementV8Internal::hspaceAttributeSetter(v8Value, info);
}

void V8HTMLMarqueeElement::loopAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMarqueeElement_loop_Getter");

  HTMLMarqueeElementV8Internal::loopAttributeGetter(info);
}

void V8HTMLMarqueeElement::loopAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMarqueeElement_loop_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  HTMLMarqueeElementV8Internal::loopAttributeSetter(v8Value, info);
}

void V8HTMLMarqueeElement::scrollAmountAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMarqueeElement_scrollAmount_Getter");

  HTMLMarqueeElementV8Internal::scrollAmountAttributeGetter(info);
}

void V8HTMLMarqueeElement::scrollAmountAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMarqueeElement_scrollAmount_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  HTMLMarqueeElementV8Internal::scrollAmountAttributeSetter(v8Value, info);
}

void V8HTMLMarqueeElement::scrollDelayAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMarqueeElement_scrollDelay_Getter");

  HTMLMarqueeElementV8Internal::scrollDelayAttributeGetter(info);
}

void V8HTMLMarqueeElement::scrollDelayAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMarqueeElement_scrollDelay_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  HTMLMarqueeElementV8Internal::scrollDelayAttributeSetter(v8Value, info);
}

void V8HTMLMarqueeElement::trueSpeedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMarqueeElement_trueSpeed_Getter");

  HTMLMarqueeElementV8Internal::trueSpeedAttributeGetter(info);
}

void V8HTMLMarqueeElement::trueSpeedAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMarqueeElement_trueSpeed_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  HTMLMarqueeElementV8Internal::trueSpeedAttributeSetter(v8Value, info);
}

void V8HTMLMarqueeElement::vspaceAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMarqueeElement_vspace_Getter");

  HTMLMarqueeElementV8Internal::vspaceAttributeGetter(info);
}

void V8HTMLMarqueeElement::vspaceAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMarqueeElement_vspace_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  HTMLMarqueeElementV8Internal::vspaceAttributeSetter(v8Value, info);
}

void V8HTMLMarqueeElement::widthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMarqueeElement_width_Getter");

  HTMLMarqueeElementV8Internal::widthAttributeGetter(info);
}

void V8HTMLMarqueeElement::widthAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMarqueeElement_width_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  HTMLMarqueeElementV8Internal::widthAttributeSetter(v8Value, info);
}

void V8HTMLMarqueeElement::startMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMarqueeElement_start");

  HTMLMarqueeElementV8Internal::startMethod(info);
}

void V8HTMLMarqueeElement::stopMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMarqueeElement_stop");

  HTMLMarqueeElementV8Internal::stopMethod(info);
}

static const V8DOMConfiguration::AccessorConfiguration V8HTMLMarqueeElementAccessors[] = {
    { "behavior", V8HTMLMarqueeElement::behaviorAttributeGetterCallback, V8HTMLMarqueeElement::behaviorAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "bgColor", V8HTMLMarqueeElement::bgColorAttributeGetterCallback, V8HTMLMarqueeElement::bgColorAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "direction", V8HTMLMarqueeElement::directionAttributeGetterCallback, V8HTMLMarqueeElement::directionAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "height", V8HTMLMarqueeElement::heightAttributeGetterCallback, V8HTMLMarqueeElement::heightAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "hspace", V8HTMLMarqueeElement::hspaceAttributeGetterCallback, V8HTMLMarqueeElement::hspaceAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "loop", V8HTMLMarqueeElement::loopAttributeGetterCallback, V8HTMLMarqueeElement::loopAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "scrollAmount", V8HTMLMarqueeElement::scrollAmountAttributeGetterCallback, V8HTMLMarqueeElement::scrollAmountAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "scrollDelay", V8HTMLMarqueeElement::scrollDelayAttributeGetterCallback, V8HTMLMarqueeElement::scrollDelayAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "trueSpeed", V8HTMLMarqueeElement::trueSpeedAttributeGetterCallback, V8HTMLMarqueeElement::trueSpeedAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "vspace", V8HTMLMarqueeElement::vspaceAttributeGetterCallback, V8HTMLMarqueeElement::vspaceAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "width", V8HTMLMarqueeElement::widthAttributeGetterCallback, V8HTMLMarqueeElement::widthAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
};

static const V8DOMConfiguration::MethodConfiguration V8HTMLMarqueeElementMethods[] = {
    {"start", V8HTMLMarqueeElement::startMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"stop", V8HTMLMarqueeElement::stopMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

void V8HTMLMarqueeElement::constructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMarqueeElement_Constructor");

  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::ConstructorNotCallableAsFunction("HTMLMarqueeElement"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  V8HTMLConstructor::HtmlConstructor(info, V8HTMLMarqueeElement::wrapperTypeInfo, HTMLElementType::kHTMLMarqueeElement);
}

static void installV8HTMLMarqueeElementTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8HTMLMarqueeElement::wrapperTypeInfo.interface_name, V8HTMLElement::domTemplate(isolate, world), V8HTMLMarqueeElement::internalFieldCount);
  interfaceTemplate->SetCallHandler(V8HTMLMarqueeElement::constructorCallback);
  interfaceTemplate->SetLength(0);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8HTMLMarqueeElementAccessors, arraysize(V8HTMLMarqueeElementAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8HTMLMarqueeElementMethods, arraysize(V8HTMLMarqueeElementMethods));

  // Custom signature

  V8HTMLMarqueeElement::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8HTMLMarqueeElement::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8HTMLMarqueeElement::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8HTMLMarqueeElementTemplate);
}

bool V8HTMLMarqueeElement::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8HTMLMarqueeElement::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

HTMLMarqueeElement* V8HTMLMarqueeElement::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

HTMLMarqueeElement* NativeValueTraits<HTMLMarqueeElement>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  HTMLMarqueeElement* nativeValue = V8HTMLMarqueeElement::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "HTMLMarqueeElement"));
  }
  return nativeValue;
}

}  // namespace blink
