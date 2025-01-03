// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * Experimental bindings for the Storage DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalStorage = function(connection) {};

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.ExperimentalStorage.prototype.removeEventListener = function(id) {};

/**
 * Bindings for the Storage DevTools Domain.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.Storage = function(connection) {};

/** @type {!chromium.DevTools.ExperimentalStorage} */
chromium.DevTools.Storage.prototype.experimental;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.Storage.prototype.removeEventListener = function(id) {};

/**
 * Enum of possible storage types.
 *
 * @enum {string}
 */
chromium.DevTools.Storage.StorageType = {
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
 *   storageType: !chromium.DevTools.Storage.StorageType,
 *   usage: number
 * }}
 */
chromium.DevTools.Storage.UsageForType;

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
chromium.DevTools.Storage.ClearDataForOriginParams;

/**
 * Result for the ClearDataForOrigin command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Storage.ClearDataForOriginResult;

/**
 * Parameters for the GetUsageAndQuota command.
 *
 * origin: Security origin.
 *
 * @typedef {{
 *   origin: string
 * }}
 */
chromium.DevTools.Storage.GetUsageAndQuotaParams;

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
 *   usageBreakdown: !Array.<!chromium.DevTools.Storage.UsageForType>
 * }}
 */
chromium.DevTools.Storage.GetUsageAndQuotaResult;

/**
 * Parameters for the TrackCacheStorageForOrigin command.
 *
 * origin: Security origin.
 *
 * @typedef {{
 *   origin: string
 * }}
 */
chromium.DevTools.Storage.TrackCacheStorageForOriginParams;

/**
 * Result for the TrackCacheStorageForOrigin command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Storage.TrackCacheStorageForOriginResult;

/**
 * Parameters for the TrackIndexedDBForOrigin command.
 *
 * origin: Security origin.
 *
 * @typedef {{
 *   origin: string
 * }}
 */
chromium.DevTools.Storage.TrackIndexedDBForOriginParams;

/**
 * Result for the TrackIndexedDBForOrigin command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Storage.TrackIndexedDBForOriginResult;

/**
 * Parameters for the UntrackCacheStorageForOrigin command.
 *
 * origin: Security origin.
 *
 * @typedef {{
 *   origin: string
 * }}
 */
chromium.DevTools.Storage.UntrackCacheStorageForOriginParams;

/**
 * Result for the UntrackCacheStorageForOrigin command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Storage.UntrackCacheStorageForOriginResult;

/**
 * Parameters for the UntrackIndexedDBForOrigin command.
 *
 * origin: Security origin.
 *
 * @typedef {{
 *   origin: string
 * }}
 */
chromium.DevTools.Storage.UntrackIndexedDBForOriginParams;

/**
 * Result for the UntrackIndexedDBForOrigin command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Storage.UntrackIndexedDBForOriginResult;

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
chromium.DevTools.Storage.CacheStorageContentUpdatedParams;

/**
 * Parameters for the CacheStorageListUpdated event.
 *
 * origin: Origin to update.
 *
 * @typedef {{
 *   origin: string
 * }}
 */
chromium.DevTools.Storage.CacheStorageListUpdatedParams;

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
chromium.DevTools.Storage.IndexedDBContentUpdatedParams;

/**
 * Parameters for the IndexedDBListUpdated event.
 *
 * origin: Origin to update.
 *
 * @typedef {{
 *   origin: string
 * }}
 */
chromium.DevTools.Storage.IndexedDBListUpdatedParams;



/**
  * Clears storage for origin.
  *
  * @param {chromium.DevTools.Storage.ClearDataForOriginParams} params
  * @return {!Promise<chromium.DevTools.Storage.ClearDataForOriginResult>}
  */
chromium.DevTools.ExperimentalStorage.prototype.clearDataForOrigin = function(params) {};

/**
  * Returns usage and quota in bytes.
  *
  * @param {chromium.DevTools.Storage.GetUsageAndQuotaParams} params
  * @return {!Promise<chromium.DevTools.Storage.GetUsageAndQuotaResult>}
  */
chromium.DevTools.ExperimentalStorage.prototype.getUsageAndQuota = function(params) {};

/**
  * Registers origin to be notified when an update occurs to its cache storage list.
  *
  * @param {chromium.DevTools.Storage.TrackCacheStorageForOriginParams} params
  * @return {!Promise<chromium.DevTools.Storage.TrackCacheStorageForOriginResult>}
  */
chromium.DevTools.ExperimentalStorage.prototype.trackCacheStorageForOrigin = function(params) {};

/**
  * Registers origin to be notified when an update occurs to its IndexedDB.
  *
  * @param {chromium.DevTools.Storage.TrackIndexedDBForOriginParams} params
  * @return {!Promise<chromium.DevTools.Storage.TrackIndexedDBForOriginResult>}
  */
