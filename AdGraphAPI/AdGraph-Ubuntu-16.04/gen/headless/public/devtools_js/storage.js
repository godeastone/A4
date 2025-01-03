// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * @fileoverview Generated DevTools bindings for the Storage Domain.
 */
'use strict';

goog.provide('chromium.DevTools.ExperimentalStorage');
goog.provide('chromium.DevTools.Storage');
goog.require('chromium.DevTools.Connection');

goog.scope(function() {
const Connection = chromium.DevTools.Connection;

/**
 * Experimental bindings for the Storage DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalStorage = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;
}

const ExperimentalStorage = chromium.DevTools.ExperimentalStorage;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
ExperimentalStorage.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}

/**
 * Bindings for the Storage DevTools Domain.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.Storage = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;

  /** @type {!ExperimentalStorage} */
  this.experimental = new ExperimentalStorage(connection);
}

const Storage = chromium.DevTools.Storage;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
Storage.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}

/**
 * Enum of possible storage types.
 *
 * @enum {string}
 */
Storage.StorageType = {
    APPCACHE: "appcache",
    COOKIES: "cookies",
    FILE_SYSTEMS: "file_systems",
    INDEXEDDB: "indexeddb",
    LOCAL_STORAGE: "local_storage",
    SHADER_CACHE: "shader_cache",
    WEBSQL: "websql",
    SERVICE_WORKERS: "service_workers",
    CACHE_STORAGE: "cache_storage",
    ALL: "all",
    OTHER: "other"
};


/**
 * Usage for a storage type.
 *
 * storageType: Name of storage type.
 * usage: Storage usage (bytes).
 *
 * @typedef {{
 *   storageType: !Storage.StorageType,
 *   usage: number
 * }}
 */
Storage.UsageForType;

/**
 * Parameters for the ClearDataForOrigin command.
 *
 * origin: Security origin.
 * storageTypes: Comma separated origin names.
 *
 * @typedef {{
 *   origin: string,
 *   storageTypes: string
 * }}
 */
Storage.ClearDataForOriginParams;

/**
 * Result for the ClearDataForOrigin command.
 *
 *
 * @typedef {undefined}
 */
Storage.ClearDataForOriginResult;

/**
 * Parameters for the GetUsageAndQuota command.
 *
 * origin: Security origin.
 *
 * @typedef {{
 *   origin: string
 * }}
 */
Storage.GetUsageAndQuotaParams;

/**
 * Result for the GetUsageAndQuota command.
 *
 * usage: Storage usage (bytes).
 * quota: Storage quota (bytes).
 * usageBreakdown: Storage usage per type (bytes).
 *
 * @typedef {{
 *   usage: number,
 *   quota: number,
 *   usageBreakdown: !Array.<!Storage.UsageForType>
 * }}
 */
Storage.GetUsageAndQuotaResult;

/**
 * Parameters for the TrackCacheStorageForOrigin command.
 *
 * origin: Security origin.
 *
 * @typedef {{
 *   origin: string
 * }}
 */
Storage.TrackCacheStorageForOriginParams;

/**
 * Result for the TrackCacheStorageForOrigin command.
 *
 *
 * @typedef {undefined}
 */
Storage.TrackCacheStorageForOriginResult;

/**
 * Parameters for the TrackIndexedDBForOrigin command.
 *
 * origin: Security origin.
 *
 * @typedef {{
 *   origin: string
 * }}
 */
Storage.TrackIndexedDBForOriginParams;

/**
 * Result for the TrackIndexedDBForOrigin command.
 *
 *
 * @typedef {undefined}
 */
Storage.TrackIndexedDBForOriginResult;

/**
 * Parameters for the UntrackCacheStorageForOrigin command.
 *
 * origin: Security origin.
 *
 * @typedef {{
 *   origin: string
 * }}
 */
Storage.UntrackCacheStorageForOriginParams;

/**
 * Result for the UntrackCacheStorageForOrigin command.
 *
 *
 * @typedef {undefined}
 */
Storage.UntrackCacheStorageForOriginResult;

/**
 * Parameters for the UntrackIndexedDBForOrigin command.
 *
 * origin: Security origin.
 *
 * @typedef {{
 *   origin: string
 * }}
 */
Storage.UntrackIndexedDBForOriginParams;

