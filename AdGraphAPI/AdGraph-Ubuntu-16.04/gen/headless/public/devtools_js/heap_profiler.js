// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * @fileoverview Generated DevTools bindings for the HeapProfiler Domain.
 */
'use strict';

goog.provide('chromium.DevTools.ExperimentalHeapProfiler');
goog.provide('chromium.DevTools.HeapProfiler');
goog.require('chromium.DevTools.Connection');
goog.require('chromium.DevTools.Runtime');

goog.scope(function() {
const Connection = chromium.DevTools.Connection;
const Runtime = chromium.DevTools.Runtime;

/**
 * Experimental bindings for the HeapProfiler DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalHeapProfiler = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;
}

const ExperimentalHeapProfiler = chromium.DevTools.ExperimentalHeapProfiler;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
ExperimentalHeapProfiler.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}

/**
 * Bindings for the HeapProfiler DevTools Domain.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.HeapProfiler = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;

  /** @type {!ExperimentalHeapProfiler} */
  this.experimental = new ExperimentalHeapProfiler(connection);
}

const HeapProfiler = chromium.DevTools.HeapProfiler;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
HeapProfiler.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}


/**
 * Sampling Heap Profile node. Holds callsite information, allocation statistics and child nodes.
 *
 * callFrame: Function location.
 * selfSize: Allocations size in bytes for the node excluding children.
 * children: Child nodes.
 *
 * @typedef {{
 *   callFrame: !Runtime.CallFrame,
 *   selfSize: number,
 *   children: !Array.<!HeapProfiler.SamplingHeapProfileNode>
 * }}
 */
HeapProfiler.SamplingHeapProfileNode;

/**
 * Profile.
 *
 *
 * @typedef {{
 *   head: !HeapProfiler.SamplingHeapProfileNode
 * }}
 */
HeapProfiler.SamplingHeapProfile;

/**
 * Parameters for the AddInspectedHeapObject command.
 *
 * heapObjectId: Heap snapshot object id to be accessible by means of $x command line API.
 *
 * @typedef {{
 *   heapObjectId: string
 * }}
 */
HeapProfiler.AddInspectedHeapObjectParams;

/**
 * Result for the AddInspectedHeapObject command.
 *
 *
 * @typedef {undefined}
 */
HeapProfiler.AddInspectedHeapObjectResult;

/**
 * Parameters for the CollectGarbage command.
 *
 *
 * @typedef {undefined}
 */
HeapProfiler.CollectGarbageParams;

/**
 * Result for the CollectGarbage command.
 *
 *
 * @typedef {undefined}
 */
HeapProfiler.CollectGarbageResult;

/**
 * Parameters for the Disable command.
 *
 *
 * @typedef {undefined}
 */
HeapProfiler.DisableParams;

/**
 * Result for the Disable command.
 *
 *
 * @typedef {undefined}
 */
HeapProfiler.DisableResult;

/**
 * Parameters for the Enable command.
 *
 *
 * @typedef {undefined}
 */
HeapProfiler.EnableParams;

/**
 * Result for the Enable command.
 *
 *
 * @typedef {undefined}
 */
HeapProfiler.EnableResult;

/**
 * Parameters for the GetHeapObjectId command.
 *
 * objectId: Identifier of the object to get heap object id for.
 *
 * @typedef {{
 *   objectId: string
 * }}
 */
HeapProfiler.GetHeapObjectIdParams;

/**
 * Result for the GetHeapObjectId command.
 *
 * heapSnapshotObjectId: Id of the heap snapshot object corresponding to the passed remote object id.
 *
 * @typedef {{
 *   heapSnapshotObjectId: string
 * }}
 */
HeapProfiler.GetHeapObjectIdResult;

/**
 * Parameters for the GetObjectByHeapObjectId command.
 *
 * objectGroup: Symbolic group name that can be used to release multiple objects.
 *
 * @typedef {{
 *   objectId: string,
 *   objectGroup: (string|undefined)
 * }}
 */
