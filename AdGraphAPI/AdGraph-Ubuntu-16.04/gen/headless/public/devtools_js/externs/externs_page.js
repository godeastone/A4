// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * Experimental bindings for the Page DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalPage = function(connection) {};

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.ExperimentalPage.prototype.removeEventListener = function(id) {};

/**
 * Bindings for the Page DevTools Domain.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.Page = function(connection) {};

/** @type {!chromium.DevTools.ExperimentalPage} */
chromium.DevTools.Page.prototype.experimental;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.Page.prototype.removeEventListener = function(id) {};

/**
 * Resource type as it was perceived by the rendering engine.
 *
 * @enum {string}
 */
chromium.DevTools.Page.ResourceType = {
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
chromium.DevTools.Page.TransitionType = {
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
chromium.DevTools.Page.DialogType = {
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
chromium.DevTools.Page.CaptureScreenshotFormat = {
    JPEG: "jpeg",
    PNG: "png"
};

/**
 * Whether to allow all or deny all download requests, or use default Chrome behavior if
 * available (otherwise deny).
 *
 * @enum {string}
 */
chromium.DevTools.Page.SetDownloadBehaviorBehavior = {
    DENY: "deny",
    ALLOW: "allow",
    DEFAULT: "default"
};

/**
 * Touch/gesture events configuration. Default: current platform.
 *
 * @enum {string}
 */
chromium.DevTools.Page.SetTouchEmulationEnabledConfiguration = {
    MOBILE: "mobile",
    DESKTOP: "desktop"
};

/**
 * Image compression format.
 *
 * @enum {string}
 */
chromium.DevTools.Page.StartScreencastFormat = {
    JPEG: "jpeg",
    PNG: "png"
};

/**
 * Target lifecycle state
 *
 * @enum {string}
 */
chromium.DevTools.Page.SetWebLifecycleStateState = {
    FROZEN: "frozen",
    ACTIVE: "active"
};

/**
 * The reason for the navigation.
 *
 * @enum {string}
 */
chromium.DevTools.Page.FrameScheduledNavigationReason = {
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
chromium.DevTools.Page.Frame;

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
 *   type: !chromium.DevTools.Page.ResourceType,
 *   mimeType: string,
 *   lastModified: (number|undefined),
 *   contentSize: (number|undefined),
 *   failed: (boolean|undefined),
 *   canceled: (boolean|undefined)
 * }}
 */
chromium.DevTools.Page.FrameResource;

/**
 * Information about the Frame hierarchy along with their cached resources.
 *
 * frame: Frame information for this tree item.
 * childFrames: Child frames.
 * resources: Information about frame resources.
 *
 * @typedef {{
 *   frame: !chromium.DevTools.Page.Frame,
 *   childFrames: (!Array.<!chromium.DevTools.Page.FrameResourceTree>|undefined),
 *   resources: !Array.<!chromium.DevTools.Page.FrameResource>
 * }}
 */
chromium.DevTools.Page.FrameResourceTree;

/**
 * Information about the Frame hierarchy.
 *
 * frame: Frame information for this tree item.
 * childFrames: Child frames.
 *
 * @typedef {{
 *   frame: !chromium.DevTools.Page.Frame,
 *   childFrames: (!Array.<!chromium.DevTools.Page.FrameTree>|undefined)
 * }}
 */
chromium.DevTools.Page.FrameTree;

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
 *   transitionType: !chromium.DevTools.Page.TransitionType
 * }}
 */
chromium.DevTools.Page.NavigationEntry;

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
chromium.DevTools.Page.ScreencastFrameMetadata;

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
chromium.DevTools.Page.AppManifestError;

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
chromium.DevTools.Page.LayoutViewport;

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
chromium.DevTools.Page.VisualViewport;

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
chromium.DevTools.Page.Viewport;

/**
 * Parameters for the AddScriptToEvaluateOnLoad command.
 *
 *
 * @typedef {{
 *   scriptSource: string
 * }}
 */
chromium.DevTools.Page.AddScriptToEvaluateOnLoadParams;

/**
 * Result for the AddScriptToEvaluateOnLoad command.
 *
 * identifier: Identifier of the added script.
 *
 * @typedef {{
 *   identifier: string
 * }}
 */
chromium.DevTools.Page.AddScriptToEvaluateOnLoadResult;

/**
 * Parameters for the AddScriptToEvaluateOnNewDocument command.
 *
 *
 * @typedef {{
 *   source: string
 * }}
 */
chromium.DevTools.Page.AddScriptToEvaluateOnNewDocumentParams;

/**
 * Result for the AddScriptToEvaluateOnNewDocument command.
 *
 * identifier: Identifier of the added script.
 *
 * @typedef {{
 *   identifier: string
 * }}
 */
chromium.DevTools.Page.AddScriptToEvaluateOnNewDocumentResult;

/**
 * Parameters for the BringToFront command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Page.BringToFrontParams;

/**
 * Result for the BringToFront command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Page.BringToFrontResult;

/**
 * Parameters for the CaptureScreenshot command.
 *
 * format: Image compression format (defaults to png).
 * quality: Compression quality from range [0..100] (jpeg only).
 * clip: Capture the screenshot of a given region only.
 * fromSurface: Capture the screenshot from the surface, rather than the view. Defaults to true.
 *
 * @typedef {{
 *   format: (!chromium.DevTools.Page.CaptureScreenshotFormat|undefined),
 *   quality: (number|undefined),
 *   clip: (!chromium.DevTools.Page.Viewport|undefined),
 *   fromSurface: (boolean|undefined)
 * }}
 */
chromium.DevTools.Page.CaptureScreenshotParams;

/**
 * Result for the CaptureScreenshot command.
 *
 * data: Base64-encoded image data.
 *
 * @typedef {{
 *   data: string
 * }}
 */
chromium.DevTools.Page.CaptureScreenshotResult;

/**
 * Parameters for the ClearDeviceMetricsOverride command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Page.ClearDeviceMetricsOverrideParams;

/**
 * Result for the ClearDeviceMetricsOverride command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Page.ClearDeviceMetricsOverrideResult;

/**
 * Parameters for the ClearDeviceOrientationOverride command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Page.ClearDeviceOrientationOverrideParams;

/**
 * Result for the ClearDeviceOrientationOverride command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Page.ClearDeviceOrientationOverrideResult;

/**
 * Parameters for the ClearGeolocationOverride command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Page.ClearGeolocationOverrideParams;

/**
 * Result for the ClearGeolocationOverride command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Page.ClearGeolocationOverrideResult;

/**
 * Parameters for the CreateIsolatedWorld command.
 *
 * frameId: Id of the frame in which the isolated world should be created.
 * worldName: An optional name which is reported in the Execution Context.
 * grantUniveralAccess: Whether or not universal access should be granted to the isolated world. This is a powerful
 *    option, use with caution.
 *
 * @typedef {{
 *   frameId: string,
 *   worldName: (string|undefined),
 *   grantUniveralAccess: (boolean|undefined)
 * }}
 */
chromium.DevTools.Page.CreateIsolatedWorldParams;

/**
 * Result for the CreateIsolatedWorld command.
 *
 * executionContextId: Execution context of the isolated world.
 *
 * @typedef {{
 *   executionContextId: number
 * }}
 */
