// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef V8InternalSettingsGenerated_h
#define V8InternalSettingsGenerated_h

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/core/testing/internal_settings_generated.h"
#include "third_party/blink/renderer/platform/bindings/script_wrappable.h"
#include "third_party/blink/renderer/platform/bindings/v8_dom_wrapper.h"
#include "third_party/blink/renderer/platform/bindings/wrapper_type_info.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class V8InternalSettingsGenerated {
  STATIC_ONLY(V8InternalSettingsGenerated);
 public:
  static bool hasInstance(v8::Local<v8::Value>, v8::Isolate*);
  static v8::Local<v8::Object> findInstanceInPrototypeChain(v8::Local<v8::Value>, v8::Isolate*);
  static v8::Local<v8::FunctionTemplate> domTemplate(v8::Isolate*, const DOMWrapperWorld&);
  static InternalSettingsGenerated* ToImpl(v8::Local<v8::Object> object) {
    return ToScriptWrappable(object)->ToImpl<InternalSettingsGenerated>();
  }
  static InternalSettingsGenerated* ToImplWithTypeCheck(v8::Isolate*, v8::Local<v8::Value>);
  static const WrapperTypeInfo wrapperTypeInfo;
  static const int internalFieldCount = kV8DefaultWrapperInternalFieldCount;

  // Callback functions

  static void setDOMPasteAllowedMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setAccelerated2dCanvasMSAASampleCountMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setAcceleratedCompositingEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setAccessibilityEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setAccessibilityFontScaleFactorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setAccessibilityPasswordValuesEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setAllowCustomScrollbarInMainFrameMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setAllowFileAccessFromFileURLsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setAllowGeolocationOnInsecureOriginsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setAllowRunningOfInsecureContentMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setAllowScriptsToCloseWindowsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setAllowUniversalAccessFromFileURLsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setAlwaysShowContextMenuOnTouchMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setAntialiased2dCanvasEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setAntialiasedClips2dCanvasEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setAvailableHoverTypesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setAvailablePointerTypesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setBarrelButtonForDragEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setCookieEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setCSSExternalScannerNoPreloadMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setCSSExternalScannerPreloadMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setDataSaverHoldbackMediaApiMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setDataSaverHoldbackWebApiMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setDefaultFixedFontSizeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setDefaultFontSizeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setDefaultTextEncodingNameMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setDefaultVideoPosterURLMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setDeviceScaleAdjustmentMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setDeviceSupportsTouchMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setDisableReadingFromCanvasMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setDisallowFetchForDocWrittenScriptsInMainFrameMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setDisallowFetchForDocWrittenScriptsInMainFrameIfEffectively2GMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setDisallowFetchForDocWrittenScriptsInMainFrameOnSlowConnectionsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setDNSPrefetchingEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setDoHtmlPreloadScanningMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setDoNotUpdateSelectionOnMutatingSelectionRangeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setDownloadableBinaryFontsEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setEmbeddedMediaExperienceEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setFetchImagePlaceholdersMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setForceAndroidOverlayScrollbarMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setForceMainWorldInitializationMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setForcePreloadNoneForMediaElementsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setForceTouchEventFeatureDetectionForInspectorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setForceZeroLayoutHeightMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setFullscreenSupportedMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setHideDownloadUIMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setHideScrollbarsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setHighContrastContrastMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setHighContrastGrayscaleMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setHistoryEntryRequiresUserGestureMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setHyperlinkAuditingEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setIgnoreMainFrameOverflowHiddenQuirkMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setImagesEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setImmersiveModeEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setInlineTextBoxAccessibilityEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setJavaScriptCanAccessClipboardMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setLoadWithOverviewModeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setLoadsImagesAutomaticallyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setLocalStorageEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setLogDnsPrefetchAndPreconnectMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setLogPreloadMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setMainFrameClipsContentMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setMainFrameResizesAreOrientationChangesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setMaxTouchPointsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setMediaControlsEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setMediaDownloadInProductHelpEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setMediaPlaybackGestureWhitelistScopeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setMediaTypeOverrideMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setMinimumAccelerated2dCanvasSizeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setMinimumFontSizeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setMinimumLogicalFontSizeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setMockGestureTapHighlightsEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setMultiTargetTapNotificationEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setNavigateOnDragDropMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setNavigatorPlatformOverrideMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setOfflineWebApplicationCacheEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setPasswordEchoDurationInSecondsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setPasswordEchoEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setPictureInPictureEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setPluginsEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setPreferCompositingToLCDTextEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setPreferHiddenVolumeControlsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setPresentationReceiverMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setPresentationRequiresUserGestureMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setReportScreenSizeInPhysicalPixelsQuirkMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setRubberBandingOnCompositorThreadMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setScriptEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setScrollAnimatorEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setSelectTrailingWhitespaceEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setSelectionIncludesAltImageTextMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setShouldClearDocumentBackgroundMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setShouldPrintBackgroundsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setShouldRespectImageOrientationMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setShouldReuseGlobalForUnownedMainFrameMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setShouldThrottlePushStateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setShowContextMenuOnMouseUpMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setSmartInsertDeleteEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setSmoothScrollForFindEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setSpatialNavigationEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setSpellCheckEnabledByDefaultMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setStrictMixedContentCheckingMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setStrictMixedContentCheckingForPluginMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setStrictPowerfulFeatureRestrictionsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setStrictlyBlockBlockableMixedContentMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setSupportsMultipleWindowsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setSyncXHRInDocumentsEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setTextAreasAreResizableMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setTextTrackBackgroundColorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setTextTrackFontFamilyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setTextTrackFontStyleMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setTextTrackFontVariantMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setTextTrackMarginPercentageMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setTextTrackTextColorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setTextTrackTextShadowMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setTextTrackTextSizeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setThreadedScrollingEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setTouchAdjustmentEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setTouchDragDropEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setTouchEditingEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setUseLegacyBackgroundSizeShorthandBehaviorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setUseSolidColorScrollbarsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setUseWideViewportMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setValidationMessageTimerMagnificationMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setViewportEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setViewportMetaEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setViewportMetaMergeContentQuirkMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setViewportMetaZeroValuesQuirkMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setWebGL1EnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setWebGL2EnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setWebGLErrorsToConsoleEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setWebSecurityEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setWideViewportQuirkEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setXSSAuditorEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);

  static void InstallRuntimeEnabledFeaturesOnTemplate(
      v8::Isolate*,
      const DOMWrapperWorld&,
      v8::Local<v8::FunctionTemplate> interface_template);
};

template <>
struct NativeValueTraits<InternalSettingsGenerated> : public NativeValueTraitsBase<InternalSettingsGenerated> {
  static InternalSettingsGenerated* NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  static InternalSettingsGenerated* NullValue() { return nullptr; }
};

template <>
struct V8TypeOf<InternalSettingsGenerated> {
  typedef V8InternalSettingsGenerated Type;
};

}  // namespace blink

#endif  // V8InternalSettingsGenerated_h