HeapProfiler.GetObjectByHeapObjectIdParams;

/**
 * Result for the GetObjectByHeapObjectId command.
 *
 * result: Evaluation result.
 *
 * @typedef {{
 *   result: !Runtime.RemoteObject
 * }}
 */
HeapProfiler.GetObjectByHeapObjectIdResult;

/**
 * Parameters for the GetSamplingProfile command.
 *
 *
 * @typedef {undefined}
 */
HeapProfiler.GetSamplingProfileParams;

/**
 * Result for the GetSamplingProfile command.
 *
 * profile: Return the sampling profile being collected.
 *
 * @typedef {{
 *   profile: !HeapProfiler.SamplingHeapProfile
 * }}
 */
HeapProfiler.GetSamplingProfileResult;

/**
 * Parameters for the StartSampling command.
 *
 * samplingInterval: Average sample interval in bytes. Poisson distribution is used for the intervals. The
 *   default value is 32768 bytes.
 *
 * @typedef {{
 *   samplingInterval: (number|undefined)
 * }}
 */
HeapProfiler.StartSamplingParams;

/**
 * Result for the StartSampling command.
 *
 *
 * @typedef {undefined}
 */
HeapProfiler.StartSamplingResult;

/**
 * Parameters for the StartTrackingHeapObjects command.
 *
 *
 * @typedef {{
 *   trackAllocations: (boolean|undefined)
 * }}
 */
HeapProfiler.StartTrackingHeapObjectsParams;

/**
 * Result for the StartTrackingHeapObjects command.
 *
 *
 * @typedef {undefined}
 */
HeapProfiler.StartTrackingHeapObjectsResult;

/**
 * Parameters for the StopSampling command.
 *
 *
 * @typedef {undefined}
 */
HeapProfiler.StopSamplingParams;

/**
 * Result for the StopSampling command.
 *
 * profile: Recorded sampling heap profile.
 *
 * @typedef {{
 *   profile: !HeapProfiler.SamplingHeapProfile
 * }}
 */
HeapProfiler.StopSamplingResult;

/**
 * Parameters for the StopTrackingHeapObjects command.
 *
 * reportProgress: If true 'reportHeapSnapshotProgress' events will be generated while snapshot is being taken
 *   when the tracking is stopped.
 *
 * @typedef {{
 *   reportProgress: (boolean|undefined)
 * }}
 */
HeapProfiler.StopTrackingHeapObjectsParams;

/**
 * Result for the StopTrackingHeapObjects command.
 *
 *
 * @typedef {undefined}
 */
HeapProfiler.StopTrackingHeapObjectsResult;

/**
 * Parameters for the TakeHeapSnapshot command.
 *
 * reportProgress: If true 'reportHeapSnapshotProgress' events will be generated while snapshot is being taken.
 *
 * @typedef {{
 *   reportProgress: (boolean|undefined)
 * }}
 */
HeapProfiler.TakeHeapSnapshotParams;

/**
 * Result for the TakeHeapSnapshot command.
 *
 *
 * @typedef {undefined}
 */
HeapProfiler.TakeHeapSnapshotResult;

/**
 * Parameters for the AddHeapSnapshotChunk event.
 *
 *
 * @typedef {{
 *   chunk: string
 * }}
 */
HeapProfiler.AddHeapSnapshotChunkParams;

/**
 * Parameters for the HeapStatsUpdate event.
 *
 * statsUpdate: An array of triplets. Each triplet describes a fragment. The first integer is the fragment
 *   index, the second integer is a total count of objects for the fragment, the third integer is
 *   a total size of the objects for the fragment.
 *
 * @typedef {{
 *   statsUpdate: !Array.<number>
 * }}
 */
HeapProfiler.HeapStatsUpdateParams;

/**
 * Parameters for the LastSeenObjectId event.
 *
 *
 * @typedef {{
 *   lastSeenObjectId: number,
 *   timestamp: number
 * }}
 */
HeapProfiler.LastSeenObjectIdParams;

