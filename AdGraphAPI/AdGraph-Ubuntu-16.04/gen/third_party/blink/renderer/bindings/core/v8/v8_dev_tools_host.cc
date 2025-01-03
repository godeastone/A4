// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_dev_tools_host.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_document.h"
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
WrapperTypeInfo V8DevToolsHost::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8DevToolsHost::domTemplate,
    nullptr,
    "DevToolsHost",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in DevToolsHost.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& DevToolsHost::wrapper_type_info_ = V8DevToolsHost::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, DevToolsHost>::value,
    "DevToolsHost inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&DevToolsHost::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "DevToolsHost is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace DevToolsHostV8Internal {

static void zoomFactorMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  DevToolsHost* impl = V8DevToolsHost::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->zoomFactor());
}

static void copyTextMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  DevToolsHost* impl = V8DevToolsHost::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("copyText", "DevToolsHost", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> text;
  text = info[0];
  if (!text.Prepare())
    return;

  impl->copyText(text);
}

static void sendMessageToEmbedderMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  DevToolsHost* impl = V8DevToolsHost::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("sendMessageToEmbedder", "DevToolsHost", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> message;
  message = info[0];
  if (!message.Prepare())
    return;

  impl->sendMessageToEmbedder(message);
}

static void getSelectionBackgroundColorMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  DevToolsHost* impl = V8DevToolsHost::ToImpl(info.Holder());

  V8SetReturnValueString(info, impl->getSelectionBackgroundColor(), info.GetIsolate());
}

static void getSelectionForegroundColorMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  DevToolsHost* impl = V8DevToolsHost::ToImpl(info.Holder());

  V8SetReturnValueString(info, impl->getSelectionForegroundColor(), info.GetIsolate());
}

static void getInactiveSelectionBackgroundColorMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  DevToolsHost* impl = V8DevToolsHost::ToImpl(info.Holder());

  V8SetReturnValueString(info, impl->getInactiveSelectionBackgroundColor(), info.GetIsolate());
}

static void getInactiveSelectionForegroundColorMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  DevToolsHost* impl = V8DevToolsHost::ToImpl(info.Holder());

  V8SetReturnValueString(info, impl->getInactiveSelectionForegroundColor(), info.GetIsolate());
}

static void isHostedModeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  DevToolsHost* impl = V8DevToolsHost::ToImpl(info.Holder());

  V8SetReturnValueBool(info, impl->isHostedMode());
}

} // namespace DevToolsHostV8Internal

void V8DevToolsHost::zoomFactorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DevToolsHost_zoomFactor");

  DevToolsHostV8Internal::zoomFactorMethod(info);
}

void V8DevToolsHost::copyTextMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DevToolsHost_copyText");

  DevToolsHostV8Internal::copyTextMethod(info);
}

void V8DevToolsHost::platformMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DevToolsHost_platform");

  V8DevToolsHost::platformMethodCustom(info);
}

void V8DevToolsHost::showContextMenuAtPointMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DevToolsHost_showContextMenuAtPoint");

  V8DevToolsHost::showContextMenuAtPointMethodCustom(info);
}

void V8DevToolsHost::sendMessageToEmbedderMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DevToolsHost_sendMessageToEmbedder");

  DevToolsHostV8Internal::sendMessageToEmbedderMethod(info);
}

void V8DevToolsHost::getSelectionBackgroundColorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DevToolsHost_getSelectionBackgroundColor");

  DevToolsHostV8Internal::getSelectionBackgroundColorMethod(info);
}

void V8DevToolsHost::getSelectionForegroundColorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DevToolsHost_getSelectionForegroundColor");

  DevToolsHostV8Internal::getSelectionForegroundColorMethod(info);
}

void V8DevToolsHost::getInactiveSelectionBackgroundColorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DevToolsHost_getInactiveSelectionBackgroundColor");

  DevToolsHostV8Internal::getInactiveSelectionBackgroundColorMethod(info);
}

void V8DevToolsHost::getInactiveSelectionForegroundColorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DevToolsHost_getInactiveSelectionForegroundColor");

  DevToolsHostV8Internal::getInactiveSelectionForegroundColorMethod(info);
}

void V8DevToolsHost::isHostedModeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DevToolsHost_isHostedMode");

  DevToolsHostV8Internal::isHostedModeMethod(info);
}

static const V8DOMConfiguration::MethodConfiguration V8DevToolsHostMethods[] = {
    {"zoomFactor", V8DevToolsHost::zoomFactorMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"copyText", V8DevToolsHost::copyTextMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"platform", V8DevToolsHost::platformMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"showContextMenuAtPoint", V8DevToolsHost::showContextMenuAtPointMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"sendMessageToEmbedder", V8DevToolsHost::sendMessageToEmbedderMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getSelectionBackgroundColor", V8DevToolsHost::getSelectionBackgroundColorMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getSelectionForegroundColor", V8DevToolsHost::getSelectionForegroundColorMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getInactiveSelectionBackgroundColor", V8DevToolsHost::getInactiveSelectionBackgroundColorMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getInactiveSelectionForegroundColor", V8DevToolsHost::getInactiveSelectionForegroundColorMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isHostedMode", V8DevToolsHost::isHostedModeMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

void V8DevToolsHost::installV8DevToolsHostTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8DevToolsHost::wrapperTypeInfo.interface_name, v8::Local<v8::FunctionTemplate>(), V8DevToolsHost::internalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallMethods(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8DevToolsHostMethods, arraysize(V8DevToolsHostMethods));

  // Custom signature
}

void V8DevToolsHost::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8DevToolsHost::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), V8DevToolsHost::installV8DevToolsHostTemplateFunction);
}

bool V8DevToolsHost::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8DevToolsHost::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

DevToolsHost* V8DevToolsHost::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

DevToolsHost* NativeValueTraits<DevToolsHost>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  DevToolsHost* nativeValue = V8DevToolsHost::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "DevToolsHost"));
  }
  return nativeValue;
}

InstallRuntimeEnabledFeaturesOnTemplateFunction
V8DevToolsHost::install_runtime_enabled_features_on_template_function_ =
    &V8DevToolsHost::InstallRuntimeEnabledFeaturesOnTemplate;

InstallTemplateFunction V8DevToolsHost::installV8DevToolsHostTemplateFunction =
    &V8DevToolsHost::installV8DevToolsHostTemplate;

void V8DevToolsHost::UpdateWrapperTypeInfo(
    InstallTemplateFunction install_template_function,
    InstallRuntimeEnabledFeaturesFunction install_runtime_enabled_features_function,
    InstallRuntimeEnabledFeaturesOnTemplateFunction install_runtime_enabled_features_on_template_function,
    InstallConditionalFeaturesFunction install_conditional_features_function) {
  V8DevToolsHost::installV8DevToolsHostTemplateFunction =
      install_template_function;

  CHECK(install_runtime_enabled_features_on_template_function);
  V8DevToolsHost::install_runtime_enabled_features_on_template_function_ =
      install_runtime_enabled_features_on_template_function;

  if (install_conditional_features_function) {
    V8DevToolsHost::wrapperTypeInfo.install_conditional_features_function =
        install_conditional_features_function;
  }
}

}  // namespace blink