chromium.DevTools.Page.CreateIsolatedWorldResult;

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
chromium.DevTools.Page.DeleteCookieParams;

/**
 * Result for the DeleteCookie command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Page.DeleteCookieResult;

/**
 * Parameters for the Disable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Page.DisableParams;

/**
 * Result for the Disable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Page.DisableResult;

/**
 * Parameters for the Enable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Page.EnableParams;

/**
 * Result for the Enable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Page.EnableResult;

/**
 * Parameters for the GetAppManifest command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Page.GetAppManifestParams;

/**
 * Result for the GetAppManifest command.
 *
 * url: Manifest location.
 * data: Manifest content.
 *
 * @typedef {{
 *   url: string,
 *   errors: !Array.<!chromium.DevTools.Page.AppManifestError>,
 *   data: (string|undefined)
 * }}
 */
chromium.DevTools.Page.GetAppManifestResult;

/**
 * Parameters for the GetCookies command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Page.GetCookiesParams;

/**
 * Result for the GetCookies command.
 *
 * cookies: Array of cookie objects.
 *
 * @typedef {{
 *   cookies: !Array.<!chromium.DevTools.Network.Cookie>
 * }}
 */
chromium.DevTools.Page.GetCookiesResult;

/**
 * Parameters for the GetFrameTree command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Page.GetFrameTreeParams;

/**
 * Result for the GetFrameTree command.
 *
 * frameTree: Present frame tree structure.
 *
 * @typedef {{
 *   frameTree: !chromium.DevTools.Page.FrameTree
 * }}
 */
chromium.DevTools.Page.GetFrameTreeResult;

/**
 * Parameters for the GetLayoutMetrics command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Page.GetLayoutMetricsParams;

/**
 * Result for the GetLayoutMetrics command.
 *
 * layoutViewport: Metrics relating to the layout viewport.
 * visualViewport: Metrics relating to the visual viewport.
 * contentSize: Size of scrollable area.
 *
 * @typedef {{
 *   layoutViewport: !chromium.DevTools.Page.LayoutViewport,
 *   visualViewport: !chromium.DevTools.Page.VisualViewport,
 *   contentSize: !chromium.DevTools.DOM.Rect
 * }}
 */
chromium.DevTools.Page.GetLayoutMetricsResult;

/**
 * Parameters for the GetNavigationHistory command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Page.GetNavigationHistoryParams;

/**
 * Result for the GetNavigationHistory command.
 *
 * currentIndex: Index of the current navigation history entry.
 * entries: Array of navigation history entries.
 *
 * @typedef {{
 *   currentIndex: number,
 *   entries: !Array.<!chromium.DevTools.Page.NavigationEntry>
 * }}
 */
chromium.DevTools.Page.GetNavigationHistoryResult;

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
chromium.DevTools.Page.GetResourceContentParams;

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
chromium.DevTools.Page.GetResourceContentResult;

/**
 * Parameters for the GetResourceTree command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Page.GetResourceTreeParams;

/**
 * Result for the GetResourceTree command.
 *
 * frameTree: Present frame / resource tree structure.
 *
 * @typedef {{
 *   frameTree: !chromium.DevTools.Page.FrameResourceTree
 * }}
 */
chromium.DevTools.Page.GetResourceTreeResult;

/**
 * Parameters for the HandleJavaScriptDialog command.
 *
 * accept: Whether to accept or dismiss the dialog.
 * promptText: The text to enter into the dialog prompt before accepting. Used only if this is a prompt
 *    dialog.
 *
 * @typedef {{
 *   accept: boolean,
 *   promptText: (string|undefined)
 * }}
 */
chromium.DevTools.Page.HandleJavaScriptDialogParams;

/**
 * Result for the HandleJavaScriptDialog command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Page.HandleJavaScriptDialogResult;

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
 *   transitionType: (!chromium.DevTools.Page.TransitionType|undefined),
 *   frameId: (string|undefined)
 * }}
 */
chromium.DevTools.Page.NavigateParams;

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
chromium.DevTools.Page.NavigateResult;

/**
 * Parameters for the NavigateToHistoryEntry command.
 *
 * entryId: Unique id of the entry to navigate to.
 *
 * @typedef {{
 *   entryId: number
 * }}
 */
chromium.DevTools.Page.NavigateToHistoryEntryParams;

/**
 * Result for the NavigateToHistoryEntry command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Page.NavigateToHistoryEntryResult;

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
 *    print all pages.
 * ignoreInvalidPageRanges: Whether to silently ignore invalid but successfully parsed page ranges, such as '3-2'.
 *    Defaults to false.
 * headerTemplate: HTML template for the print header. Should be valid HTML markup with following
 *    classes used to inject printing values into them:
 *    - `date`: formatted print date
 *    - `title`: document title
 *    - `url`: document location
 *    - `pageNumber`: current page number
 *    - `totalPages`: total pages in the document
 *    
 *    For example, `<span class=title></span>` would generate span containing the title.
 * footerTemplate: HTML template for the print footer. Should use the same format as the `headerTemplate`.
 * preferCSSPageSize: Whether or not to prefer page size as defined by css. Defaults to false,
 *    in which case the content will be scaled to fit the paper size.
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
chromium.DevTools.Page.PrintToPDFParams;

/**
 * Result for the PrintToPDF command.
 *
 * data: Base64-encoded pdf data.
 *
 * @typedef {{
 *   data: string
 * }}
 */
chromium.DevTools.Page.PrintToPDFResult;

/**
 * Parameters for the Reload command.
 *
 * ignoreCache: If true, browser cache is ignored (as if the user pressed Shift+refresh).
 * scriptToEvaluateOnLoad: If set, the script will be injected into all frames of the inspected page after reload.
 *    Argument will be ignored if reloading dataURL origin.
 *
 * @typedef {{
 *   ignoreCache: (boolean|undefined),
 *   scriptToEvaluateOnLoad: (string|undefined)
 * }}
 */
chromium.DevTools.Page.ReloadParams;

/**
 * Result for the Reload command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Page.ReloadResult;

/**
 * Parameters for the RemoveScriptToEvaluateOnLoad command.
 *
 *
 * @typedef {{
 *   identifier: string
 * }}
 */
chromium.DevTools.Page.RemoveScriptToEvaluateOnLoadParams;

/**
 * Result for the RemoveScriptToEvaluateOnLoad command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Page.RemoveScriptToEvaluateOnLoadResult;

/**
 * Parameters for the RemoveScriptToEvaluateOnNewDocument command.
 *
 *
 * @typedef {{
 *   identifier: string
 * }}
 */
chromium.DevTools.Page.RemoveScriptToEvaluateOnNewDocumentParams;

/**
 * Result for the RemoveScriptToEvaluateOnNewDocument command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Page.RemoveScriptToEvaluateOnNewDocumentResult;

/**
 * Parameters for the RequestAppBanner command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Page.RequestAppBannerParams;

/**
 * Result for the RequestAppBanner command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Page.RequestAppBannerResult;

/**
 * Parameters for the ScreencastFrameAck command.
 *
 * sessionId: Frame number.
 *
 * @typedef {{
 *   sessionId: number
 * }}
 */
chromium.DevTools.Page.ScreencastFrameAckParams;

