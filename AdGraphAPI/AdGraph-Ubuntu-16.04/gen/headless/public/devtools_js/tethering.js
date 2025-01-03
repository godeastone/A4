// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * @fileoverview Generated DevTools bindings for the Tethering Domain.
 */
'use strict';

goog.provide('chromium.DevTools.ExperimentalTethering');
goog.provide('chromium.DevTools.Tethering');
goog.require('chromium.DevTools.Connection');

goog.scope(function() {
const Connection = chromium.DevTools.Connection;

/**
 * Experimental bindings for the Tethering DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalTethering = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;
}

const ExperimentalTethering = chromium.DevTools.ExperimentalTethering;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
ExperimentalTethering.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}

/**
 * Bindings for the Tethering DevTools Domain.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.Tethering = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;

  /** @type {!ExperimentalTethering} */
  this.experimental = new ExperimentalTethering(connection);
}

const Tethering = chromium.DevTools.Tethering;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
Tethering.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}


/**
 * Parameters for the Bind command.
 *
 * port: Port number to bind.
 *
 * @typedef {{
 *   port: number
 * }}
 */
Tethering.BindParams;

/**
 * Result for the Bind command.
 *
 *
 * @typedef {undefined}
 */
Tethering.BindResult;

/**
 * Parameters for the Unbind command.
 *
 * port: Port number to unbind.
 *
 * @typedef {{
 *   port: number
 * }}
 */
Tethering.UnbindParams;

/**
 * Result for the Unbind command.
 *
 *
 * @typedef {undefined}
 */
Tethering.UnbindResult;

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
Tethering.AcceptedParams;



/**
  * Request browser port binding.
  *
  * @param {Tethering.BindParams} params
  * @return {!Promise<Tethering.BindResult>}
  */
ExperimentalTethering.prototype.bind = function(params) {
  return this.connection_.sendDevToolsMessage('Tethering.bind', params);
};

/**
  * Request browser port unbinding.
  *
  * @param {Tethering.UnbindParams} params
  * @return {!Promise<Tethering.UnbindResult>}
  */
ExperimentalTethering.prototype.unbind = function(params) {
  return this.connection_.sendDevToolsMessage('Tethering.unbind', params);
};


/**
  * Informs that port was successfully bound and got a specified connection id.
  *
  * @param {!function(!Tethering.AcceptedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalTethering.prototype.onAccepted = function(listener) {
  return this.connection_.addEventListener(
      'Tethering.accepted', /** @type {!function(!Object): undefined} */ (listener));
};



/**
  * Request browser port binding.
  *
  * @param {Tethering.BindParams} params
  * @return {!Promise<Tethering.BindResult>}
  */
Tethering.prototype.bind = function(params) {
  return this.connection_.sendDevToolsMessage('Tethering.bind', params);
};

/**
  * Request browser port unbinding.
  *
  * @param {Tethering.UnbindParams} params
  * @return {!Promise<Tethering.UnbindResult>}
  */
Tethering.prototype.unbind = function(params) {
  return this.connection_.sendDevToolsMessage('Tethering.unbind', params);
};


/**
  * Informs that port was successfully bound and got a specified connection id.
  *
  * @param {!function(!Tethering.AcceptedParams)} listener
  * @return {number} The id of this event listener.
  */
Tethering.prototype.onAccepted = function(listener) {
  return this.connection_.addEventListener(
      'Tethering.accepted', /** @type {!function(!Object): undefined} */ (listener));
};

});  // goog.scope

