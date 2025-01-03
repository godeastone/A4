// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * Experimental bindings for the Audits DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalAudits = function(connection) {};

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.ExperimentalAudits.prototype.removeEventListener = function(id) {};

/**
 * Bindings for the Audits DevTools Domain.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.Audits = function(connection) {};

/** @type {!chromium.DevTools.ExperimentalAudits} */
chromium.DevTools.Audits.prototype.experimental;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.Audits.prototype.removeEventListener = function(id) {};

/**
 * The encoding to use.
 *
 * @enum {string}
 */
chromium.DevTools.Audits.GetEncodedResponseEncoding = {
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
 *   encoding: !chromium.DevTools.Audits.GetEncodedResponseEncoding,
 *   quality: (number|undefined),
 *   sizeOnly: (boolean|undefined)
 * }}
 */
chromium.DevTools.Audits.GetEncodedResponseParams;

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
chromium.DevTools.Audits.GetEncodedResponseResult;



/**
  * Returns the response body and size if it were re-encoded with the specified settings. Only
 * applies to images.
  *
  * @param {chromium.DevTools.Audits.GetEncodedResponseParams} params
  * @return {!Promise<chromium.DevTools.Audits.GetEncodedResponseResult>}
  */
chromium.DevTools.ExperimentalAudits.prototype.getEncodedResponse = function(params) {};




/**
  * Returns the response body and size if it were re-encoded with the specified settings. Only
 * applies to images.
  *
  * @param {chromium.DevTools.Audits.GetEncodedResponseParams} params
  * @return {!Promise<chromium.DevTools.Audits.GetEncodedResponseResult>}
  */
chromium.DevTools.Audits.prototype.getEncodedResponse = function(params) {};