/**
 * Result for the ScreencastFrameAck command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Page.ScreencastFrameAckResult;

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
chromium.DevTools.Page.SearchInResourceParams;

/**
 * Result for the SearchInResource command.
 *
 * result: List of search matches.
 *
 * @typedef {{
 *   result: !Array.<!chromium.DevTools.Debugger.SearchMatch>
 * }}
 */
chromium.DevTools.Page.SearchInResourceResult;

/**
 * Parameters for the SetAdBlockingEnabled command.
 *
 * enabled: Whether to block ads.
 *
 * @typedef {{
 *   enabled: boolean
 * }}
 */
chromium.DevTools.Page.SetAdBlockingEnabledParams;

/**
 * Result for the SetAdBlockingEnabled command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Page.SetAdBlockingEnabledResult;

/**
 * Parameters for the SetBypassCSP command.
 *
 * enabled: Whether to bypass page CSP.
 *
 * @typedef {{
 *   enabled: boolean
 * }}
 */
chromium.DevTools.Page.SetBypassCSPParams;

/**
 * Result for the SetBypassCSP command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Page.SetBypassCSPResult;

/**
 * Parameters for the SetDeviceMetricsOverride command.
 *
 * width: Overriding width value in pixels (minimum 0, maximum 10000000). 0 disables the override.
 * height: Overriding height value in pixels (minimum 0, maximum 10000000). 0 disables the override.
 * deviceScaleFactor: Overriding device scale factor value. 0 disables the override.
 * mobile: Whether to emulate mobile device. This includes viewport meta tag, overlay scrollbars, text
 *    autosizing and more.
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
 *   viewport: (!chromium.DevTools.Page.Viewport|undefined)
 * }}
 */
chromium.DevTools.Page.SetDeviceMetricsOverrideParams;

/**
 * Result for the SetDeviceMetricsOverride command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Page.SetDeviceMetricsOverrideResult;

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
chromium.DevTools.Page.SetDeviceOrientationOverrideParams;

/**
 * Result for the SetDeviceOrientationOverride command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Page.SetDeviceOrientationOverrideResult;

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
chromium.DevTools.Page.SetDocumentContentParams;

/**
 * Result for the SetDocumentContent command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Page.SetDocumentContentResult;

/**
 * Parameters for the SetDownloadBehavior command.
 *
 * behavior: Whether to allow all or deny all download requests, or use default Chrome behavior if
 *    available (otherwise deny).
 * downloadPath: The default path to save downloaded files to. This is requred if behavior is set to 'allow'
 *
 * @typedef {{
 *   behavior: !chromium.DevTools.Page.SetDownloadBehaviorBehavior,
 *   downloadPath: (string|undefined)
 * }}
 */
chromium.DevTools.Page.SetDownloadBehaviorParams;

/**
 * Result for the SetDownloadBehavior command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Page.SetDownloadBehaviorResult;

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
chromium.DevTools.Page.SetGeolocationOverrideParams;

/**
 * Result for the SetGeolocationOverride command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Page.SetGeolocationOverrideResult;

/**
 * Parameters for the SetLifecycleEventsEnabled command.
 *
 * enabled: If true, starts emitting lifecycle events.
 *
 * @typedef {{
 *   enabled: boolean
 * }}
 */
chromium.DevTools.Page.SetLifecycleEventsEnabledParams;

/**
 * Result for the SetLifecycleEventsEnabled command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Page.SetLifecycleEventsEnabledResult;

/**
 * Parameters for the SetTouchEmulationEnabled command.
 *
 * enabled: Whether the touch event emulation should be enabled.
 * configuration: Touch/gesture events configuration. Default: current platform.
 *
 * @typedef {{
 *   enabled: boolean,
 *   configuration: (!chromium.DevTools.Page.SetTouchEmulationEnabledConfiguration|undefined)
 * }}
 */
chromium.DevTools.Page.SetTouchEmulationEnabledParams;

/**
 * Result for the SetTouchEmulationEnabled command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Page.SetTouchEmulationEnabledResult;

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
 *   format: (!chromium.DevTools.Page.StartScreencastFormat|undefined),
 *   quality: (number|undefined),
 *   maxWidth: (number|undefined),
 *   maxHeight: (number|undefined),
 *   everyNthFrame: (number|undefined)
 * }}
 */
chromium.DevTools.Page.StartScreencastParams;

/**
 * Result for the StartScreencast command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Page.StartScreencastResult;

/**
 * Parameters for the StopLoading command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Page.StopLoadingParams;

/**
 * Result for the StopLoading command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Page.StopLoadingResult;

/**
 * Parameters for the Crash command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Page.CrashParams;

/**
 * Result for the Crash command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Page.CrashResult;

/**
 * Parameters for the Close command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Page.CloseParams;

/**
 * Result for the Close command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Page.CloseResult;

/**
 * Parameters for the SetWebLifecycleState command.
 *
 * state: Target lifecycle state
 *
 * @typedef {{
 *   state: !chromium.DevTools.Page.SetWebLifecycleStateState
 * }}
 */
chromium.DevTools.Page.SetWebLifecycleStateParams;

/**
 * Result for the SetWebLifecycleState command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Page.SetWebLifecycleStateResult;

/**
 * Parameters for the StopScreencast command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Page.StopScreencastParams;

/**
 * Result for the StopScreencast command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Page.StopScreencastResult;

/**
 * Parameters for the DomContentEventFired event.
 *
 *
 * @typedef {{
 *   timestamp: number
 * }}
 */
chromium.DevTools.Page.DomContentEventFiredParams;

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
chromium.DevTools.Page.FrameAttachedParams;

/**
 * Parameters for the FrameClearedScheduledNavigation event.
 *
 * frameId: Id of the frame that has cleared its scheduled navigation.
 *
 * @typedef {{
 *   frameId: string
 * }}
 */
chromium.DevTools.Page.FrameClearedScheduledNavigationParams;

/**
 * Parameters for the FrameDetached event.
 *
 * frameId: Id of the frame that has been detached.
 *
 * @typedef {{
 *   frameId: string
 * }}
 */
chromium.DevTools.Page.FrameDetachedParams;

/**
 * Parameters for the FrameNavigated event.
 *
 * frame: Frame object.
 *
 * @typedef {{
 *   frame: !chromium.DevTools.Page.Frame
 * }}
 */
chromium.DevTools.Page.FrameNavigatedParams;

/**
 * Parameters for the FrameResized event.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Page.FrameResizedParams;

/**
 * Parameters for the FrameScheduledNavigation event.
 *
 * frameId: Id of the frame that has scheduled a navigation.
 * delay: Delay (in seconds) until the navigation is scheduled to begin. The navigation is not
 *    guaranteed to start.
 * reason: The reason for the navigation.
 * url: The destination URL for the scheduled navigation.
 *
 * @typedef {{
 *   frameId: string,
 *   delay: number,
 *   reason: !chromium.DevTools.Page.FrameScheduledNavigationReason,
 *   url: string
 * }}
 */
chromium.DevTools.Page.FrameScheduledNavigationParams;

/**
 * Parameters for the FrameStartedLoading event.
 *
 * frameId: Id of the frame that has started loading.
 *
 * @typedef {{
 *   frameId: string
 * }}
 */
chromium.DevTools.Page.FrameStartedLoadingParams;

