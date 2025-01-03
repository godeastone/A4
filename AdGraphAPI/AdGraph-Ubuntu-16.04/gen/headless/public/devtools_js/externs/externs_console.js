// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * Experimental bindings for the Console DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalConsole = function(connection) {};

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.ExperimentalConsole.prototype.removeEventListener = function(id) {};

/**
 * Bindings for the Console DevTools Domain.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.Console = function(connection) {};

/** @type {!chromium.DevTools.ExperimentalConsole} */
chromium.DevTools.Console.prototype.experimental;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.Console.prototype.removeEventListener = function(id) {};

/**
 * Message source.
 *
 * @enum {string}
 */
chromium.DevTools.Console.ConsoleMessageSource = {
    XML: "xml",
    JAVASCRIPT: "javascript",
    NETWORK: "network",
    CONSOLE_API: "console-api",
    STORAGE: "storage",
    APPCACHE: "appcache",
    RENDERING: "rendering",
    SECURITY: "security",
    OTHER: "other",
    DEPRECATION: "deprecation",
    WORKER: "worker"
};

/**
 * Message severity.
 *
 * @enum {string}
 */
chromium.DevTools.Console.ConsoleMessageLevel = {
    LOG: "log",
    WARNING: "warning",
    ERR: "error",
    DEBUG: "debug",
    INFO: "info"
};


/**
 * Console message.
 *
 * source: Message source.
 * level: Message severity.
 * text: Message text.
 * url: URL of the message origin.
 * line: Line number in the resource that generated this message (1-based).
 * column: Column number in the resource that generated this message (1-based).
 *
 * @typedef {{
 *   source: !chromium.DevTools.Console.ConsoleMessageSource,
 *   level: !chromium.DevTools.Console.ConsoleMessageLevel,
 *   text: string,
 *   url: (string|undefined),
 *   line: (number|undefined),
 *   column: (number|undefined)
 * }}
 */
chromium.DevTools.Console.ConsoleMessage;

/**
 * Parameters for the ClearMessages command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Console.ClearMessagesParams;

/**
 * Result for the ClearMessages command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Console.ClearMessagesResult;

/**
 * Parameters for the Disable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Console.DisableParams;

/**
 * Result for the Disable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Console.DisableResult;

/**
 * Parameters for the Enable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Console.EnableParams;

/**
 * Result for the Enable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Console.EnableResult;

/**
 * Parameters for the MessageAdded event.
 *
 * message: Console message that has been added.
 *
 * @typedef {{
 *   message: !chromium.DevTools.Console.ConsoleMessage
 * }}
 */
chromium.DevTools.Console.MessageAddedParams;



/**
  * Does nothing.
  *
  * @return {!Promise<chromium.DevTools.Console.ClearMessagesResult>}
  */
chromium.DevTools.ExperimentalConsole.prototype.clearMessages = function() {};

/**
  * Disables console domain, prevents further console messages from being reported to the client.
  *
  * @return {!Promise<chromium.DevTools.Console.DisableResult>}
  */
chromium.DevTools.ExperimentalConsole.prototype.disable = function() {};

/**
  * Enables console domain, sends the messages collected so far to the client by means of the
 * `messageAdded` notification.
  *
  * @return {!Promise<chromium.DevTools.Console.EnableResult>}
  */
chromium.DevTools.ExperimentalConsole.prototype.enable = function() {};


/**
  * Issued when new console message is added.
  *
  * @param {!function(!chromium.DevTools.Console.MessageAddedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalConsole.prototype.onMessageAdded = function(listener) {};



/**
  * Does nothing.
  *
  * @return {!Promise<chromium.DevTools.Console.ClearMessagesResult>}
  */
chromium.DevTools.Console.prototype.clearMessages = function() {};

/**
  * Disables console domain, prevents further console messages from being reported to the client.
  *
  * @return {!Promise<chromium.DevTools.Console.DisableResult>}
  */
chromium.DevTools.Console.prototype.disable = function() {};

/**
  * Enables console domain, sends the messages collected so far to the client by means of the
 * `messageAdded` notification.
  *
  * @return {!Promise<chromium.DevTools.Console.EnableResult>}
  */
chromium.DevTools.Console.prototype.enable = function() {};


/**
  * Issued when new console message is added.
  *
  * @param {!function(!chromium.DevTools.Console.MessageAddedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Console.prototype.onMessageAdded = function(listener) {};
