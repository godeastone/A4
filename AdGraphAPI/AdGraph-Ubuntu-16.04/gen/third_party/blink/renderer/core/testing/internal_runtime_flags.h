// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/internal_runtime_flags.h.tmpl
// and input files:
//   ../../third_party/blink/renderer/platform/runtime_enabled_features.json5


#ifndef InternalRuntimeFlags_h
#define InternalRuntimeFlags_h

#include "third_party/blink/renderer/platform/bindings/script_wrappable.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"
#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/platform/wtf/ref_counted.h"

namespace blink {

class InternalRuntimeFlags : public ScriptWrappable {
  DEFINE_WRAPPERTYPEINFO();
 public:
  static InternalRuntimeFlags* create() {
    return new InternalRuntimeFlags;
  }

  // These are reset between layout tests from Internals::resetToConsistentState
  // using RuntimeEnabledFeatures::Backup.
  void setAccelerated2dCanvasEnabled(bool isEnabled) {
    RuntimeEnabledFeatures::SetAccelerated2dCanvasEnabled(isEnabled);
  }
  void setAutomationControlledEnabled(bool isEnabled) {
    RuntimeEnabledFeatures::SetAutomationControlledEnabled(isEnabled);
  }
  void setAutoplayMutedVideosEnabled(bool isEnabled) {
    RuntimeEnabledFeatures::SetAutoplayMutedVideosEnabled(isEnabled);
  }
  void setCompositeOpaqueFixedPositionEnabled(bool isEnabled) {
    RuntimeEnabledFeatures::SetCompositeOpaqueFixedPositionEnabled(isEnabled);
  }
  void setCompositeOpaqueScrollersEnabled(bool isEnabled) {
    RuntimeEnabledFeatures::SetCompositeOpaqueScrollersEnabled(isEnabled);
  }
  void setDisplayCutoutViewportFitEnabled(bool isEnabled) {
    RuntimeEnabledFeatures::SetDisplayCutoutViewportFitEnabled(isEnabled);
  }
  void setFramebustingNeedsSameOriginOrUserGestureEnabled(bool isEnabled) {
    RuntimeEnabledFeatures::SetFramebustingNeedsSameOriginOrUserGestureEnabled(isEnabled);
  }
  void setFullscreenUnprefixedEnabled(bool isEnabled) {
    RuntimeEnabledFeatures::SetFullscreenUnprefixedEnabled(isEnabled);
  }
  void setImplicitRootScrollerEnabled(bool isEnabled) {
    RuntimeEnabledFeatures::SetImplicitRootScrollerEnabled(isEnabled);
  }
  void setMediaControlsOverlayPlayButtonEnabled(bool isEnabled) {
    RuntimeEnabledFeatures::SetMediaControlsOverlayPlayButtonEnabled(isEnabled);
  }
  void setOverlayScrollbarsEnabled(bool isEnabled) {
    RuntimeEnabledFeatures::SetOverlayScrollbarsEnabled(isEnabled);
  }
  void setPaintUnderInvalidationCheckingEnabled(bool isEnabled) {
    RuntimeEnabledFeatures::SetPaintUnderInvalidationCheckingEnabled(isEnabled);
  }
  void setPictureInPictureEnabled(bool isEnabled) {
    RuntimeEnabledFeatures::SetPictureInPictureEnabled(isEnabled);
  }
  void setPreferredImageRasterBoundsEnabled(bool isEnabled) {
    RuntimeEnabledFeatures::SetPreferredImageRasterBoundsEnabled(isEnabled);
  }
  void setRemotePlaybackBackendEnabled(bool isEnabled) {
    RuntimeEnabledFeatures::SetRemotePlaybackBackendEnabled(isEnabled);
  }

