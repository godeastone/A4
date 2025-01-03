// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_internal_runtime_flags.h"

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
const WrapperTypeInfo V8InternalRuntimeFlags::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8InternalRuntimeFlags::domTemplate,
    nullptr,
    "InternalRuntimeFlags",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in InternalRuntimeFlags.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& InternalRuntimeFlags::wrapper_type_info_ = V8InternalRuntimeFlags::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, InternalRuntimeFlags>::value,
    "InternalRuntimeFlags inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&InternalRuntimeFlags::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "InternalRuntimeFlags is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace InternalRuntimeFlagsV8Internal {

static void accelerated2dCanvasEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->accelerated2dCanvasEnabled());
}

static void accelerated2dCanvasEnabledAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "InternalRuntimeFlags", "accelerated2dCanvasEnabled");

  // Prepare the value to be set.
  bool cppValue = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setAccelerated2dCanvasEnabled(cppValue);
}

static void accessibilityObjectModelEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->accessibilityObjectModelEnabled());
}

static void allowActivationDelegationAttrEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->allowActivationDelegationAttrEnabled());
}

static void allowContentInitiatedDataUrlNavigationsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->allowContentInitiatedDataUrlNavigationsEnabled());
}

static void animationWorkletEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->animationWorkletEnabled());
}

static void asyncClipboardEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->asyncClipboardEnabled());
}

static void asyncCookiesEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->asyncCookiesEnabled());
}

static void audioOutputDevicesEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->audioOutputDevicesEnabled());
}

static void audioVideoTracksEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->audioVideoTracksEnabled());
}

static void audioWorkletEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->audioWorkletEnabled());
}

static void automationControlledEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->automationControlledEnabled());
}

static void automationControlledEnabledAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "InternalRuntimeFlags", "automationControlledEnabled");

  // Prepare the value to be set.
  bool cppValue = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setAutomationControlledEnabled(cppValue);
}

static void autoplayIgnoresWebAudioEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->autoplayIgnoresWebAudioEnabled());
}

static void autoplayMutedVideosEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->autoplayMutedVideosEnabled());
}

static void autoplayMutedVideosEnabledAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "InternalRuntimeFlags", "autoplayMutedVideosEnabled");

  // Prepare the value to be set.
  bool cppValue = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setAutoplayMutedVideosEnabled(cppValue);
}

static void backgroundFetchEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->backgroundFetchEnabled());
}

static void backgroundVideoTrackOptimizationEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->backgroundVideoTrackOptimizationEnabled());
}

static void blinkGenPropertyTreesEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->blinkGenPropertyTreesEnabled());
}

static void blinkRuntimeCallStatsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->blinkRuntimeCallStatsEnabled());
}

static void bloatedRendererDetectionEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->bloatedRendererDetectionEnabled());
}

static void blockCredentialedSubresourcesEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->blockCredentialedSubresourcesEnabled());
}

static void blockingDownloadsInSandboxEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->blockingDownloadsInSandboxEnabled());
}

static void blockMetaSetCookieEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->blockMetaSetCookieEnabled());
}

static void budgetEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->budgetEnabled());
}

static void budgetQueryEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->budgetQueryEnabled());
}

static void cacheInlineScriptCodeEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->cacheInlineScriptCodeEnabled());
}

static void cacheStyleSheetWithMediaQueriesEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->cacheStyleSheetWithMediaQueriesEnabled());
}

static void canvas2dContextLostRestoredEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->canvas2dContextLostRestoredEnabled());
}

static void canvas2dFixedRenderingModeEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->canvas2dFixedRenderingModeEnabled());
}

static void canvas2dImageChromiumEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->canvas2dImageChromiumEnabled());
}

static void canvas2dScrollPathIntoViewEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->canvas2dScrollPathIntoViewEnabled());
}

static void canvasColorManagementEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->canvasColorManagementEnabled());
}

static void canvasHitRegionEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->canvasHitRegionEnabled());
}

static void canvasImageSmoothingEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->canvasImageSmoothingEnabled());
}

static void clickRetargettingEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->clickRetargettingEnabled());
}

static void clientHintsPersistentEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->clientHintsPersistentEnabled());
}

static void clientPlaceholdersForServerLoFiEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->clientPlaceholdersForServerLoFiEnabled());
}

static void compositedSelectionUpdateEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->compositedSelectionUpdateEnabled());
}

static void compositeOpaqueFixedPositionEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->compositeOpaqueFixedPositionEnabled());
}

static void compositeOpaqueFixedPositionEnabledAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "InternalRuntimeFlags", "compositeOpaqueFixedPositionEnabled");

  // Prepare the value to be set.
  bool cppValue = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setCompositeOpaqueFixedPositionEnabled(cppValue);
}

static void compositeOpaqueScrollersEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->compositeOpaqueScrollersEnabled());
}

static void compositeOpaqueScrollersEnabledAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "InternalRuntimeFlags", "compositeOpaqueScrollersEnabled");

  // Prepare the value to be set.
  bool cppValue = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setCompositeOpaqueScrollersEnabled(cppValue);
}

static void compositorTouchActionEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->compositorTouchActionEnabled());
}

static void computedAccessibilityInfoEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->computedAccessibilityInfoEnabled());
}

static void conicGradientEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->conicGradientEnabled());
}

static void constructableStylesheetsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->constructableStylesheetsEnabled());
}

static void contextMenuEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->contextMenuEnabled());
}

static void corsRFC1918EnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->corsRFC1918Enabled());
}

static void css3TextEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->css3TextEnabled());
}

static void cssAdditiveAnimationsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->cssAdditiveAnimationsEnabled());
}

static void cssBackdropFilterEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->cssBackdropFilterEnabled());
}

static void cssDisplayContentsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->cssDisplayContentsEnabled());
}

static void cssFocusVisibleEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->cssFocusVisibleEnabled());
}

static void cssFontSizeAdjustEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->cssFontSizeAdjustEnabled());
}

static void cssHexAlphaColorEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->cssHexAlphaColorEnabled());
}

static void cssInBodyDoesNotBlockPaintEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->cssInBodyDoesNotBlockPaintEnabled());
}

static void cssIndependentTransformPropertiesEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->cssIndependentTransformPropertiesEnabled());
}

static void cssLayoutAPIEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->cssLayoutAPIEnabled());
}

static void cssMaskSourceTypeEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->cssMaskSourceTypeEnabled());
}

static void cssMatchesEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->cssMatchesEnabled());
}

static void cssOffsetPathRayEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->cssOffsetPathRayEnabled());
}

static void cssOffsetPathRayContainEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->cssOffsetPathRayContainEnabled());
}

static void cssOffsetPositionAnchorEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->cssOffsetPositionAnchorEnabled());
}

static void cssomSmoothScrollEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->cssomSmoothScrollEnabled());
}

static void cssOverscrollBehaviorEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->cssOverscrollBehaviorEnabled());
}

static void cssPaintAPIEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->cssPaintAPIEnabled());
}

static void cssPaintAPIArgumentsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->cssPaintAPIArgumentsEnabled());
}

static void cssPartPseudoElementEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->cssPartPseudoElementEnabled());
}

static void cssPseudoISEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->cssPseudoISEnabled());
}

static void cssScrollSnapPointsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->cssScrollSnapPointsEnabled());
}

static void cssSnapSizeEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->cssSnapSizeEnabled());
}

static void cssTransformBoxEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->cssTransformBoxEnabled());
}

static void cssTypedOMEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->cssTypedOMEnabled());
}

static void cssVariables2EnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->cssVariables2Enabled());
}

static void cssViewportEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->cssViewportEnabled());
}

static void customElementDefaultStyleEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->customElementDefaultStyleEnabled());
}

static void customElementsBuiltinEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->customElementsBuiltinEnabled());
}

static void customElementsV0EnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->customElementsV0Enabled());
}

static void customUserTimingEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->customUserTimingEnabled());
}

static void databaseEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->databaseEnabled());
}

static void decodeToYUVEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->decodeToYUVEnabled());
}

static void deprecationReportingEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->deprecationReportingEnabled());
}

static void desktopCaptureDisableLocalEchoControlEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->desktopCaptureDisableLocalEchoControlEnabled());
}

static void deviceMemoryHeaderEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->deviceMemoryHeaderEnabled());
}

static void disableHardwareNoiseSuppressionEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->disableHardwareNoiseSuppressionEnabled());
}

static void disablePaintChunksToCcLayerEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->disablePaintChunksToCcLayerEnabled());
}

static void disableRasterInvalidationEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->disableRasterInvalidationEnabled());
}

static void displayCutoutViewportFitEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->displayCutoutViewportFitEnabled());
}

static void displayCutoutViewportFitEnabledAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "InternalRuntimeFlags", "displayCutoutViewportFitEnabled");

  // Prepare the value to be set.
  bool cppValue = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setDisplayCutoutViewportFitEnabled(cppValue);
}

static void displayNoneIFrameCreatesNoLayoutObjectEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->displayNoneIFrameCreatesNoLayoutObjectEnabled());
}

static void documentCookieEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->documentCookieEnabled());
}

static void documentDomainEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->documentDomainEnabled());
}

static void documentWriteEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->documentWriteEnabled());
}

static void embedderCSPEnforcementEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->embedderCSPEnforcementEnabled());
}

static void encryptedMediaHdcpPolicyCheckEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->encryptedMediaHdcpPolicyCheckEnabled());
}

static void eventTimingEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->eventTimingEnabled());
}

static void execCommandInJavaScriptEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->execCommandInJavaScriptEnabled());
}

static void expensiveBackgroundTimerThrottlingEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->expensiveBackgroundTimerThrottlingEnabled());
}

static void experimentalContentSecurityPolicyFeaturesEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->experimentalContentSecurityPolicyFeaturesEnabled());
}

static void experimentalHardwareEchoCancellationEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->experimentalHardwareEchoCancellationEnabled());
}

static void experimentalProductivityFeaturesEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->experimentalProductivityFeaturesEnabled());
}

static void experimentalV8ExtrasEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->experimentalV8ExtrasEnabled());
}

static void extendedImageBitmapOptionsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->extendedImageBitmapOptionsEnabled());
}

static void extendedTextMetricsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->extendedTextMetricsEnabled());
}

static void extraWebGLVideoTextureMetadataEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->extraWebGLVideoTextureMetadataEnabled());
}

static void fastMobileScrollingEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->fastMobileScrollingEnabled());
}

static void featurePolicyAutoplayFeatureEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->featurePolicyAutoplayFeatureEnabled());
}

static void featurePolicyExperimentalFeaturesEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->featurePolicyExperimentalFeaturesEnabled());
}

static void featurePolicyForPermissionsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->featurePolicyForPermissionsEnabled());
}

static void featurePolicyJavaScriptInterfaceEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->featurePolicyJavaScriptInterfaceEnabled());
}

static void featurePolicyVibrateFeatureEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->featurePolicyVibrateFeatureEnabled());
}

static void fetchRequestCacheEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->fetchRequestCacheEnabled());
}

static void fetchRequestKeepaliveEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->fetchRequestKeepaliveEnabled());
}

static void fetchRequestSignalEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->fetchRequestSignalEnabled());
}

static void fileSystemEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->fileSystemEnabled());
}

static void focusOptionsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->focusOptionsEnabled());
}

static void fontCacheScalingEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->fontCacheScalingEnabled());
}

static void forceOverlayFullscreenVideoEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->forceOverlayFullscreenVideoEnabled());
}

static void forceTallerSelectPopupEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->forceTallerSelectPopupEnabled());
}

static void formDataEventEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->formDataEventEnabled());
}

static void fractionalMouseEventEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->fractionalMouseEventEnabled());
}

static void fractionalMouseTypePointerEventEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->fractionalMouseTypePointerEventEnabled());
}

static void fractionalScrollOffsetsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->fractionalScrollOffsetsEnabled());
}

static void framebustingNeedsSameOriginOrUserGestureEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->framebustingNeedsSameOriginOrUserGestureEnabled());
}

static void framebustingNeedsSameOriginOrUserGestureEnabledAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "InternalRuntimeFlags", "framebustingNeedsSameOriginOrUserGestureEnabled");

  // Prepare the value to be set.
  bool cppValue = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setFramebustingNeedsSameOriginOrUserGestureEnabled(cppValue);
}

static void framesTimingFunctionEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->framesTimingFunctionEnabled());
}

static void fullscreenOptionsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->fullscreenOptionsEnabled());
}

static void fullscreenUnprefixedEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->fullscreenUnprefixedEnabled());
}

static void fullscreenUnprefixedEnabledAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "InternalRuntimeFlags", "fullscreenUnprefixedEnabled");

  // Prepare the value to be set.
  bool cppValue = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setFullscreenUnprefixedEnabled(cppValue);
}

static void gamepadExtensionsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->gamepadExtensionsEnabled());
}

static void gamepadVibrationEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->gamepadVibrationEnabled());
}

static void heapCompactionEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->heapCompactionEnabled());
}

static void heapIncrementalMarkingEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->heapIncrementalMarkingEnabled());
}

static void heapIncrementalMarkingStressEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->heapIncrementalMarkingStressEnabled());
}

static void htmlImportsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->htmlImportsEnabled());
}

static void htmlImportsStyleApplicationEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->htmlImportsStyleApplicationEnabled());
}

static void idbObserverEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->idbObserverEnabled());
}

static void idleTimeColdModeSpellCheckingEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->idleTimeColdModeSpellCheckingEnabled());
}

static void imageDecodingAttributeEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->imageDecodingAttributeEnabled());
}

static void imageOrientationEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->imageOrientationEnabled());
}

static void implicitRootScrollerEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->implicitRootScrollerEnabled());
}

static void implicitRootScrollerEnabledAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "InternalRuntimeFlags", "implicitRootScrollerEnabled");

  // Prepare the value to be set.
  bool cppValue = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setImplicitRootScrollerEnabled(cppValue);
}

static void incrementalShadowDOMEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->incrementalShadowDOMEnabled());
}

static void inertAttributeEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->inertAttributeEnabled());
}

static void inputMultipleFieldsUIEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->inputMultipleFieldsUIEnabled());
}

static void installedAppEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->installedAppEnabled());
}

static void intersectionObserverGeometryMapperEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->intersectionObserverGeometryMapperEnabled());
}

static void intersectionObserverV2EnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->intersectionObserverV2Enabled());
}

static void jsImageDecodeEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->jsImageDecodeEnabled());
}

static void keyboardLockEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->keyboardLockEnabled());
}

static void keyboardMapEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->keyboardMapEnabled());
}

static void langAttributeAwareFormControlUIEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->langAttributeAwareFormControlUIEnabled());
}

static void layeredAPIEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->layeredAPIEnabled());
}

static void layoutNGEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->layoutNGEnabled());
}

static void layoutNGBlockFragmentationEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->layoutNGBlockFragmentationEnabled());
}

static void layoutNGFlexBoxEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->layoutNGFlexBoxEnabled());
}

static void layoutNGFragmentCachingEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->layoutNGFragmentCachingEnabled());
}

static void lazyFrameLoadingEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->lazyFrameLoadingEnabled());
}

static void lazyInitializeMediaControlsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->lazyInitializeMediaControlsEnabled());
}

static void lazyParseCSSEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->lazyParseCSSEnabled());
}

static void loadingWithMojoEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->loadingWithMojoEnabled());
}

static void longTaskObserverEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->longTaskObserverEnabled());
}

static void longTaskV2EnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->longTaskV2Enabled());
}