/**
 * Parameters for the ReportHeapSnapshotProgress event.
 *
 *
 * @typedef {{
 *   done: number,
 *   total: number,
 *   finished: (boolean|undefined)
 * }}
 */
HeapProfiler.ReportHeapSnapshotProgressParams;

/**
 * Parameters for the ResetProfiles event.
 *
 *
 * @typedef {undefined}
 */
HeapProfiler.ResetProfilesParams;



/**
  * Enables console to refer to the node with given id via $x (see Command Line API for more details
 * $x functions).
  *
  * @param {HeapProfiler.AddInspectedHeapObjectParams} params
  * @return {!Promise<HeapProfiler.AddInspectedHeapObjectResult>}
  */
ExperimentalHeapProfiler.prototype.addInspectedHeapObject = function(params) {
  return this.connection_.sendDevToolsMessage('HeapProfiler.addInspectedHeapObject', params);
};

/**
  * @return {!Promise<HeapProfiler.CollectGarbageResult>}
  */
ExperimentalHeapProfiler.prototype.collectGarbage = function() {
  return this.connection_.sendDevToolsMessage('HeapProfiler.collectGarbage', {});
};

/**
  * @return {!Promise<HeapProfiler.DisableResult>}
  */
ExperimentalHeapProfiler.prototype.disable = function() {
  return this.connection_.sendDevToolsMessage('HeapProfiler.disable', {});
};

/**
  * @return {!Promise<HeapProfiler.EnableResult>}
  */
ExperimentalHeapProfiler.prototype.enable = function() {
  return this.connection_.sendDevToolsMessage('HeapProfiler.enable', {});
};

/**
  * @param {HeapProfiler.GetHeapObjectIdParams} params
  * @return {!Promise<HeapProfiler.GetHeapObjectIdResult>}
  */
ExperimentalHeapProfiler.prototype.getHeapObjectId = function(params) {
  return this.connection_.sendDevToolsMessage('HeapProfiler.getHeapObjectId', params);
};

/**
  * @param {HeapProfiler.GetObjectByHeapObjectIdParams} params
  * @return {!Promise<HeapProfiler.GetObjectByHeapObjectIdResult>}
  */
ExperimentalHeapProfiler.prototype.getObjectByHeapObjectId = function(params) {
  return this.connection_.sendDevToolsMessage('HeapProfiler.getObjectByHeapObjectId', params);
};

/**
  * @return {!Promise<HeapProfiler.GetSamplingProfileResult>}
  */
ExperimentalHeapProfiler.prototype.getSamplingProfile = function() {
  return this.connection_.sendDevToolsMessage('HeapProfiler.getSamplingProfile', {});
};

/**
  * @param {HeapProfiler.StartSamplingParams=} opt_params
  * @return {!Promise<HeapProfiler.StartSamplingResult>}
  */
ExperimentalHeapProfiler.prototype.startSampling = function(opt_params) {
  return this.connection_.sendDevToolsMessage('HeapProfiler.startSampling', opt_params || {});
};

/**
  * @param {HeapProfiler.StartTrackingHeapObjectsParams=} opt_params
  * @return {!Promise<HeapProfiler.StartTrackingHeapObjectsResult>}
  */
ExperimentalHeapProfiler.prototype.startTrackingHeapObjects = function(opt_params) {
  return this.connection_.sendDevToolsMessage('HeapProfiler.startTrackingHeapObjects', opt_params || {});
};

/**
  * @return {!Promise<HeapProfiler.StopSamplingResult>}
  */
ExperimentalHeapProfiler.prototype.stopSampling = function() {
  return this.connection_.sendDevToolsMessage('HeapProfiler.stopSampling', {});
};

/**
  * @param {HeapProfiler.StopTrackingHeapObjectsParams=} opt_params
  * @return {!Promise<HeapProfiler.StopTrackingHeapObjectsResult>}
  */
