// This file is generated

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef HEADLESS_PUBLIC_DEVTOOLS_DOMAINS_PAGE_H_
#define HEADLESS_PUBLIC_DEVTOOLS_DOMAINS_PAGE_H_

#include "base/callback.h"
#include "base/observer_list.h"
#include "base/values.h"
#include "headless/public/devtools/domains/types_dom.h"
#include "headless/public/devtools/domains/types_debugger.h"
#include "headless/public/devtools/domains/types_emulation.h"
#include "headless/public/devtools/domains/types_io.h"
#include "headless/public/devtools/domains/types_network.h"
#include "headless/public/devtools/domains/types_page.h"
#include "headless/public/devtools/domains/types_runtime.h"
#include "headless/public/devtools/domains/types_security.h"
#include "headless/public/headless_export.h"
#include "headless/public/internal/message_dispatcher.h"


namespace headless {
namespace page {
class HEADLESS_EXPORT ExperimentalDomain;
class HEADLESS_EXPORT ExperimentalObserver;

class HEADLESS_EXPORT ExperimentalObserver {
 public:
  virtual ~ExperimentalObserver() {}
  virtual void OnDomContentEventFired(const DomContentEventFiredParams& params) {}
  // Fired when frame has been attached to its parent.
  virtual void OnFrameAttached(const FrameAttachedParams& params) {}
  // Fired when frame no longer has a scheduled navigation.
  virtual void OnFrameClearedScheduledNavigation(const FrameClearedScheduledNavigationParams& params) {}
  // Fired when frame has been detached from its parent.
  virtual void OnFrameDetached(const FrameDetachedParams& params) {}
  // Fired once navigation of the frame has completed. Frame is now associated with the new loader.
  virtual void OnFrameNavigated(const FrameNavigatedParams& params) {}
  virtual void OnFrameResized(const FrameResizedParams& params) {}
  // Fired when frame schedules a potential navigation.
  virtual void OnFrameScheduledNavigation(const FrameScheduledNavigationParams& params) {}
  // Fired when frame has started loading.
  virtual void OnFrameStartedLoading(const FrameStartedLoadingParams& params) {}
  // Fired when frame has stopped loading.
  virtual void OnFrameStoppedLoading(const FrameStoppedLoadingParams& params) {}
  // Fired when interstitial page was hidden
  virtual void OnInterstitialHidden(const InterstitialHiddenParams& params) {}
  // Fired when interstitial page was shown
  virtual void OnInterstitialShown(const InterstitialShownParams& params) {}
  // Fired when a JavaScript initiated dialog (alert, confirm, prompt, or onbeforeunload) has been
  // closed.
  virtual void OnJavascriptDialogClosed(const JavascriptDialogClosedParams& params) {}
  // Fired when a JavaScript initiated dialog (alert, confirm, prompt, or onbeforeunload) is about to
  // open.
  virtual void OnJavascriptDialogOpening(const JavascriptDialogOpeningParams& params) {}
  // Fired for top level page lifecycle events such as navigation, load, paint, etc.
  virtual void OnLifecycleEvent(const LifecycleEventParams& params) {}
  virtual void OnLoadEventFired(const LoadEventFiredParams& params) {}
  // Fired when same-document navigation happens, e.g. due to history API usage or anchor navigation.
  virtual void OnNavigatedWithinDocument(const NavigatedWithinDocumentParams& params) {}
  // Compressed image data requested by the `startScreencast`.
  virtual void OnScreencastFrame(const ScreencastFrameParams& params) {}
  // Fired when the page with currently enabled screencast was shown or hidden `.
  virtual void OnScreencastVisibilityChanged(const ScreencastVisibilityChangedParams& params) {}
  // Fired when a new window is going to be opened, via window.open(), link click, form submission,
  // etc.
  virtual void OnWindowOpen(const WindowOpenParams& params) {}
};

class HEADLESS_EXPORT Observer : public ExperimentalObserver {
 public:
  virtual ~Observer() {}
  virtual void OnDomContentEventFired(const DomContentEventFiredParams& params) {}
  // Fired when frame has been attached to its parent.
  virtual void OnFrameAttached(const FrameAttachedParams& params) {}
  // Experimental: Fired when frame no longer has a scheduled navigation.
  virtual void OnFrameClearedScheduledNavigation(const FrameClearedScheduledNavigationParams& params) final {}
  // Fired when frame has been detached from its parent.
  virtual void OnFrameDetached(const FrameDetachedParams& params) {}
  // Fired once navigation of the frame has completed. Frame is now associated with the new loader.
  virtual void OnFrameNavigated(const FrameNavigatedParams& params) {}
  virtual void OnFrameResized(const FrameResizedParams& params) final {}
  // Experimental: Fired when frame schedules a potential navigation.
  virtual void OnFrameScheduledNavigation(const FrameScheduledNavigationParams& params) final {}
  // Experimental: Fired when frame has started loading.
  virtual void OnFrameStartedLoading(const FrameStartedLoadingParams& params) final {}
  // Experimental: Fired when frame has stopped loading.
  virtual void OnFrameStoppedLoading(const FrameStoppedLoadingParams& params) final {}
  // Fired when interstitial page was hidden
  virtual void OnInterstitialHidden(const InterstitialHiddenParams& params) {}
  // Fired when interstitial page was shown
  virtual void OnInterstitialShown(const InterstitialShownParams& params) {}
  // Fired when a JavaScript initiated dialog (alert, confirm, prompt, or onbeforeunload) has been
  // closed.
  virtual void OnJavascriptDialogClosed(const JavascriptDialogClosedParams& params) {}
  // Fired when a JavaScript initiated dialog (alert, confirm, prompt, or onbeforeunload) is about to
  // open.
  virtual void OnJavascriptDialogOpening(const JavascriptDialogOpeningParams& params) {}
  // Fired for top level page lifecycle events such as navigation, load, paint, etc.
  virtual void OnLifecycleEvent(const LifecycleEventParams& params) {}
  virtual void OnLoadEventFired(const LoadEventFiredParams& params) {}
  // Experimental: Fired when same-document navigation happens, e.g. due to history API usage or anchor navigation.
  virtual void OnNavigatedWithinDocument(const NavigatedWithinDocumentParams& params) final {}
  // Experimental: Compressed image data requested by the `startScreencast`.
  virtual void OnScreencastFrame(const ScreencastFrameParams& params) final {}
  // Experimental: Fired when the page with currently enabled screencast was shown or hidden `.
  virtual void OnScreencastVisibilityChanged(const ScreencastVisibilityChangedParams& params) final {}
  // Fired when a new window is going to be opened, via window.open(), link click, form submission,
  // etc.
  virtual void OnWindowOpen(const WindowOpenParams& params) {}
};

// Actions and events related to the inspected page belong to the page domain.
class HEADLESS_EXPORT Domain {
 public:
  // Add or remove an observer. |observer| must be removed before being
  // destroyed.
  void AddObserver(Observer* observer);
  void RemoveObserver(Observer* observer);