/**
 * Result for the UntrackIndexedDBForOrigin command.
 *
 *
 * @typedef {undefined}
 */
Storage.UntrackIndexedDBForOriginResult;

/**
 * Parameters for the CacheStorageContentUpdated event.
 *
 * origin: Origin to update.
 * cacheName: Name of cache in origin.
 *
 * @typedef {{
 *   origin: string,
 *   cacheName: string
 * }}
 */
Storage.CacheStorageContentUpdatedParams;

/**
 * Parameters for the CacheStorageListUpdated event.
 *
 * origin: Origin to update.
 *
 * @typedef {{
 *   origin: string
 * }}
 */
Storage.CacheStorageListUpdatedParams;

/**
 * Parameters for the IndexedDBContentUpdated event.
 *
 * origin: Origin to update.
 * databaseName: Database to update.
 * objectStoreName: ObjectStore to update.
 *
 * @typedef {{
 *   origin: string,
 *   databaseName: string,
 *   objectStoreName: string
 * }}
 */
Storage.IndexedDBContentUpdatedParams;

/**
 * Parameters for the IndexedDBListUpdated event.
 *
 * origin: Origin to update.
 *
 * @typedef {{
 *   origin: string
 * }}
 */
Storage.IndexedDBListUpdatedParams;



/**
  * Clears storage for origin.
  *
  * @param {Storage.ClearDataForOriginParams} params
  * @return {!Promise<Storage.ClearDataForOriginResult>}
  */
ExperimentalStorage.prototype.clearDataForOrigin = function(params) {
  return this.connection_.sendDevToolsMessage('Storage.clearDataForOrigin', params);
};

/**
  * Returns usage and quota in bytes.
  *
  * @param {Storage.GetUsageAndQuotaParams} params
  * @return {!Promise<Storage.GetUsageAndQuotaResult>}
  */
ExperimentalStorage.prototype.getUsageAndQuota = function(params) {
  return this.connection_.sendDevToolsMessage('Storage.getUsageAndQuota', params);
};

/**
  * Registers origin to be notified when an update occurs to its cache storage list.
  *
  * @param {Storage.TrackCacheStorageForOriginParams} params
  * @return {!Promise<Storage.TrackCacheStorageForOriginResult>}
  */
ExperimentalStorage.prototype.trackCacheStorageForOrigin = function(params) {
  return this.connection_.sendDevToolsMessage('Storage.trackCacheStorageForOrigin', params);
};

/**
  * Registers origin to be notified when an update occurs to its IndexedDB.
  *
  * @param {Storage.TrackIndexedDBForOriginParams} params
  * @return {!Promise<Storage.TrackIndexedDBForOriginResult>}
  */
ExperimentalStorage.prototype.trackIndexedDBForOrigin = function(params) {
  return this.connection_.sendDevToolsMessage('Storage.trackIndexedDBForOrigin', params);
};

/**
  * Unregisters origin from receiving notifications for cache storage.
  *
  * @param {Storage.UntrackCacheStorageForOriginParams} params
  * @return {!Promise<Storage.UntrackCacheStorageForOriginResult>}
  */
ExperimentalStorage.prototype.untrackCacheStorageForOrigin = function(params) {
  return this.connection_.sendDevToolsMessage('Storage.untrackCacheStorageForOrigin', params);
};

/**
  * Unregisters origin from receiving notifications for IndexedDB.
  *
  * @param {Storage.UntrackIndexedDBForOriginParams} params
  * @return {!Promise<Storage.UntrackIndexedDBForOriginResult>}
  */
ExperimentalStorage.prototype.untrackIndexedDBForOrigin = function(params) {
  return this.connection_.sendDevToolsMessage('Storage.untrackIndexedDBForOrigin', params);
};


/**
  * A cache's contents have been modified.
  *
  * @param {!function(!Storage.CacheStorageContentUpdatedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalStorage.prototype.onCacheStorageContentUpdated = function(listener) {
  return this.connection_.addEventListener(
      'Storage.cacheStorageContentUpdated', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * A cache has been added/deleted.
  *
  * @param {!function(!Storage.CacheStorageListUpdatedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalStorage.prototype.onCacheStorageListUpdated = function(listener) {
  return this.connection_.addEventListener(
      'Storage.cacheStorageListUpdated', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * The origin's IndexedDB object store has been modified.
  *
  * @param {!function(!Storage.IndexedDBContentUpdatedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalStorage.prototype.onIndexedDBContentUpdated = function(listener) {
  return this.connection_.addEventListener(
      'Storage.indexedDBContentUpdated', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * The origin's IndexedDB database list has been modified.
  *
  * @param {!function(!Storage.IndexedDBListUpdatedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalStorage.prototype.onIndexedDBListUpdated = function(listener) {
  return this.connection_.addEventListener(
      'Storage.indexedDBListUpdated', /** @type {!function(!Object): undefined} */ (listener));
};



