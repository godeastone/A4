// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/settings_macros.h.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/frame/settings.json5


#ifndef SettingsMacros_h
#define SettingsMacros_h

#define SETTINGS_GETTERS_AND_SETTERS \
    bool GetDOMPasteAllowed() const { return DOMPasteAllowed_; } \
    void SetDOMPasteAllowed(bool DOMPasteAllowed); \
    int GetAccelerated2dCanvasMSAASampleCount() const { return accelerated2dCanvasMSAASampleCount_; } \
    void SetAccelerated2dCanvasMSAASampleCount(int accelerated2dCanvasMSAASampleCount); \
    bool GetAcceleratedCompositingEnabled() const { return acceleratedCompositingEnabled_; } \
    void SetAcceleratedCompositingEnabled(bool acceleratedCompositingEnabled); \
    bool GetAccessibilityEnabled() const { return accessibilityEnabled_; } \
    void SetAccessibilityEnabled(bool accessibilityEnabled); \
    double GetAccessibilityFontScaleFactor() const { return accessibilityFontScaleFactor_; } \
    void SetAccessibilityFontScaleFactor(double accessibilityFontScaleFactor); \
    bool GetAccessibilityPasswordValuesEnabled() const { return accessibilityPasswordValuesEnabled_; } \
    void SetAccessibilityPasswordValuesEnabled(bool accessibilityPasswordValuesEnabled); \
    bool GetAllowCustomScrollbarInMainFrame() const { return allowCustomScrollbarInMainFrame_; } \
    void SetAllowCustomScrollbarInMainFrame(bool allowCustomScrollbarInMainFrame); \
    bool GetAllowFileAccessFromFileURLs() const { return allowFileAccessFromFileURLs_; } \
    void SetAllowFileAccessFromFileURLs(bool allowFileAccessFromFileURLs); \
    bool GetAllowGeolocationOnInsecureOrigins() const { return allowGeolocationOnInsecureOrigins_; } \
    void SetAllowGeolocationOnInsecureOrigins(bool allowGeolocationOnInsecureOrigins); \
    bool GetAllowRunningOfInsecureContent() const { return allowRunningOfInsecureContent_; } \
    void SetAllowRunningOfInsecureContent(bool allowRunningOfInsecureContent); \
    bool GetAllowScriptsToCloseWindows() const { return allowScriptsToCloseWindows_; } \
    void SetAllowScriptsToCloseWindows(bool allowScriptsToCloseWindows); \
    bool GetAllowUniversalAccessFromFileURLs() const { return allowUniversalAccessFromFileURLs_; } \
    void SetAllowUniversalAccessFromFileURLs(bool allowUniversalAccessFromFileURLs); \
    bool GetAlwaysShowContextMenuOnTouch() const { return alwaysShowContextMenuOnTouch_; } \
    void SetAlwaysShowContextMenuOnTouch(bool alwaysShowContextMenuOnTouch); \
    bool GetAntialiased2dCanvasEnabled() const { return antialiased2dCanvasEnabled_; } \
    void SetAntialiased2dCanvasEnabled(bool antialiased2dCanvasEnabled); \
    bool GetAntialiasedClips2dCanvasEnabled() const { return antialiasedClips2dCanvasEnabled_; } \
    void SetAntialiasedClips2dCanvasEnabled(bool antialiasedClips2dCanvasEnabled); \
    AutoplayPolicy::Type GetAutoplayPolicy() const { return autoplayPolicy_; } \
    void SetAutoplayPolicy(AutoplayPolicy::Type autoplayPolicy); \
    int GetAvailableHoverTypes() const { return availableHoverTypes_; } \
    void SetAvailableHoverTypes(int availableHoverTypes); \
    int GetAvailablePointerTypes() const { return availablePointerTypes_; } \
    void SetAvailablePointerTypes(int availablePointerTypes); \
    bool GetBarrelButtonForDragEnabled() const { return barrelButtonForDragEnabled_; } \
    void SetBarrelButtonForDragEnabled(bool barrelButtonForDragEnabled); \
    bool GetCookieEnabled() const { return cookieEnabled_; } \
    void SetCookieEnabled(bool cookieEnabled); \
    bool GetCSSExternalScannerNoPreload() const { return cssExternalScannerNoPreload_; } \
    void SetCSSExternalScannerNoPreload(bool cssExternalScannerNoPreload); \
    bool GetCSSExternalScannerPreload() const { return cssExternalScannerPreload_; } \
    void SetCSSExternalScannerPreload(bool cssExternalScannerPreload); \
    bool GetDataSaverHoldbackMediaApi() const { return dataSaverHoldbackMediaApi_; } \
    void SetDataSaverHoldbackMediaApi(bool dataSaverHoldbackMediaApi); \
    bool GetDataSaverHoldbackWebApi() const { return dataSaverHoldbackWebApi_; } \
    void SetDataSaverHoldbackWebApi(bool dataSaverHoldbackWebApi); \
    int GetDefaultFixedFontSize() const { return defaultFixedFontSize_; } \
    void SetDefaultFixedFontSize(int defaultFixedFontSize); \
    int GetDefaultFontSize() const { return defaultFontSize_; } \
    void SetDefaultFontSize(int defaultFontSize); \
    const String& GetDefaultTextEncodingName() const { return defaultTextEncodingName_; } \
    void SetDefaultTextEncodingName(const String& defaultTextEncodingName); \
    const String& GetDefaultVideoPosterURL() const { return defaultVideoPosterURL_; } \
    void SetDefaultVideoPosterURL(const String& defaultVideoPosterURL); \
    double GetDeviceScaleAdjustment() const { return deviceScaleAdjustment_; } \
    void SetDeviceScaleAdjustment(double deviceScaleAdjustment); \
    bool GetDeviceSupportsTouch() const { return deviceSupportsTouch_; } \
    void SetDeviceSupportsTouch(bool deviceSupportsTouch); \
    bool GetDisableReadingFromCanvas() const { return disableReadingFromCanvas_; } \
    void SetDisableReadingFromCanvas(bool disableReadingFromCanvas); \
    bool GetDisallowFetchForDocWrittenScriptsInMainFrame() const { return disallowFetchForDocWrittenScriptsInMainFrame_; } \
    void SetDisallowFetchForDocWrittenScriptsInMainFrame(bool disallowFetchForDocWrittenScriptsInMainFrame); \
    bool GetDisallowFetchForDocWrittenScriptsInMainFrameIfEffectively2G() const { return disallowFetchForDocWrittenScriptsInMainFrameIfEffectively2G_; } \
    void SetDisallowFetchForDocWrittenScriptsInMainFrameIfEffectively2G(bool disallowFetchForDocWrittenScriptsInMainFrameIfEffectively2G); \
    bool GetDisallowFetchForDocWrittenScriptsInMainFrameOnSlowConnections() const { return disallowFetchForDocWrittenScriptsInMainFrameOnSlowConnections_; } \
    void SetDisallowFetchForDocWrittenScriptsInMainFrameOnSlowConnections(bool disallowFetchForDocWrittenScriptsInMainFrameOnSlowConnections); \
    WebDisplayMode GetDisplayModeOverride() const { return displayModeOverride_; } \
    void SetDisplayModeOverride(WebDisplayMode displayModeOverride); \
    bool GetDNSPrefetchingEnabled() const { return dnsPrefetchingEnabled_; } \
    void SetDNSPrefetchingEnabled(bool dnsPrefetchingEnabled); \
    bool GetDoHtmlPreloadScanning() const { return doHtmlPreloadScanning_; } \
    void SetDoHtmlPreloadScanning(bool doHtmlPreloadScanning); \
    bool GetDoNotUpdateSelectionOnMutatingSelectionRange() const { return doNotUpdateSelectionOnMutatingSelectionRange_; } \
    void SetDoNotUpdateSelectionOnMutatingSelectionRange(bool doNotUpdateSelectionOnMutatingSelectionRange); \
    bool GetDownloadableBinaryFontsEnabled() const { return downloadableBinaryFontsEnabled_; } \
    void SetDownloadableBinaryFontsEnabled(bool downloadableBinaryFontsEnabled); \
    EditingBehaviorType GetEditingBehaviorType() const { return editingBehaviorType_; } \
    void SetEditingBehaviorType(EditingBehaviorType editingBehaviorType); \
    bool GetEmbeddedMediaExperienceEnabled() const { return embeddedMediaExperienceEnabled_; } \
    void SetEmbeddedMediaExperienceEnabled(bool embeddedMediaExperienceEnabled); \
    bool GetFetchImagePlaceholders() const { return fetchImagePlaceholders_; } \
    void SetFetchImagePlaceholders(bool fetchImagePlaceholders); \
    bool GetForceAndroidOverlayScrollbar() const { return forceAndroidOverlayScrollbar_; } \
    void SetForceAndroidOverlayScrollbar(bool forceAndroidOverlayScrollbar); \
    bool GetForceMainWorldInitialization() const { return forceMainWorldInitialization_; } \
    void SetForceMainWorldInitialization(bool forceMainWorldInitialization); \
    bool GetForcePreloadNoneForMediaElements() const { return forcePreloadNoneForMediaElements_; } \
    void SetForcePreloadNoneForMediaElements(bool forcePreloadNoneForMediaElements); \
    bool GetForceTouchEventFeatureDetectionForInspector() const { return forceTouchEventFeatureDetectionForInspector_; } \
    void SetForceTouchEventFeatureDetectionForInspector(bool forceTouchEventFeatureDetectionForInspector); \
    bool GetForceZeroLayoutHeight() const { return forceZeroLayoutHeight_; } \
    void SetForceZeroLayoutHeight(bool forceZeroLayoutHeight); \
    bool GetFullscreenSupported() const { return fullscreenSupported_; } \
    void SetFullscreenSupported(bool fullscreenSupported); \
    bool GetHideDownloadUI() const { return hideDownloadUI_; } \
    void SetHideDownloadUI(bool hideDownloadUI); \
    bool GetHideScrollbars() const { return hideScrollbars_; } \
    void SetHideScrollbars(bool hideScrollbars); \
    double GetHighContrastContrast() const { return highContrastContrast_; } \
    void SetHighContrastContrast(double highContrastContrast); \
    bool GetHighContrastGrayscale() const { return highContrastGrayscale_; } \
    void SetHighContrastGrayscale(bool highContrastGrayscale); \
    HighContrastImagePolicy GetHighContrastImagePolicy() const { return highContrastImagePolicy_; } \
    void SetHighContrastImagePolicy(HighContrastImagePolicy highContrastImagePolicy); \
    HighContrastMode GetHighContrastMode() const { return highContrastMode_; } \
    void SetHighContrastMode(HighContrastMode highContrastMode); \
    bool GetHistoryEntryRequiresUserGesture() const { return historyEntryRequiresUserGesture_; } \
    void SetHistoryEntryRequiresUserGesture(bool historyEntryRequiresUserGesture); \
    bool GetHyperlinkAuditingEnabled() const { return hyperlinkAuditingEnabled_; } \
    void SetHyperlinkAuditingEnabled(bool hyperlinkAuditingEnabled); \
    bool GetIgnoreMainFrameOverflowHiddenQuirk() const { return ignoreMainFrameOverflowHiddenQuirk_; } \
    void SetIgnoreMainFrameOverflowHiddenQuirk(bool ignoreMainFrameOverflowHiddenQuirk); \
    ImageAnimationPolicy GetImageAnimationPolicy() const { return imageAnimationPolicy_; } \
    void SetImageAnimationPolicy(ImageAnimationPolicy imageAnimationPolicy); \
    bool GetImagesEnabled() const { return imagesEnabled_; } \
    void SetImagesEnabled(bool imagesEnabled); \
    bool GetImmersiveModeEnabled() const { return immersiveModeEnabled_; } \
    void SetImmersiveModeEnabled(bool immersiveModeEnabled); \
    bool GetInlineTextBoxAccessibilityEnabled() const { return inlineTextBoxAccessibilityEnabled_; } \
    void SetInlineTextBoxAccessibilityEnabled(bool inlineTextBoxAccessibilityEnabled); \
    bool GetJavaScriptCanAccessClipboard() const { return javaScriptCanAccessClipboard_; } \
    void SetJavaScriptCanAccessClipboard(bool javaScriptCanAccessClipboard); \
    bool GetLoadWithOverviewMode() const { return loadWithOverviewMode_; } \
    void SetLoadWithOverviewMode(bool loadWithOverviewMode); \
    bool GetLoadsImagesAutomatically() const { return loadsImagesAutomatically_; } \
    void SetLoadsImagesAutomatically(bool loadsImagesAutomatically); \
    bool GetLocalStorageEnabled() const { return localStorageEnabled_; } \
    void SetLocalStorageEnabled(bool localStorageEnabled); \
    bool GetLogDnsPrefetchAndPreconnect() const { return logDnsPrefetchAndPreconnect_; } \
    void SetLogDnsPrefetchAndPreconnect(bool logDnsPrefetchAndPreconnect); \
    bool GetLogPreload() const { return logPreload_; } \
    void SetLogPreload(bool logPreload); \
    WebEffectiveConnectionType GetLowPriorityIframesThreshold() const { return lowPriorityIframesThreshold_; } \
    void SetLowPriorityIframesThreshold(WebEffectiveConnectionType lowPriorityIframesThreshold); \
    bool GetMainFrameClipsContent() const { return mainFrameClipsContent_; } \
    void SetMainFrameClipsContent(bool mainFrameClipsContent); \
    bool GetMainFrameResizesAreOrientationChanges() const { return mainFrameResizesAreOrientationChanges_; } \
    void SetMainFrameResizesAreOrientationChanges(bool mainFrameResizesAreOrientationChanges); \
    int GetMaxTouchPoints() const { return maxTouchPoints_; } \
    void SetMaxTouchPoints(int maxTouchPoints); \
    bool GetMediaControlsEnabled() const { return mediaControlsEnabled_; } \
    void SetMediaControlsEnabled(bool mediaControlsEnabled); \
    bool GetMediaDownloadInProductHelpEnabled() const { return mediaDownloadInProductHelpEnabled_; } \
    void SetMediaDownloadInProductHelpEnabled(bool mediaDownloadInProductHelpEnabled); \
    const String& GetMediaPlaybackGestureWhitelistScope() const { return mediaPlaybackGestureWhitelistScope_; } \
    void SetMediaPlaybackGestureWhitelistScope(const String& mediaPlaybackGestureWhitelistScope); \
    const String& GetMediaTypeOverride() const { return mediaTypeOverride_; } \
    void SetMediaTypeOverride(const String& mediaTypeOverride); \
    int GetMinimumAccelerated2dCanvasSize() const { return minimumAccelerated2dCanvasSize_; } \
    void SetMinimumAccelerated2dCanvasSize(int minimumAccelerated2dCanvasSize); \
    int GetMinimumFontSize() const { return minimumFontSize_; } \
    void SetMinimumFontSize(int minimumFontSize); \
    int GetMinimumLogicalFontSize() const { return minimumLogicalFontSize_; } \
    void SetMinimumLogicalFontSize(int minimumLogicalFontSize); \
    bool GetMockGestureTapHighlightsEnabled() const { return mockGestureTapHighlightsEnabled_; } \
    void SetMockGestureTapHighlightsEnabled(bool mockGestureTapHighlightsEnabled); \
    bool GetMultiTargetTapNotificationEnabled() const { return multiTargetTapNotificationEnabled_; } \
    void SetMultiTargetTapNotificationEnabled(bool multiTargetTapNotificationEnabled); \
    bool GetNavigateOnDragDrop() const { return navigateOnDragDrop_; } \
    void SetNavigateOnDragDrop(bool navigateOnDragDrop); \
    const String& GetNavigatorPlatformOverride() const { return navigatorPlatformOverride_; } \
    void SetNavigatorPlatformOverride(const String& navigatorPlatformOverride); \
    bool GetOfflineWebApplicationCacheEnabled() const { return offlineWebApplicationCacheEnabled_; } \
    void SetOfflineWebApplicationCacheEnabled(bool offlineWebApplicationCacheEnabled); \
    PassiveListenerDefault GetPassiveListenerDefault() const { return passiveListenerDefault_; } \
    void SetPassiveListenerDefault(PassiveListenerDefault passiveListenerDefault); \
    double GetPasswordEchoDurationInSeconds() const { return passwordEchoDurationInSeconds_; } \
    void SetPasswordEchoDurationInSeconds(double passwordEchoDurationInSeconds); \
    bool GetPasswordEchoEnabled() const { return passwordEchoEnabled_; } \
    void SetPasswordEchoEnabled(bool passwordEchoEnabled); \
    bool GetPictureInPictureEnabled() const { return pictureInPictureEnabled_; } \
    void SetPictureInPictureEnabled(bool pictureInPictureEnabled); \
    bool GetPluginsEnabled() const { return pluginsEnabled_; } \
    void SetPluginsEnabled(bool pluginsEnabled); \
    bool GetPreferCompositingToLCDTextEnabled() const { return preferCompositingToLCDTextEnabled_; } \
    void SetPreferCompositingToLCDTextEnabled(bool preferCompositingToLCDTextEnabled); \
    bool GetPreferHiddenVolumeControls() const { return preferHiddenVolumeControls_; } \
    void SetPreferHiddenVolumeControls(bool preferHiddenVolumeControls); \
    bool GetPresentationReceiver() const { return presentationReceiver_; } \
    void SetPresentationReceiver(bool presentationReceiver); \
    bool GetPresentationRequiresUserGesture() const { return presentationRequiresUserGesture_; } \
    void SetPresentationRequiresUserGesture(bool presentationRequiresUserGesture); \
    HoverType GetPrimaryHoverType() const { return primaryHoverType_; } \
    void SetPrimaryHoverType(HoverType primaryHoverType); \
    PointerType GetPrimaryPointerType() const { return primaryPointerType_; } \
    void SetPrimaryPointerType(PointerType primaryPointerType); \
    bool GetReportScreenSizeInPhysicalPixelsQuirk() const { return reportScreenSizeInPhysicalPixelsQuirk_; } \
    void SetReportScreenSizeInPhysicalPixelsQuirk(bool reportScreenSizeInPhysicalPixelsQuirk); \
    bool GetRubberBandingOnCompositorThread() const { return rubberBandingOnCompositorThread_; } \
    void SetRubberBandingOnCompositorThread(bool rubberBandingOnCompositorThread); \
    SavePreviousDocumentResources GetSavePreviousDocumentResources() const { return savePreviousDocumentResources_; } \
    void SetSavePreviousDocumentResources(SavePreviousDocumentResources savePreviousDocumentResources); \
    bool GetScriptEnabled() const { return scriptEnabled_; } \
    void SetScriptEnabled(bool scriptEnabled); \
    bool GetScrollAnimatorEnabled() const { return scrollAnimatorEnabled_; } \
    void SetScrollAnimatorEnabled(bool scrollAnimatorEnabled); \
    bool GetSelectTrailingWhitespaceEnabled() const { return selectTrailingWhitespaceEnabled_; } \
    void SetSelectTrailingWhitespaceEnabled(bool selectTrailingWhitespaceEnabled); \
    bool GetSelectionIncludesAltImageText() const { return selectionIncludesAltImageText_; } \
    void SetSelectionIncludesAltImageText(bool selectionIncludesAltImageText); \
    SelectionStrategy GetSelectionStrategy() const { return selectionStrategy_; } \
    void SetSelectionStrategy(SelectionStrategy selectionStrategy); \
    bool GetShouldClearDocumentBackground() const { return shouldClearDocumentBackground_; } \
    void SetShouldClearDocumentBackground(bool shouldClearDocumentBackground); \
    bool GetShouldPrintBackgrounds() const { return shouldPrintBackgrounds_; } \
    void SetShouldPrintBackgrounds(bool shouldPrintBackgrounds); \
    bool GetShouldRespectImageOrientation() const { return shouldRespectImageOrientation_; } \
    void SetShouldRespectImageOrientation(bool shouldRespectImageOrientation); \
    bool GetShouldReuseGlobalForUnownedMainFrame() const { return shouldReuseGlobalForUnownedMainFrame_; } \
    void SetShouldReuseGlobalForUnownedMainFrame(bool shouldReuseGlobalForUnownedMainFrame); \
    bool GetShouldThrottlePushState() const { return shouldThrottlePushState_; } \
    void SetShouldThrottlePushState(bool shouldThrottlePushState); \
    bool GetShowContextMenuOnMouseUp() const { return showContextMenuOnMouseUp_; } \
    void SetShowContextMenuOnMouseUp(bool showContextMenuOnMouseUp); \
    bool GetSmartInsertDeleteEnabled() const { return smartInsertDeleteEnabled_; } \
    void SetSmartInsertDeleteEnabled(bool smartInsertDeleteEnabled); \
    bool GetSmoothScrollForFindEnabled() const { return smoothScrollForFindEnabled_; } \
    void SetSmoothScrollForFindEnabled(bool smoothScrollForFindEnabled); \
    bool GetSpatialNavigationEnabled() const { return spatialNavigationEnabled_; } \
    void SetSpatialNavigationEnabled(bool spatialNavigationEnabled); \
    bool GetSpellCheckEnabledByDefault() const { return spellCheckEnabledByDefault_; } \
    void SetSpellCheckEnabledByDefault(bool spellCheckEnabledByDefault); \
    bool GetStrictMixedContentChecking() const { return strictMixedContentChecking_; } \
    void SetStrictMixedContentChecking(bool strictMixedContentChecking); \
    bool GetStrictMixedContentCheckingForPlugin() const { return strictMixedContentCheckingForPlugin_; } \
    void SetStrictMixedContentCheckingForPlugin(bool strictMixedContentCheckingForPlugin); \
    bool GetStrictPowerfulFeatureRestrictions() const { return strictPowerfulFeatureRestrictions_; } \
    void SetStrictPowerfulFeatureRestrictions(bool strictPowerfulFeatureRestrictions); \
    bool GetStrictlyBlockBlockableMixedContent() const { return strictlyBlockBlockableMixedContent_; } \
    void SetStrictlyBlockBlockableMixedContent(bool strictlyBlockBlockableMixedContent); \
    bool GetSupportsMultipleWindows() const { return supportsMultipleWindows_; } \
    void SetSupportsMultipleWindows(bool supportsMultipleWindows); \
    bool GetSyncXHRInDocumentsEnabled() const { return syncXHRInDocumentsEnabled_; } \
    void SetSyncXHRInDocumentsEnabled(bool syncXHRInDocumentsEnabled); \
    bool GetTextAreasAreResizable() const { return textAreasAreResizable_; } \
    void SetTextAreasAreResizable(bool textAreasAreResizable); \
    const String& GetTextTrackBackgroundColor() const { return textTrackBackgroundColor_; } \
    void SetTextTrackBackgroundColor(const String& textTrackBackgroundColor); \
    const String& GetTextTrackFontFamily() const { return textTrackFontFamily_; } \
    void SetTextTrackFontFamily(const String& textTrackFontFamily); \
    const String& GetTextTrackFontStyle() const { return textTrackFontStyle_; } \
    void SetTextTrackFontStyle(const String& textTrackFontStyle); \
    const String& GetTextTrackFontVariant() const { return textTrackFontVariant_; } \
    void SetTextTrackFontVariant(const String& textTrackFontVariant); \
    TextTrackKindUserPreference GetTextTrackKindUserPreference() const { return textTrackKindUserPreference_; } \
    void SetTextTrackKindUserPreference(TextTrackKindUserPreference textTrackKindUserPreference); \
    double GetTextTrackMarginPercentage() const { return textTrackMarginPercentage_; } \
    void SetTextTrackMarginPercentage(double textTrackMarginPercentage); \
    const String& GetTextTrackTextColor() const { return textTrackTextColor_; } \
    void SetTextTrackTextColor(const String& textTrackTextColor); \
    const String& GetTextTrackTextShadow() const { return textTrackTextShadow_; } \
    void SetTextTrackTextShadow(const String& textTrackTextShadow); \
    const String& GetTextTrackTextSize() const { return textTrackTextSize_; } \
    void SetTextTrackTextSize(const String& textTrackTextSize); \
    bool GetThreadedScrollingEnabled() const { return threadedScrollingEnabled_; } \
    void SetThreadedScrollingEnabled(bool threadedScrollingEnabled); \
    bool GetTouchAdjustmentEnabled() const { return touchAdjustmentEnabled_; } \
    void SetTouchAdjustmentEnabled(bool touchAdjustmentEnabled); \
    bool GetTouchDragDropEnabled() const { return touchDragDropEnabled_; } \
    void SetTouchDragDropEnabled(bool touchDragDropEnabled); \
    bool GetTouchEditingEnabled() const { return touchEditingEnabled_; } \
    void SetTouchEditingEnabled(bool touchEditingEnabled); \
    bool GetUseLegacyBackgroundSizeShorthandBehavior() const { return useLegacyBackgroundSizeShorthandBehavior_; } \
    void SetUseLegacyBackgroundSizeShorthandBehavior(bool useLegacyBackgroundSizeShorthandBehavior); \
    bool GetUseSolidColorScrollbars() const { return useSolidColorScrollbars_; } \
    void SetUseSolidColorScrollbars(bool useSolidColorScrollbars); \
    bool GetUseWideViewport() const { return useWideViewport_; } \
    void SetUseWideViewport(bool useWideViewport); \
    V8CacheOptions GetV8CacheOptions() const { return v8CacheOptions_; } \
    void SetV8CacheOptions(V8CacheOptions v8CacheOptions); \
    int GetValidationMessageTimerMagnification() const { return validationMessageTimerMagnification_; } \
    void SetValidationMessageTimerMagnification(int validationMessageTimerMagnification); \
    bool GetViewportEnabled() const { return viewportEnabled_; } \
    void SetViewportEnabled(bool viewportEnabled); \
    bool GetViewportMetaEnabled() const { return viewportMetaEnabled_; } \
    void SetViewportMetaEnabled(bool viewportMetaEnabled); \
    bool GetViewportMetaMergeContentQuirk() const { return viewportMetaMergeContentQuirk_; } \
    void SetViewportMetaMergeContentQuirk(bool viewportMetaMergeContentQuirk); \
    bool GetViewportMetaZeroValuesQuirk() const { return viewportMetaZeroValuesQuirk_; } \
    void SetViewportMetaZeroValuesQuirk(bool viewportMetaZeroValuesQuirk); \
    WebViewportStyle GetViewportStyle() const { return viewportStyle_; } \
    void SetViewportStyle(WebViewportStyle viewportStyle); \
    bool GetWebGL1Enabled() const { return webGL1Enabled_; } \
    void SetWebGL1Enabled(bool webGL1Enabled); \
    bool GetWebGL2Enabled() const { return webGL2Enabled_; } \
    void SetWebGL2Enabled(bool webGL2Enabled); \
    bool GetWebGLErrorsToConsoleEnabled() const { return webGLErrorsToConsoleEnabled_; } \
    void SetWebGLErrorsToConsoleEnabled(bool webGLErrorsToConsoleEnabled); \
    bool GetWebSecurityEnabled() const { return webSecurityEnabled_; } \
    void SetWebSecurityEnabled(bool webSecurityEnabled); \
    bool GetWideViewportQuirkEnabled() const { return wideViewportQuirkEnabled_; } \
    void SetWideViewportQuirkEnabled(bool wideViewportQuirkEnabled); \
    bool GetXSSAuditorEnabled() const { return xssAuditorEnabled_; } \
    void SetXSSAuditorEnabled(bool xssAuditorEnabled); \
    void SetFromStrings(const String& name, const String& value);
