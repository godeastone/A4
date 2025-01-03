// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * Experimental bindings for the Profiler DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalProfiler = function(connection) {};

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.ExperimentalProfiler.prototype.removeEventListener = function(id) {};

/**
 * Bindings for the Profiler DevTools Domain.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.Profiler = function(connection) {};

/** @type {!chromium.DevTools.ExperimentalProfiler} */
chromium.DevTools.Profiler.prototype.experimental;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.Profiler.prototype.removeEventListener = function(id) {};


/**
 * Profile node. Holds callsite information, execution statistics and child nodes.
 *
 * id: Unique id of the node.
 * callFrame: Function location.
 * hitCount: Number of samples where this node was on top of the call stack.
 * children: Child node ids.
 * deoptReason: The reason of being not optimized. The function may be deoptimized or marked as don't
 *    optimize.
 * positionTicks: An array of source position ticks.
 *
 * @typedef {{
 *   id: number,
 *   callFrame: !chromium.DevTools.Runtime.CallFrame,
 *   hitCount: (number|undefined),
 *   children: (!Array.<number>|undefined),
 *   deoptReason: (string|undefined),
 *   positionTicks: (!Array.<!chromium.DevTools.Profiler.PositionTickInfo>|undefined)
 * }}
 */
chromium.DevTools.Profiler.ProfileNode;

/**
 * Profile.
 *
 * nodes: The list of profile nodes. First item is the root node.
 * startTime: Profiling start timestamp in microseconds.
 * endTime: Profiling end timestamp in microseconds.
 * samples: Ids of samples top nodes.
 * timeDeltas: Time intervals between adjacent samples in microseconds. The first delta is relative to the
 *    profile startTime.
 *
 * @typedef {{
 *   nodes: !Array.<!chromium.DevTools.Profiler.ProfileNode>,
 *   startTime: number,
 *   endTime: number,
 *   samples: (!Array.<number>|undefined),
 *   timeDeltas: (!Array.<number>|undefined)
 * }}
 */
chromium.DevTools.Profiler.Profile;

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
chromium.DevTools.Profiler.PositionTickInfo;

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
chromium.DevTools.Profiler.CoverageRange;

/**
 * Coverage data for a JavaScript function.
 *
 * functionName: JavaScript function name.
 * ranges: Source ranges inside the function with coverage data.
 * isBlockCoverage: Whether coverage data for this function has block granularity.
 *
 * @typedef {{
 *   functionName: string,
 *   ranges: !Array.<!chromium.DevTools.Profiler.CoverageRange>,
 *   isBlockCoverage: boolean
 * }}
 */
chromium.DevTools.Profiler.FunctionCoverage;

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
 *   functions: !Array.<!chromium.DevTools.Profiler.FunctionCoverage>
 * }}
 */
chromium.DevTools.Profiler.ScriptCoverage;

/**
 * Describes a type collected during runtime.
 *
 * name: Name of a type collected with type profiling.
 *
 * @typedef {{
 *   name: string
 * }}
 */
chromium.DevTools.Profiler.TypeObject;

/**
 * Source offset and types for a parameter or return value.
 *
 * offset: Source offset of the parameter or end of function for return values.
 * types: The types for this parameter or return value.
 *
 * @typedef {{
 *   offset: number,
 *   types: !Array.<!chromium.DevTools.Profiler.TypeObject>
 * }}
 */
chromium.DevTools.Profiler.TypeProfileEntry;

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
 *   entries: !Array.<!chromium.DevTools.Profiler.TypeProfileEntry>
 * }}
 */
chromium.DevTools.Profiler.ScriptTypeProfile;

/**
 * Parameters for the Disable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Profiler.DisableParams;

/**
 * Result for the Disable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Profiler.DisableResult;

/**
 * Parameters for the Enable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Profiler.EnableParams;

/**
 * Result for the Enable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Profiler.EnableResult;

/**
 * Parameters for the GetBestEffortCoverage command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Profiler.GetBestEffortCoverageParams;

/**
 * Result for the GetBestEffortCoverage command.
 *
 * result: Coverage data for the current isolate.
 *
 * @typedef {{
 *   result: !Array.<!chromium.DevTools.Profiler.ScriptCoverage>
 * }}
 */
chromium.DevTools.Profiler.GetBestEffortCoverageResult;

/**
 * Parameters for the SetSamplingInterval command.
 *
 * interval: New sampling interval in microseconds.
 *
 * @typedef {{
 *   interval: number
 * }}
 */
chromium.DevTools.Profiler.SetSamplingIntervalParams;

