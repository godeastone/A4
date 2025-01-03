// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/internal_settings_generated.cc.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/frame/settings.json5


#include "internal_settings_generated.h"

#include "third_party/blink/renderer/core/page/page.h"
#include "third_party/blink/renderer/core/frame/settings.h"

namespace blink {

InternalSettingsGenerated::InternalSettingsGenerated(Page* page)
    : m_page(page)
    , m_DOMPasteAllowed(page->GetSettings().GetDOMPasteAllowed())
    , m_accelerated2dCanvasMSAASampleCount(page->GetSettings().GetAccelerated2dCanvasMSAASampleCount())
    , m_acceleratedCompositingEnabled(page->GetSettings().GetAcceleratedCompositingEnabled())
    , m_accessibilityEnabled(page->GetSettings().GetAccessibilityEnabled())
    , m_accessibilityFontScaleFactor(page->GetSettings().GetAccessibilityFontScaleFactor())
    , m_accessibilityPasswordValuesEnabled(page->GetSettings().GetAccessibilityPasswordValuesEnabled())
    , m_allowCustomScrollbarInMainFrame(page->GetSettings().GetAllowCustomScrollbarInMainFrame())
    , m_allowFileAccessFromFileURLs(page->GetSettings().GetAllowFileAccessFromFileURLs())
    , m_allowGeolocationOnInsecureOrigins(page->GetSettings().GetAllowGeolocationOnInsecureOrigins())
    , m_allowRunningOfInsecureContent(page->GetSettings().GetAllowRunningOfInsecureContent())
    , m_allowScriptsToCloseWindows(page->GetSettings().GetAllowScriptsToCloseWindows())
    , m_allowUniversalAccessFromFileURLs(page->GetSettings().GetAllowUniversalAccessFromFileURLs())
    , m_alwaysShowContextMenuOnTouch(page->GetSettings().GetAlwaysShowContextMenuOnTouch())
    , m_antialiased2dCanvasEnabled(page->GetSettings().GetAntialiased2dCanvasEnabled())
    , m_antialiasedClips2dCanvasEnabled(page->GetSettings().GetAntialiasedClips2dCanvasEnabled())
    , m_availableHoverTypes(page->GetSettings().GetAvailableHoverTypes())
    , m_availablePointerTypes(page->GetSettings().GetAvailablePointerTypes())
    , m_barrelButtonForDragEnabled(page->GetSettings().GetBarrelButtonForDragEnabled())
    , m_cookieEnabled(page->GetSettings().GetCookieEnabled())
    , m_cssExternalScannerNoPreload(page->GetSettings().GetCSSExternalScannerNoPreload())
    , m_cssExternalScannerPreload(page->GetSettings().GetCSSExternalScannerPreload())
    , m_dataSaverHoldbackMediaApi(page->GetSettings().GetDataSaverHoldbackMediaApi())
    , m_dataSaverHoldbackWebApi(page->GetSettings().GetDataSaverHoldbackWebApi())
    , m_defaultFixedFontSize(page->GetSettings().GetDefaultFixedFontSize())
    , m_defaultFontSize(page->GetSettings().GetDefaultFontSize())
    , m_defaultTextEncodingName(page->GetSettings().GetDefaultTextEncodingName())
    , m_defaultVideoPosterURL(page->GetSettings().GetDefaultVideoPosterURL())
    , m_deviceScaleAdjustment(page->GetSettings().GetDeviceScaleAdjustment())
    , m_deviceSupportsTouch(page->GetSettings().GetDeviceSupportsTouch())
    , m_disableReadingFromCanvas(page->GetSettings().GetDisableReadingFromCanvas())
    , m_disallowFetchForDocWrittenScriptsInMainFrame(page->GetSettings().GetDisallowFetchForDocWrittenScriptsInMainFrame())
    , m_disallowFetchForDocWrittenScriptsInMainFrameIfEffectively2G(page->GetSettings().GetDisallowFetchForDocWrittenScriptsInMainFrameIfEffectively2G())
    , m_disallowFetchForDocWrittenScriptsInMainFrameOnSlowConnections(page->GetSettings().GetDisallowFetchForDocWrittenScriptsInMainFrameOnSlowConnections())
    , m_dnsPrefetchingEnabled(page->GetSettings().GetDNSPrefetchingEnabled())
    , m_doHtmlPreloadScanning(page->GetSettings().GetDoHtmlPreloadScanning())
    , m_doNotUpdateSelectionOnMutatingSelectionRange(page->GetSettings().GetDoNotUpdateSelectionOnMutatingSelectionRange())
    , m_downloadableBinaryFontsEnabled(page->GetSettings().GetDownloadableBinaryFontsEnabled())
    , m_embeddedMediaExperienceEnabled(page->GetSettings().GetEmbeddedMediaExperienceEnabled())
    , m_fetchImagePlaceholders(page->GetSettings().GetFetchImagePlaceholders())
    , m_forceAndroidOverlayScrollbar(page->GetSettings().GetForceAndroidOverlayScrollbar())
    , m_forceMainWorldInitialization(page->GetSettings().GetForceMainWorldInitialization())
    , m_forcePreloadNoneForMediaElements(page->GetSettings().GetForcePreloadNoneForMediaElements())
    , m_forceTouchEventFeatureDetectionForInspector(page->GetSettings().GetForceTouchEventFeatureDetectionForInspector())
    , m_forceZeroLayoutHeight(page->GetSettings().GetForceZeroLayoutHeight())
    , m_fullscreenSupported(page->GetSettings().GetFullscreenSupported())
    , m_hideDownloadUI(page->GetSettings().GetHideDownloadUI())
    , m_hideScrollbars(page->GetSettings().GetHideScrollbars())
    , m_highContrastContrast(page->GetSettings().GetHighContrastContrast())
    , m_highContrastGrayscale(page->GetSettings().GetHighContrastGrayscale())
    , m_historyEntryRequiresUserGesture(page->GetSettings().GetHistoryEntryRequiresUserGesture())
    , m_hyperlinkAuditingEnabled(page->GetSettings().GetHyperlinkAuditingEnabled())
    , m_ignoreMainFrameOverflowHiddenQuirk(page->GetSettings().GetIgnoreMainFrameOverflowHiddenQuirk())
    , m_imagesEnabled(page->GetSettings().GetImagesEnabled())
    , m_immersiveModeEnabled(page->GetSettings().GetImmersiveModeEnabled())
    , m_inlineTextBoxAccessibilityEnabled(page->GetSettings().GetInlineTextBoxAccessibilityEnabled())
    , m_javaScriptCanAccessClipboard(page->GetSettings().GetJavaScriptCanAccessClipboard())
    , m_loadWithOverviewMode(page->GetSettings().GetLoadWithOverviewMode())
    , m_loadsImagesAutomatically(page->GetSettings().GetLoadsImagesAutomatically())
    , m_localStorageEnabled(page->GetSettings().GetLocalStorageEnabled())
    , m_logDnsPrefetchAndPreconnect(page->GetSettings().GetLogDnsPrefetchAndPreconnect())
    , m_logPreload(page->GetSettings().GetLogPreload())
    , m_mainFrameClipsContent(page->GetSettings().GetMainFrameClipsContent())
    , m_mainFrameResizesAreOrientationChanges(page->GetSettings().GetMainFrameResizesAreOrientationChanges())
    , m_maxTouchPoints(page->GetSettings().GetMaxTouchPoints())
    , m_mediaControlsEnabled(page->GetSettings().GetMediaControlsEnabled())
    , m_mediaDownloadInProductHelpEnabled(page->GetSettings().GetMediaDownloadInProductHelpEnabled())
    , m_mediaPlaybackGestureWhitelistScope(page->GetSettings().GetMediaPlaybackGestureWhitelistScope())
    , m_mediaTypeOverride(page->GetSettings().GetMediaTypeOverride())
    , m_minimumAccelerated2dCanvasSize(page->GetSettings().GetMinimumAccelerated2dCanvasSize())
    , m_minimumFontSize(page->GetSettings().GetMinimumFontSize())
    , m_minimumLogicalFontSize(page->GetSettings().GetMinimumLogicalFontSize())
    , m_mockGestureTapHighlightsEnabled(page->GetSettings().GetMockGestureTapHighlightsEnabled())
    , m_multiTargetTapNotificationEnabled(page->GetSettings().GetMultiTargetTapNotificationEnabled())
    , m_navigateOnDragDrop(page->GetSettings().GetNavigateOnDragDrop())
    , m_navigatorPlatformOverride(page->GetSettings().GetNavigatorPlatformOverride())
    , m_offlineWebApplicationCacheEnabled(page->GetSettings().GetOfflineWebApplicationCacheEnabled())
    , m_passwordEchoDurationInSeconds(page->GetSettings().GetPasswordEchoDurationInSeconds())
    , m_passwordEchoEnabled(page->GetSettings().GetPasswordEchoEnabled())
    , m_pictureInPictureEnabled(page->GetSettings().GetPictureInPictureEnabled())
    , m_pluginsEnabled(page->GetSettings().GetPluginsEnabled())
    , m_preferCompositingToLCDTextEnabled(page->GetSettings().GetPreferCompositingToLCDTextEnabled())
    , m_preferHiddenVolumeControls(page->GetSettings().GetPreferHiddenVolumeControls())
    , m_presentationReceiver(page->GetSettings().GetPresentationReceiver())
    , m_presentationRequiresUserGesture(page->GetSettings().GetPresentationRequiresUserGesture())
    , m_reportScreenSizeInPhysicalPixelsQuirk(page->GetSettings().GetReportScreenSizeInPhysicalPixelsQuirk())
    , m_rubberBandingOnCompositorThread(page->GetSettings().GetRubberBandingOnCompositorThread())
    , m_scriptEnabled(page->GetSettings().GetScriptEnabled())
    , m_scrollAnimatorEnabled(page->GetSettings().GetScrollAnimatorEnabled())
    , m_selectTrailingWhitespaceEnabled(page->GetSettings().GetSelectTrailingWhitespaceEnabled())
    , m_selectionIncludesAltImageText(page->GetSettings().GetSelectionIncludesAltImageText())
    , m_shouldClearDocumentBackground(page->GetSettings().GetShouldClearDocumentBackground())
    , m_shouldPrintBackgrounds(page->GetSettings().GetShouldPrintBackgrounds())
    , m_shouldRespectImageOrientation(page->GetSettings().GetShouldRespectImageOrientation())
    , m_shouldReuseGlobalForUnownedMainFrame(page->GetSettings().GetShouldReuseGlobalForUnownedMainFrame())
    , m_shouldThrottlePushState(page->GetSettings().GetShouldThrottlePushState())
    , m_showContextMenuOnMouseUp(page->GetSettings().GetShowContextMenuOnMouseUp())
    , m_smartInsertDeleteEnabled(page->GetSettings().GetSmartInsertDeleteEnabled())
    , m_smoothScrollForFindEnabled(page->GetSettings().GetSmoothScrollForFindEnabled())
    , m_spatialNavigationEnabled(page->GetSettings().GetSpatialNavigationEnabled())
    , m_spellCheckEnabledByDefault(page->GetSettings().GetSpellCheckEnabledByDefault())
    , m_strictMixedContentChecking(page->GetSettings().GetStrictMixedContentChecking())
    , m_strictMixedContentCheckingForPlugin(page->GetSettings().GetStrictMixedContentCheckingForPlugin())
    , m_strictPowerfulFeatureRestrictions(page->GetSettings().GetStrictPowerfulFeatureRestrictions())
    , m_strictlyBlockBlockableMixedContent(page->GetSettings().GetStrictlyBlockBlockableMixedContent())
    , m_supportsMultipleWindows(page->GetSettings().GetSupportsMultipleWindows())
    , m_syncXHRInDocumentsEnabled(page->GetSettings().GetSyncXHRInDocumentsEnabled())
    , m_textAreasAreResizable(page->GetSettings().GetTextAreasAreResizable())
    , m_textTrackBackgroundColor(page->GetSettings().GetTextTrackBackgroundColor())
    , m_textTrackFontFamily(page->GetSettings().GetTextTrackFontFamily())
    , m_textTrackFontStyle(page->GetSettings().GetTextTrackFontStyle())
    , m_textTrackFontVariant(page->GetSettings().GetTextTrackFontVariant())
    , m_textTrackMarginPercentage(page->GetSettings().GetTextTrackMarginPercentage())
    , m_textTrackTextColor(page->GetSettings().GetTextTrackTextColor())
    , m_textTrackTextShadow(page->GetSettings().GetTextTrackTextShadow())
    , m_textTrackTextSize(page->GetSettings().GetTextTrackTextSize())
    , m_threadedScrollingEnabled(page->GetSettings().GetThreadedScrollingEnabled())
    , m_touchAdjustmentEnabled(page->GetSettings().GetTouchAdjustmentEnabled())
    , m_touchDragDropEnabled(page->GetSettings().GetTouchDragDropEnabled())
    , m_touchEditingEnabled(page->GetSettings().GetTouchEditingEnabled())
    , m_useLegacyBackgroundSizeShorthandBehavior(page->GetSettings().GetUseLegacyBackgroundSizeShorthandBehavior())
    , m_useSolidColorScrollbars(page->GetSettings().GetUseSolidColorScrollbars())
    , m_useWideViewport(page->GetSettings().GetUseWideViewport())
    , m_validationMessageTimerMagnification(page->GetSettings().GetValidationMessageTimerMagnification())
    , m_viewportEnabled(page->GetSettings().GetViewportEnabled())
    , m_viewportMetaEnabled(page->GetSettings().GetViewportMetaEnabled())
    , m_viewportMetaMergeContentQuirk(page->GetSettings().GetViewportMetaMergeContentQuirk())
    , m_viewportMetaZeroValuesQuirk(page->GetSettings().GetViewportMetaZeroValuesQuirk())
    , m_webGL1Enabled(page->GetSettings().GetWebGL1Enabled())
    , m_webGL2Enabled(page->GetSettings().GetWebGL2Enabled())
    , m_webGLErrorsToConsoleEnabled(page->GetSettings().GetWebGLErrorsToConsoleEnabled())
    , m_webSecurityEnabled(page->GetSettings().GetWebSecurityEnabled())
    , m_wideViewportQuirkEnabled(page->GetSettings().GetWideViewportQuirkEnabled())
    , m_xssAuditorEnabled(page->GetSettings().GetXSSAuditorEnabled())
{
}

InternalSettingsGenerated::~InternalSettingsGenerated() {}

void InternalSettingsGenerated::resetToConsistentState() {
  m_page->GetSettings().SetDOMPasteAllowed(m_DOMPasteAllowed);
  m_page->GetSettings().SetAccelerated2dCanvasMSAASampleCount(m_accelerated2dCanvasMSAASampleCount);
  m_page->GetSettings().SetAcceleratedCompositingEnabled(m_acceleratedCompositingEnabled);
  m_page->GetSettings().SetAccessibilityEnabled(m_accessibilityEnabled);
  m_page->GetSettings().SetAccessibilityFontScaleFactor(m_accessibilityFontScaleFactor);
  m_page->GetSettings().SetAccessibilityPasswordValuesEnabled(m_accessibilityPasswordValuesEnabled);
  m_page->GetSettings().SetAllowCustomScrollbarInMainFrame(m_allowCustomScrollbarInMainFrame);
  m_page->GetSettings().SetAllowFileAccessFromFileURLs(m_allowFileAccessFromFileURLs);
  m_page->GetSettings().SetAllowGeolocationOnInsecureOrigins(m_allowGeolocationOnInsecureOrigins);
  m_page->GetSettings().SetAllowRunningOfInsecureContent(m_allowRunningOfInsecureContent);
  m_page->GetSettings().SetAllowScriptsToCloseWindows(m_allowScriptsToCloseWindows);
  m_page->GetSettings().SetAllowUniversalAccessFromFileURLs(m_allowUniversalAccessFromFileURLs);
  m_page->GetSettings().SetAlwaysShowContextMenuOnTouch(m_alwaysShowContextMenuOnTouch);
  m_page->GetSettings().SetAntialiased2dCanvasEnabled(m_antialiased2dCanvasEnabled);
  m_page->GetSettings().SetAntialiasedClips2dCanvasEnabled(m_antialiasedClips2dCanvasEnabled);
  m_page->GetSettings().SetAvailableHoverTypes(m_availableHoverTypes);
  m_page->GetSettings().SetAvailablePointerTypes(m_availablePointerTypes);
  m_page->GetSettings().SetBarrelButtonForDragEnabled(m_barrelButtonForDragEnabled);
  m_page->GetSettings().SetCookieEnabled(m_cookieEnabled);
  m_page->GetSettings().SetCSSExternalScannerNoPreload(m_cssExternalScannerNoPreload);
  m_page->GetSettings().SetCSSExternalScannerPreload(m_cssExternalScannerPreload);
  m_page->GetSettings().SetDataSaverHoldbackMediaApi(m_dataSaverHoldbackMediaApi);
  m_page->GetSettings().SetDataSaverHoldbackWebApi(m_dataSaverHoldbackWebApi);
  m_page->GetSettings().SetDefaultFixedFontSize(m_defaultFixedFontSize);
  m_page->GetSettings().SetDefaultFontSize(m_defaultFontSize);
  m_page->GetSettings().SetDefaultTextEncodingName(m_defaultTextEncodingName);
  m_page->GetSettings().SetDefaultVideoPosterURL(m_defaultVideoPosterURL);
  m_page->GetSettings().SetDeviceScaleAdjustment(m_deviceScaleAdjustment);
  m_page->GetSettings().SetDeviceSupportsTouch(m_deviceSupportsTouch);
  m_page->GetSettings().SetDisableReadingFromCanvas(m_disableReadingFromCanvas);
  m_page->GetSettings().SetDisallowFetchForDocWrittenScriptsInMainFrame(m_disallowFetchForDocWrittenScriptsInMainFrame);
  m_page->GetSettings().SetDisallowFetchForDocWrittenScriptsInMainFrameIfEffectively2G(m_disallowFetchForDocWrittenScriptsInMainFrameIfEffectively2G);
  m_page->GetSettings().SetDisallowFetchForDocWrittenScriptsInMainFrameOnSlowConnections(m_disallowFetchForDocWrittenScriptsInMainFrameOnSlowConnections);
  m_page->GetSettings().SetDNSPrefetchingEnabled(m_dnsPrefetchingEnabled);
  m_page->GetSettings().SetDoHtmlPreloadScanning(m_doHtmlPreloadScanning);
  m_page->GetSettings().SetDoNotUpdateSelectionOnMutatingSelectionRange(m_doNotUpdateSelectionOnMutatingSelectionRange);
  m_page->GetSettings().SetDownloadableBinaryFontsEnabled(m_downloadableBinaryFontsEnabled);
  m_page->GetSettings().SetEmbeddedMediaExperienceEnabled(m_embeddedMediaExperienceEnabled);
  m_page->GetSettings().SetFetchImagePlaceholders(m_fetchImagePlaceholders);
  m_page->GetSettings().SetForceAndroidOverlayScrollbar(m_forceAndroidOverlayScrollbar);
  m_page->GetSettings().SetForceMainWorldInitialization(m_forceMainWorldInitialization);
  m_page->GetSettings().SetForcePreloadNoneForMediaElements(m_forcePreloadNoneForMediaElements);
  m_page->GetSettings().SetForceTouchEventFeatureDetectionForInspector(m_forceTouchEventFeatureDetectionForInspector);
  m_page->GetSettings().SetForceZeroLayoutHeight(m_forceZeroLayoutHeight);
  m_page->GetSettings().SetFullscreenSupported(m_fullscreenSupported);
  m_page->GetSettings().SetHideDownloadUI(m_hideDownloadUI);
  m_page->GetSettings().SetHideScrollbars(m_hideScrollbars);
  m_page->GetSettings().SetHighContrastContrast(m_highContrastContrast);
  m_page->GetSettings().SetHighContrastGrayscale(m_highContrastGrayscale);
  m_page->GetSettings().SetHistoryEntryRequiresUserGesture(m_historyEntryRequiresUserGesture);
  m_page->GetSettings().SetHyperlinkAuditingEnabled(m_hyperlinkAuditingEnabled);
  m_page->GetSettings().SetIgnoreMainFrameOverflowHiddenQuirk(m_ignoreMainFrameOverflowHiddenQuirk);
  m_page->GetSettings().SetImagesEnabled(m_imagesEnabled);
  m_page->GetSettings().SetImmersiveModeEnabled(m_immersiveModeEnabled);
  m_page->GetSettings().SetInlineTextBoxAccessibilityEnabled(m_inlineTextBoxAccessibilityEnabled);
  m_page->GetSettings().SetJavaScriptCanAccessClipboard(m_javaScriptCanAccessClipboard);
  m_page->GetSettings().SetLoadWithOverviewMode(m_loadWithOverviewMode);
  m_page->GetSettings().SetLoadsImagesAutomatically(m_loadsImagesAutomatically);
  m_page->GetSettings().SetLocalStorageEnabled(m_localStorageEnabled);
  m_page->GetSettings().SetLogDnsPrefetchAndPreconnect(m_logDnsPrefetchAndPreconnect);
  m_page->GetSettings().SetLogPreload(m_logPreload);
  m_page->GetSettings().SetMainFrameClipsContent(m_mainFrameClipsContent);
  m_page->GetSettings().SetMainFrameResizesAreOrientationChanges(m_mainFrameResizesAreOrientationChanges);
  m_page->GetSettings().SetMaxTouchPoints(m_maxTouchPoints);
  m_page->GetSettings().SetMediaControlsEnabled(m_mediaControlsEnabled);
  m_page->GetSettings().SetMediaDownloadInProductHelpEnabled(m_mediaDownloadInProductHelpEnabled);
  m_page->GetSettings().SetMediaPlaybackGestureWhitelistScope(m_mediaPlaybackGestureWhitelistScope);
  m_page->GetSettings().SetMediaTypeOverride(m_mediaTypeOverride);
  m_page->GetSettings().SetMinimumAccelerated2dCanvasSize(m_minimumAccelerated2dCanvasSize);
  m_page->GetSettings().SetMinimumFontSize(m_minimumFontSize);
  m_page->GetSettings().SetMinimumLogicalFontSize(m_minimumLogicalFontSize);
  m_page->GetSettings().SetMockGestureTapHighlightsEnabled(m_mockGestureTapHighlightsEnabled);
  m_page->GetSettings().SetMultiTargetTapNotificationEnabled(m_multiTargetTapNotificationEnabled);
  m_page->GetSettings().SetNavigateOnDragDrop(m_navigateOnDragDrop);
  m_page->GetSettings().SetNavigatorPlatformOverride(m_navigatorPlatformOverride);
  m_page->GetSettings().SetOfflineWebApplicationCacheEnabled(m_offlineWebApplicationCacheEnabled);
  m_page->GetSettings().SetPasswordEchoDurationInSeconds(m_passwordEchoDurationInSeconds);
  m_page->GetSettings().SetPasswordEchoEnabled(m_passwordEchoEnabled);
  m_page->GetSettings().SetPictureInPictureEnabled(m_pictureInPictureEnabled);
  m_page->GetSettings().SetPluginsEnabled(m_pluginsEnabled);
  m_page->GetSettings().SetPreferCompositingToLCDTextEnabled(m_preferCompositingToLCDTextEnabled);
  m_page->GetSettings().SetPreferHiddenVolumeControls(m_preferHiddenVolumeControls);
  m_page->GetSettings().SetPresentationReceiver(m_presentationReceiver);
  m_page->GetSettings().SetPresentationRequiresUserGesture(m_presentationRequiresUserGesture);
  m_page->GetSettings().SetReportScreenSizeInPhysicalPixelsQuirk(m_reportScreenSizeInPhysicalPixelsQuirk);
  m_page->GetSettings().SetRubberBandingOnCompositorThread(m_rubberBandingOnCompositorThread);
  m_page->GetSettings().SetScriptEnabled(m_scriptEnabled);
  m_page->GetSettings().SetScrollAnimatorEnabled(m_scrollAnimatorEnabled);
  m_page->GetSettings().SetSelectTrailingWhitespaceEnabled(m_selectTrailingWhitespaceEnabled);
  m_page->GetSettings().SetSelectionIncludesAltImageText(m_selectionIncludesAltImageText);
  m_page->GetSettings().SetShouldClearDocumentBackground(m_shouldClearDocumentBackground);
  m_page->GetSettings().SetShouldPrintBackgrounds(m_shouldPrintBackgrounds);
  m_page->GetSettings().SetShouldRespectImageOrientation(m_shouldRespectImageOrientation);
  m_page->GetSettings().SetShouldReuseGlobalForUnownedMainFrame(m_shouldReuseGlobalForUnownedMainFrame);
  m_page->GetSettings().SetShouldThrottlePushState(m_shouldThrottlePushState);
  m_page->GetSettings().SetShowContextMenuOnMouseUp(m_showContextMenuOnMouseUp);
  m_page->GetSettings().SetSmartInsertDeleteEnabled(m_smartInsertDeleteEnabled);
  m_page->GetSettings().SetSmoothScrollForFindEnabled(m_smoothScrollForFindEnabled);
  m_page->GetSettings().SetSpatialNavigationEnabled(m_spatialNavigationEnabled);
  m_page->GetSettings().SetSpellCheckEnabledByDefault(m_spellCheckEnabledByDefault);
  m_page->GetSettings().SetStrictMixedContentChecking(m_strictMixedContentChecking);
  m_page->GetSettings().SetStrictMixedContentCheckingForPlugin(m_strictMixedContentCheckingForPlugin);
  m_page->GetSettings().SetStrictPowerfulFeatureRestrictions(m_strictPowerfulFeatureRestrictions);
  m_page->GetSettings().SetStrictlyBlockBlockableMixedContent(m_strictlyBlockBlockableMixedContent);
  m_page->GetSettings().SetSupportsMultipleWindows(m_supportsMultipleWindows);
  m_page->GetSettings().SetSyncXHRInDocumentsEnabled(m_syncXHRInDocumentsEnabled);
  m_page->GetSettings().SetTextAreasAreResizable(m_textAreasAreResizable);
  m_page->GetSettings().SetTextTrackBackgroundColor(m_textTrackBackgroundColor);
  m_page->GetSettings().SetTextTrackFontFamily(m_textTrackFontFamily);
  m_page->GetSettings().SetTextTrackFontStyle(m_textTrackFontStyle);
  m_page->GetSettings().SetTextTrackFontVariant(m_textTrackFontVariant);
  m_page->GetSettings().SetTextTrackMarginPercentage(m_textTrackMarginPercentage);
  m_page->GetSettings().SetTextTrackTextColor(m_textTrackTextColor);
  m_page->GetSettings().SetTextTrackTextShadow(m_textTrackTextShadow);
  m_page->GetSettings().SetTextTrackTextSize(m_textTrackTextSize);
  m_page->GetSettings().SetThreadedScrollingEnabled(m_threadedScrollingEnabled);
  m_page->GetSettings().SetTouchAdjustmentEnabled(m_touchAdjustmentEnabled);
  m_page->GetSettings().SetTouchDragDropEnabled(m_touchDragDropEnabled);
  m_page->GetSettings().SetTouchEditingEnabled(m_touchEditingEnabled);
  m_page->GetSettings().SetUseLegacyBackgroundSizeShorthandBehavior(m_useLegacyBackgroundSizeShorthandBehavior);
  m_page->GetSettings().SetUseSolidColorScrollbars(m_useSolidColorScrollbars);
  m_page->GetSettings().SetUseWideViewport(m_useWideViewport);
  m_page->GetSettings().SetValidationMessageTimerMagnification(m_validationMessageTimerMagnification);
  m_page->GetSettings().SetViewportEnabled(m_viewportEnabled);
  m_page->GetSettings().SetViewportMetaEnabled(m_viewportMetaEnabled);
  m_page->GetSettings().SetViewportMetaMergeContentQuirk(m_viewportMetaMergeContentQuirk);
  m_page->GetSettings().SetViewportMetaZeroValuesQuirk(m_viewportMetaZeroValuesQuirk);
  m_page->GetSettings().SetWebGL1Enabled(m_webGL1Enabled);
  m_page->GetSettings().SetWebGL2Enabled(m_webGL2Enabled);
  m_page->GetSettings().SetWebGLErrorsToConsoleEnabled(m_webGLErrorsToConsoleEnabled);
  m_page->GetSettings().SetWebSecurityEnabled(m_webSecurityEnabled);
  m_page->GetSettings().SetWideViewportQuirkEnabled(m_wideViewportQuirkEnabled);
  m_page->GetSettings().SetXSSAuditorEnabled(m_xssAuditorEnabled);
}

void InternalSettingsGenerated::setDOMPasteAllowed(bool DOMPasteAllowed) {
  m_page->GetSettings().SetDOMPasteAllowed(DOMPasteAllowed);
}

void InternalSettingsGenerated::setAccelerated2dCanvasMSAASampleCount(int accelerated2dCanvasMSAASampleCount) {
  m_page->GetSettings().SetAccelerated2dCanvasMSAASampleCount(accelerated2dCanvasMSAASampleCount);
}

void InternalSettingsGenerated::setAcceleratedCompositingEnabled(bool acceleratedCompositingEnabled) {
  m_page->GetSettings().SetAcceleratedCompositingEnabled(acceleratedCompositingEnabled);
}

void InternalSettingsGenerated::setAccessibilityEnabled(bool accessibilityEnabled) {
  m_page->GetSettings().SetAccessibilityEnabled(accessibilityEnabled);
}

void InternalSettingsGenerated::setAccessibilityFontScaleFactor(double accessibilityFontScaleFactor) {
  m_page->GetSettings().SetAccessibilityFontScaleFactor(accessibilityFontScaleFactor);
}

void InternalSettingsGenerated::setAccessibilityPasswordValuesEnabled(bool accessibilityPasswordValuesEnabled) {
  m_page->GetSettings().SetAccessibilityPasswordValuesEnabled(accessibilityPasswordValuesEnabled);
}

void InternalSettingsGenerated::setAllowCustomScrollbarInMainFrame(bool allowCustomScrollbarInMainFrame) {
  m_page->GetSettings().SetAllowCustomScrollbarInMainFrame(allowCustomScrollbarInMainFrame);
}

void InternalSettingsGenerated::setAllowFileAccessFromFileURLs(bool allowFileAccessFromFileURLs) {
  m_page->GetSettings().SetAllowFileAccessFromFileURLs(allowFileAccessFromFileURLs);
}

void InternalSettingsGenerated::setAllowGeolocationOnInsecureOrigins(bool allowGeolocationOnInsecureOrigins) {
  m_page->GetSettings().SetAllowGeolocationOnInsecureOrigins(allowGeolocationOnInsecureOrigins);
}

void InternalSettingsGenerated::setAllowRunningOfInsecureContent(bool allowRunningOfInsecureContent) {
  m_page->GetSettings().SetAllowRunningOfInsecureContent(allowRunningOfInsecureContent);
}

void InternalSettingsGenerated::setAllowScriptsToCloseWindows(bool allowScriptsToCloseWindows) {
  m_page->GetSettings().SetAllowScriptsToCloseWindows(allowScriptsToCloseWindows);
}

void InternalSettingsGenerated::setAllowUniversalAccessFromFileURLs(bool allowUniversalAccessFromFileURLs) {
  m_page->GetSettings().SetAllowUniversalAccessFromFileURLs(allowUniversalAccessFromFileURLs);
}

void InternalSettingsGenerated::setAlwaysShowContextMenuOnTouch(bool alwaysShowContextMenuOnTouch) {
  m_page->GetSettings().SetAlwaysShowContextMenuOnTouch(alwaysShowContextMenuOnTouch);
}

void InternalSettingsGenerated::setAntialiased2dCanvasEnabled(bool antialiased2dCanvasEnabled) {
  m_page->GetSettings().SetAntialiased2dCanvasEnabled(antialiased2dCanvasEnabled);
}

void InternalSettingsGenerated::setAntialiasedClips2dCanvasEnabled(bool antialiasedClips2dCanvasEnabled) {
  m_page->GetSettings().SetAntialiasedClips2dCanvasEnabled(antialiasedClips2dCanvasEnabled);
}

void InternalSettingsGenerated::setAvailableHoverTypes(int availableHoverTypes) {
  m_page->GetSettings().SetAvailableHoverTypes(availableHoverTypes);
}

void InternalSettingsGenerated::setAvailablePointerTypes(int availablePointerTypes) {
  m_page->GetSettings().SetAvailablePointerTypes(availablePointerTypes);
}

void InternalSettingsGenerated::setBarrelButtonForDragEnabled(bool barrelButtonForDragEnabled) {
  m_page->GetSettings().SetBarrelButtonForDragEnabled(barrelButtonForDragEnabled);
}

void InternalSettingsGenerated::setCookieEnabled(bool cookieEnabled) {
  m_page->GetSettings().SetCookieEnabled(cookieEnabled);
}

void InternalSettingsGenerated::setCSSExternalScannerNoPreload(bool cssExternalScannerNoPreload) {
  m_page->GetSettings().SetCSSExternalScannerNoPreload(cssExternalScannerNoPreload);
}

void InternalSettingsGenerated::setCSSExternalScannerPreload(bool cssExternalScannerPreload) {
  m_page->GetSettings().SetCSSExternalScannerPreload(cssExternalScannerPreload);
}

void InternalSettingsGenerated::setDataSaverHoldbackMediaApi(bool dataSaverHoldbackMediaApi) {
  m_page->GetSettings().SetDataSaverHoldbackMediaApi(dataSaverHoldbackMediaApi);
}

void InternalSettingsGenerated::setDataSaverHoldbackWebApi(bool dataSaverHoldbackWebApi) {
  m_page->GetSettings().SetDataSaverHoldbackWebApi(dataSaverHoldbackWebApi);
}

void InternalSettingsGenerated::setDefaultFixedFontSize(int defaultFixedFontSize) {
  m_page->GetSettings().SetDefaultFixedFontSize(defaultFixedFontSize);
}

void InternalSettingsGenerated::setDefaultFontSize(int defaultFontSize) {
  m_page->GetSettings().SetDefaultFontSize(defaultFontSize);
}

void InternalSettingsGenerated::setDefaultTextEncodingName(const String& defaultTextEncodingName) {
  m_page->GetSettings().SetDefaultTextEncodingName(defaultTextEncodingName);
}

void InternalSettingsGenerated::setDefaultVideoPosterURL(const String& defaultVideoPosterURL) {
  m_page->GetSettings().SetDefaultVideoPosterURL(defaultVideoPosterURL);
}

void InternalSettingsGenerated::setDeviceScaleAdjustment(double deviceScaleAdjustment) {
  m_page->GetSettings().SetDeviceScaleAdjustment(deviceScaleAdjustment);
}

void InternalSettingsGenerated::setDeviceSupportsTouch(bool deviceSupportsTouch) {
  m_page->GetSettings().SetDeviceSupportsTouch(deviceSupportsTouch);
}

void InternalSettingsGenerated::setDisableReadingFromCanvas(bool disableReadingFromCanvas) {
  m_page->GetSettings().SetDisableReadingFromCanvas(disableReadingFromCanvas);
}

void InternalSettingsGenerated::setDisallowFetchForDocWrittenScriptsInMainFrame(bool disallowFetchForDocWrittenScriptsInMainFrame) {
  m_page->GetSettings().SetDisallowFetchForDocWrittenScriptsInMainFrame(disallowFetchForDocWrittenScriptsInMainFrame);
}

void InternalSettingsGenerated::setDisallowFetchForDocWrittenScriptsInMainFrameIfEffectively2G(bool disallowFetchForDocWrittenScriptsInMainFrameIfEffectively2G) {
  m_page->GetSettings().SetDisallowFetchForDocWrittenScriptsInMainFrameIfEffectively2G(disallowFetchForDocWrittenScriptsInMainFrameIfEffectively2G);
}

void InternalSettingsGenerated::setDisallowFetchForDocWrittenScriptsInMainFrameOnSlowConnections(bool disallowFetchForDocWrittenScriptsInMainFrameOnSlowConnections) {
  m_page->GetSettings().SetDisallowFetchForDocWrittenScriptsInMainFrameOnSlowConnections(disallowFetchForDocWrittenScriptsInMainFrameOnSlowConnections);
}

void InternalSettingsGenerated::setDNSPrefetchingEnabled(bool dnsPrefetchingEnabled) {
  m_page->GetSettings().SetDNSPrefetchingEnabled(dnsPrefetchingEnabled);
}

void InternalSettingsGenerated::setDoHtmlPreloadScanning(bool doHtmlPreloadScanning) {
  m_page->GetSettings().SetDoHtmlPreloadScanning(doHtmlPreloadScanning);
}

void InternalSettingsGenerated::setDoNotUpdateSelectionOnMutatingSelectionRange(bool doNotUpdateSelectionOnMutatingSelectionRange) {
  m_page->GetSettings().SetDoNotUpdateSelectionOnMutatingSelectionRange(doNotUpdateSelectionOnMutatingSelectionRange);
}

void InternalSettingsGenerated::setDownloadableBinaryFontsEnabled(bool downloadableBinaryFontsEnabled) {
  m_page->GetSettings().SetDownloadableBinaryFontsEnabled(downloadableBinaryFontsEnabled);
}

void InternalSettingsGenerated::setEmbeddedMediaExperienceEnabled(bool embeddedMediaExperienceEnabled) {
  m_page->GetSettings().SetEmbeddedMediaExperienceEnabled(embeddedMediaExperienceEnabled);
}

void InternalSettingsGenerated::setFetchImagePlaceholders(bool fetchImagePlaceholders) {
  m_page->GetSettings().SetFetchImagePlaceholders(fetchImagePlaceholders);
}

void InternalSettingsGenerated::setForceAndroidOverlayScrollbar(bool forceAndroidOverlayScrollbar) {
  m_page->GetSettings().SetForceAndroidOverlayScrollbar(forceAndroidOverlayScrollbar);
}

void InternalSettingsGenerated::setForceMainWorldInitialization(bool forceMainWorldInitialization) {
  m_page->GetSettings().SetForceMainWorldInitialization(forceMainWorldInitialization);
}

void InternalSettingsGenerated::setForcePreloadNoneForMediaElements(bool forcePreloadNoneForMediaElements) {
  m_page->GetSettings().SetForcePreloadNoneForMediaElements(forcePreloadNoneForMediaElements);
}

void InternalSettingsGenerated::setForceTouchEventFeatureDetectionForInspector(bool forceTouchEventFeatureDetectionForInspector) {
  m_page->GetSettings().SetForceTouchEventFeatureDetectionForInspector(forceTouchEventFeatureDetectionForInspector);
}

void InternalSettingsGenerated::setForceZeroLayoutHeight(bool forceZeroLayoutHeight) {
  m_page->GetSettings().SetForceZeroLayoutHeight(forceZeroLayoutHeight);
}

void InternalSettingsGenerated::setFullscreenSupported(bool fullscreenSupported) {
  m_page->GetSettings().SetFullscreenSupported(fullscreenSupported);
}

void InternalSettingsGenerated::setHideDownloadUI(bool hideDownloadUI) {
  m_page->GetSettings().SetHideDownloadUI(hideDownloadUI);
}

void InternalSettingsGenerated::setHideScrollbars(bool hideScrollbars) {
  m_page->GetSettings().SetHideScrollbars(hideScrollbars);
}

void InternalSettingsGenerated::setHighContrastContrast(double highContrastContrast) {
  m_page->GetSettings().SetHighContrastContrast(highContrastContrast);
}

void InternalSettingsGenerated::setHighContrastGrayscale(bool highContrastGrayscale) {
  m_page->GetSettings().SetHighContrastGrayscale(highContrastGrayscale);
}

void InternalSettingsGenerated::setHistoryEntryRequiresUserGesture(bool historyEntryRequiresUserGesture) {
  m_page->GetSettings().SetHistoryEntryRequiresUserGesture(historyEntryRequiresUserGesture);
}

void InternalSettingsGenerated::setHyperlinkAuditingEnabled(bool hyperlinkAuditingEnabled) {
  m_page->GetSettings().SetHyperlinkAuditingEnabled(hyperlinkAuditingEnabled);
}

void InternalSettingsGenerated::setIgnoreMainFrameOverflowHiddenQuirk(bool ignoreMainFrameOverflowHiddenQuirk) {
  m_page->GetSettings().SetIgnoreMainFrameOverflowHiddenQuirk(ignoreMainFrameOverflowHiddenQuirk);
}

void InternalSettingsGenerated::setImagesEnabled(bool imagesEnabled) {
  m_page->GetSettings().SetImagesEnabled(imagesEnabled);
}

void InternalSettingsGenerated::setImmersiveModeEnabled(bool immersiveModeEnabled) {
  m_page->GetSettings().SetImmersiveModeEnabled(immersiveModeEnabled);
}

void InternalSettingsGenerated::setInlineTextBoxAccessibilityEnabled(bool inlineTextBoxAccessibilityEnabled) {
  m_page->GetSettings().SetInlineTextBoxAccessibilityEnabled(inlineTextBoxAccessibilityEnabled);
}

void InternalSettingsGenerated::setJavaScriptCanAccessClipboard(bool javaScriptCanAccessClipboard) {
  m_page->GetSettings().SetJavaScriptCanAccessClipboard(javaScriptCanAccessClipboard);
}

void InternalSettingsGenerated::setLoadWithOverviewMode(bool loadWithOverviewMode) {
  m_page->GetSettings().SetLoadWithOverviewMode(loadWithOverviewMode);
}

void InternalSettingsGenerated::setLoadsImagesAutomatically(bool loadsImagesAutomatically) {
  m_page->GetSettings().SetLoadsImagesAutomatically(loadsImagesAutomatically);
}

void InternalSettingsGenerated::setLocalStorageEnabled(bool localStorageEnabled) {
  m_page->GetSettings().SetLocalStorageEnabled(localStorageEnabled);
}

void InternalSettingsGenerated::setLogDnsPrefetchAndPreconnect(bool logDnsPrefetchAndPreconnect) {
  m_page->GetSettings().SetLogDnsPrefetchAndPreconnect(logDnsPrefetchAndPreconnect);
}

void InternalSettingsGenerated::setLogPreload(bool logPreload) {
  m_page->GetSettings().SetLogPreload(logPreload);
}

void InternalSettingsGenerated::setMainFrameClipsContent(bool mainFrameClipsContent) {
  m_page->GetSettings().SetMainFrameClipsContent(mainFrameClipsContent);
}

void InternalSettingsGenerated::setMainFrameResizesAreOrientationChanges(bool mainFrameResizesAreOrientationChanges) {
  m_page->GetSettings().SetMainFrameResizesAreOrientationChanges(mainFrameResizesAreOrientationChanges);
}

void InternalSettingsGenerated::setMaxTouchPoints(int maxTouchPoints) {
  m_page->GetSettings().SetMaxTouchPoints(maxTouchPoints);
}

void InternalSettingsGenerated::setMediaControlsEnabled(bool mediaControlsEnabled) {
  m_page->GetSettings().SetMediaControlsEnabled(mediaControlsEnabled);
}

void InternalSettingsGenerated::setMediaDownloadInProductHelpEnabled(bool mediaDownloadInProductHelpEnabled) {
  m_page->GetSettings().SetMediaDownloadInProductHelpEnabled(mediaDownloadInProductHelpEnabled);
}

void InternalSettingsGenerated::setMediaPlaybackGestureWhitelistScope(const String& mediaPlaybackGestureWhitelistScope) {
  m_page->GetSettings().SetMediaPlaybackGestureWhitelistScope(mediaPlaybackGestureWhitelistScope);
}

void InternalSettingsGenerated::setMediaTypeOverride(const String& mediaTypeOverride) {
  m_page->GetSettings().SetMediaTypeOverride(mediaTypeOverride);
}

void InternalSettingsGenerated::setMinimumAccelerated2dCanvasSize(int minimumAccelerated2dCanvasSize) {
  m_page->GetSettings().SetMinimumAccelerated2dCanvasSize(minimumAccelerated2dCanvasSize);
}

void InternalSettingsGenerated::setMinimumFontSize(int minimumFontSize) {
  m_page->GetSettings().SetMinimumFontSize(minimumFontSize);
}

void InternalSettingsGenerated::setMinimumLogicalFontSize(int minimumLogicalFontSize) {
  m_page->GetSettings().SetMinimumLogicalFontSize(minimumLogicalFontSize);
}

void InternalSettingsGenerated::setMockGestureTapHighlightsEnabled(bool mockGestureTapHighlightsEnabled) {
  m_page->GetSettings().SetMockGestureTapHighlightsEnabled(mockGestureTapHighlightsEnabled);
}

void InternalSettingsGenerated::setMultiTargetTapNotificationEnabled(bool multiTargetTapNotificationEnabled) {
  m_page->GetSettings().SetMultiTargetTapNotificationEnabled(multiTargetTapNotificationEnabled);
}

void InternalSettingsGenerated::setNavigateOnDragDrop(bool navigateOnDragDrop) {
  m_page->GetSettings().SetNavigateOnDragDrop(navigateOnDragDrop);
}

void InternalSettingsGenerated::setNavigatorPlatformOverride(const String& navigatorPlatformOverride) {
  m_page->GetSettings().SetNavigatorPlatformOverride(navigatorPlatformOverride);
}

void InternalSettingsGenerated::setOfflineWebApplicationCacheEnabled(bool offlineWebApplicationCacheEnabled) {
  m_page->GetSettings().SetOfflineWebApplicationCacheEnabled(offlineWebApplicationCacheEnabled);
}

void InternalSettingsGenerated::setPasswordEchoDurationInSeconds(double passwordEchoDurationInSeconds) {
  m_page->GetSettings().SetPasswordEchoDurationInSeconds(passwordEchoDurationInSeconds);
}

void InternalSettingsGenerated::setPasswordEchoEnabled(bool passwordEchoEnabled) {
  m_page->GetSettings().SetPasswordEchoEnabled(passwordEchoEnabled);
}

void InternalSettingsGenerated::setPictureInPictureEnabled(bool pictureInPictureEnabled) {
  m_page->GetSettings().SetPictureInPictureEnabled(pictureInPictureEnabled);
}

void InternalSettingsGenerated::setPluginsEnabled(bool pluginsEnabled) {
  m_page->GetSettings().SetPluginsEnabled(pluginsEnabled);
}

void InternalSettingsGenerated::setPreferCompositingToLCDTextEnabled(bool preferCompositingToLCDTextEnabled) {
  m_page->GetSettings().SetPreferCompositingToLCDTextEnabled(preferCompositingToLCDTextEnabled);
}

void InternalSettingsGenerated::setPreferHiddenVolumeControls(bool preferHiddenVolumeControls) {
  m_page->GetSettings().SetPreferHiddenVolumeControls(preferHiddenVolumeControls);
}

void InternalSettingsGenerated::setPresentationReceiver(bool presentationReceiver) {
  m_page->GetSettings().SetPresentationReceiver(presentationReceiver);
}

void InternalSettingsGenerated::setPresentationRequiresUserGesture(bool presentationRequiresUserGesture) {
  m_page->GetSettings().SetPresentationRequiresUserGesture(presentationRequiresUserGesture);
}

void InternalSettingsGenerated::setReportScreenSizeInPhysicalPixelsQuirk(bool reportScreenSizeInPhysicalPixelsQuirk) {
  m_page->GetSettings().SetReportScreenSizeInPhysicalPixelsQuirk(reportScreenSizeInPhysicalPixelsQuirk);
}

void InternalSettingsGenerated::setRubberBandingOnCompositorThread(bool rubberBandingOnCompositorThread) {
  m_page->GetSettings().SetRubberBandingOnCompositorThread(rubberBandingOnCompositorThread);
}

void InternalSettingsGenerated::setScriptEnabled(bool scriptEnabled) {
  m_page->GetSettings().SetScriptEnabled(scriptEnabled);
}

void InternalSettingsGenerated::setScrollAnimatorEnabled(bool scrollAnimatorEnabled) {
  m_page->GetSettings().SetScrollAnimatorEnabled(scrollAnimatorEnabled);
}

void InternalSettingsGenerated::setSelectTrailingWhitespaceEnabled(bool selectTrailingWhitespaceEnabled) {
  m_page->GetSettings().SetSelectTrailingWhitespaceEnabled(selectTrailingWhitespaceEnabled);
}

void InternalSettingsGenerated::setSelectionIncludesAltImageText(bool selectionIncludesAltImageText) {
  m_page->GetSettings().SetSelectionIncludesAltImageText(selectionIncludesAltImageText);
}

void InternalSettingsGenerated::setShouldClearDocumentBackground(bool shouldClearDocumentBackground) {
  m_page->GetSettings().SetShouldClearDocumentBackground(shouldClearDocumentBackground);
}

void InternalSettingsGenerated::setShouldPrintBackgrounds(bool shouldPrintBackgrounds) {
  m_page->GetSettings().SetShouldPrintBackgrounds(shouldPrintBackgrounds);
}

void InternalSettingsGenerated::setShouldRespectImageOrientation(bool shouldRespectImageOrientation) {
  m_page->GetSettings().SetShouldRespectImageOrientation(shouldRespectImageOrientation);
}

void InternalSettingsGenerated::setShouldReuseGlobalForUnownedMainFrame(bool shouldReuseGlobalForUnownedMainFrame) {
  m_page->GetSettings().SetShouldReuseGlobalForUnownedMainFrame(shouldReuseGlobalForUnownedMainFrame);
}

void InternalSettingsGenerated::setShouldThrottlePushState(bool shouldThrottlePushState) {
  m_page->GetSettings().SetShouldThrottlePushState(shouldThrottlePushState);
}

void InternalSettingsGenerated::setShowContextMenuOnMouseUp(bool showContextMenuOnMouseUp) {
  m_page->GetSettings().SetShowContextMenuOnMouseUp(showContextMenuOnMouseUp);
}

void InternalSettingsGenerated::setSmartInsertDeleteEnabled(bool smartInsertDeleteEnabled) {
  m_page->GetSettings().SetSmartInsertDeleteEnabled(smartInsertDeleteEnabled);
}

void InternalSettingsGenerated::setSmoothScrollForFindEnabled(bool smoothScrollForFindEnabled) {
  m_page->GetSettings().SetSmoothScrollForFindEnabled(smoothScrollForFindEnabled);
}

void InternalSettingsGenerated::setSpatialNavigationEnabled(bool spatialNavigationEnabled) {
  m_page->GetSettings().SetSpatialNavigationEnabled(spatialNavigationEnabled);
}

void InternalSettingsGenerated::setSpellCheckEnabledByDefault(bool spellCheckEnabledByDefault) {
  m_page->GetSettings().SetSpellCheckEnabledByDefault(spellCheckEnabledByDefault);
}

void InternalSettingsGenerated::setStrictMixedContentChecking(bool strictMixedContentChecking) {
  m_page->GetSettings().SetStrictMixedContentChecking(strictMixedContentChecking);
}

void InternalSettingsGenerated::setStrictMixedContentCheckingForPlugin(bool strictMixedContentCheckingForPlugin) {
  m_page->GetSettings().SetStrictMixedContentCheckingForPlugin(strictMixedContentCheckingForPlugin);
}

void InternalSettingsGenerated::setStrictPowerfulFeatureRestrictions(bool strictPowerfulFeatureRestrictions) {
  m_page->GetSettings().SetStrictPowerfulFeatureRestrictions(strictPowerfulFeatureRestrictions);
}

void InternalSettingsGenerated::setStrictlyBlockBlockableMixedContent(bool strictlyBlockBlockableMixedContent) {
  m_page->GetSettings().SetStrictlyBlockBlockableMixedContent(strictlyBlockBlockableMixedContent);
}

void InternalSettingsGenerated::setSupportsMultipleWindows(bool supportsMultipleWindows) {
  m_page->GetSettings().SetSupportsMultipleWindows(supportsMultipleWindows);
}

void InternalSettingsGenerated::setSyncXHRInDocumentsEnabled(bool syncXHRInDocumentsEnabled) {
  m_page->GetSettings().SetSyncXHRInDocumentsEnabled(syncXHRInDocumentsEnabled);
}

void InternalSettingsGenerated::setTextAreasAreResizable(bool textAreasAreResizable) {
  m_page->GetSettings().SetTextAreasAreResizable(textAreasAreResizable);
}

void InternalSettingsGenerated::setTextTrackBackgroundColor(const String& textTrackBackgroundColor) {
  m_page->GetSettings().SetTextTrackBackgroundColor(textTrackBackgroundColor);
}

void InternalSettingsGenerated::setTextTrackFontFamily(const String& textTrackFontFamily) {
  m_page->GetSettings().SetTextTrackFontFamily(textTrackFontFamily);
}

void InternalSettingsGenerated::setTextTrackFontStyle(const String& textTrackFontStyle) {
  m_page->GetSettings().SetTextTrackFontStyle(textTrackFontStyle);
}

void InternalSettingsGenerated::setTextTrackFontVariant(const String& textTrackFontVariant) {
  m_page->GetSettings().SetTextTrackFontVariant(textTrackFontVariant);
}

void InternalSettingsGenerated::setTextTrackMarginPercentage(double textTrackMarginPercentage) {
  m_page->GetSettings().SetTextTrackMarginPercentage(textTrackMarginPercentage);
}

void InternalSettingsGenerated::setTextTrackTextColor(const String& textTrackTextColor) {
  m_page->GetSettings().SetTextTrackTextColor(textTrackTextColor);
}

void InternalSettingsGenerated::setTextTrackTextShadow(const String& textTrackTextShadow) {
  m_page->GetSettings().SetTextTrackTextShadow(textTrackTextShadow);
}

void InternalSettingsGenerated::setTextTrackTextSize(const String& textTrackTextSize) {
  m_page->GetSettings().SetTextTrackTextSize(textTrackTextSize);
}

void InternalSettingsGenerated::setThreadedScrollingEnabled(bool threadedScrollingEnabled) {
  m_page->GetSettings().SetThreadedScrollingEnabled(threadedScrollingEnabled);
}

void InternalSettingsGenerated::setTouchAdjustmentEnabled(bool touchAdjustmentEnabled) {
  m_page->GetSettings().SetTouchAdjustmentEnabled(touchAdjustmentEnabled);
}

void InternalSettingsGenerated::setTouchDragDropEnabled(bool touchDragDropEnabled) {
  m_page->GetSettings().SetTouchDragDropEnabled(touchDragDropEnabled);
}

void InternalSettingsGenerated::setTouchEditingEnabled(bool touchEditingEnabled) {
  m_page->GetSettings().SetTouchEditingEnabled(touchEditingEnabled);
}

void InternalSettingsGenerated::setUseLegacyBackgroundSizeShorthandBehavior(bool useLegacyBackgroundSizeShorthandBehavior) {
  m_page->GetSettings().SetUseLegacyBackgroundSizeShorthandBehavior(useLegacyBackgroundSizeShorthandBehavior);
}

void InternalSettingsGenerated::setUseSolidColorScrollbars(bool useSolidColorScrollbars) {
  m_page->GetSettings().SetUseSolidColorScrollbars(useSolidColorScrollbars);
}

void InternalSettingsGenerated::setUseWideViewport(bool useWideViewport) {
  m_page->GetSettings().SetUseWideViewport(useWideViewport);
}

void InternalSettingsGenerated::setValidationMessageTimerMagnification(int validationMessageTimerMagnification) {
  m_page->GetSettings().SetValidationMessageTimerMagnification(validationMessageTimerMagnification);
}

void InternalSettingsGenerated::setViewportEnabled(bool viewportEnabled) {
  m_page->GetSettings().SetViewportEnabled(viewportEnabled);
}

void InternalSettingsGenerated::setViewportMetaEnabled(bool viewportMetaEnabled) {
  m_page->GetSettings().SetViewportMetaEnabled(viewportMetaEnabled);
}

void InternalSettingsGenerated::setViewportMetaMergeContentQuirk(bool viewportMetaMergeContentQuirk) {
  m_page->GetSettings().SetViewportMetaMergeContentQuirk(viewportMetaMergeContentQuirk);
}

void InternalSettingsGenerated::setViewportMetaZeroValuesQuirk(bool viewportMetaZeroValuesQuirk) {
  m_page->GetSettings().SetViewportMetaZeroValuesQuirk(viewportMetaZeroValuesQuirk);
}

void InternalSettingsGenerated::setWebGL1Enabled(bool webGL1Enabled) {
  m_page->GetSettings().SetWebGL1Enabled(webGL1Enabled);
}

void InternalSettingsGenerated::setWebGL2Enabled(bool webGL2Enabled) {
  m_page->GetSettings().SetWebGL2Enabled(webGL2Enabled);
}

void InternalSettingsGenerated::setWebGLErrorsToConsoleEnabled(bool webGLErrorsToConsoleEnabled) {
  m_page->GetSettings().SetWebGLErrorsToConsoleEnabled(webGLErrorsToConsoleEnabled);
}

void InternalSettingsGenerated::setWebSecurityEnabled(bool webSecurityEnabled) {
  m_page->GetSettings().SetWebSecurityEnabled(webSecurityEnabled);
}

void InternalSettingsGenerated::setWideViewportQuirkEnabled(bool wideViewportQuirkEnabled) {
  m_page->GetSettings().SetWideViewportQuirkEnabled(wideViewportQuirkEnabled);
}

void InternalSettingsGenerated::setXSSAuditorEnabled(bool xssAuditorEnabled) {
  m_page->GetSettings().SetXSSAuditorEnabled(xssAuditorEnabled);
}

void InternalSettingsGenerated::Trace(Visitor* visitor) {
  visitor->Trace(m_page);
  ScriptWrappable::Trace(visitor);
}

} // namespace blink