ExperimentalHeapProfiler.prototype.stopTrackingHeapObjects = function(opt_params) {
  return this.connection_.sendDevToolsMessage('HeapProfiler.stopTrackingHeapObjects', opt_params || {});
};

/**
  * @param {HeapProfiler.TakeHeapSnapshotParams=} opt_params
  * @return {!Promise<HeapProfiler.TakeHeapSnapshotResult>}
  */
ExperimentalHeapProfiler.prototype.takeHeapSnapshot = function(opt_params) {
  return this.connection_.sendDevToolsMessage('HeapProfiler.takeHeapSnapshot', opt_params || {});
};


/**
  * @param {!function(!HeapProfiler.AddHeapSnapshotChunkParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalHeapProfiler.prototype.onAddHeapSnapshotChunk = function(listener) {
  return this.connection_.addEventListener(
      'HeapProfiler.addHeapSnapshotChunk', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * If heap objects tracking has been started then backend may send update for one or more fragments
  *
  * @param {!function(!HeapProfiler.HeapStatsUpdateParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalHeapProfiler.prototype.onHeapStatsUpdate = function(listener) {
  return this.connection_.addEventListener(
      'HeapProfiler.heapStatsUpdate', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * If heap objects tracking has been started then backend regularly sends a current value for last
 * seen object id and corresponding timestamp. If the were changes in the heap since last event
 * then one or more heapStatsUpdate events will be sent before a new lastSeenObjectId event.
  *
  * @param {!function(!HeapProfiler.LastSeenObjectIdParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalHeapProfiler.prototype.onLastSeenObjectId = function(listener) {
  return this.connection_.addEventListener(
      'HeapProfiler.lastSeenObjectId', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * @param {!function(!HeapProfiler.ReportHeapSnapshotProgressParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalHeapProfiler.prototype.onReportHeapSnapshotProgress = function(listener) {
  return this.connection_.addEventListener(
      'HeapProfiler.reportHeapSnapshotProgress', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * @param {!function()} listener
  * @return {number} The id of this event listener.
  */
ExperimentalHeapProfiler.prototype.onResetProfiles = function(listener) {
  return this.connection_.addEventListener(
      'HeapProfiler.resetProfiles', /** @type {!function(!Object): undefined} */ (listener));
};



/**
  * Enables console to refer to the node with given id via $x (see Command Line API for more details
 * $x functions).
  *
  * @param {HeapProfiler.AddInspectedHeapObjectParams} params
  * @return {!Promise<HeapProfiler.AddInspectedHeapObjectResult>}
  */
HeapProfiler.prototype.addInspectedHeapObject = function(params) {
  return this.connection_.sendDevToolsMessage('HeapProfiler.addInspectedHeapObject', params);
};

/**
  * @return {!Promise<HeapProfiler.CollectGarbageResult>}
  */
HeapProfiler.prototype.collectGarbage = function() {
  return this.connection_.sendDevToolsMessage('HeapProfiler.collectGarbage', {});
};

/**
  * @return {!Promise<HeapProfiler.DisableResult>}
  */
HeapProfiler.prototype.disable = function() {
  return this.connection_.sendDevToolsMessage('HeapProfiler.disable', {});
};

/**
  * @return {!Promise<HeapProfiler.EnableResult>}
  */
HeapProfiler.prototype.enable = function() {
  return this.connection_.sendDevToolsMessage('HeapProfiler.enable', {});
};

/**
  * @param {HeapProfiler.GetHeapObjectIdParams} params
  * @return {!Promise<HeapProfiler.GetHeapObjectIdResult>}
  */
HeapProfiler.prototype.getHeapObjectId = function(params) {
  return this.connection_.sendDevToolsMessage('HeapProfiler.getHeapObjectId', params);
};

/**
  * @param {HeapProfiler.GetObjectByHeapObjectIdParams} params
  * @return {!Promise<HeapProfiler.GetObjectByHeapObjectIdResult>}
  */
HeapProfiler.prototype.getObjectByHeapObjectId = function(params) {
  return this.connection_.sendDevToolsMessage('HeapProfiler.getObjectByHeapObjectId', params);
};

