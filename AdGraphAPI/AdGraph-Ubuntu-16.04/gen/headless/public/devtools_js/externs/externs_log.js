// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * Experimental bindings for the Log DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalLog = function(connection) {};

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.ExperimentalLog.prototype.removeEventListener = function(id) {};

/**
 * Bindings for the Log DevTools Domain.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.Log = function(connection) {};

/** @type {!chromium.DevTools.ExperimentalLog} */
chromium.DevTools.Log.prototype.experimental;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.Log.prototype.removeEventListener = function(id) {};

/**
 * Log entry source.
 *
 * @enum {string}
 */
chromium.DevTools.Log.LogEntrySource = {
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
chromium.DevTools.Log.LogEntryLevel = {
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
chromium.DevTools.Log.ViolationSettingName = {
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
 *   source: !chromium.DevTools.Log.LogEntrySource,
 *   level: !chromium.DevTools.Log.LogEntryLevel,
 *   text: string,
 *   timestamp: number,
 *   url: (string|undefined),
 *   lineNumber: (number|undefined),
 *   stackTrace: (!chromium.DevTools.Runtime.StackTrace|undefined),
 *   networkRequestId: (string|undefined),
 *   workerId: (string|undefined),
 *   args: (!Array.<!chromium.DevTools.Runtime.RemoteObject>|undefined)
 * }}
 */
chromium.DevTools.Log.LogEntry;

/**
 * Violation configuration setting.
 *
 * name: Violation type.
 * threshold: Time threshold to trigger upon.
 *
 * @typedef {{
 *   name: !chromium.DevTools.Log.ViolationSettingName,
 *   threshold: number
 * }}
 */
chromium.DevTools.Log.ViolationSetting;

/**
 * Parameters for the Clear command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Log.ClearParams;

/**
 * Result for the Clear command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Log.ClearResult;

/**
 * Parameters for the Disable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Log.DisableParams;

/**
 * Result for the Disable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Log.DisableResult;

/**
 * Parameters for the Enable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Log.EnableParams;

/**
 * Result for the Enable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Log.EnableResult;

/**
 * Parameters for the StartViolationsReport command.
 *
 * config: Configuration for violations.
 *
 * @typedef {{
 *   config: !Array.<!chromium.DevTools.Log.ViolationSetting>
 * }}
 */
chromium.DevTools.Log.StartViolationsReportParams;

/**
 * Result for the StartViolationsReport command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Log.StartViolationsReportResult;

/**
 * Parameters for the StopViolationsReport command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Log.StopViolationsReportParams;

/**
 * Result for the StopViolationsReport command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Log.StopViolationsReportResult;

/**
 * Parameters for the EntryAdded event.
 *
 * entry: The entry.
 *
 * @typedef {{
 *   entry: !chromium.DevTools.Log.LogEntry
 * }}
 */
chromium.DevTools.Log.EntryAddedParams;



/**
  * Clears the log.
  *
  * @return {!Promise<chromium.DevTools.Log.ClearResult>}
  */
chromium.DevTools.ExperimentalLog.prototype.clear = function() {};

/**
  * Disables log domain, prevents further log entries from being reported to the client.
  *
  * @return {!Promise<chromium.DevTools.Log.DisableResult>}
  */
chromium.DevTools.ExperimentalLog.prototype.disable = function() {};

/**
  * Enables log domain, sends the entries collected so far to the client by means of the
 * `entryAdded` notification.
  *
  * @return {!Promise<chromium.DevTools.Log.EnableResult>}
  */
chromium.DevTools.ExperimentalLog.prototype.enable = function() {};

/**
  * start violation reporting.
  *
  * @param {chromium.DevTools.Log.StartViolationsReportParams} params
  * @return {!Promise<chromium.DevTools.Log.StartViolationsReportResult>}
  */
chromium.DevTools.ExperimentalLog.prototype.startViolationsReport = function(params) {};

/**
  * Stop violation reporting.
  *
  * @return {!Promise<chromium.DevTools.Log.StopViolationsReportResult>}
  */
chromium.DevTools.ExperimentalLog.prototype.stopViolationsReport = function() {};


/**
  * Issued when new message was logged.
  *
  * @param {!function(!chromium.DevTools.Log.EntryAddedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalLog.prototype.onEntryAdded = function(listener) {};



/**
  * Clears the log.
  *
  * @return {!Promise<chromium.DevTools.Log.ClearResult>}
  */
chromium.DevTools.Log.prototype.clear = function() {};

/**
  * Disables log domain, prevents further log entries from being reported to the client.
  *
  * @return {!Promise<chromium.DevTools.Log.DisableResult>}
  */
chromium.DevTools.Log.prototype.disable = function() {};

/**
  * Enables log domain, sends the entries collected so far to the client by means of the
 * `entryAdded` notification.
  *
  * @return {!Promise<chromium.DevTools.Log.EnableResult>}
  */
chromium.DevTools.Log.prototype.enable = function() {};

/**
  * start violation reporting.
  *
  * @param {chromium.DevTools.Log.StartViolationsReportParams} params
  * @return {!Promise<chromium.DevTools.Log.StartViolationsReportResult>}
  */
chromium.DevTools.Log.prototype.startViolationsReport = function(params) {};

/**
  * Stop violation reporting.
  *
  * @return {!Promise<chromium.DevTools.Log.StopViolationsReportResult>}
  */
chromium.DevTools.Log.prototype.stopViolationsReport = function() {};


/**
  * Issued when new message was logged.
  *
  * @param {!function(!chromium.DevTools.Log.EntryAddedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Log.prototype.onEntryAdded = function(listener) {};
