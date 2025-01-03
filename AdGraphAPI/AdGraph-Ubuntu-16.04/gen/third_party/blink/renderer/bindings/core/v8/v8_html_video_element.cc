// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_html_video_element.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_constructor.h"
#include "third_party/blink/renderer/core/animation/element_animation.h"
#include "third_party/blink/renderer/core/css/cssom/element_computed_style_map.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/deprecation.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/core/fullscreen/element_fullscreen.h"
#include "third_party/blink/renderer/core/html/custom/ce_reactions_scope.h"
#include "third_party/blink/renderer/core/html/custom/v0_custom_element_processing_stack.h"
#include "third_party/blink/renderer/core/html_names.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_dom_activity_logger.h"
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
WrapperTypeInfo V8HTMLVideoElement::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8HTMLVideoElement::domTemplate,
    nullptr,
    "HTMLVideoElement",
    &V8HTMLMediaElement::wrapperTypeInfo,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kNodeClassId,
    WrapperTypeInfo::kInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in HTMLVideoElement.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& HTMLVideoElement::wrapper_type_info_ = V8HTMLVideoElement::wrapperTypeInfo;

// [ActiveScriptWrappable]
static_assert(
    std::is_base_of<ActiveScriptWrappableBase, HTMLVideoElement>::value,
    "HTMLVideoElement does not inherit from ActiveScriptWrappable<>, but specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    !std::is_same<decltype(&HTMLVideoElement::HasPendingActivity),
                  decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "HTMLVideoElement is not overriding hasPendingActivity(), but is specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace HTMLVideoElementV8Internal {

static void widthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLVideoElement* impl = V8HTMLVideoElement::ToImpl(holder);

  V8SetReturnValueUnsigned(info, std::max(0, static_cast<int>(impl->GetIntegralAttribute(HTMLNames::widthAttr))));
}

static void widthAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLVideoElement* impl = V8HTMLVideoElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "HTMLVideoElement", "width");

  // Prepare the value to be set.
  uint32_t cppValue = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), v8Value, exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->SetUnsignedIntegralAttribute(HTMLNames::widthAttr, cppValue);
}

static void heightAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLVideoElement* impl = V8HTMLVideoElement::ToImpl(holder);

  V8SetReturnValueUnsigned(info, std::max(0, static_cast<int>(impl->GetIntegralAttribute(HTMLNames::heightAttr))));
}

static void heightAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLVideoElement* impl = V8HTMLVideoElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "HTMLVideoElement", "height");

  // Prepare the value to be set.
  uint32_t cppValue = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), v8Value, exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->SetUnsignedIntegralAttribute(HTMLNames::heightAttr, cppValue);
}

static void videoWidthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLVideoElement* impl = V8HTMLVideoElement::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->videoWidth());
}

static void videoHeightAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLVideoElement* impl = V8HTMLVideoElement::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->videoHeight());
}

static void posterAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLVideoElement* impl = V8HTMLVideoElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->GetURLAttribute(HTMLNames::posterAttr), info.GetIsolate());
}

static void posterAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLVideoElement* impl = V8HTMLVideoElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;

  // Prepare the value to be set.
  V8StringResource<> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  impl->setAttribute(HTMLNames::posterAttr, cppValue);
}

static void webkitSupportsFullscreenAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLVideoElement* impl = V8HTMLVideoElement::ToImpl(holder);

  V8SetReturnValueBool(info, impl->webkitSupportsFullscreen());
}

static void webkitDisplayingFullscreenAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLVideoElement* impl = V8HTMLVideoElement::ToImpl(holder);

  V8SetReturnValueBool(info, impl->webkitDisplayingFullscreen());
}

static void webkitDecodedFrameCountAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLVideoElement* impl = V8HTMLVideoElement::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->webkitDecodedFrameCount());
}

static void webkitDroppedFrameCountAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLVideoElement* impl = V8HTMLVideoElement::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->webkitDroppedFrameCount());
}

