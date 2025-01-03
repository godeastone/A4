// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * @fileoverview Generated DevTools bindings for the Log Domain.
 */
'use strict';

goog.provide('chromium.DevTools.ExperimentalLog');
goog.provide('chromium.DevTools.Log');
goog.require('chromium.DevTools.Connection');
goog.require('chromium.DevTools.Runtime');
goog.require('chromium.DevTools.Network');

goog.scope(function() {
const Connection = chromium.DevTools.Connection;
const Runtime = chromium.DevTools.Runtime;
const Network = chromium.DevTools.Network;

/**
 * Experimental bindings for the Log DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalLog = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;
}

const ExperimentalLog = chromium.DevTools.ExperimentalLog;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
ExperimentalLog.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}

/**
 * Bindings for the Log DevTools Domain.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.Log = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;

  /** @type {!ExperimentalLog} */
  this.experimental = new ExperimentalLog(connection);
}

const Log = chromium.DevTools.Log;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
Log.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}

/**
 * Log entry source.
 *
 * @enum {string}
 */
Log.LogEntrySource = {
    XML: "xml",
    JAVASCRIPT: "javascript",
    NETWORK: "network",
    STORAGE: "storage",
    APPCACHE: "appcache",
    RENDERING: "rendering",
    SECURITY: "security",
    DEPRECATION: "deprecation",
    WORKER: "worker",
    VIOLATION: "violation",
    INTERVENTION: "intervention",
    RECOMMENDATION: "recommendation",
    OTHER: "other"
};

/**
 * Log entry severity.
 *
 * @enum {string}
 */
Log.LogEntryLevel = {
    VERBOSE: "verbose",
    INFO: "info",
    WARNING: "warning",
    ERR: "error"
};

/**
 * Violation type.
 *
 * @enum {string}
 */
Log.ViolationSettingName = {
    LONG_TASK: "longTask",
    LONG_LAYOUT: "longLayout",
    BLOCKED_EVENT: "blockedEvent",
    BLOCKED_PARSER: "blockedParser",
    DISCOURAGEDAPI_USE: "discouragedAPIUse",
    HANDLER: "handler",
    RECURRING_HANDLER: "recurringHandler"
};


/**
 * Log entry.
 *
 * source: Log entry source.
 * level: Log entry severity.
 * text: Logged text.
 * timestamp: Timestamp when this entry was added.
 * url: URL of the resource if known.
 * lineNumber: Line number in the resource.
 * stackTrace: JavaScript stack trace.
 * networkRequestId: Identifier of the network request associated with this entry.
 * workerId: Identifier of the worker associated with this entry.
 * args: Call arguments.
 *
 * @typedef {{
 *   source: !Log.LogEntrySource,
 *   level: !Log.LogEntryLevel,
 *   text: string,
 *   timestamp: number,
 *   url: (string|undefined),
 *   lineNumber: (number|undefined),
 *   stackTrace: (!Runtime.StackTrace|undefined),
 *   networkRequestId: (string|undefined),
 *   workerId: (string|undefined),
 *   args: (!Array.<!Runtime.RemoteObject>|undefined)
 * }}
 */
Log.LogEntry;

/**
 * Violation configuration setting.
 *
 * name: Violation type.
 * threshold: Time threshold to trigger upon.
 *
 * @typedef {{
 *   name: !Log.ViolationSettingName,
 *   threshold: number
 * }}
 */
Log.ViolationSetting;

/**
 * Parameters for the Clear command.
 *
 *
 * @typedef {undefined}
 */
Log.ClearParams;

/**
 * Result for the Clear command.
 *
 *
 * @typedef {undefined}
 */
Log.ClearResult;

/**
 * Parameters for the Disable command.
 *
 *
 * @typedef {undefined}
 */
Log.DisableParams;

/**
 * Result for the Disable command.
 *
 *
 * @typedef {undefined}
 */
Log.DisableResult;

/**
 * Parameters for the Enable command.
 *
 *
 * @typedef {undefined}
 */
Log.EnableParams;

/**
 * Result for the Enable command.
 *
 *
 * @typedef {undefined}
 */
Log.EnableResult;

