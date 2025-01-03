// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * @fileoverview Generated DevTools bindings for the Audits Domain.
 */
'use strict';

goog.provide('chromium.DevTools.ExperimentalAudits');
goog.provide('chromium.DevTools.Audits');
goog.require('chromium.DevTools.Connection');
goog.require('chromium.DevTools.Network');

goog.scope(function() {
const Connection = chromium.DevTools.Connection;
const Network = chromium.DevTools.Network;

/**
 * Experimental bindings for the Audits DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalAudits = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;
}

const ExperimentalAudits = chromium.DevTools.ExperimentalAudits;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
ExperimentalAudits.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}

/**
 * Bindings for the Audits DevTools Domain.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.Audits = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;

  /** @type {!ExperimentalAudits} */
  this.experimental = new ExperimentalAudits(connection);
}

const Audits = chromium.DevTools.Audits;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
Audits.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}

/**
 * The encoding to use.
 *
 * @enum {string}
 */
Audits.GetEncodedResponseEncoding = {
    WEBP: "webp",
    JPEG: "jpeg",
    PNG: "png"
};


/**
 * Parameters for the GetEncodedResponse command.
 *
 * requestId: Identifier of the network request to get content for.
 * encoding: The encoding to use.
 * quality: The quality of the encoding (0-1). (defaults to 1)
 * sizeOnly: Whether to only return the size information (defaults to false).
 *
 * @typedef {{
 *   requestId: string,
 *   encoding: !Audits.GetEncodedResponseEncoding,
 *   quality: (number|undefined),
 *   sizeOnly: (boolean|undefined)
 * }}
 */
Audits.GetEncodedResponseParams;

/**
 * Result for the GetEncodedResponse command.
 *
 * body: The encoded body as a base64 string. Omitted if sizeOnly is true.
 * originalSize: Size before re-encoding.
 * encodedSize: Size after re-encoding.
 *
 * @typedef {{
 *   body: (string|undefined),
 *   originalSize: number,
 *   encodedSize: number
 * }}
 */
Audits.GetEncodedResponseResult;



/**
  * Returns the response body and size if it were re-encoded with the specified settings. Only
 * applies to images.
  *
  * @param {Audits.GetEncodedResponseParams} params
  * @return {!Promise<Audits.GetEncodedResponseResult>}
  */
ExperimentalAudits.prototype.getEncodedResponse = function(params) {
  return this.connection_.sendDevToolsMessage('Audits.getEncodedResponse', params);
};




/**
  * Returns the response body and size if it were re-encoded with the specified settings. Only
 * applies to images.
  *
  * @param {Audits.GetEncodedResponseParams} params
  * @return {!Promise<Audits.GetEncodedResponseResult>}
  */
Audits.prototype.getEncodedResponse = function(params) {
  return this.connection_.sendDevToolsMessage('Audits.getEncodedResponse', params);
};


});  // goog.scope

