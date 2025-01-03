// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * @fileoverview Generated DevTools bindings for the ApplicationCache Domain.
 */
'use strict';

goog.provide('chromium.DevTools.ExperimentalApplicationCache');
goog.provide('chromium.DevTools.ApplicationCache');
goog.require('chromium.DevTools.Connection');
goog.forwardDeclare('chromium.DevTools.Page.FrameId');

goog.scope(function() {
const Connection = chromium.DevTools.Connection;

/**
 * Experimental bindings for the ApplicationCache DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalApplicationCache = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;
}

const ExperimentalApplicationCache = chromium.DevTools.ExperimentalApplicationCache;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
ExperimentalApplicationCache.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}

/**
 * Bindings for the ApplicationCache DevTools Domain.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ApplicationCache = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;

  /** @type {!ExperimentalApplicationCache} */
  this.experimental = new ExperimentalApplicationCache(connection);
}

const ApplicationCache = chromium.DevTools.ApplicationCache;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
ApplicationCache.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}


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
ApplicationCache.ApplicationCacheResource;

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
 *   resources: !Array.<!ApplicationCache.ApplicationCacheResource>
 * }}
 */
ApplicationCache.ApplicationCache;

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
ApplicationCache.FrameWithManifest;

/**
 * Parameters for the Enable command.
 *
 *
 * @typedef {undefined}
 */
ApplicationCache.EnableParams;

/**
 * Result for the Enable command.
 *
 *
 * @typedef {undefined}
 */
ApplicationCache.EnableResult;

/**
 * Parameters for the GetApplicationCacheForFrame command.
 *
 * frameId: Identifier of the frame containing document whose application cache is retrieved.
 *
 * @typedef {{
 *   frameId: string
 * }}
 */
ApplicationCache.GetApplicationCacheForFrameParams;

/**
 * Result for the GetApplicationCacheForFrame command.
 *
 * applicationCache: Relevant application cache data for the document in given frame.
 *
 * @typedef {{
 *   applicationCache: !ApplicationCache.ApplicationCache
 * }}
 */
ApplicationCache.GetApplicationCacheForFrameResult;

/**
 * Parameters for the GetFramesWithManifests command.
 *
 *
 * @typedef {undefined}
 */
ApplicationCache.GetFramesWithManifestsParams;

/**
 * Result for the GetFramesWithManifests command.
 *
 * frameIds: Array of frame identifiers with manifest urls for each frame containing a document
 *   associated with some application cache.
 *
 * @typedef {{
 *   frameIds: !Array.<!ApplicationCache.FrameWithManifest>
 * }}
 */
ApplicationCache.GetFramesWithManifestsResult;

/**
 * Parameters for the GetManifestForFrame command.
 *
 * frameId: Identifier of the frame containing document whose manifest is retrieved.
 *
 * @typedef {{
 *   frameId: string
 * }}
 */
ApplicationCache.GetManifestForFrameParams;

/**
 * Result for the GetManifestForFrame command.
 *
 * manifestURL: Manifest URL for document in the given frame.
 *
 * @typedef {{
 *   manifestURL: string
 * }}
 */
ApplicationCache.GetManifestForFrameResult;

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
ApplicationCache.ApplicationCacheStatusUpdatedParams;

/**
 * Parameters for the NetworkStateUpdated event.
 *
 *
 * @typedef {{
 *   isNowOnline: boolean
 * }}
 */
ApplicationCache.NetworkStateUpdatedParams;



/**
  * Enables application cache domain notifications.
  *
  * @return {!Promise<ApplicationCache.EnableResult>}
  */
ExperimentalApplicationCache.prototype.enable = function() {
  return this.connection_.sendDevToolsMessage('ApplicationCache.enable', {});
};

/**
  * Returns relevant application cache data for the document in given frame.
  *
  * @param {ApplicationCache.GetApplicationCacheForFrameParams} params
  * @return {!Promise<ApplicationCache.GetApplicationCacheForFrameResult>}
  */