  // Return the experimental interface for this domain. Note that experimental
  // commands may be changed or removed at any time.
  ExperimentalDomain* GetExperimental();

  // Evaluates given script in every frame upon creation (before loading frame's scripts).
  void AddScriptToEvaluateOnNewDocument(std::unique_ptr<AddScriptToEvaluateOnNewDocumentParams> params, base::OnceCallback<void(std::unique_ptr<AddScriptToEvaluateOnNewDocumentResult>)> callback = base::OnceCallback<void(std::unique_ptr<AddScriptToEvaluateOnNewDocumentResult>)>());
  void AddScriptToEvaluateOnNewDocument(const std::string& source, base::OnceCallback<void(std::unique_ptr<AddScriptToEvaluateOnNewDocumentResult>)> callback = base::OnceCallback<void(std::unique_ptr<AddScriptToEvaluateOnNewDocumentResult>)>());

  // Brings page to front (activates tab).
  void BringToFront(std::unique_ptr<BringToFrontParams> params, base::OnceCallback<void(std::unique_ptr<BringToFrontResult>)> callback = base::OnceCallback<void(std::unique_ptr<BringToFrontResult>)>());
  void BringToFront(base::OnceClosure callback = base::OnceClosure());
  void BringToFront(std::unique_ptr<BringToFrontParams> params, base::OnceClosure callback);

