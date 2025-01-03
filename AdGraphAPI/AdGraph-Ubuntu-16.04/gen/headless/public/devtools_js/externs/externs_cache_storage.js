// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * Experimental bindings for the CacheStorage DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalCacheStorage = function(connection) {};

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.ExperimentalCacheStorage.prototype.removeEventListener = function(id) {};

/**
 * Bindings for the CacheStorage DevTools Domain.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.CacheStorage = function(connection) {};

/** @type {!chromium.DevTools.ExperimentalCacheStorage} */
chromium.DevTools.CacheStorage.prototype.experimental;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.CacheStorage.prototype.removeEventListener = function(id) {};


/**
 * Data entry.
 *
 * requestURL: Request URL.
 * requestMethod: Request method.
 * requestHeaders: Request headers
 * responseTime: Number of seconds since epoch.
 * responseStatus: HTTP response status code.
 * responseStatusText: HTTP response status text.
 * responseHeaders: Response headers
 *
 * @typedef {{
 *   requestURL: string,
 *   requestMethod: string,
 *   requestHeaders: !Array.<!chromium.DevTools.CacheStorage.Header>,
 *   responseTime: number,
 *   responseStatus: number,
 *   responseStatusText: string,
 *   responseHeaders: !Array.<!chromium.DevTools.CacheStorage.Header>
 * }}
 */
chromium.DevTools.CacheStorage.DataEntry;

/**
 * Cache identifier.
 *
 * cacheId: An opaque unique id of the cache.
 * securityOrigin: Security origin of the cache.
 * cacheName: The name of the cache.
 *
 * @typedef {{
 *   cacheId: string,
 *   securityOrigin: string,
 *   cacheName: string
 * }}
 */
chromium.DevTools.CacheStorage.Cache;

/**
 *
 * @typedef {{
 *   name: string,
 *   value: string
 * }}
 */
chromium.DevTools.CacheStorage.Header;

/**
 * Cached response
 *
 * body: Entry content, base64-encoded.
 *
 * @typedef {{
 *   body: string
 * }}
 */
chromium.DevTools.CacheStorage.CachedResponse;

/**
 * Parameters for the DeleteCache command.
 *
 * cacheId: Id of cache for deletion.
 *
 * @typedef {{
 *   cacheId: string
 * }}
 */
chromium.DevTools.CacheStorage.DeleteCacheParams;

/**
 * Result for the DeleteCache command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.CacheStorage.DeleteCacheResult;

/**
 * Parameters for the DeleteEntry command.
 *
 * cacheId: Id of cache where the entry will be deleted.
 * request: URL spec of the request.
 *
 * @typedef {{
 *   cacheId: string,
 *   request: string
 * }}
 */
chromium.DevTools.CacheStorage.DeleteEntryParams;

/**
 * Result for the DeleteEntry command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.CacheStorage.DeleteEntryResult;

/**
 * Parameters for the RequestCacheNames command.
 *
 * securityOrigin: Security origin.
 *
 * @typedef {{
 *   securityOrigin: string
 * }}
 */
chromium.DevTools.CacheStorage.RequestCacheNamesParams;

/**
 * Result for the RequestCacheNames command.
 *
 * caches: Caches for the security origin.
 *
 * @typedef {{
 *   caches: !Array.<!chromium.DevTools.CacheStorage.Cache>
 * }}
 */
chromium.DevTools.CacheStorage.RequestCacheNamesResult;

/**
 * Parameters for the RequestCachedResponse command.
 *
 * cacheId: Id of cache that contains the enty.
 * requestURL: URL spec of the request.
 *
 * @typedef {{
 *   cacheId: string,
 *   requestURL: string
 * }}
 */
chromium.DevTools.CacheStorage.RequestCachedResponseParams;

/**
 * Result for the RequestCachedResponse command.
 *
 * response: Response read from the cache.
 *
 * @typedef {{
 *   response: !chromium.DevTools.CacheStorage.CachedResponse
 * }}
 */
chromium.DevTools.CacheStorage.RequestCachedResponseResult;