/**
 * Parameters for the FrameStoppedLoading event.
 *
 * frameId: Id of the frame that has stopped loading.
 *
 * @typedef {{
 *   frameId: string
 * }}
 */
chromium.DevTools.Page.FrameStoppedLoadingParams;

/**
 * Parameters for the InterstitialHidden event.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Page.InterstitialHiddenParams;

/**
 * Parameters for the InterstitialShown event.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Page.InterstitialShownParams;

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
chromium.DevTools.Page.JavascriptDialogClosedParams;

/**
 * Parameters for the JavascriptDialogOpening event.
 *
 * url: Frame url.
 * message: Message that will be displayed by the dialog.
 * type: Dialog type.
 * hasBrowserHandler: True iff browser is capable showing or acting on the given dialog. When browser has no
 *    dialog handler for given target, calling alert while Page domain is engaged will stall
 *    the page execution. Execution can be resumed via calling Page.handleJavaScriptDialog.
 * defaultPrompt: Default dialog prompt.
 *
 * @typedef {{
 *   url: string,
 *   message: string,
 *   type: !chromium.DevTools.Page.DialogType,
 *   hasBrowserHandler: boolean,
 *   defaultPrompt: (string|undefined)
 * }}
 */
chromium.DevTools.Page.JavascriptDialogOpeningParams;

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
chromium.DevTools.Page.LifecycleEventParams;

/**
 * Parameters for the LoadEventFired event.
 *
 *
 * @typedef {{
 *   timestamp: number
 * }}
 */
chromium.DevTools.Page.LoadEventFiredParams;

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
chromium.DevTools.Page.NavigatedWithinDocumentParams;

/**
 * Parameters for the ScreencastFrame event.
 *
 * data: Base64-encoded compressed image.
 * metadata: Screencast frame metadata.
 * sessionId: Frame number.
 *
 * @typedef {{
 *   data: string,
 *   metadata: !chromium.DevTools.Page.ScreencastFrameMetadata,
 *   sessionId: number
 * }}
 */
chromium.DevTools.Page.ScreencastFrameParams;

/**
 * Parameters for the ScreencastVisibilityChanged event.
 *
 * visible: True if the page is visible.
 *
 * @typedef {{
 *   visible: boolean
 * }}
 */
chromium.DevTools.Page.ScreencastVisibilityChangedParams;

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
chromium.DevTools.Page.WindowOpenParams;



/**
  * Deprecated, please use addScriptToEvaluateOnNewDocument instead.
  *
  * @param {chromium.DevTools.Page.AddScriptToEvaluateOnLoadParams} params
  * @return {!Promise<chromium.DevTools.Page.AddScriptToEvaluateOnLoadResult>}
  */
chromium.DevTools.ExperimentalPage.prototype.addScriptToEvaluateOnLoad = function(params) {};

/**
  * Evaluates given script in every frame upon creation (before loading frame's scripts).
  *
  * @param {chromium.DevTools.Page.AddScriptToEvaluateOnNewDocumentParams} params
  * @return {!Promise<chromium.DevTools.Page.AddScriptToEvaluateOnNewDocumentResult>}
  */
chromium.DevTools.ExperimentalPage.prototype.addScriptToEvaluateOnNewDocument = function(params) {};

/**
  * Brings page to front (activates tab).
  *
  * @return {!Promise<chromium.DevTools.Page.BringToFrontResult>}
  */
chromium.DevTools.ExperimentalPage.prototype.bringToFront = function() {};

/**
  * Capture page screenshot.
  *
  * @param {chromium.DevTools.Page.CaptureScreenshotParams=} opt_params
  * @return {!Promise<chromium.DevTools.Page.CaptureScreenshotResult>}
  */
chromium.DevTools.ExperimentalPage.prototype.captureScreenshot = function(opt_params) {};

/**
  * Clears the overriden device metrics.
  *
  * @return {!Promise<chromium.DevTools.Page.ClearDeviceMetricsOverrideResult>}
  */
chromium.DevTools.ExperimentalPage.prototype.clearDeviceMetricsOverride = function() {};

/**
  * Clears the overridden Device Orientation.
  *
  * @return {!Promise<chromium.DevTools.Page.ClearDeviceOrientationOverrideResult>}
  */
chromium.DevTools.ExperimentalPage.prototype.clearDeviceOrientationOverride = function() {};

/**
  * Clears the overriden Geolocation Position and Error.
  *
  * @return {!Promise<chromium.DevTools.Page.ClearGeolocationOverrideResult>}
  */
chromium.DevTools.ExperimentalPage.prototype.clearGeolocationOverride = function() {};

/**
  * Creates an isolated world for the given frame.
  *
  * @param {chromium.DevTools.Page.CreateIsolatedWorldParams} params
  * @return {!Promise<chromium.DevTools.Page.CreateIsolatedWorldResult>}
  */
chromium.DevTools.ExperimentalPage.prototype.createIsolatedWorld = function(params) {};

/**
  * Deletes browser cookie with given name, domain and path.
  *
  * @param {chromium.DevTools.Page.DeleteCookieParams} params
  * @return {!Promise<chromium.DevTools.Page.DeleteCookieResult>}
  */
chromium.DevTools.ExperimentalPage.prototype.deleteCookie = function(params) {};

/**
  * Disables page domain notifications.
  *
  * @return {!Promise<chromium.DevTools.Page.DisableResult>}
  */
chromium.DevTools.ExperimentalPage.prototype.disable = function() {};

/**
  * Enables page domain notifications.
  *
  * @return {!Promise<chromium.DevTools.Page.EnableResult>}
  */
chromium.DevTools.ExperimentalPage.prototype.enable = function() {};

/**
  * @return {!Promise<chromium.DevTools.Page.GetAppManifestResult>}
  */
chromium.DevTools.ExperimentalPage.prototype.getAppManifest = function() {};

/**
  * Returns all browser cookies. Depending on the backend support, will return detailed cookie
 * information in the `cookies` field.
  *
  * @return {!Promise<chromium.DevTools.Page.GetCookiesResult>}
  */
chromium.DevTools.ExperimentalPage.prototype.getCookies = function() {};

/**
  * Returns present frame tree structure.
  *
  * @return {!Promise<chromium.DevTools.Page.GetFrameTreeResult>}
  */
chromium.DevTools.ExperimentalPage.prototype.getFrameTree = function() {};

/**
  * Returns metrics relating to the layouting of the page, such as viewport bounds/scale.
  *
  * @return {!Promise<chromium.DevTools.Page.GetLayoutMetricsResult>}
  */
chromium.DevTools.ExperimentalPage.prototype.getLayoutMetrics = function() {};

/**
  * Returns navigation history for the current page.
  *
  * @return {!Promise<chromium.DevTools.Page.GetNavigationHistoryResult>}
  */
chromium.DevTools.ExperimentalPage.prototype.getNavigationHistory = function() {};

/**
  * Returns content of the given resource.
  *
  * @param {chromium.DevTools.Page.GetResourceContentParams} params
  * @return {!Promise<chromium.DevTools.Page.GetResourceContentResult>}
  */
chromium.DevTools.ExperimentalPage.prototype.getResourceContent = function(params) {};

/**
  * Returns present frame / resource tree structure.
  *
  * @return {!Promise<chromium.DevTools.Page.GetResourceTreeResult>}
  */
