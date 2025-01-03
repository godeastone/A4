// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * @fileoverview Generated DevTools bindings for the Console Domain.
 */
'use strict';

goog.provide('chromium.DevTools.ExperimentalConsole');
goog.provide('chromium.DevTools.Console');
goog.require('chromium.DevTools.Connection');
goog.require('chromium.DevTools.Runtime');

goog.scope(function() {
const Connection = chromium.DevTools.Connection;
const Runtime = chromium.DevTools.Runtime;

/**
 * Experimental bindings for the Console DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalConsole = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;
}

const ExperimentalConsole = chromium.DevTools.ExperimentalConsole;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
ExperimentalConsole.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}

/**
 * Bindings for the Console DevTools Domain.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.Console = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;

  /** @type {!ExperimentalConsole} */
  this.experimental = new ExperimentalConsole(connection);
}

const Console = chromium.DevTools.Console;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
Console.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}

/**
 * Message source.
 *
 * @enum {string}
 */
Console.ConsoleMessageSource = {
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
Console.ConsoleMessageLevel = {
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
 *   source: !Console.ConsoleMessageSource,
 *   level: !Console.ConsoleMessageLevel,
 *   text: string,
 *   url: (string|undefined),
 *   line: (number|undefined),
 *   column: (number|undefined)
 * }}
 */
Console.ConsoleMessage;

/**
 * Parameters for the ClearMessages command.
 *
 *
 * @typedef {undefined}
 */
Console.ClearMessagesParams;

/**
 * Result for the ClearMessages command.
 *
 *
 * @typedef {undefined}
 */
Console.ClearMessagesResult;

/**
 * Parameters for the Disable command.
 *
 *
 * @typedef {undefined}
 */
Console.DisableParams;

/**
 * Result for the Disable command.
 *
 *
 * @typedef {undefined}
 */
Console.DisableResult;

/**
 * Parameters for the Enable command.
 *
 *
 * @typedef {undefined}
 */
Console.EnableParams;

/**
 * Result for the Enable command.
 *
 *
 * @typedef {undefined}
 */
Console.EnableResult;

/**
 * Parameters for the MessageAdded event.
 *
 * message: Console message that has been added.
 *
 * @typedef {{
 *   message: !Console.ConsoleMessage
 * }}
 */
Console.MessageAddedParams;



/**
  * Does nothing.
  *
  * @return {!Promise<Console.ClearMessagesResult>}
  */
ExperimentalConsole.prototype.clearMessages = function() {
  return this.connection_.sendDevToolsMessage('Console.clearMessages', {});
};

/**
  * Disables console domain, prevents further console messages from being reported to the client.
  *
  * @return {!Promise<Console.DisableResult>}
  */
ExperimentalConsole.prototype.disable = function() {
  return this.connection_.sendDevToolsMessage('Console.disable', {});
};

/**
  * Enables console domain, sends the messages collected so far to the client by means of the
 * `messageAdded` notification.
  *
  * @return {!Promise<Console.EnableResult>}
  */
ExperimentalConsole.prototype.enable = function() {
  return this.connection_.sendDevToolsMessage('Console.enable', {});
};


/**
  * Issued when new console message is added.
  *
  * @param {!function(!Console.MessageAddedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalConsole.prototype.onMessageAdded = function(listener) {
  return this.connection_.addEventListener(
      'Console.messageAdded', /** @type {!function(!Object): undefined} */ (listener));
};



/**
  * Does nothing.
  *
  * @return {!Promise<Console.ClearMessagesResult>}
  */
Console.prototype.clearMessages = function() {
  return this.connection_.sendDevToolsMessage('Console.clearMessages', {});
};

/**
  * Disables console domain, prevents further console messages from being reported to the client.
  *
  * @return {!Promise<Console.DisableResult>}
  */
Console.prototype.disable = function() {
  return this.connection_.sendDevToolsMessage('Console.disable', {});
};

/**
  * Enables console domain, sends the messages collected so far to the client by means of the
 * `messageAdded` notification.
  *
  * @return {!Promise<Console.EnableResult>}
  */
Console.prototype.enable = function() {
  return this.connection_.sendDevToolsMessage('Console.enable', {});
};


/**
  * Issued when new console message is added.
  *
  * @param {!function(!Console.MessageAddedParams)} listener
  * @return {number} The id of this event listener.
  */
Console.prototype.onMessageAdded = function(listener) {
  return this.connection_.addEventListener(
      'Console.messageAdded', /** @type {!function(!Object): undefined} */ (listener));
};

});  // goog.scope

