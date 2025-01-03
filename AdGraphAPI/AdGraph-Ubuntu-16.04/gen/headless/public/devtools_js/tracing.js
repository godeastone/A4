// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * @fileoverview Generated DevTools bindings for the Tracing Domain.
 */
'use strict';

goog.provide('chromium.DevTools.ExperimentalTracing');
goog.provide('chromium.DevTools.Tracing');
goog.require('chromium.DevTools.Connection');
goog.require('chromium.DevTools.IO');

goog.scope(function() {
const Connection = chromium.DevTools.Connection;
const IO = chromium.DevTools.IO;

/**
 * Experimental bindings for the Tracing DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalTracing = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;
}

const ExperimentalTracing = chromium.DevTools.ExperimentalTracing;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
ExperimentalTracing.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}

/**
 * Bindings for the Tracing DevTools Domain.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.Tracing = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;

  /** @type {!ExperimentalTracing} */
  this.experimental = new ExperimentalTracing(connection);
}

const Tracing = chromium.DevTools.Tracing;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
Tracing.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}

/**
 * Compression type to use for traces returned via streams.
 *
 * @enum {string}
 */
Tracing.StreamCompression = {
    NONE: "none",
    GZIP: "gzip"
};

/**
 * Controls how the trace buffer stores data.
 *
 * @enum {string}
 */
Tracing.TraceConfigRecordMode = {
    RECORD_UNTIL_FULL: "recordUntilFull",
    RECORD_CONTINUOUSLY: "recordContinuously",
    RECORD_AS_MUCH_AS_POSSIBLE: "recordAsMuchAsPossible",
    ECHO_TO_CONSOLE: "echoToConsole"
};

/**
 * Whether to report trace events as series of dataCollected events or to save trace to a
 * stream (defaults to `ReportEvents`).
 *
 * @enum {string}
 */
Tracing.StartTransferMode = {
    REPORT_EVENTS: "ReportEvents",
    RETURN_AS_STREAM: "ReturnAsStream"
};


/**
 * recordMode: Controls how the trace buffer stores data.
 * enableSampling: Turns on JavaScript stack sampling.
 * enableSystrace: Turns on system tracing.
 * enableArgumentFilter: Turns on argument filter.
 * includedCategories: Included category filters.
 * excludedCategories: Excluded category filters.
 * syntheticDelays: Configuration to synthesize the delays in tracing.
 * memoryDumpConfig: Configuration for memory dump triggers. Used only when "memory-infra" category is enabled.
 *
 * @typedef {{
 *   recordMode: (!Tracing.TraceConfigRecordMode|undefined),
 *   enableSampling: (boolean|undefined),
 *   enableSystrace: (boolean|undefined),
 *   enableArgumentFilter: (boolean|undefined),
 *   includedCategories: (!Array.<string>|undefined),
 *   excludedCategories: (!Array.<string>|undefined),
 *   syntheticDelays: (!Array.<string>|undefined),
 *   memoryDumpConfig: (Object|undefined)
 * }}
 */
Tracing.TraceConfig;

/**
 * Parameters for the End command.
 *
 *
 * @typedef {undefined}
 */
Tracing.EndParams;

/**
 * Result for the End command.
 *
 *
 * @typedef {undefined}
 */
Tracing.EndResult;

/**
 * Parameters for the GetCategories command.
 *
 *
 * @typedef {undefined}
 */
Tracing.GetCategoriesParams;

/**
 * Result for the GetCategories command.
 *
 * categories: A list of supported tracing categories.
 *
 * @typedef {{
 *   categories: !Array.<string>
 * }}
 */
Tracing.GetCategoriesResult;

/**
 * Parameters for the RecordClockSyncMarker command.
 *
 * syncId: The ID of this clock sync marker
 *
 * @typedef {{
 *   syncId: string
 * }}
 */
Tracing.RecordClockSyncMarkerParams;

/**
 * Result for the RecordClockSyncMarker command.
 *
 *
 * @typedef {undefined}
 */
Tracing.RecordClockSyncMarkerResult;

/**
 * Parameters for the RequestMemoryDump command.
 *
 *
 * @typedef {undefined}
 */
Tracing.RequestMemoryDumpParams;

/**
 * Result for the RequestMemoryDump command.
 *
 * dumpGuid: GUID of the resulting global memory dump.
 * success: True iff the global memory dump succeeded.
 *
 * @typedef {{
 *   dumpGuid: string,
 *   success: boolean
 * }}
 */
Tracing.RequestMemoryDumpResult;

/**
 * Parameters for the Start command.
 *
 * categories: Category/tag filter
 * options: Tracing options
 * bufferUsageReportingInterval: If set, the agent will issue bufferUsage events at this interval, specified in milliseconds
 * transferMode: Whether to report trace events as series of dataCollected events or to save trace to a
 *   stream (defaults to `ReportEvents`).
 * streamCompression: Compression format to use. This only applies when using `ReturnAsStream`
 *   transfer mode (defaults to `none`)
 *
 * @typedef {{
 *   categories: (string|undefined),
 *   options: (string|undefined),
 *   bufferUsageReportingInterval: (number|undefined),
 *   transferMode: (!Tracing.StartTransferMode|undefined),
 *   streamCompression: (!Tracing.StreamCompression|undefined),
 *   traceConfig: (!Tracing.TraceConfig|undefined)
 * }}
 */
Tracing.StartParams;

/**
 * Result for the Start command.
 *
 *
 * @typedef {undefined}
 */
Tracing.StartResult;

/**
 * Parameters for the BufferUsage event.
 *
 * percentFull: A number in range [0..1] that indicates the used size of event buffer as a fraction of its
 *   total size.
 * eventCount: An approximate number of events in the trace log.
 * value: A number in range [0..1] that indicates the used size of event buffer as a fraction of its
 *   total size.
 *
 * @typedef {{
 *   percentFull: (number|undefined),
 *   eventCount: (number|undefined),
 *   value: (number|undefined)
 * }}
 */
