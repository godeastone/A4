// This file is generated

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef HEADLESS_PUBLIC_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_PAGE_H_
#define HEADLESS_PUBLIC_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_PAGE_H_

#include "base/values.h"

namespace headless {

namespace page {
class Frame;
class FrameResource;
class FrameResourceTree;
class FrameTree;
class NavigationEntry;
class ScreencastFrameMetadata;
class AppManifestError;
class LayoutViewport;
class VisualViewport;
class Viewport;
class AddScriptToEvaluateOnLoadParams;
class AddScriptToEvaluateOnLoadResult;
class AddScriptToEvaluateOnNewDocumentParams;
class AddScriptToEvaluateOnNewDocumentResult;
class BringToFrontParams;
class BringToFrontResult;
class CaptureScreenshotParams;
class CaptureScreenshotResult;
class ClearDeviceMetricsOverrideParams;
class ClearDeviceMetricsOverrideResult;
class ClearDeviceOrientationOverrideParams;
class ClearDeviceOrientationOverrideResult;
class ClearGeolocationOverrideParams;
class ClearGeolocationOverrideResult;
class CreateIsolatedWorldParams;
class CreateIsolatedWorldResult;
class DeleteCookieParams;
class DeleteCookieResult;
class DisableParams;
class DisableResult;
class EnableParams;
class EnableResult;
class GetAppManifestParams;
class GetAppManifestResult;
class GetCookiesParams;
class GetCookiesResult;
class GetFrameTreeParams;
class GetFrameTreeResult;
class GetLayoutMetricsParams;
class GetLayoutMetricsResult;
class GetNavigationHistoryParams;
class GetNavigationHistoryResult;
class GetResourceContentParams;
class GetResourceContentResult;
class GetResourceTreeParams;
class GetResourceTreeResult;
class HandleJavaScriptDialogParams;
class HandleJavaScriptDialogResult;
class NavigateParams;
class NavigateResult;
class NavigateToHistoryEntryParams;
class NavigateToHistoryEntryResult;
class PrintToPDFParams;
class PrintToPDFResult;
class ReloadParams;
class ReloadResult;
class RemoveScriptToEvaluateOnLoadParams;
class RemoveScriptToEvaluateOnLoadResult;
class RemoveScriptToEvaluateOnNewDocumentParams;
class RemoveScriptToEvaluateOnNewDocumentResult;
class RequestAppBannerParams;
class RequestAppBannerResult;
class ScreencastFrameAckParams;
class ScreencastFrameAckResult;
class SearchInResourceParams;
class SearchInResourceResult;
class SetAdBlockingEnabledParams;
class SetAdBlockingEnabledResult;
class SetBypassCSPParams;
class SetBypassCSPResult;
class SetDeviceMetricsOverrideParams;
class SetDeviceMetricsOverrideResult;
class SetDeviceOrientationOverrideParams;
class SetDeviceOrientationOverrideResult;
class SetDocumentContentParams;
class SetDocumentContentResult;
class SetDownloadBehaviorParams;
class SetDownloadBehaviorResult;
class SetGeolocationOverrideParams;
class SetGeolocationOverrideResult;
class SetLifecycleEventsEnabledParams;
class SetLifecycleEventsEnabledResult;
class SetTouchEmulationEnabledParams;
class SetTouchEmulationEnabledResult;
class StartScreencastParams;
class StartScreencastResult;
class StopLoadingParams;
class StopLoadingResult;
class CrashParams;
class CrashResult;
class CloseParams;
class CloseResult;
class SetWebLifecycleStateParams;
class SetWebLifecycleStateResult;
class StopScreencastParams;
class StopScreencastResult;
class DomContentEventFiredParams;
class FrameAttachedParams;
class FrameClearedScheduledNavigationParams;
class FrameDetachedParams;
class FrameNavigatedParams;
class FrameResizedParams;
class FrameScheduledNavigationParams;
class FrameStartedLoadingParams;
class FrameStoppedLoadingParams;
class InterstitialHiddenParams;
class InterstitialShownParams;
class JavascriptDialogClosedParams;
class JavascriptDialogOpeningParams;
class LifecycleEventParams;
class LoadEventFiredParams;
class NavigatedWithinDocumentParams;
class ScreencastFrameParams;
class ScreencastVisibilityChangedParams;
class WindowOpenParams;

enum class ResourceType {
  DOCUMENT,
  STYLESHEET,
  IMAGE,
  MEDIA,
  FONT,
  SCRIPT,
  TEXT_TRACK,
  XHR,
  FETCH,
  EVENT_SOURCE,
  WEB_SOCKET,
  MANIFEST,
  SIGNED_EXCHANGE,
  OTHER
};

enum class TransitionType {
  LINK,
  TYPED,
  AUTO_BOOKMARK,
  AUTO_SUBFRAME,
  MANUAL_SUBFRAME,
  GENERATED,
  AUTO_TOPLEVEL,
  FORM_SUBMIT,
  RELOAD,
  KEYWORD,
  KEYWORD_GENERATED,
  OTHER
};

enum class DialogType {
  ALERT,
  CONFIRM,
  PROMPT,
  BEFOREUNLOAD
};

enum class CaptureScreenshotFormat {
  JPEG,
  PNG
};

enum class SetDownloadBehaviorBehavior {
  DENY,
  ALLOW,
  DEFAULT
};

enum class SetTouchEmulationEnabledConfiguration {
  MOBILE,
  DESKTOP
};

enum class StartScreencastFormat {
  JPEG,
  PNG
};

enum class SetWebLifecycleStateState {
  FROZEN,
  ACTIVE
};

enum class FrameScheduledNavigationReason {
  FORM_SUBMISSION_GET,
  FORM_SUBMISSION_POST,
  HTTP_HEADER_REFRESH,
  SCRIPT_INITIATED,
  META_TAG_REFRESH,
  PAGE_BLOCK_INTERSTITIAL,
  RELOAD
};

}  // namespace page

}  // namespace headless

#endif  // HEADLESS_PUBLIC_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_PAGE_H_
