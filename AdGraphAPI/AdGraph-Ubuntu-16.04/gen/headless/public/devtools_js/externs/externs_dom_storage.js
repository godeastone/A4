// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * Experimental bindings for the DOMStorage DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalDOMStorage = function(connection) {};

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.ExperimentalDOMStorage.prototype.removeEventListener = function(id) {};

/**
 * Bindings for the DOMStorage DevTools Domain.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.DOMStorage = function(connection) {};

/** @type {!chromium.DevTools.ExperimentalDOMStorage} */
chromium.DevTools.DOMStorage.prototype.experimental;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.DOMStorage.prototype.removeEventListener = function(id) {};


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
chromium.DevTools.DOMStorage.StorageId;

/**
 * Parameters for the Clear command.
 *
 *
 * @typedef {{
 *   storageId: !chromium.DevTools.DOMStorage.StorageId
 * }}
 */
chromium.DevTools.DOMStorage.ClearParams;

/**
 * Result for the Clear command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.DOMStorage.ClearResult;

/**
 * Parameters for the Disable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.DOMStorage.DisableParams;

/**
 * Result for the Disable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.DOMStorage.DisableResult;

/**
 * Parameters for the Enable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.DOMStorage.EnableParams;

/**
 * Result for the Enable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.DOMStorage.EnableResult;

/**
 * Parameters for the GetDOMStorageItems command.
 *
 *
 * @typedef {{
 *   storageId: !chromium.DevTools.DOMStorage.StorageId
 * }}
 */
chromium.DevTools.DOMStorage.GetDOMStorageItemsParams;

/**
 * Result for the GetDOMStorageItems command.
 *
 *
 * @typedef {{
 *   entries: !Array.<!Array.<string>>
 * }}
 */
chromium.DevTools.DOMStorage.GetDOMStorageItemsResult;

/**
 * Parameters for the RemoveDOMStorageItem command.
 *
 *
 * @typedef {{
 *   storageId: !chromium.DevTools.DOMStorage.StorageId,
 *   key: string
 * }}
 */
chromium.DevTools.DOMStorage.RemoveDOMStorageItemParams;

/**
 * Result for the RemoveDOMStorageItem command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.DOMStorage.RemoveDOMStorageItemResult;

/**
 * Parameters for the SetDOMStorageItem command.
 *
 *
 * @typedef {{
 *   storageId: !chromium.DevTools.DOMStorage.StorageId,
 *   key: string,
 *   value: string
 * }}
 */
chromium.DevTools.DOMStorage.SetDOMStorageItemParams;

/**
 * Result for the SetDOMStorageItem command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.DOMStorage.SetDOMStorageItemResult;

/**
 * Parameters for the DomStorageItemAdded event.
 *
 *
 * @typedef {{
 *   storageId: !chromium.DevTools.DOMStorage.StorageId,
 *   key: string,
 *   newValue: string
 * }}
 */
chromium.DevTools.DOMStorage.DomStorageItemAddedParams;

/**
 * Parameters for the DomStorageItemRemoved event.
 *
 *
 * @typedef {{
 *   storageId: !chromium.DevTools.DOMStorage.StorageId,
 *   key: string
 * }}
 */
chromium.DevTools.DOMStorage.DomStorageItemRemovedParams;

/**
 * Parameters for the DomStorageItemUpdated event.
 *
 *
 * @typedef {{
 *   storageId: !chromium.DevTools.DOMStorage.StorageId,
 *   key: string,
 *   oldValue: string,
 *   newValue: string
 * }}
 */
chromium.DevTools.DOMStorage.DomStorageItemUpdatedParams;

/**
 * Parameters for the DomStorageItemsCleared event.
 *
 *
 * @typedef {{
 *   storageId: !chromium.DevTools.DOMStorage.StorageId
 * }}
 */
chromium.DevTools.DOMStorage.DomStorageItemsClearedParams;



/**
  * @param {chromium.DevTools.DOMStorage.ClearParams} params
  * @return {!Promise<chromium.DevTools.DOMStorage.ClearResult>}
  */
chromium.DevTools.ExperimentalDOMStorage.prototype.clear = function(params) {};

/**
  * Disables storage tracking, prevents storage events from being sent to the client.
  *
  * @return {!Promise<chromium.DevTools.DOMStorage.DisableResult>}
  */
chromium.DevTools.ExperimentalDOMStorage.prototype.disable = function() {};

