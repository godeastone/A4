// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * @fileoverview Generated DevTools bindings for the Inspector Domain.
 */
'use strict';

goog.provide('chromium.DevTools.ExperimentalInspector');
goog.provide('chromium.DevTools.Inspector');
goog.require('chromium.DevTools.Connection');

goog.scope(function() {
const Connection = chromium.DevTools.Connection;

/**
 * Experimental bindings for the Inspector DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalInspector = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;
}

const ExperimentalInspector = chromium.DevTools.ExperimentalInspector;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
ExperimentalInspector.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}

/**
 * Bindings for the Inspector DevTools Domain.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.Inspector = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;

  /** @type {!ExperimentalInspector} */
  this.experimental = new ExperimentalInspector(connection);
}

const Inspector = chromium.DevTools.Inspector;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
Inspector.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}


/**
 * Parameters for the Disable command.
 *
 *
 * @typedef {undefined}
 */
Inspector.DisableParams;

/**
 * Result for the Disable command.
 *
 *
 * @typedef {undefined}
 */
Inspector.DisableResult;

/**
 * Parameters for the Enable command.
 *
 *
 * @typedef {undefined}
 */
Inspector.EnableParams;

/**
 * Result for the Enable command.
 *
 *
 * @typedef {undefined}
 */
Inspector.EnableResult;

/**
 * Parameters for the Detached event.
 *
 * reason: The reason why connection has been terminated.
 *
 * @typedef {{
 *   reason: string
 * }}
 */
Inspector.DetachedParams;

/**
 * Parameters for the TargetCrashed event.
 *
 *
 * @typedef {undefined}
 */
Inspector.TargetCrashedParams;

/**
 * Parameters for the TargetReloadedAfterCrash event.
 *
 *
 * @typedef {undefined}
 */
Inspector.TargetReloadedAfterCrashParams;



/**
  * Disables inspector domain notifications.
  *
  * @return {!Promise<Inspector.DisableResult>}
  */
ExperimentalInspector.prototype.disable = function() {
  return this.connection_.sendDevToolsMessage('Inspector.disable', {});
};

/**
  * Enables inspector domain notifications.
  *
  * @return {!Promise<Inspector.EnableResult>}
  */
ExperimentalInspector.prototype.enable = function() {
  return this.connection_.sendDevToolsMessage('Inspector.enable', {});
};


/**
  * Fired when remote debugging connection is about to be terminated. Contains detach reason.
  *
  * @param {!function(!Inspector.DetachedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalInspector.prototype.onDetached = function(listener) {
  return this.connection_.addEventListener(
      'Inspector.detached', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when debugging target has crashed
  *
  * @param {!function()} listener
  * @return {number} The id of this event listener.
  */
ExperimentalInspector.prototype.onTargetCrashed = function(listener) {
  return this.connection_.addEventListener(
      'Inspector.targetCrashed', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when debugging target has reloaded after crash
  *
  * @param {!function()} listener
  * @return {number} The id of this event listener.
  */
ExperimentalInspector.prototype.onTargetReloadedAfterCrash = function(listener) {
  return this.connection_.addEventListener(
      'Inspector.targetReloadedAfterCrash', /** @type {!function(!Object): undefined} */ (listener));
};



/**
  * Disables inspector domain notifications.
  *
  * @return {!Promise<Inspector.DisableResult>}
  */
Inspector.prototype.disable = function() {
  return this.connection_.sendDevToolsMessage('Inspector.disable', {});
};

/**
  * Enables inspector domain notifications.
  *
  * @return {!Promise<Inspector.EnableResult>}
  */
Inspector.prototype.enable = function() {
  return this.connection_.sendDevToolsMessage('Inspector.enable', {});
};


/**
  * Fired when remote debugging connection is about to be terminated. Contains detach reason.
  *
  * @param {!function(!Inspector.DetachedParams)} listener
  * @return {number} The id of this event listener.
  */
Inspector.prototype.onDetached = function(listener) {
  return this.connection_.addEventListener(
      'Inspector.detached', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when debugging target has crashed
  *
  * @param {!function()} listener
  * @return {number} The id of this event listener.
  */
Inspector.prototype.onTargetCrashed = function(listener) {
  return this.connection_.addEventListener(
      'Inspector.targetCrashed', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when debugging target has reloaded after crash
  *
  * @param {!function()} listener
  * @return {number} The id of this event listener.
  */
Inspector.prototype.onTargetReloadedAfterCrash = function(listener) {
  return this.connection_.addEventListener(
      'Inspector.targetReloadedAfterCrash', /** @type {!function(!Object): undefined} */ (listener));
};

});  // goog.scope

