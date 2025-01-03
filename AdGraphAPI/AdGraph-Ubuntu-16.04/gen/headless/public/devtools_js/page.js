// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * @fileoverview Generated DevTools bindings for the Page Domain.
 */
'use strict';

goog.provide('chromium.DevTools.ExperimentalPage');
goog.provide('chromium.DevTools.Page');
goog.require('chromium.DevTools.Connection');
goog.require('chromium.DevTools.Debugger');
goog.require('chromium.DevTools.DOM');
goog.require('chromium.DevTools.Network');
goog.forwardDeclare('chromium.DevTools.Runtime.StackTrace');
goog.forwardDeclare('chromium.DevTools.Emulation.ScreenOrientation');
goog.forwardDeclare('chromium.DevTools.Runtime.ExecutionContextId');

goog.scope(function() {
const Connection = chromium.DevTools.Connection;
const Debugger = chromium.DevTools.Debugger;
const DOM = chromium.DevTools.DOM;
const Network = chromium.DevTools.Network;

/**
 * Experimental bindings for the Page DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalPage = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;
}

const ExperimentalPage = chromium.DevTools.ExperimentalPage;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
ExperimentalPage.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}

/**
 * Bindings for the Page DevTools Domain.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.Page = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;

  /** @type {!ExperimentalPage} */
  this.experimental = new ExperimentalPage(connection);
}

const Page = chromium.DevTools.Page;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
Page.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}

/**
 * Resource type as it was perceived by the rendering engine.
 *
 * @enum {string}
 */
Page.ResourceType = {
    DOCUMENT: "Document",
    STYLESHEET: "Stylesheet",
    IMAGE: "Image",
    MEDIA: "Media",
    FONT: "Font",
    SCRIPT: "Script",
    TEXT_TRACK: "TextTrack",
    XHR: "XHR",
    FETCH: "Fetch",
    EVENT_SOURCE: "EventSource",
    WEB_SOCKET: "WebSocket",
    MANIFEST: "Manifest",
    SIGNED_EXCHANGE: "SignedExchange",
    OTHER: "Other"
};

/**
 * Transition type.
 *
 * @enum {string}
 */
Page.TransitionType = {
    LINK: "link",
    TYPED: "typed",
    AUTO_BOOKMARK: "auto_bookmark",
    AUTO_SUBFRAME: "auto_subframe",
    MANUAL_SUBFRAME: "manual_subframe",
    GENERATED: "generated",
    AUTO_TOPLEVEL: "auto_toplevel",
    FORM_SUBMIT: "form_submit",
    RELOAD: "reload",
    KEYWORD: "keyword",
    KEYWORD_GENERATED: "keyword_generated",
    OTHER: "other"
};

/**
 * Javascript dialog type.
 *
 * @enum {string}
 */
Page.DialogType = {
    ALERT: "alert",
    CONFIRM: "confirm",
    PROMPT: "prompt",
    BEFOREUNLOAD: "beforeunload"
};

/**
 * Image compression format (defaults to png).
 *
 * @enum {string}
 */
Page.CaptureScreenshotFormat = {
    JPEG: "jpeg",
    PNG: "png"
};

/**
 * Whether to allow all or deny all download requests, or use default Chrome behavior if
 * available (otherwise deny).
 *
 * @enum {string}
 */
Page.SetDownloadBehaviorBehavior = {
    DENY: "deny",
    ALLOW: "allow",
    DEFAULT: "default"
};

/**
 * Touch/gesture events configuration. Default: current platform.
 *
 * @enum {string}
 */
Page.SetTouchEmulationEnabledConfiguration = {
    MOBILE: "mobile",
    DESKTOP: "desktop"
};

/**
 * Image compression format.
 *
 * @enum {string}
 */
Page.StartScreencastFormat = {
    JPEG: "jpeg",
    PNG: "png"
};

/**
 * Target lifecycle state
 *
 * @enum {string}
 */
Page.SetWebLifecycleStateState = {
    FROZEN: "frozen",
    ACTIVE: "active"
};

/**
 * The reason for the navigation.
 *
 * @enum {string}
 */
Page.FrameScheduledNavigationReason = {
    FORM_SUBMISSION_GET: "formSubmissionGet",
    FORM_SUBMISSION_POST: "formSubmissionPost",
    HTTP_HEADER_REFRESH: "httpHeaderRefresh",
    SCRIPT_INITIATED: "scriptInitiated",
    META_TAG_REFRESH: "metaTagRefresh",
    PAGE_BLOCK_INTERSTITIAL: "pageBlockInterstitial",
    RELOAD: "reload"
};


/**
 * Information about the Frame on the page.
 *
 * id: Frame unique identifier.
 * parentId: Parent frame identifier.
 * loaderId: Identifier of the loader associated with this frame.
 * name: Frame's name as specified in the tag.
 * url: Frame document's URL.
 * securityOrigin: Frame document's security origin.
 * mimeType: Frame document's mimeType as determined by the browser.
 * unreachableUrl: If the frame failed to load, this contains the URL that could not be loaded.
 *
 * @typedef {{
 *   id: string,
 *   parentId: (string|undefined),
 *   loaderId: string,
 *   name: (string|undefined),
 *   url: string,
 *   securityOrigin: string,
 *   mimeType: string,
 *   unreachableUrl: (string|undefined)
 * }}
 */
Page.Frame;

/**
 * Information about the Resource on the page.
 *
 * url: Resource URL.
 * type: Type of this resource.
 * mimeType: Resource mimeType as determined by the browser.
 * lastModified: last-modified timestamp as reported by server.
 * contentSize: Resource content size.
 * failed: True if the resource failed to load.
 * canceled: True if the resource was canceled during loading.
 *
 * @typedef {{
 *   url: string,
 *   type: !Page.ResourceType,
 *   mimeType: string,
 *   lastModified: (number|undefined),
 *   contentSize: (number|undefined),
 *   failed: (boolean|undefined),
 *   canceled: (boolean|undefined)
 * }}
 */
Page.FrameResource;

/**
 * Information about the Frame hierarchy along with their cached resources.
 *
 * frame: Frame information for this tree item.
 * childFrames: Child frames.
 * resources: Information about frame resources.
 *
 * @typedef {{
 *   frame: !Page.Frame,
 *   childFrames: (!Array.<!Page.FrameResourceTree>|undefined),
 *   resources: !Array.<!Page.FrameResource>
 * }}
 */
Page.FrameResourceTree;

/**
 * Information about the Frame hierarchy.
 *
 * frame: Frame information for this tree item.
 * childFrames: Child frames.
 *
 * @typedef {{
 *   frame: !Page.Frame,
 *   childFrames: (!Array.<!Page.FrameTree>|undefined)
 * }}
 */
Page.FrameTree;

/**
 * Navigation history entry.
 *
 * id: Unique id of the navigation history entry.
 * url: URL of the navigation history entry.
 * userTypedURL: URL that the user typed in the url bar.
 * title: Title of the navigation history entry.
 * transitionType: Transition type.
 *
 * @typedef {{
 *   id: number,
 *   url: string,
 *   userTypedURL: string,
 *   title: string,
 *   transitionType: !Page.TransitionType
 * }}
 */
Page.NavigationEntry;

/**
 * Screencast frame metadata.
 *
 * offsetTop: Top offset in DIP.
 * pageScaleFactor: Page scale factor.
 * deviceWidth: Device screen width in DIP.
 * deviceHeight: Device screen height in DIP.
 * scrollOffsetX: Position of horizontal scroll in CSS pixels.
 * scrollOffsetY: Position of vertical scroll in CSS pixels.
 * timestamp: Frame swap timestamp.
 *
 * @typedef {{
 *   offsetTop: number,
 *   pageScaleFactor: number,
 *   deviceWidth: number,
 *   deviceHeight: number,
 *   scrollOffsetX: number,
 *   scrollOffsetY: number,
 *   timestamp: (number|undefined)
 * }}
 */
Page.ScreencastFrameMetadata;

/**
 * Error while paring app manifest.
 *
 * message: Error message.
 * critical: If criticial, this is a non-recoverable parse error.
 * line: Error line.
 * column: Error column.
 *
 * @typedef {{
 *   message: string,
 *   critical: number,
 *   line: number,
 *   column: number
 * }}
 */
Page.AppManifestError;

/**
 * Layout viewport position and dimensions.
 *
 * pageX: Horizontal offset relative to the document (CSS pixels).
 * pageY: Vertical offset relative to the document (CSS pixels).
 * clientWidth: Width (CSS pixels), excludes scrollbar if present.
 * clientHeight: Height (CSS pixels), excludes scrollbar if present.
 *
 * @typedef {{
 *   pageX: number,
 *   pageY: number,
 *   clientWidth: number,
 *   clientHeight: number
 * }}
 */
Page.LayoutViewport;

/**
 * Visual viewport position, dimensions, and scale.
 *
 * offsetX: Horizontal offset relative to the layout viewport (CSS pixels).
 * offsetY: Vertical offset relative to the layout viewport (CSS pixels).
 * pageX: Horizontal offset relative to the document (CSS pixels).
 * pageY: Vertical offset relative to the document (CSS pixels).
 * clientWidth: Width (CSS pixels), excludes scrollbar if present.
 * clientHeight: Height (CSS pixels), excludes scrollbar if present.
 * scale: Scale relative to the ideal viewport (size at width=device-width).
 *
 * @typedef {{
 *   offsetX: number,
 *   offsetY: number,
 *   pageX: number,
 *   pageY: number,
 *   clientWidth: number,
 *   clientHeight: number,
 *   scale: number
 * }}
 */
Page.VisualViewport;

