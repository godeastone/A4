// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * @fileoverview Generated DevTools bindings for the Browser Domain.
 */
'use strict';

goog.provide('chromium.DevTools.ExperimentalBrowser');
goog.provide('chromium.DevTools.Browser');
goog.require('chromium.DevTools.Connection');
goog.forwardDeclare('chromium.DevTools.Target.TargetID');

goog.scope(function() {
const Connection = chromium.DevTools.Connection;

/**
 * Experimental bindings for the Browser DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalBrowser = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;
}

const ExperimentalBrowser = chromium.DevTools.ExperimentalBrowser;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
ExperimentalBrowser.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}

/**
 * Bindings for the Browser DevTools Domain.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.Browser = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;

  /** @type {!ExperimentalBrowser} */
  this.experimental = new ExperimentalBrowser(connection);
}

const Browser = chromium.DevTools.Browser;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
Browser.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}

/**
 * The state of the browser window.
 *
 * @enum {string}
 */
Browser.WindowState = {
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
 *   windowState: (!Browser.WindowState|undefined)
 * }}
 */
Browser.Bounds;

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
Browser.Bucket;

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
 *   buckets: !Array.<!Browser.Bucket>
 * }}
 */
Browser.Histogram;

/**
 * Parameters for the Close command.
 *
 *
 * @typedef {undefined}
 */
Browser.CloseParams;

/**
 * Result for the Close command.
 *
 *
 * @typedef {undefined}
 */
Browser.CloseResult;

/**
 * Parameters for the GetVersion command.
 *
 *
 * @typedef {undefined}
 */
Browser.GetVersionParams;

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
Browser.GetVersionResult;

/**
 * Parameters for the GetBrowserCommandLine command.
 *
 *
 * @typedef {undefined}
 */
Browser.GetBrowserCommandLineParams;

/**
 * Result for the GetBrowserCommandLine command.
 *
 * arguments: Commandline parameters
 *
 * @typedef {{
 *   arguments: !Array.<string>
 * }}
 */
Browser.GetBrowserCommandLineResult;

/**
 * Parameters for the GetHistograms command.
 *
 * query: Requested substring in name. Only histograms which have query as a
 *   substring in their name are extracted. An empty or absent query returns
 *   all histograms.
 *
 * @typedef {{
 *   query: (string|undefined)
 * }}
 */
Browser.GetHistogramsParams;

/**
 * Result for the GetHistograms command.
 *
 * histograms: Histograms.
 *
 * @typedef {{
 *   histograms: !Array.<!Browser.Histogram>
 * }}
 */
Browser.GetHistogramsResult;

/**
 * Parameters for the GetHistogram command.
 *
 * name: Requested histogram name.
 *
 * @typedef {{
 *   name: string
 * }}
 */
Browser.GetHistogramParams;

/**
 * Result for the GetHistogram command.
 *
 * histogram: Histogram.
 *
 * @typedef {{
 *   histogram: !Browser.Histogram
 * }}
 */
Browser.GetHistogramResult;

/**
 * Parameters for the GetWindowBounds command.
 *
 * windowId: Browser window id.
 *
 * @typedef {{
 *   windowId: number
 * }}
 */
Browser.GetWindowBoundsParams;

/**
 * Result for the GetWindowBounds command.
 *
 * bounds: Bounds information of the window. When window state is 'minimized', the restored window
 *   position and size are returned.
 *
 * @typedef {{
 *   bounds: !Browser.Bounds
 * }}
 */
Browser.GetWindowBoundsResult;

/**
 * Parameters for the GetWindowForTarget command.
 *
 * targetId: Devtools agent host id.
 *
 * @typedef {{
 *   targetId: string
 * }}
 */
Browser.GetWindowForTargetParams;

/**
 * Result for the GetWindowForTarget command.
 *
 * windowId: Browser window id.
 * bounds: Bounds information of the window. When window state is 'minimized', the restored window
 *   position and size are returned.
 *
 * @typedef {{
 *   windowId: number,
 *   bounds: !Browser.Bounds
 * }}
 */
Browser.GetWindowForTargetResult;

/**
 * Parameters for the SetWindowBounds command.
 *
 * windowId: Browser window id.
 * bounds: New window bounds. The 'minimized', 'maximized' and 'fullscreen' states cannot be combined
 *   with 'left', 'top', 'width' or 'height'. Leaves unspecified fields unchanged.
 *
 * @typedef {{
 *   windowId: number,
 *   bounds: !Browser.Bounds
 * }}
 */
Browser.SetWindowBoundsParams;

/**
 * Result for the SetWindowBounds command.
 *
 *
 * @typedef {undefined}
 */
Browser.SetWindowBoundsResult;



/**
  * Close browser gracefully.
  *
  * @return {!Promise<Browser.CloseResult>}
  */
ExperimentalBrowser.prototype.close = function() {
  return this.connection_.sendDevToolsMessage('Browser.close', {});
};

