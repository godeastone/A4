// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * @fileoverview Generated DevTools bindings for the DOMStorage Domain.
 */
'use strict';

goog.provide('chromium.DevTools.ExperimentalDOMStorage');
goog.provide('chromium.DevTools.DOMStorage');
goog.require('chromium.DevTools.Connection');

goog.scope(function() {
const Connection = chromium.DevTools.Connection;

/**
 * Experimental bindings for the DOMStorage DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalDOMStorage = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;
}

const ExperimentalDOMStorage = chromium.DevTools.ExperimentalDOMStorage;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
ExperimentalDOMStorage.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}

/**
 * Bindings for the DOMStorage DevTools Domain.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.DOMStorage = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;

  /** @type {!ExperimentalDOMStorage} */
  this.experimental = new ExperimentalDOMStorage(connection);
}

const DOMStorage = chromium.DevTools.DOMStorage;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
DOMStorage.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}


/**
 * DOM Storage identifier.
 *
 * securityOrigin: Security origin for the storage.
 * isLocalStorage: Whether the storage is local storage (not session storage).
 *
 * @typedef {{
 *   securityOrigin: string,
 *   isLocalStorage: boolean
 * }}
 */
DOMStorage.StorageId;

/**
 * Parameters for the Clear command.
 *
 *
 * @typedef {{
 *   storageId: !DOMStorage.StorageId
 * }}
 */
DOMStorage.ClearParams;

/**
 * Result for the Clear command.
 *
 *
 * @typedef {undefined}
 */
DOMStorage.ClearResult;

/**
 * Parameters for the Disable command.
 *
 *
 * @typedef {undefined}
 */
DOMStorage.DisableParams;

/**
 * Result for the Disable command.
 *
 *
 * @typedef {undefined}
 */
DOMStorage.DisableResult;

/**
 * Parameters for the Enable command.
 *
 *
 * @typedef {undefined}
 */
DOMStorage.EnableParams;

/**
 * Result for the Enable command.
 *
 *
 * @typedef {undefined}
 */
DOMStorage.EnableResult;

/**
 * Parameters for the GetDOMStorageItems command.
 *
 *
 * @typedef {{
 *   storageId: !DOMStorage.StorageId
 * }}
 */
DOMStorage.GetDOMStorageItemsParams;

/**
 * Result for the GetDOMStorageItems command.
 *
 *
 * @typedef {{
 *   entries: !Array.<!Array.<string>>
 * }}
 */
DOMStorage.GetDOMStorageItemsResult;

/**
 * Parameters for the RemoveDOMStorageItem command.
 *
 *
 * @typedef {{
 *   storageId: !DOMStorage.StorageId,
 *   key: string
 * }}
 */
DOMStorage.RemoveDOMStorageItemParams;

/**
 * Result for the RemoveDOMStorageItem command.
 *
 *
 * @typedef {undefined}
 */
DOMStorage.RemoveDOMStorageItemResult;

/**
 * Parameters for the SetDOMStorageItem command.
 *
 *
 * @typedef {{
 *   storageId: !DOMStorage.StorageId,
 *   key: string,
 *   value: string
 * }}
 */
DOMStorage.SetDOMStorageItemParams;

/**
 * Result for the SetDOMStorageItem command.
 *
 *
 * @typedef {undefined}
 */
DOMStorage.SetDOMStorageItemResult;

/**
 * Parameters for the DomStorageItemAdded event.
 *
 *
 * @typedef {{
 *   storageId: !DOMStorage.StorageId,
 *   key: string,
 *   newValue: string
 * }}
 */
DOMStorage.DomStorageItemAddedParams;

/**
 * Parameters for the DomStorageItemRemoved event.
 *
 *
 * @typedef {{
 *   storageId: !DOMStorage.StorageId,
 *   key: string
 * }}
 */
DOMStorage.DomStorageItemRemovedParams;

/**
 * Parameters for the DomStorageItemUpdated event.
 *
 *
 * @typedef {{
 *   storageId: !DOMStorage.StorageId,
 *   key: string,
 *   oldValue: string,
 *   newValue: string
 * }}
 */
DOMStorage.DomStorageItemUpdatedParams;

/**
 * Parameters for the DomStorageItemsCleared event.
 *
 *
 * @typedef {{
 *   storageId: !DOMStorage.StorageId
 * }}
 */
DOMStorage.DomStorageItemsClearedParams;



/**
  * @param {DOMStorage.ClearParams} params
  * @return {!Promise<DOMStorage.ClearResult>}
  */
ExperimentalDOMStorage.prototype.clear = function(params) {
  return this.connection_.sendDevToolsMessage('DOMStorage.clear', params);
};

/**
  * Disables storage tracking, prevents storage events from being sent to the client.
  *
  * @return {!Promise<DOMStorage.DisableResult>}
  */
ExperimentalDOMStorage.prototype.disable = function() {
  return this.connection_.sendDevToolsMessage('DOMStorage.disable', {});
};

/**
  * Enables storage tracking, storage events will now be delivered to the client.
  *
  * @return {!Promise<DOMStorage.EnableResult>}
  */
ExperimentalDOMStorage.prototype.enable = function() {
  return this.connection_.sendDevToolsMessage('DOMStorage.enable', {});
};

