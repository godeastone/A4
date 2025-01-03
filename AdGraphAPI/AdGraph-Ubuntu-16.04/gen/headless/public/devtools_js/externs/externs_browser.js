// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * Experimental bindings for the Browser DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalBrowser = function(connection) {};

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.ExperimentalBrowser.prototype.removeEventListener = function(id) {};

/**
 * Bindings for the Browser DevTools Domain.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.Browser = function(connection) {};

/** @type {!chromium.DevTools.ExperimentalBrowser} */
chromium.DevTools.Browser.prototype.experimental;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.Browser.prototype.removeEventListener = function(id) {};

/**
 * The state of the browser window.
 *
 * @enum {string}
 */
chromium.DevTools.Browser.WindowState = {
    NORMAL: "normal",
    MINIMIZED: "minimized",
    MAXIMIZED: "maximized",
    FULLSCREEN: "fullscreen"
};


/**
 * Browser window bounds information
 *
 * left: The offset from the left edge of the screen to the window in pixels.
 * top: The offset from the top edge of the screen to the window in pixels.
 * width: The window width in pixels.
 * height: The window height in pixels.
 * windowState: The window state. Default to normal.
 *
 * @typedef {{
 *   left: (number|undefined),
 *   top: (number|undefined),
 *   width: (number|undefined),
 *   height: (number|undefined),
 *   windowState: (!chromium.DevTools.Browser.WindowState|undefined)
 * }}
 */
chromium.DevTools.Browser.Bounds;

/**
 * Chrome histogram bucket.
 *
 * low: Minimum value (inclusive).
 * high: Maximum value (exclusive).
 * count: Number of samples.
 *
 * @typedef {{
 *   low: number,
 *   high: number,
 *   count: number
 * }}
 */
chromium.DevTools.Browser.Bucket;

/**
 * Chrome histogram.
 *
 * name: Name.
 * sum: Sum of sample values.
 * count: Total number of samples.
 * buckets: Buckets.
 *
 * @typedef {{
 *   name: string,
 *   sum: number,
 *   count: number,
 *   buckets: !Array.<!chromium.DevTools.Browser.Bucket>
 * }}
 */
chromium.DevTools.Browser.Histogram;

/**
 * Parameters for the Close command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Browser.CloseParams;

/**
 * Result for the Close command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Browser.CloseResult;

/**
 * Parameters for the GetVersion command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Browser.GetVersionParams;

/**
 * Result for the GetVersion command.
 *
 * protocolVersion: Protocol version.
 * product: Product name.
 * revision: Product revision.
 * userAgent: User-Agent.
 * jsVersion: V8 version.
 *
 * @typedef {{
 *   protocolVersion: string,
 *   product: string,
 *   revision: string,
 *   userAgent: string,
 *   jsVersion: string
 * }}
 */
chromium.DevTools.Browser.GetVersionResult;

/**
 * Parameters for the GetBrowserCommandLine command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Browser.GetBrowserCommandLineParams;

/**
 * Result for the GetBrowserCommandLine command.
 *
 * arguments: Commandline parameters
 *
 * @typedef {{
 *   arguments: !Array.<string>
 * }}
 */
chromium.DevTools.Browser.GetBrowserCommandLineResult;

/**
 * Parameters for the GetHistograms command.
 *
 * query: Requested substring in name. Only histograms which have query as a
 *    substring in their name are extracted. An empty or absent query returns
 *    all histograms.
 *
 * @typedef {{
 *   query: (string|undefined)
 * }}
 */
chromium.DevTools.Browser.GetHistogramsParams;

/**
 * Result for the GetHistograms command.
 *
 * histograms: Histograms.
 *
 * @typedef {{
 *   histograms: !Array.<!chromium.DevTools.Browser.Histogram>
 * }}
 */
chromium.DevTools.Browser.GetHistogramsResult;

/**
 * Parameters for the GetHistogram command.
 *
 * name: Requested histogram name.
 *
 * @typedef {{
 *   name: string
 * }}
 */
chromium.DevTools.Browser.GetHistogramParams;

/**
 * Result for the GetHistogram command.
 *
 * histogram: Histogram.
 *
 * @typedef {{
 *   histogram: !chromium.DevTools.Browser.Histogram
 * }}
 */
chromium.DevTools.Browser.GetHistogramResult;

/**
 * Parameters for the GetWindowBounds command.
 *
 * windowId: Browser window id.
 *
 * @typedef {{
 *   windowId: number
 * }}
 */
chromium.DevTools.Browser.GetWindowBoundsParams;

/**
 * Result for the GetWindowBounds command.
 *
 * bounds: Bounds information of the window. When window state is 'minimized', the restored window
 *    position and size are returned.
 *
 * @typedef {{
 *   bounds: !chromium.DevTools.Browser.Bounds
 * }}
 */
chromium.DevTools.Browser.GetWindowBoundsResult;

/**
 * Parameters for the GetWindowForTarget command.
 *
 * targetId: Devtools agent host id.
 *
 * @typedef {{
 *   targetId: string
 * }}
 */
chromium.DevTools.Browser.GetWindowForTargetParams;

/**
 * Result for the GetWindowForTarget command.
 *
 * windowId: Browser window id.
 * bounds: Bounds information of the window. When window state is 'minimized', the restored window
 *    position and size are returned.
 *
 * @typedef {{
 *   windowId: number,
 *   bounds: !chromium.DevTools.Browser.Bounds
 * }}
 */