chromium.DevTools.ExperimentalPage.prototype.getResourceTree = function() {};

/**
  * Accepts or dismisses a JavaScript initiated dialog (alert, confirm, prompt, or onbeforeunload).
  *
  * @param {chromium.DevTools.Page.HandleJavaScriptDialogParams} params
  * @return {!Promise<chromium.DevTools.Page.HandleJavaScriptDialogResult>}
  */
chromium.DevTools.ExperimentalPage.prototype.handleJavaScriptDialog = function(params) {};

/**
  * Navigates current page to the given URL.
  *
  * @param {chromium.DevTools.Page.NavigateParams} params
  * @return {!Promise<chromium.DevTools.Page.NavigateResult>}
  */
chromium.DevTools.ExperimentalPage.prototype.navigate = function(params) {};

/**
  * Navigates current page to the given history entry.
  *
  * @param {chromium.DevTools.Page.NavigateToHistoryEntryParams} params
  * @return {!Promise<chromium.DevTools.Page.NavigateToHistoryEntryResult>}
  */
chromium.DevTools.ExperimentalPage.prototype.navigateToHistoryEntry = function(params) {};

/**
  * Print page as PDF.
  *
  * @param {chromium.DevTools.Page.PrintToPDFParams=} opt_params
  * @return {!Promise<chromium.DevTools.Page.PrintToPDFResult>}
  */
chromium.DevTools.ExperimentalPage.prototype.printToPDF = function(opt_params) {};

/**
  * Reloads given page optionally ignoring the cache.
  *
  * @param {chromium.DevTools.Page.ReloadParams=} opt_params
  * @return {!Promise<chromium.DevTools.Page.ReloadResult>}
  */
chromium.DevTools.ExperimentalPage.prototype.reload = function(opt_params) {};

/**
  * Deprecated, please use removeScriptToEvaluateOnNewDocument instead.
  *
  * @param {chromium.DevTools.Page.RemoveScriptToEvaluateOnLoadParams} params
  * @return {!Promise<chromium.DevTools.Page.RemoveScriptToEvaluateOnLoadResult>}
  */
chromium.DevTools.ExperimentalPage.prototype.removeScriptToEvaluateOnLoad = function(params) {};

/**
  * Removes given script from the list.
  *
  * @param {chromium.DevTools.Page.RemoveScriptToEvaluateOnNewDocumentParams} params
  * @return {!Promise<chromium.DevTools.Page.RemoveScriptToEvaluateOnNewDocumentResult>}
  */
chromium.DevTools.ExperimentalPage.prototype.removeScriptToEvaluateOnNewDocument = function(params) {};

/**
  * @return {!Promise<chromium.DevTools.Page.RequestAppBannerResult>}
  */
chromium.DevTools.ExperimentalPage.prototype.requestAppBanner = function() {};

/**
  * Acknowledges that a screencast frame has been received by the frontend.
  *
  * @param {chromium.DevTools.Page.ScreencastFrameAckParams} params
  * @return {!Promise<chromium.DevTools.Page.ScreencastFrameAckResult>}
  */
chromium.DevTools.ExperimentalPage.prototype.screencastFrameAck = function(params) {};

/**
  * Searches for given string in resource content.
  *
  * @param {chromium.DevTools.Page.SearchInResourceParams} params
  * @return {!Promise<chromium.DevTools.Page.SearchInResourceResult>}
  */
chromium.DevTools.ExperimentalPage.prototype.searchInResource = function(params) {};

/**
  * Enable Chrome's experimental ad filter on all sites.
  *
  * @param {chromium.DevTools.Page.SetAdBlockingEnabledParams} params
  * @return {!Promise<chromium.DevTools.Page.SetAdBlockingEnabledResult>}
  */
chromium.DevTools.ExperimentalPage.prototype.setAdBlockingEnabled = function(params) {};

/**
  * Enable page Content Security Policy by-passing.
  *
  * @param {chromium.DevTools.Page.SetBypassCSPParams} params
  * @return {!Promise<chromium.DevTools.Page.SetBypassCSPResult>}
  */
chromium.DevTools.ExperimentalPage.prototype.setBypassCSP = function(params) {};

/**
  * Overrides the values of device screen dimensions (window.screen.width, window.screen.height,
 * window.innerWidth, window.innerHeight, and "device-width"/"device-height"-related CSS media
 * query results).
  *
  * @param {chromium.DevTools.Page.SetDeviceMetricsOverrideParams} params
  * @return {!Promise<chromium.DevTools.Page.SetDeviceMetricsOverrideResult>}
  */
chromium.DevTools.ExperimentalPage.prototype.setDeviceMetricsOverride = function(params) {};

/**
  * Overrides the Device Orientation.
  *
  * @param {chromium.DevTools.Page.SetDeviceOrientationOverrideParams} params
  * @return {!Promise<chromium.DevTools.Page.SetDeviceOrientationOverrideResult>}
  */
chromium.DevTools.ExperimentalPage.prototype.setDeviceOrientationOverride = function(params) {};

/**
  * Sets given markup as the document's HTML.
  *
  * @param {chromium.DevTools.Page.SetDocumentContentParams} params
  * @return {!Promise<chromium.DevTools.Page.SetDocumentContentResult>}
  */
chromium.DevTools.ExperimentalPage.prototype.setDocumentContent = function(params) {};

/**
  * Set the behavior when downloading a file.
  *
  * @param {chromium.DevTools.Page.SetDownloadBehaviorParams} params
  * @return {!Promise<chromium.DevTools.Page.SetDownloadBehaviorResult>}
  */
chromium.DevTools.ExperimentalPage.prototype.setDownloadBehavior = function(params) {};

/**
  * Overrides the Geolocation Position or Error. Omitting any of the parameters emulates position
 * unavailable.
  *
  * @param {chromium.DevTools.Page.SetGeolocationOverrideParams=} opt_params
  * @return {!Promise<chromium.DevTools.Page.SetGeolocationOverrideResult>}
  */
chromium.DevTools.ExperimentalPage.prototype.setGeolocationOverride = function(opt_params) {};

/**
  * Controls whether page will emit lifecycle events.
  *
  * @param {chromium.DevTools.Page.SetLifecycleEventsEnabledParams} params
  * @return {!Promise<chromium.DevTools.Page.SetLifecycleEventsEnabledResult>}
  */
chromium.DevTools.ExperimentalPage.prototype.setLifecycleEventsEnabled = function(params) {};

/**
  * Toggles mouse event-based touch event emulation.
  *
  * @param {chromium.DevTools.Page.SetTouchEmulationEnabledParams} params
  * @return {!Promise<chromium.DevTools.Page.SetTouchEmulationEnabledResult>}
  */
chromium.DevTools.ExperimentalPage.prototype.setTouchEmulationEnabled = function(params) {};

/**
  * Starts sending each frame using the `screencastFrame` event.
  *
  * @param {chromium.DevTools.Page.StartScreencastParams=} opt_params
  * @return {!Promise<chromium.DevTools.Page.StartScreencastResult>}
  */
chromium.DevTools.ExperimentalPage.prototype.startScreencast = function(opt_params) {};

/**
  * Force the page stop all navigations and pending resource fetches.
  *
  * @return {!Promise<chromium.DevTools.Page.StopLoadingResult>}
  */