static void lowLatencyCanvasEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->lowLatencyCanvasEnabled());
}

static void mediaCapabilitiesEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->mediaCapabilitiesEnabled());
}

static void mediaCapabilitiesEncodingInfoEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->mediaCapabilitiesEncodingInfoEnabled());
}

static void mediaCaptureEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->mediaCaptureEnabled());
}

static void mediaCaptureDepthEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->mediaCaptureDepthEnabled());
}

static void mediaCaptureDepthVideoKindEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->mediaCaptureDepthVideoKindEnabled());
}

static void mediaCaptureFromVideoEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->mediaCaptureFromVideoEnabled());
}

static void mediaCastOverlayButtonEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->mediaCastOverlayButtonEnabled());
}

static void mediaControlsOverlayPlayButtonEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->mediaControlsOverlayPlayButtonEnabled());
}

static void mediaControlsOverlayPlayButtonEnabledAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "InternalRuntimeFlags", "mediaControlsOverlayPlayButtonEnabled");

  // Prepare the value to be set.
  bool cppValue = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setMediaControlsOverlayPlayButtonEnabled(cppValue);
}

static void mediaDocumentDownloadButtonEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->mediaDocumentDownloadButtonEnabled());
}

static void mediaEngagementBypassAutoplayPoliciesEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->mediaEngagementBypassAutoplayPoliciesEnabled());
}

static void mediaQueryShapeEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->mediaQueryShapeEnabled());
}

static void mediaSessionEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->mediaSessionEnabled());
}

static void mediaSourceExperimentalEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->mediaSourceExperimentalEnabled());
}

static void mediaSourceNewAbortAndDurationEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->mediaSourceNewAbortAndDurationEnabled());
}

static void mediaStreamTrackContentHintEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->mediaStreamTrackContentHintEnabled());
}

static void middleClickAutoscrollEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->middleClickAutoscrollEnabled());
}

static void mobileLayoutThemeEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->mobileLayoutThemeEnabled());
}

static void modernMediaControlsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->modernMediaControlsEnabled());
}

static void moduleDedicatedWorkerEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->moduleDedicatedWorkerEnabled());
}

static void modulePreloadEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->modulePreloadEnabled());
}

static void moduleScriptsDynamicImportEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->moduleScriptsDynamicImportEnabled());
}

static void moduleScriptsImportMetaUrlEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->moduleScriptsImportMetaUrlEnabled());
}

static void mojoBlobURLsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->mojoBlobURLsEnabled());
}

static void mojoJSEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->mojoJSEnabled());
}

static void mojoJSTestEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->mojoJSTestEnabled());
}

static void multipleColorStopPositionsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->multipleColorStopPositionsEnabled());
}

static void navigatorContentUtilsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->navigatorContentUtilsEnabled());
}

static void navigatorDeviceMemoryEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->navigatorDeviceMemoryEnabled());
}

static void netInfoDownlinkEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->netInfoDownlinkEnabled());
}

static void netInfoDownlinkHeaderEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->netInfoDownlinkHeaderEnabled());
}

static void netInfoDownlinkMaxEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->netInfoDownlinkMaxEnabled());
}

static void netInfoEffectiveTypeEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->netInfoEffectiveTypeEnabled());
}

static void netInfoEffectiveTypeHeaderEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->netInfoEffectiveTypeHeaderEnabled());
}

static void netInfoRttEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->netInfoRttEnabled());
}

static void netInfoRttHeaderEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->netInfoRttHeaderEnabled());
}

static void netInfoSaveDataEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->netInfoSaveDataEnabled());
}

static void networkServiceEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->networkServiceEnabled());
}

static void newRemotePlaybackPipelineEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->newRemotePlaybackPipelineEnabled());
}

static void notificationConstructorEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->notificationConstructorEnabled());
}

static void notificationContentImageEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->notificationContentImageEnabled());
}

static void notificationInlineRepliesEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->notificationInlineRepliesEnabled());
}

static void notificationsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->notificationsEnabled());
}

static void nullableDocumentDomainEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->nullableDocumentDomainEnabled());
}

static void offMainThreadWebSocketEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->offMainThreadWebSocketEnabled());
}

static void offscreenCanvasEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->offscreenCanvasEnabled());
}

static void offscreenCanvasTextEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->offscreenCanvasTextEnabled());
}

static void onDeviceChangeEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->onDeviceChangeEnabled());
}

static void orientationEventEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->orientationEventEnabled());
}

static void originManifestEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->originManifestEnabled());
}

static void originTrialsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->originTrialsEnabled());
}

static void originTrialsSampleAPIEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->originTrialsSampleAPIEnabled());
}

static void originTrialsSampleAPIImpliedEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->originTrialsSampleAPIImpliedEnabled());
}

static void outOfBlinkCORSEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->outOfBlinkCORSEnabled());
}

static void overflowIconsForMediaControlsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->overflowIconsForMediaControlsEnabled());
}

static void overlayScrollbarsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->overlayScrollbarsEnabled());
}

static void overlayScrollbarsEnabledAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "InternalRuntimeFlags", "overlayScrollbarsEnabled");

  // Prepare the value to be set.
  bool cppValue = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setOverlayScrollbarsEnabled(cppValue);
}

static void pageLifecycleEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->pageLifecycleEnabled());
}

static void pagePopupEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->pagePopupEnabled());
}

static void paintUnderInvalidationCheckingEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->paintUnderInvalidationCheckingEnabled());
}

static void paintUnderInvalidationCheckingEnabledAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "InternalRuntimeFlags", "paintUnderInvalidationCheckingEnabled");

  // Prepare the value to be set.
  bool cppValue = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setPaintUnderInvalidationCheckingEnabled(cppValue);
}

static void partialRasterInvalidationEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->partialRasterInvalidationEnabled());
}

static void passiveDocumentEventListenersEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->passiveDocumentEventListenersEnabled());
}

static void passPaintVisualRectToCompositorEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->passPaintVisualRectToCompositorEnabled());
}

static void paymentAppEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->paymentAppEnabled());
}

static void paymentDetailsModifierDataEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->paymentDetailsModifierDataEnabled());
}

static void paymentRequestEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->paymentRequestEnabled());
}

static void paymentRequestBasicCardEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->paymentRequestBasicCardEnabled());
}

static void performanceNavigationTiming2EnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->performanceNavigationTiming2Enabled());
}

static void performancePaintTimingEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->performancePaintTimingEnabled());
}

static void permissionDelegationEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->permissionDelegationEnabled());
}

static void permissionsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->permissionsEnabled());
}

static void permissionsRequestRevokeEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->permissionsRequestRevokeEnabled());
}

static void pictureInPictureEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->pictureInPictureEnabled());
}

static void pictureInPictureEnabledAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "InternalRuntimeFlags", "pictureInPictureEnabled");

  // Prepare the value to be set.
  bool cppValue = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setPictureInPictureEnabled(cppValue);
}

static void pictureInPictureAPIEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->pictureInPictureAPIEnabled());
}

static void preciseMemoryInfoEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->preciseMemoryInfoEnabled());
}

static void preferredImageRasterBoundsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->preferredImageRasterBoundsEnabled());
}

static void preferredImageRasterBoundsEnabledAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "InternalRuntimeFlags", "preferredImageRasterBoundsEnabled");

  // Prepare the value to be set.
  bool cppValue = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setPreferredImageRasterBoundsEnabled(cppValue);
}

static void prefixedVideoFullscreenEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->prefixedVideoFullscreenEnabled());
}

static void preloadDefaultIsMetadataEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->preloadDefaultIsMetadataEnabled());
}

static void preloadImageSrcSetEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->preloadImageSrcSetEnabled());
}

static void presentationEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->presentationEnabled());
}

static void printBrowserEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->printBrowserEnabled());
}

static void priorityHintsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->priorityHintsEnabled());
}

static void pushMessagingEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->pushMessagingEnabled());
}

static void pwaFullCodeCacheEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->pwaFullCodeCacheEnabled());
}

static void rasterInducingScrollEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->rasterInducingScrollEnabled());
}

static void reducedReferrerGranularityEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->reducedReferrerGranularityEnabled());
}

static void remotePlaybackEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->remotePlaybackEnabled());
}

static void remotePlaybackBackendEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->remotePlaybackBackendEnabled());
}

static void remotePlaybackBackendEnabledAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "InternalRuntimeFlags", "remotePlaybackBackendEnabled");

  // Prepare the value to be set.
  bool cppValue = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setRemotePlaybackBackendEnabled(cppValue);
}

static void renderingPipelineThrottlingEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->renderingPipelineThrottlingEnabled());
}

static void renderingPipelineThrottlingLoadingIframesEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->renderingPipelineThrottlingLoadingIframesEnabled());
}

static void renderUnicodeControlCharactersEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->renderUnicodeControlCharactersEnabled());
}

static void reportingObserverEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->reportingObserverEnabled());
}

static void requireCSSExtensionForFileEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->requireCSSExtensionForFileEnabled());
}

static void resizeObserverEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->resizeObserverEnabled());
}

static void resourceLoadSchedulerEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->resourceLoadSchedulerEnabled());
}

static void restrictAppCacheToSecureContextsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->restrictAppCacheToSecureContextsEnabled());
}

static void restrictCanRequestURLCharacterSetEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->restrictCanRequestURLCharacterSetEnabled());
}

static void rootLayerScrollingEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->rootLayerScrollingEnabled());
}

static void rtcPeerConnectionIdEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->rtcPeerConnectionIdEnabled());
}

static void rtcRtpSenderParametersEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->rtcRtpSenderParametersEnabled());
}

static void rtcUnifiedPlanEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->rtcUnifiedPlanEnabled());
}

static void rtcUnifiedPlanByDefaultEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->rtcUnifiedPlanByDefaultEnabled());
}

static void scriptedSpeechEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->scriptedSpeechEnabled());
}

static void scrollAnchorSerializationEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->scrollAnchorSerializationEnabled());
}

static void scrollCustomizationEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->scrollCustomizationEnabled());
}

static void scrollTopLeftInteropEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->scrollTopLeftInteropEnabled());
}

static void secMetadataEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->secMetadataEnabled());
}

static void sendBeaconThrowForBlobWithNonSimpleTypeEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->sendBeaconThrowForBlobWithNonSimpleTypeEnabled());
}

static void sendMouseEventsDisabledFormControlsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->sendMouseEventsDisabledFormControlsEnabled());
}

static void sensorEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->sensorEnabled());
}

static void sensorExtraClassesEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->sensorExtraClassesEnabled());
}

static void serverTimingEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->serverTimingEnabled());
}

static void serviceWorkerScriptFullCodeCacheEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->serviceWorkerScriptFullCodeCacheEnabled());
}

static void serviceWorkerUpdateViaCacheEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->serviceWorkerUpdateViaCacheEnabled());
}

static void setRootScrollerEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->setRootScrollerEnabled());
}

static void shadowDOMV0EnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->shadowDOMV0Enabled());
}

static void shadowPiercingDescendantCombinatorEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->shadowPiercingDescendantCombinatorEnabled());
}

static void shapeDetectionEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->shapeDetectionEnabled());
}

static void sharedArrayBufferEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->sharedArrayBufferEnabled());
}

static void sharedWorkerEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->sharedWorkerEnabled());
}

static void signatureBasedIntegrityEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->signatureBasedIntegrityEnabled());
}

static void slimmingPaintV175EnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->slimmingPaintV175Enabled());
}

static void slimmingPaintV2EnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->slimmingPaintV2Enabled());
}

static void slotInFlatTreeEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->slotInFlatTreeEnabled());
}

static void smilEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->smilEnabled());
}

static void smoothScrollJSInterventionEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->smoothScrollJSInterventionEnabled());
}

static void stableBlinkFeaturesEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->stableBlinkFeaturesEnabled());
}

static void stackedCSSPropertyAnimationsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->stackedCSSPropertyAnimationsEnabled());
}

static void stopInBackgroundEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->stopInBackgroundEnabled());
}

static void stopLoadingInBackgroundEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->stopLoadingInBackgroundEnabled());
}

static void stopNonTimersInBackgroundEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->stopNonTimersInBackgroundEnabled());
}

static void timerThrottlingForBackgroundTabsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->timerThrottlingForBackgroundTabsEnabled());
}

static void timerThrottlingForHiddenFramesEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->timerThrottlingForHiddenFramesEnabled());
}

static void touchEventFeatureDetectionEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->touchEventFeatureDetectionEnabled());
}

static void touchpadAndWheelScrollLatchingEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->touchpadAndWheelScrollLatchingEnabled());
}

static void trackLayoutPassesPerBlockEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->trackLayoutPassesPerBlockEnabled());
}

static void trustedDOMTypesEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->trustedDOMTypesEnabled());
}

static void trustedEventsDefaultActionEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->trustedEventsDefaultActionEnabled());
}

static void unclosedFormControlIsInvalidEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->unclosedFormControlIsInvalidEnabled());
}

static void unifiedTouchAdjustmentEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->unifiedTouchAdjustmentEnabled());
}

static void userActivationV2EnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->userActivationV2Enabled());
}

static void v8ContextSnapshotEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->v8ContextSnapshotEnabled());
}

static void v8IdleTasksEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->v8IdleTasksEnabled());
}

static void videoFullscreenDetectionEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->videoFullscreenDetectionEnabled());
}

static void videoFullscreenOrientationLockEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->videoFullscreenOrientationLockEnabled());
}

static void videoRotateToFullscreenEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->videoRotateToFullscreenEnabled());
}

static void visibilityCollapseColumnEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->visibilityCollapseColumnEnabled());
}

static void visibilityCollapseRowEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->visibilityCollapseRowEnabled());
}

static void visualViewportAPIEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->visualViewportAPIEnabled());
}

static void wakeLockEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->wakeLockEnabled());
}

static void webAnimationsAPIEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->webAnimationsAPIEnabled());
}

static void webAnimationsSVGEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->webAnimationsSVGEnabled());
}

static void webAssemblyStreamingEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->webAssemblyStreamingEnabled());
}

static void webAuthEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->webAuthEnabled());
}

static void webBluetoothEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->webBluetoothEnabled());
}

static void webFontsCacheAwareTimeoutAdaptationEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->webFontsCacheAwareTimeoutAdaptationEnabled());
}

static void webglDraftExtensionsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->webglDraftExtensionsEnabled());
}

static void webglImageChromiumEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->webglImageChromiumEnabled());
}

static void webLocksAPIEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->webLocksAPIEnabled());
}

static void webNFCEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->webNFCEnabled());
}

static void webRtcVaapiHWVP8EncodingEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->webRtcVaapiHWVP8EncodingEnabled());
}

static void webShareEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->webShareEnabled());
}

static void webUSBEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->webUSBEnabled());
}

static void webUSBOnDedicatedAndSharedWorkersEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->webUSBOnDedicatedAndSharedWorkersEnabled());
}

static void webVREnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->webVREnabled());
}

static void webVTTRegionsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->webVTTRegionsEnabled());
}

static void webXREnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->webXREnabled());
}

static void webXRGamepadSupportEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->webXRGamepadSupportEnabled());
}

static void webXRHitTestEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->webXRHitTestEnabled());
}

static void workerNosniffBlockEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->workerNosniffBlockEnabled());
}

static void workerNosniffWarnEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->workerNosniffWarnEnabled());
}

static void workletEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->workletEnabled());
}

static void workStealingInScriptRunnerEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->workStealingInScriptRunnerEnabled());
}

static void xsltEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->xsltEnabled());
}

} // namespace InternalRuntimeFlagsV8Internal