// End of SETTINGS_GETTERS_AND_SETTERS.

#define SETTINGS_MEMBER_VARIABLES \
    int accelerated2dCanvasMSAASampleCount_; \
    double accessibilityFontScaleFactor_; \
    AutoplayPolicy::Type autoplayPolicy_; \
    int availableHoverTypes_; \
    int availablePointerTypes_; \
    int defaultFixedFontSize_; \
    int defaultFontSize_; \
    String defaultTextEncodingName_; \
    String defaultVideoPosterURL_; \
    double deviceScaleAdjustment_; \
    WebDisplayMode displayModeOverride_; \
    EditingBehaviorType editingBehaviorType_; \
    double highContrastContrast_; \
    HighContrastImagePolicy highContrastImagePolicy_; \
    HighContrastMode highContrastMode_; \
    ImageAnimationPolicy imageAnimationPolicy_; \
    WebEffectiveConnectionType lowPriorityIframesThreshold_; \
    int maxTouchPoints_; \
    String mediaPlaybackGestureWhitelistScope_; \
    String mediaTypeOverride_; \
    int minimumAccelerated2dCanvasSize_; \
    int minimumFontSize_; \
    int minimumLogicalFontSize_; \
    String navigatorPlatformOverride_; \
    PassiveListenerDefault passiveListenerDefault_; \
    double passwordEchoDurationInSeconds_; \
    HoverType primaryHoverType_; \
    PointerType primaryPointerType_; \
    SavePreviousDocumentResources savePreviousDocumentResources_; \
    SelectionStrategy selectionStrategy_; \
    String textTrackBackgroundColor_; \
    String textTrackFontFamily_; \
    String textTrackFontStyle_; \
    String textTrackFontVariant_; \
    TextTrackKindUserPreference textTrackKindUserPreference_; \
    double textTrackMarginPercentage_; \
    String textTrackTextColor_; \
    String textTrackTextShadow_; \
    String textTrackTextSize_; \
    V8CacheOptions v8CacheOptions_; \
    int validationMessageTimerMagnification_; \
    WebViewportStyle viewportStyle_; \
    bool DOMPasteAllowed_ : 1; \
    bool acceleratedCompositingEnabled_ : 1; \
    bool accessibilityEnabled_ : 1; \
    bool accessibilityPasswordValuesEnabled_ : 1; \
    bool allowCustomScrollbarInMainFrame_ : 1; \
    bool allowFileAccessFromFileURLs_ : 1; \
    bool allowGeolocationOnInsecureOrigins_ : 1; \
    bool allowRunningOfInsecureContent_ : 1; \
    bool allowScriptsToCloseWindows_ : 1; \
    bool allowUniversalAccessFromFileURLs_ : 1; \
    bool alwaysShowContextMenuOnTouch_ : 1; \
    bool antialiased2dCanvasEnabled_ : 1; \
    bool antialiasedClips2dCanvasEnabled_ : 1; \
    bool barrelButtonForDragEnabled_ : 1; \
    bool cookieEnabled_ : 1; \
    bool cssExternalScannerNoPreload_ : 1; \
    bool cssExternalScannerPreload_ : 1; \
    bool dataSaverHoldbackMediaApi_ : 1; \
    bool dataSaverHoldbackWebApi_ : 1; \
    bool deviceSupportsTouch_ : 1; \
    bool disableReadingFromCanvas_ : 1; \
    bool disallowFetchForDocWrittenScriptsInMainFrame_ : 1; \
    bool disallowFetchForDocWrittenScriptsInMainFrameIfEffectively2G_ : 1; \
    bool disallowFetchForDocWrittenScriptsInMainFrameOnSlowConnections_ : 1; \
    bool dnsPrefetchingEnabled_ : 1; \
    bool doHtmlPreloadScanning_ : 1; \
    bool doNotUpdateSelectionOnMutatingSelectionRange_ : 1; \
    bool downloadableBinaryFontsEnabled_ : 1; \
    bool embeddedMediaExperienceEnabled_ : 1; \
    bool fetchImagePlaceholders_ : 1; \
    bool forceAndroidOverlayScrollbar_ : 1; \
    bool forceMainWorldInitialization_ : 1; \
    bool forcePreloadNoneForMediaElements_ : 1; \
    bool forceTouchEventFeatureDetectionForInspector_ : 1; \
    bool forceZeroLayoutHeight_ : 1; \
    bool fullscreenSupported_ : 1; \
    bool hideDownloadUI_ : 1; \
    bool hideScrollbars_ : 1; \
    bool highContrastGrayscale_ : 1; \
    bool historyEntryRequiresUserGesture_ : 1; \
    bool hyperlinkAuditingEnabled_ : 1; \
    bool ignoreMainFrameOverflowHiddenQuirk_ : 1; \
    bool imagesEnabled_ : 1; \
    bool immersiveModeEnabled_ : 1; \
    bool inlineTextBoxAccessibilityEnabled_ : 1; \
    bool javaScriptCanAccessClipboard_ : 1; \
    bool loadWithOverviewMode_ : 1; \
    bool loadsImagesAutomatically_ : 1; \
    bool localStorageEnabled_ : 1; \
    bool logDnsPrefetchAndPreconnect_ : 1; \
    bool logPreload_ : 1; \
    bool mainFrameClipsContent_ : 1; \
    bool mainFrameResizesAreOrientationChanges_ : 1; \
    bool mediaControlsEnabled_ : 1; \
    bool mediaDownloadInProductHelpEnabled_ : 1; \
    bool mockGestureTapHighlightsEnabled_ : 1; \
    bool multiTargetTapNotificationEnabled_ : 1; \
    bool navigateOnDragDrop_ : 1; \
    bool offlineWebApplicationCacheEnabled_ : 1; \
    bool passwordEchoEnabled_ : 1; \
    bool pictureInPictureEnabled_ : 1; \
    bool pluginsEnabled_ : 1; \
    bool preferCompositingToLCDTextEnabled_ : 1; \
    bool preferHiddenVolumeControls_ : 1; \
    bool presentationReceiver_ : 1; \
    bool presentationRequiresUserGesture_ : 1; \
    bool reportScreenSizeInPhysicalPixelsQuirk_ : 1; \
    bool rubberBandingOnCompositorThread_ : 1; \
    bool scriptEnabled_ : 1; \
    bool scrollAnimatorEnabled_ : 1; \
    bool selectTrailingWhitespaceEnabled_ : 1; \
    bool selectionIncludesAltImageText_ : 1; \
    bool shouldClearDocumentBackground_ : 1; \
    bool shouldPrintBackgrounds_ : 1; \
    bool shouldRespectImageOrientation_ : 1; \
    bool shouldReuseGlobalForUnownedMainFrame_ : 1; \
    bool shouldThrottlePushState_ : 1; \
    bool showContextMenuOnMouseUp_ : 1; \
    bool smartInsertDeleteEnabled_ : 1; \
    bool smoothScrollForFindEnabled_ : 1; \
    bool spatialNavigationEnabled_ : 1; \
    bool spellCheckEnabledByDefault_ : 1; \
    bool strictMixedContentChecking_ : 1; \
    bool strictMixedContentCheckingForPlugin_ : 1; \
    bool strictPowerfulFeatureRestrictions_ : 1; \
    bool strictlyBlockBlockableMixedContent_ : 1; \
    bool supportsMultipleWindows_ : 1; \
    bool syncXHRInDocumentsEnabled_ : 1; \
    bool textAreasAreResizable_ : 1; \
    bool threadedScrollingEnabled_ : 1; \
    bool touchAdjustmentEnabled_ : 1; \
    bool touchDragDropEnabled_ : 1; \
    bool touchEditingEnabled_ : 1; \
    bool useLegacyBackgroundSizeShorthandBehavior_ : 1; \
    bool useSolidColorScrollbars_ : 1; \
    bool useWideViewport_ : 1; \
    bool viewportEnabled_ : 1; \
    bool viewportMetaEnabled_ : 1; \
    bool viewportMetaMergeContentQuirk_ : 1; \
    bool viewportMetaZeroValuesQuirk_ : 1; \
    bool webGL1Enabled_ : 1; \
    bool webGL2Enabled_ : 1; \
    bool webGLErrorsToConsoleEnabled_ : 1; \
    bool webSecurityEnabled_ : 1; \
    bool wideViewportQuirkEnabled_ : 1; \
    bool xssAuditorEnabled_ : 1; \