  // Capture page screenshot.
  void CaptureScreenshot(std::unique_ptr<CaptureScreenshotParams> params, base::OnceCallback<void(std::unique_ptr<CaptureScreenshotResult>)> callback = base::OnceCallback<void(std::unique_ptr<CaptureScreenshotResult>)>());
  void CaptureScreenshot(base::OnceCallback<void(std::unique_ptr<CaptureScreenshotResult>)> callback = base::OnceCallback<void(std::unique_ptr<CaptureScreenshotResult>)>());

  // Creates an isolated world for the given frame.
  void CreateIsolatedWorld(std::unique_ptr<CreateIsolatedWorldParams> params, base::OnceCallback<void(std::unique_ptr<CreateIsolatedWorldResult>)> callback = base::OnceCallback<void(std::unique_ptr<CreateIsolatedWorldResult>)>());
  void CreateIsolatedWorld(const std::string& frame_id, base::OnceCallback<void(std::unique_ptr<CreateIsolatedWorldResult>)> callback = base::OnceCallback<void(std::unique_ptr<CreateIsolatedWorldResult>)>());

  // Disables page domain notifications.
  void Disable(std::unique_ptr<DisableParams> params, base::OnceCallback<void(std::unique_ptr<DisableResult>)> callback = base::OnceCallback<void(std::unique_ptr<DisableResult>)>());
  void Disable(base::OnceClosure callback = base::OnceClosure());
  void Disable(std::unique_ptr<DisableParams> params, base::OnceClosure callback);

  // Enables page domain notifications.
  void Enable(std::unique_ptr<EnableParams> params, base::OnceCallback<void(std::unique_ptr<EnableResult>)> callback = base::OnceCallback<void(std::unique_ptr<EnableResult>)>());
  void Enable(base::OnceClosure callback = base::OnceClosure());
  void Enable(std::unique_ptr<EnableParams> params, base::OnceClosure callback);

  void GetAppManifest(std::unique_ptr<GetAppManifestParams> params, base::OnceCallback<void(std::unique_ptr<GetAppManifestResult>)> callback = base::OnceCallback<void(std::unique_ptr<GetAppManifestResult>)>());
  void GetAppManifest(base::OnceCallback<void(std::unique_ptr<GetAppManifestResult>)> callback = base::OnceCallback<void(std::unique_ptr<GetAppManifestResult>)>());

  // Returns present frame tree structure.
  void GetFrameTree(std::unique_ptr<GetFrameTreeParams> params, base::OnceCallback<void(std::unique_ptr<GetFrameTreeResult>)> callback = base::OnceCallback<void(std::unique_ptr<GetFrameTreeResult>)>());
  void GetFrameTree(base::OnceCallback<void(std::unique_ptr<GetFrameTreeResult>)> callback = base::OnceCallback<void(std::unique_ptr<GetFrameTreeResult>)>());

  // Returns metrics relating to the layouting of the page, such as viewport bounds/scale.
  void GetLayoutMetrics(std::unique_ptr<GetLayoutMetricsParams> params, base::OnceCallback<void(std::unique_ptr<GetLayoutMetricsResult>)> callback = base::OnceCallback<void(std::unique_ptr<GetLayoutMetricsResult>)>());
  void GetLayoutMetrics(base::OnceCallback<void(std::unique_ptr<GetLayoutMetricsResult>)> callback = base::OnceCallback<void(std::unique_ptr<GetLayoutMetricsResult>)>());

