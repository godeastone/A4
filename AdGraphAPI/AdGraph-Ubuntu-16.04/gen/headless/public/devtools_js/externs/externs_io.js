// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * Experimental bindings for the IO DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalIO = function(connection) {};

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.ExperimentalIO.prototype.removeEventListener = function(id) {};

/**
 * Bindings for the IO DevTools Domain.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.IO = function(connection) {};

/** @type {!chromium.DevTools.ExperimentalIO} */
chromium.DevTools.IO.prototype.experimental;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.IO.prototype.removeEventListener = function(id) {};


/**
 * Parameters for the Close command.
 *
 * handle: Handle of the stream to close.
 *
 * @typedef {{
 *   handle: string
 * }}
 */
chromium.DevTools.IO.CloseParams;

/**
 * Result for the Close command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.IO.CloseResult;

/**
 * Parameters for the Read command.
 *
 * handle: Handle of the stream to read.
 * offset: Seek to the specified offset before reading (if not specificed, proceed with offset
 *    following the last read). Some types of streams may only support sequential reads.
 * size: Maximum number of bytes to read (left upon the agent discretion if not specified).
 *
 * @typedef {{
 *   handle: string,
 *   offset: (number|undefined),
 *   size: (number|undefined)
 * }}
 */
chromium.DevTools.IO.ReadParams;

/**
 * Result for the Read command.
 *
 * base64Encoded: Set if the data is base64-encoded
 * data: Data that were read.
 * eof: Set if the end-of-file condition occured while reading.
 *
 * @typedef {{
 *   base64Encoded: (boolean|undefined),
 *   data: string,
 *   eof: boolean
 * }}
 */
chromium.DevTools.IO.ReadResult;

/**
 * Parameters for the ResolveBlob command.
 *
 * objectId: Object id of a Blob object wrapper.
 *
 * @typedef {{
 *   objectId: string
 * }}
 */
chromium.DevTools.IO.ResolveBlobParams;

/**
 * Result for the ResolveBlob command.
 *
 * uuid: UUID of the specified Blob.
 *
 * @typedef {{
 *   uuid: string
 * }}
 */
chromium.DevTools.IO.ResolveBlobResult;



/**
  * Close the stream, discard any temporary backing storage.
  *
  * @param {chromium.DevTools.IO.CloseParams} params
  * @return {!Promise<chromium.DevTools.IO.CloseResult>}
  */
chromium.DevTools.ExperimentalIO.prototype.close = function(params) {};

/**
  * Read a chunk of the stream
  *
  * @param {chromium.DevTools.IO.ReadParams} params
  * @return {!Promise<chromium.DevTools.IO.ReadResult>}
  */
chromium.DevTools.ExperimentalIO.prototype.read = function(params) {};

/**
  * Return UUID of Blob object specified by a remote object id.
  *
  * @param {chromium.DevTools.IO.ResolveBlobParams} params
  * @return {!Promise<chromium.DevTools.IO.ResolveBlobResult>}
  */
chromium.DevTools.ExperimentalIO.prototype.resolveBlob = function(params) {};




/**
  * Close the stream, discard any temporary backing storage.
  *
  * @param {chromium.DevTools.IO.CloseParams} params
  * @return {!Promise<chromium.DevTools.IO.CloseResult>}
  */
chromium.DevTools.IO.prototype.close = function(params) {};

/**
  * Read a chunk of the stream
  *
  * @param {chromium.DevTools.IO.ReadParams} params
  * @return {!Promise<chromium.DevTools.IO.ReadResult>}
  */
chromium.DevTools.IO.prototype.read = function(params) {};

/**
  * Return UUID of Blob object specified by a remote object id.
  *
  * @param {chromium.DevTools.IO.ResolveBlobParams} params
  * @return {!Promise<chromium.DevTools.IO.ResolveBlobResult>}
  */
chromium.DevTools.IO.prototype.resolveBlob = function(params) {};