/**
 * Viewport for capturing screenshot.
 *
 * x: X offset in CSS pixels.
 * y: Y offset in CSS pixels
 * width: Rectangle width in CSS pixels
 * height: Rectangle height in CSS pixels
 * scale: Page scale factor.
 *
 * @typedef {{
 *   x: number,
 *   y: number,
 *   width: number,
 *   height: number,
 *   scale: number
 * }}
 */
Page.Viewport;

/**
 * Parameters for the AddScriptToEvaluateOnLoad command.
 *
 *
 * @typedef {{
 *   scriptSource: string
 * }}
 */
Page.AddScriptToEvaluateOnLoadParams;

/**
 * Result for the AddScriptToEvaluateOnLoad command.
 *
 * identifier: Identifier of the added script.
 *
 * @typedef {{
 *   identifier: string
 * }}
 */
Page.AddScriptToEvaluateOnLoadResult;

/**
 * Parameters for the AddScriptToEvaluateOnNewDocument command.
 *
 *
 * @typedef {{
 *   source: string
 * }}
 */
Page.AddScriptToEvaluateOnNewDocumentParams;

/**
 * Result for the AddScriptToEvaluateOnNewDocument command.
 *
 * identifier: Identifier of the added script.
 *
 * @typedef {{
 *   identifier: string
 * }}
 */
Page.AddScriptToEvaluateOnNewDocumentResult;

/**
 * Parameters for the BringToFront command.
 *
 *
 * @typedef {undefined}
 */
Page.BringToFrontParams;

/**
 * Result for the BringToFront command.
 *
 *
 * @typedef {undefined}
 */
Page.BringToFrontResult;

/**
 * Parameters for the CaptureScreenshot command.
 *
 * format: Image compression format (defaults to png).
 * quality: Compression quality from range [0..100] (jpeg only).
 * clip: Capture the screenshot of a given region only.
 * fromSurface: Capture the screenshot from the surface, rather than the view. Defaults to true.
 *
 * @typedef {{
 *   format: (!Page.CaptureScreenshotFormat|undefined),
 *   quality: (number|undefined),
 *   clip: (!Page.Viewport|undefined),
 *   fromSurface: (boolean|undefined)
 * }}
 */
Page.CaptureScreenshotParams;

/**
 * Result for the CaptureScreenshot command.
 *
 * data: Base64-encoded image data.
 *
 * @typedef {{
 *   data: string
 * }}
 */
Page.CaptureScreenshotResult;

/**
 * Parameters for the ClearDeviceMetricsOverride command.
 *
 *
 * @typedef {undefined}
 */
Page.ClearDeviceMetricsOverrideParams;

/**
 * Result for the ClearDeviceMetricsOverride command.
 *
 *
 * @typedef {undefined}
 */
Page.ClearDeviceMetricsOverrideResult;

/**
 * Parameters for the ClearDeviceOrientationOverride command.
 *
 *
 * @typedef {undefined}
 */
Page.ClearDeviceOrientationOverrideParams;

/**
 * Result for the ClearDeviceOrientationOverride command.
 *
 *
 * @typedef {undefined}
 */
Page.ClearDeviceOrientationOverrideResult;

/**
 * Parameters for the ClearGeolocationOverride command.
 *
 *
 * @typedef {undefined}
 */
Page.ClearGeolocationOverrideParams;

/**
 * Result for the ClearGeolocationOverride command.
 *
 *
 * @typedef {undefined}
 */
Page.ClearGeolocationOverrideResult;

/**
 * Parameters for the CreateIsolatedWorld command.
 *
 * frameId: Id of the frame in which the isolated world should be created.
 * worldName: An optional name which is reported in the Execution Context.
 * grantUniveralAccess: Whether or not universal access should be granted to the isolated world. This is a powerful
 *   option, use with caution.
 *
 * @typedef {{
 *   frameId: string,
 *   worldName: (string|undefined),
 *   grantUniveralAccess: (boolean|undefined)
 * }}
 */
Page.CreateIsolatedWorldParams;

/**
 * Result for the CreateIsolatedWorld command.
 *
 * executionContextId: Execution context of the isolated world.
 *
 * @typedef {{
 *   executionContextId: number
 * }}
 */
Page.CreateIsolatedWorldResult;

/**
 * Parameters for the DeleteCookie command.
 *
 * cookieName: Name of the cookie to remove.
 * url: URL to match cooke domain and path.
 *
 * @typedef {{
 *   cookieName: string,
 *   url: string
 * }}
 */
Page.DeleteCookieParams;

/**
 * Result for the DeleteCookie command.
 *
 *
 * @typedef {undefined}
 */
Page.DeleteCookieResult;

/**
 * Parameters for the Disable command.
 *
 *
 * @typedef {undefined}
 */
Page.DisableParams;

/**
 * Result for the Disable command.
 *
 *
 * @typedef {undefined}
 */
Page.DisableResult;

/**
 * Parameters for the Enable command.
 *
 *
 * @typedef {undefined}
 */
Page.EnableParams;

/**
 * Result for the Enable command.
 *
 *
 * @typedef {undefined}
 */
Page.EnableResult;

/**
 * Parameters for the GetAppManifest command.
 *
 *
 * @typedef {undefined}
 */
Page.GetAppManifestParams;

/**
 * Result for the GetAppManifest command.
 *
 * url: Manifest location.
 * data: Manifest content.
 *
 * @typedef {{
 *   url: string,
 *   errors: !Array.<!Page.AppManifestError>,
 *   data: (string|undefined)
 * }}
 */
Page.GetAppManifestResult;

/**
 * Parameters for the GetCookies command.
 *
 *
 * @typedef {undefined}
 */
Page.GetCookiesParams;

/**
 * Result for the GetCookies command.
 *
 * cookies: Array of cookie objects.
 *
 * @typedef {{
 *   cookies: !Array.<!Network.Cookie>
 * }}
 */
Page.GetCookiesResult;

/**
 * Parameters for the GetFrameTree command.
 *
 *
 * @typedef {undefined}
 */
Page.GetFrameTreeParams;

/**
 * Result for the GetFrameTree command.
 *
 * frameTree: Present frame tree structure.
 *
 * @typedef {{
 *   frameTree: !Page.FrameTree
 * }}
 */
Page.GetFrameTreeResult;

/**
 * Parameters for the GetLayoutMetrics command.
 *
 *
 * @typedef {undefined}
 */
Page.GetLayoutMetricsParams;

/**
 * Result for the GetLayoutMetrics command.
 *
 * layoutViewport: Metrics relating to the layout viewport.
 * visualViewport: Metrics relating to the visual viewport.
 * contentSize: Size of scrollable area.
 *
 * @typedef {{
 *   layoutViewport: !Page.LayoutViewport,
 *   visualViewport: !Page.VisualViewport,
 *   contentSize: !DOM.Rect
 * }}
 */
Page.GetLayoutMetricsResult;

/**
 * Parameters for the GetNavigationHistory command.
 *
 *
 * @typedef {undefined}
 */
Page.GetNavigationHistoryParams;

/**
 * Result for the GetNavigationHistory command.
 *
 * currentIndex: Index of the current navigation history entry.
 * entries: Array of navigation history entries.
 *
 * @typedef {{
 *   currentIndex: number,
 *   entries: !Array.<!Page.NavigationEntry>
 * }}
 */
Page.GetNavigationHistoryResult;

/**
 * Parameters for the GetResourceContent command.
 *
 * frameId: Frame id to get resource for.
 * url: URL of the resource to get content for.
 *
 * @typedef {{
 *   frameId: string,
 *   url: string
 * }}
 */
Page.GetResourceContentParams;

/**
 * Result for the GetResourceContent command.
 *
 * content: Resource content.
 * base64Encoded: True, if content was served as base64.
 *
 * @typedef {{
 *   content: string,
 *   base64Encoded: boolean
 * }}
 */
Page.GetResourceContentResult;

/**
 * Parameters for the GetResourceTree command.
 *
 *
 * @typedef {undefined}
 */
Page.GetResourceTreeParams;

/**
 * Result for the GetResourceTree command.
 *
 * frameTree: Present frame / resource tree structure.
 *
 * @typedef {{
 *   frameTree: !Page.FrameResourceTree
 * }}
 */
Page.GetResourceTreeResult;

/**
 * Parameters for the HandleJavaScriptDialog command.
 *
 * accept: Whether to accept or dismiss the dialog.
 * promptText: The text to enter into the dialog prompt before accepting. Used only if this is a prompt
 *   dialog.
 *
 * @typedef {{
 *   accept: boolean,
 *   promptText: (string|undefined)
 * }}
 */
Page.HandleJavaScriptDialogParams;

/**
 * Result for the HandleJavaScriptDialog command.
 *
 *
 * @typedef {undefined}
 */
Page.HandleJavaScriptDialogResult;

/**
 * Parameters for the Navigate command.
 *
 * url: URL to navigate the page to.
 * referrer: Referrer URL.
 * transitionType: Intended transition type.
 * frameId: Frame id to navigate, if not specified navigates the top frame.
 *
 * @typedef {{
 *   url: string,
 *   referrer: (string|undefined),
 *   transitionType: (!Page.TransitionType|undefined),
 *   frameId: (string|undefined)
 * }}
 */
Page.NavigateParams;

/**
 * Result for the Navigate command.
 *
 * frameId: Frame id that has navigated (or failed to navigate)
 * loaderId: Loader identifier.
 * errorText: User friendly error message, present if and only if navigation has failed.
 *
 * @typedef {{
 *   frameId: string,
 *   loaderId: (string|undefined),
 *   errorText: (string|undefined)
 * }}
 */
Page.NavigateResult;

/**
 * Parameters for the NavigateToHistoryEntry command.
 *
 * entryId: Unique id of the entry to navigate to.
 *
 * @typedef {{
 *   entryId: number
 * }}
 */
