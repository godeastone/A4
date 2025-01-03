// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * Experimental bindings for the Schema DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalSchema = function(connection) {};

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.ExperimentalSchema.prototype.removeEventListener = function(id) {};

/**
 * Bindings for the Schema DevTools Domain.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.Schema = function(connection) {};

/** @type {!chromium.DevTools.ExperimentalSchema} */
chromium.DevTools.Schema.prototype.experimental;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.Schema.prototype.removeEventListener = function(id) {};


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
chromium.DevTools.Schema.Domain;

/**
 * Parameters for the GetDomains command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Schema.GetDomainsParams;

/**
 * Result for the GetDomains command.
 *
 * domains: List of supported domains.
 *
 * @typedef {{
 *   domains: !Array.<!chromium.DevTools.Schema.Domain>
 * }}
 */
chromium.DevTools.Schema.GetDomainsResult;



/**
  * Returns supported domains.
  *
  * @return {!Promise<chromium.DevTools.Schema.GetDomainsResult>}
  */
chromium.DevTools.ExperimentalSchema.prototype.getDomains = function() {};




/**
  * Returns supported domains.
  *
  * @return {!Promise<chromium.DevTools.Schema.GetDomainsResult>}
  */
chromium.DevTools.Schema.prototype.getDomains = function() {};

