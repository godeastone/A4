// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * @fileoverview Generated DevTools bindings for the Profiler Domain.
 */
'use strict';

goog.provide('chromium.DevTools.ExperimentalProfiler');
goog.provide('chromium.DevTools.Profiler');
goog.require('chromium.DevTools.Connection');
goog.require('chromium.DevTools.Runtime');
goog.require('chromium.DevTools.Debugger');

goog.scope(function() {
const Connection = chromium.DevTools.Connection;
const Runtime = chromium.DevTools.Runtime;
const Debugger = chromium.DevTools.Debugger;

/**
 * Experimental bindings for the Profiler DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalProfiler = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;
}

const ExperimentalProfiler = chromium.DevTools.ExperimentalProfiler;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
ExperimentalProfiler.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}

/**
 * Bindings for the Profiler DevTools Domain.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.Profiler = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;

  /** @type {!ExperimentalProfiler} */
  this.experimental = new ExperimentalProfiler(connection);
}

const Profiler = chromium.DevTools.Profiler;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
Profiler.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}


/**
 * Profile node. Holds callsite information, execution statistics and child nodes.
 *
 * id: Unique id of the node.
 * callFrame: Function location.
 * hitCount: Number of samples where this node was on top of the call stack.
 * children: Child node ids.
 * deoptReason: The reason of being not optimized. The function may be deoptimized or marked as don't
 *   optimize.
 * positionTicks: An array of source position ticks.
 *
 * @typedef {{
 *   id: number,
 *   callFrame: !Runtime.CallFrame,
 *   hitCount: (number|undefined),
 *   children: (!Array.<number>|undefined),
 *   deoptReason: (string|undefined),
 *   positionTicks: (!Array.<!Profiler.PositionTickInfo>|undefined)
 * }}
 */
Profiler.ProfileNode;

/**
 * Profile.
 *
 * nodes: The list of profile nodes. First item is the root node.
 * startTime: Profiling start timestamp in microseconds.
 * endTime: Profiling end timestamp in microseconds.
 * samples: Ids of samples top nodes.
 * timeDeltas: Time intervals between adjacent samples in microseconds. The first delta is relative to the
 *   profile startTime.
 *
 * @typedef {{
 *   nodes: !Array.<!Profiler.ProfileNode>,
 *   startTime: number,
 *   endTime: number,
 *   samples: (!Array.<number>|undefined),
 *   timeDeltas: (!Array.<number>|undefined)
 * }}
 */
Profiler.Profile;

/**
 * Specifies a number of samples attributed to a certain source position.
 *
 * line: Source line number (1-based).
 * ticks: Number of samples attributed to the source line.
 *
 * @typedef {{
 *   line: number,
 *   ticks: number
 * }}
 */
Profiler.PositionTickInfo;

/**
 * Coverage data for a source range.
 *
 * startOffset: JavaScript script source offset for the range start.
 * endOffset: JavaScript script source offset for the range end.
 * count: Collected execution count of the source range.
 *
 * @typedef {{
 *   startOffset: number,
 *   endOffset: number,
 *   count: number
 * }}
 */
Profiler.CoverageRange;

/**
 * Coverage data for a JavaScript function.
 *
 * functionName: JavaScript function name.
 * ranges: Source ranges inside the function with coverage data.
 * isBlockCoverage: Whether coverage data for this function has block granularity.
 *
 * @typedef {{
 *   functionName: string,
 *   ranges: !Array.<!Profiler.CoverageRange>,
 *   isBlockCoverage: boolean
 * }}
 */
Profiler.FunctionCoverage;

/**
 * Coverage data for a JavaScript script.
 *
 * scriptId: JavaScript script id.
 * url: JavaScript script name or url.
 * functions: Functions contained in the script that has coverage data.
 *
 * @typedef {{
 *   scriptId: string,
 *   url: string,
 *   functions: !Array.<!Profiler.FunctionCoverage>
 * }}
 */
Profiler.ScriptCoverage;

/**
 * Describes a type collected during runtime.
 *
 * name: Name of a type collected with type profiling.
 *
 * @typedef {{
 *   name: string
 * }}
 */
Profiler.TypeObject;

/**
 * Source offset and types for a parameter or return value.
 *
 * offset: Source offset of the parameter or end of function for return values.
 * types: The types for this parameter or return value.
 *
 * @typedef {{
 *   offset: number,
 *   types: !Array.<!Profiler.TypeObject>
 * }}
 */
Profiler.TypeProfileEntry;