Page.NavigateToHistoryEntryParams;

/**
 * Result for the NavigateToHistoryEntry command.
 *
 *
 * @typedef {undefined}
 */
Page.NavigateToHistoryEntryResult;

/**
 * Parameters for the PrintToPDF command.
 *
 * landscape: Paper orientation. Defaults to false.
 * displayHeaderFooter: Display header and footer. Defaults to false.
 * printBackground: Print background graphics. Defaults to false.
 * scale: Scale of the webpage rendering. Defaults to 1.
 * paperWidth: Paper width in inches. Defaults to 8.5 inches.
 * paperHeight: Paper height in inches. Defaults to 11 inches.
 * marginTop: Top margin in inches. Defaults to 1cm (~0.4 inches).
 * marginBottom: Bottom margin in inches. Defaults to 1cm (~0.4 inches).
 * marginLeft: Left margin in inches. Defaults to 1cm (~0.4 inches).
 * marginRight: Right margin in inches. Defaults to 1cm (~0.4 inches).
 * pageRanges: Paper ranges to print, e.g., '1-5, 8, 11-13'. Defaults to the empty string, which means
 *   print all pages.
 * ignoreInvalidPageRanges: Whether to silently ignore invalid but successfully parsed page ranges, such as '3-2'.
 *   Defaults to false.
 * headerTemplate: HTML template for the print header. Should be valid HTML markup with following
 *   classes used to inject printing values into them:
 *   - `date`: formatted print date
 *   - `title`: document title
 *   - `url`: document location
 *   - `pageNumber`: current page number
 *   - `totalPages`: total pages in the document
 *   
 *   For example, `<span class=title></span>` would generate span containing the title.
 * footerTemplate: HTML template for the print footer. Should use the same format as the `headerTemplate`.
 * preferCSSPageSize: Whether or not to prefer page size as defined by css. Defaults to false,
 *   in which case the content will be scaled to fit the paper size.
 *
 * @typedef {{
 *   landscape: (boolean|undefined),
 *   displayHeaderFooter: (boolean|undefined),
 *   printBackground: (boolean|undefined),
 *   scale: (number|undefined),
 *   paperWidth: (number|undefined),
 *   paperHeight: (number|undefined),
 *   marginTop: (number|undefined),
 *   marginBottom: (number|undefined),
 *   marginLeft: (number|undefined),
 *   marginRight: (number|undefined),
 *   pageRanges: (string|undefined),
 *   ignoreInvalidPageRanges: (boolean|undefined),
 *   headerTemplate: (string|undefined),
 *   footerTemplate: (string|undefined),
 *   preferCSSPageSize: (boolean|undefined)
 * }}
 */
Page.PrintToPDFParams;

/**
 * Result for the PrintToPDF command.
 *
 * data: Base64-encoded pdf data.
 *
 * @typedef {{
 *   data: string
 * }}
 */
Page.PrintToPDFResult;

/**
 * Parameters for the Reload command.
 *
 * ignoreCache: If true, browser cache is ignored (as if the user pressed Shift+refresh).
 * scriptToEvaluateOnLoad: If set, the script will be injected into all frames of the inspected page after reload.
 *   Argument will be ignored if reloading dataURL origin.
 *
 * @typedef {{
 *   ignoreCache: (boolean|undefined),
 *   scriptToEvaluateOnLoad: (string|undefined)
 * }}
 */
Page.ReloadParams;

/**
 * Result for the Reload command.
 *
 *
 * @typedef {undefined}
 */
Page.ReloadResult;

/**
 * Parameters for the RemoveScriptToEvaluateOnLoad command.
 *
 *
 * @typedef {{
 *   identifier: string
 * }}
 */
Page.RemoveScriptToEvaluateOnLoadParams;

/**
 * Result for the RemoveScriptToEvaluateOnLoad command.
 *
 *
 * @typedef {undefined}
 */
Page.RemoveScriptToEvaluateOnLoadResult;

/**
 * Parameters for the RemoveScriptToEvaluateOnNewDocument command.
 *
 *
 * @typedef {{
 *   identifier: string
 * }}
 */
Page.RemoveScriptToEvaluateOnNewDocumentParams;

/**
 * Result for the RemoveScriptToEvaluateOnNewDocument command.
 *
 *
 * @typedef {undefined}
 */
Page.RemoveScriptToEvaluateOnNewDocumentResult;

/**
 * Parameters for the RequestAppBanner command.
 *
 *
 * @typedef {undefined}
 */
Page.RequestAppBannerParams;

/**
 * Result for the RequestAppBanner command.
 *
 *
 * @typedef {undefined}
 */
Page.RequestAppBannerResult;

/**
 * Parameters for the ScreencastFrameAck command.
 *
 * sessionId: Frame number.
 *
 * @typedef {{
 *   sessionId: number
 * }}
 */
Page.ScreencastFrameAckParams;

/**
 * Result for the ScreencastFrameAck command.
 *
 *
 * @typedef {undefined}
 */
Page.ScreencastFrameAckResult;

/**
 * Parameters for the SearchInResource command.
 *
 * frameId: Frame id for resource to search in.
 * url: URL of the resource to search in.
 * query: String to search for.
 * caseSensitive: If true, search is case sensitive.
 * isRegex: If true, treats string parameter as regex.
 *
 * @typedef {{
 *   frameId: string,
 *   url: string,
 *   query: string,
 *   caseSensitive: (boolean|undefined),
 *   isRegex: (boolean|undefined)
 * }}
 */
Page.SearchInResourceParams;

/**
 * Result for the SearchInResource command.
 *
 * result: List of search matches.
 *
 * @typedef {{
 *   result: !Array.<!Debugger.SearchMatch>
 * }}
 */
Page.SearchInResourceResult;

/**
 * Parameters for the SetAdBlockingEnabled command.
 *
 * enabled: Whether to block ads.
 *
 * @typedef {{
 *   enabled: boolean
 * }}
 */
Page.SetAdBlockingEnabledParams;

/**
 * Result for the SetAdBlockingEnabled command.
 *
 *
 * @typedef {undefined}
 */
Page.SetAdBlockingEnabledResult;

/**
 * Parameters for the SetBypassCSP command.
 *
 * enabled: Whether to bypass page CSP.
 *
 * @typedef {{
 *   enabled: boolean
 * }}
 */
Page.SetBypassCSPParams;

/**
 * Result for the SetBypassCSP command.
 *
 *
 * @typedef {undefined}
 */
Page.SetBypassCSPResult;

/**
 * Parameters for the SetDeviceMetricsOverride command.
 *
 * width: Overriding width value in pixels (minimum 0, maximum 10000000). 0 disables the override.
 * height: Overriding height value in pixels (minimum 0, maximum 10000000). 0 disables the override.
 * deviceScaleFactor: Overriding device scale factor value. 0 disables the override.
 * mobile: Whether to emulate mobile device. This includes viewport meta tag, overlay scrollbars, text
 *   autosizing and more.
 * scale: Scale to apply to resulting view image.
 * screenWidth: Overriding screen width value in pixels (minimum 0, maximum 10000000).
 * screenHeight: Overriding screen height value in pixels (minimum 0, maximum 10000000).
 * positionX: Overriding view X position on screen in pixels (minimum 0, maximum 10000000).
 * positionY: Overriding view Y position on screen in pixels (minimum 0, maximum 10000000).
 * dontSetVisibleSize: Do not set visible view size, rely upon explicit setVisibleSize call.
 * screenOrientation: Screen orientation override.
 * viewport: The viewport dimensions and scale. If not set, the override is cleared.
 *
 * @typedef {{
 *   width: number,
 *   height: number,
 *   deviceScaleFactor: number,
 *   mobile: boolean,
 *   scale: (number|undefined),
 *   screenWidth: (number|undefined),
 *   screenHeight: (number|undefined),
 *   positionX: (number|undefined),
 *   positionY: (number|undefined),
 *   dontSetVisibleSize: (boolean|undefined),
 *   screenOrientation: (!chromium.DevTools.Emulation.ScreenOrientation|undefined),
 *   viewport: (!Page.Viewport|undefined)
 * }}
 */
Page.SetDeviceMetricsOverrideParams;

/**
 * Result for the SetDeviceMetricsOverride command.
 *
 *
 * @typedef {undefined}
 */
Page.SetDeviceMetricsOverrideResult;

/**
 * Parameters for the SetDeviceOrientationOverride command.
 *
 * alpha: Mock alpha
 * beta: Mock beta
 * gamma: Mock gamma
 *
 * @typedef {{
 *   alpha: number,
 *   beta: number,
 *   gamma: number
 * }}
 */
Page.SetDeviceOrientationOverrideParams;

/**
 * Result for the SetDeviceOrientationOverride command.
 *
 *
 * @typedef {undefined}
 */
Page.SetDeviceOrientationOverrideResult;

/**
 * Parameters for the SetDocumentContent command.
 *
 * frameId: Frame id to set HTML for.
 * html: HTML content to set.
 *
 * @typedef {{
 *   frameId: string,
 *   html: string
 * }}
 */
Page.SetDocumentContentParams;

/**
 * Result for the SetDocumentContent command.
 *
 *
 * @typedef {undefined}
 */
Page.SetDocumentContentResult;

/**
 * Parameters for the SetDownloadBehavior command.
 *
 * behavior: Whether to allow all or deny all download requests, or use default Chrome behavior if
 *   available (otherwise deny).
 * downloadPath: The default path to save downloaded files to. This is requred if behavior is set to 'allow'
 *
 * @typedef {{
 *   behavior: !Page.SetDownloadBehaviorBehavior,
 *   downloadPath: (string|undefined)
 * }}
 */
Page.SetDownloadBehaviorParams;