  // Returns navigation history for the current page.
  void GetNavigationHistory(std::unique_ptr<GetNavigationHistoryParams> params, base::OnceCallback<void(std::unique_ptr<GetNavigationHistoryResult>)> callback = base::OnceCallback<void(std::unique_ptr<GetNavigationHistoryResult>)>());
  void GetNavigationHistory(base::OnceCallback<void(std::unique_ptr<GetNavigationHistoryResult>)> callback = base::OnceCallback<void(std::unique_ptr<GetNavigationHistoryResult>)>());

  // Accepts or dismisses a JavaScript initiated dialog (alert, confirm, prompt, or onbeforeunload).
  void HandleJavaScriptDialog(std::unique_ptr<HandleJavaScriptDialogParams> params, base::OnceCallback<void(std::unique_ptr<HandleJavaScriptDialogResult>)> callback = base::OnceCallback<void(std::unique_ptr<HandleJavaScriptDialogResult>)>());
  void HandleJavaScriptDialog(bool accept, base::OnceClosure callback = base::OnceClosure());
  void HandleJavaScriptDialog(std::unique_ptr<HandleJavaScriptDialogParams> params, base::OnceClosure callback);

  // Navigates current page to the given URL.
  void Navigate(std::unique_ptr<NavigateParams> params, base::OnceCallback<void(std::unique_ptr<NavigateResult>)> callback = base::OnceCallback<void(std::unique_ptr<NavigateResult>)>());
  void Navigate(const std::string& url, base::OnceCallback<void(std::unique_ptr<NavigateResult>)> callback = base::OnceCallback<void(std::unique_ptr<NavigateResult>)>());

  // Navigates current page to the given history entry.
  void NavigateToHistoryEntry(std::unique_ptr<NavigateToHistoryEntryParams> params, base::OnceCallback<void(std::unique_ptr<NavigateToHistoryEntryResult>)> callback = base::OnceCallback<void(std::unique_ptr<NavigateToHistoryEntryResult>)>());
  void NavigateToHistoryEntry(int entry_id, base::OnceClosure callback = base::OnceClosure());
  void NavigateToHistoryEntry(std::unique_ptr<NavigateToHistoryEntryParams> params, base::OnceClosure callback);

  // Print page as PDF.
  void PrintToPDF(std::unique_ptr<PrintToPDFParams> params, base::OnceCallback<void(std::unique_ptr<PrintToPDFResult>)> callback = base::OnceCallback<void(std::unique_ptr<PrintToPDFResult>)>());
  void PrintToPDF(base::OnceCallback<void(std::unique_ptr<PrintToPDFResult>)> callback = base::OnceCallback<void(std::unique_ptr<PrintToPDFResult>)>());

  // Reloads given page optionally ignoring the cache.
  void Reload(std::unique_ptr<ReloadParams> params, base::OnceCallback<void(std::unique_ptr<ReloadResult>)> callback = base::OnceCallback<void(std::unique_ptr<ReloadResult>)>());
  void Reload(base::OnceClosure callback = base::OnceClosure());
  void Reload(std::unique_ptr<ReloadParams> params, base::OnceClosure callback);

  // Removes given script from the list.
  void RemoveScriptToEvaluateOnNewDocument(std::unique_ptr<RemoveScriptToEvaluateOnNewDocumentParams> params, base::OnceCallback<void(std::unique_ptr<RemoveScriptToEvaluateOnNewDocumentResult>)> callback = base::OnceCallback<void(std::unique_ptr<RemoveScriptToEvaluateOnNewDocumentResult>)>());
  void RemoveScriptToEvaluateOnNewDocument(const std::string& identifier, base::OnceClosure callback = base::OnceClosure());
  void RemoveScriptToEvaluateOnNewDocument(std::unique_ptr<RemoveScriptToEvaluateOnNewDocumentParams> params, base::OnceClosure callback);