/**
 * Type profile data collected during runtime for a JavaScript script.
 *
 * scriptId: JavaScript script id.
 * url: JavaScript script name or url.
 * entries: Type profile entries for parameters and return values of the functions in the script.
 *
 * @typedef {{
 *   scriptId: string,
 *   url: string,
 *   entries: !Array.<!Profiler.TypeProfileEntry>
 * }}
 */
Profiler.ScriptTypeProfile;

/**
 * Parameters for the Disable command.
 *
 *
 * @typedef {undefined}
 */
Profiler.DisableParams;

/**
 * Result for the Disable command.
 *
 *
 * @typedef {undefined}
 */
Profiler.DisableResult;

/**
 * Parameters for the Enable command.
 *
 *
 * @typedef {undefined}
 */
Profiler.EnableParams;

/**
 * Result for the Enable command.
 *
 *
 * @typedef {undefined}
 */
Profiler.EnableResult;

/**
 * Parameters for the GetBestEffortCoverage command.
 *
 *
 * @typedef {undefined}
 */
Profiler.GetBestEffortCoverageParams;

/**
 * Result for the GetBestEffortCoverage command.
 *
 * result: Coverage data for the current isolate.
 *
 * @typedef {{
 *   result: !Array.<!Profiler.ScriptCoverage>
 * }}
 */
Profiler.GetBestEffortCoverageResult;

/**
 * Parameters for the SetSamplingInterval command.
 *
 * interval: New sampling interval in microseconds.
 *
 * @typedef {{
 *   interval: number
 * }}
 */
Profiler.SetSamplingIntervalParams;

/**
 * Result for the SetSamplingInterval command.
 *
 *
 * @typedef {undefined}
 */
Profiler.SetSamplingIntervalResult;

/**
 * Parameters for the Start command.
 *
 *
 * @typedef {undefined}
 */
Profiler.StartParams;

/**
 * Result for the Start command.
 *
 *
 * @typedef {undefined}
 */
Profiler.StartResult;

/**
 * Parameters for the StartPreciseCoverage command.
 *
 * callCount: Collect accurate call counts beyond simple 'covered' or 'not covered'.
 * detailed: Collect block-based coverage.
 *
 * @typedef {{
 *   callCount: (boolean|undefined),
 *   detailed: (boolean|undefined)
 * }}
 */
Profiler.StartPreciseCoverageParams;

/**
 * Result for the StartPreciseCoverage command.
 *
 *
 * @typedef {undefined}
 */
Profiler.StartPreciseCoverageResult;

/**
 * Parameters for the StartTypeProfile command.
 *
 *
 * @typedef {undefined}
 */
Profiler.StartTypeProfileParams;

/**
 * Result for the StartTypeProfile command.
 *
 *
 * @typedef {undefined}
 */
Profiler.StartTypeProfileResult;

/**
 * Parameters for the Stop command.
 *
 *
 * @typedef {undefined}
 */
Profiler.StopParams;

/**
 * Result for the Stop command.
 *
 * profile: Recorded profile.
 *
 * @typedef {{
 *   profile: !Profiler.Profile
 * }}
 */
Profiler.StopResult;

/**
 * Parameters for the StopPreciseCoverage command.
 *
 *
 * @typedef {undefined}
 */
Profiler.StopPreciseCoverageParams;

/**
 * Result for the StopPreciseCoverage command.
 *
 *
 * @typedef {undefined}
 */
Profiler.StopPreciseCoverageResult;

/**
 * Parameters for the StopTypeProfile command.
 *
 *
 * @typedef {undefined}
 */
Profiler.StopTypeProfileParams;

/**
 * Result for the StopTypeProfile command.
 *
 *
 * @typedef {undefined}
 */
Profiler.StopTypeProfileResult;

/**
 * Parameters for the TakePreciseCoverage command.
 *
 *
 * @typedef {undefined}
 */
Profiler.TakePreciseCoverageParams;

/**
 * Result for the TakePreciseCoverage command.
 *
 * result: Coverage data for the current isolate.
 *
 * @typedef {{
 *   result: !Array.<!Profiler.ScriptCoverage>
 * }}
 */
Profiler.TakePreciseCoverageResult;

/**
 * Parameters for the TakeTypeProfile command.
 *
 *
 * @typedef {undefined}
 */
Profiler.TakeTypeProfileParams;

/**
 * Result for the TakeTypeProfile command.
 *
 * result: Type profile for all scripts since startTypeProfile() was turned on.
 *
 * @typedef {{
 *   result: !Array.<!Profiler.ScriptTypeProfile>
 * }}
 */
Profiler.TakeTypeProfileResult;

