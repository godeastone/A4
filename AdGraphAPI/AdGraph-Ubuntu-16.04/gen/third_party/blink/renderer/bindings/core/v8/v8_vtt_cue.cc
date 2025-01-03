// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_vtt_cue.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_document_fragment.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_vtt_region.h"
#include "third_party/blink/renderer/core/dom/document.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/local_dom_window.h"
#include "third_party/blink/renderer/core/inspector/console_message.h"
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
const WrapperTypeInfo V8VTTCue::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8VTTCue::domTemplate,
    nullptr,
    "VTTCue",
    &V8TextTrackCue::wrapperTypeInfo,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in VTTCue.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& VTTCue::wrapper_type_info_ = V8VTTCue::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, VTTCue>::value,
    "VTTCue inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&VTTCue::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "VTTCue is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace VTTCueV8Internal {

static void regionAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  VTTCue* impl = V8VTTCue::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->region()), impl);
}

static void regionAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  VTTCue* impl = V8VTTCue::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "VTTCue", "region");

  // Prepare the value to be set.
  VTTRegion* cppValue = V8VTTRegion::ToImplWithTypeCheck(info.GetIsolate(), v8Value);

  // Type check per: http://heycam.github.io/webidl/#es-interface
  if (!cppValue && !IsUndefinedOrNull(v8Value)) {
    exceptionState.ThrowTypeError("The provided value is not of type 'VTTRegion'.");
    return;
  }

  impl->setRegion(cppValue);
}

static void verticalAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  VTTCue* impl = V8VTTCue::ToImpl(holder);

  V8SetReturnValueString(info, impl->vertical(), info.GetIsolate());
}

static void verticalAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  VTTCue* impl = V8VTTCue::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "VTTCue", "vertical");

  // Prepare the value to be set.
  V8StringResource<> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  // Type check per: http://heycam.github.io/webidl/#dfn-attribute-setter
  // Returns undefined without setting the value if the value is invalid.
  DummyExceptionStateForTesting dummyExceptionState;
  const char* validValues[] = {
      "",
      "rl",
      "lr",
  };
  if (!IsValidEnum(cppValue, validValues, arraysize(validValues), "DirectionSetting", dummyExceptionState)) {
    ExecutionContext::ForCurrentRealm(info)->AddConsoleMessage(
        ConsoleMessage::Create(kJSMessageSource, kWarningMessageLevel,
                               dummyExceptionState.Message()));
    return;
  }

  impl->setVertical(cppValue);
}

static void snapToLinesAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  VTTCue* impl = V8VTTCue::ToImpl(holder);

  V8SetReturnValueBool(info, impl->snapToLines());
}

static void snapToLinesAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  VTTCue* impl = V8VTTCue::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "VTTCue", "snapToLines");

  // Prepare the value to be set.
  bool cppValue = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setSnapToLines(cppValue);
}

static void lineAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  VTTCue* impl = V8VTTCue::ToImpl(holder);

  DoubleOrAutoKeyword result;
  impl->line(result);

  V8SetReturnValue(info, result);
}

static void lineAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  VTTCue* impl = V8VTTCue::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "VTTCue", "line");

  // Prepare the value to be set.
  DoubleOrAutoKeyword cppValue;
  V8DoubleOrAutoKeyword::ToImpl(info.GetIsolate(), v8Value, cppValue, UnionTypeConversionMode::kNotNullable, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setLine(cppValue);
}

static void positionAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  VTTCue* impl = V8VTTCue::ToImpl(holder);

  DoubleOrAutoKeyword result;
  impl->position(result);

  V8SetReturnValue(info, result);
}

static void positionAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  VTTCue* impl = V8VTTCue::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "VTTCue", "position");

  // Prepare the value to be set.
  DoubleOrAutoKeyword cppValue;
  V8DoubleOrAutoKeyword::ToImpl(info.GetIsolate(), v8Value, cppValue, UnionTypeConversionMode::kNotNullable, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setPosition(cppValue, exceptionState);
}

static void sizeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  VTTCue* impl = V8VTTCue::ToImpl(holder);

  V8SetReturnValue(info, impl->size());
}

static void sizeAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  VTTCue* impl = V8VTTCue::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "VTTCue", "size");

  // Prepare the value to be set.
  double cppValue = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setSize(cppValue, exceptionState);
}

static void alignAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  VTTCue* impl = V8VTTCue::ToImpl(holder);

  V8SetReturnValueString(info, impl->align(), info.GetIsolate());
}

static void alignAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  VTTCue* impl = V8VTTCue::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "VTTCue", "align");

  // Prepare the value to be set.
  V8StringResource<> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  // Type check per: http://heycam.github.io/webidl/#dfn-attribute-setter
  // Returns undefined without setting the value if the value is invalid.
  DummyExceptionStateForTesting dummyExceptionState;
  const char* validValues[] = {
      "start",
      "center",
      "end",
      "left",
      "right",
  };
  if (!IsValidEnum(cppValue, validValues, arraysize(validValues), "AlignSetting", dummyExceptionState)) {
    ExecutionContext::ForCurrentRealm(info)->AddConsoleMessage(
        ConsoleMessage::Create(kJSMessageSource, kWarningMessageLevel,
                               dummyExceptionState.Message()));
    return;
  }

  impl->setAlign(cppValue);
}

static void textAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  VTTCue* impl = V8VTTCue::ToImpl(holder);

  V8SetReturnValueString(info, impl->text(), info.GetIsolate());
}

static void textAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  VTTCue* impl = V8VTTCue::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  impl->setText(cppValue);
}

static void getCueAsHTMLMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  VTTCue* impl = V8VTTCue::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->getCueAsHTML());
}