  // Sets given markup as the document's HTML.
  void SetDocumentContent(std::unique_ptr<SetDocumentContentParams> params, base::OnceCallback<void(std::unique_ptr<SetDocumentContentResult>)> callback = base::OnceCallback<void(std::unique_ptr<SetDocumentContentResult>)>());
  void SetDocumentContent(const std::string& frame_id, const std::string& html, base::OnceClosure callback = base::OnceClosure());
  void SetDocumentContent(std::unique_ptr<SetDocumentContentParams> params, base::OnceClosure callback);

  // Force the page stop all navigations and pending resource fetches.
  void StopLoading(std::unique_ptr<StopLoadingParams> params, base::OnceCallback<void(std::unique_ptr<StopLoadingResult>)> callback = base::OnceCallback<void(std::unique_ptr<StopLoadingResult>)>());
  void StopLoading(base::OnceClosure callback = base::OnceClosure());
  void StopLoading(std::unique_ptr<StopLoadingParams> params, base::OnceClosure callback);

 protected:
  Domain(internal::MessageDispatcher* dispatcher);
  ~Domain();

  static void HandleAddScriptToEvaluateOnLoadResponse(base::OnceCallback<void(std::unique_ptr<AddScriptToEvaluateOnLoadResult>)> callback, const base::Value& response);
  static void HandleAddScriptToEvaluateOnNewDocumentResponse(base::OnceCallback<void(std::unique_ptr<AddScriptToEvaluateOnNewDocumentResult>)> callback, const base::Value& response);
  static void HandleBringToFrontResponse(base::OnceCallback<void(std::unique_ptr<BringToFrontResult>)> callback, const base::Value& response);
  static void HandleCaptureScreenshotResponse(base::OnceCallback<void(std::unique_ptr<CaptureScreenshotResult>)> callback, const base::Value& response);
  static void HandleClearDeviceMetricsOverrideResponse(base::OnceCallback<void(std::unique_ptr<ClearDeviceMetricsOverrideResult>)> callback, const base::Value& response);
  static void HandleClearDeviceOrientationOverrideResponse(base::OnceCallback<void(std::unique_ptr<ClearDeviceOrientationOverrideResult>)> callback, const base::Value& response);
  static void HandleClearGeolocationOverrideResponse(base::OnceCallback<void(std::unique_ptr<ClearGeolocationOverrideResult>)> callback, const base::Value& response);
  static void HandleCreateIsolatedWorldResponse(base::OnceCallback<void(std::unique_ptr<CreateIsolatedWorldResult>)> callback, const base::Value& response);
  static void HandleDeleteCookieResponse(base::OnceCallback<void(std::unique_ptr<DeleteCookieResult>)> callback, const base::Value& response);
  static void HandleDisableResponse(base::OnceCallback<void(std::unique_ptr<DisableResult>)> callback, const base::Value& response);
  static void HandleEnableResponse(base::OnceCallback<void(std::unique_ptr<EnableResult>)> callback, const base::Value& response);
  static void HandleGetAppManifestResponse(base::OnceCallback<void(std::unique_ptr<GetAppManifestResult>)> callback, const base::Value& response);
  static void HandleGetCookiesResponse(base::OnceCallback<void(std::unique_ptr<GetCookiesResult>)> callback, const base::Value& response);
  static void HandleGetFrameTreeResponse(base::OnceCallback<void(std::unique_ptr<GetFrameTreeResult>)> callback, const base::Value& response);
  static void HandleGetLayoutMetricsResponse(base::OnceCallback<void(std::unique_ptr<GetLayoutMetricsResult>)> callback, const base::Value& response);
  static void HandleGetNavigationHistoryResponse(base::OnceCallback<void(std::unique_ptr<GetNavigationHistoryResult>)> callback, const base::Value& response);
  static void HandleGetResourceContentResponse(base::OnceCallback<void(std::unique_ptr<GetResourceContentResult>)> callback, const base::Value& response);
  static void HandleGetResourceTreeResponse(base::OnceCallback<void(std::unique_ptr<GetResourceTreeResult>)> callback, const base::Value& response);
  static void HandleHandleJavaScriptDialogResponse(base::OnceCallback<void(std::unique_ptr<HandleJavaScriptDialogResult>)> callback, const base::Value& response);
  static void HandleNavigateResponse(base::OnceCallback<void(std::unique_ptr<NavigateResult>)> callback, const base::Value& response);
  static void HandleNavigateToHistoryEntryResponse(base::OnceCallback<void(std::unique_ptr<NavigateToHistoryEntryResult>)> callback, const base::Value& response);
  static void HandlePrintToPDFResponse(base::OnceCallback<void(std::unique_ptr<PrintToPDFResult>)> callback, const base::Value& response);
  static void HandleReloadResponse(base::OnceCallback<void(std::unique_ptr<ReloadResult>)> callback, const base::Value& response);
  static void HandleRemoveScriptToEvaluateOnLoadResponse(base::OnceCallback<void(std::unique_ptr<RemoveScriptToEvaluateOnLoadResult>)> callback, const base::Value& response);
  static void HandleRemoveScriptToEvaluateOnNewDocumentResponse(base::OnceCallback<void(std::unique_ptr<RemoveScriptToEvaluateOnNewDocumentResult>)> callback, const base::Value& response);
  static void HandleRequestAppBannerResponse(base::OnceCallback<void(std::unique_ptr<RequestAppBannerResult>)> callback, const base::Value& response);
  static void HandleScreencastFrameAckResponse(base::OnceCallback<void(std::unique_ptr<ScreencastFrameAckResult>)> callback, const base::Value& response);
  static void HandleSearchInResourceResponse(base::OnceCallback<void(std::unique_ptr<SearchInResourceResult>)> callback, const base::Value& response);
  static void HandleSetAdBlockingEnabledResponse(base::OnceCallback<void(std::unique_ptr<SetAdBlockingEnabledResult>)> callback, const base::Value& response);
  static void HandleSetBypassCSPResponse(base::OnceCallback<void(std::unique_ptr<SetBypassCSPResult>)> callback, const base::Value& response);
  static void HandleSetDeviceMetricsOverrideResponse(base::OnceCallback<void(std::unique_ptr<SetDeviceMetricsOverrideResult>)> callback, const base::Value& response);
  static void HandleSetDeviceOrientationOverrideResponse(base::OnceCallback<void(std::unique_ptr<SetDeviceOrientationOverrideResult>)> callback, const base::Value& response);
  static void HandleSetDocumentContentResponse(base::OnceCallback<void(std::unique_ptr<SetDocumentContentResult>)> callback, const base::Value& response);
  static void HandleSetDownloadBehaviorResponse(base::OnceCallback<void(std::unique_ptr<SetDownloadBehaviorResult>)> callback, const base::Value& response);
  static void HandleSetGeolocationOverrideResponse(base::OnceCallback<void(std::unique_ptr<SetGeolocationOverrideResult>)> callback, const base::Value& response);
  static void HandleSetLifecycleEventsEnabledResponse(base::OnceCallback<void(std::unique_ptr<SetLifecycleEventsEnabledResult>)> callback, const base::Value& response);
  static void HandleSetTouchEmulationEnabledResponse(base::OnceCallback<void(std::unique_ptr<SetTouchEmulationEnabledResult>)> callback, const base::Value& response);
  static void HandleStartScreencastResponse(base::OnceCallback<void(std::unique_ptr<StartScreencastResult>)> callback, const base::Value& response);
  static void HandleStopLoadingResponse(base::OnceCallback<void(std::unique_ptr<StopLoadingResult>)> callback, const base::Value& response);
  static void HandleCrashResponse(base::OnceCallback<void(std::unique_ptr<CrashResult>)> callback, const base::Value& response);
  static void HandleCloseResponse(base::OnceCallback<void(std::unique_ptr<CloseResult>)> callback, const base::Value& response);
  static void HandleSetWebLifecycleStateResponse(base::OnceCallback<void(std::unique_ptr<SetWebLifecycleStateResult>)> callback, const base::Value& response);
  static void HandleStopScreencastResponse(base::OnceCallback<void(std::unique_ptr<StopScreencastResult>)> callback, const base::Value& response);