// End of SETTINGS_MEMBER_VARIABLES.

#define SETTINGS_INITIALIZER_LIST \
    , accelerated2dCanvasMSAASampleCount_(0) \
    , accessibilityFontScaleFactor_(1.0) \
    , autoplayPolicy_(AutoplayPolicy::Type::kNoUserGestureRequired) \
    , availableHoverTypes_(kHoverTypeNone) \
    , availablePointerTypes_(kPointerTypeNone) \
    , defaultFixedFontSize_(0) \
    , defaultFontSize_(0) \
    , deviceScaleAdjustment_(1.0) \
    , displayModeOverride_(kWebDisplayModeUndefined) \
    , editingBehaviorType_(EditingBehaviorTypeForPlatform()) \
    , highContrastContrast_(0) \
    , highContrastImagePolicy_(HighContrastImagePolicy::kFilterAll) \
    , highContrastMode_(HighContrastMode::kOff) \
    , imageAnimationPolicy_(kImageAnimationPolicyAllowed) \
    , lowPriorityIframesThreshold_(WebEffectiveConnectionType::kTypeUnknown) \
    , maxTouchPoints_(0) \
    , mediaTypeOverride_("") \
    , minimumAccelerated2dCanvasSize_(129*128) \
    , minimumFontSize_(0) \
    , minimumLogicalFontSize_(0) \
    , passiveListenerDefault_(PassiveListenerDefault::kFalse) \
    , passwordEchoDurationInSeconds_(1) \
    , primaryHoverType_(kHoverTypeNone) \
    , primaryPointerType_(kPointerTypeNone) \
    , savePreviousDocumentResources_(SavePreviousDocumentResources::kNever) \
    , selectionStrategy_(SelectionStrategy::kCharacter) \
    , textTrackKindUserPreference_(TextTrackKindUserPreference::kDefault) \
    , textTrackMarginPercentage_(0) \
    , v8CacheOptions_(kV8CacheOptionsDefault) \
    , validationMessageTimerMagnification_(50) \
    , viewportStyle_(WebViewportStyle::kDefault) \
    , DOMPasteAllowed_(false) \
    , acceleratedCompositingEnabled_(true) \
    , accessibilityEnabled_(false) \
    , accessibilityPasswordValuesEnabled_(false) \
    , allowCustomScrollbarInMainFrame_(true) \
    , allowFileAccessFromFileURLs_(true) \
    , allowGeolocationOnInsecureOrigins_(false) \
    , allowRunningOfInsecureContent_(true) \
    , allowScriptsToCloseWindows_(false) \
    , allowUniversalAccessFromFileURLs_(true) \
    , alwaysShowContextMenuOnTouch_(true) \
    , antialiased2dCanvasEnabled_(true) \
    , antialiasedClips2dCanvasEnabled_(true) \
    , barrelButtonForDragEnabled_(false) \
    , cookieEnabled_(true) \
    , cssExternalScannerNoPreload_(false) \
    , cssExternalScannerPreload_(false) \
    , dataSaverHoldbackMediaApi_(false) \
    , dataSaverHoldbackWebApi_(false) \
    , deviceSupportsTouch_(false) \
    , disableReadingFromCanvas_(false) \
    , disallowFetchForDocWrittenScriptsInMainFrame_(false) \
    , disallowFetchForDocWrittenScriptsInMainFrameIfEffectively2G_(false) \
    , disallowFetchForDocWrittenScriptsInMainFrameOnSlowConnections_(true) \
    , dnsPrefetchingEnabled_(false) \
    , doHtmlPreloadScanning_(true) \
    , doNotUpdateSelectionOnMutatingSelectionRange_(false) \
    , downloadableBinaryFontsEnabled_(true) \
    , embeddedMediaExperienceEnabled_(false) \
    , fetchImagePlaceholders_(false) \
    , forceAndroidOverlayScrollbar_(false) \
    , forceMainWorldInitialization_(false) \
    , forcePreloadNoneForMediaElements_(false) \
    , forceTouchEventFeatureDetectionForInspector_(false) \
    , forceZeroLayoutHeight_(false) \
    , fullscreenSupported_(true) \
    , hideDownloadUI_(false) \
    , hideScrollbars_(false) \
    , highContrastGrayscale_(false) \
    , historyEntryRequiresUserGesture_(false) \
    , hyperlinkAuditingEnabled_(false) \
    , ignoreMainFrameOverflowHiddenQuirk_(false) \
    , imagesEnabled_(true) \
    , immersiveModeEnabled_(false) \
    , inlineTextBoxAccessibilityEnabled_(false) \
    , javaScriptCanAccessClipboard_(false) \
    , loadWithOverviewMode_(true) \
    , loadsImagesAutomatically_(false) \
    , localStorageEnabled_(false) \
    , logDnsPrefetchAndPreconnect_(false) \
    , logPreload_(false) \
    , mainFrameClipsContent_(true) \
    , mainFrameResizesAreOrientationChanges_(false) \
    , mediaControlsEnabled_(true) \
    , mediaDownloadInProductHelpEnabled_(false) \
    , mockGestureTapHighlightsEnabled_(false) \
    , multiTargetTapNotificationEnabled_(true) \
    , navigateOnDragDrop_(true) \
    , offlineWebApplicationCacheEnabled_(true) \
    , passwordEchoEnabled_(false) \
    , pictureInPictureEnabled_(true) \
    , pluginsEnabled_(false) \
    , preferCompositingToLCDTextEnabled_(false) \
    , preferHiddenVolumeControls_(false) \
    , presentationReceiver_(false) \
    , presentationRequiresUserGesture_(true) \
    , reportScreenSizeInPhysicalPixelsQuirk_(false) \
    , rubberBandingOnCompositorThread_(false) \
    , scriptEnabled_(false) \
    , scrollAnimatorEnabled_(true) \
    , selectTrailingWhitespaceEnabled_(kDefaultSelectTrailingWhitespaceEnabled) \
    , selectionIncludesAltImageText_(false) \
    , shouldClearDocumentBackground_(true) \
    , shouldPrintBackgrounds_(false) \
    , shouldRespectImageOrientation_(false) \
    , shouldReuseGlobalForUnownedMainFrame_(false) \
    , shouldThrottlePushState_(true) \
    , showContextMenuOnMouseUp_(false) \
    , smartInsertDeleteEnabled_(false) \
    , smoothScrollForFindEnabled_(false) \
    , spatialNavigationEnabled_(false) \
    , spellCheckEnabledByDefault_(true) \
    , strictMixedContentChecking_(false) \
    , strictMixedContentCheckingForPlugin_(false) \
    , strictPowerfulFeatureRestrictions_(false) \
    , strictlyBlockBlockableMixedContent_(false) \
    , supportsMultipleWindows_(true) \
    , syncXHRInDocumentsEnabled_(true) \
    , textAreasAreResizable_(false) \
    , threadedScrollingEnabled_(true) \
    , touchAdjustmentEnabled_(true) \
    , touchDragDropEnabled_(false) \
    , touchEditingEnabled_(false) \
    , useLegacyBackgroundSizeShorthandBehavior_(false) \
    , useSolidColorScrollbars_(false) \
    , useWideViewport_(true) \
    , viewportEnabled_(false) \
    , viewportMetaEnabled_(false) \
    , viewportMetaMergeContentQuirk_(false) \
    , viewportMetaZeroValuesQuirk_(false) \
    , webGL1Enabled_(true) \
    , webGL2Enabled_(true) \
    , webGLErrorsToConsoleEnabled_(true) \
    , webSecurityEnabled_(true) \
    , wideViewportQuirkEnabled_(false) \
    , xssAuditorEnabled_(false) \
