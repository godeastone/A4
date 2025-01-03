// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * @fileoverview Generated DevTools bindings for the Schema Domain.
 */
'use strict';

goog.provide('chromium.DevTools.ExperimentalSchema');
goog.provide('chromium.DevTools.Schema');
goog.require('chromium.DevTools.Connection');

goog.scope(function() {
const Connection = chromium.DevTools.Connection;

/**
 * Experimental bindings for the Schema DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalSchema = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;
}

const ExperimentalSchema = chromium.DevTools.ExperimentalSchema;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
ExperimentalSchema.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}

/**
 * Bindings for the Schema DevTools Domain.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.Schema = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;

  /** @type {!ExperimentalSchema} */
  this.experimental = new ExperimentalSchema(connection);
}

const Schema = chromium.DevTools.Schema;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
Schema.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}


/**
 * Description of the protocol domain.
 *
 * name: Domain name.
 * version: Domain version.
 *
 * @typedef {{
 *   name: string,
 *   version: string
 * }}
 */
Schema.Domain;

/**
 * Parameters for the GetDomains command.
 *
 *
 * @typedef {undefined}
 */
Schema.GetDomainsParams;

/**
 * Result for the GetDomains command.
 *
 * domains: List of supported domains.
 *
 * @typedef {{
 *   domains: !Array.<!Schema.Domain>
 * }}
 */
Schema.GetDomainsResult;



/**
  * Returns supported domains.
  *
  * @return {!Promise<Schema.GetDomainsResult>}
  */
ExperimentalSchema.prototype.getDomains = function() {
  return this.connection_.sendDevToolsMessage('Schema.getDomains', {});
};




/**
  * Returns supported domains.
  *
  * @return {!Promise<Schema.GetDomainsResult>}
  */
Schema.prototype.getDomains = function() {
  return this.connection_.sendDevToolsMessage('Schema.getDomains', {});
};


});  // goog.scope

