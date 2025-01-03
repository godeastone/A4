// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * Experimental bindings for the Tracing DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalTracing = function(connection) {};

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.ExperimentalTracing.prototype.removeEventListener = function(id) {};

/**
 * Bindings for the Tracing DevTools Domain.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.Tracing = function(connection) {};

/** @type {!chromium.DevTools.ExperimentalTracing} */
chromium.DevTools.Tracing.prototype.experimental;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.Tracing.prototype.removeEventListener = function(id) {};

/**
 * Compression type to use for traces returned via streams.
 *
 * @enum {string}
 */
chromium.DevTools.Tracing.StreamCompression = {
    NONE: "none",
    GZIP: "gzip"
};

/**
 * Controls how the trace buffer stores data.
 *
 * @enum {string}
 */
chromium.DevTools.Tracing.TraceConfigRecordMode = {
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
chromium.DevTools.Tracing.StartTransferMode = {
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
 *   recordMode: (!chromium.DevTools.Tracing.TraceConfigRecordMode|undefined),
 *   enableSampling: (boolean|undefined),
 *   enableSystrace: (boolean|undefined),
 *   enableArgumentFilter: (boolean|undefined),
 *   includedCategories: (!Array.<string>|undefined),
 *   excludedCategories: (!Array.<string>|undefined),
 *   syntheticDelays: (!Array.<string>|undefined),
 *   memoryDumpConfig: (Object|undefined)
 * }}
 */
chromium.DevTools.Tracing.TraceConfig;

/**
 * Parameters for the End command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Tracing.EndParams;

/**
 * Result for the End command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Tracing.EndResult;

/**
 * Parameters for the GetCategories command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Tracing.GetCategoriesParams;

/**
 * Result for the GetCategories command.
 *
 * categories: A list of supported tracing categories.
 *
 * @typedef {{
 *   categories: !Array.<string>
 * }}
 */
chromium.DevTools.Tracing.GetCategoriesResult;

/**
 * Parameters for the RecordClockSyncMarker command.
 *
 * syncId: The ID of this clock sync marker
 *
 * @typedef {{
 *   syncId: string
 * }}
 */
chromium.DevTools.Tracing.RecordClockSyncMarkerParams;

/**
 * Result for the RecordClockSyncMarker command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Tracing.RecordClockSyncMarkerResult;

/**
 * Parameters for the RequestMemoryDump command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Tracing.RequestMemoryDumpParams;

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
chromium.DevTools.Tracing.RequestMemoryDumpResult;

/**
 * Parameters for the Start command.
 *
 * categories: Category/tag filter
 * options: Tracing options
 * bufferUsageReportingInterval: If set, the agent will issue bufferUsage events at this interval, specified in milliseconds
 * transferMode: Whether to report trace events as series of dataCollected events or to save trace to a
 *    stream (defaults to `ReportEvents`).
 * streamCompression: Compression format to use. This only applies when using `ReturnAsStream`
 *    transfer mode (defaults to `none`)
 *
 * @typedef {{
 *   categories: (string|undefined),
 *   options: (string|undefined),
 *   bufferUsageReportingInterval: (number|undefined),
 *   transferMode: (!chromium.DevTools.Tracing.StartTransferMode|undefined),
 *   streamCompression: (!chromium.DevTools.Tracing.StreamCompression|undefined),
 *   traceConfig: (!chromium.DevTools.Tracing.TraceConfig|undefined)
 * }}
 */
chromium.DevTools.Tracing.StartParams;

/**
 * Result for the Start command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Tracing.StartResult;

/**
 * Parameters for the BufferUsage event.
 *
 * percentFull: A number in range [0..1] that indicates the used size of event buffer as a fraction of its
 *    total size.
 * eventCount: An approximate number of events in the trace log.
 * value: A number in range [0..1] that indicates the used size of event buffer as a fraction of its
 *    total size.
 *
 * @typedef {{
 *   percentFull: (number|undefined),
 *   eventCount: (number|undefined),
 *   value: (number|undefined)
 * }}
 */
chromium.DevTools.Tracing.BufferUsageParams;

/**
 * Parameters for the DataCollected event.
 *
 *
 * @typedef {{
 *   value: !Array.<!Object>
 * }}
 */
chromium.DevTools.Tracing.DataCollectedParams;