void V8InternalRuntimeFlags::accelerated2dCanvasEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_accelerated2dCanvasEnabled_Getter");

  InternalRuntimeFlagsV8Internal::accelerated2dCanvasEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::accelerated2dCanvasEnabledAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_accelerated2dCanvasEnabled_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  InternalRuntimeFlagsV8Internal::accelerated2dCanvasEnabledAttributeSetter(v8Value, info);
}

void V8InternalRuntimeFlags::accessibilityObjectModelEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_accessibilityObjectModelEnabled_Getter");

  InternalRuntimeFlagsV8Internal::accessibilityObjectModelEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::allowActivationDelegationAttrEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_allowActivationDelegationAttrEnabled_Getter");

  InternalRuntimeFlagsV8Internal::allowActivationDelegationAttrEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::allowContentInitiatedDataUrlNavigationsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_allowContentInitiatedDataUrlNavigationsEnabled_Getter");

  InternalRuntimeFlagsV8Internal::allowContentInitiatedDataUrlNavigationsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::animationWorkletEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_animationWorkletEnabled_Getter");

  InternalRuntimeFlagsV8Internal::animationWorkletEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::asyncClipboardEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_asyncClipboardEnabled_Getter");

  InternalRuntimeFlagsV8Internal::asyncClipboardEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::asyncCookiesEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_asyncCookiesEnabled_Getter");

  InternalRuntimeFlagsV8Internal::asyncCookiesEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::audioOutputDevicesEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_audioOutputDevicesEnabled_Getter");

  InternalRuntimeFlagsV8Internal::audioOutputDevicesEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::audioVideoTracksEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_audioVideoTracksEnabled_Getter");

  InternalRuntimeFlagsV8Internal::audioVideoTracksEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::audioWorkletEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_audioWorkletEnabled_Getter");

  InternalRuntimeFlagsV8Internal::audioWorkletEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::automationControlledEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_automationControlledEnabled_Getter");

  InternalRuntimeFlagsV8Internal::automationControlledEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::automationControlledEnabledAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_automationControlledEnabled_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  InternalRuntimeFlagsV8Internal::automationControlledEnabledAttributeSetter(v8Value, info);
}

void V8InternalRuntimeFlags::autoplayIgnoresWebAudioEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_autoplayIgnoresWebAudioEnabled_Getter");

  InternalRuntimeFlagsV8Internal::autoplayIgnoresWebAudioEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::autoplayMutedVideosEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_autoplayMutedVideosEnabled_Getter");

  InternalRuntimeFlagsV8Internal::autoplayMutedVideosEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::autoplayMutedVideosEnabledAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_autoplayMutedVideosEnabled_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  InternalRuntimeFlagsV8Internal::autoplayMutedVideosEnabledAttributeSetter(v8Value, info);
}

void V8InternalRuntimeFlags::backgroundFetchEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_backgroundFetchEnabled_Getter");

  InternalRuntimeFlagsV8Internal::backgroundFetchEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::backgroundVideoTrackOptimizationEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_backgroundVideoTrackOptimizationEnabled_Getter");

  InternalRuntimeFlagsV8Internal::backgroundVideoTrackOptimizationEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::blinkGenPropertyTreesEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_blinkGenPropertyTreesEnabled_Getter");

  InternalRuntimeFlagsV8Internal::blinkGenPropertyTreesEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::blinkRuntimeCallStatsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_blinkRuntimeCallStatsEnabled_Getter");

  InternalRuntimeFlagsV8Internal::blinkRuntimeCallStatsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::bloatedRendererDetectionEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_bloatedRendererDetectionEnabled_Getter");

  InternalRuntimeFlagsV8Internal::bloatedRendererDetectionEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::blockCredentialedSubresourcesEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_blockCredentialedSubresourcesEnabled_Getter");

  InternalRuntimeFlagsV8Internal::blockCredentialedSubresourcesEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::blockingDownloadsInSandboxEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_blockingDownloadsInSandboxEnabled_Getter");

  InternalRuntimeFlagsV8Internal::blockingDownloadsInSandboxEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::blockMetaSetCookieEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_blockMetaSetCookieEnabled_Getter");

  InternalRuntimeFlagsV8Internal::blockMetaSetCookieEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::budgetEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_budgetEnabled_Getter");

  InternalRuntimeFlagsV8Internal::budgetEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::budgetQueryEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_budgetQueryEnabled_Getter");

  InternalRuntimeFlagsV8Internal::budgetQueryEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::cacheInlineScriptCodeEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_cacheInlineScriptCodeEnabled_Getter");

  InternalRuntimeFlagsV8Internal::cacheInlineScriptCodeEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::cacheStyleSheetWithMediaQueriesEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_cacheStyleSheetWithMediaQueriesEnabled_Getter");

  InternalRuntimeFlagsV8Internal::cacheStyleSheetWithMediaQueriesEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::canvas2dContextLostRestoredEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_canvas2dContextLostRestoredEnabled_Getter");

  InternalRuntimeFlagsV8Internal::canvas2dContextLostRestoredEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::canvas2dFixedRenderingModeEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_canvas2dFixedRenderingModeEnabled_Getter");

  InternalRuntimeFlagsV8Internal::canvas2dFixedRenderingModeEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::canvas2dImageChromiumEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_canvas2dImageChromiumEnabled_Getter");

  InternalRuntimeFlagsV8Internal::canvas2dImageChromiumEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::canvas2dScrollPathIntoViewEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_canvas2dScrollPathIntoViewEnabled_Getter");

  InternalRuntimeFlagsV8Internal::canvas2dScrollPathIntoViewEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::canvasColorManagementEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_canvasColorManagementEnabled_Getter");

  InternalRuntimeFlagsV8Internal::canvasColorManagementEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::canvasHitRegionEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_canvasHitRegionEnabled_Getter");

  InternalRuntimeFlagsV8Internal::canvasHitRegionEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::canvasImageSmoothingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_canvasImageSmoothingEnabled_Getter");

  InternalRuntimeFlagsV8Internal::canvasImageSmoothingEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::clickRetargettingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_clickRetargettingEnabled_Getter");

  InternalRuntimeFlagsV8Internal::clickRetargettingEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::clientHintsPersistentEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_clientHintsPersistentEnabled_Getter");

  InternalRuntimeFlagsV8Internal::clientHintsPersistentEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::clientPlaceholdersForServerLoFiEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_clientPlaceholdersForServerLoFiEnabled_Getter");

  InternalRuntimeFlagsV8Internal::clientPlaceholdersForServerLoFiEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::compositedSelectionUpdateEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_compositedSelectionUpdateEnabled_Getter");

  InternalRuntimeFlagsV8Internal::compositedSelectionUpdateEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::compositeOpaqueFixedPositionEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_compositeOpaqueFixedPositionEnabled_Getter");

  InternalRuntimeFlagsV8Internal::compositeOpaqueFixedPositionEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::compositeOpaqueFixedPositionEnabledAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_compositeOpaqueFixedPositionEnabled_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  InternalRuntimeFlagsV8Internal::compositeOpaqueFixedPositionEnabledAttributeSetter(v8Value, info);
}

void V8InternalRuntimeFlags::compositeOpaqueScrollersEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_compositeOpaqueScrollersEnabled_Getter");

  InternalRuntimeFlagsV8Internal::compositeOpaqueScrollersEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::compositeOpaqueScrollersEnabledAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_compositeOpaqueScrollersEnabled_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  InternalRuntimeFlagsV8Internal::compositeOpaqueScrollersEnabledAttributeSetter(v8Value, info);
}

void V8InternalRuntimeFlags::compositorTouchActionEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_compositorTouchActionEnabled_Getter");

  InternalRuntimeFlagsV8Internal::compositorTouchActionEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::computedAccessibilityInfoEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_computedAccessibilityInfoEnabled_Getter");

  InternalRuntimeFlagsV8Internal::computedAccessibilityInfoEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::conicGradientEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_conicGradientEnabled_Getter");

  InternalRuntimeFlagsV8Internal::conicGradientEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::constructableStylesheetsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_constructableStylesheetsEnabled_Getter");

  InternalRuntimeFlagsV8Internal::constructableStylesheetsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::contextMenuEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_contextMenuEnabled_Getter");

  InternalRuntimeFlagsV8Internal::contextMenuEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::corsRFC1918EnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_corsRFC1918Enabled_Getter");

  InternalRuntimeFlagsV8Internal::corsRFC1918EnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::css3TextEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_css3TextEnabled_Getter");

  InternalRuntimeFlagsV8Internal::css3TextEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::cssAdditiveAnimationsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_cssAdditiveAnimationsEnabled_Getter");

  InternalRuntimeFlagsV8Internal::cssAdditiveAnimationsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::cssBackdropFilterEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_cssBackdropFilterEnabled_Getter");

  InternalRuntimeFlagsV8Internal::cssBackdropFilterEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::cssDisplayContentsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_cssDisplayContentsEnabled_Getter");

  InternalRuntimeFlagsV8Internal::cssDisplayContentsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::cssFocusVisibleEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_cssFocusVisibleEnabled_Getter");

  InternalRuntimeFlagsV8Internal::cssFocusVisibleEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::cssFontSizeAdjustEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_cssFontSizeAdjustEnabled_Getter");

  InternalRuntimeFlagsV8Internal::cssFontSizeAdjustEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::cssHexAlphaColorEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_cssHexAlphaColorEnabled_Getter");

  InternalRuntimeFlagsV8Internal::cssHexAlphaColorEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::cssInBodyDoesNotBlockPaintEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_cssInBodyDoesNotBlockPaintEnabled_Getter");

  InternalRuntimeFlagsV8Internal::cssInBodyDoesNotBlockPaintEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::cssIndependentTransformPropertiesEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_cssIndependentTransformPropertiesEnabled_Getter");

  InternalRuntimeFlagsV8Internal::cssIndependentTransformPropertiesEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::cssLayoutAPIEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_cssLayoutAPIEnabled_Getter");

  InternalRuntimeFlagsV8Internal::cssLayoutAPIEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::cssMaskSourceTypeEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_cssMaskSourceTypeEnabled_Getter");

  InternalRuntimeFlagsV8Internal::cssMaskSourceTypeEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::cssMatchesEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_cssMatchesEnabled_Getter");

  InternalRuntimeFlagsV8Internal::cssMatchesEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::cssOffsetPathRayEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_cssOffsetPathRayEnabled_Getter");

  InternalRuntimeFlagsV8Internal::cssOffsetPathRayEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::cssOffsetPathRayContainEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_cssOffsetPathRayContainEnabled_Getter");

  InternalRuntimeFlagsV8Internal::cssOffsetPathRayContainEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::cssOffsetPositionAnchorEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_cssOffsetPositionAnchorEnabled_Getter");

  InternalRuntimeFlagsV8Internal::cssOffsetPositionAnchorEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::cssomSmoothScrollEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_cssomSmoothScrollEnabled_Getter");

  InternalRuntimeFlagsV8Internal::cssomSmoothScrollEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::cssOverscrollBehaviorEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_cssOverscrollBehaviorEnabled_Getter");

  InternalRuntimeFlagsV8Internal::cssOverscrollBehaviorEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::cssPaintAPIEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_cssPaintAPIEnabled_Getter");

  InternalRuntimeFlagsV8Internal::cssPaintAPIEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::cssPaintAPIArgumentsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_cssPaintAPIArgumentsEnabled_Getter");

  InternalRuntimeFlagsV8Internal::cssPaintAPIArgumentsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::cssPartPseudoElementEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_cssPartPseudoElementEnabled_Getter");

  InternalRuntimeFlagsV8Internal::cssPartPseudoElementEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::cssPseudoISEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_cssPseudoISEnabled_Getter");

  InternalRuntimeFlagsV8Internal::cssPseudoISEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::cssScrollSnapPointsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_cssScrollSnapPointsEnabled_Getter");

  InternalRuntimeFlagsV8Internal::cssScrollSnapPointsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::cssSnapSizeEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_cssSnapSizeEnabled_Getter");

  InternalRuntimeFlagsV8Internal::cssSnapSizeEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::cssTransformBoxEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_cssTransformBoxEnabled_Getter");

  InternalRuntimeFlagsV8Internal::cssTransformBoxEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::cssTypedOMEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_cssTypedOMEnabled_Getter");

  InternalRuntimeFlagsV8Internal::cssTypedOMEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::cssVariables2EnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_cssVariables2Enabled_Getter");

  InternalRuntimeFlagsV8Internal::cssVariables2EnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::cssViewportEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_cssViewportEnabled_Getter");

  InternalRuntimeFlagsV8Internal::cssViewportEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::customElementDefaultStyleEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_customElementDefaultStyleEnabled_Getter");

  InternalRuntimeFlagsV8Internal::customElementDefaultStyleEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::customElementsBuiltinEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_customElementsBuiltinEnabled_Getter");

  InternalRuntimeFlagsV8Internal::customElementsBuiltinEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::customElementsV0EnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_customElementsV0Enabled_Getter");

  InternalRuntimeFlagsV8Internal::customElementsV0EnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::customUserTimingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_customUserTimingEnabled_Getter");

  InternalRuntimeFlagsV8Internal::customUserTimingEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::databaseEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_databaseEnabled_Getter");

  InternalRuntimeFlagsV8Internal::databaseEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::decodeToYUVEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_decodeToYUVEnabled_Getter");

  InternalRuntimeFlagsV8Internal::decodeToYUVEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::deprecationReportingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_deprecationReportingEnabled_Getter");

  InternalRuntimeFlagsV8Internal::deprecationReportingEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::desktopCaptureDisableLocalEchoControlEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_desktopCaptureDisableLocalEchoControlEnabled_Getter");

  InternalRuntimeFlagsV8Internal::desktopCaptureDisableLocalEchoControlEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::deviceMemoryHeaderEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_deviceMemoryHeaderEnabled_Getter");

  InternalRuntimeFlagsV8Internal::deviceMemoryHeaderEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::disableHardwareNoiseSuppressionEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_disableHardwareNoiseSuppressionEnabled_Getter");

  InternalRuntimeFlagsV8Internal::disableHardwareNoiseSuppressionEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::disablePaintChunksToCcLayerEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_disablePaintChunksToCcLayerEnabled_Getter");

  InternalRuntimeFlagsV8Internal::disablePaintChunksToCcLayerEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::disableRasterInvalidationEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_disableRasterInvalidationEnabled_Getter");

  InternalRuntimeFlagsV8Internal::disableRasterInvalidationEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::displayCutoutViewportFitEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_displayCutoutViewportFitEnabled_Getter");

  InternalRuntimeFlagsV8Internal::displayCutoutViewportFitEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::displayCutoutViewportFitEnabledAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_displayCutoutViewportFitEnabled_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  InternalRuntimeFlagsV8Internal::displayCutoutViewportFitEnabledAttributeSetter(v8Value, info);
}

