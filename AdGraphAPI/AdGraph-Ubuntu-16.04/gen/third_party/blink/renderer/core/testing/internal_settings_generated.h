// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/internal_settings_generated.h.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/frame/settings.json5


#ifndef InternalSettingsGenerated_h
#define InternalSettingsGenerated_h

#include "third_party/blink/renderer/platform/bindings/script_wrappable.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/ref_counted.h"
#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class Page;

class InternalSettingsGenerated : public ScriptWrappable {
  DEFINE_WRAPPERTYPEINFO();

 public:
  explicit InternalSettingsGenerated(Page*);
  virtual ~InternalSettingsGenerated();
  void resetToConsistentState();
  void setDOMPasteAllowed(bool DOMPasteAllowed);
  void setAccelerated2dCanvasMSAASampleCount(int accelerated2dCanvasMSAASampleCount);
  void setAcceleratedCompositingEnabled(bool acceleratedCompositingEnabled);
  void setAccessibilityEnabled(bool accessibilityEnabled);
  void setAccessibilityFontScaleFactor(double accessibilityFontScaleFactor);
  void setAccessibilityPasswordValuesEnabled(bool accessibilityPasswordValuesEnabled);
  void setAllowCustomScrollbarInMainFrame(bool allowCustomScrollbarInMainFrame);
  void setAllowFileAccessFromFileURLs(bool allowFileAccessFromFileURLs);
  void setAllowGeolocationOnInsecureOrigins(bool allowGeolocationOnInsecureOrigins);
  void setAllowRunningOfInsecureContent(bool allowRunningOfInsecureContent);
  void setAllowScriptsToCloseWindows(bool allowScriptsToCloseWindows);
  void setAllowUniversalAccessFromFileURLs(bool allowUniversalAccessFromFileURLs);
  void setAlwaysShowContextMenuOnTouch(bool alwaysShowContextMenuOnTouch);
  void setAntialiased2dCanvasEnabled(bool antialiased2dCanvasEnabled);
  void setAntialiasedClips2dCanvasEnabled(bool antialiasedClips2dCanvasEnabled);
  void setAvailableHoverTypes(int availableHoverTypes);
  void setAvailablePointerTypes(int availablePointerTypes);
  void setBarrelButtonForDragEnabled(bool barrelButtonForDragEnabled);
  void setCookieEnabled(bool cookieEnabled);
  void setCSSExternalScannerNoPreload(bool cssExternalScannerNoPreload);
  void setCSSExternalScannerPreload(bool cssExternalScannerPreload);
  void setDataSaverHoldbackMediaApi(bool dataSaverHoldbackMediaApi);
  void setDataSaverHoldbackWebApi(bool dataSaverHoldbackWebApi);
  void setDefaultFixedFontSize(int defaultFixedFontSize);
  void setDefaultFontSize(int defaultFontSize);
  void setDefaultTextEncodingName(const String& defaultTextEncodingName);
  void setDefaultVideoPosterURL(const String& defaultVideoPosterURL);
  void setDeviceScaleAdjustment(double deviceScaleAdjustment);
  void setDeviceSupportsTouch(bool deviceSupportsTouch);
  void setDisableReadingFromCanvas(bool disableReadingFromCanvas);
  void setDisallowFetchForDocWrittenScriptsInMainFrame(bool disallowFetchForDocWrittenScriptsInMainFrame);
  void setDisallowFetchForDocWrittenScriptsInMainFrameIfEffectively2G(bool disallowFetchForDocWrittenScriptsInMainFrameIfEffectively2G);
  void setDisallowFetchForDocWrittenScriptsInMainFrameOnSlowConnections(bool disallowFetchForDocWrittenScriptsInMainFrameOnSlowConnections);
  void setDNSPrefetchingEnabled(bool dnsPrefetchingEnabled);
  void setDoHtmlPreloadScanning(bool doHtmlPreloadScanning);
  void setDoNotUpdateSelectionOnMutatingSelectionRange(bool doNotUpdateSelectionOnMutatingSelectionRange);
  void setDownloadableBinaryFontsEnabled(bool downloadableBinaryFontsEnabled);
  void setEmbeddedMediaExperienceEnabled(bool embeddedMediaExperienceEnabled);
  void setFetchImagePlaceholders(bool fetchImagePlaceholders);
  void setForceAndroidOverlayScrollbar(bool forceAndroidOverlayScrollbar);
  void setForceMainWorldInitialization(bool forceMainWorldInitialization);
  void setForcePreloadNoneForMediaElements(bool forcePreloadNoneForMediaElements);
  void setForceTouchEventFeatureDetectionForInspector(bool forceTouchEventFeatureDetectionForInspector);
  void setForceZeroLayoutHeight(bool forceZeroLayoutHeight);
  void setFullscreenSupported(bool fullscreenSupported);
  void setHideDownloadUI(bool hideDownloadUI);
  void setHideScrollbars(bool hideScrollbars);
  void setHighContrastContrast(double highContrastContrast);
  void setHighContrastGrayscale(bool highContrastGrayscale);
  void setHistoryEntryRequiresUserGesture(bool historyEntryRequiresUserGesture);
  void setHyperlinkAuditingEnabled(bool hyperlinkAuditingEnabled);
  void setIgnoreMainFrameOverflowHiddenQuirk(bool ignoreMainFrameOverflowHiddenQuirk);
  void setImagesEnabled(bool imagesEnabled);
  void setImmersiveModeEnabled(bool immersiveModeEnabled);
  void setInlineTextBoxAccessibilityEnabled(bool inlineTextBoxAccessibilityEnabled);
  void setJavaScriptCanAccessClipboard(bool javaScriptCanAccessClipboard);
  void setLoadWithOverviewMode(bool loadWithOverviewMode);
  void setLoadsImagesAutomatically(bool loadsImagesAutomatically);
  void setLocalStorageEnabled(bool localStorageEnabled);
  void setLogDnsPrefetchAndPreconnect(bool logDnsPrefetchAndPreconnect);
  void setLogPreload(bool logPreload);
  void setMainFrameClipsContent(bool mainFrameClipsContent);
  void setMainFrameResizesAreOrientationChanges(bool mainFrameResizesAreOrientationChanges);
  void setMaxTouchPoints(int maxTouchPoints);
  void setMediaControlsEnabled(bool mediaControlsEnabled);
  void setMediaDownloadInProductHelpEnabled(bool mediaDownloadInProductHelpEnabled);
  void setMediaPlaybackGestureWhitelistScope(const String& mediaPlaybackGestureWhitelistScope);
  void setMediaTypeOverride(const String& mediaTypeOverride);
  void setMinimumAccelerated2dCanvasSize(int minimumAccelerated2dCanvasSize);
  void setMinimumFontSize(int minimumFontSize);
  void setMinimumLogicalFontSize(int minimumLogicalFontSize);
  void setMockGestureTapHighlightsEnabled(bool mockGestureTapHighlightsEnabled);
  void setMultiTargetTapNotificationEnabled(bool multiTargetTapNotificationEnabled);
  void setNavigateOnDragDrop(bool navigateOnDragDrop);
  void setNavigatorPlatformOverride(const String& navigatorPlatformOverride);
  void setOfflineWebApplicationCacheEnabled(bool offlineWebApplicationCacheEnabled);
  void setPasswordEchoDurationInSeconds(double passwordEchoDurationInSeconds);
  void setPasswordEchoEnabled(bool passwordEchoEnabled);
  void setPictureInPictureEnabled(bool pictureInPictureEnabled);
  void setPluginsEnabled(bool pluginsEnabled);
  void setPreferCompositingToLCDTextEnabled(bool preferCompositingToLCDTextEnabled);
  void setPreferHiddenVolumeControls(bool preferHiddenVolumeControls);
  void setPresentationReceiver(bool presentationReceiver);
  void setPresentationRequiresUserGesture(bool presentationRequiresUserGesture);
  void setReportScreenSizeInPhysicalPixelsQuirk(bool reportScreenSizeInPhysicalPixelsQuirk);
  void setRubberBandingOnCompositorThread(bool rubberBandingOnCompositorThread);
  void setScriptEnabled(bool scriptEnabled);
  void setScrollAnimatorEnabled(bool scrollAnimatorEnabled);
  void setSelectTrailingWhitespaceEnabled(bool selectTrailingWhitespaceEnabled);
  void setSelectionIncludesAltImageText(bool selectionIncludesAltImageText);
  void setShouldClearDocumentBackground(bool shouldClearDocumentBackground);
  void setShouldPrintBackgrounds(bool shouldPrintBackgrounds);
  void setShouldRespectImageOrientation(bool shouldRespectImageOrientation);
  void setShouldReuseGlobalForUnownedMainFrame(bool shouldReuseGlobalForUnownedMainFrame);
  void setShouldThrottlePushState(bool shouldThrottlePushState);
  void setShowContextMenuOnMouseUp(bool showContextMenuOnMouseUp);
  void setSmartInsertDeleteEnabled(bool smartInsertDeleteEnabled);
  void setSmoothScrollForFindEnabled(bool smoothScrollForFindEnabled);
  void setSpatialNavigationEnabled(bool spatialNavigationEnabled);
  void setSpellCheckEnabledByDefault(bool spellCheckEnabledByDefault);
  void setStrictMixedContentChecking(bool strictMixedContentChecking);
  void setStrictMixedContentCheckingForPlugin(bool strictMixedContentCheckingForPlugin);
  void setStrictPowerfulFeatureRestrictions(bool strictPowerfulFeatureRestrictions);
  void setStrictlyBlockBlockableMixedContent(bool strictlyBlockBlockableMixedContent);
  void setSupportsMultipleWindows(bool supportsMultipleWindows);
  void setSyncXHRInDocumentsEnabled(bool syncXHRInDocumentsEnabled);
  void setTextAreasAreResizable(bool textAreasAreResizable);
  void setTextTrackBackgroundColor(const String& textTrackBackgroundColor);
  void setTextTrackFontFamily(const String& textTrackFontFamily);
  void setTextTrackFontStyle(const String& textTrackFontStyle);
  void setTextTrackFontVariant(const String& textTrackFontVariant);
  void setTextTrackMarginPercentage(double textTrackMarginPercentage);
  void setTextTrackTextColor(const String& textTrackTextColor);
  void setTextTrackTextShadow(const String& textTrackTextShadow);
  void setTextTrackTextSize(const String& textTrackTextSize);
  void setThreadedScrollingEnabled(bool threadedScrollingEnabled);
  void setTouchAdjustmentEnabled(bool touchAdjustmentEnabled);
  void setTouchDragDropEnabled(bool touchDragDropEnabled);
  void setTouchEditingEnabled(bool touchEditingEnabled);
  void setUseLegacyBackgroundSizeShorthandBehavior(bool useLegacyBackgroundSizeShorthandBehavior);
  void setUseSolidColorScrollbars(bool useSolidColorScrollbars);
  void setUseWideViewport(bool useWideViewport);
  void setValidationMessageTimerMagnification(int validationMessageTimerMagnification);
  void setViewportEnabled(bool viewportEnabled);
  void setViewportMetaEnabled(bool viewportMetaEnabled);
  void setViewportMetaMergeContentQuirk(bool viewportMetaMergeContentQuirk);
  void setViewportMetaZeroValuesQuirk(bool viewportMetaZeroValuesQuirk);
  void setWebGL1Enabled(bool webGL1Enabled);
  void setWebGL2Enabled(bool webGL2Enabled);
  void setWebGLErrorsToConsoleEnabled(bool webGLErrorsToConsoleEnabled);
  void setWebSecurityEnabled(bool webSecurityEnabled);
  void setWideViewportQuirkEnabled(bool wideViewportQuirkEnabled);
  void setXSSAuditorEnabled(bool xssAuditorEnabled);

