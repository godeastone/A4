// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * @fileoverview Generated DevTools bindings for the Memory Domain.
 */
'use strict';

goog.provide('chromium.DevTools.ExperimentalMemory');
goog.provide('chromium.DevTools.Memory');
goog.require('chromium.DevTools.Connection');

goog.scope(function() {
const Connection = chromium.DevTools.Connection;

/**
 * Experimental bindings for the Memory DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalMemory = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;
}

const ExperimentalMemory = chromium.DevTools.ExperimentalMemory;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
ExperimentalMemory.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}

/**
 * Bindings for the Memory DevTools Domain.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.Memory = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;

  /** @type {!ExperimentalMemory} */
  this.experimental = new ExperimentalMemory(connection);
}

const Memory = chromium.DevTools.Memory;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
Memory.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}

/**
 * Memory pressure level.
 *
 * @enum {string}
 */
Memory.PressureLevel = {
    MODERATE: "moderate",
    CRITICAL: "critical"
};


/**
 * Heap profile sample.
 *
 * size: Size of the sampled allocation.
 * total: Total bytes attributed to this sample.
 * stack: Execution stack at the point of allocation.
 *
 * @typedef {{
 *   size: number,
 *   total: number,
 *   stack: !Array.<string>
 * }}
 */
Memory.SamplingProfileNode;

/**
 * Array of heap profile samples.
 *
 *
 * @typedef {{
 *   samples: !Array.<!Memory.SamplingProfileNode>
 * }}
 */
Memory.SamplingProfile;

/**
 * Parameters for the GetDOMCounters command.
 *
 *
 * @typedef {undefined}
 */
Memory.GetDOMCountersParams;

/**
 * Result for the GetDOMCounters command.
 *
 *
 * @typedef {{
 *   documents: number,
 *   nodes: number,
 *   jsEventListeners: number
 * }}
 */
Memory.GetDOMCountersResult;

/**
 * Parameters for the PrepareForLeakDetection command.
 *
 *
 * @typedef {undefined}
 */
Memory.PrepareForLeakDetectionParams;

/**
 * Result for the PrepareForLeakDetection command.
 *
 *
 * @typedef {undefined}
 */
Memory.PrepareForLeakDetectionResult;

/**
 * Parameters for the SetPressureNotificationsSuppressed command.
 *
 * suppressed: If true, memory pressure notifications will be suppressed.
 *
 * @typedef {{
 *   suppressed: boolean
 * }}
 */
Memory.SetPressureNotificationsSuppressedParams;

/**
 * Result for the SetPressureNotificationsSuppressed command.
 *
 *
 * @typedef {undefined}
 */
Memory.SetPressureNotificationsSuppressedResult;

/**
 * Parameters for the SimulatePressureNotification command.
 *
 * level: Memory pressure level of the notification.
 *
 * @typedef {{
 *   level: !Memory.PressureLevel
 * }}
 */
Memory.SimulatePressureNotificationParams;

/**
 * Result for the SimulatePressureNotification command.
 *
 *
 * @typedef {undefined}
 */
Memory.SimulatePressureNotificationResult;

/**
 * Parameters for the StartSampling command.
 *
 * samplingInterval: Average number of bytes between samples.
 * suppressRandomness: Do not randomize intervals between samples.
 *
 * @typedef {{
 *   samplingInterval: (number|undefined),
 *   suppressRandomness: (boolean|undefined)
 * }}
 */
Memory.StartSamplingParams;

/**
 * Result for the StartSampling command.
 *
 *
 * @typedef {undefined}
 */
Memory.StartSamplingResult;

/**
 * Parameters for the StopSampling command.
 *
 *
 * @typedef {undefined}
 */
Memory.StopSamplingParams;

/**
 * Result for the StopSampling command.
 *
 *
 * @typedef {undefined}
 */
Memory.StopSamplingResult;

/**
 * Parameters for the GetAllTimeSamplingProfile command.
 *
 *
 * @typedef {undefined}
 */
Memory.GetAllTimeSamplingProfileParams;

/**
 * Result for the GetAllTimeSamplingProfile command.
 *
 *
 * @typedef {{
 *   profile: !Memory.SamplingProfile
 * }}
 */
Memory.GetAllTimeSamplingProfileResult;

/**
 * Parameters for the GetBrowserSamplingProfile command.
 *
 *
 * @typedef {undefined}
 */
Memory.GetBrowserSamplingProfileParams;

/**
 * Result for the GetBrowserSamplingProfile command.
 *
 *
 * @typedef {{
 *   profile: !Memory.SamplingProfile
 * }}
 */
Memory.GetBrowserSamplingProfileResult;

/**
 * Parameters for the GetSamplingProfile command.
 *
 *
 * @typedef {undefined}
 */
Memory.GetSamplingProfileParams;

/**
 * Result for the GetSamplingProfile command.
 *
 *
 * @typedef {{
 *   profile: !Memory.SamplingProfile
 * }}
 */
Memory.GetSamplingProfileResult;



/**
  * @return {!Promise<Memory.GetDOMCountersResult>}
  */
ExperimentalMemory.prototype.getDOMCounters = function() {
  return this.connection_.sendDevToolsMessage('Memory.getDOMCounters', {});
};

/**
  * @return {!Promise<Memory.PrepareForLeakDetectionResult>}
  */
ExperimentalMemory.prototype.prepareForLeakDetection = function() {
  return this.connection_.sendDevToolsMessage('Memory.prepareForLeakDetection', {});
};