/**
 * Parameters for the StartViolationsReport command.
 *
 * config: Configuration for violations.
 *
 * @typedef {{
 *   config: !Array.<!Log.ViolationSetting>
 * }}
 */
Log.StartViolationsReportParams;

/**
 * Result for the StartViolationsReport command.
 *
 *
 * @typedef {undefined}
 */
Log.StartViolationsReportResult;

/**
 * Parameters for the StopViolationsReport command.
 *
 *
 * @typedef {undefined}
 */
Log.StopViolationsReportParams;

/**
 * Result for the StopViolationsReport command.
 *
 *
 * @typedef {undefined}
 */
Log.StopViolationsReportResult;

/**
 * Parameters for the EntryAdded event.
 *
 * entry: The entry.
 *
 * @typedef {{
 *   entry: !Log.LogEntry
 * }}
 */
Log.EntryAddedParams;



/**
  * Clears the log.
  *
  * @return {!Promise<Log.ClearResult>}
  */
ExperimentalLog.prototype.clear = function() {
  return this.connection_.sendDevToolsMessage('Log.clear', {});
};

/**
  * Disables log domain, prevents further log entries from being reported to the client.
  *
  * @return {!Promise<Log.DisableResult>}
  */
ExperimentalLog.prototype.disable = function() {
  return this.connection_.sendDevToolsMessage('Log.disable', {});
};

/**
  * Enables log domain, sends the entries collected so far to the client by means of the
 * `entryAdded` notification.
  *
  * @return {!Promise<Log.EnableResult>}
  */
ExperimentalLog.prototype.enable = function() {
  return this.connection_.sendDevToolsMessage('Log.enable', {});
};

/**
  * start violation reporting.
  *
  * @param {Log.StartViolationsReportParams} params
  * @return {!Promise<Log.StartViolationsReportResult>}
  */
ExperimentalLog.prototype.startViolationsReport = function(params) {
  return this.connection_.sendDevToolsMessage('Log.startViolationsReport', params);
};

/**
  * Stop violation reporting.
  *
  * @return {!Promise<Log.StopViolationsReportResult>}
  */
ExperimentalLog.prototype.stopViolationsReport = function() {
  return this.connection_.sendDevToolsMessage('Log.stopViolationsReport', {});
};


/**
  * Issued when new message was logged.
  *
  * @param {!function(!Log.EntryAddedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalLog.prototype.onEntryAdded = function(listener) {
  return this.connection_.addEventListener(
      'Log.entryAdded', /** @type {!function(!Object): undefined} */ (listener));
};



/**
  * Clears the log.
  *
  * @return {!Promise<Log.ClearResult>}
  */
Log.prototype.clear = function() {
  return this.connection_.sendDevToolsMessage('Log.clear', {});
};

/**
  * Disables log domain, prevents further log entries from being reported to the client.
  *
  * @return {!Promise<Log.DisableResult>}
  */
Log.prototype.disable = function() {
  return this.connection_.sendDevToolsMessage('Log.disable', {});
};

/**
  * Enables log domain, sends the entries collected so far to the client by means of the
 * `entryAdded` notification.
  *
  * @return {!Promise<Log.EnableResult>}
  */
Log.prototype.enable = function() {
  return this.connection_.sendDevToolsMessage('Log.enable', {});
};

/**
  * start violation reporting.
  *
  * @param {Log.StartViolationsReportParams} params
  * @return {!Promise<Log.StartViolationsReportResult>}
  */
Log.prototype.startViolationsReport = function(params) {
  return this.connection_.sendDevToolsMessage('Log.startViolationsReport', params);
};

/**
  * Stop violation reporting.
  *
  * @return {!Promise<Log.StopViolationsReportResult>}
  */
Log.prototype.stopViolationsReport = function() {
  return this.connection_.sendDevToolsMessage('Log.stopViolationsReport', {});
};


/**
  * Issued when new message was logged.
  *
  * @param {!function(!Log.EntryAddedParams)} listener
  * @return {number} The id of this event listener.
  */
Log.prototype.onEntryAdded = function(listener) {
  return this.connection_.addEventListener(
      'Log.entryAdded', /** @type {!function(!Object): undefined} */ (listener));
};

});  // goog.scope