  void Trace(Visitor*) override;

 private:
  Member<Page> m_page;

  bool m_DOMPasteAllowed;
  int m_accelerated2dCanvasMSAASampleCount;
  bool m_acceleratedCompositingEnabled;
  bool m_accessibilityEnabled;
  double m_accessibilityFontScaleFactor;
  bool m_accessibilityPasswordValuesEnabled;
  bool m_allowCustomScrollbarInMainFrame;
  bool m_allowFileAccessFromFileURLs;
  bool m_allowGeolocationOnInsecureOrigins;
  bool m_allowRunningOfInsecureContent;
  bool m_allowScriptsToCloseWindows;
  bool m_allowUniversalAccessFromFileURLs;
  bool m_alwaysShowContextMenuOnTouch;
  bool m_antialiased2dCanvasEnabled;
  bool m_antialiasedClips2dCanvasEnabled;
  int m_availableHoverTypes;
  int m_availablePointerTypes;
  bool m_barrelButtonForDragEnabled;
  bool m_cookieEnabled;
  bool m_cssExternalScannerNoPreload;
  bool m_cssExternalScannerPreload;
  bool m_dataSaverHoldbackMediaApi;
  bool m_dataSaverHoldbackWebApi;
  int m_defaultFixedFontSize;
  int m_defaultFontSize;
  String m_defaultTextEncodingName;
  String m_defaultVideoPosterURL;
  double m_deviceScaleAdjustment;
  bool m_deviceSupportsTouch;
  bool m_disableReadingFromCanvas;
  bool m_disallowFetchForDocWrittenScriptsInMainFrame;
  bool m_disallowFetchForDocWrittenScriptsInMainFrameIfEffectively2G;
  bool m_disallowFetchForDocWrittenScriptsInMainFrameOnSlowConnections;
  bool m_dnsPrefetchingEnabled;
  bool m_doHtmlPreloadScanning;
  bool m_doNotUpdateSelectionOnMutatingSelectionRange;
  bool m_downloadableBinaryFontsEnabled;
  bool m_embeddedMediaExperienceEnabled;
  bool m_fetchImagePlaceholders;
  bool m_forceAndroidOverlayScrollbar;
  bool m_forceMainWorldInitialization;
  bool m_forcePreloadNoneForMediaElements;
  bool m_forceTouchEventFeatureDetectionForInspector;
  bool m_forceZeroLayoutHeight;
  bool m_fullscreenSupported;
  bool m_hideDownloadUI;
  bool m_hideScrollbars;
  double m_highContrastContrast;
  bool m_highContrastGrayscale;
  bool m_historyEntryRequiresUserGesture;
  bool m_hyperlinkAuditingEnabled;
  bool m_ignoreMainFrameOverflowHiddenQuirk;
  bool m_imagesEnabled;
  bool m_immersiveModeEnabled;
  bool m_inlineTextBoxAccessibilityEnabled;
  bool m_javaScriptCanAccessClipboard;
  bool m_loadWithOverviewMode;
  bool m_loadsImagesAutomatically;
  bool m_localStorageEnabled;
  bool m_logDnsPrefetchAndPreconnect;
  bool m_logPreload;
  bool m_mainFrameClipsContent;
  bool m_mainFrameResizesAreOrientationChanges;
  int m_maxTouchPoints;
  bool m_mediaControlsEnabled;
  bool m_mediaDownloadInProductHelpEnabled;
  String m_mediaPlaybackGestureWhitelistScope;
  String m_mediaTypeOverride;
  int m_minimumAccelerated2dCanvasSize;
  int m_minimumFontSize;
  int m_minimumLogicalFontSize;
  bool m_mockGestureTapHighlightsEnabled;
  bool m_multiTargetTapNotificationEnabled;
  bool m_navigateOnDragDrop;
  String m_navigatorPlatformOverride;
  bool m_offlineWebApplicationCacheEnabled;
  double m_passwordEchoDurationInSeconds;
  bool m_passwordEchoEnabled;
  bool m_pictureInPictureEnabled;
  bool m_pluginsEnabled;
  bool m_preferCompositingToLCDTextEnabled;
  bool m_preferHiddenVolumeControls;
  bool m_presentationReceiver;
  bool m_presentationRequiresUserGesture;
  bool m_reportScreenSizeInPhysicalPixelsQuirk;
  bool m_rubberBandingOnCompositorThread;
  bool m_scriptEnabled;
  bool m_scrollAnimatorEnabled;
  bool m_selectTrailingWhitespaceEnabled;
  bool m_selectionIncludesAltImageText;
  bool m_shouldClearDocumentBackground;
  bool m_shouldPrintBackgrounds;
  bool m_shouldRespectImageOrientation;
  bool m_shouldReuseGlobalForUnownedMainFrame;
  bool m_shouldThrottlePushState;
  bool m_showContextMenuOnMouseUp;
  bool m_smartInsertDeleteEnabled;
  bool m_smoothScrollForFindEnabled;
  bool m_spatialNavigationEnabled;
  bool m_spellCheckEnabledByDefault;
  bool m_strictMixedContentChecking;
  bool m_strictMixedContentCheckingForPlugin;
  bool m_strictPowerfulFeatureRestrictions;
  bool m_strictlyBlockBlockableMixedContent;
  bool m_supportsMultipleWindows;
  bool m_syncXHRInDocumentsEnabled;
  bool m_textAreasAreResizable;
  String m_textTrackBackgroundColor;
  String m_textTrackFontFamily;
  String m_textTrackFontStyle;
  String m_textTrackFontVariant;
  double m_textTrackMarginPercentage;
  String m_textTrackTextColor;
  String m_textTrackTextShadow;
  String m_textTrackTextSize;
  bool m_threadedScrollingEnabled;
  bool m_touchAdjustmentEnabled;
  bool m_touchDragDropEnabled;
  bool m_touchEditingEnabled;
  bool m_useLegacyBackgroundSizeShorthandBehavior;
  bool m_useSolidColorScrollbars;
  bool m_useWideViewport;
  int m_validationMessageTimerMagnification;
  bool m_viewportEnabled;
  bool m_viewportMetaEnabled;
  bool m_viewportMetaMergeContentQuirk;
  bool m_viewportMetaZeroValuesQuirk;
  bool m_webGL1Enabled;
  bool m_webGL2Enabled;
  bool m_webGLErrorsToConsoleEnabled;
  bool m_webSecurityEnabled;
  bool m_wideViewportQuirkEnabled;
  bool m_xssAuditorEnabled;
};

} // namespace blink

#endif // InternalSettingsGenerated_h
