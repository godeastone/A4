// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * Experimental bindings for the Memory DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalMemory = function(connection) {};

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.ExperimentalMemory.prototype.removeEventListener = function(id) {};

/**
 * Bindings for the Memory DevTools Domain.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.Memory = function(connection) {};

/** @type {!chromium.DevTools.ExperimentalMemory} */
chromium.DevTools.Memory.prototype.experimental;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.Memory.prototype.removeEventListener = function(id) {};

/**
 * Memory pressure level.
 *
 * @enum {string}
 */
chromium.DevTools.Memory.PressureLevel = {
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
chromium.DevTools.Memory.SamplingProfileNode;

/**
 * Array of heap profile samples.
 *
 *
 * @typedef {{
 *   samples: !Array.<!chromium.DevTools.Memory.SamplingProfileNode>
 * }}
 */
chromium.DevTools.Memory.SamplingProfile;

/**
 * Parameters for the GetDOMCounters command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Memory.GetDOMCountersParams;

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
chromium.DevTools.Memory.GetDOMCountersResult;

/**
 * Parameters for the PrepareForLeakDetection command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Memory.PrepareForLeakDetectionParams;

/**
 * Result for the PrepareForLeakDetection command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Memory.PrepareForLeakDetectionResult;

/**
 * Parameters for the SetPressureNotificationsSuppressed command.
 *
 * suppressed: If true, memory pressure notifications will be suppressed.
 *
 * @typedef {{
 *   suppressed: boolean
 * }}
 */
chromium.DevTools.Memory.SetPressureNotificationsSuppressedParams;

/**
 * Result for the SetPressureNotificationsSuppressed command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Memory.SetPressureNotificationsSuppressedResult;

/**
 * Parameters for the SimulatePressureNotification command.
 *
 * level: Memory pressure level of the notification.
 *
 * @typedef {{
 *   level: !chromium.DevTools.Memory.PressureLevel
 * }}
 */
chromium.DevTools.Memory.SimulatePressureNotificationParams;

/**
 * Result for the SimulatePressureNotification command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Memory.SimulatePressureNotificationResult;

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
chromium.DevTools.Memory.StartSamplingParams;

/**
 * Result for the StartSampling command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Memory.StartSamplingResult;

/**
 * Parameters for the StopSampling command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Memory.StopSamplingParams;

/**
 * Result for the StopSampling command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Memory.StopSamplingResult;

/**
 * Parameters for the GetAllTimeSamplingProfile command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Memory.GetAllTimeSamplingProfileParams;

/**
 * Result for the GetAllTimeSamplingProfile command.
 *
 *
 * @typedef {{
 *   profile: !chromium.DevTools.Memory.SamplingProfile
 * }}
 */
chromium.DevTools.Memory.GetAllTimeSamplingProfileResult;

/**
 * Parameters for the GetBrowserSamplingProfile command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Memory.GetBrowserSamplingProfileParams;

/**
 * Result for the GetBrowserSamplingProfile command.
 *
 *
 * @typedef {{
 *   profile: !chromium.DevTools.Memory.SamplingProfile
 * }}
 */
chromium.DevTools.Memory.GetBrowserSamplingProfileResult;

/**
 * Parameters for the GetSamplingProfile command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Memory.GetSamplingProfileParams;

/**
 * Result for the GetSamplingProfile command.
 *
 *
 * @typedef {{
 *   profile: !chromium.DevTools.Memory.SamplingProfile
 * }}
 */
chromium.DevTools.Memory.GetSamplingProfileResult;



/**
  * @return {!Promise<chromium.DevTools.Memory.GetDOMCountersResult>}
  */
chromium.DevTools.ExperimentalMemory.prototype.getDOMCounters = function() {};

/**
  * @return {!Promise<chromium.DevTools.Memory.PrepareForLeakDetectionResult>}
  */
chromium.DevTools.ExperimentalMemory.prototype.prepareForLeakDetection = function() {};

/**
  * Enable/disable suppressing memory pressure notifications in all processes.
  *
  * @param {chromium.DevTools.Memory.SetPressureNotificationsSuppressedParams} params
  * @return {!Promise<chromium.DevTools.Memory.SetPressureNotificationsSuppressedResult>}
  */
chromium.DevTools.ExperimentalMemory.prototype.setPressureNotificationsSuppressed = function(params) {};

/**
  * Simulate a memory pressure notification in all processes.
  *
  * @param {chromium.DevTools.Memory.SimulatePressureNotificationParams} params
  * @return {!Promise<chromium.DevTools.Memory.SimulatePressureNotificationResult>}
  */
chromium.DevTools.ExperimentalMemory.prototype.simulatePressureNotification = function(params) {};

/**
  * Start collecting native memory profile.
  *
  * @param {chromium.DevTools.Memory.StartSamplingParams=} opt_params
  * @return {!Promise<chromium.DevTools.Memory.StartSamplingResult>}
  */
chromium.DevTools.ExperimentalMemory.prototype.startSampling = function(opt_params) {};

/**
  * Stop collecting native memory profile.
  *
  * @return {!Promise<chromium.DevTools.Memory.StopSamplingResult>}
  */
chromium.DevTools.ExperimentalMemory.prototype.stopSampling = function() {};

/**
  * Retrieve native memory allocations profile
 * collected since renderer process startup.
  *
  * @return {!Promise<chromium.DevTools.Memory.GetAllTimeSamplingProfileResult>}
  */
chromium.DevTools.ExperimentalMemory.prototype.getAllTimeSamplingProfile = function() {};

/**
  * Retrieve native memory allocations profile
 * collected since browser process startup.
  *
  * @return {!Promise<chromium.DevTools.Memory.GetBrowserSamplingProfileResult>}
  */
chromium.DevTools.ExperimentalMemory.prototype.getBrowserSamplingProfile = function() {};

/**
  * Retrieve native memory allocations profile collected since last
 * `startSampling` call.
  *
  * @return {!Promise<chromium.DevTools.Memory.GetSamplingProfileResult>}
  */
chromium.DevTools.ExperimentalMemory.prototype.getSamplingProfile = function() {};




/**
  * @return {!Promise<chromium.DevTools.Memory.GetDOMCountersResult>}
  */
chromium.DevTools.Memory.prototype.getDOMCounters = function() {};

/**
  * @return {!Promise<chromium.DevTools.Memory.PrepareForLeakDetectionResult>}
  */
chromium.DevTools.Memory.prototype.prepareForLeakDetection = function() {};

/**
  * Enable/disable suppressing memory pressure notifications in all processes.
  *
  * @param {chromium.DevTools.Memory.SetPressureNotificationsSuppressedParams} params
  * @return {!Promise<chromium.DevTools.Memory.SetPressureNotificationsSuppressedResult>}
  */
chromium.DevTools.Memory.prototype.setPressureNotificationsSuppressed = function(params) {};

/**
  * Simulate a memory pressure notification in all processes.
  *
  * @param {chromium.DevTools.Memory.SimulatePressureNotificationParams} params
  * @return {!Promise<chromium.DevTools.Memory.SimulatePressureNotificationResult>}
  */
chromium.DevTools.Memory.prototype.simulatePressureNotification = function(params) {};

/**
  * Start collecting native memory profile.
  *
  * @param {chromium.DevTools.Memory.StartSamplingParams=} opt_params
  * @return {!Promise<chromium.DevTools.Memory.StartSamplingResult>}
  */
chromium.DevTools.Memory.prototype.startSampling = function(opt_params) {};

/**
  * Stop collecting native memory profile.
  *
  * @return {!Promise<chromium.DevTools.Memory.StopSamplingResult>}
  */
chromium.DevTools.Memory.prototype.stopSampling = function() {};

/**
  * Retrieve native memory allocations profile
 * collected since renderer process startup.
  *
  * @return {!Promise<chromium.DevTools.Memory.GetAllTimeSamplingProfileResult>}
  */
chromium.DevTools.Memory.prototype.getAllTimeSamplingProfile = function() {};

/**
  * Retrieve native memory allocations profile
 * collected since browser process startup.
  *
  * @return {!Promise<chromium.DevTools.Memory.GetBrowserSamplingProfileResult>}
  */
chromium.DevTools.Memory.prototype.getBrowserSamplingProfile = function() {};

/**
  * Retrieve native memory allocations profile collected since last
 * `startSampling` call.
  *
  * @return {!Promise<chromium.DevTools.Memory.GetSamplingProfileResult>}
  */
chromium.DevTools.Memory.prototype.getSamplingProfile = function() {};