/**
 * Result for the SetDownloadBehavior command.
 *
 *
 * @typedef {undefined}
 */
Page.SetDownloadBehaviorResult;

/**
 * Parameters for the SetGeolocationOverride command.
 *
 * latitude: Mock latitude
 * longitude: Mock longitude
 * accuracy: Mock accuracy
 *
 * @typedef {{
 *   latitude: (number|undefined),
 *   longitude: (number|undefined),
 *   accuracy: (number|undefined)
 * }}
 */
Page.SetGeolocationOverrideParams;

/**
 * Result for the SetGeolocationOverride command.
 *
 *
 * @typedef {undefined}
 */
Page.SetGeolocationOverrideResult;

/**
 * Parameters for the SetLifecycleEventsEnabled command.
 *
 * enabled: If true, starts emitting lifecycle events.
 *
 * @typedef {{
 *   enabled: boolean
 * }}
 */
Page.SetLifecycleEventsEnabledParams;

/**
 * Result for the SetLifecycleEventsEnabled command.
 *
 *
 * @typedef {undefined}
 */
Page.SetLifecycleEventsEnabledResult;

/**
 * Parameters for the SetTouchEmulationEnabled command.
 *
 * enabled: Whether the touch event emulation should be enabled.
 * configuration: Touch/gesture events configuration. Default: current platform.
 *
 * @typedef {{
 *   enabled: boolean,
 *   configuration: (!Page.SetTouchEmulationEnabledConfiguration|undefined)
 * }}
 */
Page.SetTouchEmulationEnabledParams;

/**
 * Result for the SetTouchEmulationEnabled command.
 *
 *
 * @typedef {undefined}
 */
Page.SetTouchEmulationEnabledResult;

/**
 * Parameters for the StartScreencast command.
 *
 * format: Image compression format.
 * quality: Compression quality from range [0..100].
 * maxWidth: Maximum screenshot width.
 * maxHeight: Maximum screenshot height.
 * everyNthFrame: Send every n-th frame.
 *
 * @typedef {{
 *   format: (!Page.StartScreencastFormat|undefined),
 *   quality: (number|undefined),
 *   maxWidth: (number|undefined),
 *   maxHeight: (number|undefined),
 *   everyNthFrame: (number|undefined)
 * }}
 */
Page.StartScreencastParams;

/**
 * Result for the StartScreencast command.
 *
 *
 * @typedef {undefined}
 */
Page.StartScreencastResult;

/**
 * Parameters for the StopLoading command.
 *
 *
 * @typedef {undefined}
 */
Page.StopLoadingParams;

/**
 * Result for the StopLoading command.
 *
 *
 * @typedef {undefined}
 */
Page.StopLoadingResult;

/**
 * Parameters for the Crash command.
 *
 *
 * @typedef {undefined}
 */
Page.CrashParams;

/**
 * Result for the Crash command.
 *
 *
 * @typedef {undefined}
 */
Page.CrashResult;

/**
 * Parameters for the Close command.
 *
 *
 * @typedef {undefined}
 */
Page.CloseParams;

/**
 * Result for the Close command.
 *
 *
 * @typedef {undefined}
 */
Page.CloseResult;

/**
 * Parameters for the SetWebLifecycleState command.
 *
 * state: Target lifecycle state
 *
 * @typedef {{
 *   state: !Page.SetWebLifecycleStateState
 * }}
 */
Page.SetWebLifecycleStateParams;

/**
 * Result for the SetWebLifecycleState command.
 *
 *
 * @typedef {undefined}
 */
Page.SetWebLifecycleStateResult;

/**
 * Parameters for the StopScreencast command.
 *
 *
 * @typedef {undefined}
 */
Page.StopScreencastParams;

/**
 * Result for the StopScreencast command.
 *
 *
 * @typedef {undefined}
 */
Page.StopScreencastResult;

/**
 * Parameters for the DomContentEventFired event.
 *
 *
 * @typedef {{
 *   timestamp: number
 * }}
 */
Page.DomContentEventFiredParams;

/**
 * Parameters for the FrameAttached event.
 *
 * frameId: Id of the frame that has been attached.
 * parentFrameId: Parent frame identifier.
 * stack: JavaScript stack trace of when frame was attached, only set if frame initiated from script.
 *
 * @typedef {{
 *   frameId: string,
 *   parentFrameId: string,
 *   stack: (!chromium.DevTools.Runtime.StackTrace|undefined)
 * }}
 */
Page.FrameAttachedParams;

/**
 * Parameters for the FrameClearedScheduledNavigation event.
 *
 * frameId: Id of the frame that has cleared its scheduled navigation.
 *
 * @typedef {{
 *   frameId: string
 * }}
 */
Page.FrameClearedScheduledNavigationParams;

/**
 * Parameters for the FrameDetached event.
 *
 * frameId: Id of the frame that has been detached.
 *
 * @typedef {{
 *   frameId: string
 * }}
 */
Page.FrameDetachedParams;

/**
 * Parameters for the FrameNavigated event.
 *
 * frame: Frame object.
 *
 * @typedef {{
 *   frame: !Page.Frame
 * }}
 */
Page.FrameNavigatedParams;

/**
 * Parameters for the FrameResized event.
 *
 *
 * @typedef {undefined}
 */
Page.FrameResizedParams;

/**
 * Parameters for the FrameScheduledNavigation event.
 *
 * frameId: Id of the frame that has scheduled a navigation.
 * delay: Delay (in seconds) until the navigation is scheduled to begin. The navigation is not
 *   guaranteed to start.
 * reason: The reason for the navigation.
 * url: The destination URL for the scheduled navigation.
 *
 * @typedef {{
 *   frameId: string,
 *   delay: number,
 *   reason: !Page.FrameScheduledNavigationReason,
 *   url: string
 * }}
 */
Page.FrameScheduledNavigationParams;

/**
 * Parameters for the FrameStartedLoading event.
 *
 * frameId: Id of the frame that has started loading.
 *
 * @typedef {{
 *   frameId: string
 * }}
 */
Page.FrameStartedLoadingParams;

/**
 * Parameters for the FrameStoppedLoading event.
 *
 * frameId: Id of the frame that has stopped loading.
 *
 * @typedef {{
 *   frameId: string
 * }}
 */
Page.FrameStoppedLoadingParams;

/**
 * Parameters for the InterstitialHidden event.
 *
 *
 * @typedef {undefined}
 */
Page.InterstitialHiddenParams;

/**
 * Parameters for the InterstitialShown event.
 *
 *
 * @typedef {undefined}
 */
Page.InterstitialShownParams;

/**
 * Parameters for the JavascriptDialogClosed event.
 *
 * result: Whether dialog was confirmed.
 * userInput: User input in case of prompt.
 *
 * @typedef {{
 *   result: boolean,
 *   userInput: string
 * }}
 */
Page.JavascriptDialogClosedParams;

/**
 * Parameters for the JavascriptDialogOpening event.
 *
 * url: Frame url.
 * message: Message that will be displayed by the dialog.
 * type: Dialog type.
 * hasBrowserHandler: True iff browser is capable showing or acting on the given dialog. When browser has no
 *   dialog handler for given target, calling alert while Page domain is engaged will stall
 *   the page execution. Execution can be resumed via calling Page.handleJavaScriptDialog.
 * defaultPrompt: Default dialog prompt.
 *
 * @typedef {{
 *   url: string,
 *   message: string,
 *   type: !Page.DialogType,
 *   hasBrowserHandler: boolean,
 *   defaultPrompt: (string|undefined)
 * }}
 */
Page.JavascriptDialogOpeningParams;

/**
 * Parameters for the LifecycleEvent event.
 *
 * frameId: Id of the frame.
 * loaderId: Loader identifier. Empty string if the request is fetched from worker.
 *
 * @typedef {{
 *   frameId: string,
 *   loaderId: string,
 *   name: string,
 *   timestamp: number
 * }}
 */
Page.LifecycleEventParams;

/**
 * Parameters for the LoadEventFired event.
 *
 *
 * @typedef {{
 *   timestamp: number
 * }}
 */
Page.LoadEventFiredParams;

/**
 * Parameters for the NavigatedWithinDocument event.
 *
 * frameId: Id of the frame.
 * url: Frame's new url.
 *
 * @typedef {{
 *   frameId: string,
 *   url: string
 * }}
 */
Page.NavigatedWithinDocumentParams;

/**
 * Parameters for the ScreencastFrame event.
 *
 * data: Base64-encoded compressed image.
 * metadata: Screencast frame metadata.
 * sessionId: Frame number.
 *
 * @typedef {{
 *   data: string,
 *   metadata: !Page.ScreencastFrameMetadata,
 *   sessionId: number
 * }}
 */
Page.ScreencastFrameParams;

/**
 * Parameters for the ScreencastVisibilityChanged event.
 *
 * visible: True if the page is visible.
 *
 * @typedef {{
 *   visible: boolean
 * }}
 */
Page.ScreencastVisibilityChangedParams;

/**
 * Parameters for the WindowOpen event.
 *
 * url: The URL for the new window.
 * windowName: Window name.
 * windowFeatures: An array of enabled window features.
 * userGesture: Whether or not it was triggered by user gesture.
 *
 * @typedef {{
 *   url: string,
 *   windowName: string,
 *   windowFeatures: !Array.<string>,
 *   userGesture: boolean
 * }}
 */
Page.WindowOpenParams;



/**
  * Deprecated, please use addScriptToEvaluateOnNewDocument instead.
  *
  * @param {Page.AddScriptToEvaluateOnLoadParams} params
  * @return {!Promise<Page.AddScriptToEvaluateOnLoadResult>}
  */
ExperimentalPage.prototype.addScriptToEvaluateOnLoad = function(params) {
  return this.connection_.sendDevToolsMessage('Page.addScriptToEvaluateOnLoad', params);
};

