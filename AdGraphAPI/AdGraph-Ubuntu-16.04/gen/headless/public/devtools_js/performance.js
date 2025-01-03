// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * @fileoverview Generated DevTools bindings for the Performance Domain.
 */
'use strict';

goog.provide('chromium.DevTools.ExperimentalPerformance');
goog.provide('chromium.DevTools.Performance');
goog.require('chromium.DevTools.Connection');

goog.scope(function() {
const Connection = chromium.DevTools.Connection;

/**
 * Experimental bindings for the Performance DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalPerformance = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;
}

const ExperimentalPerformance = chromium.DevTools.ExperimentalPerformance;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
ExperimentalPerformance.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}

/**
 * Bindings for the Performance DevTools Domain.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.Performance = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;

  /** @type {!ExperimentalPerformance} */
  this.experimental = new ExperimentalPerformance(connection);
}

const Performance = chromium.DevTools.Performance;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
Performance.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}


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
Performance.Metric;

/**
 * Parameters for the Disable command.
 *
 *
 * @typedef {undefined}
 */
Performance.DisableParams;

/**
 * Result for the Disable command.
 *
 *
 * @typedef {undefined}
 */
Performance.DisableResult;

/**
 * Parameters for the Enable command.
 *
 *
 * @typedef {undefined}
 */
Performance.EnableParams;

/**
 * Result for the Enable command.
 *
 *
 * @typedef {undefined}
 */
Performance.EnableResult;

/**
 * Parameters for the GetMetrics command.
 *
 *
 * @typedef {undefined}
 */
Performance.GetMetricsParams;

/**
 * Result for the GetMetrics command.
 *
 * metrics: Current values for run-time metrics.
 *
 * @typedef {{
 *   metrics: !Array.<!Performance.Metric>
 * }}
 */
Performance.GetMetricsResult;

/**
 * Parameters for the Metrics event.
 *
 * metrics: Current values of the metrics.
 * title: Timestamp title.
 *
 * @typedef {{
 *   metrics: !Array.<!Performance.Metric>,
 *   title: string
 * }}
 */
Performance.MetricsParams;



/**
  * Disable collecting and reporting metrics.
  *
  * @return {!Promise<Performance.DisableResult>}
  */
ExperimentalPerformance.prototype.disable = function() {
  return this.connection_.sendDevToolsMessage('Performance.disable', {});
};

/**
  * Enable collecting and reporting metrics.
  *
  * @return {!Promise<Performance.EnableResult>}
  */
ExperimentalPerformance.prototype.enable = function() {
  return this.connection_.sendDevToolsMessage('Performance.enable', {});
};

/**
  * Retrieve current values of run-time metrics.
  *
  * @return {!Promise<Performance.GetMetricsResult>}
  */
ExperimentalPerformance.prototype.getMetrics = function() {
  return this.connection_.sendDevToolsMessage('Performance.getMetrics', {});
};


/**
  * Current values of the metrics.
  *
  * @param {!function(!Performance.MetricsParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalPerformance.prototype.onMetrics = function(listener) {
  return this.connection_.addEventListener(
      'Performance.metrics', /** @type {!function(!Object): undefined} */ (listener));
};



/**
  * Disable collecting and reporting metrics.
  *
  * @return {!Promise<Performance.DisableResult>}
  */
Performance.prototype.disable = function() {
  return this.connection_.sendDevToolsMessage('Performance.disable', {});
};

/**
  * Enable collecting and reporting metrics.
  *
  * @return {!Promise<Performance.EnableResult>}
  */
Performance.prototype.enable = function() {
  return this.connection_.sendDevToolsMessage('Performance.enable', {});
};

/**
  * Retrieve current values of run-time metrics.
  *
  * @return {!Promise<Performance.GetMetricsResult>}
  */
Performance.prototype.getMetrics = function() {
  return this.connection_.sendDevToolsMessage('Performance.getMetrics', {});
};


/**
  * Current values of the metrics.
  *
  * @param {!function(!Performance.MetricsParams)} listener
  * @return {number} The id of this event listener.
  */
Performance.prototype.onMetrics = function(listener) {
  return this.connection_.addEventListener(
      'Performance.metrics', /** @type {!function(!Object): undefined} */ (listener));
};

});  // goog.scope