static void webkitEnterFullscreenMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  HTMLVideoElement* impl = V8HTMLVideoElement::ToImpl(info.Holder());

  impl->webkitEnterFullscreen();
}

static void webkitExitFullscreenMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  HTMLVideoElement* impl = V8HTMLVideoElement::ToImpl(info.Holder());

  impl->webkitExitFullscreen();
}

static void webkitEnterFullScreenMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  HTMLVideoElement* impl = V8HTMLVideoElement::ToImpl(info.Holder());

  impl->webkitEnterFullscreen();
}

static void webkitExitFullScreenMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  HTMLVideoElement* impl = V8HTMLVideoElement::ToImpl(info.Holder());

  impl->webkitExitFullscreen();
}

} // namespace HTMLVideoElementV8Internal

void V8HTMLVideoElement::widthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLVideoElement_width_Getter");

  HTMLVideoElementV8Internal::widthAttributeGetter(info);
}

void V8HTMLVideoElement::widthAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLVideoElement_width_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  CEReactionsScope ceReactionsScope;

  HTMLVideoElementV8Internal::widthAttributeSetter(v8Value, info);
}

void V8HTMLVideoElement::heightAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLVideoElement_height_Getter");

  HTMLVideoElementV8Internal::heightAttributeGetter(info);
}

void V8HTMLVideoElement::heightAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLVideoElement_height_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  CEReactionsScope ceReactionsScope;

  HTMLVideoElementV8Internal::heightAttributeSetter(v8Value, info);
}

void V8HTMLVideoElement::videoWidthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLVideoElement_videoWidth_Getter");

  HTMLVideoElementV8Internal::videoWidthAttributeGetter(info);
}

void V8HTMLVideoElement::videoHeightAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLVideoElement_videoHeight_Getter");

  HTMLVideoElementV8Internal::videoHeightAttributeGetter(info);
}

void V8HTMLVideoElement::posterAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLVideoElement_poster_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8HTMLVideoElement_Poster_AttributeGetter);

  HTMLVideoElementV8Internal::posterAttributeGetter(info);
}

void V8HTMLVideoElement::posterAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLVideoElement_poster_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8HTMLVideoElement_Poster_AttributeSetter);

  CEReactionsScope ceReactionsScope;

  HTMLVideoElementV8Internal::posterAttributeSetter(v8Value, info);
}

void V8HTMLVideoElement::webkitSupportsFullscreenAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLVideoElement_webkitSupportsFullscreen_Getter");

  Deprecation::CountDeprecation(CurrentExecutionContext(info.GetIsolate()), WebFeature::kPrefixedVideoSupportsFullscreen);

  HTMLVideoElementV8Internal::webkitSupportsFullscreenAttributeGetter(info);
}

void V8HTMLVideoElement::webkitDisplayingFullscreenAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLVideoElement_webkitDisplayingFullscreen_Getter");

  Deprecation::CountDeprecation(CurrentExecutionContext(info.GetIsolate()), WebFeature::kPrefixedVideoDisplayingFullscreen);

  HTMLVideoElementV8Internal::webkitDisplayingFullscreenAttributeGetter(info);
}

void V8HTMLVideoElement::webkitDecodedFrameCountAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLVideoElement_webkitDecodedFrameCount_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kPrefixedVideoDecodedFrameCount);

  HTMLVideoElementV8Internal::webkitDecodedFrameCountAttributeGetter(info);
}

void V8HTMLVideoElement::webkitDroppedFrameCountAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLVideoElement_webkitDroppedFrameCount_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kPrefixedVideoDroppedFrameCount);

  HTMLVideoElementV8Internal::webkitDroppedFrameCountAttributeGetter(info);
}