/**
  * Evaluates given script in every frame upon creation (before loading frame's scripts).
  *
  * @param {Page.AddScriptToEvaluateOnNewDocumentParams} params
  * @return {!Promise<Page.AddScriptToEvaluateOnNewDocumentResult>}
  */
ExperimentalPage.prototype.addScriptToEvaluateOnNewDocument = function(params) {
  return this.connection_.sendDevToolsMessage('Page.addScriptToEvaluateOnNewDocument', params);
};

/**
  * Brings page to front (activates tab).
  *
  * @return {!Promise<Page.BringToFrontResult>}
  */
ExperimentalPage.prototype.bringToFront = function() {
  return this.connection_.sendDevToolsMessage('Page.bringToFront', {});
};

/**
  * Capture page screenshot.
  *
  * @param {Page.CaptureScreenshotParams=} opt_params
  * @return {!Promise<Page.CaptureScreenshotResult>}
  */
ExperimentalPage.prototype.captureScreenshot = function(opt_params) {
  return this.connection_.sendDevToolsMessage('Page.captureScreenshot', opt_params || {});
};

/**
  * Clears the overriden device metrics.
  *
  * @return {!Promise<Page.ClearDeviceMetricsOverrideResult>}
  */
ExperimentalPage.prototype.clearDeviceMetricsOverride = function() {
  return this.connection_.sendDevToolsMessage('Page.clearDeviceMetricsOverride', {});
};

/**
  * Clears the overridden Device Orientation.
  *
  * @return {!Promise<Page.ClearDeviceOrientationOverrideResult>}
  */
ExperimentalPage.prototype.clearDeviceOrientationOverride = function() {
  return this.connection_.sendDevToolsMessage('Page.clearDeviceOrientationOverride', {});
};

/**
  * Clears the overriden Geolocation Position and Error.
  *
  * @return {!Promise<Page.ClearGeolocationOverrideResult>}
  */
ExperimentalPage.prototype.clearGeolocationOverride = function() {
  return this.connection_.sendDevToolsMessage('Page.clearGeolocationOverride', {});
};

/**
  * Creates an isolated world for the given frame.
  *
  * @param {Page.CreateIsolatedWorldParams} params
  * @return {!Promise<Page.CreateIsolatedWorldResult>}
  */
ExperimentalPage.prototype.createIsolatedWorld = function(params) {
  return this.connection_.sendDevToolsMessage('Page.createIsolatedWorld', params);
};

/**
  * Deletes browser cookie with given name, domain and path.
  *
  * @param {Page.DeleteCookieParams} params
  * @return {!Promise<Page.DeleteCookieResult>}
  */
ExperimentalPage.prototype.deleteCookie = function(params) {
  return this.connection_.sendDevToolsMessage('Page.deleteCookie', params);
};

/**
  * Disables page domain notifications.
  *
  * @return {!Promise<Page.DisableResult>}
  */
ExperimentalPage.prototype.disable = function() {
  return this.connection_.sendDevToolsMessage('Page.disable', {});
};

/**
  * Enables page domain notifications.
  *
  * @return {!Promise<Page.EnableResult>}
  */
ExperimentalPage.prototype.enable = function() {
  return this.connection_.sendDevToolsMessage('Page.enable', {});
};

/**
  * @return {!Promise<Page.GetAppManifestResult>}
  */
ExperimentalPage.prototype.getAppManifest = function() {
  return this.connection_.sendDevToolsMessage('Page.getAppManifest', {});
};

/**
  * Returns all browser cookies. Depending on the backend support, will return detailed cookie
 * information in the `cookies` field.
  *
  * @return {!Promise<Page.GetCookiesResult>}
  */
ExperimentalPage.prototype.getCookies = function() {
  return this.connection_.sendDevToolsMessage('Page.getCookies', {});
};

/**
  * Returns present frame tree structure.
  *
  * @return {!Promise<Page.GetFrameTreeResult>}
  */
ExperimentalPage.prototype.getFrameTree = function() {
  return this.connection_.sendDevToolsMessage('Page.getFrameTree', {});
};

/**
  * Returns metrics relating to the layouting of the page, such as viewport bounds/scale.
  *
  * @return {!Promise<Page.GetLayoutMetricsResult>}
  */
ExperimentalPage.prototype.getLayoutMetrics = function() {
  return this.connection_.sendDevToolsMessage('Page.getLayoutMetrics', {});
};

/**
  * Returns navigation history for the current page.
  *
  * @return {!Promise<Page.GetNavigationHistoryResult>}
  */
ExperimentalPage.prototype.getNavigationHistory = function() {
  return this.connection_.sendDevToolsMessage('Page.getNavigationHistory', {});
};

/**
  * Returns content of the given resource.
  *
  * @param {Page.GetResourceContentParams} params
  * @return {!Promise<Page.GetResourceContentResult>}
  */
ExperimentalPage.prototype.getResourceContent = function(params) {
  return this.connection_.sendDevToolsMessage('Page.getResourceContent', params);
};

/**
  * Returns present frame / resource tree structure.
  *
  * @return {!Promise<Page.GetResourceTreeResult>}
  */
ExperimentalPage.prototype.getResourceTree = function() {
  return this.connection_.sendDevToolsMessage('Page.getResourceTree', {});
};

/**
  * Accepts or dismisses a JavaScript initiated dialog (alert, confirm, prompt, or onbeforeunload).
  *
  * @param {Page.HandleJavaScriptDialogParams} params
  * @return {!Promise<Page.HandleJavaScriptDialogResult>}
  */
ExperimentalPage.prototype.handleJavaScriptDialog = function(params) {
  return this.connection_.sendDevToolsMessage('Page.handleJavaScriptDialog', params);
};

/**
  * Navigates current page to the given URL.
  *
  * @param {Page.NavigateParams} params
  * @return {!Promise<Page.NavigateResult>}
  */
ExperimentalPage.prototype.navigate = function(params) {
  return this.connection_.sendDevToolsMessage('Page.navigate', params);
};

/**
  * Navigates current page to the given history entry.
  *
  * @param {Page.NavigateToHistoryEntryParams} params
  * @return {!Promise<Page.NavigateToHistoryEntryResult>}
  */
ExperimentalPage.prototype.navigateToHistoryEntry = function(params) {
  return this.connection_.sendDevToolsMessage('Page.navigateToHistoryEntry', params);
};

/**
  * Print page as PDF.
  *
  * @param {Page.PrintToPDFParams=} opt_params
  * @return {!Promise<Page.PrintToPDFResult>}
  */
ExperimentalPage.prototype.printToPDF = function(opt_params) {
  return this.connection_.sendDevToolsMessage('Page.printToPDF', opt_params || {});
};

/**
  * Reloads given page optionally ignoring the cache.
  *
  * @param {Page.ReloadParams=} opt_params
  * @return {!Promise<Page.ReloadResult>}
  */
ExperimentalPage.prototype.reload = function(opt_params) {
  return this.connection_.sendDevToolsMessage('Page.reload', opt_params || {});
};

/**
  * Deprecated, please use removeScriptToEvaluateOnNewDocument instead.
  *
  * @param {Page.RemoveScriptToEvaluateOnLoadParams} params
  * @return {!Promise<Page.RemoveScriptToEvaluateOnLoadResult>}
  */
ExperimentalPage.prototype.removeScriptToEvaluateOnLoad = function(params) {
  return this.connection_.sendDevToolsMessage('Page.removeScriptToEvaluateOnLoad', params);
};

/**
  * Removes given script from the list.
  *
  * @param {Page.RemoveScriptToEvaluateOnNewDocumentParams} params
  * @return {!Promise<Page.RemoveScriptToEvaluateOnNewDocumentResult>}
  */
ExperimentalPage.prototype.removeScriptToEvaluateOnNewDocument = function(params) {
  return this.connection_.sendDevToolsMessage('Page.removeScriptToEvaluateOnNewDocument', params);
};

/**
  * @return {!Promise<Page.RequestAppBannerResult>}
  */
ExperimentalPage.prototype.requestAppBanner = function() {
  return this.connection_.sendDevToolsMessage('Page.requestAppBanner', {});
};

/**
  * Acknowledges that a screencast frame has been received by the frontend.
  *
  * @param {Page.ScreencastFrameAckParams} params
  * @return {!Promise<Page.ScreencastFrameAckResult>}
  */
ExperimentalPage.prototype.screencastFrameAck = function(params) {
  return this.connection_.sendDevToolsMessage('Page.screencastFrameAck', params);
};

/**
  * Searches for given string in resource content.
  *
  * @param {Page.SearchInResourceParams} params
  * @return {!Promise<Page.SearchInResourceResult>}
  */
ExperimentalPage.prototype.searchInResource = function(params) {
  return this.connection_.sendDevToolsMessage('Page.searchInResource', params);
};

/**
  * Enable Chrome's experimental ad filter on all sites.
  *
  * @param {Page.SetAdBlockingEnabledParams} params
  * @return {!Promise<Page.SetAdBlockingEnabledResult>}
  */
ExperimentalPage.prototype.setAdBlockingEnabled = function(params) {
  return this.connection_.sendDevToolsMessage('Page.setAdBlockingEnabled', params);
};

/**
  * Enable page Content Security Policy by-passing.
  *
  * @param {Page.SetBypassCSPParams} params
  * @return {!Promise<Page.SetBypassCSPResult>}
  */
ExperimentalPage.prototype.setBypassCSP = function(params) {
  return this.connection_.sendDevToolsMessage('Page.setBypassCSP', params);
};