/**
 * Result for the SetSamplingInterval command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Profiler.SetSamplingIntervalResult;

/**
 * Parameters for the Start command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Profiler.StartParams;

/**
 * Result for the Start command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Profiler.StartResult;

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
chromium.DevTools.Profiler.StartPreciseCoverageParams;

/**
 * Result for the StartPreciseCoverage command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Profiler.StartPreciseCoverageResult;

/**
 * Parameters for the StartTypeProfile command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Profiler.StartTypeProfileParams;

/**
 * Result for the StartTypeProfile command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Profiler.StartTypeProfileResult;

/**
 * Parameters for the Stop command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Profiler.StopParams;

/**
 * Result for the Stop command.
 *
 * profile: Recorded profile.
 *
 * @typedef {{
 *   profile: !chromium.DevTools.Profiler.Profile
 * }}
 */
chromium.DevTools.Profiler.StopResult;

/**
 * Parameters for the StopPreciseCoverage command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Profiler.StopPreciseCoverageParams;

/**
 * Result for the StopPreciseCoverage command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Profiler.StopPreciseCoverageResult;

/**
 * Parameters for the StopTypeProfile command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Profiler.StopTypeProfileParams;

/**
 * Result for the StopTypeProfile command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Profiler.StopTypeProfileResult;

/**
 * Parameters for the TakePreciseCoverage command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Profiler.TakePreciseCoverageParams;

/**
 * Result for the TakePreciseCoverage command.
 *
 * result: Coverage data for the current isolate.
 *
 * @typedef {{
 *   result: !Array.<!chromium.DevTools.Profiler.ScriptCoverage>
 * }}
 */
chromium.DevTools.Profiler.TakePreciseCoverageResult;

/**
 * Parameters for the TakeTypeProfile command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Profiler.TakeTypeProfileParams;

/**
 * Result for the TakeTypeProfile command.
 *
 * result: Type profile for all scripts since startTypeProfile() was turned on.
 *
 * @typedef {{
 *   result: !Array.<!chromium.DevTools.Profiler.ScriptTypeProfile>
 * }}
 */
chromium.DevTools.Profiler.TakeTypeProfileResult;

/**
 * Parameters for the ConsoleProfileFinished event.
 *
 * location: Location of console.profileEnd().
 * title: Profile title passed as an argument to console.profile().
 *
 * @typedef {{
 *   id: string,
 *   location: !chromium.DevTools.Debugger.Location,
 *   profile: !chromium.DevTools.Profiler.Profile,
 *   title: (string|undefined)
 * }}
 */
chromium.DevTools.Profiler.ConsoleProfileFinishedParams;

/**
 * Parameters for the ConsoleProfileStarted event.
 *
 * location: Location of console.profile().
 * title: Profile title passed as an argument to console.profile().
 *
 * @typedef {{
 *   id: string,
 *   location: !chromium.DevTools.Debugger.Location,
 *   title: (string|undefined)
 * }}
 */
chromium.DevTools.Profiler.ConsoleProfileStartedParams;



/**
  * @return {!Promise<chromium.DevTools.Profiler.DisableResult>}
  */
chromium.DevTools.ExperimentalProfiler.prototype.disable = function() {};

/**
  * @return {!Promise<chromium.DevTools.Profiler.EnableResult>}
  */
chromium.DevTools.ExperimentalProfiler.prototype.enable = function() {};

/**
  * Collect coverage data for the current isolate. The coverage data may be incomplete due to
 * garbage collection.
  *
  * @return {!Promise<chromium.DevTools.Profiler.GetBestEffortCoverageResult>}
  */
chromium.DevTools.ExperimentalProfiler.prototype.getBestEffortCoverage = function() {};

/**
  * Changes CPU profiler sampling interval. Must be called before CPU profiles recording started.
  *
  * @param {chromium.DevTools.Profiler.SetSamplingIntervalParams} params
  * @return {!Promise<chromium.DevTools.Profiler.SetSamplingIntervalResult>}
  */
chromium.DevTools.ExperimentalProfiler.prototype.setSamplingInterval = function(params) {};

/**
  * @return {!Promise<chromium.DevTools.Profiler.StartResult>}
  */
chromium.DevTools.ExperimentalProfiler.prototype.start = function() {};

/**
  * Enable precise code coverage. Coverage data for JavaScript executed before enabling precise code
 * coverage may be incomplete. Enabling prevents running optimized code and resets execution
 * counters.
  *
  * @param {chromium.DevTools.Profiler.StartPreciseCoverageParams=} opt_params
  * @return {!Promise<chromium.DevTools.Profiler.StartPreciseCoverageResult>}
  */
chromium.DevTools.ExperimentalProfiler.prototype.startPreciseCoverage = function(opt_params) {};

/**
  * Enable type profile.
  *
  * @return {!Promise<chromium.DevTools.Profiler.StartTypeProfileResult>}
  */
chromium.DevTools.ExperimentalProfiler.prototype.startTypeProfile = function() {};

/**
  * @return {!Promise<chromium.DevTools.Profiler.StopResult>}
  */
chromium.DevTools.ExperimentalProfiler.prototype.stop = function() {};

/**
  * Disable precise code coverage. Disabling releases unnecessary execution count records and allows
 * executing optimized code.
  *
  * @return {!Promise<chromium.DevTools.Profiler.StopPreciseCoverageResult>}
  */
