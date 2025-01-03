// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_internal_settings.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
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
const WrapperTypeInfo V8InternalSettings::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8InternalSettings::domTemplate,
    nullptr,
    "InternalSettings",
    &V8InternalSettingsGenerated::wrapperTypeInfo,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in InternalSettings.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& InternalSettings::wrapper_type_info_ = V8InternalSettings::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, InternalSettings>::value,
    "InternalSettings inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&InternalSettings::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "InternalSettings is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace InternalSettingsV8Internal {

static void setMockScrollbarsEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettings", "setMockScrollbarsEnabled");

  InternalSettings* impl = V8InternalSettings::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool enabled;
  enabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setMockScrollbarsEnabled(enabled, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void setHideScrollbarsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettings", "setHideScrollbars");

  InternalSettings* impl = V8InternalSettings::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool enabled;
  enabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setHideScrollbars(enabled, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void setMockGestureTapHighlightsEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettings", "setMockGestureTapHighlightsEnabled");

  InternalSettings* impl = V8InternalSettings::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool enabled;
  enabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setMockGestureTapHighlightsEnabled(enabled, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void setStandardFontFamilyMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettings", "setStandardFontFamily");

  InternalSettings* impl = V8InternalSettings::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  V8StringResource<> family;
  V8StringResource<> script;
  family = info[0];
  if (!family.Prepare())
    return;

  script = info[1];
  if (!script.Prepare())
    return;

  impl->setStandardFontFamily(family, script, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void setSerifFontFamilyMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettings", "setSerifFontFamily");

  InternalSettings* impl = V8InternalSettings::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  V8StringResource<> family;
  V8StringResource<> script;
  family = info[0];
  if (!family.Prepare())
    return;

  script = info[1];
  if (!script.Prepare())
    return;

  impl->setSerifFontFamily(family, script, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void setSansSerifFontFamilyMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettings", "setSansSerifFontFamily");

  InternalSettings* impl = V8InternalSettings::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  V8StringResource<> family;
  V8StringResource<> script;
  family = info[0];
  if (!family.Prepare())
    return;

  script = info[1];
  if (!script.Prepare())
    return;

  impl->setSansSerifFontFamily(family, script, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void setFixedFontFamilyMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettings", "setFixedFontFamily");

  InternalSettings* impl = V8InternalSettings::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  V8StringResource<> family;
  V8StringResource<> script;
  family = info[0];
  if (!family.Prepare())
    return;

  script = info[1];
  if (!script.Prepare())
    return;

  impl->setFixedFontFamily(family, script, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void setCursiveFontFamilyMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettings", "setCursiveFontFamily");

  InternalSettings* impl = V8InternalSettings::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  V8StringResource<> family;
  V8StringResource<> script;
  family = info[0];
  if (!family.Prepare())
    return;

  script = info[1];
  if (!script.Prepare())
    return;

  impl->setCursiveFontFamily(family, script, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void setFantasyFontFamilyMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettings", "setFantasyFontFamily");

  InternalSettings* impl = V8InternalSettings::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  V8StringResource<> family;
  V8StringResource<> script;
  family = info[0];
  if (!family.Prepare())
    return;

  script = info[1];
  if (!script.Prepare())
    return;

  impl->setFantasyFontFamily(family, script, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void setPictographFontFamilyMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettings", "setPictographFontFamily");

  InternalSettings* impl = V8InternalSettings::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  V8StringResource<> family;
  V8StringResource<> script;
  family = info[0];
  if (!family.Prepare())
    return;

  script = info[1];
  if (!script.Prepare())
    return;

  impl->setPictographFontFamily(family, script, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void setTextAutosizingEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettings", "setTextAutosizingEnabled");

  InternalSettings* impl = V8InternalSettings::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool enabled;
  enabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setTextAutosizingEnabled(enabled, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void setTextAutosizingWindowSizeOverrideMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettings", "setTextAutosizingWindowSizeOverride");

  InternalSettings* impl = V8InternalSettings::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  int32_t width;
  int32_t height;
  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->setTextAutosizingWindowSizeOverride(width, height, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void setTextTrackKindUserPreferenceMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettings", "setTextTrackKindUserPreference");

  InternalSettings* impl = V8InternalSettings::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> preference;
  preference = info[0];
  if (!preference.Prepare())
    return;

  impl->setTextTrackKindUserPreference(preference, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void setAccessibilityFontScaleFactorMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettings", "setAccessibilityFontScaleFactor");

  InternalSettings* impl = V8InternalSettings::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  float fontScaleFactor;
  fontScaleFactor = NativeValueTraits<IDLFloat>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setAccessibilityFontScaleFactor(fontScaleFactor, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void setMediaTypeOverrideMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettings", "setMediaTypeOverride");

  InternalSettings* impl = V8InternalSettings::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> mediaTypeOverride;
  mediaTypeOverride = info[0];
  if (!mediaTypeOverride.Prepare())
    return;

  impl->setMediaTypeOverride(mediaTypeOverride, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void setDisplayModeOverrideMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettings", "setDisplayModeOverride");

  InternalSettings* impl = V8InternalSettings::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> displayModeOverride;
  displayModeOverride = info[0];
  if (!displayModeOverride.Prepare())
    return;

  impl->setDisplayModeOverride(displayModeOverride, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void setEditingBehaviorMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettings", "setEditingBehavior");

  InternalSettings* impl = V8InternalSettings::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> behavior;
  behavior = info[0];
  if (!behavior.Prepare())
    return;

  impl->setEditingBehavior(behavior, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void setImagesEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettings", "setImagesEnabled");

  InternalSettings* impl = V8InternalSettings::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool enabled;
  enabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setImagesEnabled(enabled, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void setDefaultVideoPosterURLMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettings", "setDefaultVideoPosterURL");

  InternalSettings* impl = V8InternalSettings::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> poster;
  poster = info[0];
  if (!poster.Prepare())
    return;

  impl->setDefaultVideoPosterURL(poster, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void setViewportEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettings", "setViewportEnabled");

  InternalSettings* impl = V8InternalSettings::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool enabled;
  enabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setViewportEnabled(enabled, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void setViewportMetaEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettings", "setViewportMetaEnabled");

  InternalSettings* impl = V8InternalSettings::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool enabled;
  enabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setViewportMetaEnabled(enabled, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void setViewportStyleMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettings", "setViewportStyle");

  InternalSettings* impl = V8InternalSettings::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> style;
  style = info[0];
  if (!style.Prepare())
    return;

  impl->setViewportStyle(style, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void setAvailablePointerTypesMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettings", "setAvailablePointerTypes");

  InternalSettings* impl = V8InternalSettings::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> pointers;
  pointers = info[0];
  if (!pointers.Prepare())
    return;

  impl->setAvailablePointerTypes(pointers, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void setPrimaryPointerTypeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettings", "setPrimaryPointerType");

  InternalSettings* impl = V8InternalSettings::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> pointer;
  pointer = info[0];
  if (!pointer.Prepare())
    return;

  impl->setPrimaryPointerType(pointer, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void setAvailableHoverTypesMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettings", "setAvailableHoverTypes");

  InternalSettings* impl = V8InternalSettings::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> types;
  types = info[0];
  if (!types.Prepare())
    return;

  impl->setAvailableHoverTypes(types, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void setPrimaryHoverTypeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettings", "setPrimaryHoverType");

  InternalSettings* impl = V8InternalSettings::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> type;
  type = info[0];
  if (!type.Prepare())
    return;

  impl->setPrimaryHoverType(type, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void setImageAnimationPolicyMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettings", "setImageAnimationPolicy");

  InternalSettings* impl = V8InternalSettings::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> policy;
  policy = info[0];
  if (!policy.Prepare())
    return;

  impl->setImageAnimationPolicy(policy, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void setPresentationReceiverMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettings", "setPresentationReceiver");

  InternalSettings* impl = V8InternalSettings::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool enabled;
  enabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setPresentationReceiver(enabled, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void setAutoplayPolicyMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettings", "setAutoplayPolicy");

  InternalSettings* impl = V8InternalSettings::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> policy;
  policy = info[0];
  if (!policy.Prepare())
    return;

  impl->setAutoplayPolicy(policy, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void setLangAttributeAwareFormControlUIEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettings", "setLangAttributeAwareFormControlUIEnabled");

  InternalSettings* impl = V8InternalSettings::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool enabled;
  enabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setLangAttributeAwareFormControlUIEnabled(enabled);
}

static void setExperimentalContentSecurityPolicyFeaturesEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettings", "setExperimentalContentSecurityPolicyFeaturesEnabled");

  InternalSettings* impl = V8InternalSettings::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool enabled;
  enabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setExperimentalContentSecurityPolicyFeaturesEnabled(enabled);
}

static void setScrollTopLeftInteropEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettings", "setScrollTopLeftInteropEnabled");

  InternalSettings* impl = V8InternalSettings::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool enabled;
  enabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setScrollTopLeftInteropEnabled(enabled);
}

} // namespace InternalSettingsV8Internal

void V8InternalSettings::setMockScrollbarsEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettings_setMockScrollbarsEnabled");

  InternalSettingsV8Internal::setMockScrollbarsEnabledMethod(info);
}

void V8InternalSettings::setHideScrollbarsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettings_setHideScrollbars");

  InternalSettingsV8Internal::setHideScrollbarsMethod(info);
}

void V8InternalSettings::setMockGestureTapHighlightsEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettings_setMockGestureTapHighlightsEnabled");

  InternalSettingsV8Internal::setMockGestureTapHighlightsEnabledMethod(info);
}

void V8InternalSettings::setStandardFontFamilyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettings_setStandardFontFamily");

  InternalSettingsV8Internal::setStandardFontFamilyMethod(info);
}

void V8InternalSettings::setSerifFontFamilyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettings_setSerifFontFamily");

  InternalSettingsV8Internal::setSerifFontFamilyMethod(info);
}

void V8InternalSettings::setSansSerifFontFamilyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettings_setSansSerifFontFamily");

  InternalSettingsV8Internal::setSansSerifFontFamilyMethod(info);
}

void V8InternalSettings::setFixedFontFamilyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettings_setFixedFontFamily");

  InternalSettingsV8Internal::setFixedFontFamilyMethod(info);
}

void V8InternalSettings::setCursiveFontFamilyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettings_setCursiveFontFamily");

  InternalSettingsV8Internal::setCursiveFontFamilyMethod(info);
}

void V8InternalSettings::setFantasyFontFamilyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettings_setFantasyFontFamily");

  InternalSettingsV8Internal::setFantasyFontFamilyMethod(info);
}

void V8InternalSettings::setPictographFontFamilyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettings_setPictographFontFamily");

  InternalSettingsV8Internal::setPictographFontFamilyMethod(info);
}

void V8InternalSettings::setTextAutosizingEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettings_setTextAutosizingEnabled");

  InternalSettingsV8Internal::setTextAutosizingEnabledMethod(info);
}

void V8InternalSettings::setTextAutosizingWindowSizeOverrideMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettings_setTextAutosizingWindowSizeOverride");

  InternalSettingsV8Internal::setTextAutosizingWindowSizeOverrideMethod(info);
}

void V8InternalSettings::setTextTrackKindUserPreferenceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettings_setTextTrackKindUserPreference");

  InternalSettingsV8Internal::setTextTrackKindUserPreferenceMethod(info);
}

void V8InternalSettings::setAccessibilityFontScaleFactorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettings_setAccessibilityFontScaleFactor");

  InternalSettingsV8Internal::setAccessibilityFontScaleFactorMethod(info);
}

void V8InternalSettings::setMediaTypeOverrideMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettings_setMediaTypeOverride");

  InternalSettingsV8Internal::setMediaTypeOverrideMethod(info);
}

void V8InternalSettings::setDisplayModeOverrideMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettings_setDisplayModeOverride");

  InternalSettingsV8Internal::setDisplayModeOverrideMethod(info);
}

void V8InternalSettings::setEditingBehaviorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettings_setEditingBehavior");

  InternalSettingsV8Internal::setEditingBehaviorMethod(info);
}

void V8InternalSettings::setImagesEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettings_setImagesEnabled");

  InternalSettingsV8Internal::setImagesEnabledMethod(info);
}

void V8InternalSettings::setDefaultVideoPosterURLMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettings_setDefaultVideoPosterURL");

  InternalSettingsV8Internal::setDefaultVideoPosterURLMethod(info);
}

void V8InternalSettings::setViewportEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettings_setViewportEnabled");

  InternalSettingsV8Internal::setViewportEnabledMethod(info);
}

void V8InternalSettings::setViewportMetaEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettings_setViewportMetaEnabled");

  InternalSettingsV8Internal::setViewportMetaEnabledMethod(info);
}

void V8InternalSettings::setViewportStyleMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettings_setViewportStyle");

  InternalSettingsV8Internal::setViewportStyleMethod(info);
}

void V8InternalSettings::setAvailablePointerTypesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettings_setAvailablePointerTypes");

  InternalSettingsV8Internal::setAvailablePointerTypesMethod(info);
}

void V8InternalSettings::setPrimaryPointerTypeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettings_setPrimaryPointerType");

  InternalSettingsV8Internal::setPrimaryPointerTypeMethod(info);
}

void V8InternalSettings::setAvailableHoverTypesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettings_setAvailableHoverTypes");

  InternalSettingsV8Internal::setAvailableHoverTypesMethod(info);
}

void V8InternalSettings::setPrimaryHoverTypeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettings_setPrimaryHoverType");

  InternalSettingsV8Internal::setPrimaryHoverTypeMethod(info);
}

