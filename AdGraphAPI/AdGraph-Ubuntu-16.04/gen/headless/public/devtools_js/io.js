// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * @fileoverview Generated DevTools bindings for the IO Domain.
 */
'use strict';

goog.provide('chromium.DevTools.ExperimentalIO');
goog.provide('chromium.DevTools.IO');
goog.require('chromium.DevTools.Connection');
goog.forwardDeclare('chromium.DevTools.Runtime.RemoteObjectId');

goog.scope(function() {
const Connection = chromium.DevTools.Connection;

/**
 * Experimental bindings for the IO DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalIO = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;
}

const ExperimentalIO = chromium.DevTools.ExperimentalIO;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
ExperimentalIO.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}

/**
 * Bindings for the IO DevTools Domain.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.IO = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;

  /** @type {!ExperimentalIO} */
  this.experimental = new ExperimentalIO(connection);
}

const IO = chromium.DevTools.IO;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
IO.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}


/**
 * Parameters for the Close command.
 *
 * handle: Handle of the stream to close.
 *
 * @typedef {{
 *   handle: string
 * }}
 */
IO.CloseParams;

/**
 * Result for the Close command.
 *
 *
 * @typedef {undefined}
 */
IO.CloseResult;

/**
 * Parameters for the Read command.
 *
 * handle: Handle of the stream to read.
 * offset: Seek to the specified offset before reading (if not specificed, proceed with offset
 *   following the last read). Some types of streams may only support sequential reads.
 * size: Maximum number of bytes to read (left upon the agent discretion if not specified).
 *
 * @typedef {{
 *   handle: string,
 *   offset: (number|undefined),
 *   size: (number|undefined)
 * }}
 */
IO.ReadParams;

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
IO.ReadResult;

/**
 * Parameters for the ResolveBlob command.
 *
 * objectId: Object id of a Blob object wrapper.
 *
 * @typedef {{
 *   objectId: string
 * }}
 */
IO.ResolveBlobParams;

/**
 * Result for the ResolveBlob command.
 *
 * uuid: UUID of the specified Blob.
 *
 * @typedef {{
 *   uuid: string
 * }}
 */
IO.ResolveBlobResult;



/**
  * Close the stream, discard any temporary backing storage.
  *
  * @param {IO.CloseParams} params
  * @return {!Promise<IO.CloseResult>}
  */
ExperimentalIO.prototype.close = function(params) {
  return this.connection_.sendDevToolsMessage('IO.close', params);
};

/**
  * Read a chunk of the stream
  *
  * @param {IO.ReadParams} params
  * @return {!Promise<IO.ReadResult>}
  */
ExperimentalIO.prototype.read = function(params) {
  return this.connection_.sendDevToolsMessage('IO.read', params);
};

/**
  * Return UUID of Blob object specified by a remote object id.
  *
  * @param {IO.ResolveBlobParams} params
  * @return {!Promise<IO.ResolveBlobResult>}
  */
ExperimentalIO.prototype.resolveBlob = function(params) {
  return this.connection_.sendDevToolsMessage('IO.resolveBlob', params);
};




/**
  * Close the stream, discard any temporary backing storage.
  *
  * @param {IO.CloseParams} params
  * @return {!Promise<IO.CloseResult>}
  */
IO.prototype.close = function(params) {
  return this.connection_.sendDevToolsMessage('IO.close', params);
};

/**
  * Read a chunk of the stream
  *
  * @param {IO.ReadParams} params
  * @return {!Promise<IO.ReadResult>}
  */
IO.prototype.read = function(params) {
  return this.connection_.sendDevToolsMessage('IO.read', params);
};

/**
  * Return UUID of Blob object specified by a remote object id.
  *
  * @param {IO.ResolveBlobParams} params
  * @return {!Promise<IO.ResolveBlobResult>}
  */
IO.prototype.resolveBlob = function(params) {
  return this.connection_.sendDevToolsMessage('IO.resolveBlob', params);
};


});  // goog.scope