/**
 * Parameters for the RequestEntries command.
 *
 * cacheId: ID of cache to get entries from.
 * skipCount: Number of records to skip.
 * pageSize: Number of records to fetch.
 *
 * @typedef {{
 *   cacheId: string,
 *   skipCount: number,
 *   pageSize: number
 * }}
 */
chromium.DevTools.CacheStorage.RequestEntriesParams;

/**
 * Result for the RequestEntries command.
 *
 * cacheDataEntries: Array of object store data entries.
 * hasMore: If true, there are more entries to fetch in the given range.
 *
 * @typedef {{
 *   cacheDataEntries: !Array.<!chromium.DevTools.CacheStorage.DataEntry>,
 *   hasMore: boolean
 * }}
 */
chromium.DevTools.CacheStorage.RequestEntriesResult;



/**
  * Deletes a cache.
  *
  * @param {chromium.DevTools.CacheStorage.DeleteCacheParams} params
  * @return {!Promise<chromium.DevTools.CacheStorage.DeleteCacheResult>}
  */
chromium.DevTools.ExperimentalCacheStorage.prototype.deleteCache = function(params) {};

/**
  * Deletes a cache entry.
  *
  * @param {chromium.DevTools.CacheStorage.DeleteEntryParams} params
  * @return {!Promise<chromium.DevTools.CacheStorage.DeleteEntryResult>}
  */
chromium.DevTools.ExperimentalCacheStorage.prototype.deleteEntry = function(params) {};

/**
  * Requests cache names.
  *
  * @param {chromium.DevTools.CacheStorage.RequestCacheNamesParams} params
  * @return {!Promise<chromium.DevTools.CacheStorage.RequestCacheNamesResult>}
  */
chromium.DevTools.ExperimentalCacheStorage.prototype.requestCacheNames = function(params) {};

/**
  * Fetches cache entry.
  *
  * @param {chromium.DevTools.CacheStorage.RequestCachedResponseParams} params
  * @return {!Promise<chromium.DevTools.CacheStorage.RequestCachedResponseResult>}
  */
chromium.DevTools.ExperimentalCacheStorage.prototype.requestCachedResponse = function(params) {};

/**
  * Requests data from cache.
  *
  * @param {chromium.DevTools.CacheStorage.RequestEntriesParams} params
  * @return {!Promise<chromium.DevTools.CacheStorage.RequestEntriesResult>}
  */
chromium.DevTools.ExperimentalCacheStorage.prototype.requestEntries = function(params) {};




/**
  * Deletes a cache.
  *
  * @param {chromium.DevTools.CacheStorage.DeleteCacheParams} params
  * @return {!Promise<chromium.DevTools.CacheStorage.DeleteCacheResult>}
  */
chromium.DevTools.CacheStorage.prototype.deleteCache = function(params) {};

/**
  * Deletes a cache entry.
  *
  * @param {chromium.DevTools.CacheStorage.DeleteEntryParams} params
  * @return {!Promise<chromium.DevTools.CacheStorage.DeleteEntryResult>}
  */
chromium.DevTools.CacheStorage.prototype.deleteEntry = function(params) {};

/**
  * Requests cache names.
  *
  * @param {chromium.DevTools.CacheStorage.RequestCacheNamesParams} params
  * @return {!Promise<chromium.DevTools.CacheStorage.RequestCacheNamesResult>}
  */
chromium.DevTools.CacheStorage.prototype.requestCacheNames = function(params) {};

/**
  * Fetches cache entry.
  *
  * @param {chromium.DevTools.CacheStorage.RequestCachedResponseParams} params
  * @return {!Promise<chromium.DevTools.CacheStorage.RequestCachedResponseResult>}
  */
chromium.DevTools.CacheStorage.prototype.requestCachedResponse = function(params) {};

/**
  * Requests data from cache.
  *
  * @param {chromium.DevTools.CacheStorage.RequestEntriesParams} params
  * @return {!Promise<chromium.DevTools.CacheStorage.RequestEntriesResult>}
  */
chromium.DevTools.CacheStorage.prototype.requestEntries = function(params) {};

