// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * Experimental bindings for the Performance DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalPerformance = function(connection) {};

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.ExperimentalPerformance.prototype.removeEventListener = function(id) {};

/**
 * Bindings for the Performance DevTools Domain.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.Performance = function(connection) {};

/** @type {!chromium.DevTools.ExperimentalPerformance} */
chromium.DevTools.Performance.prototype.experimental;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.Performance.prototype.removeEventListener = function(id) {};


/**
 * Run-time execution metric.
 *
 * name: Metric name.
 * value: Metric value.
 *
 * @typedef {{
 *   name: string,
 *   value: number
 * }}
 */
chromium.DevTools.Performance.Metric;

/**
 * Parameters for the Disable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Performance.DisableParams;

/**
 * Result for the Disable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Performance.DisableResult;

/**
 * Parameters for the Enable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Performance.EnableParams;

/**
 * Result for the Enable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Performance.EnableResult;

/**
 * Parameters for the GetMetrics command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Performance.GetMetricsParams;

/**
 * Result for the GetMetrics command.
 *
 * metrics: Current values for run-time metrics.
 *
 * @typedef {{
 *   metrics: !Array.<!chromium.DevTools.Performance.Metric>
 * }}
 */
chromium.DevTools.Performance.GetMetricsResult;

/**
 * Parameters for the Metrics event.
 *
 * metrics: Current values of the metrics.
 * title: Timestamp title.
 *
 * @typedef {{
 *   metrics: !Array.<!chromium.DevTools.Performance.Metric>,
 *   title: string
 * }}
 */
chromium.DevTools.Performance.MetricsParams;



/**
  * Disable collecting and reporting metrics.
  *
  * @return {!Promise<chromium.DevTools.Performance.DisableResult>}
  */
chromium.DevTools.ExperimentalPerformance.prototype.disable = function() {};

/**
  * Enable collecting and reporting metrics.
  *
  * @return {!Promise<chromium.DevTools.Performance.EnableResult>}
  */
chromium.DevTools.ExperimentalPerformance.prototype.enable = function() {};

/**
  * Retrieve current values of run-time metrics.
  *
  * @return {!Promise<chromium.DevTools.Performance.GetMetricsResult>}
  */
chromium.DevTools.ExperimentalPerformance.prototype.getMetrics = function() {};


/**
  * Current values of the metrics.
  *
  * @param {!function(!chromium.DevTools.Performance.MetricsParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalPerformance.prototype.onMetrics = function(listener) {};



/**
  * Disable collecting and reporting metrics.
  *
  * @return {!Promise<chromium.DevTools.Performance.DisableResult>}
  */
chromium.DevTools.Performance.prototype.disable = function() {};

/**
  * Enable collecting and reporting metrics.
  *
  * @return {!Promise<chromium.DevTools.Performance.EnableResult>}
  */
chromium.DevTools.Performance.prototype.enable = function() {};

/**
  * Retrieve current values of run-time metrics.
  *
  * @return {!Promise<chromium.DevTools.Performance.GetMetricsResult>}
  */
chromium.DevTools.Performance.prototype.getMetrics = function() {};


/**
  * Current values of the metrics.
  *
  * @param {!function(!chromium.DevTools.Performance.MetricsParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Performance.prototype.onMetrics = function(listener) {};