void V8HTMLVideoElement::webkitEnterFullscreenMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLVideoElement_webkitEnterFullscreen");

  Deprecation::CountDeprecation(CurrentExecutionContext(info.GetIsolate()), WebFeature::kPrefixedVideoEnterFullscreen);
  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);
  V8PerContextData* contextData = scriptState->PerContextData();
  if (contextData && contextData->ActivityLogger()) {
    contextData->ActivityLogger()->LogMethod("HTMLVideoElement.webkitEnterFullscreen", info);
  }
  HTMLVideoElementV8Internal::webkitEnterFullscreenMethod(info);
}

void V8HTMLVideoElement::webkitExitFullscreenMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLVideoElement_webkitExitFullscreen");

  Deprecation::CountDeprecation(CurrentExecutionContext(info.GetIsolate()), WebFeature::kPrefixedVideoExitFullscreen);
  HTMLVideoElementV8Internal::webkitExitFullscreenMethod(info);
}

void V8HTMLVideoElement::webkitEnterFullScreenMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLVideoElement_webkitEnterFullScreen");

  Deprecation::CountDeprecation(CurrentExecutionContext(info.GetIsolate()), WebFeature::kPrefixedVideoEnterFullScreen);
  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);
  V8PerContextData* contextData = scriptState->PerContextData();
  if (contextData && contextData->ActivityLogger()) {
    contextData->ActivityLogger()->LogMethod("HTMLVideoElement.webkitEnterFullScreen", info);
  }
  HTMLVideoElementV8Internal::webkitEnterFullScreenMethod(info);
}

void V8HTMLVideoElement::webkitExitFullScreenMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLVideoElement_webkitExitFullScreen");

  Deprecation::CountDeprecation(CurrentExecutionContext(info.GetIsolate()), WebFeature::kPrefixedVideoExitFullScreen);
  HTMLVideoElementV8Internal::webkitExitFullScreenMethod(info);
}

static const V8DOMConfiguration::AccessorConfiguration V8HTMLVideoElementAccessors[] = {
    { "width", V8HTMLVideoElement::widthAttributeGetterCallback, V8HTMLVideoElement::widthAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "height", V8HTMLVideoElement::heightAttributeGetterCallback, V8HTMLVideoElement::heightAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "videoWidth", V8HTMLVideoElement::videoWidthAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "videoHeight", V8HTMLVideoElement::videoHeightAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "poster", V8HTMLVideoElement::posterAttributeGetterCallback, V8HTMLVideoElement::posterAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "webkitDecodedFrameCount", V8HTMLVideoElement::webkitDecodedFrameCountAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "webkitDroppedFrameCount", V8HTMLVideoElement::webkitDroppedFrameCountAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
};

void V8HTMLVideoElement::constructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLVideoElement_Constructor");

  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::ConstructorNotCallableAsFunction("HTMLVideoElement"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  V8HTMLConstructor::HtmlConstructor(info, V8HTMLVideoElement::wrapperTypeInfo, HTMLElementType::kHTMLVideoElement);
}

void V8HTMLVideoElement::installV8HTMLVideoElementTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8HTMLVideoElement::wrapperTypeInfo.interface_name, V8HTMLMediaElement::domTemplate(isolate, world), V8HTMLVideoElement::internalFieldCount);
  interfaceTemplate->SetCallHandler(V8HTMLVideoElement::constructorCallback);
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
      signature, V8HTMLVideoElementAccessors, arraysize(V8HTMLVideoElementAccessors));

  // Custom signature
}