Tracing.BufferUsageParams;

/**
 * Parameters for the DataCollected event.
 *
 *
 * @typedef {{
 *   value: !Array.<!Object>
 * }}
 */
Tracing.DataCollectedParams;

/**
 * Parameters for the TracingComplete event.
 *
 * stream: A handle of the stream that holds resulting trace data.
 * streamCompression: Compression format of returned stream.
 *
 * @typedef {{
 *   stream: (string|undefined),
 *   streamCompression: (!Tracing.StreamCompression|undefined)
 * }}
 */
Tracing.TracingCompleteParams;



/**
  * Stop trace events collection.
  *
  * @return {!Promise<Tracing.EndResult>}
  */
ExperimentalTracing.prototype.end = function() {
  return this.connection_.sendDevToolsMessage('Tracing.end', {});
};

/**
  * Gets supported tracing categories.
  *
  * @return {!Promise<Tracing.GetCategoriesResult>}
  */
ExperimentalTracing.prototype.getCategories = function() {
  return this.connection_.sendDevToolsMessage('Tracing.getCategories', {});
};

/**
  * Record a clock sync marker in the trace.
  *
  * @param {Tracing.RecordClockSyncMarkerParams} params
  * @return {!Promise<Tracing.RecordClockSyncMarkerResult>}
  */
ExperimentalTracing.prototype.recordClockSyncMarker = function(params) {
  return this.connection_.sendDevToolsMessage('Tracing.recordClockSyncMarker', params);
};

/**
  * Request a global memory dump.
  *
  * @return {!Promise<Tracing.RequestMemoryDumpResult>}
  */
ExperimentalTracing.prototype.requestMemoryDump = function() {
  return this.connection_.sendDevToolsMessage('Tracing.requestMemoryDump', {});
};

/**
  * Start trace events collection.
  *
  * @param {Tracing.StartParams=} opt_params
  * @return {!Promise<Tracing.StartResult>}
  */
ExperimentalTracing.prototype.start = function(opt_params) {
  return this.connection_.sendDevToolsMessage('Tracing.start', opt_params || {});
};


/**
  * @param {!function(!Tracing.BufferUsageParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalTracing.prototype.onBufferUsage = function(listener) {
  return this.connection_.addEventListener(
      'Tracing.bufferUsage', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Contains an bucket of collected trace events. When tracing is stopped collected events will be
 * send as a sequence of dataCollected events followed by tracingComplete event.
  *
  * @param {!function(!Tracing.DataCollectedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalTracing.prototype.onDataCollected = function(listener) {
  return this.connection_.addEventListener(
      'Tracing.dataCollected', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Signals that tracing is stopped and there is no trace buffers pending flush, all data were
 * delivered via dataCollected events.
  *
  * @param {!function(!Tracing.TracingCompleteParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalTracing.prototype.onTracingComplete = function(listener) {
  return this.connection_.addEventListener(
      'Tracing.tracingComplete', /** @type {!function(!Object): undefined} */ (listener));
};



/**
  * Stop trace events collection.
  *
  * @return {!Promise<Tracing.EndResult>}
  */
Tracing.prototype.end = function() {
  return this.connection_.sendDevToolsMessage('Tracing.end', {});
};

/**
  * Gets supported tracing categories.
  *
  * @return {!Promise<Tracing.GetCategoriesResult>}
  */
Tracing.prototype.getCategories = function() {
  return this.connection_.sendDevToolsMessage('Tracing.getCategories', {});
};

/**
  * Record a clock sync marker in the trace.
  *
  * @param {Tracing.RecordClockSyncMarkerParams} params
  * @return {!Promise<Tracing.RecordClockSyncMarkerResult>}
  */
Tracing.prototype.recordClockSyncMarker = function(params) {
  return this.connection_.sendDevToolsMessage('Tracing.recordClockSyncMarker', params);
};

/**
  * Request a global memory dump.
  *
  * @return {!Promise<Tracing.RequestMemoryDumpResult>}
  */
Tracing.prototype.requestMemoryDump = function() {
  return this.connection_.sendDevToolsMessage('Tracing.requestMemoryDump', {});
};

/**
  * Start trace events collection.
  *
  * @param {Tracing.StartParams=} opt_params
  * @return {!Promise<Tracing.StartResult>}
  */
Tracing.prototype.start = function(opt_params) {
  return this.connection_.sendDevToolsMessage('Tracing.start', opt_params || {});
};


/**
  * @param {!function(!Tracing.BufferUsageParams)} listener
  * @return {number} The id of this event listener.
  */
Tracing.prototype.onBufferUsage = function(listener) {
  return this.connection_.addEventListener(
      'Tracing.bufferUsage', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Contains an bucket of collected trace events. When tracing is stopped collected events will be
 * send as a sequence of dataCollected events followed by tracingComplete event.
  *
  * @param {!function(!Tracing.DataCollectedParams)} listener
  * @return {number} The id of this event listener.
  */
Tracing.prototype.onDataCollected = function(listener) {
  return this.connection_.addEventListener(
      'Tracing.dataCollected', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Signals that tracing is stopped and there is no trace buffers pending flush, all data were
 * delivered via dataCollected events.
  *
  * @param {!function(!Tracing.TracingCompleteParams)} listener
  * @return {number} The id of this event listener.
  */
Tracing.prototype.onTracingComplete = function(listener) {
  return this.connection_.addEventListener(
      'Tracing.tracingComplete', /** @type {!function(!Object): undefined} */ (listener));
};

});  // goog.scope