chromium.DevTools.Browser.GetWindowForTargetResult;

/**
 * Parameters for the SetWindowBounds command.
 *
 * windowId: Browser window id.
 * bounds: New window bounds. The 'minimized', 'maximized' and 'fullscreen' states cannot be combined
 *    with 'left', 'top', 'width' or 'height'. Leaves unspecified fields unchanged.
 *
 * @typedef {{
 *   windowId: number,
 *   bounds: !chromium.DevTools.Browser.Bounds
 * }}
 */
chromium.DevTools.Browser.SetWindowBoundsParams;

/**
 * Result for the SetWindowBounds command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Browser.SetWindowBoundsResult;



/**
  * Close browser gracefully.
  *
  * @return {!Promise<chromium.DevTools.Browser.CloseResult>}
  */
chromium.DevTools.ExperimentalBrowser.prototype.close = function() {};

/**
  * Returns version information.
  *
  * @return {!Promise<chromium.DevTools.Browser.GetVersionResult>}
  */
chromium.DevTools.ExperimentalBrowser.prototype.getVersion = function() {};

/**
  * Returns the command line switches for the browser process if, and only if
 * --enable-automation is on the commandline.
  *
  * @return {!Promise<chromium.DevTools.Browser.GetBrowserCommandLineResult>}
  */
chromium.DevTools.ExperimentalBrowser.prototype.getBrowserCommandLine = function() {};

/**
  * Get Chrome histograms.
  *
  * @param {chromium.DevTools.Browser.GetHistogramsParams=} opt_params
  * @return {!Promise<chromium.DevTools.Browser.GetHistogramsResult>}
  */
chromium.DevTools.ExperimentalBrowser.prototype.getHistograms = function(opt_params) {};

/**
  * Get a Chrome histogram by name.
  *
  * @param {chromium.DevTools.Browser.GetHistogramParams} params
  * @return {!Promise<chromium.DevTools.Browser.GetHistogramResult>}
  */
chromium.DevTools.ExperimentalBrowser.prototype.getHistogram = function(params) {};

/**
  * Get position and size of the browser window.
  *
  * @param {chromium.DevTools.Browser.GetWindowBoundsParams} params
  * @return {!Promise<chromium.DevTools.Browser.GetWindowBoundsResult>}
  */
chromium.DevTools.ExperimentalBrowser.prototype.getWindowBounds = function(params) {};

/**
  * Get the browser window that contains the devtools target.
  *
  * @param {chromium.DevTools.Browser.GetWindowForTargetParams} params
  * @return {!Promise<chromium.DevTools.Browser.GetWindowForTargetResult>}
  */
chromium.DevTools.ExperimentalBrowser.prototype.getWindowForTarget = function(params) {};

/**
  * Set position and/or size of the browser window.
  *
  * @param {chromium.DevTools.Browser.SetWindowBoundsParams} params
  * @return {!Promise<chromium.DevTools.Browser.SetWindowBoundsResult>}
  */
chromium.DevTools.ExperimentalBrowser.prototype.setWindowBounds = function(params) {};




/**
  * Close browser gracefully.
  *
  * @return {!Promise<chromium.DevTools.Browser.CloseResult>}
  */
chromium.DevTools.Browser.prototype.close = function() {};

/**
  * Returns version information.
  *
  * @return {!Promise<chromium.DevTools.Browser.GetVersionResult>}
  */
chromium.DevTools.Browser.prototype.getVersion = function() {};

/**
  * Returns the command line switches for the browser process if, and only if
 * --enable-automation is on the commandline.
  *
  * @return {!Promise<chromium.DevTools.Browser.GetBrowserCommandLineResult>}
  */
chromium.DevTools.Browser.prototype.getBrowserCommandLine = function() {};

/**
  * Get Chrome histograms.
  *
  * @param {chromium.DevTools.Browser.GetHistogramsParams=} opt_params
  * @return {!Promise<chromium.DevTools.Browser.GetHistogramsResult>}
  */
chromium.DevTools.Browser.prototype.getHistograms = function(opt_params) {};

/**
  * Get a Chrome histogram by name.
  *
  * @param {chromium.DevTools.Browser.GetHistogramParams} params
  * @return {!Promise<chromium.DevTools.Browser.GetHistogramResult>}
  */
chromium.DevTools.Browser.prototype.getHistogram = function(params) {};

/**
  * Get position and size of the browser window.
  *
  * @param {chromium.DevTools.Browser.GetWindowBoundsParams} params
  * @return {!Promise<chromium.DevTools.Browser.GetWindowBoundsResult>}
  */
chromium.DevTools.Browser.prototype.getWindowBounds = function(params) {};

/**
  * Get the browser window that contains the devtools target.
  *
  * @param {chromium.DevTools.Browser.GetWindowForTargetParams} params
  * @return {!Promise<chromium.DevTools.Browser.GetWindowForTargetResult>}
  */
chromium.DevTools.Browser.prototype.getWindowForTarget = function(params) {};

/**
  * Set position and/or size of the browser window.
  *
  * @param {chromium.DevTools.Browser.SetWindowBoundsParams} params
  * @return {!Promise<chromium.DevTools.Browser.SetWindowBoundsResult>}
  */
chromium.DevTools.Browser.prototype.setWindowBounds = function(params) {};