void V8HTMLVideoElement::InstallRuntimeEnabledFeaturesOnTemplate(
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

  if (RuntimeEnabledFeatures::PrefixedVideoFullscreenEnabled()) {
    static const V8DOMConfiguration::AccessorConfiguration accessor_configurations[] = {
        { "webkitDisplayingFullscreen", V8HTMLVideoElement::webkitDisplayingFullscreenAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "webkitSupportsFullscreen", V8HTMLVideoElement::webkitSupportsFullscreenAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, accessor_configurations,
        arraysize(accessor_configurations));
  }

  // Custom signature
  if (RuntimeEnabledFeatures::PrefixedVideoFullscreenEnabled()) {
    const V8DOMConfiguration::MethodConfiguration webkitEnterFullscreenMethodConfiguration[] = {
      {"webkitEnterFullscreen", V8HTMLVideoElement::webkitEnterFullscreenMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
    };
    for (const auto& methodConfig : webkitEnterFullscreenMethodConfiguration)
      V8DOMConfiguration::InstallMethod(isolate, world, instance_template, prototype_template, interface_template, signature, methodConfig);
  }
  if (RuntimeEnabledFeatures::PrefixedVideoFullscreenEnabled()) {
    const V8DOMConfiguration::MethodConfiguration webkitExitFullscreenMethodConfiguration[] = {
      {"webkitExitFullscreen", V8HTMLVideoElement::webkitExitFullscreenMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
    };
    for (const auto& methodConfig : webkitExitFullscreenMethodConfiguration)
      V8DOMConfiguration::InstallMethod(isolate, world, instance_template, prototype_template, interface_template, signature, methodConfig);
  }
  if (RuntimeEnabledFeatures::PrefixedVideoFullscreenEnabled()) {
    const V8DOMConfiguration::MethodConfiguration webkitEnterFullScreenMethodConfiguration[] = {
      {"webkitEnterFullScreen", V8HTMLVideoElement::webkitEnterFullScreenMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
    };
    for (const auto& methodConfig : webkitEnterFullScreenMethodConfiguration)
      V8DOMConfiguration::InstallMethod(isolate, world, instance_template, prototype_template, interface_template, signature, methodConfig);
  }
  if (RuntimeEnabledFeatures::PrefixedVideoFullscreenEnabled()) {
    const V8DOMConfiguration::MethodConfiguration webkitExitFullScreenMethodConfiguration[] = {
      {"webkitExitFullScreen", V8HTMLVideoElement::webkitExitFullScreenMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
    };
    for (const auto& methodConfig : webkitExitFullScreenMethodConfiguration)
      V8DOMConfiguration::InstallMethod(isolate, world, instance_template, prototype_template, interface_template, signature, methodConfig);
  }
}

v8::Local<v8::FunctionTemplate> V8HTMLVideoElement::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), V8HTMLVideoElement::installV8HTMLVideoElementTemplateFunction);
}

bool V8HTMLVideoElement::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8HTMLVideoElement::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

HTMLVideoElement* V8HTMLVideoElement::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

HTMLVideoElement* NativeValueTraits<HTMLVideoElement>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  HTMLVideoElement* nativeValue = V8HTMLVideoElement::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "HTMLVideoElement"));
  }
  return nativeValue;
}

InstallRuntimeEnabledFeaturesOnTemplateFunction
V8HTMLVideoElement::install_runtime_enabled_features_on_template_function_ =
    &V8HTMLVideoElement::InstallRuntimeEnabledFeaturesOnTemplate;

InstallTemplateFunction V8HTMLVideoElement::installV8HTMLVideoElementTemplateFunction =
    &V8HTMLVideoElement::installV8HTMLVideoElementTemplate;

void V8HTMLVideoElement::UpdateWrapperTypeInfo(
    InstallTemplateFunction install_template_function,
    InstallRuntimeEnabledFeaturesFunction install_runtime_enabled_features_function,
    InstallRuntimeEnabledFeaturesOnTemplateFunction install_runtime_enabled_features_on_template_function,
    InstallConditionalFeaturesFunction install_conditional_features_function) {
  V8HTMLVideoElement::installV8HTMLVideoElementTemplateFunction =
      install_template_function;

  CHECK(install_runtime_enabled_features_on_template_function);
  V8HTMLVideoElement::install_runtime_enabled_features_on_template_function_ =
      install_runtime_enabled_features_on_template_function;

  if (install_conditional_features_function) {
    V8HTMLVideoElement::wrapperTypeInfo.install_conditional_features_function =
        install_conditional_features_function;
  }
}

}  // namespace blink