/**
  * Overrides the values of device screen dimensions (window.screen.width, window.screen.height,
 * window.innerWidth, window.innerHeight, and "device-width"/"device-height"-related CSS media
 * query results).
  *
  * @param {Page.SetDeviceMetricsOverrideParams} params
  * @return {!Promise<Page.SetDeviceMetricsOverrideResult>}
  */
ExperimentalPage.prototype.setDeviceMetricsOverride = function(params) {
  return this.connection_.sendDevToolsMessage('Page.setDeviceMetricsOverride', params);
};

/**
  * Overrides the Device Orientation.
  *
  * @param {Page.SetDeviceOrientationOverrideParams} params
  * @return {!Promise<Page.SetDeviceOrientationOverrideResult>}
  */
ExperimentalPage.prototype.setDeviceOrientationOverride = function(params) {
  return this.connection_.sendDevToolsMessage('Page.setDeviceOrientationOverride', params);
};

/**
  * Sets given markup as the document's HTML.
  *
  * @param {Page.SetDocumentContentParams} params
  * @return {!Promise<Page.SetDocumentContentResult>}
  */
ExperimentalPage.prototype.setDocumentContent = function(params) {
  return this.connection_.sendDevToolsMessage('Page.setDocumentContent', params);
};

/**
  * Set the behavior when downloading a file.
  *
  * @param {Page.SetDownloadBehaviorParams} params
  * @return {!Promise<Page.SetDownloadBehaviorResult>}
  */
ExperimentalPage.prototype.setDownloadBehavior = function(params) {
  return this.connection_.sendDevToolsMessage('Page.setDownloadBehavior', params);
};

/**
  * Overrides the Geolocation Position or Error. Omitting any of the parameters emulates position
 * unavailable.
  *
  * @param {Page.SetGeolocationOverrideParams=} opt_params
  * @return {!Promise<Page.SetGeolocationOverrideResult>}
  */
ExperimentalPage.prototype.setGeolocationOverride = function(opt_params) {
  return this.connection_.sendDevToolsMessage('Page.setGeolocationOverride', opt_params || {});
};

/**
  * Controls whether page will emit lifecycle events.
  *
  * @param {Page.SetLifecycleEventsEnabledParams} params
  * @return {!Promise<Page.SetLifecycleEventsEnabledResult>}
  */
ExperimentalPage.prototype.setLifecycleEventsEnabled = function(params) {
  return this.connection_.sendDevToolsMessage('Page.setLifecycleEventsEnabled', params);
};

/**
  * Toggles mouse event-based touch event emulation.
  *
  * @param {Page.SetTouchEmulationEnabledParams} params
  * @return {!Promise<Page.SetTouchEmulationEnabledResult>}
  */
ExperimentalPage.prototype.setTouchEmulationEnabled = function(params) {
  return this.connection_.sendDevToolsMessage('Page.setTouchEmulationEnabled', params);
};

/**
  * Starts sending each frame using the `screencastFrame` event.
  *
  * @param {Page.StartScreencastParams=} opt_params
  * @return {!Promise<Page.StartScreencastResult>}
  */
ExperimentalPage.prototype.startScreencast = function(opt_params) {
  return this.connection_.sendDevToolsMessage('Page.startScreencast', opt_params || {});
};

/**
  * Force the page stop all navigations and pending resource fetches.
  *
  * @return {!Promise<Page.StopLoadingResult>}
  */
ExperimentalPage.prototype.stopLoading = function() {
  return this.connection_.sendDevToolsMessage('Page.stopLoading', {});
};

/**
  * Crashes renderer on the IO thread, generates minidumps.
  *
  * @return {!Promise<Page.CrashResult>}
  */
ExperimentalPage.prototype.crash = function() {
  return this.connection_.sendDevToolsMessage('Page.crash', {});
};

/**
  * Tries to close page, running its beforeunload hooks, if any.
  *
  * @return {!Promise<Page.CloseResult>}
  */
ExperimentalPage.prototype.close = function() {
  return this.connection_.sendDevToolsMessage('Page.close', {});
};

/**
  * Tries to update the web lifecycle state of the page.
 * It will transition the page to the given state according to:
 * https://github.com/WICG/web-lifecycle/
  *
  * @param {Page.SetWebLifecycleStateParams} params
  * @return {!Promise<Page.SetWebLifecycleStateResult>}
  */
ExperimentalPage.prototype.setWebLifecycleState = function(params) {
  return this.connection_.sendDevToolsMessage('Page.setWebLifecycleState', params);
};

/**
  * Stops sending each frame in the `screencastFrame`.
  *
  * @return {!Promise<Page.StopScreencastResult>}
  */
ExperimentalPage.prototype.stopScreencast = function() {
  return this.connection_.sendDevToolsMessage('Page.stopScreencast', {});
};


/**
  * @param {!function(!Page.DomContentEventFiredParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalPage.prototype.onDomContentEventFired = function(listener) {
  return this.connection_.addEventListener(
      'Page.domContentEventFired', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when frame has been attached to its parent.
  *
  * @param {!function(!Page.FrameAttachedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalPage.prototype.onFrameAttached = function(listener) {
  return this.connection_.addEventListener(
      'Page.frameAttached', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when frame no longer has a scheduled navigation.
  *
  * @param {!function(!Page.FrameClearedScheduledNavigationParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalPage.prototype.onFrameClearedScheduledNavigation = function(listener) {
  return this.connection_.addEventListener(
      'Page.frameClearedScheduledNavigation', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when frame has been detached from its parent.
  *
  * @param {!function(!Page.FrameDetachedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalPage.prototype.onFrameDetached = function(listener) {
  return this.connection_.addEventListener(
      'Page.frameDetached', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired once navigation of the frame has completed. Frame is now associated with the new loader.
  *
  * @param {!function(!Page.FrameNavigatedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalPage.prototype.onFrameNavigated = function(listener) {
  return this.connection_.addEventListener(
      'Page.frameNavigated', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * @param {!function()} listener
  * @return {number} The id of this event listener.
  */