  void DispatchDomContentEventFiredEvent(const base::Value& params);
  void DispatchFrameAttachedEvent(const base::Value& params);
  void DispatchFrameClearedScheduledNavigationEvent(const base::Value& params);
  void DispatchFrameDetachedEvent(const base::Value& params);
  void DispatchFrameNavigatedEvent(const base::Value& params);
  void DispatchFrameResizedEvent(const base::Value& params);
  void DispatchFrameScheduledNavigationEvent(const base::Value& params);
  void DispatchFrameStartedLoadingEvent(const base::Value& params);
  void DispatchFrameStoppedLoadingEvent(const base::Value& params);
  void DispatchInterstitialHiddenEvent(const base::Value& params);
  void DispatchInterstitialShownEvent(const base::Value& params);
  void DispatchJavascriptDialogClosedEvent(const base::Value& params);
  void DispatchJavascriptDialogOpeningEvent(const base::Value& params);
  void DispatchLifecycleEventEvent(const base::Value& params);
  void DispatchLoadEventFiredEvent(const base::Value& params);
  void DispatchNavigatedWithinDocumentEvent(const base::Value& params);
  void DispatchScreencastFrameEvent(const base::Value& params);
  void DispatchScreencastVisibilityChangedEvent(const base::Value& params);
  void DispatchWindowOpenEvent(const base::Value& params);