/**
  * Returns version information.
  *
  * @return {!Promise<Browser.GetVersionResult>}
  */
ExperimentalBrowser.prototype.getVersion = function() {
  return this.connection_.sendDevToolsMessage('Browser.getVersion', {});
};

/**
  * Returns the command line switches for the browser process if, and only if
 * --enable-automation is on the commandline.
  *
  * @return {!Promise<Browser.GetBrowserCommandLineResult>}
  */
ExperimentalBrowser.prototype.getBrowserCommandLine = function() {
  return this.connection_.sendDevToolsMessage('Browser.getBrowserCommandLine', {});
};

/**
  * Get Chrome histograms.
  *
  * @param {Browser.GetHistogramsParams=} opt_params
  * @return {!Promise<Browser.GetHistogramsResult>}
  */
ExperimentalBrowser.prototype.getHistograms = function(opt_params) {
  return this.connection_.sendDevToolsMessage('Browser.getHistograms', opt_params || {});
};

/**
  * Get a Chrome histogram by name.
  *
  * @param {Browser.GetHistogramParams} params
  * @return {!Promise<Browser.GetHistogramResult>}
  */
ExperimentalBrowser.prototype.getHistogram = function(params) {
  return this.connection_.sendDevToolsMessage('Browser.getHistogram', params);
};

/**
  * Get position and size of the browser window.
  *
  * @param {Browser.GetWindowBoundsParams} params
  * @return {!Promise<Browser.GetWindowBoundsResult>}
  */
ExperimentalBrowser.prototype.getWindowBounds = function(params) {
  return this.connection_.sendDevToolsMessage('Browser.getWindowBounds', params);
};

/**
  * Get the browser window that contains the devtools target.
  *
  * @param {Browser.GetWindowForTargetParams} params
  * @return {!Promise<Browser.GetWindowForTargetResult>}
  */
ExperimentalBrowser.prototype.getWindowForTarget = function(params) {
  return this.connection_.sendDevToolsMessage('Browser.getWindowForTarget', params);
};

/**
  * Set position and/or size of the browser window.
  *
  * @param {Browser.SetWindowBoundsParams} params
  * @return {!Promise<Browser.SetWindowBoundsResult>}
  */
ExperimentalBrowser.prototype.setWindowBounds = function(params) {
  return this.connection_.sendDevToolsMessage('Browser.setWindowBounds', params);
};




/**
  * Close browser gracefully.
  *
  * @return {!Promise<Browser.CloseResult>}
  */
Browser.prototype.close = function() {
  return this.connection_.sendDevToolsMessage('Browser.close', {});
};

/**
  * Returns version information.
  *
  * @return {!Promise<Browser.GetVersionResult>}
  */
Browser.prototype.getVersion = function() {
  return this.connection_.sendDevToolsMessage('Browser.getVersion', {});
};

/**
  * Returns the command line switches for the browser process if, and only if
 * --enable-automation is on the commandline.
  *
  * @return {!Promise<Browser.GetBrowserCommandLineResult>}
  */
Browser.prototype.getBrowserCommandLine = function() {
  return this.connection_.sendDevToolsMessage('Browser.getBrowserCommandLine', {});
};

/**
  * Get Chrome histograms.
  *
  * @param {Browser.GetHistogramsParams=} opt_params
  * @return {!Promise<Browser.GetHistogramsResult>}
  */
Browser.prototype.getHistograms = function(opt_params) {
  return this.connection_.sendDevToolsMessage('Browser.getHistograms', opt_params || {});
};

/**
  * Get a Chrome histogram by name.
  *
  * @param {Browser.GetHistogramParams} params
  * @return {!Promise<Browser.GetHistogramResult>}
  */
Browser.prototype.getHistogram = function(params) {
  return this.connection_.sendDevToolsMessage('Browser.getHistogram', params);
};

/**
  * Get position and size of the browser window.
  *
  * @param {Browser.GetWindowBoundsParams} params
  * @return {!Promise<Browser.GetWindowBoundsResult>}
  */
Browser.prototype.getWindowBounds = function(params) {
  return this.connection_.sendDevToolsMessage('Browser.getWindowBounds', params);
};

/**
  * Get the browser window that contains the devtools target.
  *
  * @param {Browser.GetWindowForTargetParams} params
  * @return {!Promise<Browser.GetWindowForTargetResult>}
  */
Browser.prototype.getWindowForTarget = function(params) {
  return this.connection_.sendDevToolsMessage('Browser.getWindowForTarget', params);
};

/**
  * Set position and/or size of the browser window.
  *
  * @param {Browser.SetWindowBoundsParams} params
  * @return {!Promise<Browser.SetWindowBoundsResult>}
  */
Browser.prototype.setWindowBounds = function(params) {
  return this.connection_.sendDevToolsMessage('Browser.setWindowBounds', params);
};


});  // goog.scope