// End of SETTINGS_INITIALIZER_LIST.

#define SETTINGS_SETTER_BODIES \
void Settings::SetDOMPasteAllowed(bool DOMPasteAllowed) { \
  if (DOMPasteAllowed_ == DOMPasteAllowed) \
    return; \
  DOMPasteAllowed_ = DOMPasteAllowed; \
} \
void Settings::SetAccelerated2dCanvasMSAASampleCount(int accelerated2dCanvasMSAASampleCount) { \
  if (accelerated2dCanvasMSAASampleCount_ == accelerated2dCanvasMSAASampleCount) \
    return; \
  accelerated2dCanvasMSAASampleCount_ = accelerated2dCanvasMSAASampleCount; \
} \
void Settings::SetAcceleratedCompositingEnabled(bool acceleratedCompositingEnabled) { \
  if (acceleratedCompositingEnabled_ == acceleratedCompositingEnabled) \
    return; \
  acceleratedCompositingEnabled_ = acceleratedCompositingEnabled; \
  Invalidate(SettingsDelegate::kAcceleratedCompositingChange); \
} \
void Settings::SetAccessibilityEnabled(bool accessibilityEnabled) { \
  if (accessibilityEnabled_ == accessibilityEnabled) \
    return; \
  accessibilityEnabled_ = accessibilityEnabled; \
  Invalidate(SettingsDelegate::kAccessibilityStateChange); \
} \
void Settings::SetAccessibilityFontScaleFactor(double accessibilityFontScaleFactor) { \
  if (accessibilityFontScaleFactor_ == accessibilityFontScaleFactor) \
    return; \
  accessibilityFontScaleFactor_ = accessibilityFontScaleFactor; \
  Invalidate(SettingsDelegate::kTextAutosizingChange); \
} \
void Settings::SetAccessibilityPasswordValuesEnabled(bool accessibilityPasswordValuesEnabled) { \
  if (accessibilityPasswordValuesEnabled_ == accessibilityPasswordValuesEnabled) \
    return; \
  accessibilityPasswordValuesEnabled_ = accessibilityPasswordValuesEnabled; \
} \
void Settings::SetAllowCustomScrollbarInMainFrame(bool allowCustomScrollbarInMainFrame) { \
  if (allowCustomScrollbarInMainFrame_ == allowCustomScrollbarInMainFrame) \
    return; \
  allowCustomScrollbarInMainFrame_ = allowCustomScrollbarInMainFrame; \
} \
void Settings::SetAllowFileAccessFromFileURLs(bool allowFileAccessFromFileURLs) { \
  if (allowFileAccessFromFileURLs_ == allowFileAccessFromFileURLs) \
    return; \
  allowFileAccessFromFileURLs_ = allowFileAccessFromFileURLs; \
} \
void Settings::SetAllowGeolocationOnInsecureOrigins(bool allowGeolocationOnInsecureOrigins) { \
  if (allowGeolocationOnInsecureOrigins_ == allowGeolocationOnInsecureOrigins) \
    return; \
  allowGeolocationOnInsecureOrigins_ = allowGeolocationOnInsecureOrigins; \
} \
void Settings::SetAllowRunningOfInsecureContent(bool allowRunningOfInsecureContent) { \
  if (allowRunningOfInsecureContent_ == allowRunningOfInsecureContent) \
    return; \
  allowRunningOfInsecureContent_ = allowRunningOfInsecureContent; \
} \
void Settings::SetAllowScriptsToCloseWindows(bool allowScriptsToCloseWindows) { \
  if (allowScriptsToCloseWindows_ == allowScriptsToCloseWindows) \
    return; \
  allowScriptsToCloseWindows_ = allowScriptsToCloseWindows; \
} \
void Settings::SetAllowUniversalAccessFromFileURLs(bool allowUniversalAccessFromFileURLs) { \
  if (allowUniversalAccessFromFileURLs_ == allowUniversalAccessFromFileURLs) \
    return; \
  allowUniversalAccessFromFileURLs_ = allowUniversalAccessFromFileURLs; \
} \
void Settings::SetAlwaysShowContextMenuOnTouch(bool alwaysShowContextMenuOnTouch) { \
  if (alwaysShowContextMenuOnTouch_ == alwaysShowContextMenuOnTouch) \
    return; \
  alwaysShowContextMenuOnTouch_ = alwaysShowContextMenuOnTouch; \
} \
void Settings::SetAntialiased2dCanvasEnabled(bool antialiased2dCanvasEnabled) { \
  if (antialiased2dCanvasEnabled_ == antialiased2dCanvasEnabled) \
    return; \
  antialiased2dCanvasEnabled_ = antialiased2dCanvasEnabled; \
} \
void Settings::SetAntialiasedClips2dCanvasEnabled(bool antialiasedClips2dCanvasEnabled) { \
  if (antialiasedClips2dCanvasEnabled_ == antialiasedClips2dCanvasEnabled) \
    return; \
  antialiasedClips2dCanvasEnabled_ = antialiasedClips2dCanvasEnabled; \
} \
void Settings::SetAutoplayPolicy(AutoplayPolicy::Type autoplayPolicy) { \
  if (autoplayPolicy_ == autoplayPolicy) \
    return; \
  autoplayPolicy_ = autoplayPolicy; \
} \
void Settings::SetAvailableHoverTypes(int availableHoverTypes) { \
  if (availableHoverTypes_ == availableHoverTypes) \
    return; \
  availableHoverTypes_ = availableHoverTypes; \
  Invalidate(SettingsDelegate::kMediaQueryChange); \
} \
void Settings::SetAvailablePointerTypes(int availablePointerTypes) { \
  if (availablePointerTypes_ == availablePointerTypes) \
    return; \
  availablePointerTypes_ = availablePointerTypes; \
  Invalidate(SettingsDelegate::kMediaQueryChange); \
} \
void Settings::SetBarrelButtonForDragEnabled(bool barrelButtonForDragEnabled) { \
  if (barrelButtonForDragEnabled_ == barrelButtonForDragEnabled) \
    return; \
  barrelButtonForDragEnabled_ = barrelButtonForDragEnabled; \
} \
void Settings::SetCookieEnabled(bool cookieEnabled) { \
  if (cookieEnabled_ == cookieEnabled) \
    return; \
  cookieEnabled_ = cookieEnabled; \
} \
void Settings::SetCSSExternalScannerNoPreload(bool cssExternalScannerNoPreload) { \
  if (cssExternalScannerNoPreload_ == cssExternalScannerNoPreload) \
    return; \
  cssExternalScannerNoPreload_ = cssExternalScannerNoPreload; \
} \
void Settings::SetCSSExternalScannerPreload(bool cssExternalScannerPreload) { \
  if (cssExternalScannerPreload_ == cssExternalScannerPreload) \
    return; \
  cssExternalScannerPreload_ = cssExternalScannerPreload; \
} \
void Settings::SetDataSaverHoldbackMediaApi(bool dataSaverHoldbackMediaApi) { \
  if (dataSaverHoldbackMediaApi_ == dataSaverHoldbackMediaApi) \
    return; \
  dataSaverHoldbackMediaApi_ = dataSaverHoldbackMediaApi; \
} \
void Settings::SetDataSaverHoldbackWebApi(bool dataSaverHoldbackWebApi) { \
  if (dataSaverHoldbackWebApi_ == dataSaverHoldbackWebApi) \
    return; \
  dataSaverHoldbackWebApi_ = dataSaverHoldbackWebApi; \
} \
void Settings::SetDefaultFixedFontSize(int defaultFixedFontSize) { \
  if (defaultFixedFontSize_ == defaultFixedFontSize) \
    return; \
  defaultFixedFontSize_ = defaultFixedFontSize; \
  Invalidate(SettingsDelegate::kStyleChange); \
} \
void Settings::SetDefaultFontSize(int defaultFontSize) { \
  if (defaultFontSize_ == defaultFontSize) \
    return; \
  defaultFontSize_ = defaultFontSize; \
  Invalidate(SettingsDelegate::kStyleChange); \
} \
void Settings::SetDefaultTextEncodingName(const String& defaultTextEncodingName) { \
  if (defaultTextEncodingName_ == defaultTextEncodingName) \
    return; \
  defaultTextEncodingName_ = defaultTextEncodingName; \
} \
void Settings::SetDefaultVideoPosterURL(const String& defaultVideoPosterURL) { \
  if (defaultVideoPosterURL_ == defaultVideoPosterURL) \
    return; \
  defaultVideoPosterURL_ = defaultVideoPosterURL; \
} \
void Settings::SetDeviceScaleAdjustment(double deviceScaleAdjustment) { \
  if (deviceScaleAdjustment_ == deviceScaleAdjustment) \
    return; \
  deviceScaleAdjustment_ = deviceScaleAdjustment; \
  Invalidate(SettingsDelegate::kTextAutosizingChange); \
} \
void Settings::SetDeviceSupportsTouch(bool deviceSupportsTouch) { \
  if (deviceSupportsTouch_ == deviceSupportsTouch) \
    return; \
  deviceSupportsTouch_ = deviceSupportsTouch; \
} \
void Settings::SetDisableReadingFromCanvas(bool disableReadingFromCanvas) { \
  if (disableReadingFromCanvas_ == disableReadingFromCanvas) \
    return; \
  disableReadingFromCanvas_ = disableReadingFromCanvas; \
} \
void Settings::SetDisallowFetchForDocWrittenScriptsInMainFrame(bool disallowFetchForDocWrittenScriptsInMainFrame) { \
  if (disallowFetchForDocWrittenScriptsInMainFrame_ == disallowFetchForDocWrittenScriptsInMainFrame) \
    return; \
  disallowFetchForDocWrittenScriptsInMainFrame_ = disallowFetchForDocWrittenScriptsInMainFrame; \
} \
void Settings::SetDisallowFetchForDocWrittenScriptsInMainFrameIfEffectively2G(bool disallowFetchForDocWrittenScriptsInMainFrameIfEffectively2G) { \
  if (disallowFetchForDocWrittenScriptsInMainFrameIfEffectively2G_ == disallowFetchForDocWrittenScriptsInMainFrameIfEffectively2G) \
    return; \
  disallowFetchForDocWrittenScriptsInMainFrameIfEffectively2G_ = disallowFetchForDocWrittenScriptsInMainFrameIfEffectively2G; \
} \
void Settings::SetDisallowFetchForDocWrittenScriptsInMainFrameOnSlowConnections(bool disallowFetchForDocWrittenScriptsInMainFrameOnSlowConnections) { \
  if (disallowFetchForDocWrittenScriptsInMainFrameOnSlowConnections_ == disallowFetchForDocWrittenScriptsInMainFrameOnSlowConnections) \
    return; \
  disallowFetchForDocWrittenScriptsInMainFrameOnSlowConnections_ = disallowFetchForDocWrittenScriptsInMainFrameOnSlowConnections; \
} \
void Settings::SetDisplayModeOverride(WebDisplayMode displayModeOverride) { \
  if (displayModeOverride_ == displayModeOverride) \
    return; \
  displayModeOverride_ = displayModeOverride; \
  Invalidate(SettingsDelegate::kMediaQueryChange); \
} \
void Settings::SetDNSPrefetchingEnabled(bool dnsPrefetchingEnabled) { \
  if (dnsPrefetchingEnabled_ == dnsPrefetchingEnabled) \
    return; \
  dnsPrefetchingEnabled_ = dnsPrefetchingEnabled; \
  Invalidate(SettingsDelegate::kDNSPrefetchingChange); \
} \
void Settings::SetDoHtmlPreloadScanning(bool doHtmlPreloadScanning) { \
  if (doHtmlPreloadScanning_ == doHtmlPreloadScanning) \
    return; \
  doHtmlPreloadScanning_ = doHtmlPreloadScanning; \
} \
void Settings::SetDoNotUpdateSelectionOnMutatingSelectionRange(bool doNotUpdateSelectionOnMutatingSelectionRange) { \
  if (doNotUpdateSelectionOnMutatingSelectionRange_ == doNotUpdateSelectionOnMutatingSelectionRange) \
    return; \
  doNotUpdateSelectionOnMutatingSelectionRange_ = doNotUpdateSelectionOnMutatingSelectionRange; \
} \
void Settings::SetDownloadableBinaryFontsEnabled(bool downloadableBinaryFontsEnabled) { \
  if (downloadableBinaryFontsEnabled_ == downloadableBinaryFontsEnabled) \
    return; \
  downloadableBinaryFontsEnabled_ = downloadableBinaryFontsEnabled; \
} \
void Settings::SetEditingBehaviorType(EditingBehaviorType editingBehaviorType) { \
  if (editingBehaviorType_ == editingBehaviorType) \
    return; \
  editingBehaviorType_ = editingBehaviorType; \
} \
void Settings::SetEmbeddedMediaExperienceEnabled(bool embeddedMediaExperienceEnabled) { \
  if (embeddedMediaExperienceEnabled_ == embeddedMediaExperienceEnabled) \
    return; \
  embeddedMediaExperienceEnabled_ = embeddedMediaExperienceEnabled; \
} \
void Settings::SetFetchImagePlaceholders(bool fetchImagePlaceholders) { \
  if (fetchImagePlaceholders_ == fetchImagePlaceholders) \
    return; \
  fetchImagePlaceholders_ = fetchImagePlaceholders; \
} \
void Settings::SetForceAndroidOverlayScrollbar(bool forceAndroidOverlayScrollbar) { \
  if (forceAndroidOverlayScrollbar_ == forceAndroidOverlayScrollbar) \
    return; \
  forceAndroidOverlayScrollbar_ = forceAndroidOverlayScrollbar; \
} \
void Settings::SetForceMainWorldInitialization(bool forceMainWorldInitialization) { \
  if (forceMainWorldInitialization_ == forceMainWorldInitialization) \
    return; \
  forceMainWorldInitialization_ = forceMainWorldInitialization; \
  Invalidate(SettingsDelegate::kDOMWorldsChange); \
} \
void Settings::SetForcePreloadNoneForMediaElements(bool forcePreloadNoneForMediaElements) { \
  if (forcePreloadNoneForMediaElements_ == forcePreloadNoneForMediaElements) \
    return; \
  forcePreloadNoneForMediaElements_ = forcePreloadNoneForMediaElements; \
} \
void Settings::SetForceTouchEventFeatureDetectionForInspector(bool forceTouchEventFeatureDetectionForInspector) { \
  if (forceTouchEventFeatureDetectionForInspector_ == forceTouchEventFeatureDetectionForInspector) \
    return; \
  forceTouchEventFeatureDetectionForInspector_ = forceTouchEventFeatureDetectionForInspector; \
} \
void Settings::SetForceZeroLayoutHeight(bool forceZeroLayoutHeight) { \
  if (forceZeroLayoutHeight_ == forceZeroLayoutHeight) \
    return; \
  forceZeroLayoutHeight_ = forceZeroLayoutHeight; \
  Invalidate(SettingsDelegate::kViewportDescriptionChange); \
} \
void Settings::SetFullscreenSupported(bool fullscreenSupported) { \
  if (fullscreenSupported_ == fullscreenSupported) \
    return; \
  fullscreenSupported_ = fullscreenSupported; \
} \
void Settings::SetHideDownloadUI(bool hideDownloadUI) { \
  if (hideDownloadUI_ == hideDownloadUI) \
    return; \
  hideDownloadUI_ = hideDownloadUI; \
} \
void Settings::SetHideScrollbars(bool hideScrollbars) { \
  if (hideScrollbars_ == hideScrollbars) \
    return; \
  hideScrollbars_ = hideScrollbars; \
  Invalidate(SettingsDelegate::kViewportScrollbarChange); \
} \
void Settings::SetHighContrastContrast(double highContrastContrast) { \
  if (highContrastContrast_ == highContrastContrast) \
    return; \
  highContrastContrast_ = highContrastContrast; \
} \
void Settings::SetHighContrastGrayscale(bool highContrastGrayscale) { \
  if (highContrastGrayscale_ == highContrastGrayscale) \
    return; \
  highContrastGrayscale_ = highContrastGrayscale; \
} \
void Settings::SetHighContrastImagePolicy(HighContrastImagePolicy highContrastImagePolicy) { \
  if (highContrastImagePolicy_ == highContrastImagePolicy) \
    return; \
  highContrastImagePolicy_ = highContrastImagePolicy; \
} \
void Settings::SetHighContrastMode(HighContrastMode highContrastMode) { \
  if (highContrastMode_ == highContrastMode) \
    return; \
  highContrastMode_ = highContrastMode; \
} \
void Settings::SetHistoryEntryRequiresUserGesture(bool historyEntryRequiresUserGesture) { \
  if (historyEntryRequiresUserGesture_ == historyEntryRequiresUserGesture) \
    return; \
  historyEntryRequiresUserGesture_ = historyEntryRequiresUserGesture; \
} \
void Settings::SetHyperlinkAuditingEnabled(bool hyperlinkAuditingEnabled) { \
  if (hyperlinkAuditingEnabled_ == hyperlinkAuditingEnabled) \
    return; \
  hyperlinkAuditingEnabled_ = hyperlinkAuditingEnabled; \
} \
void Settings::SetIgnoreMainFrameOverflowHiddenQuirk(bool ignoreMainFrameOverflowHiddenQuirk) { \
  if (ignoreMainFrameOverflowHiddenQuirk_ == ignoreMainFrameOverflowHiddenQuirk) \
    return; \
  ignoreMainFrameOverflowHiddenQuirk_ = ignoreMainFrameOverflowHiddenQuirk; \
} \
void Settings::SetImageAnimationPolicy(ImageAnimationPolicy imageAnimationPolicy) { \
  if (imageAnimationPolicy_ == imageAnimationPolicy) \
    return; \
  imageAnimationPolicy_ = imageAnimationPolicy; \
} \
void Settings::SetImagesEnabled(bool imagesEnabled) { \
  if (imagesEnabled_ == imagesEnabled) \
    return; \
  imagesEnabled_ = imagesEnabled; \
  Invalidate(SettingsDelegate::kImageLoadingChange); \
} \
void Settings::SetImmersiveModeEnabled(bool immersiveModeEnabled) { \
  if (immersiveModeEnabled_ == immersiveModeEnabled) \
    return; \
  immersiveModeEnabled_ = immersiveModeEnabled; \
  Invalidate(SettingsDelegate::kMediaControlsChange); \
} \
void Settings::SetInlineTextBoxAccessibilityEnabled(bool inlineTextBoxAccessibilityEnabled) { \
  if (inlineTextBoxAccessibilityEnabled_ == inlineTextBoxAccessibilityEnabled) \
    return; \
  inlineTextBoxAccessibilityEnabled_ = inlineTextBoxAccessibilityEnabled; \
} \
void Settings::SetJavaScriptCanAccessClipboard(bool javaScriptCanAccessClipboard) { \
  if (javaScriptCanAccessClipboard_ == javaScriptCanAccessClipboard) \
    return; \
  javaScriptCanAccessClipboard_ = javaScriptCanAccessClipboard; \
} \
void Settings::SetLoadWithOverviewMode(bool loadWithOverviewMode) { \
  if (loadWithOverviewMode_ == loadWithOverviewMode) \
    return; \
  loadWithOverviewMode_ = loadWithOverviewMode; \
  Invalidate(SettingsDelegate::kViewportDescriptionChange); \
} \
void Settings::SetLoadsImagesAutomatically(bool loadsImagesAutomatically) { \
  if (loadsImagesAutomatically_ == loadsImagesAutomatically) \
    return; \
  loadsImagesAutomatically_ = loadsImagesAutomatically; \
  Invalidate(SettingsDelegate::kImageLoadingChange); \
} \
void Settings::SetLocalStorageEnabled(bool localStorageEnabled) { \
  if (localStorageEnabled_ == localStorageEnabled) \
    return; \
  localStorageEnabled_ = localStorageEnabled; \
} \
void Settings::SetLogDnsPrefetchAndPreconnect(bool logDnsPrefetchAndPreconnect) { \
  if (logDnsPrefetchAndPreconnect_ == logDnsPrefetchAndPreconnect) \
    return; \
  logDnsPrefetchAndPreconnect_ = logDnsPrefetchAndPreconnect; \
} \
void Settings::SetLogPreload(bool logPreload) { \
  if (logPreload_ == logPreload) \
    return; \
  logPreload_ = logPreload; \
} \
void Settings::SetLowPriorityIframesThreshold(WebEffectiveConnectionType lowPriorityIframesThreshold) { \
  if (lowPriorityIframesThreshold_ == lowPriorityIframesThreshold) \
    return; \
  lowPriorityIframesThreshold_ = lowPriorityIframesThreshold; \
} \
void Settings::SetMainFrameClipsContent(bool mainFrameClipsContent) { \
  if (mainFrameClipsContent_ == mainFrameClipsContent) \
    return; \
  mainFrameClipsContent_ = mainFrameClipsContent; \
} \
void Settings::SetMainFrameResizesAreOrientationChanges(bool mainFrameResizesAreOrientationChanges) { \
  if (mainFrameResizesAreOrientationChanges_ == mainFrameResizesAreOrientationChanges) \
    return; \
  mainFrameResizesAreOrientationChanges_ = mainFrameResizesAreOrientationChanges; \
} \
void Settings::SetMaxTouchPoints(int maxTouchPoints) { \
  if (maxTouchPoints_ == maxTouchPoints) \
    return; \
  maxTouchPoints_ = maxTouchPoints; \
} \
void Settings::SetMediaControlsEnabled(bool mediaControlsEnabled) { \
  if (mediaControlsEnabled_ == mediaControlsEnabled) \
    return; \
  mediaControlsEnabled_ = mediaControlsEnabled; \
  Invalidate(SettingsDelegate::kMediaControlsChange); \
} \
void Settings::SetMediaDownloadInProductHelpEnabled(bool mediaDownloadInProductHelpEnabled) { \
  if (mediaDownloadInProductHelpEnabled_ == mediaDownloadInProductHelpEnabled) \
    return; \
  mediaDownloadInProductHelpEnabled_ = mediaDownloadInProductHelpEnabled; \
} \
void Settings::SetMediaPlaybackGestureWhitelistScope(const String& mediaPlaybackGestureWhitelistScope) { \
  if (mediaPlaybackGestureWhitelistScope_ == mediaPlaybackGestureWhitelistScope) \
    return; \
  mediaPlaybackGestureWhitelistScope_ = mediaPlaybackGestureWhitelistScope; \
} \
void Settings::SetMediaTypeOverride(const String& mediaTypeOverride) { \
  if (mediaTypeOverride_ == mediaTypeOverride) \
    return; \
  mediaTypeOverride_ = mediaTypeOverride; \
  Invalidate(SettingsDelegate::kMediaQueryChange); \
} \
void Settings::SetMinimumAccelerated2dCanvasSize(int minimumAccelerated2dCanvasSize) { \
  if (minimumAccelerated2dCanvasSize_ == minimumAccelerated2dCanvasSize) \
    return; \
  minimumAccelerated2dCanvasSize_ = minimumAccelerated2dCanvasSize; \
} \
void Settings::SetMinimumFontSize(int minimumFontSize) { \
  if (minimumFontSize_ == minimumFontSize) \
    return; \
  minimumFontSize_ = minimumFontSize; \
  Invalidate(SettingsDelegate::kStyleChange); \
} \
void Settings::SetMinimumLogicalFontSize(int minimumLogicalFontSize) { \
  if (minimumLogicalFontSize_ == minimumLogicalFontSize) \
    return; \
  minimumLogicalFontSize_ = minimumLogicalFontSize; \
  Invalidate(SettingsDelegate::kStyleChange); \
} \
void Settings::SetMockGestureTapHighlightsEnabled(bool mockGestureTapHighlightsEnabled) { \
  if (mockGestureTapHighlightsEnabled_ == mockGestureTapHighlightsEnabled) \
    return; \
  mockGestureTapHighlightsEnabled_ = mockGestureTapHighlightsEnabled; \
} \
void Settings::SetMultiTargetTapNotificationEnabled(bool multiTargetTapNotificationEnabled) { \
  if (multiTargetTapNotificationEnabled_ == multiTargetTapNotificationEnabled) \
    return; \
  multiTargetTapNotificationEnabled_ = multiTargetTapNotificationEnabled; \
} \
void Settings::SetNavigateOnDragDrop(bool navigateOnDragDrop) { \
  if (navigateOnDragDrop_ == navigateOnDragDrop) \
    return; \
  navigateOnDragDrop_ = navigateOnDragDrop; \
} \
void Settings::SetNavigatorPlatformOverride(const String& navigatorPlatformOverride) { \
  if (navigatorPlatformOverride_ == navigatorPlatformOverride) \
    return; \
  navigatorPlatformOverride_ = navigatorPlatformOverride; \
} \
void Settings::SetOfflineWebApplicationCacheEnabled(bool offlineWebApplicationCacheEnabled) { \
  if (offlineWebApplicationCacheEnabled_ == offlineWebApplicationCacheEnabled) \
    return; \
  offlineWebApplicationCacheEnabled_ = offlineWebApplicationCacheEnabled; \
} \
void Settings::SetPassiveListenerDefault(PassiveListenerDefault passiveListenerDefault) { \
  if (passiveListenerDefault_ == passiveListenerDefault) \
    return; \
  passiveListenerDefault_ = passiveListenerDefault; \
} \
void Settings::SetPasswordEchoDurationInSeconds(double passwordEchoDurationInSeconds) { \
  if (passwordEchoDurationInSeconds_ == passwordEchoDurationInSeconds) \
    return; \
  passwordEchoDurationInSeconds_ = passwordEchoDurationInSeconds; \
} \
void Settings::SetPasswordEchoEnabled(bool passwordEchoEnabled) { \
  if (passwordEchoEnabled_ == passwordEchoEnabled) \
    return; \
  passwordEchoEnabled_ = passwordEchoEnabled; \
} \
void Settings::SetPictureInPictureEnabled(bool pictureInPictureEnabled) { \
  if (pictureInPictureEnabled_ == pictureInPictureEnabled) \
    return; \
  pictureInPictureEnabled_ = pictureInPictureEnabled; \
} \
void Settings::SetPluginsEnabled(bool pluginsEnabled) { \
  if (pluginsEnabled_ == pluginsEnabled) \
    return; \
  pluginsEnabled_ = pluginsEnabled; \
  Invalidate(SettingsDelegate::kPluginsChange); \
} \
void Settings::SetPreferCompositingToLCDTextEnabled(bool preferCompositingToLCDTextEnabled) { \
  if (preferCompositingToLCDTextEnabled_ == preferCompositingToLCDTextEnabled) \
    return; \
  preferCompositingToLCDTextEnabled_ = preferCompositingToLCDTextEnabled; \
  Invalidate(SettingsDelegate::kAcceleratedCompositingChange); \
} \
void Settings::SetPreferHiddenVolumeControls(bool preferHiddenVolumeControls) { \
  if (preferHiddenVolumeControls_ == preferHiddenVolumeControls) \
    return; \
  preferHiddenVolumeControls_ = preferHiddenVolumeControls; \
} \
void Settings::SetPresentationReceiver(bool presentationReceiver) { \
  if (presentationReceiver_ == presentationReceiver) \
    return; \
  presentationReceiver_ = presentationReceiver; \
} \
void Settings::SetPresentationRequiresUserGesture(bool presentationRequiresUserGesture) { \
  if (presentationRequiresUserGesture_ == presentationRequiresUserGesture) \
    return; \
  presentationRequiresUserGesture_ = presentationRequiresUserGesture; \
} \
void Settings::SetPrimaryHoverType(HoverType primaryHoverType) { \
  if (primaryHoverType_ == primaryHoverType) \
    return; \
  primaryHoverType_ = primaryHoverType; \
  Invalidate(SettingsDelegate::kMediaQueryChange); \
} \
void Settings::SetPrimaryPointerType(PointerType primaryPointerType) { \
  if (primaryPointerType_ == primaryPointerType) \
    return; \
  primaryPointerType_ = primaryPointerType; \
  Invalidate(SettingsDelegate::kMediaQueryChange); \
} \
void Settings::SetReportScreenSizeInPhysicalPixelsQuirk(bool reportScreenSizeInPhysicalPixelsQuirk) { \
  if (reportScreenSizeInPhysicalPixelsQuirk_ == reportScreenSizeInPhysicalPixelsQuirk) \
    return; \
  reportScreenSizeInPhysicalPixelsQuirk_ = reportScreenSizeInPhysicalPixelsQuirk; \
} \
void Settings::SetRubberBandingOnCompositorThread(bool rubberBandingOnCompositorThread) { \
  if (rubberBandingOnCompositorThread_ == rubberBandingOnCompositorThread) \
    return; \
  rubberBandingOnCompositorThread_ = rubberBandingOnCompositorThread; \
} \
void Settings::SetSavePreviousDocumentResources(SavePreviousDocumentResources savePreviousDocumentResources) { \
  if (savePreviousDocumentResources_ == savePreviousDocumentResources) \
    return; \
  savePreviousDocumentResources_ = savePreviousDocumentResources; \
} \
void Settings::SetScriptEnabled(bool scriptEnabled) { \
  if (scriptEnabled_ == scriptEnabled) \
    return; \
  scriptEnabled_ = scriptEnabled; \
} \
void Settings::SetScrollAnimatorEnabled(bool scrollAnimatorEnabled) { \
  if (scrollAnimatorEnabled_ == scrollAnimatorEnabled) \
    return; \
  scrollAnimatorEnabled_ = scrollAnimatorEnabled; \
} \
void Settings::SetSelectTrailingWhitespaceEnabled(bool selectTrailingWhitespaceEnabled) { \
  if (selectTrailingWhitespaceEnabled_ == selectTrailingWhitespaceEnabled) \
    return; \
  selectTrailingWhitespaceEnabled_ = selectTrailingWhitespaceEnabled; \
} \
void Settings::SetSelectionIncludesAltImageText(bool selectionIncludesAltImageText) { \
  if (selectionIncludesAltImageText_ == selectionIncludesAltImageText) \
    return; \
  selectionIncludesAltImageText_ = selectionIncludesAltImageText; \
} \
void Settings::SetSelectionStrategy(SelectionStrategy selectionStrategy) { \
  if (selectionStrategy_ == selectionStrategy) \
    return; \
  selectionStrategy_ = selectionStrategy; \
} \
void Settings::SetShouldClearDocumentBackground(bool shouldClearDocumentBackground) { \
  if (shouldClearDocumentBackground_ == shouldClearDocumentBackground) \
    return; \
  shouldClearDocumentBackground_ = shouldClearDocumentBackground; \
} \
void Settings::SetShouldPrintBackgrounds(bool shouldPrintBackgrounds) { \
  if (shouldPrintBackgrounds_ == shouldPrintBackgrounds) \
    return; \
  shouldPrintBackgrounds_ = shouldPrintBackgrounds; \
} \
void Settings::SetShouldRespectImageOrientation(bool shouldRespectImageOrientation) { \
  if (shouldRespectImageOrientation_ == shouldRespectImageOrientation) \
    return; \
  shouldRespectImageOrientation_ = shouldRespectImageOrientation; \
} \
void Settings::SetShouldReuseGlobalForUnownedMainFrame(bool shouldReuseGlobalForUnownedMainFrame) { \
  if (shouldReuseGlobalForUnownedMainFrame_ == shouldReuseGlobalForUnownedMainFrame) \
    return; \
  shouldReuseGlobalForUnownedMainFrame_ = shouldReuseGlobalForUnownedMainFrame; \
} \
void Settings::SetShouldThrottlePushState(bool shouldThrottlePushState) { \
  if (shouldThrottlePushState_ == shouldThrottlePushState) \
    return; \
  shouldThrottlePushState_ = shouldThrottlePushState; \
} \
void Settings::SetShowContextMenuOnMouseUp(bool showContextMenuOnMouseUp) { \
  if (showContextMenuOnMouseUp_ == showContextMenuOnMouseUp) \
    return; \
  showContextMenuOnMouseUp_ = showContextMenuOnMouseUp; \
} \
void Settings::SetSmartInsertDeleteEnabled(bool smartInsertDeleteEnabled) { \
  if (smartInsertDeleteEnabled_ == smartInsertDeleteEnabled) \
    return; \
  smartInsertDeleteEnabled_ = smartInsertDeleteEnabled; \
} \
void Settings::SetSmoothScrollForFindEnabled(bool smoothScrollForFindEnabled) { \
  if (smoothScrollForFindEnabled_ == smoothScrollForFindEnabled) \
    return; \
  smoothScrollForFindEnabled_ = smoothScrollForFindEnabled; \
} \
void Settings::SetSpatialNavigationEnabled(bool spatialNavigationEnabled) { \
  if (spatialNavigationEnabled_ == spatialNavigationEnabled) \
    return; \
  spatialNavigationEnabled_ = spatialNavigationEnabled; \
} \
void Settings::SetSpellCheckEnabledByDefault(bool spellCheckEnabledByDefault) { \
  if (spellCheckEnabledByDefault_ == spellCheckEnabledByDefault) \
    return; \
  spellCheckEnabledByDefault_ = spellCheckEnabledByDefault; \
} \
void Settings::SetStrictMixedContentChecking(bool strictMixedContentChecking) { \
  if (strictMixedContentChecking_ == strictMixedContentChecking) \
    return; \
  strictMixedContentChecking_ = strictMixedContentChecking; \
} \
void Settings::SetStrictMixedContentCheckingForPlugin(bool strictMixedContentCheckingForPlugin) { \
  if (strictMixedContentCheckingForPlugin_ == strictMixedContentCheckingForPlugin) \
    return; \
  strictMixedContentCheckingForPlugin_ = strictMixedContentCheckingForPlugin; \
} \
void Settings::SetStrictPowerfulFeatureRestrictions(bool strictPowerfulFeatureRestrictions) { \
  if (strictPowerfulFeatureRestrictions_ == strictPowerfulFeatureRestrictions) \
    return; \
  strictPowerfulFeatureRestrictions_ = strictPowerfulFeatureRestrictions; \
} \
void Settings::SetStrictlyBlockBlockableMixedContent(bool strictlyBlockBlockableMixedContent) { \
  if (strictlyBlockBlockableMixedContent_ == strictlyBlockBlockableMixedContent) \
    return; \
  strictlyBlockBlockableMixedContent_ = strictlyBlockBlockableMixedContent; \
} \
void Settings::SetSupportsMultipleWindows(bool supportsMultipleWindows) { \
  if (supportsMultipleWindows_ == supportsMultipleWindows) \
    return; \
  supportsMultipleWindows_ = supportsMultipleWindows; \
} \
void Settings::SetSyncXHRInDocumentsEnabled(bool syncXHRInDocumentsEnabled) { \
  if (syncXHRInDocumentsEnabled_ == syncXHRInDocumentsEnabled) \
    return; \
  syncXHRInDocumentsEnabled_ = syncXHRInDocumentsEnabled; \
} \
void Settings::SetTextAreasAreResizable(bool textAreasAreResizable) { \
  if (textAreasAreResizable_ == textAreasAreResizable) \
    return; \
  textAreasAreResizable_ = textAreasAreResizable; \
  Invalidate(SettingsDelegate::kStyleChange); \
} \
void Settings::SetTextTrackBackgroundColor(const String& textTrackBackgroundColor) { \
  if (textTrackBackgroundColor_ == textTrackBackgroundColor) \
    return; \
  textTrackBackgroundColor_ = textTrackBackgroundColor; \
} \
void Settings::SetTextTrackFontFamily(const String& textTrackFontFamily) { \
  if (textTrackFontFamily_ == textTrackFontFamily) \
    return; \
  textTrackFontFamily_ = textTrackFontFamily; \
} \
void Settings::SetTextTrackFontStyle(const String& textTrackFontStyle) { \
  if (textTrackFontStyle_ == textTrackFontStyle) \
    return; \
  textTrackFontStyle_ = textTrackFontStyle; \
} \
void Settings::SetTextTrackFontVariant(const String& textTrackFontVariant) { \
  if (textTrackFontVariant_ == textTrackFontVariant) \
    return; \
  textTrackFontVariant_ = textTrackFontVariant; \
} \
void Settings::SetTextTrackKindUserPreference(TextTrackKindUserPreference textTrackKindUserPreference) { \
  if (textTrackKindUserPreference_ == textTrackKindUserPreference) \
    return; \
  textTrackKindUserPreference_ = textTrackKindUserPreference; \
  Invalidate(SettingsDelegate::kTextTrackKindUserPreferenceChange); \
} \
void Settings::SetTextTrackMarginPercentage(double textTrackMarginPercentage) { \
  if (textTrackMarginPercentage_ == textTrackMarginPercentage) \
    return; \
  textTrackMarginPercentage_ = textTrackMarginPercentage; \
} \
void Settings::SetTextTrackTextColor(const String& textTrackTextColor) { \
  if (textTrackTextColor_ == textTrackTextColor) \
    return; \
  textTrackTextColor_ = textTrackTextColor; \
} \
void Settings::SetTextTrackTextShadow(const String& textTrackTextShadow) { \
  if (textTrackTextShadow_ == textTrackTextShadow) \
    return; \
  textTrackTextShadow_ = textTrackTextShadow; \
} \
void Settings::SetTextTrackTextSize(const String& textTrackTextSize) { \
  if (textTrackTextSize_ == textTrackTextSize) \
    return; \
  textTrackTextSize_ = textTrackTextSize; \
} \
void Settings::SetThreadedScrollingEnabled(bool threadedScrollingEnabled) { \
  if (threadedScrollingEnabled_ == threadedScrollingEnabled) \
    return; \
  threadedScrollingEnabled_ = threadedScrollingEnabled; \
  Invalidate(SettingsDelegate::kStyleChange); \
} \
void Settings::SetTouchAdjustmentEnabled(bool touchAdjustmentEnabled) { \
  if (touchAdjustmentEnabled_ == touchAdjustmentEnabled) \
    return; \
  touchAdjustmentEnabled_ = touchAdjustmentEnabled; \
} \
void Settings::SetTouchDragDropEnabled(bool touchDragDropEnabled) { \
  if (touchDragDropEnabled_ == touchDragDropEnabled) \
    return; \
  touchDragDropEnabled_ = touchDragDropEnabled; \
} \
void Settings::SetTouchEditingEnabled(bool touchEditingEnabled) { \
  if (touchEditingEnabled_ == touchEditingEnabled) \
    return; \
  touchEditingEnabled_ = touchEditingEnabled; \
} \
void Settings::SetUseLegacyBackgroundSizeShorthandBehavior(bool useLegacyBackgroundSizeShorthandBehavior) { \
  if (useLegacyBackgroundSizeShorthandBehavior_ == useLegacyBackgroundSizeShorthandBehavior) \
    return; \
  useLegacyBackgroundSizeShorthandBehavior_ = useLegacyBackgroundSizeShorthandBehavior; \
} \
void Settings::SetUseSolidColorScrollbars(bool useSolidColorScrollbars) { \
  if (useSolidColorScrollbars_ == useSolidColorScrollbars) \
    return; \
  useSolidColorScrollbars_ = useSolidColorScrollbars; \
} \
void Settings::SetUseWideViewport(bool useWideViewport) { \
  if (useWideViewport_ == useWideViewport) \
    return; \
  useWideViewport_ = useWideViewport; \
  Invalidate(SettingsDelegate::kViewportDescriptionChange); \
} \
void Settings::SetV8CacheOptions(V8CacheOptions v8CacheOptions) { \
  if (v8CacheOptions_ == v8CacheOptions) \
    return; \
  v8CacheOptions_ = v8CacheOptions; \
} \
void Settings::SetValidationMessageTimerMagnification(int validationMessageTimerMagnification) { \
  if (validationMessageTimerMagnification_ == validationMessageTimerMagnification) \
    return; \
  validationMessageTimerMagnification_ = validationMessageTimerMagnification; \
} \
void Settings::SetViewportEnabled(bool viewportEnabled) { \
  if (viewportEnabled_ == viewportEnabled) \
    return; \
  viewportEnabled_ = viewportEnabled; \
  Invalidate(SettingsDelegate::kViewportDescriptionChange); \
} \
void Settings::SetViewportMetaEnabled(bool viewportMetaEnabled) { \
  if (viewportMetaEnabled_ == viewportMetaEnabled) \
    return; \
  viewportMetaEnabled_ = viewportMetaEnabled; \
  Invalidate(SettingsDelegate::kViewportDescriptionChange); \
} \
void Settings::SetViewportMetaMergeContentQuirk(bool viewportMetaMergeContentQuirk) { \
  if (viewportMetaMergeContentQuirk_ == viewportMetaMergeContentQuirk) \
    return; \
  viewportMetaMergeContentQuirk_ = viewportMetaMergeContentQuirk; \
} \
void Settings::SetViewportMetaZeroValuesQuirk(bool viewportMetaZeroValuesQuirk) { \
  if (viewportMetaZeroValuesQuirk_ == viewportMetaZeroValuesQuirk) \
    return; \
  viewportMetaZeroValuesQuirk_ = viewportMetaZeroValuesQuirk; \
} \
void Settings::SetViewportStyle(WebViewportStyle viewportStyle) { \
  if (viewportStyle_ == viewportStyle) \
    return; \
  viewportStyle_ = viewportStyle; \
  Invalidate(SettingsDelegate::kViewportRuleChange); \
} \
void Settings::SetWebGL1Enabled(bool webGL1Enabled) { \
  if (webGL1Enabled_ == webGL1Enabled) \
    return; \
  webGL1Enabled_ = webGL1Enabled; \
} \
void Settings::SetWebGL2Enabled(bool webGL2Enabled) { \
  if (webGL2Enabled_ == webGL2Enabled) \
    return; \
  webGL2Enabled_ = webGL2Enabled; \
} \
void Settings::SetWebGLErrorsToConsoleEnabled(bool webGLErrorsToConsoleEnabled) { \
  if (webGLErrorsToConsoleEnabled_ == webGLErrorsToConsoleEnabled) \
    return; \
  webGLErrorsToConsoleEnabled_ = webGLErrorsToConsoleEnabled; \
} \
void Settings::SetWebSecurityEnabled(bool webSecurityEnabled) { \
  if (webSecurityEnabled_ == webSecurityEnabled) \
    return; \
  webSecurityEnabled_ = webSecurityEnabled; \
} \
void Settings::SetWideViewportQuirkEnabled(bool wideViewportQuirkEnabled) { \
  if (wideViewportQuirkEnabled_ == wideViewportQuirkEnabled) \
    return; \
  wideViewportQuirkEnabled_ = wideViewportQuirkEnabled; \
} \
void Settings::SetXSSAuditorEnabled(bool xssAuditorEnabled) { \
  if (xssAuditorEnabled_ == xssAuditorEnabled) \
    return; \
  xssAuditorEnabled_ = xssAuditorEnabled; \
} \
void Settings::SetFromStrings(const String& name, const String& value) { \
  if (name == "DOMPasteAllowed") { \
    SetDOMPasteAllowed( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "accelerated2dCanvasMSAASampleCount") { \
    SetAccelerated2dCanvasMSAASampleCount( \
      value.ToInt() \
    ); \
    return; \
  } \
  if (name == "acceleratedCompositingEnabled") { \
    SetAcceleratedCompositingEnabled( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "accessibilityEnabled") { \
    SetAccessibilityEnabled( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "accessibilityFontScaleFactor") { \
    SetAccessibilityFontScaleFactor( \
      value.ToDouble() \
    ); \
    return; \
  } \
  if (name == "accessibilityPasswordValuesEnabled") { \
    SetAccessibilityPasswordValuesEnabled( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "allowCustomScrollbarInMainFrame") { \
    SetAllowCustomScrollbarInMainFrame( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "allowFileAccessFromFileURLs") { \
    SetAllowFileAccessFromFileURLs( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "allowGeolocationOnInsecureOrigins") { \
    SetAllowGeolocationOnInsecureOrigins( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "allowRunningOfInsecureContent") { \
    SetAllowRunningOfInsecureContent( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "allowScriptsToCloseWindows") { \
    SetAllowScriptsToCloseWindows( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "allowUniversalAccessFromFileURLs") { \
    SetAllowUniversalAccessFromFileURLs( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "alwaysShowContextMenuOnTouch") { \
    SetAlwaysShowContextMenuOnTouch( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "antialiased2dCanvasEnabled") { \
    SetAntialiased2dCanvasEnabled( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "antialiasedClips2dCanvasEnabled") { \
    SetAntialiasedClips2dCanvasEnabled( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "autoplayPolicy") { \
    SetAutoplayPolicy( \
      static_cast<AutoplayPolicy::Type>(value.ToInt()) \
    ); \
    return; \
  } \
  if (name == "availableHoverTypes") { \
    SetAvailableHoverTypes( \
      value.ToInt() \
    ); \
    return; \
  } \
  if (name == "availablePointerTypes") { \
    SetAvailablePointerTypes( \
      value.ToInt() \
    ); \
    return; \
  } \
  if (name == "barrelButtonForDragEnabled") { \
    SetBarrelButtonForDragEnabled( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "cookieEnabled") { \
    SetCookieEnabled( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "cssExternalScannerNoPreload") { \
    SetCSSExternalScannerNoPreload( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "cssExternalScannerPreload") { \
    SetCSSExternalScannerPreload( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "dataSaverHoldbackMediaApi") { \
    SetDataSaverHoldbackMediaApi( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "dataSaverHoldbackWebApi") { \
    SetDataSaverHoldbackWebApi( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "defaultFixedFontSize") { \
    SetDefaultFixedFontSize( \
      value.ToInt() \
    ); \
    return; \
  } \
  if (name == "defaultFontSize") { \
    SetDefaultFontSize( \
      value.ToInt() \
    ); \
    return; \
  } \
  if (name == "defaultTextEncodingName") { \
    SetDefaultTextEncodingName( \
      value \
    ); \
    return; \
  } \
  if (name == "defaultVideoPosterURL") { \
    SetDefaultVideoPosterURL( \
      value \
    ); \
    return; \
  } \
  if (name == "deviceScaleAdjustment") { \
    SetDeviceScaleAdjustment( \
      value.ToDouble() \
    ); \
    return; \
  } \
  if (name == "deviceSupportsTouch") { \
    SetDeviceSupportsTouch( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "disableReadingFromCanvas") { \
    SetDisableReadingFromCanvas( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "disallowFetchForDocWrittenScriptsInMainFrame") { \
    SetDisallowFetchForDocWrittenScriptsInMainFrame( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "disallowFetchForDocWrittenScriptsInMainFrameIfEffectively2G") { \
    SetDisallowFetchForDocWrittenScriptsInMainFrameIfEffectively2G( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "disallowFetchForDocWrittenScriptsInMainFrameOnSlowConnections") { \
    SetDisallowFetchForDocWrittenScriptsInMainFrameOnSlowConnections( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "displayModeOverride") { \
    SetDisplayModeOverride( \
      static_cast<WebDisplayMode>(value.ToInt()) \
    ); \
    return; \
  } \
  if (name == "dnsPrefetchingEnabled") { \
    SetDNSPrefetchingEnabled( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "doHtmlPreloadScanning") { \
    SetDoHtmlPreloadScanning( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "doNotUpdateSelectionOnMutatingSelectionRange") { \
    SetDoNotUpdateSelectionOnMutatingSelectionRange( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "downloadableBinaryFontsEnabled") { \
    SetDownloadableBinaryFontsEnabled( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "editingBehaviorType") { \
    SetEditingBehaviorType( \
      static_cast<EditingBehaviorType>(value.ToInt()) \
    ); \
    return; \
  } \
  if (name == "embeddedMediaExperienceEnabled") { \
    SetEmbeddedMediaExperienceEnabled( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "fetchImagePlaceholders") { \
    SetFetchImagePlaceholders( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "forceAndroidOverlayScrollbar") { \
    SetForceAndroidOverlayScrollbar( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "forceMainWorldInitialization") { \
    SetForceMainWorldInitialization( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "forcePreloadNoneForMediaElements") { \
    SetForcePreloadNoneForMediaElements( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "forceTouchEventFeatureDetectionForInspector") { \
    SetForceTouchEventFeatureDetectionForInspector( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "forceZeroLayoutHeight") { \
    SetForceZeroLayoutHeight( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "fullscreenSupported") { \
    SetFullscreenSupported( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "hideDownloadUI") { \
    SetHideDownloadUI( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "hideScrollbars") { \
    SetHideScrollbars( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "highContrastContrast") { \
    SetHighContrastContrast( \
      value.ToDouble() \
    ); \
    return; \
  } \
  if (name == "highContrastGrayscale") { \
    SetHighContrastGrayscale( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "highContrastImagePolicy") { \
    SetHighContrastImagePolicy( \
      static_cast<HighContrastImagePolicy>(value.ToInt()) \
    ); \
    return; \
  } \
  if (name == "highContrastMode") { \
    SetHighContrastMode( \
      static_cast<HighContrastMode>(value.ToInt()) \
    ); \
    return; \
  } \
  if (name == "historyEntryRequiresUserGesture") { \
    SetHistoryEntryRequiresUserGesture( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "hyperlinkAuditingEnabled") { \
    SetHyperlinkAuditingEnabled( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "ignoreMainFrameOverflowHiddenQuirk") { \
    SetIgnoreMainFrameOverflowHiddenQuirk( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "imageAnimationPolicy") { \
    SetImageAnimationPolicy( \
      static_cast<ImageAnimationPolicy>(value.ToInt()) \
    ); \
    return; \
  } \
  if (name == "imagesEnabled") { \
    SetImagesEnabled( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "immersiveModeEnabled") { \
    SetImmersiveModeEnabled( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "inlineTextBoxAccessibilityEnabled") { \
    SetInlineTextBoxAccessibilityEnabled( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "javaScriptCanAccessClipboard") { \
    SetJavaScriptCanAccessClipboard( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "loadWithOverviewMode") { \
    SetLoadWithOverviewMode( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "loadsImagesAutomatically") { \
    SetLoadsImagesAutomatically( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "localStorageEnabled") { \
    SetLocalStorageEnabled( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "logDnsPrefetchAndPreconnect") { \
    SetLogDnsPrefetchAndPreconnect( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "logPreload") { \
    SetLogPreload( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "lowPriorityIframesThreshold") { \
    SetLowPriorityIframesThreshold( \
      static_cast<WebEffectiveConnectionType>(value.ToInt()) \
    ); \
    return; \
  } \
  if (name == "mainFrameClipsContent") { \
    SetMainFrameClipsContent( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "mainFrameResizesAreOrientationChanges") { \
    SetMainFrameResizesAreOrientationChanges( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "maxTouchPoints") { \
    SetMaxTouchPoints( \
      value.ToInt() \
    ); \
    return; \
  } \
  if (name == "mediaControlsEnabled") { \
    SetMediaControlsEnabled( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "mediaDownloadInProductHelpEnabled") { \
    SetMediaDownloadInProductHelpEnabled( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "mediaPlaybackGestureWhitelistScope") { \
    SetMediaPlaybackGestureWhitelistScope( \
      value \
    ); \
    return; \
  } \
  if (name == "mediaTypeOverride") { \
    SetMediaTypeOverride( \
      value \
    ); \
    return; \
  } \
  if (name == "minimumAccelerated2dCanvasSize") { \
    SetMinimumAccelerated2dCanvasSize( \
      value.ToInt() \
    ); \
    return; \
  } \
  if (name == "minimumFontSize") { \
    SetMinimumFontSize( \
      value.ToInt() \
    ); \
    return; \
  } \
  if (name == "minimumLogicalFontSize") { \
    SetMinimumLogicalFontSize( \
      value.ToInt() \
    ); \
    return; \
  } \
  if (name == "mockGestureTapHighlightsEnabled") { \
    SetMockGestureTapHighlightsEnabled( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "multiTargetTapNotificationEnabled") { \
    SetMultiTargetTapNotificationEnabled( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "navigateOnDragDrop") { \
    SetNavigateOnDragDrop( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "navigatorPlatformOverride") { \
    SetNavigatorPlatformOverride( \
      value \
    ); \
    return; \
  } \
  if (name == "offlineWebApplicationCacheEnabled") { \
    SetOfflineWebApplicationCacheEnabled( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "passiveListenerDefault") { \
    SetPassiveListenerDefault( \
      static_cast<PassiveListenerDefault>(value.ToInt()) \
    ); \
    return; \
  } \
  if (name == "passwordEchoDurationInSeconds") { \
    SetPasswordEchoDurationInSeconds( \
      value.ToDouble() \
    ); \
    return; \
  } \
  if (name == "passwordEchoEnabled") { \
    SetPasswordEchoEnabled( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "pictureInPictureEnabled") { \
    SetPictureInPictureEnabled( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "pluginsEnabled") { \
    SetPluginsEnabled( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "preferCompositingToLCDTextEnabled") { \
    SetPreferCompositingToLCDTextEnabled( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "preferHiddenVolumeControls") { \
    SetPreferHiddenVolumeControls( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "presentationReceiver") { \
    SetPresentationReceiver( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "presentationRequiresUserGesture") { \
    SetPresentationRequiresUserGesture( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "primaryHoverType") { \
    SetPrimaryHoverType( \
      static_cast<HoverType>(value.ToInt()) \
    ); \
    return; \
  } \
  if (name == "primaryPointerType") { \
    SetPrimaryPointerType( \
      static_cast<PointerType>(value.ToInt()) \
    ); \
    return; \
  } \
  if (name == "reportScreenSizeInPhysicalPixelsQuirk") { \
    SetReportScreenSizeInPhysicalPixelsQuirk( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "rubberBandingOnCompositorThread") { \
    SetRubberBandingOnCompositorThread( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "savePreviousDocumentResources") { \
    SetSavePreviousDocumentResources( \
      static_cast<SavePreviousDocumentResources>(value.ToInt()) \
    ); \
    return; \
  } \
  if (name == "scriptEnabled") { \
    SetScriptEnabled( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "scrollAnimatorEnabled") { \
    SetScrollAnimatorEnabled( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "selectTrailingWhitespaceEnabled") { \
    SetSelectTrailingWhitespaceEnabled( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "selectionIncludesAltImageText") { \
    SetSelectionIncludesAltImageText( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "selectionStrategy") { \
    SetSelectionStrategy( \
      static_cast<SelectionStrategy>(value.ToInt()) \
    ); \
    return; \
  } \
  if (name == "shouldClearDocumentBackground") { \
    SetShouldClearDocumentBackground( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "shouldPrintBackgrounds") { \
    SetShouldPrintBackgrounds( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "shouldRespectImageOrientation") { \
    SetShouldRespectImageOrientation( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "shouldReuseGlobalForUnownedMainFrame") { \
    SetShouldReuseGlobalForUnownedMainFrame( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "shouldThrottlePushState") { \
    SetShouldThrottlePushState( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "showContextMenuOnMouseUp") { \
    SetShowContextMenuOnMouseUp( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "smartInsertDeleteEnabled") { \
    SetSmartInsertDeleteEnabled( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "smoothScrollForFindEnabled") { \
    SetSmoothScrollForFindEnabled( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "spatialNavigationEnabled") { \
    SetSpatialNavigationEnabled( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "spellCheckEnabledByDefault") { \
    SetSpellCheckEnabledByDefault( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "strictMixedContentChecking") { \
    SetStrictMixedContentChecking( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "strictMixedContentCheckingForPlugin") { \
    SetStrictMixedContentCheckingForPlugin( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "strictPowerfulFeatureRestrictions") { \
    SetStrictPowerfulFeatureRestrictions( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "strictlyBlockBlockableMixedContent") { \
    SetStrictlyBlockBlockableMixedContent( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "supportsMultipleWindows") { \
    SetSupportsMultipleWindows( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "syncXHRInDocumentsEnabled") { \
    SetSyncXHRInDocumentsEnabled( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "textAreasAreResizable") { \
    SetTextAreasAreResizable( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "textTrackBackgroundColor") { \
    SetTextTrackBackgroundColor( \
      value \
    ); \
    return; \
  } \
  if (name == "textTrackFontFamily") { \
    SetTextTrackFontFamily( \
      value \
    ); \
    return; \
  } \
  if (name == "textTrackFontStyle") { \
    SetTextTrackFontStyle( \
      value \
    ); \
    return; \
  } \
  if (name == "textTrackFontVariant") { \
    SetTextTrackFontVariant( \
      value \
    ); \
    return; \
  } \
  if (name == "textTrackKindUserPreference") { \
    SetTextTrackKindUserPreference( \
      static_cast<TextTrackKindUserPreference>(value.ToInt()) \
    ); \
    return; \
  } \
  if (name == "textTrackMarginPercentage") { \
    SetTextTrackMarginPercentage( \
      value.ToDouble() \
    ); \
    return; \
  } \
  if (name == "textTrackTextColor") { \
    SetTextTrackTextColor( \
      value \
    ); \
    return; \
  } \
  if (name == "textTrackTextShadow") { \
    SetTextTrackTextShadow( \
      value \
    ); \
    return; \
  } \
  if (name == "textTrackTextSize") { \
    SetTextTrackTextSize( \
      value \
    ); \
    return; \
  } \
  if (name == "threadedScrollingEnabled") { \
    SetThreadedScrollingEnabled( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "touchAdjustmentEnabled") { \
    SetTouchAdjustmentEnabled( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "touchDragDropEnabled") { \
    SetTouchDragDropEnabled( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "touchEditingEnabled") { \
    SetTouchEditingEnabled( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "useLegacyBackgroundSizeShorthandBehavior") { \
    SetUseLegacyBackgroundSizeShorthandBehavior( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "useSolidColorScrollbars") { \
    SetUseSolidColorScrollbars( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "useWideViewport") { \
    SetUseWideViewport( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "v8CacheOptions") { \
    SetV8CacheOptions( \
      static_cast<V8CacheOptions>(value.ToInt()) \
    ); \
    return; \
  } \
  if (name == "validationMessageTimerMagnification") { \
    SetValidationMessageTimerMagnification( \
      value.ToInt() \
    ); \
    return; \
  } \
  if (name == "viewportEnabled") { \
    SetViewportEnabled( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "viewportMetaEnabled") { \
    SetViewportMetaEnabled( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "viewportMetaMergeContentQuirk") { \
    SetViewportMetaMergeContentQuirk( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "viewportMetaZeroValuesQuirk") { \
    SetViewportMetaZeroValuesQuirk( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "viewportStyle") { \
    SetViewportStyle( \
      static_cast<WebViewportStyle>(value.ToInt()) \
    ); \
    return; \
  } \
  if (name == "webGL1Enabled") { \
    SetWebGL1Enabled( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "webGL2Enabled") { \
    SetWebGL2Enabled( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "webGLErrorsToConsoleEnabled") { \
    SetWebGLErrorsToConsoleEnabled( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "webSecurityEnabled") { \
    SetWebSecurityEnabled( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "wideViewportQuirkEnabled") { \
    SetWideViewportQuirkEnabled( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
  if (name == "xssAuditorEnabled") { \
    SetXSSAuditorEnabled( \
      value.IsEmpty() || value == "true" \
    ); \
    return; \
  } \
}
// End of SETTINGS_SETTER_BODIES.

#endif // SettingsMacros_h
