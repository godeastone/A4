// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * @fileoverview Generated DevTools bindings for the SystemInfo Domain.
 */
'use strict';

goog.provide('chromium.DevTools.ExperimentalSystemInfo');
goog.provide('chromium.DevTools.SystemInfo');
goog.require('chromium.DevTools.Connection');

goog.scope(function() {
const Connection = chromium.DevTools.Connection;

/**
 * Experimental bindings for the SystemInfo DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalSystemInfo = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;
}

const ExperimentalSystemInfo = chromium.DevTools.ExperimentalSystemInfo;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
ExperimentalSystemInfo.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}

/**
 * Bindings for the SystemInfo DevTools Domain.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.SystemInfo = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;

  /** @type {!ExperimentalSystemInfo} */
  this.experimental = new ExperimentalSystemInfo(connection);
}

const SystemInfo = chromium.DevTools.SystemInfo;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
SystemInfo.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}


/**
 * Describes a single graphics processor (GPU).
 *
 * vendorId: PCI ID of the GPU vendor, if available; 0 otherwise.
 * deviceId: PCI ID of the GPU device, if available; 0 otherwise.
 * vendorString: String description of the GPU vendor, if the PCI ID is not available.
 * deviceString: String description of the GPU device, if the PCI ID is not available.
 *
 * @typedef {{
 *   vendorId: number,
 *   deviceId: number,
 *   vendorString: string,
 *   deviceString: string
 * }}
 */
SystemInfo.GPUDevice;

/**
 * Provides information about the GPU(s) on the system.
 *
 * devices: The graphics devices on the system. Element 0 is the primary GPU.
 * auxAttributes: An optional dictionary of additional GPU related attributes.
 * featureStatus: An optional dictionary of graphics features and their status.
 * driverBugWorkarounds: An optional array of GPU driver bug workarounds.
 *
 * @typedef {{
 *   devices: !Array.<!SystemInfo.GPUDevice>,
 *   auxAttributes: (!Object|undefined),
 *   featureStatus: (!Object|undefined),
 *   driverBugWorkarounds: !Array.<string>
 * }}
 */
SystemInfo.GPUInfo;

/**
 * Parameters for the GetInfo command.
 *
 *
 * @typedef {undefined}
 */
SystemInfo.GetInfoParams;

/**
 * Result for the GetInfo command.
 *
 * gpu: Information about the GPUs on the system.
 * modelName: A platform-dependent description of the model of the machine. On Mac OS, this is, for
 *   example, 'MacBookPro'. Will be the empty string if not supported.
 * modelVersion: A platform-dependent description of the version of the machine. On Mac OS, this is, for
 *   example, '10.1'. Will be the empty string if not supported.
 * commandLine: The command line string used to launch the browser. Will be the empty string if not
 *   supported.
 *
 * @typedef {{
 *   gpu: !SystemInfo.GPUInfo,
 *   modelName: string,
 *   modelVersion: string,
 *   commandLine: string
 * }}
 */
SystemInfo.GetInfoResult;



/**
  * Returns information about the system.
  *
  * @return {!Promise<SystemInfo.GetInfoResult>}
  */
ExperimentalSystemInfo.prototype.getInfo = function() {
  return this.connection_.sendDevToolsMessage('SystemInfo.getInfo', {});
};




/**
  * Returns information about the system.
  *
  * @return {!Promise<SystemInfo.GetInfoResult>}
  */
SystemInfo.prototype.getInfo = function() {
  return this.connection_.sendDevToolsMessage('SystemInfo.getInfo', {});
};


});  // goog.scope