  internal::MessageDispatcher* dispatcher_;  // Not owned.
  base::ObserverList<ExperimentalObserver> observers_;

 protected:
  void RegisterEventHandlersIfNeeded();

 private:
  bool event_handlers_registered_ = false;

  DISALLOW_COPY_AND_ASSIGN(Domain);
};

class ExperimentalDomain : public Domain {
 public:
  ExperimentalDomain(internal::MessageDispatcher* dispatcher);
  ~ExperimentalDomain();

  // Add or remove an observer. |observer| must be removed before being
  // destroyed.
  void AddObserver(ExperimentalObserver* observer);
  void RemoveObserver(ExperimentalObserver* observer);

  // Deprecated, please use addScriptToEvaluateOnNewDocument instead.
  void AddScriptToEvaluateOnLoad(std::unique_ptr<AddScriptToEvaluateOnLoadParams> params, base::OnceCallback<void(std::unique_ptr<AddScriptToEvaluateOnLoadResult>)> callback = base::OnceCallback<void(std::unique_ptr<AddScriptToEvaluateOnLoadResult>)>());

  // Returns content of the given resource.
  void GetResourceContent(std::unique_ptr<GetResourceContentParams> params, base::OnceCallback<void(std::unique_ptr<GetResourceContentResult>)> callback = base::OnceCallback<void(std::unique_ptr<GetResourceContentResult>)>());

  // Returns present frame / resource tree structure.
  void GetResourceTree(std::unique_ptr<GetResourceTreeParams> params, base::OnceCallback<void(std::unique_ptr<GetResourceTreeResult>)> callback = base::OnceCallback<void(std::unique_ptr<GetResourceTreeResult>)>());

  // Deprecated, please use removeScriptToEvaluateOnNewDocument instead.
  void RemoveScriptToEvaluateOnLoad(std::unique_ptr<RemoveScriptToEvaluateOnLoadParams> params, base::OnceCallback<void(std::unique_ptr<RemoveScriptToEvaluateOnLoadResult>)> callback = base::OnceCallback<void(std::unique_ptr<RemoveScriptToEvaluateOnLoadResult>)>());

  void RequestAppBanner(std::unique_ptr<RequestAppBannerParams> params, base::OnceCallback<void(std::unique_ptr<RequestAppBannerResult>)> callback = base::OnceCallback<void(std::unique_ptr<RequestAppBannerResult>)>());