chromium.DevTools.ExperimentalStorage.prototype.trackIndexedDBForOrigin = function(params) {};

/**
  * Unregisters origin from receiving notifications for cache storage.
  *
  * @param {chromium.DevTools.Storage.UntrackCacheStorageForOriginParams} params
  * @return {!Promise<chromium.DevTools.Storage.UntrackCacheStorageForOriginResult>}
  */
chromium.DevTools.ExperimentalStorage.prototype.untrackCacheStorageForOrigin = function(params) {};

/**
  * Unregisters origin from receiving notifications for IndexedDB.
  *
  * @param {chromium.DevTools.Storage.UntrackIndexedDBForOriginParams} params
  * @return {!Promise<chromium.DevTools.Storage.UntrackIndexedDBForOriginResult>}
  */
chromium.DevTools.ExperimentalStorage.prototype.untrackIndexedDBForOrigin = function(params) {};


/**
  * A cache's contents have been modified.
  *
  * @param {!function(!chromium.DevTools.Storage.CacheStorageContentUpdatedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalStorage.prototype.onCacheStorageContentUpdated = function(listener) {};

/**
  * A cache has been added/deleted.
  *
  * @param {!function(!chromium.DevTools.Storage.CacheStorageListUpdatedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalStorage.prototype.onCacheStorageListUpdated = function(listener) {};

/**
  * The origin's IndexedDB object store has been modified.
  *
  * @param {!function(!chromium.DevTools.Storage.IndexedDBContentUpdatedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalStorage.prototype.onIndexedDBContentUpdated = function(listener) {};

/**
  * The origin's IndexedDB database list has been modified.
  *
  * @param {!function(!chromium.DevTools.Storage.IndexedDBListUpdatedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalStorage.prototype.onIndexedDBListUpdated = function(listener) {};



/**
  * Clears storage for origin.
  *
  * @param {chromium.DevTools.Storage.ClearDataForOriginParams} params
  * @return {!Promise<chromium.DevTools.Storage.ClearDataForOriginResult>}
  */
chromium.DevTools.Storage.prototype.clearDataForOrigin = function(params) {};

/**
  * Returns usage and quota in bytes.
  *
  * @param {chromium.DevTools.Storage.GetUsageAndQuotaParams} params
  * @return {!Promise<chromium.DevTools.Storage.GetUsageAndQuotaResult>}
  */
chromium.DevTools.Storage.prototype.getUsageAndQuota = function(params) {};

/**
  * Registers origin to be notified when an update occurs to its cache storage list.
  *
  * @param {chromium.DevTools.Storage.TrackCacheStorageForOriginParams} params
  * @return {!Promise<chromium.DevTools.Storage.TrackCacheStorageForOriginResult>}
  */
chromium.DevTools.Storage.prototype.trackCacheStorageForOrigin = function(params) {};

/**
  * Registers origin to be notified when an update occurs to its IndexedDB.
  *
  * @param {chromium.DevTools.Storage.TrackIndexedDBForOriginParams} params
  * @return {!Promise<chromium.DevTools.Storage.TrackIndexedDBForOriginResult>}
  */
chromium.DevTools.Storage.prototype.trackIndexedDBForOrigin = function(params) {};

/**
  * Unregisters origin from receiving notifications for cache storage.
  *
  * @param {chromium.DevTools.Storage.UntrackCacheStorageForOriginParams} params
  * @return {!Promise<chromium.DevTools.Storage.UntrackCacheStorageForOriginResult>}
  */
chromium.DevTools.Storage.prototype.untrackCacheStorageForOrigin = function(params) {};

/**
  * Unregisters origin from receiving notifications for IndexedDB.
  *
  * @param {chromium.DevTools.Storage.UntrackIndexedDBForOriginParams} params
  * @return {!Promise<chromium.DevTools.Storage.UntrackIndexedDBForOriginResult>}
  */
chromium.DevTools.Storage.prototype.untrackIndexedDBForOrigin = function(params) {};


/**
  * A cache's contents have been modified.
  *
  * @param {!function(!chromium.DevTools.Storage.CacheStorageContentUpdatedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Storage.prototype.onCacheStorageContentUpdated = function(listener) {};

/**
  * A cache has been added/deleted.
  *
  * @param {!function(!chromium.DevTools.Storage.CacheStorageListUpdatedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Storage.prototype.onCacheStorageListUpdated = function(listener) {};

/**
  * The origin's IndexedDB object store has been modified.
  *
  * @param {!function(!chromium.DevTools.Storage.IndexedDBContentUpdatedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Storage.prototype.onIndexedDBContentUpdated = function(listener) {};

/**
  * The origin's IndexedDB database list has been modified.
  *
  * @param {!function(!chromium.DevTools.Storage.IndexedDBListUpdatedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Storage.prototype.onIndexedDBListUpdated = function(listener) {};