void V8InternalRuntimeFlags::displayNoneIFrameCreatesNoLayoutObjectEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_displayNoneIFrameCreatesNoLayoutObjectEnabled_Getter");

  InternalRuntimeFlagsV8Internal::displayNoneIFrameCreatesNoLayoutObjectEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::documentCookieEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_documentCookieEnabled_Getter");

  InternalRuntimeFlagsV8Internal::documentCookieEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::documentDomainEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_documentDomainEnabled_Getter");

  InternalRuntimeFlagsV8Internal::documentDomainEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::documentWriteEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_documentWriteEnabled_Getter");

  InternalRuntimeFlagsV8Internal::documentWriteEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::embedderCSPEnforcementEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_embedderCSPEnforcementEnabled_Getter");

  InternalRuntimeFlagsV8Internal::embedderCSPEnforcementEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::encryptedMediaHdcpPolicyCheckEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_encryptedMediaHdcpPolicyCheckEnabled_Getter");

  InternalRuntimeFlagsV8Internal::encryptedMediaHdcpPolicyCheckEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::eventTimingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_eventTimingEnabled_Getter");

  InternalRuntimeFlagsV8Internal::eventTimingEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::execCommandInJavaScriptEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_execCommandInJavaScriptEnabled_Getter");

  InternalRuntimeFlagsV8Internal::execCommandInJavaScriptEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::expensiveBackgroundTimerThrottlingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_expensiveBackgroundTimerThrottlingEnabled_Getter");

  InternalRuntimeFlagsV8Internal::expensiveBackgroundTimerThrottlingEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::experimentalContentSecurityPolicyFeaturesEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_experimentalContentSecurityPolicyFeaturesEnabled_Getter");

  InternalRuntimeFlagsV8Internal::experimentalContentSecurityPolicyFeaturesEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::experimentalHardwareEchoCancellationEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_experimentalHardwareEchoCancellationEnabled_Getter");

  InternalRuntimeFlagsV8Internal::experimentalHardwareEchoCancellationEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::experimentalProductivityFeaturesEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_experimentalProductivityFeaturesEnabled_Getter");

  InternalRuntimeFlagsV8Internal::experimentalProductivityFeaturesEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::experimentalV8ExtrasEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_experimentalV8ExtrasEnabled_Getter");

  InternalRuntimeFlagsV8Internal::experimentalV8ExtrasEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::extendedImageBitmapOptionsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_extendedImageBitmapOptionsEnabled_Getter");

  InternalRuntimeFlagsV8Internal::extendedImageBitmapOptionsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::extendedTextMetricsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_extendedTextMetricsEnabled_Getter");

  InternalRuntimeFlagsV8Internal::extendedTextMetricsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::extraWebGLVideoTextureMetadataEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_extraWebGLVideoTextureMetadataEnabled_Getter");

  InternalRuntimeFlagsV8Internal::extraWebGLVideoTextureMetadataEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::fastMobileScrollingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_fastMobileScrollingEnabled_Getter");

  InternalRuntimeFlagsV8Internal::fastMobileScrollingEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::featurePolicyAutoplayFeatureEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_featurePolicyAutoplayFeatureEnabled_Getter");

  InternalRuntimeFlagsV8Internal::featurePolicyAutoplayFeatureEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::featurePolicyExperimentalFeaturesEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_featurePolicyExperimentalFeaturesEnabled_Getter");

  InternalRuntimeFlagsV8Internal::featurePolicyExperimentalFeaturesEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::featurePolicyForPermissionsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_featurePolicyForPermissionsEnabled_Getter");

  InternalRuntimeFlagsV8Internal::featurePolicyForPermissionsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::featurePolicyJavaScriptInterfaceEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_featurePolicyJavaScriptInterfaceEnabled_Getter");

  InternalRuntimeFlagsV8Internal::featurePolicyJavaScriptInterfaceEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::featurePolicyVibrateFeatureEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_featurePolicyVibrateFeatureEnabled_Getter");

  InternalRuntimeFlagsV8Internal::featurePolicyVibrateFeatureEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::fetchRequestCacheEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_fetchRequestCacheEnabled_Getter");

  InternalRuntimeFlagsV8Internal::fetchRequestCacheEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::fetchRequestKeepaliveEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_fetchRequestKeepaliveEnabled_Getter");

  InternalRuntimeFlagsV8Internal::fetchRequestKeepaliveEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::fetchRequestSignalEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_fetchRequestSignalEnabled_Getter");

  InternalRuntimeFlagsV8Internal::fetchRequestSignalEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::fileSystemEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_fileSystemEnabled_Getter");

  InternalRuntimeFlagsV8Internal::fileSystemEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::focusOptionsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_focusOptionsEnabled_Getter");

  InternalRuntimeFlagsV8Internal::focusOptionsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::fontCacheScalingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_fontCacheScalingEnabled_Getter");

  InternalRuntimeFlagsV8Internal::fontCacheScalingEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::forceOverlayFullscreenVideoEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_forceOverlayFullscreenVideoEnabled_Getter");

  InternalRuntimeFlagsV8Internal::forceOverlayFullscreenVideoEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::forceTallerSelectPopupEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_forceTallerSelectPopupEnabled_Getter");

  InternalRuntimeFlagsV8Internal::forceTallerSelectPopupEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::formDataEventEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_formDataEventEnabled_Getter");

  InternalRuntimeFlagsV8Internal::formDataEventEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::fractionalMouseEventEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_fractionalMouseEventEnabled_Getter");

  InternalRuntimeFlagsV8Internal::fractionalMouseEventEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::fractionalMouseTypePointerEventEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_fractionalMouseTypePointerEventEnabled_Getter");

  InternalRuntimeFlagsV8Internal::fractionalMouseTypePointerEventEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::fractionalScrollOffsetsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_fractionalScrollOffsetsEnabled_Getter");

  InternalRuntimeFlagsV8Internal::fractionalScrollOffsetsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::framebustingNeedsSameOriginOrUserGestureEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_framebustingNeedsSameOriginOrUserGestureEnabled_Getter");

  InternalRuntimeFlagsV8Internal::framebustingNeedsSameOriginOrUserGestureEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::framebustingNeedsSameOriginOrUserGestureEnabledAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_framebustingNeedsSameOriginOrUserGestureEnabled_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  InternalRuntimeFlagsV8Internal::framebustingNeedsSameOriginOrUserGestureEnabledAttributeSetter(v8Value, info);
}

void V8InternalRuntimeFlags::framesTimingFunctionEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_framesTimingFunctionEnabled_Getter");

  InternalRuntimeFlagsV8Internal::framesTimingFunctionEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::fullscreenOptionsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_fullscreenOptionsEnabled_Getter");

  InternalRuntimeFlagsV8Internal::fullscreenOptionsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::fullscreenUnprefixedEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_fullscreenUnprefixedEnabled_Getter");

  InternalRuntimeFlagsV8Internal::fullscreenUnprefixedEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::fullscreenUnprefixedEnabledAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_fullscreenUnprefixedEnabled_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  InternalRuntimeFlagsV8Internal::fullscreenUnprefixedEnabledAttributeSetter(v8Value, info);
}

void V8InternalRuntimeFlags::gamepadExtensionsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_gamepadExtensionsEnabled_Getter");

  InternalRuntimeFlagsV8Internal::gamepadExtensionsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::gamepadVibrationEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_gamepadVibrationEnabled_Getter");

  InternalRuntimeFlagsV8Internal::gamepadVibrationEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::heapCompactionEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_heapCompactionEnabled_Getter");

  InternalRuntimeFlagsV8Internal::heapCompactionEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::heapIncrementalMarkingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_heapIncrementalMarkingEnabled_Getter");

  InternalRuntimeFlagsV8Internal::heapIncrementalMarkingEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::heapIncrementalMarkingStressEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_heapIncrementalMarkingStressEnabled_Getter");

  InternalRuntimeFlagsV8Internal::heapIncrementalMarkingStressEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::htmlImportsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_htmlImportsEnabled_Getter");

  InternalRuntimeFlagsV8Internal::htmlImportsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::htmlImportsStyleApplicationEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_htmlImportsStyleApplicationEnabled_Getter");

  InternalRuntimeFlagsV8Internal::htmlImportsStyleApplicationEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::idbObserverEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_idbObserverEnabled_Getter");

  InternalRuntimeFlagsV8Internal::idbObserverEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::idleTimeColdModeSpellCheckingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_idleTimeColdModeSpellCheckingEnabled_Getter");

  InternalRuntimeFlagsV8Internal::idleTimeColdModeSpellCheckingEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::imageDecodingAttributeEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_imageDecodingAttributeEnabled_Getter");

  InternalRuntimeFlagsV8Internal::imageDecodingAttributeEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::imageOrientationEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_imageOrientationEnabled_Getter");

  InternalRuntimeFlagsV8Internal::imageOrientationEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::implicitRootScrollerEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_implicitRootScrollerEnabled_Getter");

  InternalRuntimeFlagsV8Internal::implicitRootScrollerEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::implicitRootScrollerEnabledAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_implicitRootScrollerEnabled_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  InternalRuntimeFlagsV8Internal::implicitRootScrollerEnabledAttributeSetter(v8Value, info);
}

void V8InternalRuntimeFlags::incrementalShadowDOMEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_incrementalShadowDOMEnabled_Getter");

  InternalRuntimeFlagsV8Internal::incrementalShadowDOMEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::inertAttributeEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_inertAttributeEnabled_Getter");

  InternalRuntimeFlagsV8Internal::inertAttributeEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::inputMultipleFieldsUIEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_inputMultipleFieldsUIEnabled_Getter");

  InternalRuntimeFlagsV8Internal::inputMultipleFieldsUIEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::installedAppEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_installedAppEnabled_Getter");

  InternalRuntimeFlagsV8Internal::installedAppEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::intersectionObserverGeometryMapperEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_intersectionObserverGeometryMapperEnabled_Getter");

  InternalRuntimeFlagsV8Internal::intersectionObserverGeometryMapperEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::intersectionObserverV2EnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_intersectionObserverV2Enabled_Getter");

  InternalRuntimeFlagsV8Internal::intersectionObserverV2EnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::jsImageDecodeEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_jsImageDecodeEnabled_Getter");

  InternalRuntimeFlagsV8Internal::jsImageDecodeEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::keyboardLockEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_keyboardLockEnabled_Getter");

  InternalRuntimeFlagsV8Internal::keyboardLockEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::keyboardMapEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_keyboardMapEnabled_Getter");

  InternalRuntimeFlagsV8Internal::keyboardMapEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::langAttributeAwareFormControlUIEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_langAttributeAwareFormControlUIEnabled_Getter");

  InternalRuntimeFlagsV8Internal::langAttributeAwareFormControlUIEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::layeredAPIEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_layeredAPIEnabled_Getter");

  InternalRuntimeFlagsV8Internal::layeredAPIEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::layoutNGEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_layoutNGEnabled_Getter");

  InternalRuntimeFlagsV8Internal::layoutNGEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::layoutNGBlockFragmentationEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_layoutNGBlockFragmentationEnabled_Getter");

  InternalRuntimeFlagsV8Internal::layoutNGBlockFragmentationEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::layoutNGFlexBoxEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_layoutNGFlexBoxEnabled_Getter");

  InternalRuntimeFlagsV8Internal::layoutNGFlexBoxEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::layoutNGFragmentCachingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_layoutNGFragmentCachingEnabled_Getter");

  InternalRuntimeFlagsV8Internal::layoutNGFragmentCachingEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::lazyFrameLoadingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_lazyFrameLoadingEnabled_Getter");

  InternalRuntimeFlagsV8Internal::lazyFrameLoadingEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::lazyInitializeMediaControlsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_lazyInitializeMediaControlsEnabled_Getter");

  InternalRuntimeFlagsV8Internal::lazyInitializeMediaControlsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::lazyParseCSSEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_lazyParseCSSEnabled_Getter");

  InternalRuntimeFlagsV8Internal::lazyParseCSSEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::loadingWithMojoEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_loadingWithMojoEnabled_Getter");

  InternalRuntimeFlagsV8Internal::loadingWithMojoEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::longTaskObserverEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_longTaskObserverEnabled_Getter");

  InternalRuntimeFlagsV8Internal::longTaskObserverEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::longTaskV2EnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_longTaskV2Enabled_Getter");

  InternalRuntimeFlagsV8Internal::longTaskV2EnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::lowLatencyCanvasEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_lowLatencyCanvasEnabled_Getter");

  InternalRuntimeFlagsV8Internal::lowLatencyCanvasEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::mediaCapabilitiesEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_mediaCapabilitiesEnabled_Getter");

  InternalRuntimeFlagsV8Internal::mediaCapabilitiesEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::mediaCapabilitiesEncodingInfoEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_mediaCapabilitiesEncodingInfoEnabled_Getter");

  InternalRuntimeFlagsV8Internal::mediaCapabilitiesEncodingInfoEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::mediaCaptureEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_mediaCaptureEnabled_Getter");

  InternalRuntimeFlagsV8Internal::mediaCaptureEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::mediaCaptureDepthEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_mediaCaptureDepthEnabled_Getter");

  InternalRuntimeFlagsV8Internal::mediaCaptureDepthEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::mediaCaptureDepthVideoKindEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_mediaCaptureDepthVideoKindEnabled_Getter");

  InternalRuntimeFlagsV8Internal::mediaCaptureDepthVideoKindEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::mediaCaptureFromVideoEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_mediaCaptureFromVideoEnabled_Getter");

  InternalRuntimeFlagsV8Internal::mediaCaptureFromVideoEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::mediaCastOverlayButtonEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_mediaCastOverlayButtonEnabled_Getter");

  InternalRuntimeFlagsV8Internal::mediaCastOverlayButtonEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::mediaControlsOverlayPlayButtonEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_mediaControlsOverlayPlayButtonEnabled_Getter");

  InternalRuntimeFlagsV8Internal::mediaControlsOverlayPlayButtonEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::mediaControlsOverlayPlayButtonEnabledAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_mediaControlsOverlayPlayButtonEnabled_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  InternalRuntimeFlagsV8Internal::mediaControlsOverlayPlayButtonEnabledAttributeSetter(v8Value, info);
}