chromium.DevTools.ExperimentalPage.prototype.stopLoading = function() {};

/**
  * Crashes renderer on the IO thread, generates minidumps.
  *
  * @return {!Promise<chromium.DevTools.Page.CrashResult>}
  */
chromium.DevTools.ExperimentalPage.prototype.crash = function() {};

/**
  * Tries to close page, running its beforeunload hooks, if any.
  *
  * @return {!Promise<chromium.DevTools.Page.CloseResult>}
  */
chromium.DevTools.ExperimentalPage.prototype.close = function() {};

/**
  * Tries to update the web lifecycle state of the page.
 * It will transition the page to the given state according to:
 * https://github.com/WICG/web-lifecycle/
  *
  * @param {chromium.DevTools.Page.SetWebLifecycleStateParams} params
  * @return {!Promise<chromium.DevTools.Page.SetWebLifecycleStateResult>}
  */
chromium.DevTools.ExperimentalPage.prototype.setWebLifecycleState = function(params) {};

/**
  * Stops sending each frame in the `screencastFrame`.
  *
  * @return {!Promise<chromium.DevTools.Page.StopScreencastResult>}
  */
chromium.DevTools.ExperimentalPage.prototype.stopScreencast = function() {};


/**
  * @param {!function(!chromium.DevTools.Page.DomContentEventFiredParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalPage.prototype.onDomContentEventFired = function(listener) {};

/**
  * Fired when frame has been attached to its parent.
  *
  * @param {!function(!chromium.DevTools.Page.FrameAttachedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalPage.prototype.onFrameAttached = function(listener) {};

/**
  * Fired when frame no longer has a scheduled navigation.
  *
  * @param {!function(!chromium.DevTools.Page.FrameClearedScheduledNavigationParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalPage.prototype.onFrameClearedScheduledNavigation = function(listener) {};

/**
  * Fired when frame has been detached from its parent.
  *
  * @param {!function(!chromium.DevTools.Page.FrameDetachedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalPage.prototype.onFrameDetached = function(listener) {};

/**
  * Fired once navigation of the frame has completed. Frame is now associated with the new loader.
  *
  * @param {!function(!chromium.DevTools.Page.FrameNavigatedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalPage.prototype.onFrameNavigated = function(listener) {};

/**
  * @param {!function()} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalPage.prototype.onFrameResized = function(listener) {};

/**
  * Fired when frame schedules a potential navigation.
  *
  * @param {!function(!chromium.DevTools.Page.FrameScheduledNavigationParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalPage.prototype.onFrameScheduledNavigation = function(listener) {};

/**
  * Fired when frame has started loading.
  *
  * @param {!function(!chromium.DevTools.Page.FrameStartedLoadingParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalPage.prototype.onFrameStartedLoading = function(listener) {};

/**
  * Fired when frame has stopped loading.
  *
  * @param {!function(!chromium.DevTools.Page.FrameStoppedLoadingParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalPage.prototype.onFrameStoppedLoading = function(listener) {};

/**
  * Fired when interstitial page was hidden
  *
  * @param {!function()} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalPage.prototype.onInterstitialHidden = function(listener) {};

/**
  * Fired when interstitial page was shown
  *
  * @param {!function()} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalPage.prototype.onInterstitialShown = function(listener) {};

/**
  * Fired when a JavaScript initiated dialog (alert, confirm, prompt, or onbeforeunload) has been
 * closed.
  *
  * @param {!function(!chromium.DevTools.Page.JavascriptDialogClosedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalPage.prototype.onJavascriptDialogClosed = function(listener) {};

/**
  * Fired when a JavaScript initiated dialog (alert, confirm, prompt, or onbeforeunload) is about to
 * open.
  *
  * @param {!function(!chromium.DevTools.Page.JavascriptDialogOpeningParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalPage.prototype.onJavascriptDialogOpening = function(listener) {};

/**
  * Fired for top level page lifecycle events such as navigation, load, paint, etc.
  *
  * @param {!function(!chromium.DevTools.Page.LifecycleEventParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalPage.prototype.onLifecycleEvent = function(listener) {};

/**
  * @param {!function(!chromium.DevTools.Page.LoadEventFiredParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalPage.prototype.onLoadEventFired = function(listener) {};

/**
  * Fired when same-document navigation happens, e.g. due to history API usage or anchor navigation.
  *
  * @param {!function(!chromium.DevTools.Page.NavigatedWithinDocumentParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalPage.prototype.onNavigatedWithinDocument = function(listener) {};

/**
  * Compressed image data requested by the `startScreencast`.
  *
  * @param {!function(!chromium.DevTools.Page.ScreencastFrameParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalPage.prototype.onScreencastFrame = function(listener) {};

/**
  * Fired when the page with currently enabled screencast was shown or hidden `.
  *
  * @param {!function(!chromium.DevTools.Page.ScreencastVisibilityChangedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalPage.prototype.onScreencastVisibilityChanged = function(listener) {};

/**
  * Fired when a new window is going to be opened, via window.open(), link click, form submission,
 * etc.
  *
  * @param {!function(!chromium.DevTools.Page.WindowOpenParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalPage.prototype.onWindowOpen = function(listener) {};



/**
  * Deprecated, please use addScriptToEvaluateOnNewDocument instead.
  *
  * @param {chromium.DevTools.Page.AddScriptToEvaluateOnLoadParams} params
  * @return {!Promise<chromium.DevTools.Page.AddScriptToEvaluateOnLoadResult>}
  */
chromium.DevTools.Page.prototype.addScriptToEvaluateOnLoad = function(params) {};

/**
  * Evaluates given script in every frame upon creation (before loading frame's scripts).
  *
  * @param {chromium.DevTools.Page.AddScriptToEvaluateOnNewDocumentParams} params
  * @return {!Promise<chromium.DevTools.Page.AddScriptToEvaluateOnNewDocumentResult>}
  */
chromium.DevTools.Page.prototype.addScriptToEvaluateOnNewDocument = function(params) {};

/**
  * Brings page to front (activates tab).
  *
  * @return {!Promise<chromium.DevTools.Page.BringToFrontResult>}
  */
chromium.DevTools.Page.prototype.bringToFront = function() {};

/**
  * Capture page screenshot.
  *
  * @param {chromium.DevTools.Page.CaptureScreenshotParams=} opt_params
  * @return {!Promise<chromium.DevTools.Page.CaptureScreenshotResult>}
  */
chromium.DevTools.Page.prototype.captureScreenshot = function(opt_params) {};

/**
  * Clears the overriden device metrics.
  *
  * @return {!Promise<chromium.DevTools.Page.ClearDeviceMetricsOverrideResult>}
  */
chromium.DevTools.Page.prototype.clearDeviceMetricsOverride = function() {};

/**
  * Clears the overridden Device Orientation.
  *
  * @return {!Promise<chromium.DevTools.Page.ClearDeviceOrientationOverrideResult>}
  */
chromium.DevTools.Page.prototype.clearDeviceOrientationOverride = function() {};

/**
  * Clears the overriden Geolocation Position and Error.
  *
  * @return {!Promise<chromium.DevTools.Page.ClearGeolocationOverrideResult>}
  */
chromium.DevTools.Page.prototype.clearGeolocationOverride = function() {};

