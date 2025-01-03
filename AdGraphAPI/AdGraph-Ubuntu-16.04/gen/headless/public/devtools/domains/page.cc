// This file is generated

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "headless/public/devtools/domains/page.h"

#include "base/bind.h"
#include "headless/public/util/error_reporter.h"

namespace headless {

namespace page {

ExperimentalDomain* Domain::GetExperimental() {
  return static_cast<ExperimentalDomain*>(this);
}

void Domain::AddObserver(Observer* observer) {
  RegisterEventHandlersIfNeeded();
  observers_.AddObserver(observer);
}

void Domain::RemoveObserver(Observer* observer) {
  observers_.RemoveObserver(observer);
}

void Domain::RegisterEventHandlersIfNeeded() {
  if (event_handlers_registered_)
    return;
  event_handlers_registered_ = true;
  dispatcher_->RegisterEventHandler(
      "Page.domContentEventFired",
      base::BindRepeating(&Domain::DispatchDomContentEventFiredEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Page.frameAttached",
      base::BindRepeating(&Domain::DispatchFrameAttachedEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Page.frameClearedScheduledNavigation",
      base::BindRepeating(&Domain::DispatchFrameClearedScheduledNavigationEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Page.frameDetached",
      base::BindRepeating(&Domain::DispatchFrameDetachedEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Page.frameNavigated",
      base::BindRepeating(&Domain::DispatchFrameNavigatedEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Page.frameResized",
      base::BindRepeating(&Domain::DispatchFrameResizedEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Page.frameScheduledNavigation",
      base::BindRepeating(&Domain::DispatchFrameScheduledNavigationEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Page.frameStartedLoading",
      base::BindRepeating(&Domain::DispatchFrameStartedLoadingEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Page.frameStoppedLoading",
      base::BindRepeating(&Domain::DispatchFrameStoppedLoadingEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Page.interstitialHidden",
      base::BindRepeating(&Domain::DispatchInterstitialHiddenEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Page.interstitialShown",
      base::BindRepeating(&Domain::DispatchInterstitialShownEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Page.javascriptDialogClosed",
      base::BindRepeating(&Domain::DispatchJavascriptDialogClosedEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Page.javascriptDialogOpening",
      base::BindRepeating(&Domain::DispatchJavascriptDialogOpeningEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Page.lifecycleEvent",
      base::BindRepeating(&Domain::DispatchLifecycleEventEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Page.loadEventFired",
      base::BindRepeating(&Domain::DispatchLoadEventFiredEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Page.navigatedWithinDocument",
      base::BindRepeating(&Domain::DispatchNavigatedWithinDocumentEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Page.screencastFrame",
      base::BindRepeating(&Domain::DispatchScreencastFrameEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Page.screencastVisibilityChanged",
      base::BindRepeating(&Domain::DispatchScreencastVisibilityChangedEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Page.windowOpen",
      base::BindRepeating(&Domain::DispatchWindowOpenEvent,
                          base::Unretained(this)));
}


void ExperimentalDomain::AddScriptToEvaluateOnLoad(std::unique_ptr<AddScriptToEvaluateOnLoadParams> params, base::OnceCallback<void(std::unique_ptr<AddScriptToEvaluateOnLoadResult>)> callback) {
  dispatcher_->SendMessage("Page.addScriptToEvaluateOnLoad", params->Serialize(), base::BindOnce(&Domain::HandleAddScriptToEvaluateOnLoadResponse, std::move(callback)));
}

void Domain::AddScriptToEvaluateOnNewDocument(std::unique_ptr<AddScriptToEvaluateOnNewDocumentParams> params, base::OnceCallback<void(std::unique_ptr<AddScriptToEvaluateOnNewDocumentResult>)> callback) {
  dispatcher_->SendMessage("Page.addScriptToEvaluateOnNewDocument", params->Serialize(), base::BindOnce(&Domain::HandleAddScriptToEvaluateOnNewDocumentResponse, std::move(callback)));
}

void Domain::AddScriptToEvaluateOnNewDocument(const std::string& source, base::OnceCallback<void(std::unique_ptr<AddScriptToEvaluateOnNewDocumentResult>)> callback) {
  std::unique_ptr<AddScriptToEvaluateOnNewDocumentParams> params = AddScriptToEvaluateOnNewDocumentParams::Builder()
      .SetSource(std::move(source))
      .Build();
dispatcher_->SendMessage("Page.addScriptToEvaluateOnNewDocument", params->Serialize(), base::BindOnce(&Domain::HandleAddScriptToEvaluateOnNewDocumentResponse, std::move(callback)));
}

void Domain::BringToFront(std::unique_ptr<BringToFrontParams> params, base::OnceCallback<void(std::unique_ptr<BringToFrontResult>)> callback) {
  dispatcher_->SendMessage("Page.bringToFront", params->Serialize(), base::BindOnce(&Domain::HandleBringToFrontResponse, std::move(callback)));
}

void Domain::BringToFront(base::OnceClosure callback) {
  std::unique_ptr<BringToFrontParams> params = BringToFrontParams::Builder()
      .Build();
  dispatcher_->SendMessage("Page.bringToFront", params->Serialize(), std::move(callback));
}
void Domain::BringToFront(std::unique_ptr<BringToFrontParams> params, base::OnceClosure callback) {
  dispatcher_->SendMessage("Page.bringToFront", params->Serialize(), std::move(callback));
}

void Domain::CaptureScreenshot(std::unique_ptr<CaptureScreenshotParams> params, base::OnceCallback<void(std::unique_ptr<CaptureScreenshotResult>)> callback) {
  dispatcher_->SendMessage("Page.captureScreenshot", params->Serialize(), base::BindOnce(&Domain::HandleCaptureScreenshotResponse, std::move(callback)));
}

void Domain::CaptureScreenshot(base::OnceCallback<void(std::unique_ptr<CaptureScreenshotResult>)> callback) {
  std::unique_ptr<CaptureScreenshotParams> params = CaptureScreenshotParams::Builder()
      .Build();
dispatcher_->SendMessage("Page.captureScreenshot", params->Serialize(), base::BindOnce(&Domain::HandleCaptureScreenshotResponse, std::move(callback)));
}

void Domain::CreateIsolatedWorld(std::unique_ptr<CreateIsolatedWorldParams> params, base::OnceCallback<void(std::unique_ptr<CreateIsolatedWorldResult>)> callback) {
  dispatcher_->SendMessage("Page.createIsolatedWorld", params->Serialize(), base::BindOnce(&Domain::HandleCreateIsolatedWorldResponse, std::move(callback)));
}

void Domain::CreateIsolatedWorld(const std::string& frame_id, base::OnceCallback<void(std::unique_ptr<CreateIsolatedWorldResult>)> callback) {
  std::unique_ptr<CreateIsolatedWorldParams> params = CreateIsolatedWorldParams::Builder()
      .SetFrameId(std::move(frame_id))
      .Build();
dispatcher_->SendMessage("Page.createIsolatedWorld", params->Serialize(), base::BindOnce(&Domain::HandleCreateIsolatedWorldResponse, std::move(callback)));
}

void Domain::Disable(std::unique_ptr<DisableParams> params, base::OnceCallback<void(std::unique_ptr<DisableResult>)> callback) {
  dispatcher_->SendMessage("Page.disable", params->Serialize(), base::BindOnce(&Domain::HandleDisableResponse, std::move(callback)));
}

void Domain::Disable(base::OnceClosure callback) {
  std::unique_ptr<DisableParams> params = DisableParams::Builder()
      .Build();
  dispatcher_->SendMessage("Page.disable", params->Serialize(), std::move(callback));
}
void Domain::Disable(std::unique_ptr<DisableParams> params, base::OnceClosure callback) {
  dispatcher_->SendMessage("Page.disable", params->Serialize(), std::move(callback));
}

void Domain::Enable(std::unique_ptr<EnableParams> params, base::OnceCallback<void(std::unique_ptr<EnableResult>)> callback) {
  dispatcher_->SendMessage("Page.enable", params->Serialize(), base::BindOnce(&Domain::HandleEnableResponse, std::move(callback)));
}

void Domain::Enable(base::OnceClosure callback) {
  std::unique_ptr<EnableParams> params = EnableParams::Builder()
      .Build();
  dispatcher_->SendMessage("Page.enable", params->Serialize(), std::move(callback));
}
void Domain::Enable(std::unique_ptr<EnableParams> params, base::OnceClosure callback) {
  dispatcher_->SendMessage("Page.enable", params->Serialize(), std::move(callback));
}

void Domain::GetAppManifest(std::unique_ptr<GetAppManifestParams> params, base::OnceCallback<void(std::unique_ptr<GetAppManifestResult>)> callback) {
  dispatcher_->SendMessage("Page.getAppManifest", params->Serialize(), base::BindOnce(&Domain::HandleGetAppManifestResponse, std::move(callback)));
}

void Domain::GetAppManifest(base::OnceCallback<void(std::unique_ptr<GetAppManifestResult>)> callback) {
  std::unique_ptr<GetAppManifestParams> params = GetAppManifestParams::Builder()
      .Build();
dispatcher_->SendMessage("Page.getAppManifest", params->Serialize(), base::BindOnce(&Domain::HandleGetAppManifestResponse, std::move(callback)));
}

void Domain::GetFrameTree(std::unique_ptr<GetFrameTreeParams> params, base::OnceCallback<void(std::unique_ptr<GetFrameTreeResult>)> callback) {
  dispatcher_->SendMessage("Page.getFrameTree", params->Serialize(), base::BindOnce(&Domain::HandleGetFrameTreeResponse, std::move(callback)));
}

void Domain::GetFrameTree(base::OnceCallback<void(std::unique_ptr<GetFrameTreeResult>)> callback) {
  std::unique_ptr<GetFrameTreeParams> params = GetFrameTreeParams::Builder()
      .Build();
dispatcher_->SendMessage("Page.getFrameTree", params->Serialize(), base::BindOnce(&Domain::HandleGetFrameTreeResponse, std::move(callback)));
}

void Domain::GetLayoutMetrics(std::unique_ptr<GetLayoutMetricsParams> params, base::OnceCallback<void(std::unique_ptr<GetLayoutMetricsResult>)> callback) {
  dispatcher_->SendMessage("Page.getLayoutMetrics", params->Serialize(), base::BindOnce(&Domain::HandleGetLayoutMetricsResponse, std::move(callback)));
}

void Domain::GetLayoutMetrics(base::OnceCallback<void(std::unique_ptr<GetLayoutMetricsResult>)> callback) {
  std::unique_ptr<GetLayoutMetricsParams> params = GetLayoutMetricsParams::Builder()
      .Build();
dispatcher_->SendMessage("Page.getLayoutMetrics", params->Serialize(), base::BindOnce(&Domain::HandleGetLayoutMetricsResponse, std::move(callback)));
}

void Domain::GetNavigationHistory(std::unique_ptr<GetNavigationHistoryParams> params, base::OnceCallback<void(std::unique_ptr<GetNavigationHistoryResult>)> callback) {
  dispatcher_->SendMessage("Page.getNavigationHistory", params->Serialize(), base::BindOnce(&Domain::HandleGetNavigationHistoryResponse, std::move(callback)));
}

void Domain::GetNavigationHistory(base::OnceCallback<void(std::unique_ptr<GetNavigationHistoryResult>)> callback) {
  std::unique_ptr<GetNavigationHistoryParams> params = GetNavigationHistoryParams::Builder()
      .Build();
dispatcher_->SendMessage("Page.getNavigationHistory", params->Serialize(), base::BindOnce(&Domain::HandleGetNavigationHistoryResponse, std::move(callback)));
}

void ExperimentalDomain::GetResourceContent(std::unique_ptr<GetResourceContentParams> params, base::OnceCallback<void(std::unique_ptr<GetResourceContentResult>)> callback) {
  dispatcher_->SendMessage("Page.getResourceContent", params->Serialize(), base::BindOnce(&Domain::HandleGetResourceContentResponse, std::move(callback)));
}

void ExperimentalDomain::GetResourceTree(std::unique_ptr<GetResourceTreeParams> params, base::OnceCallback<void(std::unique_ptr<GetResourceTreeResult>)> callback) {
  dispatcher_->SendMessage("Page.getResourceTree", params->Serialize(), base::BindOnce(&Domain::HandleGetResourceTreeResponse, std::move(callback)));
}

void Domain::HandleJavaScriptDialog(std::unique_ptr<HandleJavaScriptDialogParams> params, base::OnceCallback<void(std::unique_ptr<HandleJavaScriptDialogResult>)> callback) {
  dispatcher_->SendMessage("Page.handleJavaScriptDialog", params->Serialize(), base::BindOnce(&Domain::HandleHandleJavaScriptDialogResponse, std::move(callback)));
}

void Domain::HandleJavaScriptDialog(bool accept, base::OnceClosure callback) {
  std::unique_ptr<HandleJavaScriptDialogParams> params = HandleJavaScriptDialogParams::Builder()
      .SetAccept(std::move(accept))
      .Build();
  dispatcher_->SendMessage("Page.handleJavaScriptDialog", params->Serialize(), std::move(callback));
}
void Domain::HandleJavaScriptDialog(std::unique_ptr<HandleJavaScriptDialogParams> params, base::OnceClosure callback) {
  dispatcher_->SendMessage("Page.handleJavaScriptDialog", params->Serialize(), std::move(callback));
}

void Domain::Navigate(std::unique_ptr<NavigateParams> params, base::OnceCallback<void(std::unique_ptr<NavigateResult>)> callback) {
  dispatcher_->SendMessage("Page.navigate", params->Serialize(), base::BindOnce(&Domain::HandleNavigateResponse, std::move(callback)));
}

void Domain::Navigate(const std::string& url, base::OnceCallback<void(std::unique_ptr<NavigateResult>)> callback) {
  std::unique_ptr<NavigateParams> params = NavigateParams::Builder()
      .SetUrl(std::move(url))
      .Build();
dispatcher_->SendMessage("Page.navigate", params->Serialize(), base::BindOnce(&Domain::HandleNavigateResponse, std::move(callback)));
}

void Domain::NavigateToHistoryEntry(std::unique_ptr<NavigateToHistoryEntryParams> params, base::OnceCallback<void(std::unique_ptr<NavigateToHistoryEntryResult>)> callback) {
  dispatcher_->SendMessage("Page.navigateToHistoryEntry", params->Serialize(), base::BindOnce(&Domain::HandleNavigateToHistoryEntryResponse, std::move(callback)));
}

void Domain::NavigateToHistoryEntry(int entry_id, base::OnceClosure callback) {
  std::unique_ptr<NavigateToHistoryEntryParams> params = NavigateToHistoryEntryParams::Builder()
      .SetEntryId(std::move(entry_id))
      .Build();
  dispatcher_->SendMessage("Page.navigateToHistoryEntry", params->Serialize(), std::move(callback));
}
void Domain::NavigateToHistoryEntry(std::unique_ptr<NavigateToHistoryEntryParams> params, base::OnceClosure callback) {
  dispatcher_->SendMessage("Page.navigateToHistoryEntry", params->Serialize(), std::move(callback));
}

void Domain::PrintToPDF(std::unique_ptr<PrintToPDFParams> params, base::OnceCallback<void(std::unique_ptr<PrintToPDFResult>)> callback) {
  dispatcher_->SendMessage("Page.printToPDF", params->Serialize(), base::BindOnce(&Domain::HandlePrintToPDFResponse, std::move(callback)));
}

void Domain::PrintToPDF(base::OnceCallback<void(std::unique_ptr<PrintToPDFResult>)> callback) {
  std::unique_ptr<PrintToPDFParams> params = PrintToPDFParams::Builder()
      .Build();
dispatcher_->SendMessage("Page.printToPDF", params->Serialize(), base::BindOnce(&Domain::HandlePrintToPDFResponse, std::move(callback)));
}

void Domain::Reload(std::unique_ptr<ReloadParams> params, base::OnceCallback<void(std::unique_ptr<ReloadResult>)> callback) {
  dispatcher_->SendMessage("Page.reload", params->Serialize(), base::BindOnce(&Domain::HandleReloadResponse, std::move(callback)));
}

void Domain::Reload(base::OnceClosure callback) {
  std::unique_ptr<ReloadParams> params = ReloadParams::Builder()
      .Build();
  dispatcher_->SendMessage("Page.reload", params->Serialize(), std::move(callback));
}
void Domain::Reload(std::unique_ptr<ReloadParams> params, base::OnceClosure callback) {
  dispatcher_->SendMessage("Page.reload", params->Serialize(), std::move(callback));
}

void ExperimentalDomain::RemoveScriptToEvaluateOnLoad(std::unique_ptr<RemoveScriptToEvaluateOnLoadParams> params, base::OnceCallback<void(std::unique_ptr<RemoveScriptToEvaluateOnLoadResult>)> callback) {
  dispatcher_->SendMessage("Page.removeScriptToEvaluateOnLoad", params->Serialize(), base::BindOnce(&Domain::HandleRemoveScriptToEvaluateOnLoadResponse, std::move(callback)));
}

void Domain::RemoveScriptToEvaluateOnNewDocument(std::unique_ptr<RemoveScriptToEvaluateOnNewDocumentParams> params, base::OnceCallback<void(std::unique_ptr<RemoveScriptToEvaluateOnNewDocumentResult>)> callback) {
  dispatcher_->SendMessage("Page.removeScriptToEvaluateOnNewDocument", params->Serialize(), base::BindOnce(&Domain::HandleRemoveScriptToEvaluateOnNewDocumentResponse, std::move(callback)));
}

void Domain::RemoveScriptToEvaluateOnNewDocument(const std::string& identifier, base::OnceClosure callback) {
  std::unique_ptr<RemoveScriptToEvaluateOnNewDocumentParams> params = RemoveScriptToEvaluateOnNewDocumentParams::Builder()
      .SetIdentifier(std::move(identifier))
      .Build();
  dispatcher_->SendMessage("Page.removeScriptToEvaluateOnNewDocument", params->Serialize(), std::move(callback));
}
void Domain::RemoveScriptToEvaluateOnNewDocument(std::unique_ptr<RemoveScriptToEvaluateOnNewDocumentParams> params, base::OnceClosure callback) {
  dispatcher_->SendMessage("Page.removeScriptToEvaluateOnNewDocument", params->Serialize(), std::move(callback));
}

void ExperimentalDomain::RequestAppBanner(std::unique_ptr<RequestAppBannerParams> params, base::OnceCallback<void(std::unique_ptr<RequestAppBannerResult>)> callback) {
  dispatcher_->SendMessage("Page.requestAppBanner", params->Serialize(), base::BindOnce(&Domain::HandleRequestAppBannerResponse, std::move(callback)));
}

void ExperimentalDomain::ScreencastFrameAck(std::unique_ptr<ScreencastFrameAckParams> params, base::OnceCallback<void(std::unique_ptr<ScreencastFrameAckResult>)> callback) {
  dispatcher_->SendMessage("Page.screencastFrameAck", params->Serialize(), base::BindOnce(&Domain::HandleScreencastFrameAckResponse, std::move(callback)));
}

void ExperimentalDomain::SearchInResource(std::unique_ptr<SearchInResourceParams> params, base::OnceCallback<void(std::unique_ptr<SearchInResourceResult>)> callback) {
  dispatcher_->SendMessage("Page.searchInResource", params->Serialize(), base::BindOnce(&Domain::HandleSearchInResourceResponse, std::move(callback)));
}

void ExperimentalDomain::SetAdBlockingEnabled(std::unique_ptr<SetAdBlockingEnabledParams> params, base::OnceCallback<void(std::unique_ptr<SetAdBlockingEnabledResult>)> callback) {
  dispatcher_->SendMessage("Page.setAdBlockingEnabled", params->Serialize(), base::BindOnce(&Domain::HandleSetAdBlockingEnabledResponse, std::move(callback)));
}

void ExperimentalDomain::SetBypassCSP(std::unique_ptr<SetBypassCSPParams> params, base::OnceCallback<void(std::unique_ptr<SetBypassCSPResult>)> callback) {
  dispatcher_->SendMessage("Page.setBypassCSP", params->Serialize(), base::BindOnce(&Domain::HandleSetBypassCSPResponse, std::move(callback)));
}

void Domain::SetDocumentContent(std::unique_ptr<SetDocumentContentParams> params, base::OnceCallback<void(std::unique_ptr<SetDocumentContentResult>)> callback) {
  dispatcher_->SendMessage("Page.setDocumentContent", params->Serialize(), base::BindOnce(&Domain::HandleSetDocumentContentResponse, std::move(callback)));
}

void Domain::SetDocumentContent(const std::string& frame_id, const std::string& html, base::OnceClosure callback) {
  std::unique_ptr<SetDocumentContentParams> params = SetDocumentContentParams::Builder()
      .SetFrameId(std::move(frame_id))
      .SetHtml(std::move(html))
      .Build();
  dispatcher_->SendMessage("Page.setDocumentContent", params->Serialize(), std::move(callback));
}
void Domain::SetDocumentContent(std::unique_ptr<SetDocumentContentParams> params, base::OnceClosure callback) {
  dispatcher_->SendMessage("Page.setDocumentContent", params->Serialize(), std::move(callback));
}

void ExperimentalDomain::SetDownloadBehavior(std::unique_ptr<SetDownloadBehaviorParams> params, base::OnceCallback<void(std::unique_ptr<SetDownloadBehaviorResult>)> callback) {
  dispatcher_->SendMessage("Page.setDownloadBehavior", params->Serialize(), base::BindOnce(&Domain::HandleSetDownloadBehaviorResponse, std::move(callback)));
}

void ExperimentalDomain::SetLifecycleEventsEnabled(std::unique_ptr<SetLifecycleEventsEnabledParams> params, base::OnceCallback<void(std::unique_ptr<SetLifecycleEventsEnabledResult>)> callback) {
  dispatcher_->SendMessage("Page.setLifecycleEventsEnabled", params->Serialize(), base::BindOnce(&Domain::HandleSetLifecycleEventsEnabledResponse, std::move(callback)));
}

void ExperimentalDomain::StartScreencast(std::unique_ptr<StartScreencastParams> params, base::OnceCallback<void(std::unique_ptr<StartScreencastResult>)> callback) {
  dispatcher_->SendMessage("Page.startScreencast", params->Serialize(), base::BindOnce(&Domain::HandleStartScreencastResponse, std::move(callback)));
}

void Domain::StopLoading(std::unique_ptr<StopLoadingParams> params, base::OnceCallback<void(std::unique_ptr<StopLoadingResult>)> callback) {
  dispatcher_->SendMessage("Page.stopLoading", params->Serialize(), base::BindOnce(&Domain::HandleStopLoadingResponse, std::move(callback)));
}

void Domain::StopLoading(base::OnceClosure callback) {
  std::unique_ptr<StopLoadingParams> params = StopLoadingParams::Builder()
      .Build();
  dispatcher_->SendMessage("Page.stopLoading", params->Serialize(), std::move(callback));
}
void Domain::StopLoading(std::unique_ptr<StopLoadingParams> params, base::OnceClosure callback) {
  dispatcher_->SendMessage("Page.stopLoading", params->Serialize(), std::move(callback));
}

void ExperimentalDomain::Crash(std::unique_ptr<CrashParams> params, base::OnceCallback<void(std::unique_ptr<CrashResult>)> callback) {
  dispatcher_->SendMessage("Page.crash", params->Serialize(), base::BindOnce(&Domain::HandleCrashResponse, std::move(callback)));
}

void ExperimentalDomain::Close(std::unique_ptr<CloseParams> params, base::OnceCallback<void(std::unique_ptr<CloseResult>)> callback) {
  dispatcher_->SendMessage("Page.close", params->Serialize(), base::BindOnce(&Domain::HandleCloseResponse, std::move(callback)));
}

void ExperimentalDomain::SetWebLifecycleState(std::unique_ptr<SetWebLifecycleStateParams> params, base::OnceCallback<void(std::unique_ptr<SetWebLifecycleStateResult>)> callback) {
  dispatcher_->SendMessage("Page.setWebLifecycleState", params->Serialize(), base::BindOnce(&Domain::HandleSetWebLifecycleStateResponse, std::move(callback)));
}

void ExperimentalDomain::StopScreencast(std::unique_ptr<StopScreencastParams> params, base::OnceCallback<void(std::unique_ptr<StopScreencastResult>)> callback) {
  dispatcher_->SendMessage("Page.stopScreencast", params->Serialize(), base::BindOnce(&Domain::HandleStopScreencastResponse, std::move(callback)));
}


// static
void Domain::HandleAddScriptToEvaluateOnLoadResponse(base::OnceCallback<void(std::unique_ptr<AddScriptToEvaluateOnLoadResult>)> callback, const base::Value& response) {
  if (callback.is_null())
    return;
  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<AddScriptToEvaluateOnLoadResult> result = AddScriptToEvaluateOnLoadResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(std::move(result));
}

// static
void Domain::HandleAddScriptToEvaluateOnNewDocumentResponse(base::OnceCallback<void(std::unique_ptr<AddScriptToEvaluateOnNewDocumentResult>)> callback, const base::Value& response) {
  if (callback.is_null())
    return;
  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<AddScriptToEvaluateOnNewDocumentResult> result = AddScriptToEvaluateOnNewDocumentResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(std::move(result));
}

// static
void Domain::HandleBringToFrontResponse(base::OnceCallback<void(std::unique_ptr<BringToFrontResult>)> callback, const base::Value& response) {
  if (callback.is_null())
    return;
  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<BringToFrontResult> result = BringToFrontResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(std::move(result));
}

// static
void Domain::HandleCaptureScreenshotResponse(base::OnceCallback<void(std::unique_ptr<CaptureScreenshotResult>)> callback, const base::Value& response) {
  if (callback.is_null())
    return;
  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<CaptureScreenshotResult> result = CaptureScreenshotResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(std::move(result));
}

// static
void Domain::HandleClearDeviceMetricsOverrideResponse(base::OnceCallback<void(std::unique_ptr<ClearDeviceMetricsOverrideResult>)> callback, const base::Value& response) {
  if (callback.is_null())
    return;
  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<ClearDeviceMetricsOverrideResult> result = ClearDeviceMetricsOverrideResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(std::move(result));
}

// static
void Domain::HandleClearDeviceOrientationOverrideResponse(base::OnceCallback<void(std::unique_ptr<ClearDeviceOrientationOverrideResult>)> callback, const base::Value& response) {
  if (callback.is_null())
    return;
  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<ClearDeviceOrientationOverrideResult> result = ClearDeviceOrientationOverrideResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(std::move(result));
}

// static
void Domain::HandleClearGeolocationOverrideResponse(base::OnceCallback<void(std::unique_ptr<ClearGeolocationOverrideResult>)> callback, const base::Value& response) {
  if (callback.is_null())
    return;
  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<ClearGeolocationOverrideResult> result = ClearGeolocationOverrideResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(std::move(result));
}

// static
void Domain::HandleCreateIsolatedWorldResponse(base::OnceCallback<void(std::unique_ptr<CreateIsolatedWorldResult>)> callback, const base::Value& response) {
  if (callback.is_null())
    return;
  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<CreateIsolatedWorldResult> result = CreateIsolatedWorldResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(std::move(result));
}

// static
void Domain::HandleDeleteCookieResponse(base::OnceCallback<void(std::unique_ptr<DeleteCookieResult>)> callback, const base::Value& response) {
  if (callback.is_null())
    return;
  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<DeleteCookieResult> result = DeleteCookieResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(std::move(result));
}

// static
void Domain::HandleDisableResponse(base::OnceCallback<void(std::unique_ptr<DisableResult>)> callback, const base::Value& response) {
  if (callback.is_null())
    return;
  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<DisableResult> result = DisableResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(std::move(result));
}

// static
void Domain::HandleEnableResponse(base::OnceCallback<void(std::unique_ptr<EnableResult>)> callback, const base::Value& response) {
  if (callback.is_null())
    return;
  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<EnableResult> result = EnableResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(std::move(result));
}

// static
void Domain::HandleGetAppManifestResponse(base::OnceCallback<void(std::unique_ptr<GetAppManifestResult>)> callback, const base::Value& response) {
  if (callback.is_null())
    return;
  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<GetAppManifestResult> result = GetAppManifestResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(std::move(result));
}

// static
void Domain::HandleGetCookiesResponse(base::OnceCallback<void(std::unique_ptr<GetCookiesResult>)> callback, const base::Value& response) {
  if (callback.is_null())
    return;
  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<GetCookiesResult> result = GetCookiesResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(std::move(result));
}

// static
void Domain::HandleGetFrameTreeResponse(base::OnceCallback<void(std::unique_ptr<GetFrameTreeResult>)> callback, const base::Value& response) {
  if (callback.is_null())
    return;
  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<GetFrameTreeResult> result = GetFrameTreeResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(std::move(result));
}

// static
void Domain::HandleGetLayoutMetricsResponse(base::OnceCallback<void(std::unique_ptr<GetLayoutMetricsResult>)> callback, const base::Value& response) {
  if (callback.is_null())
    return;
  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<GetLayoutMetricsResult> result = GetLayoutMetricsResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(std::move(result));
}

// static
void Domain::HandleGetNavigationHistoryResponse(base::OnceCallback<void(std::unique_ptr<GetNavigationHistoryResult>)> callback, const base::Value& response) {
  if (callback.is_null())
    return;
  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<GetNavigationHistoryResult> result = GetNavigationHistoryResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(std::move(result));
}

// static
void Domain::HandleGetResourceContentResponse(base::OnceCallback<void(std::unique_ptr<GetResourceContentResult>)> callback, const base::Value& response) {
  if (callback.is_null())
    return;
  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<GetResourceContentResult> result = GetResourceContentResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(std::move(result));
}

// static
void Domain::HandleGetResourceTreeResponse(base::OnceCallback<void(std::unique_ptr<GetResourceTreeResult>)> callback, const base::Value& response) {
  if (callback.is_null())
    return;
  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<GetResourceTreeResult> result = GetResourceTreeResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(std::move(result));
}

// static
void Domain::HandleHandleJavaScriptDialogResponse(base::OnceCallback<void(std::unique_ptr<HandleJavaScriptDialogResult>)> callback, const base::Value& response) {
  if (callback.is_null())
    return;
  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<HandleJavaScriptDialogResult> result = HandleJavaScriptDialogResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(std::move(result));
}

// static
void Domain::HandleNavigateResponse(base::OnceCallback<void(std::unique_ptr<NavigateResult>)> callback, const base::Value& response) {
  if (callback.is_null())
    return;
  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<NavigateResult> result = NavigateResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(std::move(result));
}

// static
void Domain::HandleNavigateToHistoryEntryResponse(base::OnceCallback<void(std::unique_ptr<NavigateToHistoryEntryResult>)> callback, const base::Value& response) {
  if (callback.is_null())
    return;
  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<NavigateToHistoryEntryResult> result = NavigateToHistoryEntryResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(std::move(result));
}

// static
void Domain::HandlePrintToPDFResponse(base::OnceCallback<void(std::unique_ptr<PrintToPDFResult>)> callback, const base::Value& response) {
  if (callback.is_null())
    return;
  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<PrintToPDFResult> result = PrintToPDFResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(std::move(result));
}

// static
void Domain::HandleReloadResponse(base::OnceCallback<void(std::unique_ptr<ReloadResult>)> callback, const base::Value& response) {
  if (callback.is_null())
    return;
  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<ReloadResult> result = ReloadResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(std::move(result));
}

// static
void Domain::HandleRemoveScriptToEvaluateOnLoadResponse(base::OnceCallback<void(std::unique_ptr<RemoveScriptToEvaluateOnLoadResult>)> callback, const base::Value& response) {
  if (callback.is_null())
    return;
  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<RemoveScriptToEvaluateOnLoadResult> result = RemoveScriptToEvaluateOnLoadResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(std::move(result));
}

// static
void Domain::HandleRemoveScriptToEvaluateOnNewDocumentResponse(base::OnceCallback<void(std::unique_ptr<RemoveScriptToEvaluateOnNewDocumentResult>)> callback, const base::Value& response) {
  if (callback.is_null())
    return;
  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<RemoveScriptToEvaluateOnNewDocumentResult> result = RemoveScriptToEvaluateOnNewDocumentResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(std::move(result));
}

// static
void Domain::HandleRequestAppBannerResponse(base::OnceCallback<void(std::unique_ptr<RequestAppBannerResult>)> callback, const base::Value& response) {
  if (callback.is_null())
    return;
  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<RequestAppBannerResult> result = RequestAppBannerResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(std::move(result));
}

// static
void Domain::HandleScreencastFrameAckResponse(base::OnceCallback<void(std::unique_ptr<ScreencastFrameAckResult>)> callback, const base::Value& response) {
  if (callback.is_null())
    return;
  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<ScreencastFrameAckResult> result = ScreencastFrameAckResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(std::move(result));
}

// static
void Domain::HandleSearchInResourceResponse(base::OnceCallback<void(std::unique_ptr<SearchInResourceResult>)> callback, const base::Value& response) {
  if (callback.is_null())
    return;
  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<SearchInResourceResult> result = SearchInResourceResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(std::move(result));
}

// static
void Domain::HandleSetAdBlockingEnabledResponse(base::OnceCallback<void(std::unique_ptr<SetAdBlockingEnabledResult>)> callback, const base::Value& response) {
  if (callback.is_null())
    return;
  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<SetAdBlockingEnabledResult> result = SetAdBlockingEnabledResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(std::move(result));
}

// static
void Domain::HandleSetBypassCSPResponse(base::OnceCallback<void(std::unique_ptr<SetBypassCSPResult>)> callback, const base::Value& response) {
  if (callback.is_null())
    return;
  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<SetBypassCSPResult> result = SetBypassCSPResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(std::move(result));
}

// static
void Domain::HandleSetDeviceMetricsOverrideResponse(base::OnceCallback<void(std::unique_ptr<SetDeviceMetricsOverrideResult>)> callback, const base::Value& response) {
  if (callback.is_null())
    return;
  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<SetDeviceMetricsOverrideResult> result = SetDeviceMetricsOverrideResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(std::move(result));
}

// static
void Domain::HandleSetDeviceOrientationOverrideResponse(base::OnceCallback<void(std::unique_ptr<SetDeviceOrientationOverrideResult>)> callback, const base::Value& response) {
  if (callback.is_null())
    return;
  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<SetDeviceOrientationOverrideResult> result = SetDeviceOrientationOverrideResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(std::move(result));
}

// static
void Domain::HandleSetDocumentContentResponse(base::OnceCallback<void(std::unique_ptr<SetDocumentContentResult>)> callback, const base::Value& response) {
  if (callback.is_null())
    return;
  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<SetDocumentContentResult> result = SetDocumentContentResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(std::move(result));
}

// static
void Domain::HandleSetDownloadBehaviorResponse(base::OnceCallback<void(std::unique_ptr<SetDownloadBehaviorResult>)> callback, const base::Value& response) {
  if (callback.is_null())
    return;
  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<SetDownloadBehaviorResult> result = SetDownloadBehaviorResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(std::move(result));
}

// static
void Domain::HandleSetGeolocationOverrideResponse(base::OnceCallback<void(std::unique_ptr<SetGeolocationOverrideResult>)> callback, const base::Value& response) {
  if (callback.is_null())
    return;
  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<SetGeolocationOverrideResult> result = SetGeolocationOverrideResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(std::move(result));
}

// static
void Domain::HandleSetLifecycleEventsEnabledResponse(base::OnceCallback<void(std::unique_ptr<SetLifecycleEventsEnabledResult>)> callback, const base::Value& response) {
  if (callback.is_null())
    return;
  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<SetLifecycleEventsEnabledResult> result = SetLifecycleEventsEnabledResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(std::move(result));
}

// static
void Domain::HandleSetTouchEmulationEnabledResponse(base::OnceCallback<void(std::unique_ptr<SetTouchEmulationEnabledResult>)> callback, const base::Value& response) {
  if (callback.is_null())
    return;
  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<SetTouchEmulationEnabledResult> result = SetTouchEmulationEnabledResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(std::move(result));
}

// static
void Domain::HandleStartScreencastResponse(base::OnceCallback<void(std::unique_ptr<StartScreencastResult>)> callback, const base::Value& response) {
  if (callback.is_null())
    return;
  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<StartScreencastResult> result = StartScreencastResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(std::move(result));
}

// static
void Domain::HandleStopLoadingResponse(base::OnceCallback<void(std::unique_ptr<StopLoadingResult>)> callback, const base::Value& response) {
  if (callback.is_null())
    return;
  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<StopLoadingResult> result = StopLoadingResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(std::move(result));
}

// static
void Domain::HandleCrashResponse(base::OnceCallback<void(std::unique_ptr<CrashResult>)> callback, const base::Value& response) {
  if (callback.is_null())
    return;
  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<CrashResult> result = CrashResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(std::move(result));
}

// static
void Domain::HandleCloseResponse(base::OnceCallback<void(std::unique_ptr<CloseResult>)> callback, const base::Value& response) {
  if (callback.is_null())
    return;
  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<CloseResult> result = CloseResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(std::move(result));
}

// static
void Domain::HandleSetWebLifecycleStateResponse(base::OnceCallback<void(std::unique_ptr<SetWebLifecycleStateResult>)> callback, const base::Value& response) {
  if (callback.is_null())
    return;
  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<SetWebLifecycleStateResult> result = SetWebLifecycleStateResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(std::move(result));
}

// static
void Domain::HandleStopScreencastResponse(base::OnceCallback<void(std::unique_ptr<StopScreencastResult>)> callback, const base::Value& response) {
  if (callback.is_null())
    return;
  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<StopScreencastResult> result = StopScreencastResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(std::move(result));
}

void Domain::DispatchDomContentEventFiredEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<DomContentEventFiredParams> parsed_params(DomContentEventFiredParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnDomContentEventFired(*parsed_params);
  }
}

void Domain::DispatchFrameAttachedEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<FrameAttachedParams> parsed_params(FrameAttachedParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnFrameAttached(*parsed_params);
  }
}

void Domain::DispatchFrameClearedScheduledNavigationEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<FrameClearedScheduledNavigationParams> parsed_params(FrameClearedScheduledNavigationParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnFrameClearedScheduledNavigation(*parsed_params);
  }
}

void Domain::DispatchFrameDetachedEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<FrameDetachedParams> parsed_params(FrameDetachedParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnFrameDetached(*parsed_params);
  }
}

void Domain::DispatchFrameNavigatedEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<FrameNavigatedParams> parsed_params(FrameNavigatedParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnFrameNavigated(*parsed_params);
  }
}

void Domain::DispatchFrameResizedEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<FrameResizedParams> parsed_params(FrameResizedParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnFrameResized(*parsed_params);
  }
}

void Domain::DispatchFrameScheduledNavigationEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<FrameScheduledNavigationParams> parsed_params(FrameScheduledNavigationParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnFrameScheduledNavigation(*parsed_params);
  }
}

void Domain::DispatchFrameStartedLoadingEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<FrameStartedLoadingParams> parsed_params(FrameStartedLoadingParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnFrameStartedLoading(*parsed_params);
  }
}

void Domain::DispatchFrameStoppedLoadingEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<FrameStoppedLoadingParams> parsed_params(FrameStoppedLoadingParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnFrameStoppedLoading(*parsed_params);
  }
}

void Domain::DispatchInterstitialHiddenEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<InterstitialHiddenParams> parsed_params(InterstitialHiddenParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnInterstitialHidden(*parsed_params);
  }
}

void Domain::DispatchInterstitialShownEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<InterstitialShownParams> parsed_params(InterstitialShownParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnInterstitialShown(*parsed_params);
  }
}

void Domain::DispatchJavascriptDialogClosedEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<JavascriptDialogClosedParams> parsed_params(JavascriptDialogClosedParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnJavascriptDialogClosed(*parsed_params);
  }
}

void Domain::DispatchJavascriptDialogOpeningEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<JavascriptDialogOpeningParams> parsed_params(JavascriptDialogOpeningParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnJavascriptDialogOpening(*parsed_params);
  }
}

void Domain::DispatchLifecycleEventEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<LifecycleEventParams> parsed_params(LifecycleEventParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnLifecycleEvent(*parsed_params);
  }
}

void Domain::DispatchLoadEventFiredEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<LoadEventFiredParams> parsed_params(LoadEventFiredParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnLoadEventFired(*parsed_params);
  }
}

void Domain::DispatchNavigatedWithinDocumentEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<NavigatedWithinDocumentParams> parsed_params(NavigatedWithinDocumentParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnNavigatedWithinDocument(*parsed_params);
  }
}

void Domain::DispatchScreencastFrameEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<ScreencastFrameParams> parsed_params(ScreencastFrameParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnScreencastFrame(*parsed_params);
  }
}

void Domain::DispatchScreencastVisibilityChangedEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<ScreencastVisibilityChangedParams> parsed_params(ScreencastVisibilityChangedParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnScreencastVisibilityChanged(*parsed_params);
  }
}

void Domain::DispatchWindowOpenEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<WindowOpenParams> parsed_params(WindowOpenParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnWindowOpen(*parsed_params);
  }
}

Domain::Domain(internal::MessageDispatcher* dispatcher)
    : dispatcher_(dispatcher) {
}

Domain::~Domain() {}

ExperimentalDomain::ExperimentalDomain(internal::MessageDispatcher* dispatcher)
    : Domain(dispatcher) {}

ExperimentalDomain::~ExperimentalDomain() {}

void ExperimentalDomain::AddObserver(ExperimentalObserver* observer) {
  RegisterEventHandlersIfNeeded();
  observers_.AddObserver(observer);
}

void ExperimentalDomain::RemoveObserver(ExperimentalObserver* observer) {
  observers_.RemoveObserver(observer);
}

}  // namespace page

} // namespace headless
