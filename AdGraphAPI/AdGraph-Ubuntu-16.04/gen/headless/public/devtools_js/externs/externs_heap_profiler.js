// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * Experimental bindings for the HeapProfiler DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalHeapProfiler = function(connection) {};

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.ExperimentalHeapProfiler.prototype.removeEventListener = function(id) {};

/**
 * Bindings for the HeapProfiler DevTools Domain.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.HeapProfiler = function(connection) {};

/** @type {!chromium.DevTools.ExperimentalHeapProfiler} */
chromium.DevTools.HeapProfiler.prototype.experimental;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.HeapProfiler.prototype.removeEventListener = function(id) {};


/**
 * Sampling Heap Profile node. Holds callsite information, allocation statistics and child nodes.
 *
 * callFrame: Function location.
 * selfSize: Allocations size in bytes for the node excluding children.
 * children: Child nodes.
 *
 * @typedef {{
 *   callFrame: !chromium.DevTools.Runtime.CallFrame,
 *   selfSize: number,
 *   children: !Array.<!chromium.DevTools.HeapProfiler.SamplingHeapProfileNode>
 * }}
 */
chromium.DevTools.HeapProfiler.SamplingHeapProfileNode;

/**
 * Profile.
 *
 *
 * @typedef {{
 *   head: !chromium.DevTools.HeapProfiler.SamplingHeapProfileNode
 * }}
 */
chromium.DevTools.HeapProfiler.SamplingHeapProfile;

/**
 * Parameters for the AddInspectedHeapObject command.
 *
 * heapObjectId: Heap snapshot object id to be accessible by means of $x command line API.
 *
 * @typedef {{
 *   heapObjectId: string
 * }}
 */
chromium.DevTools.HeapProfiler.AddInspectedHeapObjectParams;

/**
 * Result for the AddInspectedHeapObject command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.HeapProfiler.AddInspectedHeapObjectResult;

/**
 * Parameters for the CollectGarbage command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.HeapProfiler.CollectGarbageParams;

/**
 * Result for the CollectGarbage command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.HeapProfiler.CollectGarbageResult;

/**
 * Parameters for the Disable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.HeapProfiler.DisableParams;

/**
 * Result for the Disable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.HeapProfiler.DisableResult;

/**
 * Parameters for the Enable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.HeapProfiler.EnableParams;

/**
 * Result for the Enable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.HeapProfiler.EnableResult;

/**
 * Parameters for the GetHeapObjectId command.
 *
 * objectId: Identifier of the object to get heap object id for.
 *
 * @typedef {{
 *   objectId: string
 * }}
 */
chromium.DevTools.HeapProfiler.GetHeapObjectIdParams;

/**
 * Result for the GetHeapObjectId command.
 *
 * heapSnapshotObjectId: Id of the heap snapshot object corresponding to the passed remote object id.
 *
 * @typedef {{
 *   heapSnapshotObjectId: string
 * }}
 */
chromium.DevTools.HeapProfiler.GetHeapObjectIdResult;

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
chromium.DevTools.HeapProfiler.GetObjectByHeapObjectIdParams;

/**
 * Result for the GetObjectByHeapObjectId command.
 *
 * result: Evaluation result.
 *
 * @typedef {{
 *   result: !chromium.DevTools.Runtime.RemoteObject
 * }}
 */
chromium.DevTools.HeapProfiler.GetObjectByHeapObjectIdResult;

/**
 * Parameters for the GetSamplingProfile command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.HeapProfiler.GetSamplingProfileParams;

/**
 * Result for the GetSamplingProfile command.
 *
 * profile: Return the sampling profile being collected.
 *
 * @typedef {{
 *   profile: !chromium.DevTools.HeapProfiler.SamplingHeapProfile
 * }}
 */
chromium.DevTools.HeapProfiler.GetSamplingProfileResult;

/**
 * Parameters for the StartSampling command.
 *
 * samplingInterval: Average sample interval in bytes. Poisson distribution is used for the intervals. The
 *    default value is 32768 bytes.
 *
 * @typedef {{
 *   samplingInterval: (number|undefined)
 * }}
 */