/**
  * Creates an isolated world for the given frame.
  *
  * @param {chromium.DevTools.Page.CreateIsolatedWorldParams} params
  * @return {!Promise<chromium.DevTools.Page.CreateIsolatedWorldResult>}
  */
chromium.DevTools.Page.prototype.createIsolatedWorld = function(params) {};

/**
  * Deletes browser cookie with given name, domain and path.
  *
  * @param {chromium.DevTools.Page.DeleteCookieParams} params
  * @return {!Promise<chromium.DevTools.Page.DeleteCookieResult>}
  */
chromium.DevTools.Page.prototype.deleteCookie = function(params) {};

/**
  * Disables page domain notifications.
  *
  * @return {!Promise<chromium.DevTools.Page.DisableResult>}
  */
chromium.DevTools.Page.prototype.disable = function() {};

/**
  * Enables page domain notifications.
  *
  * @return {!Promise<chromium.DevTools.Page.EnableResult>}
  */
chromium.DevTools.Page.prototype.enable = function() {};

/**
  * @return {!Promise<chromium.DevTools.Page.GetAppManifestResult>}
  */
chromium.DevTools.Page.prototype.getAppManifest = function() {};

/**
  * Returns all browser cookies. Depending on the backend support, will return detailed cookie
 * information in the `cookies` field.
  *
  * @return {!Promise<chromium.DevTools.Page.GetCookiesResult>}
  */
chromium.DevTools.Page.prototype.getCookies = function() {};

/**
  * Returns present frame tree structure.
  *
  * @return {!Promise<chromium.DevTools.Page.GetFrameTreeResult>}
  */
chromium.DevTools.Page.prototype.getFrameTree = function() {};

/**
  * Returns metrics relating to the layouting of the page, such as viewport bounds/scale.
  *
  * @return {!Promise<chromium.DevTools.Page.GetLayoutMetricsResult>}
  */
chromium.DevTools.Page.prototype.getLayoutMetrics = function() {};

/**
  * Returns navigation history for the current page.
  *
  * @return {!Promise<chromium.DevTools.Page.GetNavigationHistoryResult>}
  */
chromium.DevTools.Page.prototype.getNavigationHistory = function() {};

/**
  * Returns content of the given resource.
  *
  * @param {chromium.DevTools.Page.GetResourceContentParams} params
  * @return {!Promise<chromium.DevTools.Page.GetResourceContentResult>}
  */
chromium.DevTools.Page.prototype.getResourceContent = function(params) {};

/**
  * Returns present frame / resource tree structure.
  *
  * @return {!Promise<chromium.DevTools.Page.GetResourceTreeResult>}
  */
chromium.DevTools.Page.prototype.getResourceTree = function() {};

/**
  * Accepts or dismisses a JavaScript initiated dialog (alert, confirm, prompt, or onbeforeunload).
  *
  * @param {chromium.DevTools.Page.HandleJavaScriptDialogParams} params
  * @return {!Promise<chromium.DevTools.Page.HandleJavaScriptDialogResult>}
  */
chromium.DevTools.Page.prototype.handleJavaScriptDialog = function(params) {};

/**
  * Navigates current page to the given URL.
  *
  * @param {chromium.DevTools.Page.NavigateParams} params
  * @return {!Promise<chromium.DevTools.Page.NavigateResult>}
  */
chromium.DevTools.Page.prototype.navigate = function(params) {};

/**
  * Navigates current page to the given history entry.
  *
  * @param {chromium.DevTools.Page.NavigateToHistoryEntryParams} params
  * @return {!Promise<chromium.DevTools.Page.NavigateToHistoryEntryResult>}
  */
chromium.DevTools.Page.prototype.navigateToHistoryEntry = function(params) {};

/**
  * Print page as PDF.
  *
  * @param {chromium.DevTools.Page.PrintToPDFParams=} opt_params
  * @return {!Promise<chromium.DevTools.Page.PrintToPDFResult>}
  */
chromium.DevTools.Page.prototype.printToPDF = function(opt_params) {};

/**
  * Reloads given page optionally ignoring the cache.
  *
  * @param {chromium.DevTools.Page.ReloadParams=} opt_params
  * @return {!Promise<chromium.DevTools.Page.ReloadResult>}
  */
chromium.DevTools.Page.prototype.reload = function(opt_params) {};

/**
  * Deprecated, please use removeScriptToEvaluateOnNewDocument instead.
  *
  * @param {chromium.DevTools.Page.RemoveScriptToEvaluateOnLoadParams} params
  * @return {!Promise<chromium.DevTools.Page.RemoveScriptToEvaluateOnLoadResult>}
  */
chromium.DevTools.Page.prototype.removeScriptToEvaluateOnLoad = function(params) {};

/**
  * Removes given script from the list.
  *
  * @param {chromium.DevTools.Page.RemoveScriptToEvaluateOnNewDocumentParams} params
  * @return {!Promise<chromium.DevTools.Page.RemoveScriptToEvaluateOnNewDocumentResult>}
  */
chromium.DevTools.Page.prototype.removeScriptToEvaluateOnNewDocument = function(params) {};

/**
  * @return {!Promise<chromium.DevTools.Page.RequestAppBannerResult>}
  */
chromium.DevTools.Page.prototype.requestAppBanner = function() {};

/**
  * Acknowledges that a screencast frame has been received by the frontend.
  *
  * @param {chromium.DevTools.Page.ScreencastFrameAckParams} params
  * @return {!Promise<chromium.DevTools.Page.ScreencastFrameAckResult>}
  */
chromium.DevTools.Page.prototype.screencastFrameAck = function(params) {};

/**
  * Searches for given string in resource content.
  *
  * @param {chromium.DevTools.Page.SearchInResourceParams} params
  * @return {!Promise<chromium.DevTools.Page.SearchInResourceResult>}
  */
chromium.DevTools.Page.prototype.searchInResource = function(params) {};

/**
  * Enable Chrome's experimental ad filter on all sites.
  *
  * @param {chromium.DevTools.Page.SetAdBlockingEnabledParams} params
  * @return {!Promise<chromium.DevTools.Page.SetAdBlockingEnabledResult>}
  */
chromium.DevTools.Page.prototype.setAdBlockingEnabled = function(params) {};

/**
  * Enable page Content Security Policy by-passing.
  *
  * @param {chromium.DevTools.Page.SetBypassCSPParams} params
  * @return {!Promise<chromium.DevTools.Page.SetBypassCSPResult>}
  */
chromium.DevTools.Page.prototype.setBypassCSP = function(params) {};

/**
  * Overrides the values of device screen dimensions (window.screen.width, window.screen.height,
 * window.innerWidth, window.innerHeight, and "device-width"/"device-height"-related CSS media
 * query results).
  *
  * @param {chromium.DevTools.Page.SetDeviceMetricsOverrideParams} params
  * @return {!Promise<chromium.DevTools.Page.SetDeviceMetricsOverrideResult>}
  */
chromium.DevTools.Page.prototype.setDeviceMetricsOverride = function(params) {};

/**
  * Overrides the Device Orientation.
  *
  * @param {chromium.DevTools.Page.SetDeviceOrientationOverrideParams} params
  * @return {!Promise<chromium.DevTools.Page.SetDeviceOrientationOverrideResult>}
  */
chromium.DevTools.Page.prototype.setDeviceOrientationOverride = function(params) {};