/**
  * @param {DOMStorage.GetDOMStorageItemsParams} params
  * @return {!Promise<DOMStorage.GetDOMStorageItemsResult>}
  */
ExperimentalDOMStorage.prototype.getDOMStorageItems = function(params) {
  return this.connection_.sendDevToolsMessage('DOMStorage.getDOMStorageItems', params);
};

/**
  * @param {DOMStorage.RemoveDOMStorageItemParams} params
  * @return {!Promise<DOMStorage.RemoveDOMStorageItemResult>}
  */
ExperimentalDOMStorage.prototype.removeDOMStorageItem = function(params) {
  return this.connection_.sendDevToolsMessage('DOMStorage.removeDOMStorageItem', params);
};

/**
  * @param {DOMStorage.SetDOMStorageItemParams} params
  * @return {!Promise<DOMStorage.SetDOMStorageItemResult>}
  */
ExperimentalDOMStorage.prototype.setDOMStorageItem = function(params) {
  return this.connection_.sendDevToolsMessage('DOMStorage.setDOMStorageItem', params);
};


/**
  * @param {!function(!DOMStorage.DomStorageItemAddedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalDOMStorage.prototype.onDomStorageItemAdded = function(listener) {
  return this.connection_.addEventListener(
      'DOMStorage.domStorageItemAdded', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * @param {!function(!DOMStorage.DomStorageItemRemovedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalDOMStorage.prototype.onDomStorageItemRemoved = function(listener) {
  return this.connection_.addEventListener(
      'DOMStorage.domStorageItemRemoved', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * @param {!function(!DOMStorage.DomStorageItemUpdatedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalDOMStorage.prototype.onDomStorageItemUpdated = function(listener) {
  return this.connection_.addEventListener(
      'DOMStorage.domStorageItemUpdated', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * @param {!function(!DOMStorage.DomStorageItemsClearedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalDOMStorage.prototype.onDomStorageItemsCleared = function(listener) {
  return this.connection_.addEventListener(
      'DOMStorage.domStorageItemsCleared', /** @type {!function(!Object): undefined} */ (listener));
};



/**
  * @param {DOMStorage.ClearParams} params
  * @return {!Promise<DOMStorage.ClearResult>}
  */
DOMStorage.prototype.clear = function(params) {
  return this.connection_.sendDevToolsMessage('DOMStorage.clear', params);
};

/**
  * Disables storage tracking, prevents storage events from being sent to the client.
  *
  * @return {!Promise<DOMStorage.DisableResult>}
  */
DOMStorage.prototype.disable = function() {
  return this.connection_.sendDevToolsMessage('DOMStorage.disable', {});
};

/**
  * Enables storage tracking, storage events will now be delivered to the client.
  *
  * @return {!Promise<DOMStorage.EnableResult>}
  */
DOMStorage.prototype.enable = function() {
  return this.connection_.sendDevToolsMessage('DOMStorage.enable', {});
};

/**
  * @param {DOMStorage.GetDOMStorageItemsParams} params
  * @return {!Promise<DOMStorage.GetDOMStorageItemsResult>}
  */
DOMStorage.prototype.getDOMStorageItems = function(params) {
  return this.connection_.sendDevToolsMessage('DOMStorage.getDOMStorageItems', params);
};

/**
  * @param {DOMStorage.RemoveDOMStorageItemParams} params
  * @return {!Promise<DOMStorage.RemoveDOMStorageItemResult>}
  */
DOMStorage.prototype.removeDOMStorageItem = function(params) {
  return this.connection_.sendDevToolsMessage('DOMStorage.removeDOMStorageItem', params);
};

/**
  * @param {DOMStorage.SetDOMStorageItemParams} params
  * @return {!Promise<DOMStorage.SetDOMStorageItemResult>}
  */
DOMStorage.prototype.setDOMStorageItem = function(params) {
  return this.connection_.sendDevToolsMessage('DOMStorage.setDOMStorageItem', params);
};


/**
  * @param {!function(!DOMStorage.DomStorageItemAddedParams)} listener
  * @return {number} The id of this event listener.
  */
DOMStorage.prototype.onDomStorageItemAdded = function(listener) {
  return this.connection_.addEventListener(
      'DOMStorage.domStorageItemAdded', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * @param {!function(!DOMStorage.DomStorageItemRemovedParams)} listener
  * @return {number} The id of this event listener.
  */
DOMStorage.prototype.onDomStorageItemRemoved = function(listener) {
  return this.connection_.addEventListener(
      'DOMStorage.domStorageItemRemoved', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * @param {!function(!DOMStorage.DomStorageItemUpdatedParams)} listener
  * @return {number} The id of this event listener.
  */
DOMStorage.prototype.onDomStorageItemUpdated = function(listener) {
  return this.connection_.addEventListener(
      'DOMStorage.domStorageItemUpdated', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * @param {!function(!DOMStorage.DomStorageItemsClearedParams)} listener
  * @return {number} The id of this event listener.
  */
DOMStorage.prototype.onDomStorageItemsCleared = function(listener) {
  return this.connection_.addEventListener(
      'DOMStorage.domStorageItemsCleared', /** @type {!function(!Object): undefined} */ (listener));
};

});  // goog.scope