chromium.DevTools.HeapProfiler.StartSamplingParams;

/**
 * Result for the StartSampling command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.HeapProfiler.StartSamplingResult;

/**
 * Parameters for the StartTrackingHeapObjects command.
 *
 *
 * @typedef {{
 *   trackAllocations: (boolean|undefined)
 * }}
 */
chromium.DevTools.HeapProfiler.StartTrackingHeapObjectsParams;

/**
 * Result for the StartTrackingHeapObjects command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.HeapProfiler.StartTrackingHeapObjectsResult;

/**
 * Parameters for the StopSampling command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.HeapProfiler.StopSamplingParams;

/**
 * Result for the StopSampling command.
 *
 * profile: Recorded sampling heap profile.
 *
 * @typedef {{
 *   profile: !chromium.DevTools.HeapProfiler.SamplingHeapProfile
 * }}
 */
chromium.DevTools.HeapProfiler.StopSamplingResult;

/**
 * Parameters for the StopTrackingHeapObjects command.
 *
 * reportProgress: If true 'reportHeapSnapshotProgress' events will be generated while snapshot is being taken
 *    when the tracking is stopped.
 *
 * @typedef {{
 *   reportProgress: (boolean|undefined)
 * }}
 */
chromium.DevTools.HeapProfiler.StopTrackingHeapObjectsParams;

/**
 * Result for the StopTrackingHeapObjects command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.HeapProfiler.StopTrackingHeapObjectsResult;

/**
 * Parameters for the TakeHeapSnapshot command.
 *
 * reportProgress: If true 'reportHeapSnapshotProgress' events will be generated while snapshot is being taken.
 *
 * @typedef {{
 *   reportProgress: (boolean|undefined)
 * }}
 */
chromium.DevTools.HeapProfiler.TakeHeapSnapshotParams;

/**
 * Result for the TakeHeapSnapshot command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.HeapProfiler.TakeHeapSnapshotResult;

/**
 * Parameters for the AddHeapSnapshotChunk event.
 *
 *
 * @typedef {{
 *   chunk: string
 * }}
 */
chromium.DevTools.HeapProfiler.AddHeapSnapshotChunkParams;

/**
 * Parameters for the HeapStatsUpdate event.
 *
 * statsUpdate: An array of triplets. Each triplet describes a fragment. The first integer is the fragment
 *    index, the second integer is a total count of objects for the fragment, the third integer is
 *    a total size of the objects for the fragment.
 *
 * @typedef {{
 *   statsUpdate: !Array.<number>
 * }}
 */
chromium.DevTools.HeapProfiler.HeapStatsUpdateParams;

/**
 * Parameters for the LastSeenObjectId event.
 *
 *
 * @typedef {{
 *   lastSeenObjectId: number,
 *   timestamp: number
 * }}
 */
chromium.DevTools.HeapProfiler.LastSeenObjectIdParams;

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
chromium.DevTools.HeapProfiler.ReportHeapSnapshotProgressParams;

/**
 * Parameters for the ResetProfiles event.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.HeapProfiler.ResetProfilesParams;



/**
  * Enables console to refer to the node with given id via $x (see Command Line API for more details
 * $x functions).
  *
  * @param {chromium.DevTools.HeapProfiler.AddInspectedHeapObjectParams} params
  * @return {!Promise<chromium.DevTools.HeapProfiler.AddInspectedHeapObjectResult>}
  */
chromium.DevTools.ExperimentalHeapProfiler.prototype.addInspectedHeapObject = function(params) {};

/**
  * @return {!Promise<chromium.DevTools.HeapProfiler.CollectGarbageResult>}
  */
chromium.DevTools.ExperimentalHeapProfiler.prototype.collectGarbage = function() {};

/**
  * @return {!Promise<chromium.DevTools.HeapProfiler.DisableResult>}
  */
chromium.DevTools.ExperimentalHeapProfiler.prototype.disable = function() {};

/**
  * @return {!Promise<chromium.DevTools.HeapProfiler.EnableResult>}
  */
chromium.DevTools.ExperimentalHeapProfiler.prototype.enable = function() {};