  // Acknowledges that a screencast frame has been received by the frontend.
  void ScreencastFrameAck(std::unique_ptr<ScreencastFrameAckParams> params, base::OnceCallback<void(std::unique_ptr<ScreencastFrameAckResult>)> callback = base::OnceCallback<void(std::unique_ptr<ScreencastFrameAckResult>)>());

  // Searches for given string in resource content.
  void SearchInResource(std::unique_ptr<SearchInResourceParams> params, base::OnceCallback<void(std::unique_ptr<SearchInResourceResult>)> callback = base::OnceCallback<void(std::unique_ptr<SearchInResourceResult>)>());

  // Enable Chrome's experimental ad filter on all sites.
  void SetAdBlockingEnabled(std::unique_ptr<SetAdBlockingEnabledParams> params, base::OnceCallback<void(std::unique_ptr<SetAdBlockingEnabledResult>)> callback = base::OnceCallback<void(std::unique_ptr<SetAdBlockingEnabledResult>)>());

  // Enable page Content Security Policy by-passing.
  void SetBypassCSP(std::unique_ptr<SetBypassCSPParams> params, base::OnceCallback<void(std::unique_ptr<SetBypassCSPResult>)> callback = base::OnceCallback<void(std::unique_ptr<SetBypassCSPResult>)>());

  // Set the behavior when downloading a file.
  void SetDownloadBehavior(std::unique_ptr<SetDownloadBehaviorParams> params, base::OnceCallback<void(std::unique_ptr<SetDownloadBehaviorResult>)> callback = base::OnceCallback<void(std::unique_ptr<SetDownloadBehaviorResult>)>());

  // Controls whether page will emit lifecycle events.
  void SetLifecycleEventsEnabled(std::unique_ptr<SetLifecycleEventsEnabledParams> params, base::OnceCallback<void(std::unique_ptr<SetLifecycleEventsEnabledResult>)> callback = base::OnceCallback<void(std::unique_ptr<SetLifecycleEventsEnabledResult>)>());

  // Starts sending each frame using the `screencastFrame` event.
  void StartScreencast(std::unique_ptr<StartScreencastParams> params, base::OnceCallback<void(std::unique_ptr<StartScreencastResult>)> callback = base::OnceCallback<void(std::unique_ptr<StartScreencastResult>)>());

  // Crashes renderer on the IO thread, generates minidumps.
  void Crash(std::unique_ptr<CrashParams> params, base::OnceCallback<void(std::unique_ptr<CrashResult>)> callback = base::OnceCallback<void(std::unique_ptr<CrashResult>)>());

  // Tries to close page, running its beforeunload hooks, if any.
  void Close(std::unique_ptr<CloseParams> params, base::OnceCallback<void(std::unique_ptr<CloseResult>)> callback = base::OnceCallback<void(std::unique_ptr<CloseResult>)>());

  // Tries to update the web lifecycle state of the page.
  // It will transition the page to the given state according to:
  // https://github.com/WICG/web-lifecycle/
  void SetWebLifecycleState(std::unique_ptr<SetWebLifecycleStateParams> params, base::OnceCallback<void(std::unique_ptr<SetWebLifecycleStateResult>)> callback = base::OnceCallback<void(std::unique_ptr<SetWebLifecycleStateResult>)>());

  // Stops sending each frame in the `screencastFrame`.
  void StopScreencast(std::unique_ptr<StopScreencastParams> params, base::OnceCallback<void(std::unique_ptr<StopScreencastResult>)> callback = base::OnceCallback<void(std::unique_ptr<StopScreencastResult>)>());


 private:
  DISALLOW_COPY_AND_ASSIGN(ExperimentalDomain);
};

}  // namespace page
}  // namespace headless

#endif  // HEADLESS_PUBLIC_DEVTOOLS_DOMAINS_PAGE_H_