/**
 * Parameters for the ConsoleProfileFinished event.
 *
 * location: Location of console.profileEnd().
 * title: Profile title passed as an argument to console.profile().
 *
 * @typedef {{
 *   id: string,
 *   location: !Debugger.Location,
 *   profile: !Profiler.Profile,
 *   title: (string|undefined)
 * }}
 */
Profiler.ConsoleProfileFinishedParams;

/**
 * Parameters for the ConsoleProfileStarted event.
 *
 * location: Location of console.profile().
 * title: Profile title passed as an argument to console.profile().
 *
 * @typedef {{
 *   id: string,
 *   location: !Debugger.Location,
 *   title: (string|undefined)
 * }}
 */
Profiler.ConsoleProfileStartedParams;



/**
  * @return {!Promise<Profiler.DisableResult>}
  */
ExperimentalProfiler.prototype.disable = function() {
  return this.connection_.sendDevToolsMessage('Profiler.disable', {});
};

/**
  * @return {!Promise<Profiler.EnableResult>}
  */
ExperimentalProfiler.prototype.enable = function() {
  return this.connection_.sendDevToolsMessage('Profiler.enable', {});
};

/**
  * Collect coverage data for the current isolate. The coverage data may be incomplete due to
 * garbage collection.
  *
  * @return {!Promise<Profiler.GetBestEffortCoverageResult>}
  */
ExperimentalProfiler.prototype.getBestEffortCoverage = function() {
  return this.connection_.sendDevToolsMessage('Profiler.getBestEffortCoverage', {});
};

/**
  * Changes CPU profiler sampling interval. Must be called before CPU profiles recording started.
  *
  * @param {Profiler.SetSamplingIntervalParams} params
  * @return {!Promise<Profiler.SetSamplingIntervalResult>}
  */
ExperimentalProfiler.prototype.setSamplingInterval = function(params) {
  return this.connection_.sendDevToolsMessage('Profiler.setSamplingInterval', params);
};

/**
  * @return {!Promise<Profiler.StartResult>}
  */
ExperimentalProfiler.prototype.start = function() {
  return this.connection_.sendDevToolsMessage('Profiler.start', {});
};

/**
  * Enable precise code coverage. Coverage data for JavaScript executed before enabling precise code
 * coverage may be incomplete. Enabling prevents running optimized code and resets execution
 * counters.
  *
  * @param {Profiler.StartPreciseCoverageParams=} opt_params
  * @return {!Promise<Profiler.StartPreciseCoverageResult>}
  */
ExperimentalProfiler.prototype.startPreciseCoverage = function(opt_params) {
  return this.connection_.sendDevToolsMessage('Profiler.startPreciseCoverage', opt_params || {});
};

/**
  * Enable type profile.
  *
  * @return {!Promise<Profiler.StartTypeProfileResult>}
  */
ExperimentalProfiler.prototype.startTypeProfile = function() {
  return this.connection_.sendDevToolsMessage('Profiler.startTypeProfile', {});
};

/**
  * @return {!Promise<Profiler.StopResult>}
  */
ExperimentalProfiler.prototype.stop = function() {
  return this.connection_.sendDevToolsMessage('Profiler.stop', {});
};

/**
  * Disable precise code coverage. Disabling releases unnecessary execution count records and allows
 * executing optimized code.
  *
  * @return {!Promise<Profiler.StopPreciseCoverageResult>}
  */
ExperimentalProfiler.prototype.stopPreciseCoverage = function() {
  return this.connection_.sendDevToolsMessage('Profiler.stopPreciseCoverage', {});
};

/**
  * Disable type profile. Disabling releases type profile data collected so far.
  *
  * @return {!Promise<Profiler.StopTypeProfileResult>}
  */
ExperimentalProfiler.prototype.stopTypeProfile = function() {
  return this.connection_.sendDevToolsMessage('Profiler.stopTypeProfile', {});
};

/**
  * Collect coverage data for the current isolate, and resets execution counters. Precise code
 * coverage needs to have started.
  *
  * @return {!Promise<Profiler.TakePreciseCoverageResult>}
  */
ExperimentalProfiler.prototype.takePreciseCoverage = function() {
  return this.connection_.sendDevToolsMessage('Profiler.takePreciseCoverage', {});
};

/**
  * Collect type profile.
  *
  * @return {!Promise<Profiler.TakeTypeProfileResult>}
  */
ExperimentalProfiler.prototype.takeTypeProfile = function() {
  return this.connection_.sendDevToolsMessage('Profiler.takeTypeProfile', {});
};