ExperimentalPage.prototype.onFrameResized = function(listener) {
  return this.connection_.addEventListener(
      'Page.frameResized', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when frame schedules a potential navigation.
  *
  * @param {!function(!Page.FrameScheduledNavigationParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalPage.prototype.onFrameScheduledNavigation = function(listener) {
  return this.connection_.addEventListener(
      'Page.frameScheduledNavigation', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when frame has started loading.
  *
  * @param {!function(!Page.FrameStartedLoadingParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalPage.prototype.onFrameStartedLoading = function(listener) {
  return this.connection_.addEventListener(
      'Page.frameStartedLoading', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when frame has stopped loading.
  *
  * @param {!function(!Page.FrameStoppedLoadingParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalPage.prototype.onFrameStoppedLoading = function(listener) {
  return this.connection_.addEventListener(
      'Page.frameStoppedLoading', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when interstitial page was hidden
  *
  * @param {!function()} listener
  * @return {number} The id of this event listener.
  */
ExperimentalPage.prototype.onInterstitialHidden = function(listener) {
  return this.connection_.addEventListener(
      'Page.interstitialHidden', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when interstitial page was shown
  *
  * @param {!function()} listener
  * @return {number} The id of this event listener.
  */
ExperimentalPage.prototype.onInterstitialShown = function(listener) {
  return this.connection_.addEventListener(
      'Page.interstitialShown', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when a JavaScript initiated dialog (alert, confirm, prompt, or onbeforeunload) has been
 * closed.
  *
  * @param {!function(!Page.JavascriptDialogClosedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalPage.prototype.onJavascriptDialogClosed = function(listener) {
  return this.connection_.addEventListener(
      'Page.javascriptDialogClosed', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when a JavaScript initiated dialog (alert, confirm, prompt, or onbeforeunload) is about to
 * open.
  *
  * @param {!function(!Page.JavascriptDialogOpeningParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalPage.prototype.onJavascriptDialogOpening = function(listener) {
  return this.connection_.addEventListener(
      'Page.javascriptDialogOpening', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired for top level page lifecycle events such as navigation, load, paint, etc.
  *
  * @param {!function(!Page.LifecycleEventParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalPage.prototype.onLifecycleEvent = function(listener) {
  return this.connection_.addEventListener(
      'Page.lifecycleEvent', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * @param {!function(!Page.LoadEventFiredParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalPage.prototype.onLoadEventFired = function(listener) {
  return this.connection_.addEventListener(
      'Page.loadEventFired', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when same-document navigation happens, e.g. due to history API usage or anchor navigation.
  *
  * @param {!function(!Page.NavigatedWithinDocumentParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalPage.prototype.onNavigatedWithinDocument = function(listener) {
  return this.connection_.addEventListener(
      'Page.navigatedWithinDocument', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Compressed image data requested by the `startScreencast`.
  *
  * @param {!function(!Page.ScreencastFrameParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalPage.prototype.onScreencastFrame = function(listener) {
  return this.connection_.addEventListener(
      'Page.screencastFrame', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when the page with currently enabled screencast was shown or hidden `.
  *
  * @param {!function(!Page.ScreencastVisibilityChangedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalPage.prototype.onScreencastVisibilityChanged = function(listener) {
  return this.connection_.addEventListener(
      'Page.screencastVisibilityChanged', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when a new window is going to be opened, via window.open(), link click, form submission,
 * etc.
  *
  * @param {!function(!Page.WindowOpenParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalPage.prototype.onWindowOpen = function(listener) {
  return this.connection_.addEventListener(
      'Page.windowOpen', /** @type {!function(!Object): undefined} */ (listener));
};



/**
  * Deprecated, please use addScriptToEvaluateOnNewDocument instead.
  *
  * @param {Page.AddScriptToEvaluateOnLoadParams} params
  * @return {!Promise<Page.AddScriptToEvaluateOnLoadResult>}
  */
Page.prototype.addScriptToEvaluateOnLoad = function(params) {
  return this.connection_.sendDevToolsMessage('Page.addScriptToEvaluateOnLoad', params);
};

/**
  * Evaluates given script in every frame upon creation (before loading frame's scripts).
  *
  * @param {Page.AddScriptToEvaluateOnNewDocumentParams} params
  * @return {!Promise<Page.AddScriptToEvaluateOnNewDocumentResult>}
  */
Page.prototype.addScriptToEvaluateOnNewDocument = function(params) {
  return this.connection_.sendDevToolsMessage('Page.addScriptToEvaluateOnNewDocument', params);
};

/**
  * Brings page to front (activates tab).
  *
  * @return {!Promise<Page.BringToFrontResult>}
  */
Page.prototype.bringToFront = function() {
  return this.connection_.sendDevToolsMessage('Page.bringToFront', {});
};

/**
  * Capture page screenshot.
  *
  * @param {Page.CaptureScreenshotParams=} opt_params
  * @return {!Promise<Page.CaptureScreenshotResult>}
  */
Page.prototype.captureScreenshot = function(opt_params) {
  return this.connection_.sendDevToolsMessage('Page.captureScreenshot', opt_params || {});
};

/**
  * Clears the overriden device metrics.
  *
  * @return {!Promise<Page.ClearDeviceMetricsOverrideResult>}
  */
Page.prototype.clearDeviceMetricsOverride = function() {
  return this.connection_.sendDevToolsMessage('Page.clearDeviceMetricsOverride', {});
};

/**
  * Clears the overridden Device Orientation.
  *
  * @return {!Promise<Page.ClearDeviceOrientationOverrideResult>}
  */
Page.prototype.clearDeviceOrientationOverride = function() {
  return this.connection_.sendDevToolsMessage('Page.clearDeviceOrientationOverride', {});
};

/**
  * Clears the overriden Geolocation Position and Error.
  *
  * @return {!Promise<Page.ClearGeolocationOverrideResult>}
  */
Page.prototype.clearGeolocationOverride = function() {
  return this.connection_.sendDevToolsMessage('Page.clearGeolocationOverride', {});
};

/**
  * Creates an isolated world for the given frame.
  *
  * @param {Page.CreateIsolatedWorldParams} params
  * @return {!Promise<Page.CreateIsolatedWorldResult>}
  */
Page.prototype.createIsolatedWorld = function(params) {
  return this.connection_.sendDevToolsMessage('Page.createIsolatedWorld', params);
};

/**
  * Deletes browser cookie with given name, domain and path.
  *
  * @param {Page.DeleteCookieParams} params
  * @return {!Promise<Page.DeleteCookieResult>}
  */
Page.prototype.deleteCookie = function(params) {
  return this.connection_.sendDevToolsMessage('Page.deleteCookie', params);
};

/**
  * Disables page domain notifications.
  *
  * @return {!Promise<Page.DisableResult>}
  */
Page.prototype.disable = function() {
  return this.connection_.sendDevToolsMessage('Page.disable', {});
};

/**
  * Enables page domain notifications.
  *
  * @return {!Promise<Page.EnableResult>}
  */
Page.prototype.enable = function() {
  return this.connection_.sendDevToolsMessage('Page.enable', {});
};

/**
  * @return {!Promise<Page.GetAppManifestResult>}
  */
Page.prototype.getAppManifest = function() {
  return this.connection_.sendDevToolsMessage('Page.getAppManifest', {});
};

/**
  * Returns all browser cookies. Depending on the backend support, will return detailed cookie
 * information in the `cookies` field.
  *
  * @return {!Promise<Page.GetCookiesResult>}
  */
Page.prototype.getCookies = function() {
  return this.connection_.sendDevToolsMessage('Page.getCookies', {});
};

/**
  * Returns present frame tree structure.
  *
  * @return {!Promise<Page.GetFrameTreeResult>}
  */
Page.prototype.getFrameTree = function() {
  return this.connection_.sendDevToolsMessage('Page.getFrameTree', {});
};

/**
  * Returns metrics relating to the layouting of the page, such as viewport bounds/scale.
  *
  * @return {!Promise<Page.GetLayoutMetricsResult>}
  */
Page.prototype.getLayoutMetrics = function() {
  return this.connection_.sendDevToolsMessage('Page.getLayoutMetrics', {});
};

/**
  * Returns navigation history for the current page.
  *
  * @return {!Promise<Page.GetNavigationHistoryResult>}
  */
Page.prototype.getNavigationHistory = function() {
  return this.connection_.sendDevToolsMessage('Page.getNavigationHistory', {});
};

/**
  * Returns content of the given resource.
  *
  * @param {Page.GetResourceContentParams} params
  * @return {!Promise<Page.GetResourceContentResult>}
  */
Page.prototype.getResourceContent = function(params) {
  return this.connection_.sendDevToolsMessage('Page.getResourceContent', params);
};

/**
  * Returns present frame / resource tree structure.
  *
  * @return {!Promise<Page.GetResourceTreeResult>}
  */
Page.prototype.getResourceTree = function() {
  return this.connection_.sendDevToolsMessage('Page.getResourceTree', {});
};

/**
  * Accepts or dismisses a JavaScript initiated dialog (alert, confirm, prompt, or onbeforeunload).
  *
  * @param {Page.HandleJavaScriptDialogParams} params
  * @return {!Promise<Page.HandleJavaScriptDialogResult>}
  */
Page.prototype.handleJavaScriptDialog = function(params) {
  return this.connection_.sendDevToolsMessage('Page.handleJavaScriptDialog', params);
};

/**
  * Navigates current page to the given URL.
  *
  * @param {Page.NavigateParams} params
  * @return {!Promise<Page.NavigateResult>}
  */
Page.prototype.navigate = function(params) {
  return this.connection_.sendDevToolsMessage('Page.navigate', params);
};

/**
  * Navigates current page to the given history entry.
  *
  * @param {Page.NavigateToHistoryEntryParams} params
  * @return {!Promise<Page.NavigateToHistoryEntryResult>}
  */
Page.prototype.navigateToHistoryEntry = function(params) {
  return this.connection_.sendDevToolsMessage('Page.navigateToHistoryEntry', params);
};

/**
  * Print page as PDF.
  *
  * @param {Page.PrintToPDFParams=} opt_params
  * @return {!Promise<Page.PrintToPDFResult>}
  */
Page.prototype.printToPDF = function(opt_params) {
  return this.connection_.sendDevToolsMessage('Page.printToPDF', opt_params || {});
};

/**
  * Reloads given page optionally ignoring the cache.
  *
  * @param {Page.ReloadParams=} opt_params
  * @return {!Promise<Page.ReloadResult>}
  */
Page.prototype.reload = function(opt_params) {
  return this.connection_.sendDevToolsMessage('Page.reload', opt_params || {});
};

/**
  * Deprecated, please use removeScriptToEvaluateOnNewDocument instead.
  *
  * @param {Page.RemoveScriptToEvaluateOnLoadParams} params
  * @return {!Promise<Page.RemoveScriptToEvaluateOnLoadResult>}
  */
Page.prototype.removeScriptToEvaluateOnLoad = function(params) {
  return this.connection_.sendDevToolsMessage('Page.removeScriptToEvaluateOnLoad', params);
};

/**
  * Removes given script from the list.
  *
  * @param {Page.RemoveScriptToEvaluateOnNewDocumentParams} params
  * @return {!Promise<Page.RemoveScriptToEvaluateOnNewDocumentResult>}
  */
Page.prototype.removeScriptToEvaluateOnNewDocument = function(params) {
  return this.connection_.sendDevToolsMessage('Page.removeScriptToEvaluateOnNewDocument', params);
};

/**
  * @return {!Promise<Page.RequestAppBannerResult>}
  */
Page.prototype.requestAppBanner = function() {
  return this.connection_.sendDevToolsMessage('Page.requestAppBanner', {});
};

/**
  * Acknowledges that a screencast frame has been received by the frontend.
  *
  * @param {Page.ScreencastFrameAckParams} params
  * @return {!Promise<Page.ScreencastFrameAckResult>}
  */
Page.prototype.screencastFrameAck = function(params) {
  return this.connection_.sendDevToolsMessage('Page.screencastFrameAck', params);
};

/**
  * Searches for given string in resource content.
  *
  * @param {Page.SearchInResourceParams} params
  * @return {!Promise<Page.SearchInResourceResult>}
  */
Page.prototype.searchInResource = function(params) {
  return this.connection_.sendDevToolsMessage('Page.searchInResource', params);
};

/**
  * Enable Chrome's experimental ad filter on all sites.
  *
  * @param {Page.SetAdBlockingEnabledParams} params
  * @return {!Promise<Page.SetAdBlockingEnabledResult>}
  */
Page.prototype.setAdBlockingEnabled = function(params) {
  return this.connection_.sendDevToolsMessage('Page.setAdBlockingEnabled', params);
};

/**
  * Enable page Content Security Policy by-passing.
  *
  * @param {Page.SetBypassCSPParams} params
  * @return {!Promise<Page.SetBypassCSPResult>}
  */
Page.prototype.setBypassCSP = function(params) {
  return this.connection_.sendDevToolsMessage('Page.setBypassCSP', params);
};

/**
  * Overrides the values of device screen dimensions (window.screen.width, window.screen.height,
 * window.innerWidth, window.innerHeight, and "device-width"/"device-height"-related CSS media
 * query results).
  *
  * @param {Page.SetDeviceMetricsOverrideParams} params
  * @return {!Promise<Page.SetDeviceMetricsOverrideResult>}
  */
Page.prototype.setDeviceMetricsOverride = function(params) {
  return this.connection_.sendDevToolsMessage('Page.setDeviceMetricsOverride', params);
};

/**
  * Overrides the Device Orientation.
  *
  * @param {Page.SetDeviceOrientationOverrideParams} params
  * @return {!Promise<Page.SetDeviceOrientationOverrideResult>}
  */
Page.prototype.setDeviceOrientationOverride = function(params) {
  return this.connection_.sendDevToolsMessage('Page.setDeviceOrientationOverride', params);
};

/**
  * Sets given markup as the document's HTML.
  *
  * @param {Page.SetDocumentContentParams} params
  * @return {!Promise<Page.SetDocumentContentResult>}
  */
Page.prototype.setDocumentContent = function(params) {
  return this.connection_.sendDevToolsMessage('Page.setDocumentContent', params);
};

/**
  * Set the behavior when downloading a file.
  *
  * @param {Page.SetDownloadBehaviorParams} params
  * @return {!Promise<Page.SetDownloadBehaviorResult>}
  */
Page.prototype.setDownloadBehavior = function(params) {
  return this.connection_.sendDevToolsMessage('Page.setDownloadBehavior', params);
};

/**
  * Overrides the Geolocation Position or Error. Omitting any of the parameters emulates position
 * unavailable.
  *
  * @param {Page.SetGeolocationOverrideParams=} opt_params
  * @return {!Promise<Page.SetGeolocationOverrideResult>}
  */
Page.prototype.setGeolocationOverride = function(opt_params) {
  return this.connection_.sendDevToolsMessage('Page.setGeolocationOverride', opt_params || {});
};

/**
  * Controls whether page will emit lifecycle events.
  *
  * @param {Page.SetLifecycleEventsEnabledParams} params
  * @return {!Promise<Page.SetLifecycleEventsEnabledResult>}
  */
Page.prototype.setLifecycleEventsEnabled = function(params) {
  return this.connection_.sendDevToolsMessage('Page.setLifecycleEventsEnabled', params);
};

/**
  * Toggles mouse event-based touch event emulation.
  *
  * @param {Page.SetTouchEmulationEnabledParams} params
  * @return {!Promise<Page.SetTouchEmulationEnabledResult>}
  */
Page.prototype.setTouchEmulationEnabled = function(params) {
  return this.connection_.sendDevToolsMessage('Page.setTouchEmulationEnabled', params);
};

/**
  * Starts sending each frame using the `screencastFrame` event.
  *
  * @param {Page.StartScreencastParams=} opt_params
  * @return {!Promise<Page.StartScreencastResult>}
  */
Page.prototype.startScreencast = function(opt_params) {
  return this.connection_.sendDevToolsMessage('Page.startScreencast', opt_params || {});
};

/**
  * Force the page stop all navigations and pending resource fetches.
  *
  * @return {!Promise<Page.StopLoadingResult>}
  */
Page.prototype.stopLoading = function() {
  return this.connection_.sendDevToolsMessage('Page.stopLoading', {});
};

/**
  * Crashes renderer on the IO thread, generates minidumps.
  *
  * @return {!Promise<Page.CrashResult>}
  */
Page.prototype.crash = function() {
  return this.connection_.sendDevToolsMessage('Page.crash', {});
};

/**
  * Tries to close page, running its beforeunload hooks, if any.
  *
  * @return {!Promise<Page.CloseResult>}
  */
Page.prototype.close = function() {
  return this.connection_.sendDevToolsMessage('Page.close', {});
};

/**
  * Tries to update the web lifecycle state of the page.
 * It will transition the page to the given state according to:
 * https://github.com/WICG/web-lifecycle/
  *
  * @param {Page.SetWebLifecycleStateParams} params
  * @return {!Promise<Page.SetWebLifecycleStateResult>}
  */
Page.prototype.setWebLifecycleState = function(params) {
  return this.connection_.sendDevToolsMessage('Page.setWebLifecycleState', params);
};

/**
  * Stops sending each frame in the `screencastFrame`.
  *
  * @return {!Promise<Page.StopScreencastResult>}
  */
Page.prototype.stopScreencast = function() {
  return this.connection_.sendDevToolsMessage('Page.stopScreencast', {});
};


/**
  * @param {!function(!Page.DomContentEventFiredParams)} listener
  * @return {number} The id of this event listener.
  */
Page.prototype.onDomContentEventFired = function(listener) {
  return this.connection_.addEventListener(
      'Page.domContentEventFired', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when frame has been attached to its parent.
  *
  * @param {!function(!Page.FrameAttachedParams)} listener
  * @return {number} The id of this event listener.
  */
Page.prototype.onFrameAttached = function(listener) {
  return this.connection_.addEventListener(
      'Page.frameAttached', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when frame no longer has a scheduled navigation.
  *
  * @param {!function(!Page.FrameClearedScheduledNavigationParams)} listener
  * @return {number} The id of this event listener.
  */
Page.prototype.onFrameClearedScheduledNavigation = function(listener) {
  return this.connection_.addEventListener(
      'Page.frameClearedScheduledNavigation', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when frame has been detached from its parent.
  *
  * @param {!function(!Page.FrameDetachedParams)} listener
  * @return {number} The id of this event listener.
  */
Page.prototype.onFrameDetached = function(listener) {
  return this.connection_.addEventListener(
      'Page.frameDetached', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired once navigation of the frame has completed. Frame is now associated with the new loader.
  *
  * @param {!function(!Page.FrameNavigatedParams)} listener
  * @return {number} The id of this event listener.
  */
Page.prototype.onFrameNavigated = function(listener) {
  return this.connection_.addEventListener(
      'Page.frameNavigated', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * @param {!function()} listener
  * @return {number} The id of this event listener.
  */
Page.prototype.onFrameResized = function(listener) {
  return this.connection_.addEventListener(
      'Page.frameResized', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when frame schedules a potential navigation.
  *
  * @param {!function(!Page.FrameScheduledNavigationParams)} listener
  * @return {number} The id of this event listener.
  */
Page.prototype.onFrameScheduledNavigation = function(listener) {
  return this.connection_.addEventListener(
      'Page.frameScheduledNavigation', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when frame has started loading.
  *
  * @param {!function(!Page.FrameStartedLoadingParams)} listener
  * @return {number} The id of this event listener.
  */
Page.prototype.onFrameStartedLoading = function(listener) {
  return this.connection_.addEventListener(
      'Page.frameStartedLoading', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when frame has stopped loading.
  *
  * @param {!function(!Page.FrameStoppedLoadingParams)} listener
  * @return {number} The id of this event listener.
  */
Page.prototype.onFrameStoppedLoading = function(listener) {
  return this.connection_.addEventListener(
      'Page.frameStoppedLoading', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when interstitial page was hidden
  *
  * @param {!function()} listener
  * @return {number} The id of this event listener.
  */
Page.prototype.onInterstitialHidden = function(listener) {
  return this.connection_.addEventListener(
      'Page.interstitialHidden', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when interstitial page was shown
  *
  * @param {!function()} listener
  * @return {number} The id of this event listener.
  */
Page.prototype.onInterstitialShown = function(listener) {
  return this.connection_.addEventListener(
      'Page.interstitialShown', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when a JavaScript initiated dialog (alert, confirm, prompt, or onbeforeunload) has been
 * closed.
  *
  * @param {!function(!Page.JavascriptDialogClosedParams)} listener
  * @return {number} The id of this event listener.
  */
Page.prototype.onJavascriptDialogClosed = function(listener) {
  return this.connection_.addEventListener(
      'Page.javascriptDialogClosed', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when a JavaScript initiated dialog (alert, confirm, prompt, or onbeforeunload) is about to
 * open.
  *
  * @param {!function(!Page.JavascriptDialogOpeningParams)} listener
  * @return {number} The id of this event listener.
  */
Page.prototype.onJavascriptDialogOpening = function(listener) {
  return this.connection_.addEventListener(
      'Page.javascriptDialogOpening', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired for top level page lifecycle events such as navigation, load, paint, etc.
  *
  * @param {!function(!Page.LifecycleEventParams)} listener
  * @return {number} The id of this event listener.
  */
Page.prototype.onLifecycleEvent = function(listener) {
  return this.connection_.addEventListener(
      'Page.lifecycleEvent', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * @param {!function(!Page.LoadEventFiredParams)} listener
  * @return {number} The id of this event listener.
  */
Page.prototype.onLoadEventFired = function(listener) {
  return this.connection_.addEventListener(
      'Page.loadEventFired', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when same-document navigation happens, e.g. due to history API usage or anchor navigation.
  *
  * @param {!function(!Page.NavigatedWithinDocumentParams)} listener
  * @return {number} The id of this event listener.
  */
Page.prototype.onNavigatedWithinDocument = function(listener) {
  return this.connection_.addEventListener(
      'Page.navigatedWithinDocument', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Compressed image data requested by the `startScreencast`.
  *
  * @param {!function(!Page.ScreencastFrameParams)} listener
  * @return {number} The id of this event listener.
  */
Page.prototype.onScreencastFrame = function(listener) {
  return this.connection_.addEventListener(
      'Page.screencastFrame', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when the page with currently enabled screencast was shown or hidden `.
  *
  * @param {!function(!Page.ScreencastVisibilityChangedParams)} listener
  * @return {number} The id of this event listener.
  */
Page.prototype.onScreencastVisibilityChanged = function(listener) {
  return this.connection_.addEventListener(
      'Page.screencastVisibilityChanged', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when a new window is going to be opened, via window.open(), link click, form submission,
 * etc.
  *
  * @param {!function(!Page.WindowOpenParams)} listener
  * @return {number} The id of this event listener.
  */
Page.prototype.onWindowOpen = function(listener) {
  return this.connection_.addEventListener(
      'Page.windowOpen', /** @type {!function(!Object): undefined} */ (listener));
};

});  // goog.scope