ExperimentalApplicationCache.prototype.getApplicationCacheForFrame = function(params) {
  return this.connection_.sendDevToolsMessage('ApplicationCache.getApplicationCacheForFrame', params);
};

/**
  * Returns array of frame identifiers with manifest urls for each frame containing a document
 * associated with some application cache.
  *
  * @return {!Promise<ApplicationCache.GetFramesWithManifestsResult>}
  */
ExperimentalApplicationCache.prototype.getFramesWithManifests = function() {
  return this.connection_.sendDevToolsMessage('ApplicationCache.getFramesWithManifests', {});
};

/**
  * Returns manifest URL for document in the given frame.
  *
  * @param {ApplicationCache.GetManifestForFrameParams} params
  * @return {!Promise<ApplicationCache.GetManifestForFrameResult>}
  */
ExperimentalApplicationCache.prototype.getManifestForFrame = function(params) {
  return this.connection_.sendDevToolsMessage('ApplicationCache.getManifestForFrame', params);
};


/**
  * @param {!function(!ApplicationCache.ApplicationCacheStatusUpdatedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalApplicationCache.prototype.onApplicationCacheStatusUpdated = function(listener) {
  return this.connection_.addEventListener(
      'ApplicationCache.applicationCacheStatusUpdated', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * @param {!function(!ApplicationCache.NetworkStateUpdatedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalApplicationCache.prototype.onNetworkStateUpdated = function(listener) {
  return this.connection_.addEventListener(
      'ApplicationCache.networkStateUpdated', /** @type {!function(!Object): undefined} */ (listener));
};



/**
  * Enables application cache domain notifications.
  *
  * @return {!Promise<ApplicationCache.EnableResult>}
  */
ApplicationCache.prototype.enable = function() {
  return this.connection_.sendDevToolsMessage('ApplicationCache.enable', {});
};

/**
  * Returns relevant application cache data for the document in given frame.
  *
  * @param {ApplicationCache.GetApplicationCacheForFrameParams} params
  * @return {!Promise<ApplicationCache.GetApplicationCacheForFrameResult>}
  */
ApplicationCache.prototype.getApplicationCacheForFrame = function(params) {
  return this.connection_.sendDevToolsMessage('ApplicationCache.getApplicationCacheForFrame', params);
};

/**
  * Returns array of frame identifiers with manifest urls for each frame containing a document
 * associated with some application cache.
  *
  * @return {!Promise<ApplicationCache.GetFramesWithManifestsResult>}
  */
ApplicationCache.prototype.getFramesWithManifests = function() {
  return this.connection_.sendDevToolsMessage('ApplicationCache.getFramesWithManifests', {});
};

/**
  * Returns manifest URL for document in the given frame.
  *
  * @param {ApplicationCache.GetManifestForFrameParams} params
  * @return {!Promise<ApplicationCache.GetManifestForFrameResult>}
  */
ApplicationCache.prototype.getManifestForFrame = function(params) {
  return this.connection_.sendDevToolsMessage('ApplicationCache.getManifestForFrame', params);
};


/**
  * @param {!function(!ApplicationCache.ApplicationCacheStatusUpdatedParams)} listener
  * @return {number} The id of this event listener.
  */
ApplicationCache.prototype.onApplicationCacheStatusUpdated = function(listener) {
  return this.connection_.addEventListener(
      'ApplicationCache.applicationCacheStatusUpdated', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * @param {!function(!ApplicationCache.NetworkStateUpdatedParams)} listener
  * @return {number} The id of this event listener.
  */
ApplicationCache.prototype.onNetworkStateUpdated = function(listener) {
  return this.connection_.addEventListener(
      'ApplicationCache.networkStateUpdated', /** @type {!function(!Object): undefined} */ (listener));
};

});  // goog.scope