void V8InternalSettings::setImageAnimationPolicyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettings_setImageAnimationPolicy");

  InternalSettingsV8Internal::setImageAnimationPolicyMethod(info);
}

void V8InternalSettings::setPresentationReceiverMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettings_setPresentationReceiver");

  InternalSettingsV8Internal::setPresentationReceiverMethod(info);
}

void V8InternalSettings::setAutoplayPolicyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettings_setAutoplayPolicy");

  InternalSettingsV8Internal::setAutoplayPolicyMethod(info);
}

void V8InternalSettings::setLangAttributeAwareFormControlUIEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettings_setLangAttributeAwareFormControlUIEnabled");

  InternalSettingsV8Internal::setLangAttributeAwareFormControlUIEnabledMethod(info);
}

void V8InternalSettings::setExperimentalContentSecurityPolicyFeaturesEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettings_setExperimentalContentSecurityPolicyFeaturesEnabled");

  InternalSettingsV8Internal::setExperimentalContentSecurityPolicyFeaturesEnabledMethod(info);
}

void V8InternalSettings::setScrollTopLeftInteropEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettings_setScrollTopLeftInteropEnabled");

  InternalSettingsV8Internal::setScrollTopLeftInteropEnabledMethod(info);
}

static const V8DOMConfiguration::MethodConfiguration V8InternalSettingsMethods[] = {
    {"setMockScrollbarsEnabled", V8InternalSettings::setMockScrollbarsEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setHideScrollbars", V8InternalSettings::setHideScrollbarsMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setMockGestureTapHighlightsEnabled", V8InternalSettings::setMockGestureTapHighlightsEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setStandardFontFamily", V8InternalSettings::setStandardFontFamilyMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setSerifFontFamily", V8InternalSettings::setSerifFontFamilyMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setSansSerifFontFamily", V8InternalSettings::setSansSerifFontFamilyMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setFixedFontFamily", V8InternalSettings::setFixedFontFamilyMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setCursiveFontFamily", V8InternalSettings::setCursiveFontFamilyMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setFantasyFontFamily", V8InternalSettings::setFantasyFontFamilyMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setPictographFontFamily", V8InternalSettings::setPictographFontFamilyMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setTextAutosizingEnabled", V8InternalSettings::setTextAutosizingEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setTextAutosizingWindowSizeOverride", V8InternalSettings::setTextAutosizingWindowSizeOverrideMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setTextTrackKindUserPreference", V8InternalSettings::setTextTrackKindUserPreferenceMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setAccessibilityFontScaleFactor", V8InternalSettings::setAccessibilityFontScaleFactorMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setMediaTypeOverride", V8InternalSettings::setMediaTypeOverrideMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setDisplayModeOverride", V8InternalSettings::setDisplayModeOverrideMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setEditingBehavior", V8InternalSettings::setEditingBehaviorMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setImagesEnabled", V8InternalSettings::setImagesEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setDefaultVideoPosterURL", V8InternalSettings::setDefaultVideoPosterURLMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setViewportEnabled", V8InternalSettings::setViewportEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setViewportMetaEnabled", V8InternalSettings::setViewportMetaEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setViewportStyle", V8InternalSettings::setViewportStyleMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setAvailablePointerTypes", V8InternalSettings::setAvailablePointerTypesMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setPrimaryPointerType", V8InternalSettings::setPrimaryPointerTypeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setAvailableHoverTypes", V8InternalSettings::setAvailableHoverTypesMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setPrimaryHoverType", V8InternalSettings::setPrimaryHoverTypeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setImageAnimationPolicy", V8InternalSettings::setImageAnimationPolicyMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setPresentationReceiver", V8InternalSettings::setPresentationReceiverMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setAutoplayPolicy", V8InternalSettings::setAutoplayPolicyMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setLangAttributeAwareFormControlUIEnabled", V8InternalSettings::setLangAttributeAwareFormControlUIEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setExperimentalContentSecurityPolicyFeaturesEnabled", V8InternalSettings::setExperimentalContentSecurityPolicyFeaturesEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setScrollTopLeftInteropEnabled", V8InternalSettings::setScrollTopLeftInteropEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void installV8InternalSettingsTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8InternalSettings::wrapperTypeInfo.interface_name, V8InternalSettingsGenerated::domTemplate(isolate, world), V8InternalSettings::internalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallMethods(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8InternalSettingsMethods, arraysize(V8InternalSettingsMethods));

  // Custom signature

  V8InternalSettings::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8InternalSettings::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8InternalSettings::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8InternalSettingsTemplate);
}

bool V8InternalSettings::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8InternalSettings::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

InternalSettings* V8InternalSettings::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

InternalSettings* NativeValueTraits<InternalSettings>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  InternalSettings* nativeValue = V8InternalSettings::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "InternalSettings"));
  }
  return nativeValue;
}

}  // namespace blink
