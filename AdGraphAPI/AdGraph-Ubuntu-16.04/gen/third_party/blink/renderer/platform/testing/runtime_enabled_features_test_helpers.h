// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/runtime_enabled_features_test_helpers.h.tmpl
// and input files:
//   ../../third_party/blink/renderer/platform/runtime_enabled_features.json5


#ifndef BLINK_PLATFORM_TESTING_RUNTIME_ENABLED_FEATURES_TEST_HELPERS_H_
#define BLINK_PLATFORM_TESTING_RUNTIME_ENABLED_FEATURES_TEST_HELPERS_H_

#include "third_party/blink/renderer/platform/runtime_enabled_features.h"
#include "third_party/blink/renderer/platform/wtf/assertions.h"

namespace blink {

template <bool (&getter)(), void (&setter)(bool)>
class ScopedRuntimeEnabledFeatureForTest {
 public:
  ScopedRuntimeEnabledFeatureForTest(bool enabled)
      : enabled_(enabled), original_(getter()) {
    setter(enabled);
  }

  ~ScopedRuntimeEnabledFeatureForTest() {
    CHECK_EQ(enabled_, getter());
    setter(original_);
  }

 private:
  bool enabled_;
  bool original_;
};

typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::Accelerated2dCanvasEnabled,
    RuntimeEnabledFeatures::SetAccelerated2dCanvasEnabled>
    ScopedAccelerated2dCanvasForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::AccessibilityObjectModelEnabled,
    RuntimeEnabledFeatures::SetAccessibilityObjectModelEnabled>
    ScopedAccessibilityObjectModelForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::AllowActivationDelegationAttrEnabled,
    RuntimeEnabledFeatures::SetAllowActivationDelegationAttrEnabled>
    ScopedAllowActivationDelegationAttrForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::AllowContentInitiatedDataUrlNavigationsEnabled,
    RuntimeEnabledFeatures::SetAllowContentInitiatedDataUrlNavigationsEnabled>
    ScopedAllowContentInitiatedDataUrlNavigationsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::AnimationWorkletEnabledByRuntimeFlag,
    RuntimeEnabledFeatures::SetAnimationWorkletEnabled>
    ScopedAnimationWorkletForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::AsyncClipboardEnabled,
    RuntimeEnabledFeatures::SetAsyncClipboardEnabled>
    ScopedAsyncClipboardForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::AsyncCookiesEnabled,
    RuntimeEnabledFeatures::SetAsyncCookiesEnabled>
    ScopedAsyncCookiesForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::AudioOutputDevicesEnabled,
    RuntimeEnabledFeatures::SetAudioOutputDevicesEnabled>
    ScopedAudioOutputDevicesForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::AudioVideoTracksEnabled,
    RuntimeEnabledFeatures::SetAudioVideoTracksEnabled>
    ScopedAudioVideoTracksForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::AudioWorkletEnabled,
    RuntimeEnabledFeatures::SetAudioWorkletEnabled>
    ScopedAudioWorkletForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::AutomationControlledEnabled,
    RuntimeEnabledFeatures::SetAutomationControlledEnabled>
    ScopedAutomationControlledForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::AutoplayIgnoresWebAudioEnabled,
    RuntimeEnabledFeatures::SetAutoplayIgnoresWebAudioEnabled>
    ScopedAutoplayIgnoresWebAudioForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::AutoplayMutedVideosEnabled,
    RuntimeEnabledFeatures::SetAutoplayMutedVideosEnabled>
    ScopedAutoplayMutedVideosForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::BackgroundFetchEnabled,
    RuntimeEnabledFeatures::SetBackgroundFetchEnabled>
    ScopedBackgroundFetchForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::BackgroundVideoTrackOptimizationEnabled,
    RuntimeEnabledFeatures::SetBackgroundVideoTrackOptimizationEnabled>
    ScopedBackgroundVideoTrackOptimizationForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::BlinkGenPropertyTreesEnabled,
    RuntimeEnabledFeatures::SetBlinkGenPropertyTreesEnabled>
    ScopedBlinkGenPropertyTreesForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::BlinkRuntimeCallStatsEnabled,
    RuntimeEnabledFeatures::SetBlinkRuntimeCallStatsEnabled>
    ScopedBlinkRuntimeCallStatsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::BloatedRendererDetectionEnabled,
    RuntimeEnabledFeatures::SetBloatedRendererDetectionEnabled>
    ScopedBloatedRendererDetectionForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::BlockCredentialedSubresourcesEnabled,
    RuntimeEnabledFeatures::SetBlockCredentialedSubresourcesEnabled>
    ScopedBlockCredentialedSubresourcesForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::BlockingDownloadsInSandboxEnabled,
    RuntimeEnabledFeatures::SetBlockingDownloadsInSandboxEnabled>
    ScopedBlockingDownloadsInSandboxForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::BlockMetaSetCookieEnabled,
    RuntimeEnabledFeatures::SetBlockMetaSetCookieEnabled>
    ScopedBlockMetaSetCookieForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::BudgetEnabled,
    RuntimeEnabledFeatures::SetBudgetEnabled>
    ScopedBudgetForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::BudgetQueryEnabledByRuntimeFlag,
    RuntimeEnabledFeatures::SetBudgetQueryEnabled>
    ScopedBudgetQueryForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CacheInlineScriptCodeEnabled,
    RuntimeEnabledFeatures::SetCacheInlineScriptCodeEnabled>
    ScopedCacheInlineScriptCodeForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CacheStyleSheetWithMediaQueriesEnabled,
    RuntimeEnabledFeatures::SetCacheStyleSheetWithMediaQueriesEnabled>
    ScopedCacheStyleSheetWithMediaQueriesForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::Canvas2dContextLostRestoredEnabled,
    RuntimeEnabledFeatures::SetCanvas2dContextLostRestoredEnabled>
    ScopedCanvas2dContextLostRestoredForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::Canvas2dFixedRenderingModeEnabled,
    RuntimeEnabledFeatures::SetCanvas2dFixedRenderingModeEnabled>
    ScopedCanvas2dFixedRenderingModeForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::Canvas2dImageChromiumEnabled,
    RuntimeEnabledFeatures::SetCanvas2dImageChromiumEnabled>
    ScopedCanvas2dImageChromiumForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::Canvas2dScrollPathIntoViewEnabled,
    RuntimeEnabledFeatures::SetCanvas2dScrollPathIntoViewEnabled>
    ScopedCanvas2dScrollPathIntoViewForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CanvasColorManagementEnabled,
    RuntimeEnabledFeatures::SetCanvasColorManagementEnabled>
    ScopedCanvasColorManagementForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CanvasHitRegionEnabled,
    RuntimeEnabledFeatures::SetCanvasHitRegionEnabled>
    ScopedCanvasHitRegionForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CanvasImageSmoothingEnabled,
    RuntimeEnabledFeatures::SetCanvasImageSmoothingEnabled>
    ScopedCanvasImageSmoothingForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ClickRetargettingEnabled,
    RuntimeEnabledFeatures::SetClickRetargettingEnabled>
    ScopedClickRetargettingForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ClientHintsPersistentEnabled,
    RuntimeEnabledFeatures::SetClientHintsPersistentEnabled>
    ScopedClientHintsPersistentForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ClientPlaceholdersForServerLoFiEnabled,
    RuntimeEnabledFeatures::SetClientPlaceholdersForServerLoFiEnabled>
    ScopedClientPlaceholdersForServerLoFiForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CompositedSelectionUpdateEnabled,
    RuntimeEnabledFeatures::SetCompositedSelectionUpdateEnabled>
    ScopedCompositedSelectionUpdateForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CompositeOpaqueFixedPositionEnabled,
    RuntimeEnabledFeatures::SetCompositeOpaqueFixedPositionEnabled>
    ScopedCompositeOpaqueFixedPositionForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CompositeOpaqueScrollersEnabled,
    RuntimeEnabledFeatures::SetCompositeOpaqueScrollersEnabled>
    ScopedCompositeOpaqueScrollersForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CompositorTouchActionEnabled,
    RuntimeEnabledFeatures::SetCompositorTouchActionEnabled>
    ScopedCompositorTouchActionForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ComputedAccessibilityInfoEnabled,
    RuntimeEnabledFeatures::SetComputedAccessibilityInfoEnabled>
    ScopedComputedAccessibilityInfoForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ConicGradientEnabled,
    RuntimeEnabledFeatures::SetConicGradientEnabled>
    ScopedConicGradientForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ConstructableStylesheetsEnabled,
    RuntimeEnabledFeatures::SetConstructableStylesheetsEnabled>
    ScopedConstructableStylesheetsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ContextMenuEnabled,
    RuntimeEnabledFeatures::SetContextMenuEnabled>
    ScopedContextMenuForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CorsRFC1918Enabled,
    RuntimeEnabledFeatures::SetCorsRFC1918Enabled>
    ScopedCorsRFC1918ForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CSS3TextEnabled,
    RuntimeEnabledFeatures::SetCSS3TextEnabled>
    ScopedCSS3TextForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CSSAdditiveAnimationsEnabled,
    RuntimeEnabledFeatures::SetCSSAdditiveAnimationsEnabled>
    ScopedCSSAdditiveAnimationsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CSSBackdropFilterEnabled,
    RuntimeEnabledFeatures::SetCSSBackdropFilterEnabled>
    ScopedCSSBackdropFilterForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CSSDisplayContentsEnabled,
    RuntimeEnabledFeatures::SetCSSDisplayContentsEnabled>
    ScopedCSSDisplayContentsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CSSFocusVisibleEnabled,
    RuntimeEnabledFeatures::SetCSSFocusVisibleEnabled>
    ScopedCSSFocusVisibleForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CSSFontSizeAdjustEnabled,
    RuntimeEnabledFeatures::SetCSSFontSizeAdjustEnabled>
    ScopedCSSFontSizeAdjustForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CSSHexAlphaColorEnabled,
    RuntimeEnabledFeatures::SetCSSHexAlphaColorEnabled>
    ScopedCSSHexAlphaColorForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CSSInBodyDoesNotBlockPaintEnabled,
    RuntimeEnabledFeatures::SetCSSInBodyDoesNotBlockPaintEnabled>
    ScopedCSSInBodyDoesNotBlockPaintForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CSSIndependentTransformPropertiesEnabled,
    RuntimeEnabledFeatures::SetCSSIndependentTransformPropertiesEnabled>
    ScopedCSSIndependentTransformPropertiesForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CSSLayoutAPIEnabled,
    RuntimeEnabledFeatures::SetCSSLayoutAPIEnabled>
    ScopedCSSLayoutAPIForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CSSMaskSourceTypeEnabled,
    RuntimeEnabledFeatures::SetCSSMaskSourceTypeEnabled>
    ScopedCSSMaskSourceTypeForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CSSMatchesEnabled,
    RuntimeEnabledFeatures::SetCSSMatchesEnabled>
    ScopedCSSMatchesForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CSSOffsetPathRayEnabled,
    RuntimeEnabledFeatures::SetCSSOffsetPathRayEnabled>
    ScopedCSSOffsetPathRayForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CSSOffsetPathRayContainEnabled,
    RuntimeEnabledFeatures::SetCSSOffsetPathRayContainEnabled>
    ScopedCSSOffsetPathRayContainForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CSSOffsetPositionAnchorEnabled,
    RuntimeEnabledFeatures::SetCSSOffsetPositionAnchorEnabled>
    ScopedCSSOffsetPositionAnchorForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CSSOMSmoothScrollEnabled,
    RuntimeEnabledFeatures::SetCSSOMSmoothScrollEnabled>
    ScopedCSSOMSmoothScrollForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CSSOverscrollBehaviorEnabled,
    RuntimeEnabledFeatures::SetCSSOverscrollBehaviorEnabled>
    ScopedCSSOverscrollBehaviorForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CSSPaintAPIEnabled,
    RuntimeEnabledFeatures::SetCSSPaintAPIEnabled>
    ScopedCSSPaintAPIForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CSSPaintAPIArgumentsEnabled,
    RuntimeEnabledFeatures::SetCSSPaintAPIArgumentsEnabled>
    ScopedCSSPaintAPIArgumentsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CSSPartPseudoElementEnabled,
    RuntimeEnabledFeatures::SetCSSPartPseudoElementEnabled>
    ScopedCSSPartPseudoElementForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CSSPseudoISEnabled,
    RuntimeEnabledFeatures::SetCSSPseudoISEnabled>
    ScopedCSSPseudoISForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CSSScrollSnapPointsEnabled,
    RuntimeEnabledFeatures::SetCSSScrollSnapPointsEnabled>
    ScopedCSSScrollSnapPointsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CSSSnapSizeEnabled,
    RuntimeEnabledFeatures::SetCSSSnapSizeEnabled>
    ScopedCSSSnapSizeForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CSSTransformBoxEnabled,
    RuntimeEnabledFeatures::SetCSSTransformBoxEnabled>
    ScopedCSSTransformBoxForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CSSTypedOMEnabled,
    RuntimeEnabledFeatures::SetCSSTypedOMEnabled>
    ScopedCSSTypedOMForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CSSVariables2Enabled,
    RuntimeEnabledFeatures::SetCSSVariables2Enabled>
    ScopedCSSVariables2ForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CSSViewportEnabled,
    RuntimeEnabledFeatures::SetCSSViewportEnabled>
    ScopedCSSViewportForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CustomElementDefaultStyleEnabled,
    RuntimeEnabledFeatures::SetCustomElementDefaultStyleEnabled>
    ScopedCustomElementDefaultStyleForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CustomElementsBuiltinEnabled,
    RuntimeEnabledFeatures::SetCustomElementsBuiltinEnabled>
    ScopedCustomElementsBuiltinForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CustomElementsV0Enabled,
    RuntimeEnabledFeatures::SetCustomElementsV0Enabled>
    ScopedCustomElementsV0ForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CustomUserTimingEnabled,
    RuntimeEnabledFeatures::SetCustomUserTimingEnabled>
    ScopedCustomUserTimingForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::DatabaseEnabled,
    RuntimeEnabledFeatures::SetDatabaseEnabled>
    ScopedDatabaseForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::DecodeToYUVEnabled,
    RuntimeEnabledFeatures::SetDecodeToYUVEnabled>
    ScopedDecodeToYUVForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::DeprecationReportingEnabled,
    RuntimeEnabledFeatures::SetDeprecationReportingEnabled>
    ScopedDeprecationReportingForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::DesktopCaptureDisableLocalEchoControlEnabled,
    RuntimeEnabledFeatures::SetDesktopCaptureDisableLocalEchoControlEnabled>
    ScopedDesktopCaptureDisableLocalEchoControlForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::DeviceMemoryHeaderEnabled,
    RuntimeEnabledFeatures::SetDeviceMemoryHeaderEnabled>
    ScopedDeviceMemoryHeaderForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::DisableHardwareNoiseSuppressionEnabledByRuntimeFlag,
    RuntimeEnabledFeatures::SetDisableHardwareNoiseSuppressionEnabled>
    ScopedDisableHardwareNoiseSuppressionForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::DisablePaintChunksToCcLayerEnabled,
    RuntimeEnabledFeatures::SetDisablePaintChunksToCcLayerEnabled>
    ScopedDisablePaintChunksToCcLayerForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::DisableRasterInvalidationEnabled,
    RuntimeEnabledFeatures::SetDisableRasterInvalidationEnabled>
    ScopedDisableRasterInvalidationForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::DisplayCutoutViewportFitEnabled,
    RuntimeEnabledFeatures::SetDisplayCutoutViewportFitEnabled>
    ScopedDisplayCutoutViewportFitForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::DisplayNoneIFrameCreatesNoLayoutObjectEnabled,
    RuntimeEnabledFeatures::SetDisplayNoneIFrameCreatesNoLayoutObjectEnabled>
    ScopedDisplayNoneIFrameCreatesNoLayoutObjectForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::DocumentCookieEnabled,
    RuntimeEnabledFeatures::SetDocumentCookieEnabled>
    ScopedDocumentCookieForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::DocumentDomainEnabled,
    RuntimeEnabledFeatures::SetDocumentDomainEnabled>
    ScopedDocumentDomainForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::DocumentWriteEnabled,
    RuntimeEnabledFeatures::SetDocumentWriteEnabled>
    ScopedDocumentWriteForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::EmbedderCSPEnforcementEnabled,
    RuntimeEnabledFeatures::SetEmbedderCSPEnforcementEnabled>
    ScopedEmbedderCSPEnforcementForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::EncryptedMediaHdcpPolicyCheckEnabled,
    RuntimeEnabledFeatures::SetEncryptedMediaHdcpPolicyCheckEnabled>
    ScopedEncryptedMediaHdcpPolicyCheckForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::EventTimingEnabled,
    RuntimeEnabledFeatures::SetEventTimingEnabled>
    ScopedEventTimingForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ExecCommandInJavaScriptEnabled,
    RuntimeEnabledFeatures::SetExecCommandInJavaScriptEnabled>
    ScopedExecCommandInJavaScriptForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ExpensiveBackgroundTimerThrottlingEnabled,
    RuntimeEnabledFeatures::SetExpensiveBackgroundTimerThrottlingEnabled>
    ScopedExpensiveBackgroundTimerThrottlingForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ExperimentalContentSecurityPolicyFeaturesEnabled,
    RuntimeEnabledFeatures::SetExperimentalContentSecurityPolicyFeaturesEnabled>
    ScopedExperimentalContentSecurityPolicyFeaturesForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ExperimentalHardwareEchoCancellationEnabledByRuntimeFlag,
    RuntimeEnabledFeatures::SetExperimentalHardwareEchoCancellationEnabled>
    ScopedExperimentalHardwareEchoCancellationForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ExperimentalProductivityFeaturesEnabled,
    RuntimeEnabledFeatures::SetExperimentalProductivityFeaturesEnabled>
    ScopedExperimentalProductivityFeaturesForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ExperimentalV8ExtrasEnabled,
    RuntimeEnabledFeatures::SetExperimentalV8ExtrasEnabled>
    ScopedExperimentalV8ExtrasForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ExtendedImageBitmapOptionsEnabled,
    RuntimeEnabledFeatures::SetExtendedImageBitmapOptionsEnabled>
    ScopedExtendedImageBitmapOptionsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ExtendedTextMetricsEnabled,
    RuntimeEnabledFeatures::SetExtendedTextMetricsEnabled>
    ScopedExtendedTextMetricsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ExtraWebGLVideoTextureMetadataEnabled,
    RuntimeEnabledFeatures::SetExtraWebGLVideoTextureMetadataEnabled>
    ScopedExtraWebGLVideoTextureMetadataForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::FastMobileScrollingEnabled,
    RuntimeEnabledFeatures::SetFastMobileScrollingEnabled>
    ScopedFastMobileScrollingForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::FeaturePolicyAutoplayFeatureEnabled,
    RuntimeEnabledFeatures::SetFeaturePolicyAutoplayFeatureEnabled>
    ScopedFeaturePolicyAutoplayFeatureForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::FeaturePolicyExperimentalFeaturesEnabled,
    RuntimeEnabledFeatures::SetFeaturePolicyExperimentalFeaturesEnabled>
    ScopedFeaturePolicyExperimentalFeaturesForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::FeaturePolicyForPermissionsEnabled,
    RuntimeEnabledFeatures::SetFeaturePolicyForPermissionsEnabled>
    ScopedFeaturePolicyForPermissionsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::FeaturePolicyJavaScriptInterfaceEnabled,
    RuntimeEnabledFeatures::SetFeaturePolicyJavaScriptInterfaceEnabled>
    ScopedFeaturePolicyJavaScriptInterfaceForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::FeaturePolicyVibrateFeatureEnabled,
    RuntimeEnabledFeatures::SetFeaturePolicyVibrateFeatureEnabled>
    ScopedFeaturePolicyVibrateFeatureForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::FetchRequestCacheEnabled,
    RuntimeEnabledFeatures::SetFetchRequestCacheEnabled>
    ScopedFetchRequestCacheForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::FetchRequestKeepaliveEnabled,
    RuntimeEnabledFeatures::SetFetchRequestKeepaliveEnabled>
    ScopedFetchRequestKeepaliveForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::FetchRequestSignalEnabled,
    RuntimeEnabledFeatures::SetFetchRequestSignalEnabled>
    ScopedFetchRequestSignalForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::FileSystemEnabled,
    RuntimeEnabledFeatures::SetFileSystemEnabled>
    ScopedFileSystemForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::FocusOptionsEnabled,
    RuntimeEnabledFeatures::SetFocusOptionsEnabled>
    ScopedFocusOptionsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::FontCacheScalingEnabled,
    RuntimeEnabledFeatures::SetFontCacheScalingEnabled>
    ScopedFontCacheScalingForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ForceOverlayFullscreenVideoEnabled,
    RuntimeEnabledFeatures::SetForceOverlayFullscreenVideoEnabled>
    ScopedForceOverlayFullscreenVideoForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ForceTallerSelectPopupEnabled,
    RuntimeEnabledFeatures::SetForceTallerSelectPopupEnabled>
    ScopedForceTallerSelectPopupForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::FormDataEventEnabled,
    RuntimeEnabledFeatures::SetFormDataEventEnabled>
    ScopedFormDataEventForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::FractionalMouseEventEnabled,
    RuntimeEnabledFeatures::SetFractionalMouseEventEnabled>
    ScopedFractionalMouseEventForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::FractionalMouseTypePointerEventEnabled,
    RuntimeEnabledFeatures::SetFractionalMouseTypePointerEventEnabled>
    ScopedFractionalMouseTypePointerEventForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::FractionalScrollOffsetsEnabled,
    RuntimeEnabledFeatures::SetFractionalScrollOffsetsEnabled>
    ScopedFractionalScrollOffsetsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::FramebustingNeedsSameOriginOrUserGestureEnabled,
    RuntimeEnabledFeatures::SetFramebustingNeedsSameOriginOrUserGestureEnabled>
    ScopedFramebustingNeedsSameOriginOrUserGestureForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::FramesTimingFunctionEnabled,
    RuntimeEnabledFeatures::SetFramesTimingFunctionEnabled>
    ScopedFramesTimingFunctionForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::FullscreenOptionsEnabled,
    RuntimeEnabledFeatures::SetFullscreenOptionsEnabled>
    ScopedFullscreenOptionsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::FullscreenUnprefixedEnabled,
    RuntimeEnabledFeatures::SetFullscreenUnprefixedEnabled>
    ScopedFullscreenUnprefixedForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::GamepadExtensionsEnabledByRuntimeFlag,
    RuntimeEnabledFeatures::SetGamepadExtensionsEnabled>
    ScopedGamepadExtensionsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::GamepadVibrationEnabled,
    RuntimeEnabledFeatures::SetGamepadVibrationEnabled>
    ScopedGamepadVibrationForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::HeapCompactionEnabled,
    RuntimeEnabledFeatures::SetHeapCompactionEnabled>
    ScopedHeapCompactionForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::HeapIncrementalMarkingEnabled,
    RuntimeEnabledFeatures::SetHeapIncrementalMarkingEnabled>
    ScopedHeapIncrementalMarkingForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::HeapIncrementalMarkingStressEnabled,
    RuntimeEnabledFeatures::SetHeapIncrementalMarkingStressEnabled>
    ScopedHeapIncrementalMarkingStressForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::HTMLImportsEnabled,
    RuntimeEnabledFeatures::SetHTMLImportsEnabled>
    ScopedHTMLImportsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::HTMLImportsStyleApplicationEnabled,
    RuntimeEnabledFeatures::SetHTMLImportsStyleApplicationEnabled>
    ScopedHTMLImportsStyleApplicationForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::IDBObserverEnabled,
    RuntimeEnabledFeatures::SetIDBObserverEnabled>
    ScopedIDBObserverForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::IdleTimeColdModeSpellCheckingEnabled,
    RuntimeEnabledFeatures::SetIdleTimeColdModeSpellCheckingEnabled>
    ScopedIdleTimeColdModeSpellCheckingForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ImageDecodingAttributeEnabled,
    RuntimeEnabledFeatures::SetImageDecodingAttributeEnabled>
    ScopedImageDecodingAttributeForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ImageOrientationEnabled,
    RuntimeEnabledFeatures::SetImageOrientationEnabled>
    ScopedImageOrientationForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ImplicitRootScrollerEnabled,
    RuntimeEnabledFeatures::SetImplicitRootScrollerEnabled>
    ScopedImplicitRootScrollerForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::IncrementalShadowDOMEnabled,
    RuntimeEnabledFeatures::SetIncrementalShadowDOMEnabled>
    ScopedIncrementalShadowDOMForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::InertAttributeEnabled,
    RuntimeEnabledFeatures::SetInertAttributeEnabled>
    ScopedInertAttributeForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::InputMultipleFieldsUIEnabled,
    RuntimeEnabledFeatures::SetInputMultipleFieldsUIEnabled>
    ScopedInputMultipleFieldsUIForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::InstalledAppEnabledByRuntimeFlag,
    RuntimeEnabledFeatures::SetInstalledAppEnabled>
    ScopedInstalledAppForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::IntersectionObserverGeometryMapperEnabled,
    RuntimeEnabledFeatures::SetIntersectionObserverGeometryMapperEnabled>
    ScopedIntersectionObserverGeometryMapperForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::IntersectionObserverV2Enabled,
    RuntimeEnabledFeatures::SetIntersectionObserverV2Enabled>
    ScopedIntersectionObserverV2ForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::JSImageDecodeEnabled,
    RuntimeEnabledFeatures::SetJSImageDecodeEnabled>
    ScopedJSImageDecodeForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::KeyboardLockEnabled,
    RuntimeEnabledFeatures::SetKeyboardLockEnabled>
    ScopedKeyboardLockForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::KeyboardMapEnabled,
    RuntimeEnabledFeatures::SetKeyboardMapEnabled>
    ScopedKeyboardMapForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::LangAttributeAwareFormControlUIEnabled,
    RuntimeEnabledFeatures::SetLangAttributeAwareFormControlUIEnabled>
    ScopedLangAttributeAwareFormControlUIForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::LayeredAPIEnabled,
    RuntimeEnabledFeatures::SetLayeredAPIEnabled>
    ScopedLayeredAPIForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::LayoutNGEnabled,
    RuntimeEnabledFeatures::SetLayoutNGEnabled>
    ScopedLayoutNGForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::LayoutNGBlockFragmentationEnabled,
    RuntimeEnabledFeatures::SetLayoutNGBlockFragmentationEnabled>
    ScopedLayoutNGBlockFragmentationForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::LayoutNGFlexBoxEnabled,
    RuntimeEnabledFeatures::SetLayoutNGFlexBoxEnabled>
    ScopedLayoutNGFlexBoxForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::LayoutNGFragmentCachingEnabled,
    RuntimeEnabledFeatures::SetLayoutNGFragmentCachingEnabled>
    ScopedLayoutNGFragmentCachingForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::LazyFrameLoadingEnabled,
    RuntimeEnabledFeatures::SetLazyFrameLoadingEnabled>
    ScopedLazyFrameLoadingForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::LazyInitializeMediaControlsEnabled,
    RuntimeEnabledFeatures::SetLazyInitializeMediaControlsEnabled>
    ScopedLazyInitializeMediaControlsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::LazyParseCSSEnabled,
    RuntimeEnabledFeatures::SetLazyParseCSSEnabled>
    ScopedLazyParseCSSForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::LoadingWithMojoEnabled,
    RuntimeEnabledFeatures::SetLoadingWithMojoEnabled>
    ScopedLoadingWithMojoForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::LongTaskObserverEnabled,
    RuntimeEnabledFeatures::SetLongTaskObserverEnabled>
    ScopedLongTaskObserverForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::LongTaskV2Enabled,
    RuntimeEnabledFeatures::SetLongTaskV2Enabled>
    ScopedLongTaskV2ForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::LowLatencyCanvasEnabledByRuntimeFlag,
    RuntimeEnabledFeatures::SetLowLatencyCanvasEnabled>
    ScopedLowLatencyCanvasForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::MediaCapabilitiesEnabledByRuntimeFlag,
    RuntimeEnabledFeatures::SetMediaCapabilitiesEnabled>
    ScopedMediaCapabilitiesForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::MediaCapabilitiesEncodingInfoEnabled,
    RuntimeEnabledFeatures::SetMediaCapabilitiesEncodingInfoEnabled>
    ScopedMediaCapabilitiesEncodingInfoForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::MediaCaptureEnabled,
    RuntimeEnabledFeatures::SetMediaCaptureEnabled>
    ScopedMediaCaptureForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::MediaCaptureDepthEnabled,
    RuntimeEnabledFeatures::SetMediaCaptureDepthEnabled>
    ScopedMediaCaptureDepthForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::MediaCaptureDepthVideoKindEnabled,
    RuntimeEnabledFeatures::SetMediaCaptureDepthVideoKindEnabled>
    ScopedMediaCaptureDepthVideoKindForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::MediaCaptureFromVideoEnabled,
    RuntimeEnabledFeatures::SetMediaCaptureFromVideoEnabled>
    ScopedMediaCaptureFromVideoForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::MediaCastOverlayButtonEnabled,
    RuntimeEnabledFeatures::SetMediaCastOverlayButtonEnabled>
    ScopedMediaCastOverlayButtonForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::MediaControlsOverlayPlayButtonEnabled,
    RuntimeEnabledFeatures::SetMediaControlsOverlayPlayButtonEnabled>
    ScopedMediaControlsOverlayPlayButtonForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::MediaDocumentDownloadButtonEnabled,
    RuntimeEnabledFeatures::SetMediaDocumentDownloadButtonEnabled>
    ScopedMediaDocumentDownloadButtonForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::MediaEngagementBypassAutoplayPoliciesEnabled,
    RuntimeEnabledFeatures::SetMediaEngagementBypassAutoplayPoliciesEnabled>
    ScopedMediaEngagementBypassAutoplayPoliciesForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::MediaQueryShapeEnabled,
    RuntimeEnabledFeatures::SetMediaQueryShapeEnabled>
    ScopedMediaQueryShapeForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::MediaSessionEnabled,
    RuntimeEnabledFeatures::SetMediaSessionEnabled>
    ScopedMediaSessionForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::MediaSourceExperimentalEnabled,
    RuntimeEnabledFeatures::SetMediaSourceExperimentalEnabled>
    ScopedMediaSourceExperimentalForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::MediaSourceNewAbortAndDurationEnabled,
    RuntimeEnabledFeatures::SetMediaSourceNewAbortAndDurationEnabled>
    ScopedMediaSourceNewAbortAndDurationForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::MediaStreamTrackContentHintEnabled,
    RuntimeEnabledFeatures::SetMediaStreamTrackContentHintEnabled>
    ScopedMediaStreamTrackContentHintForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::MiddleClickAutoscrollEnabled,
    RuntimeEnabledFeatures::SetMiddleClickAutoscrollEnabled>
    ScopedMiddleClickAutoscrollForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::MobileLayoutThemeEnabled,
    RuntimeEnabledFeatures::SetMobileLayoutThemeEnabled>
    ScopedMobileLayoutThemeForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ModernMediaControlsEnabled,
    RuntimeEnabledFeatures::SetModernMediaControlsEnabled>
    ScopedModernMediaControlsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ModuleDedicatedWorkerEnabled,
    RuntimeEnabledFeatures::SetModuleDedicatedWorkerEnabled>
    ScopedModuleDedicatedWorkerForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ModulePreloadEnabled,
    RuntimeEnabledFeatures::SetModulePreloadEnabled>
    ScopedModulePreloadForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ModuleScriptsDynamicImportEnabled,
    RuntimeEnabledFeatures::SetModuleScriptsDynamicImportEnabled>
    ScopedModuleScriptsDynamicImportForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ModuleScriptsImportMetaUrlEnabled,
    RuntimeEnabledFeatures::SetModuleScriptsImportMetaUrlEnabled>
    ScopedModuleScriptsImportMetaUrlForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::MojoBlobURLsEnabled,
    RuntimeEnabledFeatures::SetMojoBlobURLsEnabled>
    ScopedMojoBlobURLsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::MojoJSEnabled,
    RuntimeEnabledFeatures::SetMojoJSEnabled>
    ScopedMojoJSForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::MojoJSTestEnabled,
    RuntimeEnabledFeatures::SetMojoJSTestEnabled>
    ScopedMojoJSTestForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::MultipleColorStopPositionsEnabled,
    RuntimeEnabledFeatures::SetMultipleColorStopPositionsEnabled>
    ScopedMultipleColorStopPositionsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::NavigatorContentUtilsEnabled,
    RuntimeEnabledFeatures::SetNavigatorContentUtilsEnabled>
    ScopedNavigatorContentUtilsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::NavigatorDeviceMemoryEnabled,
    RuntimeEnabledFeatures::SetNavigatorDeviceMemoryEnabled>
    ScopedNavigatorDeviceMemoryForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::NetInfoDownlinkEnabled,
    RuntimeEnabledFeatures::SetNetInfoDownlinkEnabled>
    ScopedNetInfoDownlinkForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::NetInfoDownlinkHeaderEnabled,
    RuntimeEnabledFeatures::SetNetInfoDownlinkHeaderEnabled>
    ScopedNetInfoDownlinkHeaderForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::NetInfoDownlinkMaxEnabled,
    RuntimeEnabledFeatures::SetNetInfoDownlinkMaxEnabled>
    ScopedNetInfoDownlinkMaxForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::NetInfoEffectiveTypeEnabled,
    RuntimeEnabledFeatures::SetNetInfoEffectiveTypeEnabled>
    ScopedNetInfoEffectiveTypeForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::NetInfoEffectiveTypeHeaderEnabled,
    RuntimeEnabledFeatures::SetNetInfoEffectiveTypeHeaderEnabled>
    ScopedNetInfoEffectiveTypeHeaderForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::NetInfoRttEnabled,
    RuntimeEnabledFeatures::SetNetInfoRttEnabled>
    ScopedNetInfoRttForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::NetInfoRttHeaderEnabled,
    RuntimeEnabledFeatures::SetNetInfoRttHeaderEnabled>
    ScopedNetInfoRttHeaderForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::NetInfoSaveDataEnabled,
    RuntimeEnabledFeatures::SetNetInfoSaveDataEnabled>
    ScopedNetInfoSaveDataForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::NetworkServiceEnabled,
    RuntimeEnabledFeatures::SetNetworkServiceEnabled>
    ScopedNetworkServiceForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::NewRemotePlaybackPipelineEnabled,
    RuntimeEnabledFeatures::SetNewRemotePlaybackPipelineEnabled>
    ScopedNewRemotePlaybackPipelineForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::NotificationConstructorEnabled,
    RuntimeEnabledFeatures::SetNotificationConstructorEnabled>
    ScopedNotificationConstructorForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::NotificationContentImageEnabled,
    RuntimeEnabledFeatures::SetNotificationContentImageEnabled>
    ScopedNotificationContentImageForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::NotificationInlineRepliesEnabled,
    RuntimeEnabledFeatures::SetNotificationInlineRepliesEnabled>
    ScopedNotificationInlineRepliesForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::NotificationsEnabled,
    RuntimeEnabledFeatures::SetNotificationsEnabled>
    ScopedNotificationsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::NullableDocumentDomainEnabled,
    RuntimeEnabledFeatures::SetNullableDocumentDomainEnabled>
    ScopedNullableDocumentDomainForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::OffMainThreadWebSocketEnabled,
    RuntimeEnabledFeatures::SetOffMainThreadWebSocketEnabled>
    ScopedOffMainThreadWebSocketForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::OffscreenCanvasEnabled,
    RuntimeEnabledFeatures::SetOffscreenCanvasEnabled>
    ScopedOffscreenCanvasForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::OffscreenCanvasTextEnabled,
    RuntimeEnabledFeatures::SetOffscreenCanvasTextEnabled>
    ScopedOffscreenCanvasTextForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::OnDeviceChangeEnabled,
    RuntimeEnabledFeatures::SetOnDeviceChangeEnabled>
    ScopedOnDeviceChangeForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::OrientationEventEnabled,
    RuntimeEnabledFeatures::SetOrientationEventEnabled>
    ScopedOrientationEventForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::OriginManifestEnabled,
    RuntimeEnabledFeatures::SetOriginManifestEnabled>
    ScopedOriginManifestForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::OriginTrialsEnabled,
    RuntimeEnabledFeatures::SetOriginTrialsEnabled>
    ScopedOriginTrialsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::OriginTrialsSampleAPIEnabledByRuntimeFlag,
    RuntimeEnabledFeatures::SetOriginTrialsSampleAPIEnabled>
    ScopedOriginTrialsSampleAPIForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::OriginTrialsSampleAPIImpliedEnabledByRuntimeFlag,
    RuntimeEnabledFeatures::SetOriginTrialsSampleAPIImpliedEnabled>
    ScopedOriginTrialsSampleAPIImpliedForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::OutOfBlinkCORSEnabled,
    RuntimeEnabledFeatures::SetOutOfBlinkCORSEnabled>
    ScopedOutOfBlinkCORSForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::OverflowIconsForMediaControlsEnabled,
    RuntimeEnabledFeatures::SetOverflowIconsForMediaControlsEnabled>
    ScopedOverflowIconsForMediaControlsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::OverlayScrollbarsEnabled,
    RuntimeEnabledFeatures::SetOverlayScrollbarsEnabled>
    ScopedOverlayScrollbarsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::PageLifecycleEnabled,
    RuntimeEnabledFeatures::SetPageLifecycleEnabled>
    ScopedPageLifecycleForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::PagePopupEnabled,
    RuntimeEnabledFeatures::SetPagePopupEnabled>
    ScopedPagePopupForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::PaintUnderInvalidationCheckingEnabled,
    RuntimeEnabledFeatures::SetPaintUnderInvalidationCheckingEnabled>
    ScopedPaintUnderInvalidationCheckingForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::PartialRasterInvalidationEnabled,
    RuntimeEnabledFeatures::SetPartialRasterInvalidationEnabled>
    ScopedPartialRasterInvalidationForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::PassiveDocumentEventListenersEnabled,
    RuntimeEnabledFeatures::SetPassiveDocumentEventListenersEnabled>
    ScopedPassiveDocumentEventListenersForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::PassPaintVisualRectToCompositorEnabled,
    RuntimeEnabledFeatures::SetPassPaintVisualRectToCompositorEnabled>
    ScopedPassPaintVisualRectToCompositorForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::PaymentAppEnabled,
    RuntimeEnabledFeatures::SetPaymentAppEnabled>
    ScopedPaymentAppForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::PaymentDetailsModifierDataEnabled,
    RuntimeEnabledFeatures::SetPaymentDetailsModifierDataEnabled>
    ScopedPaymentDetailsModifierDataForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::PaymentRequestEnabled,
    RuntimeEnabledFeatures::SetPaymentRequestEnabled>
    ScopedPaymentRequestForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::PaymentRequestBasicCardEnabled,
    RuntimeEnabledFeatures::SetPaymentRequestBasicCardEnabled>
    ScopedPaymentRequestBasicCardForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::PerformanceNavigationTiming2Enabled,
    RuntimeEnabledFeatures::SetPerformanceNavigationTiming2Enabled>
    ScopedPerformanceNavigationTiming2ForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::PerformancePaintTimingEnabled,
    RuntimeEnabledFeatures::SetPerformancePaintTimingEnabled>
    ScopedPerformancePaintTimingForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::PermissionDelegationEnabled,
    RuntimeEnabledFeatures::SetPermissionDelegationEnabled>
    ScopedPermissionDelegationForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::PermissionsEnabled,
    RuntimeEnabledFeatures::SetPermissionsEnabled>
    ScopedPermissionsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::PermissionsRequestRevokeEnabled,
    RuntimeEnabledFeatures::SetPermissionsRequestRevokeEnabled>
    ScopedPermissionsRequestRevokeForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::PictureInPictureEnabled,
    RuntimeEnabledFeatures::SetPictureInPictureEnabled>
    ScopedPictureInPictureForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::PictureInPictureAPIEnabledByRuntimeFlag,
    RuntimeEnabledFeatures::SetPictureInPictureAPIEnabled>
    ScopedPictureInPictureAPIForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::PreciseMemoryInfoEnabled,
    RuntimeEnabledFeatures::SetPreciseMemoryInfoEnabled>
    ScopedPreciseMemoryInfoForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::PreferredImageRasterBoundsEnabled,
    RuntimeEnabledFeatures::SetPreferredImageRasterBoundsEnabled>
    ScopedPreferredImageRasterBoundsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::PrefixedVideoFullscreenEnabled,
    RuntimeEnabledFeatures::SetPrefixedVideoFullscreenEnabled>
    ScopedPrefixedVideoFullscreenForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::PreloadDefaultIsMetadataEnabled,
    RuntimeEnabledFeatures::SetPreloadDefaultIsMetadataEnabled>
    ScopedPreloadDefaultIsMetadataForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::PreloadImageSrcSetEnabled,
    RuntimeEnabledFeatures::SetPreloadImageSrcSetEnabled>
    ScopedPreloadImageSrcSetForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::PresentationEnabled,
    RuntimeEnabledFeatures::SetPresentationEnabled>
    ScopedPresentationForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::PrintBrowserEnabled,
    RuntimeEnabledFeatures::SetPrintBrowserEnabled>
    ScopedPrintBrowserForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::PriorityHintsEnabled,
    RuntimeEnabledFeatures::SetPriorityHintsEnabled>
    ScopedPriorityHintsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::PushMessagingEnabled,
    RuntimeEnabledFeatures::SetPushMessagingEnabled>
    ScopedPushMessagingForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::PWAFullCodeCacheEnabled,
    RuntimeEnabledFeatures::SetPWAFullCodeCacheEnabled>
    ScopedPWAFullCodeCacheForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::RasterInducingScrollEnabled,
    RuntimeEnabledFeatures::SetRasterInducingScrollEnabled>
    ScopedRasterInducingScrollForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ReducedReferrerGranularityEnabled,
    RuntimeEnabledFeatures::SetReducedReferrerGranularityEnabled>
    ScopedReducedReferrerGranularityForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::RemotePlaybackEnabled,
    RuntimeEnabledFeatures::SetRemotePlaybackEnabled>
    ScopedRemotePlaybackForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::RemotePlaybackBackendEnabled,
    RuntimeEnabledFeatures::SetRemotePlaybackBackendEnabled>
    ScopedRemotePlaybackBackendForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::RenderingPipelineThrottlingEnabled,
    RuntimeEnabledFeatures::SetRenderingPipelineThrottlingEnabled>
    ScopedRenderingPipelineThrottlingForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::RenderingPipelineThrottlingLoadingIframesEnabled,
    RuntimeEnabledFeatures::SetRenderingPipelineThrottlingLoadingIframesEnabled>
    ScopedRenderingPipelineThrottlingLoadingIframesForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::RenderUnicodeControlCharactersEnabled,
    RuntimeEnabledFeatures::SetRenderUnicodeControlCharactersEnabled>
    ScopedRenderUnicodeControlCharactersForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ReportingObserverEnabled,
    RuntimeEnabledFeatures::SetReportingObserverEnabled>
    ScopedReportingObserverForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::RequireCSSExtensionForFileEnabled,
    RuntimeEnabledFeatures::SetRequireCSSExtensionForFileEnabled>
    ScopedRequireCSSExtensionForFileForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ResizeObserverEnabled,
    RuntimeEnabledFeatures::SetResizeObserverEnabled>
    ScopedResizeObserverForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ResourceLoadSchedulerEnabled,
    RuntimeEnabledFeatures::SetResourceLoadSchedulerEnabled>
    ScopedResourceLoadSchedulerForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::RestrictAppCacheToSecureContextsEnabled,
    RuntimeEnabledFeatures::SetRestrictAppCacheToSecureContextsEnabled>
    ScopedRestrictAppCacheToSecureContextsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::RestrictCanRequestURLCharacterSetEnabled,
    RuntimeEnabledFeatures::SetRestrictCanRequestURLCharacterSetEnabled>
    ScopedRestrictCanRequestURLCharacterSetForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::RootLayerScrollingEnabled,
    RuntimeEnabledFeatures::SetRootLayerScrollingEnabled>
    ScopedRootLayerScrollingForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::RtcPeerConnectionIdEnabledByRuntimeFlag,
    RuntimeEnabledFeatures::SetRtcPeerConnectionIdEnabled>
    ScopedRtcPeerConnectionIdForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::RTCRtpSenderParametersEnabled,
    RuntimeEnabledFeatures::SetRTCRtpSenderParametersEnabled>
    ScopedRTCRtpSenderParametersForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::RTCUnifiedPlanEnabled,
    RuntimeEnabledFeatures::SetRTCUnifiedPlanEnabled>
    ScopedRTCUnifiedPlanForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::RTCUnifiedPlanByDefaultEnabled,
    RuntimeEnabledFeatures::SetRTCUnifiedPlanByDefaultEnabled>
    ScopedRTCUnifiedPlanByDefaultForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ScriptedSpeechEnabled,
    RuntimeEnabledFeatures::SetScriptedSpeechEnabled>
    ScopedScriptedSpeechForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ScrollAnchorSerializationEnabled,
    RuntimeEnabledFeatures::SetScrollAnchorSerializationEnabled>
    ScopedScrollAnchorSerializationForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ScrollCustomizationEnabled,
    RuntimeEnabledFeatures::SetScrollCustomizationEnabled>
    ScopedScrollCustomizationForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ScrollTopLeftInteropEnabled,
    RuntimeEnabledFeatures::SetScrollTopLeftInteropEnabled>
    ScopedScrollTopLeftInteropForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::SecMetadataEnabled,
    RuntimeEnabledFeatures::SetSecMetadataEnabled>
    ScopedSecMetadataForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::SendBeaconThrowForBlobWithNonSimpleTypeEnabled,
    RuntimeEnabledFeatures::SetSendBeaconThrowForBlobWithNonSimpleTypeEnabled>
    ScopedSendBeaconThrowForBlobWithNonSimpleTypeForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::SendMouseEventsDisabledFormControlsEnabled,
    RuntimeEnabledFeatures::SetSendMouseEventsDisabledFormControlsEnabled>
    ScopedSendMouseEventsDisabledFormControlsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::SensorEnabledByRuntimeFlag,
    RuntimeEnabledFeatures::SetSensorEnabled>
    ScopedSensorForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::SensorExtraClassesEnabled,
    RuntimeEnabledFeatures::SetSensorExtraClassesEnabled>
    ScopedSensorExtraClassesForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ServerTimingEnabled,
    RuntimeEnabledFeatures::SetServerTimingEnabled>
    ScopedServerTimingForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ServiceWorkerScriptFullCodeCacheEnabled,
    RuntimeEnabledFeatures::SetServiceWorkerScriptFullCodeCacheEnabled>
    ScopedServiceWorkerScriptFullCodeCacheForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ServiceWorkerUpdateViaCacheEnabled,
    RuntimeEnabledFeatures::SetServiceWorkerUpdateViaCacheEnabled>
    ScopedServiceWorkerUpdateViaCacheForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::SetRootScrollerEnabled,
    RuntimeEnabledFeatures::SetSetRootScrollerEnabled>
    ScopedSetRootScrollerForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ShadowDOMV0Enabled,
    RuntimeEnabledFeatures::SetShadowDOMV0Enabled>
    ScopedShadowDOMV0ForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ShadowPiercingDescendantCombinatorEnabled,
    RuntimeEnabledFeatures::SetShadowPiercingDescendantCombinatorEnabled>
    ScopedShadowPiercingDescendantCombinatorForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ShapeDetectionEnabled,
    RuntimeEnabledFeatures::SetShapeDetectionEnabled>
    ScopedShapeDetectionForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::SharedArrayBufferEnabled,
    RuntimeEnabledFeatures::SetSharedArrayBufferEnabled>
    ScopedSharedArrayBufferForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::SharedWorkerEnabled,
    RuntimeEnabledFeatures::SetSharedWorkerEnabled>
    ScopedSharedWorkerForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::SignatureBasedIntegrityEnabledByRuntimeFlag,
    RuntimeEnabledFeatures::SetSignatureBasedIntegrityEnabled>
    ScopedSignatureBasedIntegrityForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::SlimmingPaintV175Enabled,
    RuntimeEnabledFeatures::SetSlimmingPaintV175Enabled>
    ScopedSlimmingPaintV175ForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::SlimmingPaintV2Enabled,
    RuntimeEnabledFeatures::SetSlimmingPaintV2Enabled>
    ScopedSlimmingPaintV2ForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::SlotInFlatTreeEnabled,
    RuntimeEnabledFeatures::SetSlotInFlatTreeEnabled>
    ScopedSlotInFlatTreeForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::SMILEnabled,
    RuntimeEnabledFeatures::SetSMILEnabled>
    ScopedSMILForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::SmoothScrollJSInterventionEnabled,
    RuntimeEnabledFeatures::SetSmoothScrollJSInterventionEnabled>
    ScopedSmoothScrollJSInterventionForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::StableBlinkFeaturesEnabled,
    RuntimeEnabledFeatures::SetStableBlinkFeaturesEnabled>
    ScopedStableBlinkFeaturesForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::StackedCSSPropertyAnimationsEnabled,
    RuntimeEnabledFeatures::SetStackedCSSPropertyAnimationsEnabled>
    ScopedStackedCSSPropertyAnimationsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::StopInBackgroundEnabled,
    RuntimeEnabledFeatures::SetStopInBackgroundEnabled>
    ScopedStopInBackgroundForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::StopLoadingInBackgroundEnabled,
    RuntimeEnabledFeatures::SetStopLoadingInBackgroundEnabled>
    ScopedStopLoadingInBackgroundForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::StopNonTimersInBackgroundEnabled,
    RuntimeEnabledFeatures::SetStopNonTimersInBackgroundEnabled>
    ScopedStopNonTimersInBackgroundForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::TimerThrottlingForBackgroundTabsEnabled,
    RuntimeEnabledFeatures::SetTimerThrottlingForBackgroundTabsEnabled>
    ScopedTimerThrottlingForBackgroundTabsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::TimerThrottlingForHiddenFramesEnabled,
    RuntimeEnabledFeatures::SetTimerThrottlingForHiddenFramesEnabled>
    ScopedTimerThrottlingForHiddenFramesForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::TouchEventFeatureDetectionEnabledByRuntimeFlag,
    RuntimeEnabledFeatures::SetTouchEventFeatureDetectionEnabled>
    ScopedTouchEventFeatureDetectionForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::TouchpadAndWheelScrollLatchingEnabled,
    RuntimeEnabledFeatures::SetTouchpadAndWheelScrollLatchingEnabled>
    ScopedTouchpadAndWheelScrollLatchingForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::TrackLayoutPassesPerBlockEnabled,
    RuntimeEnabledFeatures::SetTrackLayoutPassesPerBlockEnabled>
    ScopedTrackLayoutPassesPerBlockForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::TrustedDOMTypesEnabled,
    RuntimeEnabledFeatures::SetTrustedDOMTypesEnabled>
    ScopedTrustedDOMTypesForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::TrustedEventsDefaultActionEnabled,
    RuntimeEnabledFeatures::SetTrustedEventsDefaultActionEnabled>
    ScopedTrustedEventsDefaultActionForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::UnclosedFormControlIsInvalidEnabled,
    RuntimeEnabledFeatures::SetUnclosedFormControlIsInvalidEnabled>
    ScopedUnclosedFormControlIsInvalidForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::UnifiedTouchAdjustmentEnabled,
    RuntimeEnabledFeatures::SetUnifiedTouchAdjustmentEnabled>
    ScopedUnifiedTouchAdjustmentForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::UserActivationV2Enabled,
    RuntimeEnabledFeatures::SetUserActivationV2Enabled>
    ScopedUserActivationV2ForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::V8ContextSnapshotEnabled,
    RuntimeEnabledFeatures::SetV8ContextSnapshotEnabled>
    ScopedV8ContextSnapshotForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::V8IdleTasksEnabled,
    RuntimeEnabledFeatures::SetV8IdleTasksEnabled>
    ScopedV8IdleTasksForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::VideoFullscreenDetectionEnabled,
    RuntimeEnabledFeatures::SetVideoFullscreenDetectionEnabled>
    ScopedVideoFullscreenDetectionForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::VideoFullscreenOrientationLockEnabled,
    RuntimeEnabledFeatures::SetVideoFullscreenOrientationLockEnabled>
    ScopedVideoFullscreenOrientationLockForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::VideoRotateToFullscreenEnabled,
    RuntimeEnabledFeatures::SetVideoRotateToFullscreenEnabled>
    ScopedVideoRotateToFullscreenForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::VisibilityCollapseColumnEnabled,
    RuntimeEnabledFeatures::SetVisibilityCollapseColumnEnabled>
    ScopedVisibilityCollapseColumnForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::VisibilityCollapseRowEnabled,
    RuntimeEnabledFeatures::SetVisibilityCollapseRowEnabled>
    ScopedVisibilityCollapseRowForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::VisualViewportAPIEnabled,
    RuntimeEnabledFeatures::SetVisualViewportAPIEnabled>
    ScopedVisualViewportAPIForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::WakeLockEnabled,
    RuntimeEnabledFeatures::SetWakeLockEnabled>
    ScopedWakeLockForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::WebAnimationsAPIEnabled,
    RuntimeEnabledFeatures::SetWebAnimationsAPIEnabled>
    ScopedWebAnimationsAPIForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::WebAnimationsSVGEnabled,
    RuntimeEnabledFeatures::SetWebAnimationsSVGEnabled>
    ScopedWebAnimationsSVGForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::WebAssemblyStreamingEnabled,
    RuntimeEnabledFeatures::SetWebAssemblyStreamingEnabled>
    ScopedWebAssemblyStreamingForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::WebAuthEnabled,
    RuntimeEnabledFeatures::SetWebAuthEnabled>
    ScopedWebAuthForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::WebBluetoothEnabled,
    RuntimeEnabledFeatures::SetWebBluetoothEnabled>
    ScopedWebBluetoothForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::WebFontsCacheAwareTimeoutAdaptationEnabled,
    RuntimeEnabledFeatures::SetWebFontsCacheAwareTimeoutAdaptationEnabled>
    ScopedWebFontsCacheAwareTimeoutAdaptationForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::WebGLDraftExtensionsEnabled,
    RuntimeEnabledFeatures::SetWebGLDraftExtensionsEnabled>
    ScopedWebGLDraftExtensionsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::WebGLImageChromiumEnabled,
    RuntimeEnabledFeatures::SetWebGLImageChromiumEnabled>
    ScopedWebGLImageChromiumForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::WebLocksAPIEnabledByRuntimeFlag,
    RuntimeEnabledFeatures::SetWebLocksAPIEnabled>
    ScopedWebLocksAPIForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::WebNFCEnabled,
    RuntimeEnabledFeatures::SetWebNFCEnabled>
    ScopedWebNFCForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::WebRtcVaapiHWVP8EncodingEnabledByRuntimeFlag,
    RuntimeEnabledFeatures::SetWebRtcVaapiHWVP8EncodingEnabled>
    ScopedWebRtcVaapiHWVP8EncodingForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::WebShareEnabled,
    RuntimeEnabledFeatures::SetWebShareEnabled>
    ScopedWebShareForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::WebUSBEnabled,
    RuntimeEnabledFeatures::SetWebUSBEnabled>
    ScopedWebUSBForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::WebUSBOnDedicatedAndSharedWorkersEnabled,
    RuntimeEnabledFeatures::SetWebUSBOnDedicatedAndSharedWorkersEnabled>
    ScopedWebUSBOnDedicatedAndSharedWorkersForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::WebVREnabledByRuntimeFlag,
    RuntimeEnabledFeatures::SetWebVREnabled>
    ScopedWebVRForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::WebVTTRegionsEnabled,
    RuntimeEnabledFeatures::SetWebVTTRegionsEnabled>
    ScopedWebVTTRegionsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::WebXREnabledByRuntimeFlag,
    RuntimeEnabledFeatures::SetWebXREnabled>
    ScopedWebXRForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::WebXRGamepadSupportEnabledByRuntimeFlag,
    RuntimeEnabledFeatures::SetWebXRGamepadSupportEnabled>
    ScopedWebXRGamepadSupportForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::WebXRHitTestEnabled,
    RuntimeEnabledFeatures::SetWebXRHitTestEnabled>
    ScopedWebXRHitTestForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::WorkerNosniffBlockEnabled,
    RuntimeEnabledFeatures::SetWorkerNosniffBlockEnabled>
    ScopedWorkerNosniffBlockForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::WorkerNosniffWarnEnabled,
    RuntimeEnabledFeatures::SetWorkerNosniffWarnEnabled>
    ScopedWorkerNosniffWarnForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::WorkletEnabled,
    RuntimeEnabledFeatures::SetWorkletEnabled>
    ScopedWorkletForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::WorkStealingInScriptRunnerEnabled,
    RuntimeEnabledFeatures::SetWorkStealingInScriptRunnerEnabled>
    ScopedWorkStealingInScriptRunnerForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::XSLTEnabled,
    RuntimeEnabledFeatures::SetXSLTEnabled>
    ScopedXSLTForTest;
} // namespace blink

#endif  // BLINK_PLATFORM_TESTING_RUNTIME_ENABLED_FEATURES_TEST_HELPERS_H_