  bool accelerated2dCanvasEnabled() {
    return RuntimeEnabledFeatures::Accelerated2dCanvasEnabled();
  }
  bool accessibilityObjectModelEnabled() {
    return RuntimeEnabledFeatures::AccessibilityObjectModelEnabled();
  }
  bool allowActivationDelegationAttrEnabled() {
    return RuntimeEnabledFeatures::AllowActivationDelegationAttrEnabled();
  }
  bool allowContentInitiatedDataUrlNavigationsEnabled() {
    return RuntimeEnabledFeatures::AllowContentInitiatedDataUrlNavigationsEnabled();
  }
  bool animationWorkletEnabled() {
    return RuntimeEnabledFeatures::AnimationWorkletEnabledByRuntimeFlag();
  }
  bool asyncClipboardEnabled() {
    return RuntimeEnabledFeatures::AsyncClipboardEnabled();
  }
  bool asyncCookiesEnabled() {
    return RuntimeEnabledFeatures::AsyncCookiesEnabled();
  }
  bool audioOutputDevicesEnabled() {
    return RuntimeEnabledFeatures::AudioOutputDevicesEnabled();
  }
  bool audioVideoTracksEnabled() {
    return RuntimeEnabledFeatures::AudioVideoTracksEnabled();
  }
  bool audioWorkletEnabled() {
    return RuntimeEnabledFeatures::AudioWorkletEnabled();
  }
  bool automationControlledEnabled() {
    return RuntimeEnabledFeatures::AutomationControlledEnabled();
  }
  bool autoplayIgnoresWebAudioEnabled() {
    return RuntimeEnabledFeatures::AutoplayIgnoresWebAudioEnabled();
  }
  bool autoplayMutedVideosEnabled() {
    return RuntimeEnabledFeatures::AutoplayMutedVideosEnabled();
  }
  bool backgroundFetchEnabled() {
    return RuntimeEnabledFeatures::BackgroundFetchEnabled();
  }
  bool backgroundVideoTrackOptimizationEnabled() {
    return RuntimeEnabledFeatures::BackgroundVideoTrackOptimizationEnabled();
  }
  bool blinkGenPropertyTreesEnabled() {
    return RuntimeEnabledFeatures::BlinkGenPropertyTreesEnabled();
  }
  bool blinkRuntimeCallStatsEnabled() {
    return RuntimeEnabledFeatures::BlinkRuntimeCallStatsEnabled();
  }
  bool bloatedRendererDetectionEnabled() {
    return RuntimeEnabledFeatures::BloatedRendererDetectionEnabled();
  }
  bool blockCredentialedSubresourcesEnabled() {
    return RuntimeEnabledFeatures::BlockCredentialedSubresourcesEnabled();
  }
  bool blockingDownloadsInSandboxEnabled() {
    return RuntimeEnabledFeatures::BlockingDownloadsInSandboxEnabled();
  }
  bool blockMetaSetCookieEnabled() {
    return RuntimeEnabledFeatures::BlockMetaSetCookieEnabled();
  }
  bool budgetEnabled() {
    return RuntimeEnabledFeatures::BudgetEnabled();
  }
  bool budgetQueryEnabled() {
    return RuntimeEnabledFeatures::BudgetQueryEnabledByRuntimeFlag();
  }
  bool cacheInlineScriptCodeEnabled() {
    return RuntimeEnabledFeatures::CacheInlineScriptCodeEnabled();
  }
  bool cacheStyleSheetWithMediaQueriesEnabled() {
    return RuntimeEnabledFeatures::CacheStyleSheetWithMediaQueriesEnabled();
  }
  bool canvas2dContextLostRestoredEnabled() {
    return RuntimeEnabledFeatures::Canvas2dContextLostRestoredEnabled();
  }
  bool canvas2dFixedRenderingModeEnabled() {
    return RuntimeEnabledFeatures::Canvas2dFixedRenderingModeEnabled();
  }
  bool canvas2dImageChromiumEnabled() {
    return RuntimeEnabledFeatures::Canvas2dImageChromiumEnabled();
  }
  bool canvas2dScrollPathIntoViewEnabled() {
    return RuntimeEnabledFeatures::Canvas2dScrollPathIntoViewEnabled();
  }
  bool canvasColorManagementEnabled() {
    return RuntimeEnabledFeatures::CanvasColorManagementEnabled();
  }
  bool canvasHitRegionEnabled() {
    return RuntimeEnabledFeatures::CanvasHitRegionEnabled();
  }
  bool canvasImageSmoothingEnabled() {
    return RuntimeEnabledFeatures::CanvasImageSmoothingEnabled();
  }
  bool clickRetargettingEnabled() {
    return RuntimeEnabledFeatures::ClickRetargettingEnabled();
  }
  bool clientHintsPersistentEnabled() {
    return RuntimeEnabledFeatures::ClientHintsPersistentEnabled();
  }
  bool clientPlaceholdersForServerLoFiEnabled() {
    return RuntimeEnabledFeatures::ClientPlaceholdersForServerLoFiEnabled();
  }
  bool compositedSelectionUpdateEnabled() {
    return RuntimeEnabledFeatures::CompositedSelectionUpdateEnabled();
  }
  bool compositeOpaqueFixedPositionEnabled() {
    return RuntimeEnabledFeatures::CompositeOpaqueFixedPositionEnabled();
  }
  bool compositeOpaqueScrollersEnabled() {
    return RuntimeEnabledFeatures::CompositeOpaqueScrollersEnabled();
  }
  bool compositorTouchActionEnabled() {
    return RuntimeEnabledFeatures::CompositorTouchActionEnabled();
  }
  bool computedAccessibilityInfoEnabled() {
    return RuntimeEnabledFeatures::ComputedAccessibilityInfoEnabled();
  }
  bool conicGradientEnabled() {
    return RuntimeEnabledFeatures::ConicGradientEnabled();
  }
  bool constructableStylesheetsEnabled() {
    return RuntimeEnabledFeatures::ConstructableStylesheetsEnabled();
  }
  bool contextMenuEnabled() {
    return RuntimeEnabledFeatures::ContextMenuEnabled();
  }
  bool corsRFC1918Enabled() {
    return RuntimeEnabledFeatures::CorsRFC1918Enabled();
  }
  bool css3TextEnabled() {
    return RuntimeEnabledFeatures::CSS3TextEnabled();
  }
  bool cssAdditiveAnimationsEnabled() {
    return RuntimeEnabledFeatures::CSSAdditiveAnimationsEnabled();
  }
  bool cssBackdropFilterEnabled() {
    return RuntimeEnabledFeatures::CSSBackdropFilterEnabled();
  }
  bool cssDisplayContentsEnabled() {
    return RuntimeEnabledFeatures::CSSDisplayContentsEnabled();
  }
  bool cssFocusVisibleEnabled() {
    return RuntimeEnabledFeatures::CSSFocusVisibleEnabled();
  }
  bool cssFontSizeAdjustEnabled() {
    return RuntimeEnabledFeatures::CSSFontSizeAdjustEnabled();
  }
  bool cssHexAlphaColorEnabled() {
    return RuntimeEnabledFeatures::CSSHexAlphaColorEnabled();
  }
  bool cssInBodyDoesNotBlockPaintEnabled() {
    return RuntimeEnabledFeatures::CSSInBodyDoesNotBlockPaintEnabled();
  }
  bool cssIndependentTransformPropertiesEnabled() {
    return RuntimeEnabledFeatures::CSSIndependentTransformPropertiesEnabled();
  }
  bool cssLayoutAPIEnabled() {
    return RuntimeEnabledFeatures::CSSLayoutAPIEnabled();
  }
  bool cssMaskSourceTypeEnabled() {
    return RuntimeEnabledFeatures::CSSMaskSourceTypeEnabled();
  }
  bool cssMatchesEnabled() {
    return RuntimeEnabledFeatures::CSSMatchesEnabled();
  }
  bool cssOffsetPathRayEnabled() {
    return RuntimeEnabledFeatures::CSSOffsetPathRayEnabled();
  }
  bool cssOffsetPathRayContainEnabled() {
    return RuntimeEnabledFeatures::CSSOffsetPathRayContainEnabled();
  }
  bool cssOffsetPositionAnchorEnabled() {
    return RuntimeEnabledFeatures::CSSOffsetPositionAnchorEnabled();
  }
  bool cssomSmoothScrollEnabled() {
    return RuntimeEnabledFeatures::CSSOMSmoothScrollEnabled();
  }
  bool cssOverscrollBehaviorEnabled() {
    return RuntimeEnabledFeatures::CSSOverscrollBehaviorEnabled();
  }
  bool cssPaintAPIEnabled() {
    return RuntimeEnabledFeatures::CSSPaintAPIEnabled();
  }
  bool cssPaintAPIArgumentsEnabled() {
    return RuntimeEnabledFeatures::CSSPaintAPIArgumentsEnabled();
  }
  bool cssPartPseudoElementEnabled() {
    return RuntimeEnabledFeatures::CSSPartPseudoElementEnabled();
  }
  bool cssPseudoISEnabled() {
    return RuntimeEnabledFeatures::CSSPseudoISEnabled();
  }
  bool cssScrollSnapPointsEnabled() {
    return RuntimeEnabledFeatures::CSSScrollSnapPointsEnabled();
  }
  bool cssSnapSizeEnabled() {
    return RuntimeEnabledFeatures::CSSSnapSizeEnabled();
  }
  bool cssTransformBoxEnabled() {
    return RuntimeEnabledFeatures::CSSTransformBoxEnabled();
  }
  bool cssTypedOMEnabled() {
    return RuntimeEnabledFeatures::CSSTypedOMEnabled();
  }
  bool cssVariables2Enabled() {
    return RuntimeEnabledFeatures::CSSVariables2Enabled();
  }
  bool cssViewportEnabled() {
    return RuntimeEnabledFeatures::CSSViewportEnabled();
  }
  bool customElementDefaultStyleEnabled() {
    return RuntimeEnabledFeatures::CustomElementDefaultStyleEnabled();
  }
  bool customElementsBuiltinEnabled() {
    return RuntimeEnabledFeatures::CustomElementsBuiltinEnabled();
  }
  bool customElementsV0Enabled() {
    return RuntimeEnabledFeatures::CustomElementsV0Enabled();
  }
  bool customUserTimingEnabled() {
    return RuntimeEnabledFeatures::CustomUserTimingEnabled();
  }
  bool databaseEnabled() {
    return RuntimeEnabledFeatures::DatabaseEnabled();
  }
  bool decodeToYUVEnabled() {
    return RuntimeEnabledFeatures::DecodeToYUVEnabled();
  }
  bool deprecationReportingEnabled() {
    return RuntimeEnabledFeatures::DeprecationReportingEnabled();
  }
  bool desktopCaptureDisableLocalEchoControlEnabled() {
    return RuntimeEnabledFeatures::DesktopCaptureDisableLocalEchoControlEnabled();
  }
  bool deviceMemoryHeaderEnabled() {
    return RuntimeEnabledFeatures::DeviceMemoryHeaderEnabled();
  }
  bool disableHardwareNoiseSuppressionEnabled() {
    return RuntimeEnabledFeatures::DisableHardwareNoiseSuppressionEnabledByRuntimeFlag();
  }
  bool disablePaintChunksToCcLayerEnabled() {
    return RuntimeEnabledFeatures::DisablePaintChunksToCcLayerEnabled();
  }
  bool disableRasterInvalidationEnabled() {
    return RuntimeEnabledFeatures::DisableRasterInvalidationEnabled();
  }
  bool displayCutoutViewportFitEnabled() {
    return RuntimeEnabledFeatures::DisplayCutoutViewportFitEnabled();
  }
  bool displayNoneIFrameCreatesNoLayoutObjectEnabled() {
    return RuntimeEnabledFeatures::DisplayNoneIFrameCreatesNoLayoutObjectEnabled();
  }
  bool documentCookieEnabled() {
    return RuntimeEnabledFeatures::DocumentCookieEnabled();
  }
  bool documentDomainEnabled() {
    return RuntimeEnabledFeatures::DocumentDomainEnabled();
  }
  bool documentWriteEnabled() {
    return RuntimeEnabledFeatures::DocumentWriteEnabled();
  }
  bool embedderCSPEnforcementEnabled() {
    return RuntimeEnabledFeatures::EmbedderCSPEnforcementEnabled();
  }
  bool encryptedMediaHdcpPolicyCheckEnabled() {
    return RuntimeEnabledFeatures::EncryptedMediaHdcpPolicyCheckEnabled();
  }
  bool eventTimingEnabled() {
    return RuntimeEnabledFeatures::EventTimingEnabled();
  }
  bool execCommandInJavaScriptEnabled() {
    return RuntimeEnabledFeatures::ExecCommandInJavaScriptEnabled();
  }
  bool expensiveBackgroundTimerThrottlingEnabled() {
    return RuntimeEnabledFeatures::ExpensiveBackgroundTimerThrottlingEnabled();
  }
  bool experimentalContentSecurityPolicyFeaturesEnabled() {
    return RuntimeEnabledFeatures::ExperimentalContentSecurityPolicyFeaturesEnabled();
  }
  bool experimentalHardwareEchoCancellationEnabled() {
    return RuntimeEnabledFeatures::ExperimentalHardwareEchoCancellationEnabledByRuntimeFlag();
  }
  bool experimentalProductivityFeaturesEnabled() {
    return RuntimeEnabledFeatures::ExperimentalProductivityFeaturesEnabled();
  }
  bool experimentalV8ExtrasEnabled() {
    return RuntimeEnabledFeatures::ExperimentalV8ExtrasEnabled();
  }
  bool extendedImageBitmapOptionsEnabled() {
    return RuntimeEnabledFeatures::ExtendedImageBitmapOptionsEnabled();
  }
  bool extendedTextMetricsEnabled() {
    return RuntimeEnabledFeatures::ExtendedTextMetricsEnabled();
  }
  bool extraWebGLVideoTextureMetadataEnabled() {
    return RuntimeEnabledFeatures::ExtraWebGLVideoTextureMetadataEnabled();
  }
  bool fastMobileScrollingEnabled() {
    return RuntimeEnabledFeatures::FastMobileScrollingEnabled();
  }
  bool featurePolicyAutoplayFeatureEnabled() {
    return RuntimeEnabledFeatures::FeaturePolicyAutoplayFeatureEnabled();
  }
  bool featurePolicyExperimentalFeaturesEnabled() {
    return RuntimeEnabledFeatures::FeaturePolicyExperimentalFeaturesEnabled();
  }
  bool featurePolicyForPermissionsEnabled() {
    return RuntimeEnabledFeatures::FeaturePolicyForPermissionsEnabled();
  }
  bool featurePolicyJavaScriptInterfaceEnabled() {
    return RuntimeEnabledFeatures::FeaturePolicyJavaScriptInterfaceEnabled();
  }
  bool featurePolicyVibrateFeatureEnabled() {
    return RuntimeEnabledFeatures::FeaturePolicyVibrateFeatureEnabled();
  }
  bool fetchRequestCacheEnabled() {
    return RuntimeEnabledFeatures::FetchRequestCacheEnabled();
  }
  bool fetchRequestKeepaliveEnabled() {
    return RuntimeEnabledFeatures::FetchRequestKeepaliveEnabled();
  }
  bool fetchRequestSignalEnabled() {
    return RuntimeEnabledFeatures::FetchRequestSignalEnabled();
  }
  bool fileSystemEnabled() {
    return RuntimeEnabledFeatures::FileSystemEnabled();
  }
  bool focusOptionsEnabled() {
    return RuntimeEnabledFeatures::FocusOptionsEnabled();
  }
  bool fontCacheScalingEnabled() {
    return RuntimeEnabledFeatures::FontCacheScalingEnabled();
  }
  bool forceOverlayFullscreenVideoEnabled() {
    return RuntimeEnabledFeatures::ForceOverlayFullscreenVideoEnabled();
  }
  bool forceTallerSelectPopupEnabled() {
    return RuntimeEnabledFeatures::ForceTallerSelectPopupEnabled();
  }
  bool formDataEventEnabled() {
    return RuntimeEnabledFeatures::FormDataEventEnabled();
  }
  bool fractionalMouseEventEnabled() {
    return RuntimeEnabledFeatures::FractionalMouseEventEnabled();
  }
  bool fractionalMouseTypePointerEventEnabled() {
    return RuntimeEnabledFeatures::FractionalMouseTypePointerEventEnabled();
  }
  bool fractionalScrollOffsetsEnabled() {
    return RuntimeEnabledFeatures::FractionalScrollOffsetsEnabled();
  }
  bool framebustingNeedsSameOriginOrUserGestureEnabled() {
    return RuntimeEnabledFeatures::FramebustingNeedsSameOriginOrUserGestureEnabled();
  }
  bool framesTimingFunctionEnabled() {
    return RuntimeEnabledFeatures::FramesTimingFunctionEnabled();
  }
  bool fullscreenOptionsEnabled() {
    return RuntimeEnabledFeatures::FullscreenOptionsEnabled();
  }
  bool fullscreenUnprefixedEnabled() {
    return RuntimeEnabledFeatures::FullscreenUnprefixedEnabled();
  }
  bool gamepadExtensionsEnabled() {
    return RuntimeEnabledFeatures::GamepadExtensionsEnabledByRuntimeFlag();
  }
  bool gamepadVibrationEnabled() {
    return RuntimeEnabledFeatures::GamepadVibrationEnabled();
  }
  bool heapCompactionEnabled() {
    return RuntimeEnabledFeatures::HeapCompactionEnabled();
  }
  bool heapIncrementalMarkingEnabled() {
    return RuntimeEnabledFeatures::HeapIncrementalMarkingEnabled();
  }
  bool heapIncrementalMarkingStressEnabled() {
    return RuntimeEnabledFeatures::HeapIncrementalMarkingStressEnabled();
  }
  bool htmlImportsEnabled() {
    return RuntimeEnabledFeatures::HTMLImportsEnabled();
  }
  bool htmlImportsStyleApplicationEnabled() {
    return RuntimeEnabledFeatures::HTMLImportsStyleApplicationEnabled();
  }
  bool idbObserverEnabled() {
    return RuntimeEnabledFeatures::IDBObserverEnabled();
  }
  bool idleTimeColdModeSpellCheckingEnabled() {
    return RuntimeEnabledFeatures::IdleTimeColdModeSpellCheckingEnabled();
  }
  bool imageDecodingAttributeEnabled() {
    return RuntimeEnabledFeatures::ImageDecodingAttributeEnabled();
  }
  bool imageOrientationEnabled() {
    return RuntimeEnabledFeatures::ImageOrientationEnabled();
  }
  bool implicitRootScrollerEnabled() {
    return RuntimeEnabledFeatures::ImplicitRootScrollerEnabled();
  }
  bool incrementalShadowDOMEnabled() {
    return RuntimeEnabledFeatures::IncrementalShadowDOMEnabled();
  }
  bool inertAttributeEnabled() {
    return RuntimeEnabledFeatures::InertAttributeEnabled();
  }
  bool inputMultipleFieldsUIEnabled() {
    return RuntimeEnabledFeatures::InputMultipleFieldsUIEnabled();
  }
  bool installedAppEnabled() {
    return RuntimeEnabledFeatures::InstalledAppEnabledByRuntimeFlag();
  }
  bool intersectionObserverGeometryMapperEnabled() {
    return RuntimeEnabledFeatures::IntersectionObserverGeometryMapperEnabled();
  }
  bool intersectionObserverV2Enabled() {
    return RuntimeEnabledFeatures::IntersectionObserverV2Enabled();
  }
  bool jsImageDecodeEnabled() {
    return RuntimeEnabledFeatures::JSImageDecodeEnabled();
  }
  bool keyboardLockEnabled() {
    return RuntimeEnabledFeatures::KeyboardLockEnabled();
  }
  bool keyboardMapEnabled() {
    return RuntimeEnabledFeatures::KeyboardMapEnabled();
  }
  bool langAttributeAwareFormControlUIEnabled() {
    return RuntimeEnabledFeatures::LangAttributeAwareFormControlUIEnabled();
  }
  bool layeredAPIEnabled() {
    return RuntimeEnabledFeatures::LayeredAPIEnabled();
  }
  bool layoutNGEnabled() {
    return RuntimeEnabledFeatures::LayoutNGEnabled();
  }
  bool layoutNGBlockFragmentationEnabled() {
    return RuntimeEnabledFeatures::LayoutNGBlockFragmentationEnabled();
  }
  bool layoutNGFlexBoxEnabled() {
    return RuntimeEnabledFeatures::LayoutNGFlexBoxEnabled();
  }
  bool layoutNGFragmentCachingEnabled() {
    return RuntimeEnabledFeatures::LayoutNGFragmentCachingEnabled();
  }
  bool lazyFrameLoadingEnabled() {
    return RuntimeEnabledFeatures::LazyFrameLoadingEnabled();
  }
  bool lazyInitializeMediaControlsEnabled() {
    return RuntimeEnabledFeatures::LazyInitializeMediaControlsEnabled();
  }
  bool lazyParseCSSEnabled() {
    return RuntimeEnabledFeatures::LazyParseCSSEnabled();
  }
  bool loadingWithMojoEnabled() {
    return RuntimeEnabledFeatures::LoadingWithMojoEnabled();
  }
  bool longTaskObserverEnabled() {
    return RuntimeEnabledFeatures::LongTaskObserverEnabled();
  }
  bool longTaskV2Enabled() {
    return RuntimeEnabledFeatures::LongTaskV2Enabled();
  }
  bool lowLatencyCanvasEnabled() {
    return RuntimeEnabledFeatures::LowLatencyCanvasEnabledByRuntimeFlag();
  }
  bool mediaCapabilitiesEnabled() {
    return RuntimeEnabledFeatures::MediaCapabilitiesEnabledByRuntimeFlag();
  }
  bool mediaCapabilitiesEncodingInfoEnabled() {
    return RuntimeEnabledFeatures::MediaCapabilitiesEncodingInfoEnabled();
  }
  bool mediaCaptureEnabled() {
    return RuntimeEnabledFeatures::MediaCaptureEnabled();
  }
  bool mediaCaptureDepthEnabled() {
    return RuntimeEnabledFeatures::MediaCaptureDepthEnabled();
  }
  bool mediaCaptureDepthVideoKindEnabled() {
    return RuntimeEnabledFeatures::MediaCaptureDepthVideoKindEnabled();
  }
  bool mediaCaptureFromVideoEnabled() {
    return RuntimeEnabledFeatures::MediaCaptureFromVideoEnabled();
  }
  bool mediaCastOverlayButtonEnabled() {
    return RuntimeEnabledFeatures::MediaCastOverlayButtonEnabled();
  }
  bool mediaControlsOverlayPlayButtonEnabled() {
    return RuntimeEnabledFeatures::MediaControlsOverlayPlayButtonEnabled();
  }
  bool mediaDocumentDownloadButtonEnabled() {
    return RuntimeEnabledFeatures::MediaDocumentDownloadButtonEnabled();
  }
  bool mediaEngagementBypassAutoplayPoliciesEnabled() {
    return RuntimeEnabledFeatures::MediaEngagementBypassAutoplayPoliciesEnabled();
  }
  bool mediaQueryShapeEnabled() {
    return RuntimeEnabledFeatures::MediaQueryShapeEnabled();
  }
  bool mediaSessionEnabled() {
    return RuntimeEnabledFeatures::MediaSessionEnabled();
  }
  bool mediaSourceExperimentalEnabled() {
    return RuntimeEnabledFeatures::MediaSourceExperimentalEnabled();
  }
  bool mediaSourceNewAbortAndDurationEnabled() {
    return RuntimeEnabledFeatures::MediaSourceNewAbortAndDurationEnabled();
  }
  bool mediaStreamTrackContentHintEnabled() {
    return RuntimeEnabledFeatures::MediaStreamTrackContentHintEnabled();
  }
  bool middleClickAutoscrollEnabled() {
    return RuntimeEnabledFeatures::MiddleClickAutoscrollEnabled();
  }
  bool mobileLayoutThemeEnabled() {
    return RuntimeEnabledFeatures::MobileLayoutThemeEnabled();
  }
  bool modernMediaControlsEnabled() {
    return RuntimeEnabledFeatures::ModernMediaControlsEnabled();
  }
  bool moduleDedicatedWorkerEnabled() {
    return RuntimeEnabledFeatures::ModuleDedicatedWorkerEnabled();
  }
  bool modulePreloadEnabled() {
    return RuntimeEnabledFeatures::ModulePreloadEnabled();
  }
  bool moduleScriptsDynamicImportEnabled() {
    return RuntimeEnabledFeatures::ModuleScriptsDynamicImportEnabled();
  }
  bool moduleScriptsImportMetaUrlEnabled() {
    return RuntimeEnabledFeatures::ModuleScriptsImportMetaUrlEnabled();
  }
  bool mojoBlobURLsEnabled() {
    return RuntimeEnabledFeatures::MojoBlobURLsEnabled();
  }
  bool mojoJSEnabled() {
    return RuntimeEnabledFeatures::MojoJSEnabled();
  }
  bool mojoJSTestEnabled() {
    return RuntimeEnabledFeatures::MojoJSTestEnabled();
  }
  bool multipleColorStopPositionsEnabled() {
    return RuntimeEnabledFeatures::MultipleColorStopPositionsEnabled();
  }
  bool navigatorContentUtilsEnabled() {
    return RuntimeEnabledFeatures::NavigatorContentUtilsEnabled();
  }
  bool navigatorDeviceMemoryEnabled() {
    return RuntimeEnabledFeatures::NavigatorDeviceMemoryEnabled();
  }
  bool netInfoDownlinkEnabled() {
    return RuntimeEnabledFeatures::NetInfoDownlinkEnabled();
  }
  bool netInfoDownlinkHeaderEnabled() {
    return RuntimeEnabledFeatures::NetInfoDownlinkHeaderEnabled();
  }
  bool netInfoDownlinkMaxEnabled() {
    return RuntimeEnabledFeatures::NetInfoDownlinkMaxEnabled();
  }
  bool netInfoEffectiveTypeEnabled() {
    return RuntimeEnabledFeatures::NetInfoEffectiveTypeEnabled();
  }
  bool netInfoEffectiveTypeHeaderEnabled() {
    return RuntimeEnabledFeatures::NetInfoEffectiveTypeHeaderEnabled();
  }
  bool netInfoRttEnabled() {
    return RuntimeEnabledFeatures::NetInfoRttEnabled();
  }
  bool netInfoRttHeaderEnabled() {
    return RuntimeEnabledFeatures::NetInfoRttHeaderEnabled();
  }
  bool netInfoSaveDataEnabled() {
    return RuntimeEnabledFeatures::NetInfoSaveDataEnabled();
  }
  bool networkServiceEnabled() {
    return RuntimeEnabledFeatures::NetworkServiceEnabled();
  }
  bool newRemotePlaybackPipelineEnabled() {
    return RuntimeEnabledFeatures::NewRemotePlaybackPipelineEnabled();
  }
  bool notificationConstructorEnabled() {
    return RuntimeEnabledFeatures::NotificationConstructorEnabled();
  }
  bool notificationContentImageEnabled() {
    return RuntimeEnabledFeatures::NotificationContentImageEnabled();
  }
  bool notificationInlineRepliesEnabled() {
    return RuntimeEnabledFeatures::NotificationInlineRepliesEnabled();
  }
  bool notificationsEnabled() {
    return RuntimeEnabledFeatures::NotificationsEnabled();
  }
  bool nullableDocumentDomainEnabled() {
    return RuntimeEnabledFeatures::NullableDocumentDomainEnabled();
  }
  bool offMainThreadWebSocketEnabled() {
    return RuntimeEnabledFeatures::OffMainThreadWebSocketEnabled();
  }
  bool offscreenCanvasEnabled() {
    return RuntimeEnabledFeatures::OffscreenCanvasEnabled();
  }
  bool offscreenCanvasTextEnabled() {
    return RuntimeEnabledFeatures::OffscreenCanvasTextEnabled();
  }
  bool onDeviceChangeEnabled() {
    return RuntimeEnabledFeatures::OnDeviceChangeEnabled();
  }
  bool orientationEventEnabled() {
    return RuntimeEnabledFeatures::OrientationEventEnabled();
  }
  bool originManifestEnabled() {
    return RuntimeEnabledFeatures::OriginManifestEnabled();
  }
  bool originTrialsEnabled() {
    return RuntimeEnabledFeatures::OriginTrialsEnabled();
  }
  bool originTrialsSampleAPIEnabled() {
    return RuntimeEnabledFeatures::OriginTrialsSampleAPIEnabledByRuntimeFlag();
  }
  bool originTrialsSampleAPIImpliedEnabled() {
    return RuntimeEnabledFeatures::OriginTrialsSampleAPIImpliedEnabledByRuntimeFlag();
  }
  bool outOfBlinkCORSEnabled() {
    return RuntimeEnabledFeatures::OutOfBlinkCORSEnabled();
  }
  bool overflowIconsForMediaControlsEnabled() {
    return RuntimeEnabledFeatures::OverflowIconsForMediaControlsEnabled();
  }
  bool overlayScrollbarsEnabled() {
    return RuntimeEnabledFeatures::OverlayScrollbarsEnabled();
  }
  bool pageLifecycleEnabled() {
    return RuntimeEnabledFeatures::PageLifecycleEnabled();
  }
  bool pagePopupEnabled() {
    return RuntimeEnabledFeatures::PagePopupEnabled();
  }
  bool paintUnderInvalidationCheckingEnabled() {
    return RuntimeEnabledFeatures::PaintUnderInvalidationCheckingEnabled();
  }
  bool partialRasterInvalidationEnabled() {
    return RuntimeEnabledFeatures::PartialRasterInvalidationEnabled();
  }
  bool passiveDocumentEventListenersEnabled() {
    return RuntimeEnabledFeatures::PassiveDocumentEventListenersEnabled();
  }
  bool passPaintVisualRectToCompositorEnabled() {
    return RuntimeEnabledFeatures::PassPaintVisualRectToCompositorEnabled();
  }
  bool paymentAppEnabled() {
    return RuntimeEnabledFeatures::PaymentAppEnabled();
  }
  bool paymentDetailsModifierDataEnabled() {
    return RuntimeEnabledFeatures::PaymentDetailsModifierDataEnabled();
  }
  bool paymentRequestEnabled() {
    return RuntimeEnabledFeatures::PaymentRequestEnabled();
  }
  bool paymentRequestBasicCardEnabled() {
    return RuntimeEnabledFeatures::PaymentRequestBasicCardEnabled();
  }
  bool performanceNavigationTiming2Enabled() {
    return RuntimeEnabledFeatures::PerformanceNavigationTiming2Enabled();
  }
  bool performancePaintTimingEnabled() {
    return RuntimeEnabledFeatures::PerformancePaintTimingEnabled();
  }
  bool permissionDelegationEnabled() {
    return RuntimeEnabledFeatures::PermissionDelegationEnabled();
  }
  bool permissionsEnabled() {
    return RuntimeEnabledFeatures::PermissionsEnabled();
  }
  bool permissionsRequestRevokeEnabled() {
    return RuntimeEnabledFeatures::PermissionsRequestRevokeEnabled();
  }
  bool pictureInPictureEnabled() {
    return RuntimeEnabledFeatures::PictureInPictureEnabled();
  }
  bool pictureInPictureAPIEnabled() {
    return RuntimeEnabledFeatures::PictureInPictureAPIEnabledByRuntimeFlag();
  }
  bool preciseMemoryInfoEnabled() {
    return RuntimeEnabledFeatures::PreciseMemoryInfoEnabled();
  }
  bool preferredImageRasterBoundsEnabled() {
    return RuntimeEnabledFeatures::PreferredImageRasterBoundsEnabled();
  }
  bool prefixedVideoFullscreenEnabled() {
    return RuntimeEnabledFeatures::PrefixedVideoFullscreenEnabled();
  }
  bool preloadDefaultIsMetadataEnabled() {
    return RuntimeEnabledFeatures::PreloadDefaultIsMetadataEnabled();
  }
  bool preloadImageSrcSetEnabled() {
    return RuntimeEnabledFeatures::PreloadImageSrcSetEnabled();
  }
  bool presentationEnabled() {
    return RuntimeEnabledFeatures::PresentationEnabled();
  }
  bool printBrowserEnabled() {
    return RuntimeEnabledFeatures::PrintBrowserEnabled();
  }
  bool priorityHintsEnabled() {
    return RuntimeEnabledFeatures::PriorityHintsEnabled();
  }
  bool pushMessagingEnabled() {
    return RuntimeEnabledFeatures::PushMessagingEnabled();
  }
  bool pwaFullCodeCacheEnabled() {
    return RuntimeEnabledFeatures::PWAFullCodeCacheEnabled();
  }
  bool rasterInducingScrollEnabled() {
    return RuntimeEnabledFeatures::RasterInducingScrollEnabled();
  }
  bool reducedReferrerGranularityEnabled() {
    return RuntimeEnabledFeatures::ReducedReferrerGranularityEnabled();
  }
  bool remotePlaybackEnabled() {
    return RuntimeEnabledFeatures::RemotePlaybackEnabled();
  }
  bool remotePlaybackBackendEnabled() {
    return RuntimeEnabledFeatures::RemotePlaybackBackendEnabled();
  }
  bool renderingPipelineThrottlingEnabled() {
    return RuntimeEnabledFeatures::RenderingPipelineThrottlingEnabled();
  }
  bool renderingPipelineThrottlingLoadingIframesEnabled() {
    return RuntimeEnabledFeatures::RenderingPipelineThrottlingLoadingIframesEnabled();
  }
  bool renderUnicodeControlCharactersEnabled() {
    return RuntimeEnabledFeatures::RenderUnicodeControlCharactersEnabled();
  }
  bool reportingObserverEnabled() {
    return RuntimeEnabledFeatures::ReportingObserverEnabled();
  }
  bool requireCSSExtensionForFileEnabled() {
    return RuntimeEnabledFeatures::RequireCSSExtensionForFileEnabled();
  }
  bool resizeObserverEnabled() {
    return RuntimeEnabledFeatures::ResizeObserverEnabled();
  }
  bool resourceLoadSchedulerEnabled() {
    return RuntimeEnabledFeatures::ResourceLoadSchedulerEnabled();
  }
  bool restrictAppCacheToSecureContextsEnabled() {
    return RuntimeEnabledFeatures::RestrictAppCacheToSecureContextsEnabled();
  }
  bool restrictCanRequestURLCharacterSetEnabled() {
    return RuntimeEnabledFeatures::RestrictCanRequestURLCharacterSetEnabled();
  }
  bool rootLayerScrollingEnabled() {
    return RuntimeEnabledFeatures::RootLayerScrollingEnabled();
  }
  bool rtcPeerConnectionIdEnabled() {
    return RuntimeEnabledFeatures::RtcPeerConnectionIdEnabledByRuntimeFlag();
  }
  bool rtcRtpSenderParametersEnabled() {
    return RuntimeEnabledFeatures::RTCRtpSenderParametersEnabled();
  }
  bool rtcUnifiedPlanEnabled() {
    return RuntimeEnabledFeatures::RTCUnifiedPlanEnabled();
  }
  bool rtcUnifiedPlanByDefaultEnabled() {
    return RuntimeEnabledFeatures::RTCUnifiedPlanByDefaultEnabled();
  }
  bool scriptedSpeechEnabled() {
    return RuntimeEnabledFeatures::ScriptedSpeechEnabled();
  }
  bool scrollAnchorSerializationEnabled() {
    return RuntimeEnabledFeatures::ScrollAnchorSerializationEnabled();
  }
  bool scrollCustomizationEnabled() {
    return RuntimeEnabledFeatures::ScrollCustomizationEnabled();
  }
  bool scrollTopLeftInteropEnabled() {
    return RuntimeEnabledFeatures::ScrollTopLeftInteropEnabled();
  }
  bool secMetadataEnabled() {
    return RuntimeEnabledFeatures::SecMetadataEnabled();
  }
  bool sendBeaconThrowForBlobWithNonSimpleTypeEnabled() {
    return RuntimeEnabledFeatures::SendBeaconThrowForBlobWithNonSimpleTypeEnabled();
  }
  bool sendMouseEventsDisabledFormControlsEnabled() {
    return RuntimeEnabledFeatures::SendMouseEventsDisabledFormControlsEnabled();
  }
  bool sensorEnabled() {
    return RuntimeEnabledFeatures::SensorEnabledByRuntimeFlag();
  }
  bool sensorExtraClassesEnabled() {
    return RuntimeEnabledFeatures::SensorExtraClassesEnabled();
  }
  bool serverTimingEnabled() {
    return RuntimeEnabledFeatures::ServerTimingEnabled();
  }
  bool serviceWorkerScriptFullCodeCacheEnabled() {
    return RuntimeEnabledFeatures::ServiceWorkerScriptFullCodeCacheEnabled();
  }
  bool serviceWorkerUpdateViaCacheEnabled() {
    return RuntimeEnabledFeatures::ServiceWorkerUpdateViaCacheEnabled();
  }
  bool setRootScrollerEnabled() {
    return RuntimeEnabledFeatures::SetRootScrollerEnabled();
  }
  bool shadowDOMV0Enabled() {
    return RuntimeEnabledFeatures::ShadowDOMV0Enabled();
  }
  bool shadowPiercingDescendantCombinatorEnabled() {
    return RuntimeEnabledFeatures::ShadowPiercingDescendantCombinatorEnabled();
  }
  bool shapeDetectionEnabled() {
    return RuntimeEnabledFeatures::ShapeDetectionEnabled();
  }
  bool sharedArrayBufferEnabled() {
    return RuntimeEnabledFeatures::SharedArrayBufferEnabled();
  }
  bool sharedWorkerEnabled() {
    return RuntimeEnabledFeatures::SharedWorkerEnabled();
  }
  bool signatureBasedIntegrityEnabled() {
    return RuntimeEnabledFeatures::SignatureBasedIntegrityEnabledByRuntimeFlag();
  }
  bool slimmingPaintV175Enabled() {
    return RuntimeEnabledFeatures::SlimmingPaintV175Enabled();
  }
  bool slimmingPaintV2Enabled() {
    return RuntimeEnabledFeatures::SlimmingPaintV2Enabled();
  }
  bool slotInFlatTreeEnabled() {
    return RuntimeEnabledFeatures::SlotInFlatTreeEnabled();
  }
  bool smilEnabled() {
    return RuntimeEnabledFeatures::SMILEnabled();
  }
  bool smoothScrollJSInterventionEnabled() {
    return RuntimeEnabledFeatures::SmoothScrollJSInterventionEnabled();
  }
  bool stableBlinkFeaturesEnabled() {
    return RuntimeEnabledFeatures::StableBlinkFeaturesEnabled();
  }
  bool stackedCSSPropertyAnimationsEnabled() {
    return RuntimeEnabledFeatures::StackedCSSPropertyAnimationsEnabled();
  }
  bool stopInBackgroundEnabled() {
    return RuntimeEnabledFeatures::StopInBackgroundEnabled();
  }
  bool stopLoadingInBackgroundEnabled() {
    return RuntimeEnabledFeatures::StopLoadingInBackgroundEnabled();
  }
  bool stopNonTimersInBackgroundEnabled() {
    return RuntimeEnabledFeatures::StopNonTimersInBackgroundEnabled();
  }
  bool timerThrottlingForBackgroundTabsEnabled() {
    return RuntimeEnabledFeatures::TimerThrottlingForBackgroundTabsEnabled();
  }
  bool timerThrottlingForHiddenFramesEnabled() {
    return RuntimeEnabledFeatures::TimerThrottlingForHiddenFramesEnabled();
  }
  bool touchEventFeatureDetectionEnabled() {
    return RuntimeEnabledFeatures::TouchEventFeatureDetectionEnabledByRuntimeFlag();
  }
  bool touchpadAndWheelScrollLatchingEnabled() {
    return RuntimeEnabledFeatures::TouchpadAndWheelScrollLatchingEnabled();
  }
  bool trackLayoutPassesPerBlockEnabled() {
    return RuntimeEnabledFeatures::TrackLayoutPassesPerBlockEnabled();
  }
  bool trustedDOMTypesEnabled() {
    return RuntimeEnabledFeatures::TrustedDOMTypesEnabled();
  }
  bool trustedEventsDefaultActionEnabled() {
    return RuntimeEnabledFeatures::TrustedEventsDefaultActionEnabled();
  }
  bool unclosedFormControlIsInvalidEnabled() {
    return RuntimeEnabledFeatures::UnclosedFormControlIsInvalidEnabled();
  }
  bool unifiedTouchAdjustmentEnabled() {
    return RuntimeEnabledFeatures::UnifiedTouchAdjustmentEnabled();
  }
  bool userActivationV2Enabled() {
    return RuntimeEnabledFeatures::UserActivationV2Enabled();
  }
  bool v8ContextSnapshotEnabled() {
    return RuntimeEnabledFeatures::V8ContextSnapshotEnabled();
  }
  bool v8IdleTasksEnabled() {
    return RuntimeEnabledFeatures::V8IdleTasksEnabled();
  }
  bool videoFullscreenDetectionEnabled() {
    return RuntimeEnabledFeatures::VideoFullscreenDetectionEnabled();
  }
  bool videoFullscreenOrientationLockEnabled() {
    return RuntimeEnabledFeatures::VideoFullscreenOrientationLockEnabled();
  }
  bool videoRotateToFullscreenEnabled() {
    return RuntimeEnabledFeatures::VideoRotateToFullscreenEnabled();
  }
  bool visibilityCollapseColumnEnabled() {
    return RuntimeEnabledFeatures::VisibilityCollapseColumnEnabled();
  }
  bool visibilityCollapseRowEnabled() {
    return RuntimeEnabledFeatures::VisibilityCollapseRowEnabled();
  }
  bool visualViewportAPIEnabled() {
    return RuntimeEnabledFeatures::VisualViewportAPIEnabled();
  }
  bool wakeLockEnabled() {
    return RuntimeEnabledFeatures::WakeLockEnabled();
  }
  bool webAnimationsAPIEnabled() {
    return RuntimeEnabledFeatures::WebAnimationsAPIEnabled();
  }
  bool webAnimationsSVGEnabled() {
    return RuntimeEnabledFeatures::WebAnimationsSVGEnabled();
  }
  bool webAssemblyStreamingEnabled() {
    return RuntimeEnabledFeatures::WebAssemblyStreamingEnabled();
  }
  bool webAuthEnabled() {
    return RuntimeEnabledFeatures::WebAuthEnabled();
  }
  bool webBluetoothEnabled() {
    return RuntimeEnabledFeatures::WebBluetoothEnabled();
  }
  bool webFontsCacheAwareTimeoutAdaptationEnabled() {
    return RuntimeEnabledFeatures::WebFontsCacheAwareTimeoutAdaptationEnabled();
  }
  bool webglDraftExtensionsEnabled() {
    return RuntimeEnabledFeatures::WebGLDraftExtensionsEnabled();
  }
  bool webglImageChromiumEnabled() {
    return RuntimeEnabledFeatures::WebGLImageChromiumEnabled();
  }
  bool webLocksAPIEnabled() {
    return RuntimeEnabledFeatures::WebLocksAPIEnabledByRuntimeFlag();
  }
  bool webNFCEnabled() {
    return RuntimeEnabledFeatures::WebNFCEnabled();
  }
  bool webRtcVaapiHWVP8EncodingEnabled() {
    return RuntimeEnabledFeatures::WebRtcVaapiHWVP8EncodingEnabledByRuntimeFlag();
  }
  bool webShareEnabled() {
    return RuntimeEnabledFeatures::WebShareEnabled();
  }
  bool webUSBEnabled() {
    return RuntimeEnabledFeatures::WebUSBEnabled();
  }
  bool webUSBOnDedicatedAndSharedWorkersEnabled() {
    return RuntimeEnabledFeatures::WebUSBOnDedicatedAndSharedWorkersEnabled();
  }
  bool webVREnabled() {
    return RuntimeEnabledFeatures::WebVREnabledByRuntimeFlag();
  }
  bool webVTTRegionsEnabled() {
    return RuntimeEnabledFeatures::WebVTTRegionsEnabled();
  }
  bool webXREnabled() {
    return RuntimeEnabledFeatures::WebXREnabledByRuntimeFlag();
  }
  bool webXRGamepadSupportEnabled() {
    return RuntimeEnabledFeatures::WebXRGamepadSupportEnabledByRuntimeFlag();
  }
  bool webXRHitTestEnabled() {
    return RuntimeEnabledFeatures::WebXRHitTestEnabled();
  }
  bool workerNosniffBlockEnabled() {
    return RuntimeEnabledFeatures::WorkerNosniffBlockEnabled();
  }
  bool workerNosniffWarnEnabled() {
    return RuntimeEnabledFeatures::WorkerNosniffWarnEnabled();
  }
  bool workletEnabled() {
    return RuntimeEnabledFeatures::WorkletEnabled();
  }
  bool workStealingInScriptRunnerEnabled() {
    return RuntimeEnabledFeatures::WorkStealingInScriptRunnerEnabled();
  }
  bool xsltEnabled() {
    return RuntimeEnabledFeatures::XSLTEnabled();
  }

 private:
  InternalRuntimeFlags() {}
};

} // namespace blink

#endif // InternalRuntimeFlags_h