/**
  * @param {chromium.DevTools.HeapProfiler.GetHeapObjectIdParams} params
  * @return {!Promise<chromium.DevTools.HeapProfiler.GetHeapObjectIdResult>}
  */
chromium.DevTools.ExperimentalHeapProfiler.prototype.getHeapObjectId = function(params) {};

/**
  * @param {chromium.DevTools.HeapProfiler.GetObjectByHeapObjectIdParams} params
  * @return {!Promise<chromium.DevTools.HeapProfiler.GetObjectByHeapObjectIdResult>}
  */
chromium.DevTools.ExperimentalHeapProfiler.prototype.getObjectByHeapObjectId = function(params) {};

/**
  * @return {!Promise<chromium.DevTools.HeapProfiler.GetSamplingProfileResult>}
  */
chromium.DevTools.ExperimentalHeapProfiler.prototype.getSamplingProfile = function() {};

/**
  * @param {chromium.DevTools.HeapProfiler.StartSamplingParams=} opt_params
  * @return {!Promise<chromium.DevTools.HeapProfiler.StartSamplingResult>}
  */
chromium.DevTools.ExperimentalHeapProfiler.prototype.startSampling = function(opt_params) {};

/**
  * @param {chromium.DevTools.HeapProfiler.StartTrackingHeapObjectsParams=} opt_params
  * @return {!Promise<chromium.DevTools.HeapProfiler.StartTrackingHeapObjectsResult>}
  */
chromium.DevTools.ExperimentalHeapProfiler.prototype.startTrackingHeapObjects = function(opt_params) {};

/**
  * @return {!Promise<chromium.DevTools.HeapProfiler.StopSamplingResult>}
  */
chromium.DevTools.ExperimentalHeapProfiler.prototype.stopSampling = function() {};

/**
  * @param {chromium.DevTools.HeapProfiler.StopTrackingHeapObjectsParams=} opt_params
  * @return {!Promise<chromium.DevTools.HeapProfiler.StopTrackingHeapObjectsResult>}
  */
chromium.DevTools.ExperimentalHeapProfiler.prototype.stopTrackingHeapObjects = function(opt_params) {};

/**
  * @param {chromium.DevTools.HeapProfiler.TakeHeapSnapshotParams=} opt_params
  * @return {!Promise<chromium.DevTools.HeapProfiler.TakeHeapSnapshotResult>}
  */
chromium.DevTools.ExperimentalHeapProfiler.prototype.takeHeapSnapshot = function(opt_params) {};


/**
  * @param {!function(!chromium.DevTools.HeapProfiler.AddHeapSnapshotChunkParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalHeapProfiler.prototype.onAddHeapSnapshotChunk = function(listener) {};

/**
  * If heap objects tracking has been started then backend may send update for one or more fragments
  *
  * @param {!function(!chromium.DevTools.HeapProfiler.HeapStatsUpdateParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalHeapProfiler.prototype.onHeapStatsUpdate = function(listener) {};

/**
  * If heap objects tracking has been started then backend regularly sends a current value for last
 * seen object id and corresponding timestamp. If the were changes in the heap since last event
 * then one or more heapStatsUpdate events will be sent before a new lastSeenObjectId event.
  *
  * @param {!function(!chromium.DevTools.HeapProfiler.LastSeenObjectIdParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalHeapProfiler.prototype.onLastSeenObjectId = function(listener) {};

/**
  * @param {!function(!chromium.DevTools.HeapProfiler.ReportHeapSnapshotProgressParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalHeapProfiler.prototype.onReportHeapSnapshotProgress = function(listener) {};

/**
  * @param {!function()} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalHeapProfiler.prototype.onResetProfiles = function(listener) {};



/**
  * Enables console to refer to the node with given id via $x (see Command Line API for more details
 * $x functions).
  *
  * @param {chromium.DevTools.HeapProfiler.AddInspectedHeapObjectParams} params
  * @return {!Promise<chromium.DevTools.HeapProfiler.AddInspectedHeapObjectResult>}
  */
chromium.DevTools.HeapProfiler.prototype.addInspectedHeapObject = function(params) {};