void V8InternalRuntimeFlags::mediaDocumentDownloadButtonEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_mediaDocumentDownloadButtonEnabled_Getter");

  InternalRuntimeFlagsV8Internal::mediaDocumentDownloadButtonEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::mediaEngagementBypassAutoplayPoliciesEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_mediaEngagementBypassAutoplayPoliciesEnabled_Getter");

  InternalRuntimeFlagsV8Internal::mediaEngagementBypassAutoplayPoliciesEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::mediaQueryShapeEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_mediaQueryShapeEnabled_Getter");

  InternalRuntimeFlagsV8Internal::mediaQueryShapeEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::mediaSessionEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_mediaSessionEnabled_Getter");

  InternalRuntimeFlagsV8Internal::mediaSessionEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::mediaSourceExperimentalEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_mediaSourceExperimentalEnabled_Getter");

  InternalRuntimeFlagsV8Internal::mediaSourceExperimentalEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::mediaSourceNewAbortAndDurationEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_mediaSourceNewAbortAndDurationEnabled_Getter");

  InternalRuntimeFlagsV8Internal::mediaSourceNewAbortAndDurationEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::mediaStreamTrackContentHintEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_mediaStreamTrackContentHintEnabled_Getter");

  InternalRuntimeFlagsV8Internal::mediaStreamTrackContentHintEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::middleClickAutoscrollEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_middleClickAutoscrollEnabled_Getter");

  InternalRuntimeFlagsV8Internal::middleClickAutoscrollEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::mobileLayoutThemeEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_mobileLayoutThemeEnabled_Getter");

  InternalRuntimeFlagsV8Internal::mobileLayoutThemeEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::modernMediaControlsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_modernMediaControlsEnabled_Getter");

  InternalRuntimeFlagsV8Internal::modernMediaControlsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::moduleDedicatedWorkerEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_moduleDedicatedWorkerEnabled_Getter");

  InternalRuntimeFlagsV8Internal::moduleDedicatedWorkerEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::modulePreloadEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_modulePreloadEnabled_Getter");

  InternalRuntimeFlagsV8Internal::modulePreloadEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::moduleScriptsDynamicImportEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_moduleScriptsDynamicImportEnabled_Getter");

  InternalRuntimeFlagsV8Internal::moduleScriptsDynamicImportEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::moduleScriptsImportMetaUrlEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_moduleScriptsImportMetaUrlEnabled_Getter");

  InternalRuntimeFlagsV8Internal::moduleScriptsImportMetaUrlEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::mojoBlobURLsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_mojoBlobURLsEnabled_Getter");

  InternalRuntimeFlagsV8Internal::mojoBlobURLsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::mojoJSEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_mojoJSEnabled_Getter");

  InternalRuntimeFlagsV8Internal::mojoJSEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::mojoJSTestEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_mojoJSTestEnabled_Getter");

  InternalRuntimeFlagsV8Internal::mojoJSTestEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::multipleColorStopPositionsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_multipleColorStopPositionsEnabled_Getter");

  InternalRuntimeFlagsV8Internal::multipleColorStopPositionsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::navigatorContentUtilsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_navigatorContentUtilsEnabled_Getter");

  InternalRuntimeFlagsV8Internal::navigatorContentUtilsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::navigatorDeviceMemoryEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_navigatorDeviceMemoryEnabled_Getter");

  InternalRuntimeFlagsV8Internal::navigatorDeviceMemoryEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::netInfoDownlinkEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_netInfoDownlinkEnabled_Getter");

  InternalRuntimeFlagsV8Internal::netInfoDownlinkEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::netInfoDownlinkHeaderEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_netInfoDownlinkHeaderEnabled_Getter");

  InternalRuntimeFlagsV8Internal::netInfoDownlinkHeaderEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::netInfoDownlinkMaxEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_netInfoDownlinkMaxEnabled_Getter");

  InternalRuntimeFlagsV8Internal::netInfoDownlinkMaxEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::netInfoEffectiveTypeEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_netInfoEffectiveTypeEnabled_Getter");

  InternalRuntimeFlagsV8Internal::netInfoEffectiveTypeEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::netInfoEffectiveTypeHeaderEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_netInfoEffectiveTypeHeaderEnabled_Getter");

  InternalRuntimeFlagsV8Internal::netInfoEffectiveTypeHeaderEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::netInfoRttEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_netInfoRttEnabled_Getter");

  InternalRuntimeFlagsV8Internal::netInfoRttEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::netInfoRttHeaderEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_netInfoRttHeaderEnabled_Getter");

  InternalRuntimeFlagsV8Internal::netInfoRttHeaderEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::netInfoSaveDataEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_netInfoSaveDataEnabled_Getter");

  InternalRuntimeFlagsV8Internal::netInfoSaveDataEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::networkServiceEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_networkServiceEnabled_Getter");

  InternalRuntimeFlagsV8Internal::networkServiceEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::newRemotePlaybackPipelineEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_newRemotePlaybackPipelineEnabled_Getter");

  InternalRuntimeFlagsV8Internal::newRemotePlaybackPipelineEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::notificationConstructorEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_notificationConstructorEnabled_Getter");

  InternalRuntimeFlagsV8Internal::notificationConstructorEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::notificationContentImageEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_notificationContentImageEnabled_Getter");

  InternalRuntimeFlagsV8Internal::notificationContentImageEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::notificationInlineRepliesEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_notificationInlineRepliesEnabled_Getter");

  InternalRuntimeFlagsV8Internal::notificationInlineRepliesEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::notificationsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_notificationsEnabled_Getter");

  InternalRuntimeFlagsV8Internal::notificationsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::nullableDocumentDomainEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_nullableDocumentDomainEnabled_Getter");

  InternalRuntimeFlagsV8Internal::nullableDocumentDomainEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::offMainThreadWebSocketEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_offMainThreadWebSocketEnabled_Getter");

  InternalRuntimeFlagsV8Internal::offMainThreadWebSocketEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::offscreenCanvasEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_offscreenCanvasEnabled_Getter");

  InternalRuntimeFlagsV8Internal::offscreenCanvasEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::offscreenCanvasTextEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_offscreenCanvasTextEnabled_Getter");

  InternalRuntimeFlagsV8Internal::offscreenCanvasTextEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::onDeviceChangeEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_onDeviceChangeEnabled_Getter");

  InternalRuntimeFlagsV8Internal::onDeviceChangeEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::orientationEventEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_orientationEventEnabled_Getter");

  InternalRuntimeFlagsV8Internal::orientationEventEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::originManifestEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_originManifestEnabled_Getter");

  InternalRuntimeFlagsV8Internal::originManifestEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::originTrialsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_originTrialsEnabled_Getter");

  InternalRuntimeFlagsV8Internal::originTrialsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::originTrialsSampleAPIEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_originTrialsSampleAPIEnabled_Getter");

  InternalRuntimeFlagsV8Internal::originTrialsSampleAPIEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::originTrialsSampleAPIImpliedEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_originTrialsSampleAPIImpliedEnabled_Getter");

  InternalRuntimeFlagsV8Internal::originTrialsSampleAPIImpliedEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::outOfBlinkCORSEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_outOfBlinkCORSEnabled_Getter");

  InternalRuntimeFlagsV8Internal::outOfBlinkCORSEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::overflowIconsForMediaControlsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_overflowIconsForMediaControlsEnabled_Getter");

  InternalRuntimeFlagsV8Internal::overflowIconsForMediaControlsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::overlayScrollbarsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_overlayScrollbarsEnabled_Getter");

  InternalRuntimeFlagsV8Internal::overlayScrollbarsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::overlayScrollbarsEnabledAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_overlayScrollbarsEnabled_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  InternalRuntimeFlagsV8Internal::overlayScrollbarsEnabledAttributeSetter(v8Value, info);
}

void V8InternalRuntimeFlags::pageLifecycleEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_pageLifecycleEnabled_Getter");

  InternalRuntimeFlagsV8Internal::pageLifecycleEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::pagePopupEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_pagePopupEnabled_Getter");

  InternalRuntimeFlagsV8Internal::pagePopupEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::paintUnderInvalidationCheckingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_paintUnderInvalidationCheckingEnabled_Getter");

  InternalRuntimeFlagsV8Internal::paintUnderInvalidationCheckingEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::paintUnderInvalidationCheckingEnabledAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_paintUnderInvalidationCheckingEnabled_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  InternalRuntimeFlagsV8Internal::paintUnderInvalidationCheckingEnabledAttributeSetter(v8Value, info);
}

void V8InternalRuntimeFlags::partialRasterInvalidationEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_partialRasterInvalidationEnabled_Getter");

  InternalRuntimeFlagsV8Internal::partialRasterInvalidationEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::passiveDocumentEventListenersEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_passiveDocumentEventListenersEnabled_Getter");

  InternalRuntimeFlagsV8Internal::passiveDocumentEventListenersEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::passPaintVisualRectToCompositorEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_passPaintVisualRectToCompositorEnabled_Getter");

  InternalRuntimeFlagsV8Internal::passPaintVisualRectToCompositorEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::paymentAppEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_paymentAppEnabled_Getter");

  InternalRuntimeFlagsV8Internal::paymentAppEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::paymentDetailsModifierDataEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_paymentDetailsModifierDataEnabled_Getter");

  InternalRuntimeFlagsV8Internal::paymentDetailsModifierDataEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::paymentRequestEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_paymentRequestEnabled_Getter");

  InternalRuntimeFlagsV8Internal::paymentRequestEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::paymentRequestBasicCardEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_paymentRequestBasicCardEnabled_Getter");

  InternalRuntimeFlagsV8Internal::paymentRequestBasicCardEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::performanceNavigationTiming2EnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_performanceNavigationTiming2Enabled_Getter");

  InternalRuntimeFlagsV8Internal::performanceNavigationTiming2EnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::performancePaintTimingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_performancePaintTimingEnabled_Getter");

  InternalRuntimeFlagsV8Internal::performancePaintTimingEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::permissionDelegationEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_permissionDelegationEnabled_Getter");

  InternalRuntimeFlagsV8Internal::permissionDelegationEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::permissionsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_permissionsEnabled_Getter");

  InternalRuntimeFlagsV8Internal::permissionsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::permissionsRequestRevokeEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_permissionsRequestRevokeEnabled_Getter");

  InternalRuntimeFlagsV8Internal::permissionsRequestRevokeEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::pictureInPictureEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_pictureInPictureEnabled_Getter");

  InternalRuntimeFlagsV8Internal::pictureInPictureEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::pictureInPictureEnabledAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_pictureInPictureEnabled_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  InternalRuntimeFlagsV8Internal::pictureInPictureEnabledAttributeSetter(v8Value, info);
}

void V8InternalRuntimeFlags::pictureInPictureAPIEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_pictureInPictureAPIEnabled_Getter");

  InternalRuntimeFlagsV8Internal::pictureInPictureAPIEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::preciseMemoryInfoEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_preciseMemoryInfoEnabled_Getter");

  InternalRuntimeFlagsV8Internal::preciseMemoryInfoEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::preferredImageRasterBoundsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_preferredImageRasterBoundsEnabled_Getter");

  InternalRuntimeFlagsV8Internal::preferredImageRasterBoundsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::preferredImageRasterBoundsEnabledAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_preferredImageRasterBoundsEnabled_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  InternalRuntimeFlagsV8Internal::preferredImageRasterBoundsEnabledAttributeSetter(v8Value, info);
}

void V8InternalRuntimeFlags::prefixedVideoFullscreenEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_prefixedVideoFullscreenEnabled_Getter");

  InternalRuntimeFlagsV8Internal::prefixedVideoFullscreenEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::preloadDefaultIsMetadataEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_preloadDefaultIsMetadataEnabled_Getter");

  InternalRuntimeFlagsV8Internal::preloadDefaultIsMetadataEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::preloadImageSrcSetEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_preloadImageSrcSetEnabled_Getter");

  InternalRuntimeFlagsV8Internal::preloadImageSrcSetEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::presentationEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_presentationEnabled_Getter");

  InternalRuntimeFlagsV8Internal::presentationEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::printBrowserEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_printBrowserEnabled_Getter");

  InternalRuntimeFlagsV8Internal::printBrowserEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::priorityHintsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_priorityHintsEnabled_Getter");

  InternalRuntimeFlagsV8Internal::priorityHintsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::pushMessagingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_pushMessagingEnabled_Getter");

  InternalRuntimeFlagsV8Internal::pushMessagingEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::pwaFullCodeCacheEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_pwaFullCodeCacheEnabled_Getter");

  InternalRuntimeFlagsV8Internal::pwaFullCodeCacheEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::rasterInducingScrollEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_rasterInducingScrollEnabled_Getter");

  InternalRuntimeFlagsV8Internal::rasterInducingScrollEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::reducedReferrerGranularityEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_reducedReferrerGranularityEnabled_Getter");

  InternalRuntimeFlagsV8Internal::reducedReferrerGranularityEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::remotePlaybackEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_remotePlaybackEnabled_Getter");

  InternalRuntimeFlagsV8Internal::remotePlaybackEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::remotePlaybackBackendEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_remotePlaybackBackendEnabled_Getter");

  InternalRuntimeFlagsV8Internal::remotePlaybackBackendEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::remotePlaybackBackendEnabledAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_remotePlaybackBackendEnabled_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  InternalRuntimeFlagsV8Internal::remotePlaybackBackendEnabledAttributeSetter(v8Value, info);
}

