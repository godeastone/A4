// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * @fileoverview Generated DevTools bindings for the DeviceOrientation Domain.
 */
'use strict';

goog.provide('chromium.DevTools.ExperimentalDeviceOrientation');
goog.provide('chromium.DevTools.DeviceOrientation');
goog.require('chromium.DevTools.Connection');

goog.scope(function() {
const Connection = chromium.DevTools.Connection;

/**
 * Experimental bindings for the DeviceOrientation DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalDeviceOrientation = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;
}

const ExperimentalDeviceOrientation = chromium.DevTools.ExperimentalDeviceOrientation;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
ExperimentalDeviceOrientation.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}

/**
 * Bindings for the DeviceOrientation DevTools Domain.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.DeviceOrientation = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;

  /** @type {!ExperimentalDeviceOrientation} */
  this.experimental = new ExperimentalDeviceOrientation(connection);
}

const DeviceOrientation = chromium.DevTools.DeviceOrientation;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
DeviceOrientation.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}


/**
 * Parameters for the ClearDeviceOrientationOverride command.
 *
 *
 * @typedef {undefined}
 */
DeviceOrientation.ClearDeviceOrientationOverrideParams;

/**
 * Result for the ClearDeviceOrientationOverride command.
 *
 *
 * @typedef {undefined}
 */
DeviceOrientation.ClearDeviceOrientationOverrideResult;

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
DeviceOrientation.SetDeviceOrientationOverrideParams;

/**
 * Result for the SetDeviceOrientationOverride command.
 *
 *
 * @typedef {undefined}
 */
DeviceOrientation.SetDeviceOrientationOverrideResult;



/**
  * Clears the overridden Device Orientation.
  *
  * @return {!Promise<DeviceOrientation.ClearDeviceOrientationOverrideResult>}
  */
ExperimentalDeviceOrientation.prototype.clearDeviceOrientationOverride = function() {
  return this.connection_.sendDevToolsMessage('DeviceOrientation.clearDeviceOrientationOverride', {});
};

/**
  * Overrides the Device Orientation.
  *
  * @param {DeviceOrientation.SetDeviceOrientationOverrideParams} params
  * @return {!Promise<DeviceOrientation.SetDeviceOrientationOverrideResult>}
  */
ExperimentalDeviceOrientation.prototype.setDeviceOrientationOverride = function(params) {
  return this.connection_.sendDevToolsMessage('DeviceOrientation.setDeviceOrientationOverride', params);
};




/**
  * Clears the overridden Device Orientation.
  *
  * @return {!Promise<DeviceOrientation.ClearDeviceOrientationOverrideResult>}
  */
DeviceOrientation.prototype.clearDeviceOrientationOverride = function() {
  return this.connection_.sendDevToolsMessage('DeviceOrientation.clearDeviceOrientationOverride', {});
};

/**
  * Overrides the Device Orientation.
  *
  * @param {DeviceOrientation.SetDeviceOrientationOverrideParams} params
  * @return {!Promise<DeviceOrientation.SetDeviceOrientationOverrideResult>}
  */
DeviceOrientation.prototype.setDeviceOrientationOverride = function(params) {
  return this.connection_.sendDevToolsMessage('DeviceOrientation.setDeviceOrientationOverride', params);
};


});  // goog.scope