/**
  * @return {!Promise<chromium.DevTools.HeapProfiler.CollectGarbageResult>}
  */
chromium.DevTools.HeapProfiler.prototype.collectGarbage = function() {};

/**
  * @return {!Promise<chromium.DevTools.HeapProfiler.DisableResult>}
  */
chromium.DevTools.HeapProfiler.prototype.disable = function() {};

/**
  * @return {!Promise<chromium.DevTools.HeapProfiler.EnableResult>}
  */
chromium.DevTools.HeapProfiler.prototype.enable = function() {};

/**
  * @param {chromium.DevTools.HeapProfiler.GetHeapObjectIdParams} params
  * @return {!Promise<chromium.DevTools.HeapProfiler.GetHeapObjectIdResult>}
  */
chromium.DevTools.HeapProfiler.prototype.getHeapObjectId = function(params) {};

/**
  * @param {chromium.DevTools.HeapProfiler.GetObjectByHeapObjectIdParams} params
  * @return {!Promise<chromium.DevTools.HeapProfiler.GetObjectByHeapObjectIdResult>}
  */
chromium.DevTools.HeapProfiler.prototype.getObjectByHeapObjectId = function(params) {};

/**
  * @return {!Promise<chromium.DevTools.HeapProfiler.GetSamplingProfileResult>}
  */
chromium.DevTools.HeapProfiler.prototype.getSamplingProfile = function() {};

/**
  * @param {chromium.DevTools.HeapProfiler.StartSamplingParams=} opt_params
  * @return {!Promise<chromium.DevTools.HeapProfiler.StartSamplingResult>}
  */
chromium.DevTools.HeapProfiler.prototype.startSampling = function(opt_params) {};

/**
  * @param {chromium.DevTools.HeapProfiler.StartTrackingHeapObjectsParams=} opt_params
  * @return {!Promise<chromium.DevTools.HeapProfiler.StartTrackingHeapObjectsResult>}
  */
chromium.DevTools.HeapProfiler.prototype.startTrackingHeapObjects = function(opt_params) {};

/**
  * @return {!Promise<chromium.DevTools.HeapProfiler.StopSamplingResult>}
  */
chromium.DevTools.HeapProfiler.prototype.stopSampling = function() {};

/**
  * @param {chromium.DevTools.HeapProfiler.StopTrackingHeapObjectsParams=} opt_params
  * @return {!Promise<chromium.DevTools.HeapProfiler.StopTrackingHeapObjectsResult>}
  */
chromium.DevTools.HeapProfiler.prototype.stopTrackingHeapObjects = function(opt_params) {};

/**
  * @param {chromium.DevTools.HeapProfiler.TakeHeapSnapshotParams=} opt_params
  * @return {!Promise<chromium.DevTools.HeapProfiler.TakeHeapSnapshotResult>}
  */
chromium.DevTools.HeapProfiler.prototype.takeHeapSnapshot = function(opt_params) {};


/**
  * @param {!function(!chromium.DevTools.HeapProfiler.AddHeapSnapshotChunkParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.HeapProfiler.prototype.onAddHeapSnapshotChunk = function(listener) {};

/**
  * If heap objects tracking has been started then backend may send update for one or more fragments
  *
  * @param {!function(!chromium.DevTools.HeapProfiler.HeapStatsUpdateParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.HeapProfiler.prototype.onHeapStatsUpdate = function(listener) {};

/**
  * If heap objects tracking has been started then backend regularly sends a current value for last
 * seen object id and corresponding timestamp. If the were changes in the heap since last event
 * then one or more heapStatsUpdate events will be sent before a new lastSeenObjectId event.
  *
  * @param {!function(!chromium.DevTools.HeapProfiler.LastSeenObjectIdParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.HeapProfiler.prototype.onLastSeenObjectId = function(listener) {};

/**
  * @param {!function(!chromium.DevTools.HeapProfiler.ReportHeapSnapshotProgressParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.HeapProfiler.prototype.onReportHeapSnapshotProgress = function(listener) {};

/**
  * @param {!function()} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.HeapProfiler.prototype.onResetProfiles = function(listener) {};