void V8InternalRuntimeFlags::renderingPipelineThrottlingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_renderingPipelineThrottlingEnabled_Getter");

  InternalRuntimeFlagsV8Internal::renderingPipelineThrottlingEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::renderingPipelineThrottlingLoadingIframesEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_renderingPipelineThrottlingLoadingIframesEnabled_Getter");

  InternalRuntimeFlagsV8Internal::renderingPipelineThrottlingLoadingIframesEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::renderUnicodeControlCharactersEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_renderUnicodeControlCharactersEnabled_Getter");

  InternalRuntimeFlagsV8Internal::renderUnicodeControlCharactersEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::reportingObserverEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_reportingObserverEnabled_Getter");

  InternalRuntimeFlagsV8Internal::reportingObserverEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::requireCSSExtensionForFileEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_requireCSSExtensionForFileEnabled_Getter");

  InternalRuntimeFlagsV8Internal::requireCSSExtensionForFileEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::resizeObserverEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_resizeObserverEnabled_Getter");

  InternalRuntimeFlagsV8Internal::resizeObserverEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::resourceLoadSchedulerEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_resourceLoadSchedulerEnabled_Getter");

  InternalRuntimeFlagsV8Internal::resourceLoadSchedulerEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::restrictAppCacheToSecureContextsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_restrictAppCacheToSecureContextsEnabled_Getter");

  InternalRuntimeFlagsV8Internal::restrictAppCacheToSecureContextsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::restrictCanRequestURLCharacterSetEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_restrictCanRequestURLCharacterSetEnabled_Getter");

  InternalRuntimeFlagsV8Internal::restrictCanRequestURLCharacterSetEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::rootLayerScrollingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_rootLayerScrollingEnabled_Getter");

  InternalRuntimeFlagsV8Internal::rootLayerScrollingEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::rtcPeerConnectionIdEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_rtcPeerConnectionIdEnabled_Getter");

  InternalRuntimeFlagsV8Internal::rtcPeerConnectionIdEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::rtcRtpSenderParametersEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_rtcRtpSenderParametersEnabled_Getter");

  InternalRuntimeFlagsV8Internal::rtcRtpSenderParametersEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::rtcUnifiedPlanEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_rtcUnifiedPlanEnabled_Getter");

  InternalRuntimeFlagsV8Internal::rtcUnifiedPlanEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::rtcUnifiedPlanByDefaultEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_rtcUnifiedPlanByDefaultEnabled_Getter");

  InternalRuntimeFlagsV8Internal::rtcUnifiedPlanByDefaultEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::scriptedSpeechEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_scriptedSpeechEnabled_Getter");

  InternalRuntimeFlagsV8Internal::scriptedSpeechEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::scrollAnchorSerializationEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_scrollAnchorSerializationEnabled_Getter");

  InternalRuntimeFlagsV8Internal::scrollAnchorSerializationEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::scrollCustomizationEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_scrollCustomizationEnabled_Getter");

  InternalRuntimeFlagsV8Internal::scrollCustomizationEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::scrollTopLeftInteropEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_scrollTopLeftInteropEnabled_Getter");

  InternalRuntimeFlagsV8Internal::scrollTopLeftInteropEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::secMetadataEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_secMetadataEnabled_Getter");

  InternalRuntimeFlagsV8Internal::secMetadataEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::sendBeaconThrowForBlobWithNonSimpleTypeEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_sendBeaconThrowForBlobWithNonSimpleTypeEnabled_Getter");

  InternalRuntimeFlagsV8Internal::sendBeaconThrowForBlobWithNonSimpleTypeEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::sendMouseEventsDisabledFormControlsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_sendMouseEventsDisabledFormControlsEnabled_Getter");

  InternalRuntimeFlagsV8Internal::sendMouseEventsDisabledFormControlsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::sensorEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_sensorEnabled_Getter");

  InternalRuntimeFlagsV8Internal::sensorEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::sensorExtraClassesEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_sensorExtraClassesEnabled_Getter");

  InternalRuntimeFlagsV8Internal::sensorExtraClassesEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::serverTimingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_serverTimingEnabled_Getter");

  InternalRuntimeFlagsV8Internal::serverTimingEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::serviceWorkerScriptFullCodeCacheEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_serviceWorkerScriptFullCodeCacheEnabled_Getter");

  InternalRuntimeFlagsV8Internal::serviceWorkerScriptFullCodeCacheEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::serviceWorkerUpdateViaCacheEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_serviceWorkerUpdateViaCacheEnabled_Getter");

  InternalRuntimeFlagsV8Internal::serviceWorkerUpdateViaCacheEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::setRootScrollerEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_setRootScrollerEnabled_Getter");

  InternalRuntimeFlagsV8Internal::setRootScrollerEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::shadowDOMV0EnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_shadowDOMV0Enabled_Getter");

  InternalRuntimeFlagsV8Internal::shadowDOMV0EnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::shadowPiercingDescendantCombinatorEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_shadowPiercingDescendantCombinatorEnabled_Getter");

  InternalRuntimeFlagsV8Internal::shadowPiercingDescendantCombinatorEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::shapeDetectionEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_shapeDetectionEnabled_Getter");

  InternalRuntimeFlagsV8Internal::shapeDetectionEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::sharedArrayBufferEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_sharedArrayBufferEnabled_Getter");

  InternalRuntimeFlagsV8Internal::sharedArrayBufferEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::sharedWorkerEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_sharedWorkerEnabled_Getter");

  InternalRuntimeFlagsV8Internal::sharedWorkerEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::signatureBasedIntegrityEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_signatureBasedIntegrityEnabled_Getter");

  InternalRuntimeFlagsV8Internal::signatureBasedIntegrityEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::slimmingPaintV175EnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_slimmingPaintV175Enabled_Getter");

  InternalRuntimeFlagsV8Internal::slimmingPaintV175EnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::slimmingPaintV2EnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_slimmingPaintV2Enabled_Getter");

  InternalRuntimeFlagsV8Internal::slimmingPaintV2EnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::slotInFlatTreeEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_slotInFlatTreeEnabled_Getter");

  InternalRuntimeFlagsV8Internal::slotInFlatTreeEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::smilEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_smilEnabled_Getter");

  InternalRuntimeFlagsV8Internal::smilEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::smoothScrollJSInterventionEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_smoothScrollJSInterventionEnabled_Getter");

  InternalRuntimeFlagsV8Internal::smoothScrollJSInterventionEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::stableBlinkFeaturesEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_stableBlinkFeaturesEnabled_Getter");

  InternalRuntimeFlagsV8Internal::stableBlinkFeaturesEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::stackedCSSPropertyAnimationsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_stackedCSSPropertyAnimationsEnabled_Getter");

  InternalRuntimeFlagsV8Internal::stackedCSSPropertyAnimationsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::stopInBackgroundEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_stopInBackgroundEnabled_Getter");

  InternalRuntimeFlagsV8Internal::stopInBackgroundEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::stopLoadingInBackgroundEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_stopLoadingInBackgroundEnabled_Getter");

  InternalRuntimeFlagsV8Internal::stopLoadingInBackgroundEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::stopNonTimersInBackgroundEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_stopNonTimersInBackgroundEnabled_Getter");

  InternalRuntimeFlagsV8Internal::stopNonTimersInBackgroundEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::timerThrottlingForBackgroundTabsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_timerThrottlingForBackgroundTabsEnabled_Getter");

  InternalRuntimeFlagsV8Internal::timerThrottlingForBackgroundTabsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::timerThrottlingForHiddenFramesEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_timerThrottlingForHiddenFramesEnabled_Getter");

  InternalRuntimeFlagsV8Internal::timerThrottlingForHiddenFramesEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::touchEventFeatureDetectionEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_touchEventFeatureDetectionEnabled_Getter");

  InternalRuntimeFlagsV8Internal::touchEventFeatureDetectionEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::touchpadAndWheelScrollLatchingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_touchpadAndWheelScrollLatchingEnabled_Getter");

  InternalRuntimeFlagsV8Internal::touchpadAndWheelScrollLatchingEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::trackLayoutPassesPerBlockEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_trackLayoutPassesPerBlockEnabled_Getter");

  InternalRuntimeFlagsV8Internal::trackLayoutPassesPerBlockEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::trustedDOMTypesEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_trustedDOMTypesEnabled_Getter");

  InternalRuntimeFlagsV8Internal::trustedDOMTypesEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::trustedEventsDefaultActionEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_trustedEventsDefaultActionEnabled_Getter");

  InternalRuntimeFlagsV8Internal::trustedEventsDefaultActionEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::unclosedFormControlIsInvalidEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_unclosedFormControlIsInvalidEnabled_Getter");

  InternalRuntimeFlagsV8Internal::unclosedFormControlIsInvalidEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::unifiedTouchAdjustmentEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_unifiedTouchAdjustmentEnabled_Getter");

  InternalRuntimeFlagsV8Internal::unifiedTouchAdjustmentEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::userActivationV2EnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_userActivationV2Enabled_Getter");

  InternalRuntimeFlagsV8Internal::userActivationV2EnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::v8ContextSnapshotEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_v8ContextSnapshotEnabled_Getter");

  InternalRuntimeFlagsV8Internal::v8ContextSnapshotEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::v8IdleTasksEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_v8IdleTasksEnabled_Getter");

  InternalRuntimeFlagsV8Internal::v8IdleTasksEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::videoFullscreenDetectionEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_videoFullscreenDetectionEnabled_Getter");

  InternalRuntimeFlagsV8Internal::videoFullscreenDetectionEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::videoFullscreenOrientationLockEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_videoFullscreenOrientationLockEnabled_Getter");

  InternalRuntimeFlagsV8Internal::videoFullscreenOrientationLockEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::videoRotateToFullscreenEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_videoRotateToFullscreenEnabled_Getter");

  InternalRuntimeFlagsV8Internal::videoRotateToFullscreenEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::visibilityCollapseColumnEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_visibilityCollapseColumnEnabled_Getter");

  InternalRuntimeFlagsV8Internal::visibilityCollapseColumnEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::visibilityCollapseRowEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_visibilityCollapseRowEnabled_Getter");

  InternalRuntimeFlagsV8Internal::visibilityCollapseRowEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::visualViewportAPIEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_visualViewportAPIEnabled_Getter");

  InternalRuntimeFlagsV8Internal::visualViewportAPIEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::wakeLockEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_wakeLockEnabled_Getter");

  InternalRuntimeFlagsV8Internal::wakeLockEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::webAnimationsAPIEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_webAnimationsAPIEnabled_Getter");

  InternalRuntimeFlagsV8Internal::webAnimationsAPIEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::webAnimationsSVGEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_webAnimationsSVGEnabled_Getter");

  InternalRuntimeFlagsV8Internal::webAnimationsSVGEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::webAssemblyStreamingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_webAssemblyStreamingEnabled_Getter");

  InternalRuntimeFlagsV8Internal::webAssemblyStreamingEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::webAuthEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_webAuthEnabled_Getter");

  InternalRuntimeFlagsV8Internal::webAuthEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::webBluetoothEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_webBluetoothEnabled_Getter");

  InternalRuntimeFlagsV8Internal::webBluetoothEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::webFontsCacheAwareTimeoutAdaptationEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_webFontsCacheAwareTimeoutAdaptationEnabled_Getter");

  InternalRuntimeFlagsV8Internal::webFontsCacheAwareTimeoutAdaptationEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::webglDraftExtensionsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_webglDraftExtensionsEnabled_Getter");

  InternalRuntimeFlagsV8Internal::webglDraftExtensionsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::webglImageChromiumEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_webglImageChromiumEnabled_Getter");

  InternalRuntimeFlagsV8Internal::webglImageChromiumEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::webLocksAPIEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_webLocksAPIEnabled_Getter");

  InternalRuntimeFlagsV8Internal::webLocksAPIEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::webNFCEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_webNFCEnabled_Getter");

  InternalRuntimeFlagsV8Internal::webNFCEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::webRtcVaapiHWVP8EncodingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_webRtcVaapiHWVP8EncodingEnabled_Getter");

  InternalRuntimeFlagsV8Internal::webRtcVaapiHWVP8EncodingEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::webShareEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_webShareEnabled_Getter");

  InternalRuntimeFlagsV8Internal::webShareEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::webUSBEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_webUSBEnabled_Getter");

  InternalRuntimeFlagsV8Internal::webUSBEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::webUSBOnDedicatedAndSharedWorkersEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_webUSBOnDedicatedAndSharedWorkersEnabled_Getter");

  InternalRuntimeFlagsV8Internal::webUSBOnDedicatedAndSharedWorkersEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::webVREnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_webVREnabled_Getter");

  InternalRuntimeFlagsV8Internal::webVREnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::webVTTRegionsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_webVTTRegionsEnabled_Getter");

  InternalRuntimeFlagsV8Internal::webVTTRegionsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::webXREnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_webXREnabled_Getter");

  InternalRuntimeFlagsV8Internal::webXREnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::webXRGamepadSupportEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_webXRGamepadSupportEnabled_Getter");

  InternalRuntimeFlagsV8Internal::webXRGamepadSupportEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::webXRHitTestEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_webXRHitTestEnabled_Getter");

  InternalRuntimeFlagsV8Internal::webXRHitTestEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::workerNosniffBlockEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_workerNosniffBlockEnabled_Getter");

  InternalRuntimeFlagsV8Internal::workerNosniffBlockEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::workerNosniffWarnEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_workerNosniffWarnEnabled_Getter");

  InternalRuntimeFlagsV8Internal::workerNosniffWarnEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::workletEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_workletEnabled_Getter");

  InternalRuntimeFlagsV8Internal::workletEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::workStealingInScriptRunnerEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_workStealingInScriptRunnerEnabled_Getter");

  InternalRuntimeFlagsV8Internal::workStealingInScriptRunnerEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::xsltEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_xsltEnabled_Getter");

  InternalRuntimeFlagsV8Internal::xsltEnabledAttributeGetter(info);
}

