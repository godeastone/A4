// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * @fileoverview Generated DevTools bindings for the HeadlessExperimental Domain.
 */
'use strict';

goog.provide('chromium.DevTools.ExperimentalHeadlessExperimental');
goog.provide('chromium.DevTools.HeadlessExperimental');
goog.require('chromium.DevTools.Connection');
goog.require('chromium.DevTools.Page');
goog.require('chromium.DevTools.Runtime');

goog.scope(function() {
const Connection = chromium.DevTools.Connection;
const Page = chromium.DevTools.Page;
const Runtime = chromium.DevTools.Runtime;

/**
 * Experimental bindings for the HeadlessExperimental DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalHeadlessExperimental = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;
}

const ExperimentalHeadlessExperimental = chromium.DevTools.ExperimentalHeadlessExperimental;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
ExperimentalHeadlessExperimental.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}

/**
 * Bindings for the HeadlessExperimental DevTools Domain.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.HeadlessExperimental = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;

  /** @type {!ExperimentalHeadlessExperimental} */
  this.experimental = new ExperimentalHeadlessExperimental(connection);
}

const HeadlessExperimental = chromium.DevTools.HeadlessExperimental;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
HeadlessExperimental.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}

/**
 * Image compression format (defaults to png).
 *
 * @enum {string}
 */
HeadlessExperimental.ScreenshotParamsFormat = {
    JPEG: "jpeg",
    PNG: "png"
};


/**
 * Encoding options for a screenshot.
 *
 * format: Image compression format (defaults to png).
 * quality: Compression quality from range [0..100] (jpeg only).
 *
 * @typedef {{
 *   format: (!HeadlessExperimental.ScreenshotParamsFormat|undefined),
 *   quality: (number|undefined)
 * }}
 */
HeadlessExperimental.ScreenshotParams;

/**
 * Parameters for the BeginFrame command.
 *
 * frameTimeTicks: Timestamp of this BeginFrame in Renderer TimeTicks (milliseconds of uptime). If not set,
 *   the current time will be used.
 * interval: The interval between BeginFrames that is reported to the compositor, in milliseconds.
 *   Defaults to a 60 frames/second interval, i.e. about 16.666 milliseconds.
 * noDisplayUpdates: Whether updates should not be committed and drawn onto the display. False by default. If
 *   true, only side effects of the BeginFrame will be run, such as layout and animations, but
 *   any visual updates may not be visible on the display or in screenshots.
 * screenshot: If set, a screenshot of the frame will be captured and returned in the response. Otherwise,
 *   no screenshot will be captured. Note that capturing a screenshot can fail, for example,
 *   during renderer initialization. In such a case, no screenshot data will be returned.
 *
 * @typedef {{
 *   frameTimeTicks: (number|undefined),
 *   interval: (number|undefined),
 *   noDisplayUpdates: (boolean|undefined),
 *   screenshot: (!HeadlessExperimental.ScreenshotParams|undefined)
 * }}
 */
HeadlessExperimental.BeginFrameParams;

/**
 * Result for the BeginFrame command.
 *
 * hasDamage: Whether the BeginFrame resulted in damage and, thus, a new frame was committed to the
 *   display. Reported for diagnostic uses, may be removed in the future.
 * screenshotData: Base64-encoded image data of the screenshot, if one was requested and successfully taken.
 *
 * @typedef {{
 *   hasDamage: boolean,
 *   screenshotData: (string|undefined)
 * }}
 */
HeadlessExperimental.BeginFrameResult;

/**
 * Parameters for the Disable command.
 *
 *
 * @typedef {undefined}
 */
HeadlessExperimental.DisableParams;

/**
 * Result for the Disable command.
 *
 *
 * @typedef {undefined}
 */
HeadlessExperimental.DisableResult;

/**
 * Parameters for the Enable command.
 *
 *
 * @typedef {undefined}
 */
HeadlessExperimental.EnableParams;

/**
 * Result for the Enable command.
 *
 *
 * @typedef {undefined}
 */
HeadlessExperimental.EnableResult;

/**
 * Parameters for the NeedsBeginFramesChanged event.
 *
 * needsBeginFrames: True if BeginFrames are needed, false otherwise.
 *
 * @typedef {{
 *   needsBeginFrames: boolean
 * }}
 */
HeadlessExperimental.NeedsBeginFramesChangedParams;



/**
  * Sends a BeginFrame to the target and returns when the frame was completed. Optionally captures a
 * screenshot from the resulting frame. Requires that the target was created with enabled
 * BeginFrameControl. Designed for use with --run-all-compositor-stages-before-draw, see also
 * https://goo.gl/3zHXhB for more background.
  *
  * @param {HeadlessExperimental.BeginFrameParams=} opt_params
  * @return {!Promise<HeadlessExperimental.BeginFrameResult>}
  */
ExperimentalHeadlessExperimental.prototype.beginFrame = function(opt_params) {
  return this.connection_.sendDevToolsMessage('HeadlessExperimental.beginFrame', opt_params || {});
};

/**
  * Disables headless events for the target.
  *
  * @return {!Promise<HeadlessExperimental.DisableResult>}
  */
ExperimentalHeadlessExperimental.prototype.disable = function() {
  return this.connection_.sendDevToolsMessage('HeadlessExperimental.disable', {});
};

/**
  * Enables headless events for the target.
  *
  * @return {!Promise<HeadlessExperimental.EnableResult>}
  */
ExperimentalHeadlessExperimental.prototype.enable = function() {
  return this.connection_.sendDevToolsMessage('HeadlessExperimental.enable', {});
};


/**
  * Issued when the target starts or stops needing BeginFrames.
  *
  * @param {!function(!HeadlessExperimental.NeedsBeginFramesChangedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalHeadlessExperimental.prototype.onNeedsBeginFramesChanged = function(listener) {
  return this.connection_.addEventListener(
      'HeadlessExperimental.needsBeginFramesChanged', /** @type {!function(!Object): undefined} */ (listener));
};



/**
  * Sends a BeginFrame to the target and returns when the frame was completed. Optionally captures a
 * screenshot from the resulting frame. Requires that the target was created with enabled
 * BeginFrameControl. Designed for use with --run-all-compositor-stages-before-draw, see also
 * https://goo.gl/3zHXhB for more background.
  *
  * @param {HeadlessExperimental.BeginFrameParams=} opt_params
  * @return {!Promise<HeadlessExperimental.BeginFrameResult>}
  */
HeadlessExperimental.prototype.beginFrame = function(opt_params) {
  return this.connection_.sendDevToolsMessage('HeadlessExperimental.beginFrame', opt_params || {});
};

/**
  * Disables headless events for the target.
  *
  * @return {!Promise<HeadlessExperimental.DisableResult>}
  */
HeadlessExperimental.prototype.disable = function() {
  return this.connection_.sendDevToolsMessage('HeadlessExperimental.disable', {});
};

/**
  * Enables headless events for the target.
  *
  * @return {!Promise<HeadlessExperimental.EnableResult>}
  */
HeadlessExperimental.prototype.enable = function() {
  return this.connection_.sendDevToolsMessage('HeadlessExperimental.enable', {});
};


/**
  * Issued when the target starts or stops needing BeginFrames.
  *
  * @param {!function(!HeadlessExperimental.NeedsBeginFramesChangedParams)} listener
  * @return {number} The id of this event listener.
  */
HeadlessExperimental.prototype.onNeedsBeginFramesChanged = function(listener) {
  return this.connection_.addEventListener(
      'HeadlessExperimental.needsBeginFramesChanged', /** @type {!function(!Object): undefined} */ (listener));
};

});  // goog.scope