/**
  * Clears storage for origin.
  *
  * @param {Storage.ClearDataForOriginParams} params
  * @return {!Promise<Storage.ClearDataForOriginResult>}
  */
Storage.prototype.clearDataForOrigin = function(params) {
  return this.connection_.sendDevToolsMessage('Storage.clearDataForOrigin', params);
};

/**
  * Returns usage and quota in bytes.
  *
  * @param {Storage.GetUsageAndQuotaParams} params
  * @return {!Promise<Storage.GetUsageAndQuotaResult>}
  */
Storage.prototype.getUsageAndQuota = function(params) {
  return this.connection_.sendDevToolsMessage('Storage.getUsageAndQuota', params);
};

/**
  * Registers origin to be notified when an update occurs to its cache storage list.
  *
  * @param {Storage.TrackCacheStorageForOriginParams} params
  * @return {!Promise<Storage.TrackCacheStorageForOriginResult>}
  */
Storage.prototype.trackCacheStorageForOrigin = function(params) {
  return this.connection_.sendDevToolsMessage('Storage.trackCacheStorageForOrigin', params);
};

/**
  * Registers origin to be notified when an update occurs to its IndexedDB.
  *
  * @param {Storage.TrackIndexedDBForOriginParams} params
  * @return {!Promise<Storage.TrackIndexedDBForOriginResult>}
  */
Storage.prototype.trackIndexedDBForOrigin = function(params) {
  return this.connection_.sendDevToolsMessage('Storage.trackIndexedDBForOrigin', params);
};

/**
  * Unregisters origin from receiving notifications for cache storage.
  *
  * @param {Storage.UntrackCacheStorageForOriginParams} params
  * @return {!Promise<Storage.UntrackCacheStorageForOriginResult>}
  */
Storage.prototype.untrackCacheStorageForOrigin = function(params) {
  return this.connection_.sendDevToolsMessage('Storage.untrackCacheStorageForOrigin', params);
};

/**
  * Unregisters origin from receiving notifications for IndexedDB.
  *
  * @param {Storage.UntrackIndexedDBForOriginParams} params
  * @return {!Promise<Storage.UntrackIndexedDBForOriginResult>}
  */
Storage.prototype.untrackIndexedDBForOrigin = function(params) {
  return this.connection_.sendDevToolsMessage('Storage.untrackIndexedDBForOrigin', params);
};


/**
  * A cache's contents have been modified.
  *
  * @param {!function(!Storage.CacheStorageContentUpdatedParams)} listener
  * @return {number} The id of this event listener.
  */
Storage.prototype.onCacheStorageContentUpdated = function(listener) {
  return this.connection_.addEventListener(
      'Storage.cacheStorageContentUpdated', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * A cache has been added/deleted.
  *
  * @param {!function(!Storage.CacheStorageListUpdatedParams)} listener
  * @return {number} The id of this event listener.
  */
Storage.prototype.onCacheStorageListUpdated = function(listener) {
  return this.connection_.addEventListener(
      'Storage.cacheStorageListUpdated', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * The origin's IndexedDB object store has been modified.
  *
  * @param {!function(!Storage.IndexedDBContentUpdatedParams)} listener
  * @return {number} The id of this event listener.
  */
Storage.prototype.onIndexedDBContentUpdated = function(listener) {
  return this.connection_.addEventListener(
      'Storage.indexedDBContentUpdated', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * The origin's IndexedDB database list has been modified.
  *
  * @param {!function(!Storage.IndexedDBListUpdatedParams)} listener
  * @return {number} The id of this event listener.
  */
Storage.prototype.onIndexedDBListUpdated = function(listener) {
  return this.connection_.addEventListener(
      'Storage.indexedDBListUpdated', /** @type {!function(!Object): undefined} */ (listener));
};

});  // goog.scope

