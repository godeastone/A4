// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * Experimental bindings for the ApplicationCache DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalApplicationCache = function(connection) {};

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.ExperimentalApplicationCache.prototype.removeEventListener = function(id) {};

/**
 * Bindings for the ApplicationCache DevTools Domain.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ApplicationCache = function(connection) {};

/** @type {!chromium.DevTools.ExperimentalApplicationCache} */
chromium.DevTools.ApplicationCache.prototype.experimental;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.ApplicationCache.prototype.removeEventListener = function(id) {};


/**
 * Detailed application cache resource information.
 *
 * url: Resource url.
 * size: Resource size.
 * type: Resource type.
 *
 * @typedef {{
 *   url: string,
 *   size: number,
 *   type: string
 * }}
 */
chromium.DevTools.ApplicationCache.ApplicationCacheResource;

/**
 * Detailed application cache information.
 *
 * manifestURL: Manifest URL.
 * size: Application cache size.
 * creationTime: Application cache creation time.
 * updateTime: Application cache update time.
 * resources: Application cache resources.
 *
 * @typedef {{
 *   manifestURL: string,
 *   size: number,
 *   creationTime: number,
 *   updateTime: number,
 *   resources: !Array.<!chromium.DevTools.ApplicationCache.ApplicationCacheResource>
 * }}
 */
chromium.DevTools.ApplicationCache.ApplicationCache;

/**
 * Frame identifier - manifest URL pair.
 *
 * frameId: Frame identifier.
 * manifestURL: Manifest URL.
 * status: Application cache status.
 *
 * @typedef {{
 *   frameId: string,
 *   manifestURL: string,
 *   status: number
 * }}
 */
chromium.DevTools.ApplicationCache.FrameWithManifest;

/**
 * Parameters for the Enable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.ApplicationCache.EnableParams;

/**
 * Result for the Enable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.ApplicationCache.EnableResult;

/**
 * Parameters for the GetApplicationCacheForFrame command.
 *
 * frameId: Identifier of the frame containing document whose application cache is retrieved.
 *
 * @typedef {{
 *   frameId: string
 * }}
 */
chromium.DevTools.ApplicationCache.GetApplicationCacheForFrameParams;

/**
 * Result for the GetApplicationCacheForFrame command.
 *
 * applicationCache: Relevant application cache data for the document in given frame.
 *
 * @typedef {{
 *   applicationCache: !chromium.DevTools.ApplicationCache.ApplicationCache
 * }}
 */
chromium.DevTools.ApplicationCache.GetApplicationCacheForFrameResult;

/**
 * Parameters for the GetFramesWithManifests command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.ApplicationCache.GetFramesWithManifestsParams;

/**
 * Result for the GetFramesWithManifests command.
 *
 * frameIds: Array of frame identifiers with manifest urls for each frame containing a document
 *    associated with some application cache.
 *
 * @typedef {{
 *   frameIds: !Array.<!chromium.DevTools.ApplicationCache.FrameWithManifest>
 * }}
 */
chromium.DevTools.ApplicationCache.GetFramesWithManifestsResult;

/**
 * Parameters for the GetManifestForFrame command.
 *
 * frameId: Identifier of the frame containing document whose manifest is retrieved.
 *
 * @typedef {{
 *   frameId: string
 * }}
 */
chromium.DevTools.ApplicationCache.GetManifestForFrameParams;

/**
 * Result for the GetManifestForFrame command.
 *
 * manifestURL: Manifest URL for document in the given frame.
 *
 * @typedef {{
 *   manifestURL: string
 * }}
 */
chromium.DevTools.ApplicationCache.GetManifestForFrameResult;

/**
 * Parameters for the ApplicationCacheStatusUpdated event.
 *
 * frameId: Identifier of the frame containing document whose application cache updated status.
 * manifestURL: Manifest URL.
 * status: Updated application cache status.
 *
 * @typedef {{
 *   frameId: string,
 *   manifestURL: string,
 *   status: number
 * }}
 */
chromium.DevTools.ApplicationCache.ApplicationCacheStatusUpdatedParams;

/**
 * Parameters for the NetworkStateUpdated event.
 *
 *
 * @typedef {{
 *   isNowOnline: boolean
 * }}
 */
chromium.DevTools.ApplicationCache.NetworkStateUpdatedParams;



/**
  * Enables application cache domain notifications.
  *
  * @return {!Promise<chromium.DevTools.ApplicationCache.EnableResult>}
  */
chromium.DevTools.ExperimentalApplicationCache.prototype.enable = function() {};

/**
  * Returns relevant application cache data for the document in given frame.
  *
  * @param {chromium.DevTools.ApplicationCache.GetApplicationCacheForFrameParams} params
  * @return {!Promise<chromium.DevTools.ApplicationCache.GetApplicationCacheForFrameResult>}
  */
chromium.DevTools.ExperimentalApplicationCache.prototype.getApplicationCacheForFrame = function(params) {};

/**
  * Returns array of frame identifiers with manifest urls for each frame containing a document
 * associated with some application cache.
  *
  * @return {!Promise<chromium.DevTools.ApplicationCache.GetFramesWithManifestsResult>}
  */
chromium.DevTools.ExperimentalApplicationCache.prototype.getFramesWithManifests = function() {};

/**
  * Returns manifest URL for document in the given frame.
  *
  * @param {chromium.DevTools.ApplicationCache.GetManifestForFrameParams} params
  * @return {!Promise<chromium.DevTools.ApplicationCache.GetManifestForFrameResult>}
  */
chromium.DevTools.ExperimentalApplicationCache.prototype.getManifestForFrame = function(params) {};


/**
  * @param {!function(!chromium.DevTools.ApplicationCache.ApplicationCacheStatusUpdatedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalApplicationCache.prototype.onApplicationCacheStatusUpdated = function(listener) {};

/**
  * @param {!function(!chromium.DevTools.ApplicationCache.NetworkStateUpdatedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalApplicationCache.prototype.onNetworkStateUpdated = function(listener) {};



/**
  * Enables application cache domain notifications.
  *
  * @return {!Promise<chromium.DevTools.ApplicationCache.EnableResult>}
  */
chromium.DevTools.ApplicationCache.prototype.enable = function() {};

/**
  * Returns relevant application cache data for the document in given frame.
  *
  * @param {chromium.DevTools.ApplicationCache.GetApplicationCacheForFrameParams} params
  * @return {!Promise<chromium.DevTools.ApplicationCache.GetApplicationCacheForFrameResult>}
  */
chromium.DevTools.ApplicationCache.prototype.getApplicationCacheForFrame = function(params) {};

/**
  * Returns array of frame identifiers with manifest urls for each frame containing a document
 * associated with some application cache.
  *
  * @return {!Promise<chromium.DevTools.ApplicationCache.GetFramesWithManifestsResult>}
  */
chromium.DevTools.ApplicationCache.prototype.getFramesWithManifests = function() {};

/**
  * Returns manifest URL for document in the given frame.
  *
  * @param {chromium.DevTools.ApplicationCache.GetManifestForFrameParams} params
  * @return {!Promise<chromium.DevTools.ApplicationCache.GetManifestForFrameResult>}
  */
chromium.DevTools.ApplicationCache.prototype.getManifestForFrame = function(params) {};


/**
  * @param {!function(!chromium.DevTools.ApplicationCache.ApplicationCacheStatusUpdatedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ApplicationCache.prototype.onApplicationCacheStatusUpdated = function(listener) {};

/**
  * @param {!function(!chromium.DevTools.ApplicationCache.NetworkStateUpdatedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ApplicationCache.prototype.onNetworkStateUpdated = function(listener) {};
