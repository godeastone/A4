// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * @fileoverview Generated DevTools bindings for the CacheStorage Domain.
 */
'use strict';

goog.provide('chromium.DevTools.ExperimentalCacheStorage');
goog.provide('chromium.DevTools.CacheStorage');
goog.require('chromium.DevTools.Connection');

goog.scope(function() {
const Connection = chromium.DevTools.Connection;

/**
 * Experimental bindings for the CacheStorage DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalCacheStorage = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;
}

const ExperimentalCacheStorage = chromium.DevTools.ExperimentalCacheStorage;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
ExperimentalCacheStorage.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}

/**
 * Bindings for the CacheStorage DevTools Domain.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.CacheStorage = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;

  /** @type {!ExperimentalCacheStorage} */
  this.experimental = new ExperimentalCacheStorage(connection);
}

const CacheStorage = chromium.DevTools.CacheStorage;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
CacheStorage.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}


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
 *   requestHeaders: !Array.<!CacheStorage.Header>,
 *   responseTime: number,
 *   responseStatus: number,
 *   responseStatusText: string,
 *   responseHeaders: !Array.<!CacheStorage.Header>
 * }}
 */
CacheStorage.DataEntry;

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
CacheStorage.Cache;

/**
 *
 * @typedef {{
 *   name: string,
 *   value: string
 * }}
 */
CacheStorage.Header;

/**
 * Cached response
 *
 * body: Entry content, base64-encoded.
 *
 * @typedef {{
 *   body: string
 * }}
 */
CacheStorage.CachedResponse;

/**
 * Parameters for the DeleteCache command.
 *
 * cacheId: Id of cache for deletion.
 *
 * @typedef {{
 *   cacheId: string
 * }}
 */
CacheStorage.DeleteCacheParams;

/**
 * Result for the DeleteCache command.
 *
 *
 * @typedef {undefined}
 */
CacheStorage.DeleteCacheResult;

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
CacheStorage.DeleteEntryParams;

/**
 * Result for the DeleteEntry command.
 *
 *
 * @typedef {undefined}
 */
CacheStorage.DeleteEntryResult;

/**
 * Parameters for the RequestCacheNames command.
 *
 * securityOrigin: Security origin.
 *
 * @typedef {{
 *   securityOrigin: string
 * }}
 */
CacheStorage.RequestCacheNamesParams;

/**
 * Result for the RequestCacheNames command.
 *
 * caches: Caches for the security origin.
 *
 * @typedef {{
 *   caches: !Array.<!CacheStorage.Cache>
 * }}
 */
CacheStorage.RequestCacheNamesResult;

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
CacheStorage.RequestCachedResponseParams;

/**
 * Result for the RequestCachedResponse command.
 *
 * response: Response read from the cache.
 *
 * @typedef {{
 *   response: !CacheStorage.CachedResponse
 * }}
 */
CacheStorage.RequestCachedResponseResult;

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
CacheStorage.RequestEntriesParams;

/**
 * Result for the RequestEntries command.
 *
 * cacheDataEntries: Array of object store data entries.
 * hasMore: If true, there are more entries to fetch in the given range.
 *
 * @typedef {{
 *   cacheDataEntries: !Array.<!CacheStorage.DataEntry>,
 *   hasMore: boolean
 * }}
 */
CacheStorage.RequestEntriesResult;



/**
  * Deletes a cache.
  *
  * @param {CacheStorage.DeleteCacheParams} params
  * @return {!Promise<CacheStorage.DeleteCacheResult>}
  */
ExperimentalCacheStorage.prototype.deleteCache = function(params) {
  return this.connection_.sendDevToolsMessage('CacheStorage.deleteCache', params);
};

/**
  * Deletes a cache entry.
  *
  * @param {CacheStorage.DeleteEntryParams} params
  * @return {!Promise<CacheStorage.DeleteEntryResult>}
  */
ExperimentalCacheStorage.prototype.deleteEntry = function(params) {
  return this.connection_.sendDevToolsMessage('CacheStorage.deleteEntry', params);
};

/**
  * Requests cache names.
  *
  * @param {CacheStorage.RequestCacheNamesParams} params
  * @return {!Promise<CacheStorage.RequestCacheNamesResult>}
  */
ExperimentalCacheStorage.prototype.requestCacheNames = function(params) {
  return this.connection_.sendDevToolsMessage('CacheStorage.requestCacheNames', params);
};

/**
  * Fetches cache entry.
  *
  * @param {CacheStorage.RequestCachedResponseParams} params
  * @return {!Promise<CacheStorage.RequestCachedResponseResult>}
  */
ExperimentalCacheStorage.prototype.requestCachedResponse = function(params) {
  return this.connection_.sendDevToolsMessage('CacheStorage.requestCachedResponse', params);
};

/**
  * Requests data from cache.
  *
  * @param {CacheStorage.RequestEntriesParams} params
  * @return {!Promise<CacheStorage.RequestEntriesResult>}
  */
ExperimentalCacheStorage.prototype.requestEntries = function(params) {
  return this.connection_.sendDevToolsMessage('CacheStorage.requestEntries', params);
};




/**
  * Deletes a cache.
  *
  * @param {CacheStorage.DeleteCacheParams} params
  * @return {!Promise<CacheStorage.DeleteCacheResult>}
  */
CacheStorage.prototype.deleteCache = function(params) {
  return this.connection_.sendDevToolsMessage('CacheStorage.deleteCache', params);
};

/**
  * Deletes a cache entry.
  *
  * @param {CacheStorage.DeleteEntryParams} params
  * @return {!Promise<CacheStorage.DeleteEntryResult>}
  */
CacheStorage.prototype.deleteEntry = function(params) {
  return this.connection_.sendDevToolsMessage('CacheStorage.deleteEntry', params);
};

/**
  * Requests cache names.
  *
  * @param {CacheStorage.RequestCacheNamesParams} params
  * @return {!Promise<CacheStorage.RequestCacheNamesResult>}
  */
CacheStorage.prototype.requestCacheNames = function(params) {
  return this.connection_.sendDevToolsMessage('CacheStorage.requestCacheNames', params);
};

/**
  * Fetches cache entry.
  *
  * @param {CacheStorage.RequestCachedResponseParams} params
  * @return {!Promise<CacheStorage.RequestCachedResponseResult>}
  */
CacheStorage.prototype.requestCachedResponse = function(params) {
  return this.connection_.sendDevToolsMessage('CacheStorage.requestCachedResponse', params);
};

/**
  * Requests data from cache.
  *
  * @param {CacheStorage.RequestEntriesParams} params
  * @return {!Promise<CacheStorage.RequestEntriesResult>}
  */
CacheStorage.prototype.requestEntries = function(params) {
  return this.connection_.sendDevToolsMessage('CacheStorage.requestEntries', params);
};


});  // goog.scope