/**
  * @return {!Promise<HeapProfiler.GetSamplingProfileResult>}
  */
HeapProfiler.prototype.getSamplingProfile = function() {
  return this.connection_.sendDevToolsMessage('HeapProfiler.getSamplingProfile', {});
};

/**
  * @param {HeapProfiler.StartSamplingParams=} opt_params
  * @return {!Promise<HeapProfiler.StartSamplingResult>}
  */
HeapProfiler.prototype.startSampling = function(opt_params) {
  return this.connection_.sendDevToolsMessage('HeapProfiler.startSampling', opt_params || {});
};

/**
  * @param {HeapProfiler.StartTrackingHeapObjectsParams=} opt_params
  * @return {!Promise<HeapProfiler.StartTrackingHeapObjectsResult>}
  */
HeapProfiler.prototype.startTrackingHeapObjects = function(opt_params) {
  return this.connection_.sendDevToolsMessage('HeapProfiler.startTrackingHeapObjects', opt_params || {});
};

/**
  * @return {!Promise<HeapProfiler.StopSamplingResult>}
  */
HeapProfiler.prototype.stopSampling = function() {
  return this.connection_.sendDevToolsMessage('HeapProfiler.stopSampling', {});
};

/**
  * @param {HeapProfiler.StopTrackingHeapObjectsParams=} opt_params
  * @return {!Promise<HeapProfiler.StopTrackingHeapObjectsResult>}
  */
HeapProfiler.prototype.stopTrackingHeapObjects = function(opt_params) {
  return this.connection_.sendDevToolsMessage('HeapProfiler.stopTrackingHeapObjects', opt_params || {});
};

/**
  * @param {HeapProfiler.TakeHeapSnapshotParams=} opt_params
  * @return {!Promise<HeapProfiler.TakeHeapSnapshotResult>}
  */
HeapProfiler.prototype.takeHeapSnapshot = function(opt_params) {
  return this.connection_.sendDevToolsMessage('HeapProfiler.takeHeapSnapshot', opt_params || {});
};


/**
  * @param {!function(!HeapProfiler.AddHeapSnapshotChunkParams)} listener
  * @return {number} The id of this event listener.
  */
HeapProfiler.prototype.onAddHeapSnapshotChunk = function(listener) {
  return this.connection_.addEventListener(
      'HeapProfiler.addHeapSnapshotChunk', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * If heap objects tracking has been started then backend may send update for one or more fragments
  *
  * @param {!function(!HeapProfiler.HeapStatsUpdateParams)} listener
  * @return {number} The id of this event listener.
  */
HeapProfiler.prototype.onHeapStatsUpdate = function(listener) {
  return this.connection_.addEventListener(
      'HeapProfiler.heapStatsUpdate', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * If heap objects tracking has been started then backend regularly sends a current value for last
 * seen object id and corresponding timestamp. If the were changes in the heap since last event
 * then one or more heapStatsUpdate events will be sent before a new lastSeenObjectId event.
  *
  * @param {!function(!HeapProfiler.LastSeenObjectIdParams)} listener
  * @return {number} The id of this event listener.
  */
HeapProfiler.prototype.onLastSeenObjectId = function(listener) {
  return this.connection_.addEventListener(
      'HeapProfiler.lastSeenObjectId', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * @param {!function(!HeapProfiler.ReportHeapSnapshotProgressParams)} listener
  * @return {number} The id of this event listener.
  */
HeapProfiler.prototype.onReportHeapSnapshotProgress = function(listener) {
  return this.connection_.addEventListener(
      'HeapProfiler.reportHeapSnapshotProgress', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * @param {!function()} listener
  * @return {number} The id of this event listener.
  */
HeapProfiler.prototype.onResetProfiles = function(listener) {
  return this.connection_.addEventListener(
      'HeapProfiler.resetProfiles', /** @type {!function(!Object): undefined} */ (listener));
};

});  // goog.scope