static void constructor(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VTTCue_ConstructorCallback");

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kConstructionContext, "VTTCue");

  if (UNLIKELY(info.Length() < 3)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  double startTime;
  double endTime;
  V8StringResource<> text;
  startTime = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  endTime = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  text = info[2];
  if (!text.Prepare())
    return;

  Document& document = *ToDocument(ToExecutionContext(
      info.NewTarget().As<v8::Object>()->CreationContext()));
  VTTCue* impl = VTTCue::Create(document, startTime, endTime, text);
  v8::Local<v8::Object> wrapper = info.Holder();
  wrapper = impl->AssociateWithWrapper(info.GetIsolate(), &V8VTTCue::wrapperTypeInfo, wrapper);
  V8SetReturnValue(info, wrapper);
}

} // namespace VTTCueV8Internal

void V8VTTCue::regionAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VTTCue_region_Getter");

  VTTCueV8Internal::regionAttributeGetter(info);
}

void V8VTTCue::regionAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VTTCue_region_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  VTTCueV8Internal::regionAttributeSetter(v8Value, info);
}

void V8VTTCue::verticalAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VTTCue_vertical_Getter");

  VTTCueV8Internal::verticalAttributeGetter(info);
}

void V8VTTCue::verticalAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VTTCue_vertical_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  VTTCueV8Internal::verticalAttributeSetter(v8Value, info);
}

void V8VTTCue::snapToLinesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VTTCue_snapToLines_Getter");

  VTTCueV8Internal::snapToLinesAttributeGetter(info);
}

void V8VTTCue::snapToLinesAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VTTCue_snapToLines_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  VTTCueV8Internal::snapToLinesAttributeSetter(v8Value, info);
}

void V8VTTCue::lineAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VTTCue_line_Getter");

  VTTCueV8Internal::lineAttributeGetter(info);
}

void V8VTTCue::lineAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VTTCue_line_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  VTTCueV8Internal::lineAttributeSetter(v8Value, info);
}

void V8VTTCue::positionAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VTTCue_position_Getter");

  VTTCueV8Internal::positionAttributeGetter(info);
}

void V8VTTCue::positionAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VTTCue_position_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  VTTCueV8Internal::positionAttributeSetter(v8Value, info);
}

void V8VTTCue::sizeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VTTCue_size_Getter");

  VTTCueV8Internal::sizeAttributeGetter(info);
}

void V8VTTCue::sizeAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VTTCue_size_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  VTTCueV8Internal::sizeAttributeSetter(v8Value, info);
}

void V8VTTCue::alignAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VTTCue_align_Getter");

  VTTCueV8Internal::alignAttributeGetter(info);
}

void V8VTTCue::alignAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VTTCue_align_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  VTTCueV8Internal::alignAttributeSetter(v8Value, info);
}

void V8VTTCue::textAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VTTCue_text_Getter");

  VTTCueV8Internal::textAttributeGetter(info);
}

void V8VTTCue::textAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VTTCue_text_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  VTTCueV8Internal::textAttributeSetter(v8Value, info);
}

void V8VTTCue::getCueAsHTMLMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VTTCue_getCueAsHTML");

  VTTCueV8Internal::getCueAsHTMLMethod(info);
}

static const V8DOMConfiguration::AccessorConfiguration V8VTTCueAccessors[] = {
    { "vertical", V8VTTCue::verticalAttributeGetterCallback, V8VTTCue::verticalAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "snapToLines", V8VTTCue::snapToLinesAttributeGetterCallback, V8VTTCue::snapToLinesAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "line", V8VTTCue::lineAttributeGetterCallback, V8VTTCue::lineAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "position", V8VTTCue::positionAttributeGetterCallback, V8VTTCue::positionAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "size", V8VTTCue::sizeAttributeGetterCallback, V8VTTCue::sizeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "align", V8VTTCue::alignAttributeGetterCallback, V8VTTCue::alignAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "text", V8VTTCue::textAttributeGetterCallback, V8VTTCue::textAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
};

static const V8DOMConfiguration::MethodConfiguration V8VTTCueMethods[] = {
    {"getCueAsHTML", V8VTTCue::getCueAsHTMLMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

void V8VTTCue::constructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VTTCue_Constructor");

  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::ConstructorNotCallableAsFunction("VTTCue"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  VTTCueV8Internal::constructor(info);
}

static void installV8VTTCueTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8VTTCue::wrapperTypeInfo.interface_name, V8TextTrackCue::domTemplate(isolate, world), V8VTTCue::internalFieldCount);
  interfaceTemplate->SetCallHandler(V8VTTCue::constructorCallback);
  interfaceTemplate->SetLength(3);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8VTTCueAccessors, arraysize(V8VTTCueAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8VTTCueMethods, arraysize(V8VTTCueMethods));

  // Custom signature

  V8VTTCue::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8VTTCue::InstallRuntimeEnabledFeaturesOnTemplate(
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

  if (RuntimeEnabledFeatures::WebVTTRegionsEnabled()) {
    static const V8DOMConfiguration::AccessorConfiguration accessor_configurations[] = {
        { "region", V8VTTCue::regionAttributeGetterCallback, V8VTTCue::regionAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, accessor_configurations,
        arraysize(accessor_configurations));
  }

  // Custom signature
}

v8::Local<v8::FunctionTemplate> V8VTTCue::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8VTTCueTemplate);
}

bool V8VTTCue::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8VTTCue::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

VTTCue* V8VTTCue::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

VTTCue* NativeValueTraits<VTTCue>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  VTTCue* nativeValue = V8VTTCue::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "VTTCue"));
  }
  return nativeValue;
}

}  // namespace blink
