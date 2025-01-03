// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * Experimental bindings for the Tethering DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalTethering = function(connection) {};

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.ExperimentalTethering.prototype.removeEventListener = function(id) {};

/**
 * Bindings for the Tethering DevTools Domain.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.Tethering = function(connection) {};

/** @type {!chromium.DevTools.ExperimentalTethering} */
chromium.DevTools.Tethering.prototype.experimental;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.Tethering.prototype.removeEventListener = function(id) {};


/**
 * Parameters for the Bind command.
 *
 * port: Port number to bind.
 *
 * @typedef {{
 *   port: number
 * }}
 */
chromium.DevTools.Tethering.BindParams;

/**
 * Result for the Bind command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Tethering.BindResult;

/**
 * Parameters for the Unbind command.
 *
 * port: Port number to unbind.
 *
 * @typedef {{
 *   port: number
 * }}
 */
chromium.DevTools.Tethering.UnbindParams;

/**
 * Result for the Unbind command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Tethering.UnbindResult;

/**
 * Parameters for the Accepted event.
 *
 * port: Port number that was successfully bound.
 * connectionId: Connection id to be used.
 *
 * @typedef {{
 *   port: number,
 *   connectionId: string
 * }}
 */
chromium.DevTools.Tethering.AcceptedParams;



/**
  * Request browser port binding.
  *
  * @param {chromium.DevTools.Tethering.BindParams} params
  * @return {!Promise<chromium.DevTools.Tethering.BindResult>}
  */
chromium.DevTools.ExperimentalTethering.prototype.bind = function(params) {};

/**
  * Request browser port unbinding.
  *
  * @param {chromium.DevTools.Tethering.UnbindParams} params
  * @return {!Promise<chromium.DevTools.Tethering.UnbindResult>}
  */
chromium.DevTools.ExperimentalTethering.prototype.unbind = function(params) {};


/**
  * Informs that port was successfully bound and got a specified connection id.
  *
  * @param {!function(!chromium.DevTools.Tethering.AcceptedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalTethering.prototype.onAccepted = function(listener) {};



/**
  * Request browser port binding.
  *
  * @param {chromium.DevTools.Tethering.BindParams} params
  * @return {!Promise<chromium.DevTools.Tethering.BindResult>}
  */
chromium.DevTools.Tethering.prototype.bind = function(params) {};

/**
  * Request browser port unbinding.
  *
  * @param {chromium.DevTools.Tethering.UnbindParams} params
  * @return {!Promise<chromium.DevTools.Tethering.UnbindResult>}
  */
chromium.DevTools.Tethering.prototype.unbind = function(params) {};


/**
  * Informs that port was successfully bound and got a specified connection id.
  *
  * @param {!function(!chromium.DevTools.Tethering.AcceptedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Tethering.prototype.onAccepted = function(listener) {};