static const V8DOMConfiguration::AccessorConfiguration V8InternalRuntimeFlagsAccessors[] = {
    { "accelerated2dCanvasEnabled", V8InternalRuntimeFlags::accelerated2dCanvasEnabledAttributeGetterCallback, V8InternalRuntimeFlags::accelerated2dCanvasEnabledAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "accessibilityObjectModelEnabled", V8InternalRuntimeFlags::accessibilityObjectModelEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "allowActivationDelegationAttrEnabled", V8InternalRuntimeFlags::allowActivationDelegationAttrEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "allowContentInitiatedDataUrlNavigationsEnabled", V8InternalRuntimeFlags::allowContentInitiatedDataUrlNavigationsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "animationWorkletEnabled", V8InternalRuntimeFlags::animationWorkletEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "asyncClipboardEnabled", V8InternalRuntimeFlags::asyncClipboardEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "asyncCookiesEnabled", V8InternalRuntimeFlags::asyncCookiesEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "audioOutputDevicesEnabled", V8InternalRuntimeFlags::audioOutputDevicesEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "audioVideoTracksEnabled", V8InternalRuntimeFlags::audioVideoTracksEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "audioWorkletEnabled", V8InternalRuntimeFlags::audioWorkletEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "automationControlledEnabled", V8InternalRuntimeFlags::automationControlledEnabledAttributeGetterCallback, V8InternalRuntimeFlags::automationControlledEnabledAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "autoplayIgnoresWebAudioEnabled", V8InternalRuntimeFlags::autoplayIgnoresWebAudioEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "autoplayMutedVideosEnabled", V8InternalRuntimeFlags::autoplayMutedVideosEnabledAttributeGetterCallback, V8InternalRuntimeFlags::autoplayMutedVideosEnabledAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "backgroundFetchEnabled", V8InternalRuntimeFlags::backgroundFetchEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "backgroundVideoTrackOptimizationEnabled", V8InternalRuntimeFlags::backgroundVideoTrackOptimizationEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "blinkGenPropertyTreesEnabled", V8InternalRuntimeFlags::blinkGenPropertyTreesEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "blinkRuntimeCallStatsEnabled", V8InternalRuntimeFlags::blinkRuntimeCallStatsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "bloatedRendererDetectionEnabled", V8InternalRuntimeFlags::bloatedRendererDetectionEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "blockCredentialedSubresourcesEnabled", V8InternalRuntimeFlags::blockCredentialedSubresourcesEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "blockingDownloadsInSandboxEnabled", V8InternalRuntimeFlags::blockingDownloadsInSandboxEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "blockMetaSetCookieEnabled", V8InternalRuntimeFlags::blockMetaSetCookieEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "budgetEnabled", V8InternalRuntimeFlags::budgetEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "budgetQueryEnabled", V8InternalRuntimeFlags::budgetQueryEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "cacheInlineScriptCodeEnabled", V8InternalRuntimeFlags::cacheInlineScriptCodeEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "cacheStyleSheetWithMediaQueriesEnabled", V8InternalRuntimeFlags::cacheStyleSheetWithMediaQueriesEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "canvas2dContextLostRestoredEnabled", V8InternalRuntimeFlags::canvas2dContextLostRestoredEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "canvas2dFixedRenderingModeEnabled", V8InternalRuntimeFlags::canvas2dFixedRenderingModeEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "canvas2dImageChromiumEnabled", V8InternalRuntimeFlags::canvas2dImageChromiumEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "canvas2dScrollPathIntoViewEnabled", V8InternalRuntimeFlags::canvas2dScrollPathIntoViewEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "canvasColorManagementEnabled", V8InternalRuntimeFlags::canvasColorManagementEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "canvasHitRegionEnabled", V8InternalRuntimeFlags::canvasHitRegionEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "canvasImageSmoothingEnabled", V8InternalRuntimeFlags::canvasImageSmoothingEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "clickRetargettingEnabled", V8InternalRuntimeFlags::clickRetargettingEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "clientHintsPersistentEnabled", V8InternalRuntimeFlags::clientHintsPersistentEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "clientPlaceholdersForServerLoFiEnabled", V8InternalRuntimeFlags::clientPlaceholdersForServerLoFiEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "compositedSelectionUpdateEnabled", V8InternalRuntimeFlags::compositedSelectionUpdateEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "compositeOpaqueFixedPositionEnabled", V8InternalRuntimeFlags::compositeOpaqueFixedPositionEnabledAttributeGetterCallback, V8InternalRuntimeFlags::compositeOpaqueFixedPositionEnabledAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "compositeOpaqueScrollersEnabled", V8InternalRuntimeFlags::compositeOpaqueScrollersEnabledAttributeGetterCallback, V8InternalRuntimeFlags::compositeOpaqueScrollersEnabledAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "compositorTouchActionEnabled", V8InternalRuntimeFlags::compositorTouchActionEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "computedAccessibilityInfoEnabled", V8InternalRuntimeFlags::computedAccessibilityInfoEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "conicGradientEnabled", V8InternalRuntimeFlags::conicGradientEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "constructableStylesheetsEnabled", V8InternalRuntimeFlags::constructableStylesheetsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "contextMenuEnabled", V8InternalRuntimeFlags::contextMenuEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "corsRFC1918Enabled", V8InternalRuntimeFlags::corsRFC1918EnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "css3TextEnabled", V8InternalRuntimeFlags::css3TextEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "cssAdditiveAnimationsEnabled", V8InternalRuntimeFlags::cssAdditiveAnimationsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "cssBackdropFilterEnabled", V8InternalRuntimeFlags::cssBackdropFilterEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "cssDisplayContentsEnabled", V8InternalRuntimeFlags::cssDisplayContentsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "cssFocusVisibleEnabled", V8InternalRuntimeFlags::cssFocusVisibleEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "cssFontSizeAdjustEnabled", V8InternalRuntimeFlags::cssFontSizeAdjustEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "cssHexAlphaColorEnabled", V8InternalRuntimeFlags::cssHexAlphaColorEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "cssInBodyDoesNotBlockPaintEnabled", V8InternalRuntimeFlags::cssInBodyDoesNotBlockPaintEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "cssIndependentTransformPropertiesEnabled", V8InternalRuntimeFlags::cssIndependentTransformPropertiesEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "cssLayoutAPIEnabled", V8InternalRuntimeFlags::cssLayoutAPIEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "cssMaskSourceTypeEnabled", V8InternalRuntimeFlags::cssMaskSourceTypeEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "cssMatchesEnabled", V8InternalRuntimeFlags::cssMatchesEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "cssOffsetPathRayEnabled", V8InternalRuntimeFlags::cssOffsetPathRayEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "cssOffsetPathRayContainEnabled", V8InternalRuntimeFlags::cssOffsetPathRayContainEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "cssOffsetPositionAnchorEnabled", V8InternalRuntimeFlags::cssOffsetPositionAnchorEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "cssomSmoothScrollEnabled", V8InternalRuntimeFlags::cssomSmoothScrollEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "cssOverscrollBehaviorEnabled", V8InternalRuntimeFlags::cssOverscrollBehaviorEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "cssPaintAPIEnabled", V8InternalRuntimeFlags::cssPaintAPIEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "cssPaintAPIArgumentsEnabled", V8InternalRuntimeFlags::cssPaintAPIArgumentsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "cssPartPseudoElementEnabled", V8InternalRuntimeFlags::cssPartPseudoElementEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "cssPseudoISEnabled", V8InternalRuntimeFlags::cssPseudoISEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "cssScrollSnapPointsEnabled", V8InternalRuntimeFlags::cssScrollSnapPointsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "cssSnapSizeEnabled", V8InternalRuntimeFlags::cssSnapSizeEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "cssTransformBoxEnabled", V8InternalRuntimeFlags::cssTransformBoxEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "cssTypedOMEnabled", V8InternalRuntimeFlags::cssTypedOMEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "cssVariables2Enabled", V8InternalRuntimeFlags::cssVariables2EnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "cssViewportEnabled", V8InternalRuntimeFlags::cssViewportEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "customElementDefaultStyleEnabled", V8InternalRuntimeFlags::customElementDefaultStyleEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "customElementsBuiltinEnabled", V8InternalRuntimeFlags::customElementsBuiltinEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "customElementsV0Enabled", V8InternalRuntimeFlags::customElementsV0EnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "customUserTimingEnabled", V8InternalRuntimeFlags::customUserTimingEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "databaseEnabled", V8InternalRuntimeFlags::databaseEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "decodeToYUVEnabled", V8InternalRuntimeFlags::decodeToYUVEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "deprecationReportingEnabled", V8InternalRuntimeFlags::deprecationReportingEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "desktopCaptureDisableLocalEchoControlEnabled", V8InternalRuntimeFlags::desktopCaptureDisableLocalEchoControlEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "deviceMemoryHeaderEnabled", V8InternalRuntimeFlags::deviceMemoryHeaderEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "disableHardwareNoiseSuppressionEnabled", V8InternalRuntimeFlags::disableHardwareNoiseSuppressionEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "disablePaintChunksToCcLayerEnabled", V8InternalRuntimeFlags::disablePaintChunksToCcLayerEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "disableRasterInvalidationEnabled", V8InternalRuntimeFlags::disableRasterInvalidationEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "displayCutoutViewportFitEnabled", V8InternalRuntimeFlags::displayCutoutViewportFitEnabledAttributeGetterCallback, V8InternalRuntimeFlags::displayCutoutViewportFitEnabledAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "displayNoneIFrameCreatesNoLayoutObjectEnabled", V8InternalRuntimeFlags::displayNoneIFrameCreatesNoLayoutObjectEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "documentCookieEnabled", V8InternalRuntimeFlags::documentCookieEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "documentDomainEnabled", V8InternalRuntimeFlags::documentDomainEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "documentWriteEnabled", V8InternalRuntimeFlags::documentWriteEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "embedderCSPEnforcementEnabled", V8InternalRuntimeFlags::embedderCSPEnforcementEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "encryptedMediaHdcpPolicyCheckEnabled", V8InternalRuntimeFlags::encryptedMediaHdcpPolicyCheckEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "eventTimingEnabled", V8InternalRuntimeFlags::eventTimingEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "execCommandInJavaScriptEnabled", V8InternalRuntimeFlags::execCommandInJavaScriptEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "expensiveBackgroundTimerThrottlingEnabled", V8InternalRuntimeFlags::expensiveBackgroundTimerThrottlingEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "experimentalContentSecurityPolicyFeaturesEnabled", V8InternalRuntimeFlags::experimentalContentSecurityPolicyFeaturesEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "experimentalHardwareEchoCancellationEnabled", V8InternalRuntimeFlags::experimentalHardwareEchoCancellationEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "experimentalProductivityFeaturesEnabled", V8InternalRuntimeFlags::experimentalProductivityFeaturesEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "experimentalV8ExtrasEnabled", V8InternalRuntimeFlags::experimentalV8ExtrasEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "extendedImageBitmapOptionsEnabled", V8InternalRuntimeFlags::extendedImageBitmapOptionsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "extendedTextMetricsEnabled", V8InternalRuntimeFlags::extendedTextMetricsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "extraWebGLVideoTextureMetadataEnabled", V8InternalRuntimeFlags::extraWebGLVideoTextureMetadataEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "fastMobileScrollingEnabled", V8InternalRuntimeFlags::fastMobileScrollingEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "featurePolicyAutoplayFeatureEnabled", V8InternalRuntimeFlags::featurePolicyAutoplayFeatureEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "featurePolicyExperimentalFeaturesEnabled", V8InternalRuntimeFlags::featurePolicyExperimentalFeaturesEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "featurePolicyForPermissionsEnabled", V8InternalRuntimeFlags::featurePolicyForPermissionsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "featurePolicyJavaScriptInterfaceEnabled", V8InternalRuntimeFlags::featurePolicyJavaScriptInterfaceEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "featurePolicyVibrateFeatureEnabled", V8InternalRuntimeFlags::featurePolicyVibrateFeatureEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "fetchRequestCacheEnabled", V8InternalRuntimeFlags::fetchRequestCacheEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "fetchRequestKeepaliveEnabled", V8InternalRuntimeFlags::fetchRequestKeepaliveEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "fetchRequestSignalEnabled", V8InternalRuntimeFlags::fetchRequestSignalEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "fileSystemEnabled", V8InternalRuntimeFlags::fileSystemEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "focusOptionsEnabled", V8InternalRuntimeFlags::focusOptionsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "fontCacheScalingEnabled", V8InternalRuntimeFlags::fontCacheScalingEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "forceOverlayFullscreenVideoEnabled", V8InternalRuntimeFlags::forceOverlayFullscreenVideoEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "forceTallerSelectPopupEnabled", V8InternalRuntimeFlags::forceTallerSelectPopupEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "formDataEventEnabled", V8InternalRuntimeFlags::formDataEventEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "fractionalMouseEventEnabled", V8InternalRuntimeFlags::fractionalMouseEventEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "fractionalMouseTypePointerEventEnabled", V8InternalRuntimeFlags::fractionalMouseTypePointerEventEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "fractionalScrollOffsetsEnabled", V8InternalRuntimeFlags::fractionalScrollOffsetsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "framebustingNeedsSameOriginOrUserGestureEnabled", V8InternalRuntimeFlags::framebustingNeedsSameOriginOrUserGestureEnabledAttributeGetterCallback, V8InternalRuntimeFlags::framebustingNeedsSameOriginOrUserGestureEnabledAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "framesTimingFunctionEnabled", V8InternalRuntimeFlags::framesTimingFunctionEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "fullscreenOptionsEnabled", V8InternalRuntimeFlags::fullscreenOptionsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "fullscreenUnprefixedEnabled", V8InternalRuntimeFlags::fullscreenUnprefixedEnabledAttributeGetterCallback, V8InternalRuntimeFlags::fullscreenUnprefixedEnabledAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "gamepadExtensionsEnabled", V8InternalRuntimeFlags::gamepadExtensionsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "gamepadVibrationEnabled", V8InternalRuntimeFlags::gamepadVibrationEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "heapCompactionEnabled", V8InternalRuntimeFlags::heapCompactionEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "heapIncrementalMarkingEnabled", V8InternalRuntimeFlags::heapIncrementalMarkingEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "heapIncrementalMarkingStressEnabled", V8InternalRuntimeFlags::heapIncrementalMarkingStressEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "htmlImportsEnabled", V8InternalRuntimeFlags::htmlImportsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "htmlImportsStyleApplicationEnabled", V8InternalRuntimeFlags::htmlImportsStyleApplicationEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "idbObserverEnabled", V8InternalRuntimeFlags::idbObserverEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "idleTimeColdModeSpellCheckingEnabled", V8InternalRuntimeFlags::idleTimeColdModeSpellCheckingEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "imageDecodingAttributeEnabled", V8InternalRuntimeFlags::imageDecodingAttributeEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "imageOrientationEnabled", V8InternalRuntimeFlags::imageOrientationEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "implicitRootScrollerEnabled", V8InternalRuntimeFlags::implicitRootScrollerEnabledAttributeGetterCallback, V8InternalRuntimeFlags::implicitRootScrollerEnabledAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "incrementalShadowDOMEnabled", V8InternalRuntimeFlags::incrementalShadowDOMEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "inertAttributeEnabled", V8InternalRuntimeFlags::inertAttributeEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "inputMultipleFieldsUIEnabled", V8InternalRuntimeFlags::inputMultipleFieldsUIEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "installedAppEnabled", V8InternalRuntimeFlags::installedAppEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "intersectionObserverGeometryMapperEnabled", V8InternalRuntimeFlags::intersectionObserverGeometryMapperEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "intersectionObserverV2Enabled", V8InternalRuntimeFlags::intersectionObserverV2EnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "jsImageDecodeEnabled", V8InternalRuntimeFlags::jsImageDecodeEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "keyboardLockEnabled", V8InternalRuntimeFlags::keyboardLockEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "keyboardMapEnabled", V8InternalRuntimeFlags::keyboardMapEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "langAttributeAwareFormControlUIEnabled", V8InternalRuntimeFlags::langAttributeAwareFormControlUIEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "layeredAPIEnabled", V8InternalRuntimeFlags::layeredAPIEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "layoutNGEnabled", V8InternalRuntimeFlags::layoutNGEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "layoutNGBlockFragmentationEnabled", V8InternalRuntimeFlags::layoutNGBlockFragmentationEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "layoutNGFlexBoxEnabled", V8InternalRuntimeFlags::layoutNGFlexBoxEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "layoutNGFragmentCachingEnabled", V8InternalRuntimeFlags::layoutNGFragmentCachingEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "lazyFrameLoadingEnabled", V8InternalRuntimeFlags::lazyFrameLoadingEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "lazyInitializeMediaControlsEnabled", V8InternalRuntimeFlags::lazyInitializeMediaControlsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "lazyParseCSSEnabled", V8InternalRuntimeFlags::lazyParseCSSEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "loadingWithMojoEnabled", V8InternalRuntimeFlags::loadingWithMojoEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "longTaskObserverEnabled", V8InternalRuntimeFlags::longTaskObserverEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "longTaskV2Enabled", V8InternalRuntimeFlags::longTaskV2EnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "lowLatencyCanvasEnabled", V8InternalRuntimeFlags::lowLatencyCanvasEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "mediaCapabilitiesEnabled", V8InternalRuntimeFlags::mediaCapabilitiesEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "mediaCapabilitiesEncodingInfoEnabled", V8InternalRuntimeFlags::mediaCapabilitiesEncodingInfoEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "mediaCaptureEnabled", V8InternalRuntimeFlags::mediaCaptureEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "mediaCaptureDepthEnabled", V8InternalRuntimeFlags::mediaCaptureDepthEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "mediaCaptureDepthVideoKindEnabled", V8InternalRuntimeFlags::mediaCaptureDepthVideoKindEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "mediaCaptureFromVideoEnabled", V8InternalRuntimeFlags::mediaCaptureFromVideoEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "mediaCastOverlayButtonEnabled", V8InternalRuntimeFlags::mediaCastOverlayButtonEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "mediaControlsOverlayPlayButtonEnabled", V8InternalRuntimeFlags::mediaControlsOverlayPlayButtonEnabledAttributeGetterCallback, V8InternalRuntimeFlags::mediaControlsOverlayPlayButtonEnabledAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "mediaDocumentDownloadButtonEnabled", V8InternalRuntimeFlags::mediaDocumentDownloadButtonEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "mediaEngagementBypassAutoplayPoliciesEnabled", V8InternalRuntimeFlags::mediaEngagementBypassAutoplayPoliciesEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "mediaQueryShapeEnabled", V8InternalRuntimeFlags::mediaQueryShapeEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "mediaSessionEnabled", V8InternalRuntimeFlags::mediaSessionEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "mediaSourceExperimentalEnabled", V8InternalRuntimeFlags::mediaSourceExperimentalEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "mediaSourceNewAbortAndDurationEnabled", V8InternalRuntimeFlags::mediaSourceNewAbortAndDurationEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "mediaStreamTrackContentHintEnabled", V8InternalRuntimeFlags::mediaStreamTrackContentHintEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "middleClickAutoscrollEnabled", V8InternalRuntimeFlags::middleClickAutoscrollEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "mobileLayoutThemeEnabled", V8InternalRuntimeFlags::mobileLayoutThemeEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "modernMediaControlsEnabled", V8InternalRuntimeFlags::modernMediaControlsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "moduleDedicatedWorkerEnabled", V8InternalRuntimeFlags::moduleDedicatedWorkerEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "modulePreloadEnabled", V8InternalRuntimeFlags::modulePreloadEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "moduleScriptsDynamicImportEnabled", V8InternalRuntimeFlags::moduleScriptsDynamicImportEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "moduleScriptsImportMetaUrlEnabled", V8InternalRuntimeFlags::moduleScriptsImportMetaUrlEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "mojoBlobURLsEnabled", V8InternalRuntimeFlags::mojoBlobURLsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "mojoJSEnabled", V8InternalRuntimeFlags::mojoJSEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "mojoJSTestEnabled", V8InternalRuntimeFlags::mojoJSTestEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "multipleColorStopPositionsEnabled", V8InternalRuntimeFlags::multipleColorStopPositionsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "navigatorContentUtilsEnabled", V8InternalRuntimeFlags::navigatorContentUtilsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "navigatorDeviceMemoryEnabled", V8InternalRuntimeFlags::navigatorDeviceMemoryEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "netInfoDownlinkEnabled", V8InternalRuntimeFlags::netInfoDownlinkEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "netInfoDownlinkHeaderEnabled", V8InternalRuntimeFlags::netInfoDownlinkHeaderEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "netInfoDownlinkMaxEnabled", V8InternalRuntimeFlags::netInfoDownlinkMaxEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "netInfoEffectiveTypeEnabled", V8InternalRuntimeFlags::netInfoEffectiveTypeEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "netInfoEffectiveTypeHeaderEnabled", V8InternalRuntimeFlags::netInfoEffectiveTypeHeaderEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "netInfoRttEnabled", V8InternalRuntimeFlags::netInfoRttEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "netInfoRttHeaderEnabled", V8InternalRuntimeFlags::netInfoRttHeaderEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "netInfoSaveDataEnabled", V8InternalRuntimeFlags::netInfoSaveDataEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "networkServiceEnabled", V8InternalRuntimeFlags::networkServiceEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "newRemotePlaybackPipelineEnabled", V8InternalRuntimeFlags::newRemotePlaybackPipelineEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "notificationConstructorEnabled", V8InternalRuntimeFlags::notificationConstructorEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "notificationContentImageEnabled", V8InternalRuntimeFlags::notificationContentImageEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "notificationInlineRepliesEnabled", V8InternalRuntimeFlags::notificationInlineRepliesEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "notificationsEnabled", V8InternalRuntimeFlags::notificationsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "nullableDocumentDomainEnabled", V8InternalRuntimeFlags::nullableDocumentDomainEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "offMainThreadWebSocketEnabled", V8InternalRuntimeFlags::offMainThreadWebSocketEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "offscreenCanvasEnabled", V8InternalRuntimeFlags::offscreenCanvasEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "offscreenCanvasTextEnabled", V8InternalRuntimeFlags::offscreenCanvasTextEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onDeviceChangeEnabled", V8InternalRuntimeFlags::onDeviceChangeEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "orientationEventEnabled", V8InternalRuntimeFlags::orientationEventEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "originManifestEnabled", V8InternalRuntimeFlags::originManifestEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "originTrialsEnabled", V8InternalRuntimeFlags::originTrialsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "originTrialsSampleAPIEnabled", V8InternalRuntimeFlags::originTrialsSampleAPIEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "originTrialsSampleAPIImpliedEnabled", V8InternalRuntimeFlags::originTrialsSampleAPIImpliedEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "outOfBlinkCORSEnabled", V8InternalRuntimeFlags::outOfBlinkCORSEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "overflowIconsForMediaControlsEnabled", V8InternalRuntimeFlags::overflowIconsForMediaControlsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "overlayScrollbarsEnabled", V8InternalRuntimeFlags::overlayScrollbarsEnabledAttributeGetterCallback, V8InternalRuntimeFlags::overlayScrollbarsEnabledAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "pageLifecycleEnabled", V8InternalRuntimeFlags::pageLifecycleEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "pagePopupEnabled", V8InternalRuntimeFlags::pagePopupEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "paintUnderInvalidationCheckingEnabled", V8InternalRuntimeFlags::paintUnderInvalidationCheckingEnabledAttributeGetterCallback, V8InternalRuntimeFlags::paintUnderInvalidationCheckingEnabledAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "partialRasterInvalidationEnabled", V8InternalRuntimeFlags::partialRasterInvalidationEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "passiveDocumentEventListenersEnabled", V8InternalRuntimeFlags::passiveDocumentEventListenersEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "passPaintVisualRectToCompositorEnabled", V8InternalRuntimeFlags::passPaintVisualRectToCompositorEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "paymentAppEnabled", V8InternalRuntimeFlags::paymentAppEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "paymentDetailsModifierDataEnabled", V8InternalRuntimeFlags::paymentDetailsModifierDataEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "paymentRequestEnabled", V8InternalRuntimeFlags::paymentRequestEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "paymentRequestBasicCardEnabled", V8InternalRuntimeFlags::paymentRequestBasicCardEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "performanceNavigationTiming2Enabled", V8InternalRuntimeFlags::performanceNavigationTiming2EnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "performancePaintTimingEnabled", V8InternalRuntimeFlags::performancePaintTimingEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "permissionDelegationEnabled", V8InternalRuntimeFlags::permissionDelegationEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "permissionsEnabled", V8InternalRuntimeFlags::permissionsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "permissionsRequestRevokeEnabled", V8InternalRuntimeFlags::permissionsRequestRevokeEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "pictureInPictureEnabled", V8InternalRuntimeFlags::pictureInPictureEnabledAttributeGetterCallback, V8InternalRuntimeFlags::pictureInPictureEnabledAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "pictureInPictureAPIEnabled", V8InternalRuntimeFlags::pictureInPictureAPIEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "preciseMemoryInfoEnabled", V8InternalRuntimeFlags::preciseMemoryInfoEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "preferredImageRasterBoundsEnabled", V8InternalRuntimeFlags::preferredImageRasterBoundsEnabledAttributeGetterCallback, V8InternalRuntimeFlags::preferredImageRasterBoundsEnabledAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "prefixedVideoFullscreenEnabled", V8InternalRuntimeFlags::prefixedVideoFullscreenEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "preloadDefaultIsMetadataEnabled", V8InternalRuntimeFlags::preloadDefaultIsMetadataEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "preloadImageSrcSetEnabled", V8InternalRuntimeFlags::preloadImageSrcSetEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "presentationEnabled", V8InternalRuntimeFlags::presentationEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "printBrowserEnabled", V8InternalRuntimeFlags::printBrowserEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "priorityHintsEnabled", V8InternalRuntimeFlags::priorityHintsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "pushMessagingEnabled", V8InternalRuntimeFlags::pushMessagingEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "pwaFullCodeCacheEnabled", V8InternalRuntimeFlags::pwaFullCodeCacheEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "rasterInducingScrollEnabled", V8InternalRuntimeFlags::rasterInducingScrollEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "reducedReferrerGranularityEnabled", V8InternalRuntimeFlags::reducedReferrerGranularityEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "remotePlaybackEnabled", V8InternalRuntimeFlags::remotePlaybackEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "remotePlaybackBackendEnabled", V8InternalRuntimeFlags::remotePlaybackBackendEnabledAttributeGetterCallback, V8InternalRuntimeFlags::remotePlaybackBackendEnabledAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "renderingPipelineThrottlingEnabled", V8InternalRuntimeFlags::renderingPipelineThrottlingEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "renderingPipelineThrottlingLoadingIframesEnabled", V8InternalRuntimeFlags::renderingPipelineThrottlingLoadingIframesEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "renderUnicodeControlCharactersEnabled", V8InternalRuntimeFlags::renderUnicodeControlCharactersEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "reportingObserverEnabled", V8InternalRuntimeFlags::reportingObserverEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "requireCSSExtensionForFileEnabled", V8InternalRuntimeFlags::requireCSSExtensionForFileEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "resizeObserverEnabled", V8InternalRuntimeFlags::resizeObserverEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "resourceLoadSchedulerEnabled", V8InternalRuntimeFlags::resourceLoadSchedulerEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "restrictAppCacheToSecureContextsEnabled", V8InternalRuntimeFlags::restrictAppCacheToSecureContextsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "restrictCanRequestURLCharacterSetEnabled", V8InternalRuntimeFlags::restrictCanRequestURLCharacterSetEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "rootLayerScrollingEnabled", V8InternalRuntimeFlags::rootLayerScrollingEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "rtcPeerConnectionIdEnabled", V8InternalRuntimeFlags::rtcPeerConnectionIdEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "rtcRtpSenderParametersEnabled", V8InternalRuntimeFlags::rtcRtpSenderParametersEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "rtcUnifiedPlanEnabled", V8InternalRuntimeFlags::rtcUnifiedPlanEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "rtcUnifiedPlanByDefaultEnabled", V8InternalRuntimeFlags::rtcUnifiedPlanByDefaultEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "scriptedSpeechEnabled", V8InternalRuntimeFlags::scriptedSpeechEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "scrollAnchorSerializationEnabled", V8InternalRuntimeFlags::scrollAnchorSerializationEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "scrollCustomizationEnabled", V8InternalRuntimeFlags::scrollCustomizationEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "scrollTopLeftInteropEnabled", V8InternalRuntimeFlags::scrollTopLeftInteropEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "secMetadataEnabled", V8InternalRuntimeFlags::secMetadataEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "sendBeaconThrowForBlobWithNonSimpleTypeEnabled", V8InternalRuntimeFlags::sendBeaconThrowForBlobWithNonSimpleTypeEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "sendMouseEventsDisabledFormControlsEnabled", V8InternalRuntimeFlags::sendMouseEventsDisabledFormControlsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "sensorEnabled", V8InternalRuntimeFlags::sensorEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "sensorExtraClassesEnabled", V8InternalRuntimeFlags::sensorExtraClassesEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "serverTimingEnabled", V8InternalRuntimeFlags::serverTimingEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "serviceWorkerScriptFullCodeCacheEnabled", V8InternalRuntimeFlags::serviceWorkerScriptFullCodeCacheEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "serviceWorkerUpdateViaCacheEnabled", V8InternalRuntimeFlags::serviceWorkerUpdateViaCacheEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "setRootScrollerEnabled", V8InternalRuntimeFlags::setRootScrollerEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "shadowDOMV0Enabled", V8InternalRuntimeFlags::shadowDOMV0EnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "shadowPiercingDescendantCombinatorEnabled", V8InternalRuntimeFlags::shadowPiercingDescendantCombinatorEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "shapeDetectionEnabled", V8InternalRuntimeFlags::shapeDetectionEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "sharedArrayBufferEnabled", V8InternalRuntimeFlags::sharedArrayBufferEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "sharedWorkerEnabled", V8InternalRuntimeFlags::sharedWorkerEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "signatureBasedIntegrityEnabled", V8InternalRuntimeFlags::signatureBasedIntegrityEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "slimmingPaintV175Enabled", V8InternalRuntimeFlags::slimmingPaintV175EnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "slimmingPaintV2Enabled", V8InternalRuntimeFlags::slimmingPaintV2EnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "slotInFlatTreeEnabled", V8InternalRuntimeFlags::slotInFlatTreeEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "smilEnabled", V8InternalRuntimeFlags::smilEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "smoothScrollJSInterventionEnabled", V8InternalRuntimeFlags::smoothScrollJSInterventionEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "stableBlinkFeaturesEnabled", V8InternalRuntimeFlags::stableBlinkFeaturesEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "stackedCSSPropertyAnimationsEnabled", V8InternalRuntimeFlags::stackedCSSPropertyAnimationsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "stopInBackgroundEnabled", V8InternalRuntimeFlags::stopInBackgroundEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "stopLoadingInBackgroundEnabled", V8InternalRuntimeFlags::stopLoadingInBackgroundEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "stopNonTimersInBackgroundEnabled", V8InternalRuntimeFlags::stopNonTimersInBackgroundEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "timerThrottlingForBackgroundTabsEnabled", V8InternalRuntimeFlags::timerThrottlingForBackgroundTabsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "timerThrottlingForHiddenFramesEnabled", V8InternalRuntimeFlags::timerThrottlingForHiddenFramesEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "touchEventFeatureDetectionEnabled", V8InternalRuntimeFlags::touchEventFeatureDetectionEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "touchpadAndWheelScrollLatchingEnabled", V8InternalRuntimeFlags::touchpadAndWheelScrollLatchingEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "trackLayoutPassesPerBlockEnabled", V8InternalRuntimeFlags::trackLayoutPassesPerBlockEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "trustedDOMTypesEnabled", V8InternalRuntimeFlags::trustedDOMTypesEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "trustedEventsDefaultActionEnabled", V8InternalRuntimeFlags::trustedEventsDefaultActionEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "unclosedFormControlIsInvalidEnabled", V8InternalRuntimeFlags::unclosedFormControlIsInvalidEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "unifiedTouchAdjustmentEnabled", V8InternalRuntimeFlags::unifiedTouchAdjustmentEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "userActivationV2Enabled", V8InternalRuntimeFlags::userActivationV2EnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "v8ContextSnapshotEnabled", V8InternalRuntimeFlags::v8ContextSnapshotEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "v8IdleTasksEnabled", V8InternalRuntimeFlags::v8IdleTasksEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "videoFullscreenDetectionEnabled", V8InternalRuntimeFlags::videoFullscreenDetectionEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "videoFullscreenOrientationLockEnabled", V8InternalRuntimeFlags::videoFullscreenOrientationLockEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "videoRotateToFullscreenEnabled", V8InternalRuntimeFlags::videoRotateToFullscreenEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "visibilityCollapseColumnEnabled", V8InternalRuntimeFlags::visibilityCollapseColumnEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "visibilityCollapseRowEnabled", V8InternalRuntimeFlags::visibilityCollapseRowEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "visualViewportAPIEnabled", V8InternalRuntimeFlags::visualViewportAPIEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "wakeLockEnabled", V8InternalRuntimeFlags::wakeLockEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "webAnimationsAPIEnabled", V8InternalRuntimeFlags::webAnimationsAPIEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "webAnimationsSVGEnabled", V8InternalRuntimeFlags::webAnimationsSVGEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "webAssemblyStreamingEnabled", V8InternalRuntimeFlags::webAssemblyStreamingEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "webAuthEnabled", V8InternalRuntimeFlags::webAuthEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "webBluetoothEnabled", V8InternalRuntimeFlags::webBluetoothEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "webFontsCacheAwareTimeoutAdaptationEnabled", V8InternalRuntimeFlags::webFontsCacheAwareTimeoutAdaptationEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "webglDraftExtensionsEnabled", V8InternalRuntimeFlags::webglDraftExtensionsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "webglImageChromiumEnabled", V8InternalRuntimeFlags::webglImageChromiumEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "webLocksAPIEnabled", V8InternalRuntimeFlags::webLocksAPIEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "webNFCEnabled", V8InternalRuntimeFlags::webNFCEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "webRtcVaapiHWVP8EncodingEnabled", V8InternalRuntimeFlags::webRtcVaapiHWVP8EncodingEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "webShareEnabled", V8InternalRuntimeFlags::webShareEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "webUSBEnabled", V8InternalRuntimeFlags::webUSBEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "webUSBOnDedicatedAndSharedWorkersEnabled", V8InternalRuntimeFlags::webUSBOnDedicatedAndSharedWorkersEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "webVREnabled", V8InternalRuntimeFlags::webVREnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "webVTTRegionsEnabled", V8InternalRuntimeFlags::webVTTRegionsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "webXREnabled", V8InternalRuntimeFlags::webXREnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "webXRGamepadSupportEnabled", V8InternalRuntimeFlags::webXRGamepadSupportEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "webXRHitTestEnabled", V8InternalRuntimeFlags::webXRHitTestEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "workerNosniffBlockEnabled", V8InternalRuntimeFlags::workerNosniffBlockEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "workerNosniffWarnEnabled", V8InternalRuntimeFlags::workerNosniffWarnEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "workletEnabled", V8InternalRuntimeFlags::workletEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "workStealingInScriptRunnerEnabled", V8InternalRuntimeFlags::workStealingInScriptRunnerEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "xsltEnabled", V8InternalRuntimeFlags::xsltEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
};

static void installV8InternalRuntimeFlagsTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8InternalRuntimeFlags::wrapperTypeInfo.interface_name, v8::Local<v8::FunctionTemplate>(), V8InternalRuntimeFlags::internalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8InternalRuntimeFlagsAccessors, arraysize(V8InternalRuntimeFlagsAccessors));

  // Custom signature

  V8InternalRuntimeFlags::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8InternalRuntimeFlags::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8InternalRuntimeFlags::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8InternalRuntimeFlagsTemplate);
}

bool V8InternalRuntimeFlags::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8InternalRuntimeFlags::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

InternalRuntimeFlags* V8InternalRuntimeFlags::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

InternalRuntimeFlags* NativeValueTraits<InternalRuntimeFlags>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  InternalRuntimeFlags* nativeValue = V8InternalRuntimeFlags::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "InternalRuntimeFlags"));
  }
  return nativeValue;
}

}  // namespace blink