chromium.DevTools.ExperimentalProfiler.prototype.stopPreciseCoverage = function() {};

/**
  * Disable type profile. Disabling releases type profile data collected so far.
  *
  * @return {!Promise<chromium.DevTools.Profiler.StopTypeProfileResult>}
  */
chromium.DevTools.ExperimentalProfiler.prototype.stopTypeProfile = function() {};

/**
  * Collect coverage data for the current isolate, and resets execution counters. Precise code
 * coverage needs to have started.
  *
  * @return {!Promise<chromium.DevTools.Profiler.TakePreciseCoverageResult>}
  */
chromium.DevTools.ExperimentalProfiler.prototype.takePreciseCoverage = function() {};

/**
  * Collect type profile.
  *
  * @return {!Promise<chromium.DevTools.Profiler.TakeTypeProfileResult>}
  */
chromium.DevTools.ExperimentalProfiler.prototype.takeTypeProfile = function() {};


/**
  * @param {!function(!chromium.DevTools.Profiler.ConsoleProfileFinishedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalProfiler.prototype.onConsoleProfileFinished = function(listener) {};

/**
  * Sent when new profile recording is started using console.profile() call.
  *
  * @param {!function(!chromium.DevTools.Profiler.ConsoleProfileStartedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalProfiler.prototype.onConsoleProfileStarted = function(listener) {};



/**
  * @return {!Promise<chromium.DevTools.Profiler.DisableResult>}
  */
chromium.DevTools.Profiler.prototype.disable = function() {};

/**
  * @return {!Promise<chromium.DevTools.Profiler.EnableResult>}
  */
chromium.DevTools.Profiler.prototype.enable = function() {};

/**
  * Collect coverage data for the current isolate. The coverage data may be incomplete due to
 * garbage collection.
  *
  * @return {!Promise<chromium.DevTools.Profiler.GetBestEffortCoverageResult>}
  */
chromium.DevTools.Profiler.prototype.getBestEffortCoverage = function() {};

/**
  * Changes CPU profiler sampling interval. Must be called before CPU profiles recording started.
  *
  * @param {chromium.DevTools.Profiler.SetSamplingIntervalParams} params
  * @return {!Promise<chromium.DevTools.Profiler.SetSamplingIntervalResult>}
  */
chromium.DevTools.Profiler.prototype.setSamplingInterval = function(params) {};

/**
  * @return {!Promise<chromium.DevTools.Profiler.StartResult>}
  */
chromium.DevTools.Profiler.prototype.start = function() {};

/**
  * Enable precise code coverage. Coverage data for JavaScript executed before enabling precise code
 * coverage may be incomplete. Enabling prevents running optimized code and resets execution
 * counters.
  *
  * @param {chromium.DevTools.Profiler.StartPreciseCoverageParams=} opt_params
  * @return {!Promise<chromium.DevTools.Profiler.StartPreciseCoverageResult>}
  */
chromium.DevTools.Profiler.prototype.startPreciseCoverage = function(opt_params) {};

/**
  * Enable type profile.
  *
  * @return {!Promise<chromium.DevTools.Profiler.StartTypeProfileResult>}
  */
chromium.DevTools.Profiler.prototype.startTypeProfile = function() {};

/**
  * @return {!Promise<chromium.DevTools.Profiler.StopResult>}
  */
chromium.DevTools.Profiler.prototype.stop = function() {};

/**
  * Disable precise code coverage. Disabling releases unnecessary execution count records and allows
 * executing optimized code.
  *
  * @return {!Promise<chromium.DevTools.Profiler.StopPreciseCoverageResult>}
  */
chromium.DevTools.Profiler.prototype.stopPreciseCoverage = function() {};

/**
  * Disable type profile. Disabling releases type profile data collected so far.
  *
  * @return {!Promise<chromium.DevTools.Profiler.StopTypeProfileResult>}
  */
chromium.DevTools.Profiler.prototype.stopTypeProfile = function() {};

/**
  * Collect coverage data for the current isolate, and resets execution counters. Precise code
 * coverage needs to have started.
  *
  * @return {!Promise<chromium.DevTools.Profiler.TakePreciseCoverageResult>}
  */
chromium.DevTools.Profiler.prototype.takePreciseCoverage = function() {};

/**
  * Collect type profile.
  *
  * @return {!Promise<chromium.DevTools.Profiler.TakeTypeProfileResult>}
  */
chromium.DevTools.Profiler.prototype.takeTypeProfile = function() {};


/**
  * @param {!function(!chromium.DevTools.Profiler.ConsoleProfileFinishedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Profiler.prototype.onConsoleProfileFinished = function(listener) {};

/**
  * Sent when new profile recording is started using console.profile() call.
  *
  * @param {!function(!chromium.DevTools.Profiler.ConsoleProfileStartedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Profiler.prototype.onConsoleProfileStarted = function(listener) {};