/**
  * Sets given markup as the document's HTML.
  *
  * @param {chromium.DevTools.Page.SetDocumentContentParams} params
  * @return {!Promise<chromium.DevTools.Page.SetDocumentContentResult>}
  */
chromium.DevTools.Page.prototype.setDocumentContent = function(params) {};

/**
  * Set the behavior when downloading a file.
  *
  * @param {chromium.DevTools.Page.SetDownloadBehaviorParams} params
  * @return {!Promise<chromium.DevTools.Page.SetDownloadBehaviorResult>}
  */
chromium.DevTools.Page.prototype.setDownloadBehavior = function(params) {};

/**
  * Overrides the Geolocation Position or Error. Omitting any of the parameters emulates position
 * unavailable.
  *
  * @param {chromium.DevTools.Page.SetGeolocationOverrideParams=} opt_params
  * @return {!Promise<chromium.DevTools.Page.SetGeolocationOverrideResult>}
  */
chromium.DevTools.Page.prototype.setGeolocationOverride = function(opt_params) {};

/**
  * Controls whether page will emit lifecycle events.
  *
  * @param {chromium.DevTools.Page.SetLifecycleEventsEnabledParams} params
  * @return {!Promise<chromium.DevTools.Page.SetLifecycleEventsEnabledResult>}
  */
chromium.DevTools.Page.prototype.setLifecycleEventsEnabled = function(params) {};

/**
  * Toggles mouse event-based touch event emulation.
  *
  * @param {chromium.DevTools.Page.SetTouchEmulationEnabledParams} params
  * @return {!Promise<chromium.DevTools.Page.SetTouchEmulationEnabledResult>}
  */
chromium.DevTools.Page.prototype.setTouchEmulationEnabled = function(params) {};

/**
  * Starts sending each frame using the `screencastFrame` event.
  *
  * @param {chromium.DevTools.Page.StartScreencastParams=} opt_params
  * @return {!Promise<chromium.DevTools.Page.StartScreencastResult>}
  */
chromium.DevTools.Page.prototype.startScreencast = function(opt_params) {};

/**
  * Force the page stop all navigations and pending resource fetches.
  *
  * @return {!Promise<chromium.DevTools.Page.StopLoadingResult>}
  */
chromium.DevTools.Page.prototype.stopLoading = function() {};

/**
  * Crashes renderer on the IO thread, generates minidumps.
  *
  * @return {!Promise<chromium.DevTools.Page.CrashResult>}
  */
chromium.DevTools.Page.prototype.crash = function() {};

/**
  * Tries to close page, running its beforeunload hooks, if any.
  *
  * @return {!Promise<chromium.DevTools.Page.CloseResult>}
  */
chromium.DevTools.Page.prototype.close = function() {};

/**
  * Tries to update the web lifecycle state of the page.
 * It will transition the page to the given state according to:
 * https://github.com/WICG/web-lifecycle/
  *
  * @param {chromium.DevTools.Page.SetWebLifecycleStateParams} params
  * @return {!Promise<chromium.DevTools.Page.SetWebLifecycleStateResult>}
  */
chromium.DevTools.Page.prototype.setWebLifecycleState = function(params) {};

/**
  * Stops sending each frame in the `screencastFrame`.
  *
  * @return {!Promise<chromium.DevTools.Page.StopScreencastResult>}
  */
chromium.DevTools.Page.prototype.stopScreencast = function() {};


/**
  * @param {!function(!chromium.DevTools.Page.DomContentEventFiredParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Page.prototype.onDomContentEventFired = function(listener) {};

/**
  * Fired when frame has been attached to its parent.
  *
  * @param {!function(!chromium.DevTools.Page.FrameAttachedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Page.prototype.onFrameAttached = function(listener) {};

/**
  * Fired when frame no longer has a scheduled navigation.
  *
  * @param {!function(!chromium.DevTools.Page.FrameClearedScheduledNavigationParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Page.prototype.onFrameClearedScheduledNavigation = function(listener) {};

/**
  * Fired when frame has been detached from its parent.
  *
  * @param {!function(!chromium.DevTools.Page.FrameDetachedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Page.prototype.onFrameDetached = function(listener) {};

/**
  * Fired once navigation of the frame has completed. Frame is now associated with the new loader.
  *
  * @param {!function(!chromium.DevTools.Page.FrameNavigatedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Page.prototype.onFrameNavigated = function(listener) {};

/**
  * @param {!function()} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Page.prototype.onFrameResized = function(listener) {};

/**
  * Fired when frame schedules a potential navigation.
  *
  * @param {!function(!chromium.DevTools.Page.FrameScheduledNavigationParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Page.prototype.onFrameScheduledNavigation = function(listener) {};

/**
  * Fired when frame has started loading.
  *
  * @param {!function(!chromium.DevTools.Page.FrameStartedLoadingParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Page.prototype.onFrameStartedLoading = function(listener) {};

/**
  * Fired when frame has stopped loading.
  *
  * @param {!function(!chromium.DevTools.Page.FrameStoppedLoadingParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Page.prototype.onFrameStoppedLoading = function(listener) {};

/**
  * Fired when interstitial page was hidden
  *
  * @param {!function()} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Page.prototype.onInterstitialHidden = function(listener) {};

/**
  * Fired when interstitial page was shown
  *
  * @param {!function()} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Page.prototype.onInterstitialShown = function(listener) {};

/**
  * Fired when a JavaScript initiated dialog (alert, confirm, prompt, or onbeforeunload) has been
 * closed.
  *
  * @param {!function(!chromium.DevTools.Page.JavascriptDialogClosedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Page.prototype.onJavascriptDialogClosed = function(listener) {};

/**
  * Fired when a JavaScript initiated dialog (alert, confirm, prompt, or onbeforeunload) is about to
 * open.
  *
  * @param {!function(!chromium.DevTools.Page.JavascriptDialogOpeningParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Page.prototype.onJavascriptDialogOpening = function(listener) {};

/**
  * Fired for top level page lifecycle events such as navigation, load, paint, etc.
  *
  * @param {!function(!chromium.DevTools.Page.LifecycleEventParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Page.prototype.onLifecycleEvent = function(listener) {};

/**
  * @param {!function(!chromium.DevTools.Page.LoadEventFiredParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Page.prototype.onLoadEventFired = function(listener) {};

/**
  * Fired when same-document navigation happens, e.g. due to history API usage or anchor navigation.
  *
  * @param {!function(!chromium.DevTools.Page.NavigatedWithinDocumentParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Page.prototype.onNavigatedWithinDocument = function(listener) {};

/**
  * Compressed image data requested by the `startScreencast`.
  *
  * @param {!function(!chromium.DevTools.Page.ScreencastFrameParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Page.prototype.onScreencastFrame = function(listener) {};

/**
  * Fired when the page with currently enabled screencast was shown or hidden `.
  *
  * @param {!function(!chromium.DevTools.Page.ScreencastVisibilityChangedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Page.prototype.onScreencastVisibilityChanged = function(listener) {};

/**
  * Fired when a new window is going to be opened, via window.open(), link click, form submission,
 * etc.
  *
  * @param {!function(!chromium.DevTools.Page.WindowOpenParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Page.prototype.onWindowOpen = function(listener) {};
