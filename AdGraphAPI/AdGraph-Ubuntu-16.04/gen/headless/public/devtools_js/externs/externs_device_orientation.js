// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * Experimental bindings for the DeviceOrientation DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalDeviceOrientation = function(connection) {};

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.ExperimentalDeviceOrientation.prototype.removeEventListener = function(id) {};

/**
 * Bindings for the DeviceOrientation DevTools Domain.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.DeviceOrientation = function(connection) {};

/** @type {!chromium.DevTools.ExperimentalDeviceOrientation} */
chromium.DevTools.DeviceOrientation.prototype.experimental;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.DeviceOrientation.prototype.removeEventListener = function(id) {};


/**
 * Parameters for the ClearDeviceOrientationOverride command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.DeviceOrientation.ClearDeviceOrientationOverrideParams;

/**
 * Result for the ClearDeviceOrientationOverride command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.DeviceOrientation.ClearDeviceOrientationOverrideResult;

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
chromium.DevTools.DeviceOrientation.SetDeviceOrientationOverrideParams;

/**
 * Result for the SetDeviceOrientationOverride command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.DeviceOrientation.SetDeviceOrientationOverrideResult;



/**
  * Clears the overridden Device Orientation.
  *
  * @return {!Promise<chromium.DevTools.DeviceOrientation.ClearDeviceOrientationOverrideResult>}
  */
chromium.DevTools.ExperimentalDeviceOrientation.prototype.clearDeviceOrientationOverride = function() {};

/**
  * Overrides the Device Orientation.
  *
  * @param {chromium.DevTools.DeviceOrientation.SetDeviceOrientationOverrideParams} params
  * @return {!Promise<chromium.DevTools.DeviceOrientation.SetDeviceOrientationOverrideResult>}
  */
chromium.DevTools.ExperimentalDeviceOrientation.prototype.setDeviceOrientationOverride = function(params) {};




/**
  * Clears the overridden Device Orientation.
  *
  * @return {!Promise<chromium.DevTools.DeviceOrientation.ClearDeviceOrientationOverrideResult>}
  */
chromium.DevTools.DeviceOrientation.prototype.clearDeviceOrientationOverride = function() {};

/**
  * Overrides the Device Orientation.
  *
  * @param {chromium.DevTools.DeviceOrientation.SetDeviceOrientationOverrideParams} params
  * @return {!Promise<chromium.DevTools.DeviceOrientation.SetDeviceOrientationOverrideResult>}
  */
chromium.DevTools.DeviceOrientation.prototype.setDeviceOrientationOverride = function(params) {};

