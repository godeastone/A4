// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef V8InternalRuntimeFlags_h
#define V8InternalRuntimeFlags_h

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/core/testing/internal_runtime_flags.h"
#include "third_party/blink/renderer/platform/bindings/script_wrappable.h"
#include "third_party/blink/renderer/platform/bindings/v8_dom_wrapper.h"
#include "third_party/blink/renderer/platform/bindings/wrapper_type_info.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class V8InternalRuntimeFlags {
  STATIC_ONLY(V8InternalRuntimeFlags);
 public:
  static bool hasInstance(v8::Local<v8::Value>, v8::Isolate*);
  static v8::Local<v8::Object> findInstanceInPrototypeChain(v8::Local<v8::Value>, v8::Isolate*);
  static v8::Local<v8::FunctionTemplate> domTemplate(v8::Isolate*, const DOMWrapperWorld&);
  static InternalRuntimeFlags* ToImpl(v8::Local<v8::Object> object) {
    return ToScriptWrappable(object)->ToImpl<InternalRuntimeFlags>();
  }
  static InternalRuntimeFlags* ToImplWithTypeCheck(v8::Isolate*, v8::Local<v8::Value>);
  static const WrapperTypeInfo wrapperTypeInfo;
  static const int internalFieldCount = kV8DefaultWrapperInternalFieldCount;

  // Callback functions

  static void accelerated2dCanvasEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void accelerated2dCanvasEnabledAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void accessibilityObjectModelEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void allowActivationDelegationAttrEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void allowContentInitiatedDataUrlNavigationsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void animationWorkletEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void asyncClipboardEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void asyncCookiesEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void audioOutputDevicesEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void audioVideoTracksEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void audioWorkletEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void automationControlledEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void automationControlledEnabledAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void autoplayIgnoresWebAudioEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void autoplayMutedVideosEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void autoplayMutedVideosEnabledAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void backgroundFetchEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void backgroundVideoTrackOptimizationEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void blinkGenPropertyTreesEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void blinkRuntimeCallStatsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void bloatedRendererDetectionEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void blockCredentialedSubresourcesEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void blockingDownloadsInSandboxEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void blockMetaSetCookieEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void budgetEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void budgetQueryEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void cacheInlineScriptCodeEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void cacheStyleSheetWithMediaQueriesEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void canvas2dContextLostRestoredEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void canvas2dFixedRenderingModeEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void canvas2dImageChromiumEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void canvas2dScrollPathIntoViewEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void canvasColorManagementEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void canvasHitRegionEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void canvasImageSmoothingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void clickRetargettingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void clientHintsPersistentEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void clientPlaceholdersForServerLoFiEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void compositedSelectionUpdateEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void compositeOpaqueFixedPositionEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void compositeOpaqueFixedPositionEnabledAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void compositeOpaqueScrollersEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void compositeOpaqueScrollersEnabledAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void compositorTouchActionEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void computedAccessibilityInfoEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void conicGradientEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void constructableStylesheetsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void contextMenuEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void corsRFC1918EnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void css3TextEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void cssAdditiveAnimationsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void cssBackdropFilterEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void cssDisplayContentsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void cssFocusVisibleEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void cssFontSizeAdjustEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void cssHexAlphaColorEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void cssInBodyDoesNotBlockPaintEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void cssIndependentTransformPropertiesEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void cssLayoutAPIEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void cssMaskSourceTypeEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void cssMatchesEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void cssOffsetPathRayEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void cssOffsetPathRayContainEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void cssOffsetPositionAnchorEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void cssomSmoothScrollEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void cssOverscrollBehaviorEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void cssPaintAPIEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void cssPaintAPIArgumentsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void cssPartPseudoElementEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void cssPseudoISEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void cssScrollSnapPointsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void cssSnapSizeEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void cssTransformBoxEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void cssTypedOMEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void cssVariables2EnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void cssViewportEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void customElementDefaultStyleEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void customElementsBuiltinEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void customElementsV0EnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void customUserTimingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void databaseEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void decodeToYUVEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void deprecationReportingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void desktopCaptureDisableLocalEchoControlEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void deviceMemoryHeaderEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void disableHardwareNoiseSuppressionEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void disablePaintChunksToCcLayerEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void disableRasterInvalidationEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void displayCutoutViewportFitEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void displayCutoutViewportFitEnabledAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void displayNoneIFrameCreatesNoLayoutObjectEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void documentCookieEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void documentDomainEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void documentWriteEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void embedderCSPEnforcementEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void encryptedMediaHdcpPolicyCheckEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void eventTimingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void execCommandInJavaScriptEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void expensiveBackgroundTimerThrottlingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void experimentalContentSecurityPolicyFeaturesEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void experimentalHardwareEchoCancellationEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void experimentalProductivityFeaturesEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void experimentalV8ExtrasEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void extendedImageBitmapOptionsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void extendedTextMetricsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void extraWebGLVideoTextureMetadataEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void fastMobileScrollingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void featurePolicyAutoplayFeatureEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void featurePolicyExperimentalFeaturesEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void featurePolicyForPermissionsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void featurePolicyJavaScriptInterfaceEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void featurePolicyVibrateFeatureEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void fetchRequestCacheEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void fetchRequestKeepaliveEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void fetchRequestSignalEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void fileSystemEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void focusOptionsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void fontCacheScalingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void forceOverlayFullscreenVideoEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void forceTallerSelectPopupEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void formDataEventEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void fractionalMouseEventEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void fractionalMouseTypePointerEventEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void fractionalScrollOffsetsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void framebustingNeedsSameOriginOrUserGestureEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void framebustingNeedsSameOriginOrUserGestureEnabledAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void framesTimingFunctionEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void fullscreenOptionsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void fullscreenUnprefixedEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void fullscreenUnprefixedEnabledAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void gamepadExtensionsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void gamepadVibrationEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void heapCompactionEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void heapIncrementalMarkingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void heapIncrementalMarkingStressEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void htmlImportsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void htmlImportsStyleApplicationEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void idbObserverEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void idleTimeColdModeSpellCheckingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void imageDecodingAttributeEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void imageOrientationEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void implicitRootScrollerEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void implicitRootScrollerEnabledAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void incrementalShadowDOMEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void inertAttributeEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void inputMultipleFieldsUIEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void installedAppEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void intersectionObserverGeometryMapperEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void intersectionObserverV2EnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void jsImageDecodeEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void keyboardLockEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void keyboardMapEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void langAttributeAwareFormControlUIEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void layeredAPIEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void layoutNGEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void layoutNGBlockFragmentationEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void layoutNGFlexBoxEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void layoutNGFragmentCachingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void lazyFrameLoadingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void lazyInitializeMediaControlsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void lazyParseCSSEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void loadingWithMojoEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void longTaskObserverEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void longTaskV2EnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void lowLatencyCanvasEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void mediaCapabilitiesEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void mediaCapabilitiesEncodingInfoEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void mediaCaptureEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void mediaCaptureDepthEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void mediaCaptureDepthVideoKindEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void mediaCaptureFromVideoEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void mediaCastOverlayButtonEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void mediaControlsOverlayPlayButtonEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void mediaControlsOverlayPlayButtonEnabledAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void mediaDocumentDownloadButtonEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void mediaEngagementBypassAutoplayPoliciesEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void mediaQueryShapeEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void mediaSessionEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void mediaSourceExperimentalEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void mediaSourceNewAbortAndDurationEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void mediaStreamTrackContentHintEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void middleClickAutoscrollEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void mobileLayoutThemeEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void modernMediaControlsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void moduleDedicatedWorkerEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void modulePreloadEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void moduleScriptsDynamicImportEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void moduleScriptsImportMetaUrlEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void mojoBlobURLsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void mojoJSEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void mojoJSTestEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void multipleColorStopPositionsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void navigatorContentUtilsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void navigatorDeviceMemoryEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void netInfoDownlinkEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void netInfoDownlinkHeaderEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void netInfoDownlinkMaxEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void netInfoEffectiveTypeEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void netInfoEffectiveTypeHeaderEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void netInfoRttEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void netInfoRttHeaderEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void netInfoSaveDataEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void networkServiceEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void newRemotePlaybackPipelineEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void notificationConstructorEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void notificationContentImageEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void notificationInlineRepliesEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void notificationsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void nullableDocumentDomainEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void offMainThreadWebSocketEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void offscreenCanvasEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void offscreenCanvasTextEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void onDeviceChangeEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void orientationEventEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void originManifestEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void originTrialsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void originTrialsSampleAPIEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void originTrialsSampleAPIImpliedEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void outOfBlinkCORSEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void overflowIconsForMediaControlsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void overlayScrollbarsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void overlayScrollbarsEnabledAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void pageLifecycleEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void pagePopupEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void paintUnderInvalidationCheckingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void paintUnderInvalidationCheckingEnabledAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void partialRasterInvalidationEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void passiveDocumentEventListenersEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void passPaintVisualRectToCompositorEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void paymentAppEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void paymentDetailsModifierDataEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void paymentRequestEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void paymentRequestBasicCardEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void performanceNavigationTiming2EnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void performancePaintTimingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void permissionDelegationEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void permissionsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void permissionsRequestRevokeEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void pictureInPictureEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void pictureInPictureEnabledAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void pictureInPictureAPIEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void preciseMemoryInfoEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void preferredImageRasterBoundsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void preferredImageRasterBoundsEnabledAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void prefixedVideoFullscreenEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void preloadDefaultIsMetadataEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void preloadImageSrcSetEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void presentationEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void printBrowserEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void priorityHintsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void pushMessagingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void pwaFullCodeCacheEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void rasterInducingScrollEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void reducedReferrerGranularityEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void remotePlaybackEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void remotePlaybackBackendEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void remotePlaybackBackendEnabledAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void renderingPipelineThrottlingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void renderingPipelineThrottlingLoadingIframesEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void renderUnicodeControlCharactersEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void reportingObserverEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void requireCSSExtensionForFileEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void resizeObserverEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void resourceLoadSchedulerEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void restrictAppCacheToSecureContextsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void restrictCanRequestURLCharacterSetEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void rootLayerScrollingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void rtcPeerConnectionIdEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void rtcRtpSenderParametersEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void rtcUnifiedPlanEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void rtcUnifiedPlanByDefaultEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void scriptedSpeechEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void scrollAnchorSerializationEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void scrollCustomizationEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void scrollTopLeftInteropEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void secMetadataEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void sendBeaconThrowForBlobWithNonSimpleTypeEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void sendMouseEventsDisabledFormControlsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void sensorEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void sensorExtraClassesEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void serverTimingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void serviceWorkerScriptFullCodeCacheEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void serviceWorkerUpdateViaCacheEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setRootScrollerEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void shadowDOMV0EnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void shadowPiercingDescendantCombinatorEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void shapeDetectionEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void sharedArrayBufferEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void sharedWorkerEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void signatureBasedIntegrityEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void slimmingPaintV175EnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void slimmingPaintV2EnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void slotInFlatTreeEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void smilEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void smoothScrollJSInterventionEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void stableBlinkFeaturesEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void stackedCSSPropertyAnimationsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void stopInBackgroundEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void stopLoadingInBackgroundEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void stopNonTimersInBackgroundEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void timerThrottlingForBackgroundTabsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void timerThrottlingForHiddenFramesEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void touchEventFeatureDetectionEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void touchpadAndWheelScrollLatchingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void trackLayoutPassesPerBlockEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void trustedDOMTypesEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void trustedEventsDefaultActionEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void unclosedFormControlIsInvalidEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void unifiedTouchAdjustmentEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void userActivationV2EnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void v8ContextSnapshotEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void v8IdleTasksEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void videoFullscreenDetectionEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void videoFullscreenOrientationLockEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void videoRotateToFullscreenEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void visibilityCollapseColumnEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void visibilityCollapseRowEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void visualViewportAPIEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void wakeLockEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void webAnimationsAPIEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void webAnimationsSVGEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void webAssemblyStreamingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void webAuthEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void webBluetoothEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void webFontsCacheAwareTimeoutAdaptationEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void webglDraftExtensionsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void webglImageChromiumEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void webLocksAPIEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void webNFCEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void webRtcVaapiHWVP8EncodingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void webShareEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void webUSBEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void webUSBOnDedicatedAndSharedWorkersEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void webVREnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void webVTTRegionsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void webXREnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void webXRGamepadSupportEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void webXRHitTestEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void workerNosniffBlockEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void workerNosniffWarnEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void workletEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void workStealingInScriptRunnerEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void xsltEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);

  static void InstallRuntimeEnabledFeaturesOnTemplate(
      v8::Isolate*,
      const DOMWrapperWorld&,
      v8::Local<v8::FunctionTemplate> interface_template);
};

template <>
struct NativeValueTraits<InternalRuntimeFlags> : public NativeValueTraitsBase<InternalRuntimeFlags> {
  static InternalRuntimeFlags* NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  static InternalRuntimeFlags* NullValue() { return nullptr; }
};

template <>
struct V8TypeOf<InternalRuntimeFlags> {
  typedef V8InternalRuntimeFlags Type;
};

}  // namespace blink

#endif  // V8InternalRuntimeFlags_h
