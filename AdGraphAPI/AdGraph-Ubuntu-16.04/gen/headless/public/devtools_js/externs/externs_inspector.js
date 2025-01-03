// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * Experimental bindings for the Inspector DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalInspector = function(connection) {};

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.ExperimentalInspector.prototype.removeEventListener = function(id) {};

/**
 * Bindings for the Inspector DevTools Domain.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.Inspector = function(connection) {};

/** @type {!chromium.DevTools.ExperimentalInspector} */
chromium.DevTools.Inspector.prototype.experimental;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.Inspector.prototype.removeEventListener = function(id) {};


/**
 * Parameters for the Disable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Inspector.DisableParams;

/**
 * Result for the Disable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Inspector.DisableResult;

/**
 * Parameters for the Enable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Inspector.EnableParams;

/**
 * Result for the Enable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Inspector.EnableResult;

/**
 * Parameters for the Detached event.
 *
 * reason: The reason why connection has been terminated.
 *
 * @typedef {{
 *   reason: string
 * }}
 */
chromium.DevTools.Inspector.DetachedParams;

/**
 * Parameters for the TargetCrashed event.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Inspector.TargetCrashedParams;

/**
 * Parameters for the TargetReloadedAfterCrash event.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Inspector.TargetReloadedAfterCrashParams;



/**
  * Disables inspector domain notifications.
  *
  * @return {!Promise<chromium.DevTools.Inspector.DisableResult>}
  */
chromium.DevTools.ExperimentalInspector.prototype.disable = function() {};

/**
  * Enables inspector domain notifications.
  *
  * @return {!Promise<chromium.DevTools.Inspector.EnableResult>}
  */
chromium.DevTools.ExperimentalInspector.prototype.enable = function() {};


/**
  * Fired when remote debugging connection is about to be terminated. Contains detach reason.
  *
  * @param {!function(!chromium.DevTools.Inspector.DetachedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalInspector.prototype.onDetached = function(listener) {};

/**
  * Fired when debugging target has crashed
  *
  * @param {!function()} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalInspector.prototype.onTargetCrashed = function(listener) {};

/**
  * Fired when debugging target has reloaded after crash
  *
  * @param {!function()} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalInspector.prototype.onTargetReloadedAfterCrash = function(listener) {};



/**
  * Disables inspector domain notifications.
  *
  * @return {!Promise<chromium.DevTools.Inspector.DisableResult>}
  */
chromium.DevTools.Inspector.prototype.disable = function() {};

/**
  * Enables inspector domain notifications.
  *
  * @return {!Promise<chromium.DevTools.Inspector.EnableResult>}
  */
chromium.DevTools.Inspector.prototype.enable = function() {};


/**
  * Fired when remote debugging connection is about to be terminated. Contains detach reason.
  *
  * @param {!function(!chromium.DevTools.Inspector.DetachedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Inspector.prototype.onDetached = function(listener) {};

/**
  * Fired when debugging target has crashed
  *
  * @param {!function()} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Inspector.prototype.onTargetCrashed = function(listener) {};

/**
  * Fired when debugging target has reloaded after crash
  *
  * @param {!function()} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Inspector.prototype.onTargetReloadedAfterCrash = function(listener) {};