/**
  * Enables storage tracking, storage events will now be delivered to the client.
  *
  * @return {!Promise<chromium.DevTools.DOMStorage.EnableResult>}
  */
chromium.DevTools.ExperimentalDOMStorage.prototype.enable = function() {};

/**
  * @param {chromium.DevTools.DOMStorage.GetDOMStorageItemsParams} params
  * @return {!Promise<chromium.DevTools.DOMStorage.GetDOMStorageItemsResult>}
  */
chromium.DevTools.ExperimentalDOMStorage.prototype.getDOMStorageItems = function(params) {};

/**
  * @param {chromium.DevTools.DOMStorage.RemoveDOMStorageItemParams} params
  * @return {!Promise<chromium.DevTools.DOMStorage.RemoveDOMStorageItemResult>}
  */
chromium.DevTools.ExperimentalDOMStorage.prototype.removeDOMStorageItem = function(params) {};

/**
  * @param {chromium.DevTools.DOMStorage.SetDOMStorageItemParams} params
  * @return {!Promise<chromium.DevTools.DOMStorage.SetDOMStorageItemResult>}
  */
chromium.DevTools.ExperimentalDOMStorage.prototype.setDOMStorageItem = function(params) {};


/**
  * @param {!function(!chromium.DevTools.DOMStorage.DomStorageItemAddedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalDOMStorage.prototype.onDomStorageItemAdded = function(listener) {};

/**
  * @param {!function(!chromium.DevTools.DOMStorage.DomStorageItemRemovedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalDOMStorage.prototype.onDomStorageItemRemoved = function(listener) {};

/**
  * @param {!function(!chromium.DevTools.DOMStorage.DomStorageItemUpdatedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalDOMStorage.prototype.onDomStorageItemUpdated = function(listener) {};

/**
  * @param {!function(!chromium.DevTools.DOMStorage.DomStorageItemsClearedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalDOMStorage.prototype.onDomStorageItemsCleared = function(listener) {};



/**
  * @param {chromium.DevTools.DOMStorage.ClearParams} params
  * @return {!Promise<chromium.DevTools.DOMStorage.ClearResult>}
  */
chromium.DevTools.DOMStorage.prototype.clear = function(params) {};

/**
  * Disables storage tracking, prevents storage events from being sent to the client.
  *
  * @return {!Promise<chromium.DevTools.DOMStorage.DisableResult>}
  */
chromium.DevTools.DOMStorage.prototype.disable = function() {};

/**
  * Enables storage tracking, storage events will now be delivered to the client.
  *
  * @return {!Promise<chromium.DevTools.DOMStorage.EnableResult>}
  */
chromium.DevTools.DOMStorage.prototype.enable = function() {};

/**
  * @param {chromium.DevTools.DOMStorage.GetDOMStorageItemsParams} params
  * @return {!Promise<chromium.DevTools.DOMStorage.GetDOMStorageItemsResult>}
  */
chromium.DevTools.DOMStorage.prototype.getDOMStorageItems = function(params) {};

/**
  * @param {chromium.DevTools.DOMStorage.RemoveDOMStorageItemParams} params
  * @return {!Promise<chromium.DevTools.DOMStorage.RemoveDOMStorageItemResult>}
  */
chromium.DevTools.DOMStorage.prototype.removeDOMStorageItem = function(params) {};

/**
  * @param {chromium.DevTools.DOMStorage.SetDOMStorageItemParams} params
  * @return {!Promise<chromium.DevTools.DOMStorage.SetDOMStorageItemResult>}
  */
chromium.DevTools.DOMStorage.prototype.setDOMStorageItem = function(params) {};


/**
  * @param {!function(!chromium.DevTools.DOMStorage.DomStorageItemAddedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.DOMStorage.prototype.onDomStorageItemAdded = function(listener) {};

/**
  * @param {!function(!chromium.DevTools.DOMStorage.DomStorageItemRemovedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.DOMStorage.prototype.onDomStorageItemRemoved = function(listener) {};

/**
  * @param {!function(!chromium.DevTools.DOMStorage.DomStorageItemUpdatedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.DOMStorage.prototype.onDomStorageItemUpdated = function(listener) {};

/**
  * @param {!function(!chromium.DevTools.DOMStorage.DomStorageItemsClearedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.DOMStorage.prototype.onDomStorageItemsCleared = function(listener) {};