/**
 * Parameters for the TracingComplete event.
 *
 * stream: A handle of the stream that holds resulting trace data.
 * streamCompression: Compression format of returned stream.
 *
 * @typedef {{
 *   stream: (string|undefined),
 *   streamCompression: (!chromium.DevTools.Tracing.StreamCompression|undefined)
 * }}
 */
chromium.DevTools.Tracing.TracingCompleteParams;



/**
  * Stop trace events collection.
  *
  * @return {!Promise<chromium.DevTools.Tracing.EndResult>}
  */
chromium.DevTools.ExperimentalTracing.prototype.end = function() {};

/**
  * Gets supported tracing categories.
  *
  * @return {!Promise<chromium.DevTools.Tracing.GetCategoriesResult>}
  */
chromium.DevTools.ExperimentalTracing.prototype.getCategories = function() {};

/**
  * Record a clock sync marker in the trace.
  *
  * @param {chromium.DevTools.Tracing.RecordClockSyncMarkerParams} params
  * @return {!Promise<chromium.DevTools.Tracing.RecordClockSyncMarkerResult>}
  */
chromium.DevTools.ExperimentalTracing.prototype.recordClockSyncMarker = function(params) {};

/**
  * Request a global memory dump.
  *
  * @return {!Promise<chromium.DevTools.Tracing.RequestMemoryDumpResult>}
  */
chromium.DevTools.ExperimentalTracing.prototype.requestMemoryDump = function() {};

/**
  * Start trace events collection.
  *
  * @param {chromium.DevTools.Tracing.StartParams=} opt_params
  * @return {!Promise<chromium.DevTools.Tracing.StartResult>}
  */
chromium.DevTools.ExperimentalTracing.prototype.start = function(opt_params) {};


/**
  * @param {!function(!chromium.DevTools.Tracing.BufferUsageParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalTracing.prototype.onBufferUsage = function(listener) {};

/**
  * Contains an bucket of collected trace events. When tracing is stopped collected events will be
 * send as a sequence of dataCollected events followed by tracingComplete event.
  *
  * @param {!function(!chromium.DevTools.Tracing.DataCollectedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalTracing.prototype.onDataCollected = function(listener) {};

/**
  * Signals that tracing is stopped and there is no trace buffers pending flush, all data were
 * delivered via dataCollected events.
  *
  * @param {!function(!chromium.DevTools.Tracing.TracingCompleteParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalTracing.prototype.onTracingComplete = function(listener) {};



/**
  * Stop trace events collection.
  *
  * @return {!Promise<chromium.DevTools.Tracing.EndResult>}
  */
chromium.DevTools.Tracing.prototype.end = function() {};

/**
  * Gets supported tracing categories.
  *
  * @return {!Promise<chromium.DevTools.Tracing.GetCategoriesResult>}
  */
chromium.DevTools.Tracing.prototype.getCategories = function() {};

/**
  * Record a clock sync marker in the trace.
  *
  * @param {chromium.DevTools.Tracing.RecordClockSyncMarkerParams} params
  * @return {!Promise<chromium.DevTools.Tracing.RecordClockSyncMarkerResult>}
  */
chromium.DevTools.Tracing.prototype.recordClockSyncMarker = function(params) {};

/**
  * Request a global memory dump.
  *
  * @return {!Promise<chromium.DevTools.Tracing.RequestMemoryDumpResult>}
  */
chromium.DevTools.Tracing.prototype.requestMemoryDump = function() {};

/**
  * Start trace events collection.
  *
  * @param {chromium.DevTools.Tracing.StartParams=} opt_params
  * @return {!Promise<chromium.DevTools.Tracing.StartResult>}
  */
chromium.DevTools.Tracing.prototype.start = function(opt_params) {};


/**
  * @param {!function(!chromium.DevTools.Tracing.BufferUsageParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Tracing.prototype.onBufferUsage = function(listener) {};

/**
  * Contains an bucket of collected trace events. When tracing is stopped collected events will be
 * send as a sequence of dataCollected events followed by tracingComplete event.
  *
  * @param {!function(!chromium.DevTools.Tracing.DataCollectedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Tracing.prototype.onDataCollected = function(listener) {};

/**
  * Signals that tracing is stopped and there is no trace buffers pending flush, all data were
 * delivered via dataCollected events.
  *
  * @param {!function(!chromium.DevTools.Tracing.TracingCompleteParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Tracing.prototype.onTracingComplete = function(listener) {};