/**
  * @param {!function(!Profiler.ConsoleProfileFinishedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalProfiler.prototype.onConsoleProfileFinished = function(listener) {
  return this.connection_.addEventListener(
      'Profiler.consoleProfileFinished', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Sent when new profile recording is started using console.profile() call.
  *
  * @param {!function(!Profiler.ConsoleProfileStartedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalProfiler.prototype.onConsoleProfileStarted = function(listener) {
  return this.connection_.addEventListener(
      'Profiler.consoleProfileStarted', /** @type {!function(!Object): undefined} */ (listener));
};



/**
  * @return {!Promise<Profiler.DisableResult>}
  */
Profiler.prototype.disable = function() {
  return this.connection_.sendDevToolsMessage('Profiler.disable', {});
};

/**
  * @return {!Promise<Profiler.EnableResult>}
  */
Profiler.prototype.enable = function() {
  return this.connection_.sendDevToolsMessage('Profiler.enable', {});
};

/**
  * Collect coverage data for the current isolate. The coverage data may be incomplete due to
 * garbage collection.
  *
  * @return {!Promise<Profiler.GetBestEffortCoverageResult>}
  */
Profiler.prototype.getBestEffortCoverage = function() {
  return this.connection_.sendDevToolsMessage('Profiler.getBestEffortCoverage', {});
};

/**
  * Changes CPU profiler sampling interval. Must be called before CPU profiles recording started.
  *
  * @param {Profiler.SetSamplingIntervalParams} params
  * @return {!Promise<Profiler.SetSamplingIntervalResult>}
  */
Profiler.prototype.setSamplingInterval = function(params) {
  return this.connection_.sendDevToolsMessage('Profiler.setSamplingInterval', params);
};

/**
  * @return {!Promise<Profiler.StartResult>}
  */
Profiler.prototype.start = function() {
  return this.connection_.sendDevToolsMessage('Profiler.start', {});
};

/**
  * Enable precise code coverage. Coverage data for JavaScript executed before enabling precise code
 * coverage may be incomplete. Enabling prevents running optimized code and resets execution
 * counters.
  *
  * @param {Profiler.StartPreciseCoverageParams=} opt_params
  * @return {!Promise<Profiler.StartPreciseCoverageResult>}
  */
Profiler.prototype.startPreciseCoverage = function(opt_params) {
  return this.connection_.sendDevToolsMessage('Profiler.startPreciseCoverage', opt_params || {});
};

/**
  * Enable type profile.
  *
  * @return {!Promise<Profiler.StartTypeProfileResult>}
  */
Profiler.prototype.startTypeProfile = function() {
  return this.connection_.sendDevToolsMessage('Profiler.startTypeProfile', {});
};

/**
  * @return {!Promise<Profiler.StopResult>}
  */
Profiler.prototype.stop = function() {
  return this.connection_.sendDevToolsMessage('Profiler.stop', {});
};

/**
  * Disable precise code coverage. Disabling releases unnecessary execution count records and allows
 * executing optimized code.
  *
  * @return {!Promise<Profiler.StopPreciseCoverageResult>}
  */
Profiler.prototype.stopPreciseCoverage = function() {
  return this.connection_.sendDevToolsMessage('Profiler.stopPreciseCoverage', {});
};

/**
  * Disable type profile. Disabling releases type profile data collected so far.
  *
  * @return {!Promise<Profiler.StopTypeProfileResult>}
  */
Profiler.prototype.stopTypeProfile = function() {
  return this.connection_.sendDevToolsMessage('Profiler.stopTypeProfile', {});
};

/**
  * Collect coverage data for the current isolate, and resets execution counters. Precise code
 * coverage needs to have started.
  *
  * @return {!Promise<Profiler.TakePreciseCoverageResult>}
  */
Profiler.prototype.takePreciseCoverage = function() {
  return this.connection_.sendDevToolsMessage('Profiler.takePreciseCoverage', {});
};

/**
  * Collect type profile.
  *
  * @return {!Promise<Profiler.TakeTypeProfileResult>}
  */
Profiler.prototype.takeTypeProfile = function() {
  return this.connection_.sendDevToolsMessage('Profiler.takeTypeProfile', {});
};


/**
  * @param {!function(!Profiler.ConsoleProfileFinishedParams)} listener
  * @return {number} The id of this event listener.
  */
Profiler.prototype.onConsoleProfileFinished = function(listener) {
  return this.connection_.addEventListener(
      'Profiler.consoleProfileFinished', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Sent when new profile recording is started using console.profile() call.
  *
  * @param {!function(!Profiler.ConsoleProfileStartedParams)} listener
  * @return {number} The id of this event listener.
  */
Profiler.prototype.onConsoleProfileStarted = function(listener) {
  return this.connection_.addEventListener(
      'Profiler.consoleProfileStarted', /** @type {!function(!Object): undefined} */ (listener));
};

});  // goog.scope