/**
  * Enable/disable suppressing memory pressure notifications in all processes.
  *
  * @param {Memory.SetPressureNotificationsSuppressedParams} params
  * @return {!Promise<Memory.SetPressureNotificationsSuppressedResult>}
  */
ExperimentalMemory.prototype.setPressureNotificationsSuppressed = function(params) {
  return this.connection_.sendDevToolsMessage('Memory.setPressureNotificationsSuppressed', params);
};

/**
  * Simulate a memory pressure notification in all processes.
  *
  * @param {Memory.SimulatePressureNotificationParams} params
  * @return {!Promise<Memory.SimulatePressureNotificationResult>}
  */
ExperimentalMemory.prototype.simulatePressureNotification = function(params) {
  return this.connection_.sendDevToolsMessage('Memory.simulatePressureNotification', params);
};

/**
  * Start collecting native memory profile.
  *
  * @param {Memory.StartSamplingParams=} opt_params
  * @return {!Promise<Memory.StartSamplingResult>}
  */
ExperimentalMemory.prototype.startSampling = function(opt_params) {
  return this.connection_.sendDevToolsMessage('Memory.startSampling', opt_params || {});
};

/**
  * Stop collecting native memory profile.
  *
  * @return {!Promise<Memory.StopSamplingResult>}
  */
ExperimentalMemory.prototype.stopSampling = function() {
  return this.connection_.sendDevToolsMessage('Memory.stopSampling', {});
};

/**
  * Retrieve native memory allocations profile
 * collected since renderer process startup.
  *
  * @return {!Promise<Memory.GetAllTimeSamplingProfileResult>}
  */
ExperimentalMemory.prototype.getAllTimeSamplingProfile = function() {
  return this.connection_.sendDevToolsMessage('Memory.getAllTimeSamplingProfile', {});
};

/**
  * Retrieve native memory allocations profile
 * collected since browser process startup.
  *
  * @return {!Promise<Memory.GetBrowserSamplingProfileResult>}
  */
ExperimentalMemory.prototype.getBrowserSamplingProfile = function() {
  return this.connection_.sendDevToolsMessage('Memory.getBrowserSamplingProfile', {});
};

/**
  * Retrieve native memory allocations profile collected since last
 * `startSampling` call.
  *
  * @return {!Promise<Memory.GetSamplingProfileResult>}
  */
ExperimentalMemory.prototype.getSamplingProfile = function() {
  return this.connection_.sendDevToolsMessage('Memory.getSamplingProfile', {});
};




/**
  * @return {!Promise<Memory.GetDOMCountersResult>}
  */
Memory.prototype.getDOMCounters = function() {
  return this.connection_.sendDevToolsMessage('Memory.getDOMCounters', {});
};

/**
  * @return {!Promise<Memory.PrepareForLeakDetectionResult>}
  */
Memory.prototype.prepareForLeakDetection = function() {
  return this.connection_.sendDevToolsMessage('Memory.prepareForLeakDetection', {});
};

/**
  * Enable/disable suppressing memory pressure notifications in all processes.
  *
  * @param {Memory.SetPressureNotificationsSuppressedParams} params
  * @return {!Promise<Memory.SetPressureNotificationsSuppressedResult>}
  */
Memory.prototype.setPressureNotificationsSuppressed = function(params) {
  return this.connection_.sendDevToolsMessage('Memory.setPressureNotificationsSuppressed', params);
};

/**
  * Simulate a memory pressure notification in all processes.
  *
  * @param {Memory.SimulatePressureNotificationParams} params
  * @return {!Promise<Memory.SimulatePressureNotificationResult>}
  */
Memory.prototype.simulatePressureNotification = function(params) {
  return this.connection_.sendDevToolsMessage('Memory.simulatePressureNotification', params);
};

/**
  * Start collecting native memory profile.
  *
  * @param {Memory.StartSamplingParams=} opt_params
  * @return {!Promise<Memory.StartSamplingResult>}
  */
Memory.prototype.startSampling = function(opt_params) {
  return this.connection_.sendDevToolsMessage('Memory.startSampling', opt_params || {});
};

/**
  * Stop collecting native memory profile.
  *
  * @return {!Promise<Memory.StopSamplingResult>}
  */
Memory.prototype.stopSampling = function() {
  return this.connection_.sendDevToolsMessage('Memory.stopSampling', {});
};

/**
  * Retrieve native memory allocations profile
 * collected since renderer process startup.
  *
  * @return {!Promise<Memory.GetAllTimeSamplingProfileResult>}
  */
Memory.prototype.getAllTimeSamplingProfile = function() {
  return this.connection_.sendDevToolsMessage('Memory.getAllTimeSamplingProfile', {});
};

/**
  * Retrieve native memory allocations profile
 * collected since browser process startup.
  *
  * @return {!Promise<Memory.GetBrowserSamplingProfileResult>}
  */
Memory.prototype.getBrowserSamplingProfile = function() {
  return this.connection_.sendDevToolsMessage('Memory.getBrowserSamplingProfile', {});
};

/**
  * Retrieve native memory allocations profile collected since last
 * `startSampling` call.
  *
  * @return {!Promise<Memory.GetSamplingProfileResult>}
  */
Memory.prototype.getSamplingProfile = function() {
  return this.connection_.sendDevToolsMessage('Memory.getSamplingProfile', {});
};


});  // goog.scope

